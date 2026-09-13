
#include "PyCThostFtdcSettlementInfoConfirmField.h"

///投资者结算结果确认信息

static int PyCThostFtdcSettlementInfoConfirmFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "ConfirmDate", "ConfirmTime", "SettlementID", "AccountID", "CurrencyID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcSettlementInfoConfirmField_BrokerID = NULL;
    Py_ssize_t CThostFtdcSettlementInfoConfirmField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcSettlementInfoConfirmField_InvestorID = NULL;
    Py_ssize_t CThostFtdcSettlementInfoConfirmField_InvestorID_length = 0;

    /// 确认日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcSettlementInfoConfirmField_ConfirmDate = NULL;
    Py_ssize_t CThostFtdcSettlementInfoConfirmField_ConfirmDate_length = 0;

    /// 确认时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcSettlementInfoConfirmField_ConfirmTime = NULL;
    Py_ssize_t CThostFtdcSettlementInfoConfirmField_ConfirmTime_length = 0;

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    int CThostFtdcSettlementInfoConfirmField_SettlementID = 0;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcSettlementInfoConfirmField_AccountID = NULL;
    Py_ssize_t CThostFtdcSettlementInfoConfirmField_AccountID_length = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcSettlementInfoConfirmField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcSettlementInfoConfirmField_CurrencyID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#iy#y#", (char **)kwlist
        , &CThostFtdcSettlementInfoConfirmField_BrokerID, &CThostFtdcSettlementInfoConfirmField_BrokerID_length
        , &CThostFtdcSettlementInfoConfirmField_InvestorID, &CThostFtdcSettlementInfoConfirmField_InvestorID_length
        , &CThostFtdcSettlementInfoConfirmField_ConfirmDate, &CThostFtdcSettlementInfoConfirmField_ConfirmDate_length
        , &CThostFtdcSettlementInfoConfirmField_ConfirmTime, &CThostFtdcSettlementInfoConfirmField_ConfirmTime_length
        , &CThostFtdcSettlementInfoConfirmField_SettlementID
        , &CThostFtdcSettlementInfoConfirmField_AccountID, &CThostFtdcSettlementInfoConfirmField_AccountID_length
        , &CThostFtdcSettlementInfoConfirmField_CurrencyID, &CThostFtdcSettlementInfoConfirmField_CurrencyID_length
    )) {
        return -1;
    }

    PyCThostFtdcSettlementInfoConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSettlementInfoConfirmFieldData>(self);
    CThostFtdcSettlementInfoConfirmField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcSettlementInfoConfirmField_BrokerID != NULL ) {
        if(CThostFtdcSettlementInfoConfirmField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcSettlementInfoConfirmField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcSettlementInfoConfirmField_BrokerID, CThostFtdcSettlementInfoConfirmField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcSettlementInfoConfirmField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcSettlementInfoConfirmField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcSettlementInfoConfirmField_InvestorID != NULL ) {
        if(CThostFtdcSettlementInfoConfirmField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcSettlementInfoConfirmField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcSettlementInfoConfirmField_InvestorID, CThostFtdcSettlementInfoConfirmField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcSettlementInfoConfirmField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcSettlementInfoConfirmField_InvestorID = NULL;
    }

    /// 确认日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcSettlementInfoConfirmField_ConfirmDate != NULL ) {
        if(CThostFtdcSettlementInfoConfirmField_ConfirmDate_length >= (Py_ssize_t)sizeof(data->ConfirmDate)) {
            PyErr_Format(PyExc_ValueError, "ConfirmDate too long: length=%zd (max allowed is 8)", CThostFtdcSettlementInfoConfirmField_ConfirmDate_length);
            return -1;
        }
        // memset(data->ConfirmDate, 0, sizeof(data->ConfirmDate));
        // memcpy(data->ConfirmDate, CThostFtdcSettlementInfoConfirmField_ConfirmDate, CThostFtdcSettlementInfoConfirmField_ConfirmDate_length);
        strncpy(data->ConfirmDate, CThostFtdcSettlementInfoConfirmField_ConfirmDate, sizeof(data->ConfirmDate));
        CThostFtdcSettlementInfoConfirmField_ConfirmDate = NULL;
    }

    /// 确认时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcSettlementInfoConfirmField_ConfirmTime != NULL ) {
        if(CThostFtdcSettlementInfoConfirmField_ConfirmTime_length >= (Py_ssize_t)sizeof(data->ConfirmTime)) {
            PyErr_Format(PyExc_ValueError, "ConfirmTime too long: length=%zd (max allowed is 8)", CThostFtdcSettlementInfoConfirmField_ConfirmTime_length);
            return -1;
        }
        // memset(data->ConfirmTime, 0, sizeof(data->ConfirmTime));
        // memcpy(data->ConfirmTime, CThostFtdcSettlementInfoConfirmField_ConfirmTime, CThostFtdcSettlementInfoConfirmField_ConfirmTime_length);
        strncpy(data->ConfirmTime, CThostFtdcSettlementInfoConfirmField_ConfirmTime, sizeof(data->ConfirmTime));
        CThostFtdcSettlementInfoConfirmField_ConfirmTime = NULL;
    }

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    data->SettlementID = CThostFtdcSettlementInfoConfirmField_SettlementID;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcSettlementInfoConfirmField_AccountID != NULL ) {
        if(CThostFtdcSettlementInfoConfirmField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcSettlementInfoConfirmField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcSettlementInfoConfirmField_AccountID, CThostFtdcSettlementInfoConfirmField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcSettlementInfoConfirmField_AccountID, sizeof(data->AccountID));
        CThostFtdcSettlementInfoConfirmField_AccountID = NULL;
    }

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcSettlementInfoConfirmField_CurrencyID != NULL ) {
        if(CThostFtdcSettlementInfoConfirmField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcSettlementInfoConfirmField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcSettlementInfoConfirmField_CurrencyID, CThostFtdcSettlementInfoConfirmField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcSettlementInfoConfirmField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcSettlementInfoConfirmField_CurrencyID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSettlementInfoConfirmFieldType_repr(PyObject *self) {

    PyCThostFtdcSettlementInfoConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSettlementInfoConfirmFieldData>(self);
    CThostFtdcSettlementInfoConfirmField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "ConfirmDate", data->ConfirmDate//, (Py_ssize_t)sizeof(data->ConfirmDate)
        , "ConfirmTime", data->ConfirmTime//, (Py_ssize_t)sizeof(data->ConfirmTime)
        , "SettlementID", data->SettlementID
        , "AccountID", data->AccountID//, (Py_ssize_t)sizeof(data->AccountID)
        , "CurrencyID", data->CurrencyID//, (Py_ssize_t)sizeof(data->CurrencyID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSettlementInfoConfirmField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSettlementInfoConfirmField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcSettlementInfoConfirmFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcSettlementInfoConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSettlementInfoConfirmFieldData>(self);
    CThostFtdcSettlementInfoConfirmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcSettlementInfoConfirmFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSettlementInfoConfirmField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSettlementInfoConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSettlementInfoConfirmFieldData>(self);
    CThostFtdcSettlementInfoConfirmField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcSettlementInfoConfirmFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcSettlementInfoConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSettlementInfoConfirmFieldData>(self);
    CThostFtdcSettlementInfoConfirmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcSettlementInfoConfirmFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSettlementInfoConfirmField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSettlementInfoConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSettlementInfoConfirmFieldData>(self);
    CThostFtdcSettlementInfoConfirmField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 确认日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcSettlementInfoConfirmFieldType_get_ConfirmDate(PyObject *self, void *closure) {
    PyCThostFtdcSettlementInfoConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSettlementInfoConfirmFieldData>(self);
    CThostFtdcSettlementInfoConfirmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ConfirmDate, (Py_ssize_t)sizeof(data->ConfirmDate));
    return PyBytes_FromString(data->ConfirmDate);
}

static int PyCThostFtdcSettlementInfoConfirmFieldType_set_ConfirmDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ConfirmDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSettlementInfoConfirmField::ConfirmDate)) {
        PyErr_SetString(PyExc_ValueError, "ConfirmDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSettlementInfoConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSettlementInfoConfirmFieldData>(self);
    CThostFtdcSettlementInfoConfirmField *data = &(extra->data);
    // memset(data->ConfirmDate, 0, sizeof(data->ConfirmDate));
    // memcpy(data->ConfirmDate, buf, len);
    strncpy(data->ConfirmDate, buf, sizeof(data->ConfirmDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 确认时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcSettlementInfoConfirmFieldType_get_ConfirmTime(PyObject *self, void *closure) {
    PyCThostFtdcSettlementInfoConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSettlementInfoConfirmFieldData>(self);
    CThostFtdcSettlementInfoConfirmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ConfirmTime, (Py_ssize_t)sizeof(data->ConfirmTime));
    return PyBytes_FromString(data->ConfirmTime);
}

static int PyCThostFtdcSettlementInfoConfirmFieldType_set_ConfirmTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ConfirmTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSettlementInfoConfirmField::ConfirmTime)) {
        PyErr_SetString(PyExc_ValueError, "ConfirmTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSettlementInfoConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSettlementInfoConfirmFieldData>(self);
    CThostFtdcSettlementInfoConfirmField *data = &(extra->data);
    // memset(data->ConfirmTime, 0, sizeof(data->ConfirmTime));
    // memcpy(data->ConfirmTime, buf, len);
    strncpy(data->ConfirmTime, buf, sizeof(data->ConfirmTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcSettlementInfoConfirmFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcSettlementInfoConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSettlementInfoConfirmFieldData>(self);
    CThostFtdcSettlementInfoConfirmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcSettlementInfoConfirmFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSettlementInfoConfirmField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSettlementInfoConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSettlementInfoConfirmFieldData>(self);
    CThostFtdcSettlementInfoConfirmField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcSettlementInfoConfirmFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcSettlementInfoConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSettlementInfoConfirmFieldData>(self);
    CThostFtdcSettlementInfoConfirmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcSettlementInfoConfirmFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSettlementInfoConfirmField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSettlementInfoConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSettlementInfoConfirmFieldData>(self);
    CThostFtdcSettlementInfoConfirmField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSettlementInfoConfirmFieldType_members[] = {
    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    {
        .name = "SettlementID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSettlementInfoConfirmFieldData, data.SettlementID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("结算编号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSettlementInfoConfirmFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcSettlementInfoConfirmFieldType_get_BrokerID,
    .set = PyCThostFtdcSettlementInfoConfirmFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcSettlementInfoConfirmFieldType_get_InvestorID,
    .set = PyCThostFtdcSettlementInfoConfirmFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 确认日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "ConfirmDate",
    .get = PyCThostFtdcSettlementInfoConfirmFieldType_get_ConfirmDate,
    .set = PyCThostFtdcSettlementInfoConfirmFieldType_set_ConfirmDate,
    .doc = PyDoc_STR("确认日期"),
    },
    /// 确认时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "ConfirmTime",
    .get = PyCThostFtdcSettlementInfoConfirmFieldType_get_ConfirmTime,
    .set = PyCThostFtdcSettlementInfoConfirmFieldType_set_ConfirmTime,
    .doc = PyDoc_STR("确认时间"),
    },
    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcSettlementInfoConfirmFieldType_get_AccountID,
    .set = PyCThostFtdcSettlementInfoConfirmFieldType_set_AccountID,
    .doc = PyDoc_STR("投资者帐号"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcSettlementInfoConfirmFieldType_get_CurrencyID,
    .set = PyCThostFtdcSettlementInfoConfirmFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSettlementInfoConfirmFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSettlementInfoConfirmField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("投资者结算结果确认信息")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSettlementInfoConfirmFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSettlementInfoConfirmFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSettlementInfoConfirmFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSettlementInfoConfirmFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSettlementInfoConfirmFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSettlementInfoConfirmFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("投资者结算结果确认信息")},
    {Py_tp_members, PyCThostFtdcSettlementInfoConfirmFieldType_members},
    {Py_tp_getset, PyCThostFtdcSettlementInfoConfirmFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSettlementInfoConfirmFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSettlementInfoConfirmFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSettlementInfoConfirmFieldType_spec = {
    .name = "PyCTP.CThostFtdcSettlementInfoConfirmField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSettlementInfoConfirmFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSettlementInfoConfirmFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSettlementInfoConfirmFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSettlementInfoConfirmFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSettlementInfoConfirmFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSettlementInfoConfirmFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSettlementInfoConfirmFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSettlementInfoConfirmFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSettlementInfoConfirmField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSettlementInfoConfirmField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}