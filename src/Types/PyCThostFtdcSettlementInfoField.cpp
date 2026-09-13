
#include "PyCThostFtdcSettlementInfoField.h"

///投资者结算结果

static int PyCThostFtdcSettlementInfoFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "SettlementID", "BrokerID", "InvestorID", "SequenceNo", "Content", "AccountID", "CurrencyID", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcSettlementInfoField_TradingDay = NULL;
    Py_ssize_t CThostFtdcSettlementInfoField_TradingDay_length = 0;

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    int CThostFtdcSettlementInfoField_SettlementID = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcSettlementInfoField_BrokerID = NULL;
    Py_ssize_t CThostFtdcSettlementInfoField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcSettlementInfoField_InvestorID = NULL;
    Py_ssize_t CThostFtdcSettlementInfoField_InvestorID_length = 0;

    /// 序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcSettlementInfoField_SequenceNo = 0;

    /// 消息正文
    /// typedef char TThostFtdcContentType[501]
    char *CThostFtdcSettlementInfoField_Content = NULL;
    Py_ssize_t CThostFtdcSettlementInfoField_Content_length = 0;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcSettlementInfoField_AccountID = NULL;
    Py_ssize_t CThostFtdcSettlementInfoField_AccountID_length = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcSettlementInfoField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcSettlementInfoField_CurrencyID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#iy#y#iy#y#y#", (char **)kwlist
        , &CThostFtdcSettlementInfoField_TradingDay, &CThostFtdcSettlementInfoField_TradingDay_length
        , &CThostFtdcSettlementInfoField_SettlementID
        , &CThostFtdcSettlementInfoField_BrokerID, &CThostFtdcSettlementInfoField_BrokerID_length
        , &CThostFtdcSettlementInfoField_InvestorID, &CThostFtdcSettlementInfoField_InvestorID_length
        , &CThostFtdcSettlementInfoField_SequenceNo
        , &CThostFtdcSettlementInfoField_Content, &CThostFtdcSettlementInfoField_Content_length
        , &CThostFtdcSettlementInfoField_AccountID, &CThostFtdcSettlementInfoField_AccountID_length
        , &CThostFtdcSettlementInfoField_CurrencyID, &CThostFtdcSettlementInfoField_CurrencyID_length
    )) {
        return -1;
    }

    PyCThostFtdcSettlementInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSettlementInfoFieldData>(self);
    CThostFtdcSettlementInfoField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcSettlementInfoField_TradingDay != NULL ) {
        if(CThostFtdcSettlementInfoField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcSettlementInfoField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcSettlementInfoField_TradingDay, CThostFtdcSettlementInfoField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcSettlementInfoField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcSettlementInfoField_TradingDay = NULL;
    }

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    data->SettlementID = CThostFtdcSettlementInfoField_SettlementID;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcSettlementInfoField_BrokerID != NULL ) {
        if(CThostFtdcSettlementInfoField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcSettlementInfoField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcSettlementInfoField_BrokerID, CThostFtdcSettlementInfoField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcSettlementInfoField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcSettlementInfoField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcSettlementInfoField_InvestorID != NULL ) {
        if(CThostFtdcSettlementInfoField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcSettlementInfoField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcSettlementInfoField_InvestorID, CThostFtdcSettlementInfoField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcSettlementInfoField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcSettlementInfoField_InvestorID = NULL;
    }

    /// 序号
    /// typedef int TThostFtdcSequenceNoType
    data->SequenceNo = CThostFtdcSettlementInfoField_SequenceNo;

    /// 消息正文
    /// typedef char TThostFtdcContentType[501]
    if( CThostFtdcSettlementInfoField_Content != NULL ) {
        if(CThostFtdcSettlementInfoField_Content_length >= (Py_ssize_t)sizeof(data->Content)) {
            PyErr_Format(PyExc_ValueError, "Content too long: length=%zd (max allowed is 500)", CThostFtdcSettlementInfoField_Content_length);
            return -1;
        }
        // memset(data->Content, 0, sizeof(data->Content));
        // memcpy(data->Content, CThostFtdcSettlementInfoField_Content, CThostFtdcSettlementInfoField_Content_length);
        strncpy(data->Content, CThostFtdcSettlementInfoField_Content, sizeof(data->Content));
        CThostFtdcSettlementInfoField_Content = NULL;
    }

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcSettlementInfoField_AccountID != NULL ) {
        if(CThostFtdcSettlementInfoField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcSettlementInfoField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcSettlementInfoField_AccountID, CThostFtdcSettlementInfoField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcSettlementInfoField_AccountID, sizeof(data->AccountID));
        CThostFtdcSettlementInfoField_AccountID = NULL;
    }

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcSettlementInfoField_CurrencyID != NULL ) {
        if(CThostFtdcSettlementInfoField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcSettlementInfoField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcSettlementInfoField_CurrencyID, CThostFtdcSettlementInfoField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcSettlementInfoField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcSettlementInfoField_CurrencyID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSettlementInfoFieldType_repr(PyObject *self) {

    PyCThostFtdcSettlementInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSettlementInfoFieldData>(self);
    CThostFtdcSettlementInfoField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:i,s:y,s:y,s:i,s:y,s:y,s:y}"
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "SettlementID", data->SettlementID
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "SequenceNo", data->SequenceNo
        , "Content", data->Content//, (Py_ssize_t)sizeof(data->Content)
        , "AccountID", data->AccountID//, (Py_ssize_t)sizeof(data->AccountID)
        , "CurrencyID", data->CurrencyID//, (Py_ssize_t)sizeof(data->CurrencyID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSettlementInfoField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSettlementInfoField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcSettlementInfoFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcSettlementInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSettlementInfoFieldData>(self);
    CThostFtdcSettlementInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcSettlementInfoFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSettlementInfoField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSettlementInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSettlementInfoFieldData>(self);
    CThostFtdcSettlementInfoField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcSettlementInfoFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcSettlementInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSettlementInfoFieldData>(self);
    CThostFtdcSettlementInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcSettlementInfoFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSettlementInfoField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSettlementInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSettlementInfoFieldData>(self);
    CThostFtdcSettlementInfoField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcSettlementInfoFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcSettlementInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSettlementInfoFieldData>(self);
    CThostFtdcSettlementInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcSettlementInfoFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSettlementInfoField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSettlementInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSettlementInfoFieldData>(self);
    CThostFtdcSettlementInfoField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 消息正文
/// typedef char TThostFtdcContentType[501]
static PyObject *PyCThostFtdcSettlementInfoFieldType_get_Content(PyObject *self, void *closure) {
    PyCThostFtdcSettlementInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSettlementInfoFieldData>(self);
    CThostFtdcSettlementInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Content, (Py_ssize_t)sizeof(data->Content));
    return PyBytes_FromString(data->Content);
}

static int PyCThostFtdcSettlementInfoFieldType_set_Content(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Content Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSettlementInfoField::Content)) {
        PyErr_SetString(PyExc_ValueError, "Content must be less than 500 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSettlementInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSettlementInfoFieldData>(self);
    CThostFtdcSettlementInfoField *data = &(extra->data);
    // memset(data->Content, 0, sizeof(data->Content));
    // memcpy(data->Content, buf, len);
    strncpy(data->Content, buf, sizeof(data->Content));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcSettlementInfoFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcSettlementInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSettlementInfoFieldData>(self);
    CThostFtdcSettlementInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcSettlementInfoFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSettlementInfoField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSettlementInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSettlementInfoFieldData>(self);
    CThostFtdcSettlementInfoField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcSettlementInfoFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcSettlementInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSettlementInfoFieldData>(self);
    CThostFtdcSettlementInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcSettlementInfoFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSettlementInfoField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSettlementInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSettlementInfoFieldData>(self);
    CThostFtdcSettlementInfoField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSettlementInfoFieldType_members[] = {
    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    {
        .name = "SettlementID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSettlementInfoFieldData, data.SettlementID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("结算编号")
    },
    /// 序号
    /// typedef int TThostFtdcSequenceNoType
    {
        .name = "SequenceNo",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSettlementInfoFieldData, data.SequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("序号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSettlementInfoFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcSettlementInfoFieldType_get_TradingDay,
    .set = PyCThostFtdcSettlementInfoFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcSettlementInfoFieldType_get_BrokerID,
    .set = PyCThostFtdcSettlementInfoFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcSettlementInfoFieldType_get_InvestorID,
    .set = PyCThostFtdcSettlementInfoFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 消息正文
    /// typedef char TThostFtdcContentType[501]
    {
    .name = "Content",
    .get = PyCThostFtdcSettlementInfoFieldType_get_Content,
    .set = PyCThostFtdcSettlementInfoFieldType_set_Content,
    .doc = PyDoc_STR("消息正文"),
    },
    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcSettlementInfoFieldType_get_AccountID,
    .set = PyCThostFtdcSettlementInfoFieldType_set_AccountID,
    .doc = PyDoc_STR("投资者帐号"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcSettlementInfoFieldType_get_CurrencyID,
    .set = PyCThostFtdcSettlementInfoFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSettlementInfoFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSettlementInfoField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("投资者结算结果")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSettlementInfoFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSettlementInfoFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSettlementInfoFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSettlementInfoFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSettlementInfoFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSettlementInfoFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("投资者结算结果")},
    {Py_tp_members, PyCThostFtdcSettlementInfoFieldType_members},
    {Py_tp_getset, PyCThostFtdcSettlementInfoFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSettlementInfoFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSettlementInfoFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSettlementInfoFieldType_spec = {
    .name = "PyCTP.CThostFtdcSettlementInfoField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSettlementInfoFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSettlementInfoFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSettlementInfoFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSettlementInfoFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSettlementInfoFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSettlementInfoFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSettlementInfoFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSettlementInfoFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSettlementInfoField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSettlementInfoField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}