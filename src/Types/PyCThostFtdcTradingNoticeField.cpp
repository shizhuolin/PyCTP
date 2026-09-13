
#include "PyCThostFtdcTradingNoticeField.h"

///用户事件通知

static int PyCThostFtdcTradingNoticeFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorRange", "InvestorID", "SequenceSeries", "UserID", "SendTime", "SequenceNo", "FieldContent", "InvestUnitID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcTradingNoticeField_BrokerID = NULL;
    Py_ssize_t CThostFtdcTradingNoticeField_BrokerID_length = 0;

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    char CThostFtdcTradingNoticeField_InvestorRange = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcTradingNoticeField_InvestorID = NULL;
    Py_ssize_t CThostFtdcTradingNoticeField_InvestorID_length = 0;

    /// 序列系列号
    /// typedef short TThostFtdcSequenceSeriesType
    short CThostFtdcTradingNoticeField_SequenceSeries = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcTradingNoticeField_UserID = NULL;
    Py_ssize_t CThostFtdcTradingNoticeField_UserID_length = 0;

    /// 发送时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcTradingNoticeField_SendTime = NULL;
    Py_ssize_t CThostFtdcTradingNoticeField_SendTime_length = 0;

    /// 序列号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcTradingNoticeField_SequenceNo = 0;

    /// 消息正文
    /// typedef char TThostFtdcContentType[501]
    char *CThostFtdcTradingNoticeField_FieldContent = NULL;
    Py_ssize_t CThostFtdcTradingNoticeField_FieldContent_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcTradingNoticeField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcTradingNoticeField_InvestUnitID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#hy#y#iy#y#", (char **)kwlist
        , &CThostFtdcTradingNoticeField_BrokerID, &CThostFtdcTradingNoticeField_BrokerID_length
        , &CThostFtdcTradingNoticeField_InvestorRange
        , &CThostFtdcTradingNoticeField_InvestorID, &CThostFtdcTradingNoticeField_InvestorID_length
        , &CThostFtdcTradingNoticeField_SequenceSeries
        , &CThostFtdcTradingNoticeField_UserID, &CThostFtdcTradingNoticeField_UserID_length
        , &CThostFtdcTradingNoticeField_SendTime, &CThostFtdcTradingNoticeField_SendTime_length
        , &CThostFtdcTradingNoticeField_SequenceNo
        , &CThostFtdcTradingNoticeField_FieldContent, &CThostFtdcTradingNoticeField_FieldContent_length
        , &CThostFtdcTradingNoticeField_InvestUnitID, &CThostFtdcTradingNoticeField_InvestUnitID_length
    )) {
        return -1;
    }

    PyCThostFtdcTradingNoticeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingNoticeFieldData>(self);
    CThostFtdcTradingNoticeField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcTradingNoticeField_BrokerID != NULL ) {
        if(CThostFtdcTradingNoticeField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcTradingNoticeField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcTradingNoticeField_BrokerID, CThostFtdcTradingNoticeField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcTradingNoticeField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcTradingNoticeField_BrokerID = NULL;
    }

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    data->InvestorRange = CThostFtdcTradingNoticeField_InvestorRange;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcTradingNoticeField_InvestorID != NULL ) {
        if(CThostFtdcTradingNoticeField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcTradingNoticeField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcTradingNoticeField_InvestorID, CThostFtdcTradingNoticeField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcTradingNoticeField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcTradingNoticeField_InvestorID = NULL;
    }

    /// 序列系列号
    /// typedef short TThostFtdcSequenceSeriesType
    data->SequenceSeries = CThostFtdcTradingNoticeField_SequenceSeries;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcTradingNoticeField_UserID != NULL ) {
        if(CThostFtdcTradingNoticeField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcTradingNoticeField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcTradingNoticeField_UserID, CThostFtdcTradingNoticeField_UserID_length);
        strncpy(data->UserID, CThostFtdcTradingNoticeField_UserID, sizeof(data->UserID));
        CThostFtdcTradingNoticeField_UserID = NULL;
    }

    /// 发送时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcTradingNoticeField_SendTime != NULL ) {
        if(CThostFtdcTradingNoticeField_SendTime_length >= (Py_ssize_t)sizeof(data->SendTime)) {
            PyErr_Format(PyExc_ValueError, "SendTime too long: length=%zd (max allowed is 8)", CThostFtdcTradingNoticeField_SendTime_length);
            return -1;
        }
        // memset(data->SendTime, 0, sizeof(data->SendTime));
        // memcpy(data->SendTime, CThostFtdcTradingNoticeField_SendTime, CThostFtdcTradingNoticeField_SendTime_length);
        strncpy(data->SendTime, CThostFtdcTradingNoticeField_SendTime, sizeof(data->SendTime));
        CThostFtdcTradingNoticeField_SendTime = NULL;
    }

    /// 序列号
    /// typedef int TThostFtdcSequenceNoType
    data->SequenceNo = CThostFtdcTradingNoticeField_SequenceNo;

    /// 消息正文
    /// typedef char TThostFtdcContentType[501]
    if( CThostFtdcTradingNoticeField_FieldContent != NULL ) {
        if(CThostFtdcTradingNoticeField_FieldContent_length >= (Py_ssize_t)sizeof(data->FieldContent)) {
            PyErr_Format(PyExc_ValueError, "FieldContent too long: length=%zd (max allowed is 500)", CThostFtdcTradingNoticeField_FieldContent_length);
            return -1;
        }
        // memset(data->FieldContent, 0, sizeof(data->FieldContent));
        // memcpy(data->FieldContent, CThostFtdcTradingNoticeField_FieldContent, CThostFtdcTradingNoticeField_FieldContent_length);
        strncpy(data->FieldContent, CThostFtdcTradingNoticeField_FieldContent, sizeof(data->FieldContent));
        CThostFtdcTradingNoticeField_FieldContent = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcTradingNoticeField_InvestUnitID != NULL ) {
        if(CThostFtdcTradingNoticeField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcTradingNoticeField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcTradingNoticeField_InvestUnitID, CThostFtdcTradingNoticeField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcTradingNoticeField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcTradingNoticeField_InvestUnitID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcTradingNoticeFieldType_repr(PyObject *self) {

    PyCThostFtdcTradingNoticeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingNoticeFieldData>(self);
    CThostFtdcTradingNoticeField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:c,s:y,s:h,s:y,s:y,s:i,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorRange", data->InvestorRange
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "SequenceSeries", data->SequenceSeries
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "SendTime", data->SendTime//, (Py_ssize_t)sizeof(data->SendTime)
        , "SequenceNo", data->SequenceNo
        , "FieldContent", data->FieldContent//, (Py_ssize_t)sizeof(data->FieldContent)
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTradingNoticeField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTradingNoticeField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcTradingNoticeFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcTradingNoticeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingNoticeFieldData>(self);
    CThostFtdcTradingNoticeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcTradingNoticeFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradingNoticeField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradingNoticeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingNoticeFieldData>(self);
    CThostFtdcTradingNoticeField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者范围
/// typedef char TThostFtdcInvestorRangeType
static PyObject *PyCThostFtdcTradingNoticeFieldType_get_InvestorRange(PyObject *self, void *closure) {
    PyCThostFtdcTradingNoticeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingNoticeFieldData>(self);
    CThostFtdcTradingNoticeField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->InvestorRange), 1);
}

static int PyCThostFtdcTradingNoticeFieldType_set_InvestorRange(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorRange Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcTradingNoticeField::InvestorRange)) {
        PyErr_SetString(PyExc_ValueError, "InvestorRange must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradingNoticeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingNoticeFieldData>(self);
    CThostFtdcTradingNoticeField *data = &(extra->data);
    data->InvestorRange = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcTradingNoticeFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcTradingNoticeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingNoticeFieldData>(self);
    CThostFtdcTradingNoticeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcTradingNoticeFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradingNoticeField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradingNoticeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingNoticeFieldData>(self);
    CThostFtdcTradingNoticeField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcTradingNoticeFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcTradingNoticeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingNoticeFieldData>(self);
    CThostFtdcTradingNoticeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcTradingNoticeFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradingNoticeField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradingNoticeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingNoticeFieldData>(self);
    CThostFtdcTradingNoticeField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 发送时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcTradingNoticeFieldType_get_SendTime(PyObject *self, void *closure) {
    PyCThostFtdcTradingNoticeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingNoticeFieldData>(self);
    CThostFtdcTradingNoticeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->SendTime, (Py_ssize_t)sizeof(data->SendTime));
    return PyBytes_FromString(data->SendTime);
}

static int PyCThostFtdcTradingNoticeFieldType_set_SendTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SendTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradingNoticeField::SendTime)) {
        PyErr_SetString(PyExc_ValueError, "SendTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradingNoticeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingNoticeFieldData>(self);
    CThostFtdcTradingNoticeField *data = &(extra->data);
    // memset(data->SendTime, 0, sizeof(data->SendTime));
    // memcpy(data->SendTime, buf, len);
    strncpy(data->SendTime, buf, sizeof(data->SendTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 消息正文
/// typedef char TThostFtdcContentType[501]
static PyObject *PyCThostFtdcTradingNoticeFieldType_get_FieldContent(PyObject *self, void *closure) {
    PyCThostFtdcTradingNoticeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingNoticeFieldData>(self);
    CThostFtdcTradingNoticeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->FieldContent, (Py_ssize_t)sizeof(data->FieldContent));
    return PyBytes_FromString(data->FieldContent);
}

static int PyCThostFtdcTradingNoticeFieldType_set_FieldContent(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "FieldContent Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradingNoticeField::FieldContent)) {
        PyErr_SetString(PyExc_ValueError, "FieldContent must be less than 500 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradingNoticeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingNoticeFieldData>(self);
    CThostFtdcTradingNoticeField *data = &(extra->data);
    // memset(data->FieldContent, 0, sizeof(data->FieldContent));
    // memcpy(data->FieldContent, buf, len);
    strncpy(data->FieldContent, buf, sizeof(data->FieldContent));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcTradingNoticeFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcTradingNoticeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingNoticeFieldData>(self);
    CThostFtdcTradingNoticeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcTradingNoticeFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradingNoticeField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradingNoticeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingNoticeFieldData>(self);
    CThostFtdcTradingNoticeField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcTradingNoticeFieldType_members[] = {
    /// 序列系列号
    /// typedef short TThostFtdcSequenceSeriesType
    {
        .name = "SequenceSeries",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_SHORT,
#else
        .type = Py_T_SHORT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcTradingNoticeFieldData, data.SequenceSeries),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("序列系列号")
    },
    /// 序列号
    /// typedef int TThostFtdcSequenceNoType
    {
        .name = "SequenceNo",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcTradingNoticeFieldData, data.SequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("序列号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcTradingNoticeFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcTradingNoticeFieldType_get_BrokerID,
    .set = PyCThostFtdcTradingNoticeFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    {
    .name = "InvestorRange",
    .get = PyCThostFtdcTradingNoticeFieldType_get_InvestorRange,
    .set = PyCThostFtdcTradingNoticeFieldType_set_InvestorRange,
    .doc = PyDoc_STR("投资者范围"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcTradingNoticeFieldType_get_InvestorID,
    .set = PyCThostFtdcTradingNoticeFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcTradingNoticeFieldType_get_UserID,
    .set = PyCThostFtdcTradingNoticeFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 发送时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "SendTime",
    .get = PyCThostFtdcTradingNoticeFieldType_get_SendTime,
    .set = PyCThostFtdcTradingNoticeFieldType_set_SendTime,
    .doc = PyDoc_STR("发送时间"),
    },
    /// 消息正文
    /// typedef char TThostFtdcContentType[501]
    {
    .name = "FieldContent",
    .get = PyCThostFtdcTradingNoticeFieldType_get_FieldContent,
    .set = PyCThostFtdcTradingNoticeFieldType_set_FieldContent,
    .doc = PyDoc_STR("消息正文"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcTradingNoticeFieldType_get_InvestUnitID,
    .set = PyCThostFtdcTradingNoticeFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcTradingNoticeFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcTradingNoticeField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("用户事件通知")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcTradingNoticeFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcTradingNoticeFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcTradingNoticeFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcTradingNoticeFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcTradingNoticeFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcTradingNoticeFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("用户事件通知")},
    {Py_tp_members, PyCThostFtdcTradingNoticeFieldType_members},
    {Py_tp_getset, PyCThostFtdcTradingNoticeFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcTradingNoticeFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcTradingNoticeFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcTradingNoticeFieldType_spec = {
    .name = "PyCTP.CThostFtdcTradingNoticeField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcTradingNoticeFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcTradingNoticeFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcTradingNoticeFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcTradingNoticeFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcTradingNoticeFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcTradingNoticeFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcTradingNoticeFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcTradingNoticeFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcTradingNoticeField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTradingNoticeField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}