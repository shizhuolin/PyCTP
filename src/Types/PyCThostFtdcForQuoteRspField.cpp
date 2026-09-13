
#include "PyCThostFtdcForQuoteRspField.h"

///发给做市商的询价请求

static int PyCThostFtdcForQuoteRspFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "reserve1", "ForQuoteSysID", "ForQuoteTime", "ActionDay", "ExchangeID", "InstrumentID", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcForQuoteRspField_TradingDay = NULL;
    Py_ssize_t CThostFtdcForQuoteRspField_TradingDay_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcForQuoteRspField_reserve1 = NULL;
    Py_ssize_t CThostFtdcForQuoteRspField_reserve1_length = 0;

    /// 询价编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    char *CThostFtdcForQuoteRspField_ForQuoteSysID = NULL;
    Py_ssize_t CThostFtdcForQuoteRspField_ForQuoteSysID_length = 0;

    /// 询价时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcForQuoteRspField_ForQuoteTime = NULL;
    Py_ssize_t CThostFtdcForQuoteRspField_ForQuoteTime_length = 0;

    /// 业务日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcForQuoteRspField_ActionDay = NULL;
    Py_ssize_t CThostFtdcForQuoteRspField_ActionDay_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcForQuoteRspField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcForQuoteRspField_ExchangeID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcForQuoteRspField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcForQuoteRspField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcForQuoteRspField_TradingDay, &CThostFtdcForQuoteRspField_TradingDay_length
        , &CThostFtdcForQuoteRspField_reserve1, &CThostFtdcForQuoteRspField_reserve1_length
        , &CThostFtdcForQuoteRspField_ForQuoteSysID, &CThostFtdcForQuoteRspField_ForQuoteSysID_length
        , &CThostFtdcForQuoteRspField_ForQuoteTime, &CThostFtdcForQuoteRspField_ForQuoteTime_length
        , &CThostFtdcForQuoteRspField_ActionDay, &CThostFtdcForQuoteRspField_ActionDay_length
        , &CThostFtdcForQuoteRspField_ExchangeID, &CThostFtdcForQuoteRspField_ExchangeID_length
        , &CThostFtdcForQuoteRspField_InstrumentID, &CThostFtdcForQuoteRspField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcForQuoteRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteRspFieldData>(self);
    CThostFtdcForQuoteRspField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcForQuoteRspField_TradingDay != NULL ) {
        if(CThostFtdcForQuoteRspField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcForQuoteRspField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcForQuoteRspField_TradingDay, CThostFtdcForQuoteRspField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcForQuoteRspField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcForQuoteRspField_TradingDay = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcForQuoteRspField_reserve1 != NULL ) {
        if(CThostFtdcForQuoteRspField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcForQuoteRspField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcForQuoteRspField_reserve1, CThostFtdcForQuoteRspField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcForQuoteRspField_reserve1, sizeof(data->reserve1));
        CThostFtdcForQuoteRspField_reserve1 = NULL;
    }

    /// 询价编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    if( CThostFtdcForQuoteRspField_ForQuoteSysID != NULL ) {
        if(CThostFtdcForQuoteRspField_ForQuoteSysID_length >= (Py_ssize_t)sizeof(data->ForQuoteSysID)) {
            PyErr_Format(PyExc_ValueError, "ForQuoteSysID too long: length=%zd (max allowed is 20)", CThostFtdcForQuoteRspField_ForQuoteSysID_length);
            return -1;
        }
        // memset(data->ForQuoteSysID, 0, sizeof(data->ForQuoteSysID));
        // memcpy(data->ForQuoteSysID, CThostFtdcForQuoteRspField_ForQuoteSysID, CThostFtdcForQuoteRspField_ForQuoteSysID_length);
        strncpy(data->ForQuoteSysID, CThostFtdcForQuoteRspField_ForQuoteSysID, sizeof(data->ForQuoteSysID));
        CThostFtdcForQuoteRspField_ForQuoteSysID = NULL;
    }

    /// 询价时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcForQuoteRspField_ForQuoteTime != NULL ) {
        if(CThostFtdcForQuoteRspField_ForQuoteTime_length >= (Py_ssize_t)sizeof(data->ForQuoteTime)) {
            PyErr_Format(PyExc_ValueError, "ForQuoteTime too long: length=%zd (max allowed is 8)", CThostFtdcForQuoteRspField_ForQuoteTime_length);
            return -1;
        }
        // memset(data->ForQuoteTime, 0, sizeof(data->ForQuoteTime));
        // memcpy(data->ForQuoteTime, CThostFtdcForQuoteRspField_ForQuoteTime, CThostFtdcForQuoteRspField_ForQuoteTime_length);
        strncpy(data->ForQuoteTime, CThostFtdcForQuoteRspField_ForQuoteTime, sizeof(data->ForQuoteTime));
        CThostFtdcForQuoteRspField_ForQuoteTime = NULL;
    }

    /// 业务日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcForQuoteRspField_ActionDay != NULL ) {
        if(CThostFtdcForQuoteRspField_ActionDay_length >= (Py_ssize_t)sizeof(data->ActionDay)) {
            PyErr_Format(PyExc_ValueError, "ActionDay too long: length=%zd (max allowed is 8)", CThostFtdcForQuoteRspField_ActionDay_length);
            return -1;
        }
        // memset(data->ActionDay, 0, sizeof(data->ActionDay));
        // memcpy(data->ActionDay, CThostFtdcForQuoteRspField_ActionDay, CThostFtdcForQuoteRspField_ActionDay_length);
        strncpy(data->ActionDay, CThostFtdcForQuoteRspField_ActionDay, sizeof(data->ActionDay));
        CThostFtdcForQuoteRspField_ActionDay = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcForQuoteRspField_ExchangeID != NULL ) {
        if(CThostFtdcForQuoteRspField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcForQuoteRspField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcForQuoteRspField_ExchangeID, CThostFtdcForQuoteRspField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcForQuoteRspField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcForQuoteRspField_ExchangeID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcForQuoteRspField_InstrumentID != NULL ) {
        if(CThostFtdcForQuoteRspField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcForQuoteRspField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcForQuoteRspField_InstrumentID, CThostFtdcForQuoteRspField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcForQuoteRspField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcForQuoteRspField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcForQuoteRspFieldType_repr(PyObject *self) {

    PyCThostFtdcForQuoteRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteRspFieldData>(self);
    CThostFtdcForQuoteRspField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "ForQuoteSysID", data->ForQuoteSysID//, (Py_ssize_t)sizeof(data->ForQuoteSysID)
        , "ForQuoteTime", data->ForQuoteTime//, (Py_ssize_t)sizeof(data->ForQuoteTime)
        , "ActionDay", data->ActionDay//, (Py_ssize_t)sizeof(data->ActionDay)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcForQuoteRspField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcForQuoteRspField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcForQuoteRspFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcForQuoteRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteRspFieldData>(self);
    CThostFtdcForQuoteRspField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcForQuoteRspFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcForQuoteRspField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcForQuoteRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteRspFieldData>(self);
    CThostFtdcForQuoteRspField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcForQuoteRspFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcForQuoteRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteRspFieldData>(self);
    CThostFtdcForQuoteRspField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcForQuoteRspFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcForQuoteRspField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcForQuoteRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteRspFieldData>(self);
    CThostFtdcForQuoteRspField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 询价编号
/// typedef char TThostFtdcOrderSysIDType[21]
static PyObject *PyCThostFtdcForQuoteRspFieldType_get_ForQuoteSysID(PyObject *self, void *closure) {
    PyCThostFtdcForQuoteRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteRspFieldData>(self);
    CThostFtdcForQuoteRspField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ForQuoteSysID, (Py_ssize_t)sizeof(data->ForQuoteSysID));
    return PyBytes_FromString(data->ForQuoteSysID);
}

static int PyCThostFtdcForQuoteRspFieldType_set_ForQuoteSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ForQuoteSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcForQuoteRspField::ForQuoteSysID)) {
        PyErr_SetString(PyExc_ValueError, "ForQuoteSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcForQuoteRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteRspFieldData>(self);
    CThostFtdcForQuoteRspField *data = &(extra->data);
    // memset(data->ForQuoteSysID, 0, sizeof(data->ForQuoteSysID));
    // memcpy(data->ForQuoteSysID, buf, len);
    strncpy(data->ForQuoteSysID, buf, sizeof(data->ForQuoteSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 询价时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcForQuoteRspFieldType_get_ForQuoteTime(PyObject *self, void *closure) {
    PyCThostFtdcForQuoteRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteRspFieldData>(self);
    CThostFtdcForQuoteRspField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ForQuoteTime, (Py_ssize_t)sizeof(data->ForQuoteTime));
    return PyBytes_FromString(data->ForQuoteTime);
}

static int PyCThostFtdcForQuoteRspFieldType_set_ForQuoteTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ForQuoteTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcForQuoteRspField::ForQuoteTime)) {
        PyErr_SetString(PyExc_ValueError, "ForQuoteTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcForQuoteRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteRspFieldData>(self);
    CThostFtdcForQuoteRspField *data = &(extra->data);
    // memset(data->ForQuoteTime, 0, sizeof(data->ForQuoteTime));
    // memcpy(data->ForQuoteTime, buf, len);
    strncpy(data->ForQuoteTime, buf, sizeof(data->ForQuoteTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 业务日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcForQuoteRspFieldType_get_ActionDay(PyObject *self, void *closure) {
    PyCThostFtdcForQuoteRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteRspFieldData>(self);
    CThostFtdcForQuoteRspField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionDay, (Py_ssize_t)sizeof(data->ActionDay));
    return PyBytes_FromString(data->ActionDay);
}

static int PyCThostFtdcForQuoteRspFieldType_set_ActionDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcForQuoteRspField::ActionDay)) {
        PyErr_SetString(PyExc_ValueError, "ActionDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcForQuoteRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteRspFieldData>(self);
    CThostFtdcForQuoteRspField *data = &(extra->data);
    // memset(data->ActionDay, 0, sizeof(data->ActionDay));
    // memcpy(data->ActionDay, buf, len);
    strncpy(data->ActionDay, buf, sizeof(data->ActionDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcForQuoteRspFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcForQuoteRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteRspFieldData>(self);
    CThostFtdcForQuoteRspField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcForQuoteRspFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcForQuoteRspField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcForQuoteRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteRspFieldData>(self);
    CThostFtdcForQuoteRspField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcForQuoteRspFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcForQuoteRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteRspFieldData>(self);
    CThostFtdcForQuoteRspField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcForQuoteRspFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcForQuoteRspField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcForQuoteRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteRspFieldData>(self);
    CThostFtdcForQuoteRspField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcForQuoteRspFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcForQuoteRspFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcForQuoteRspFieldType_get_TradingDay,
    .set = PyCThostFtdcForQuoteRspFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcForQuoteRspFieldType_get_reserve1,
    .set = PyCThostFtdcForQuoteRspFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 询价编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    {
    .name = "ForQuoteSysID",
    .get = PyCThostFtdcForQuoteRspFieldType_get_ForQuoteSysID,
    .set = PyCThostFtdcForQuoteRspFieldType_set_ForQuoteSysID,
    .doc = PyDoc_STR("询价编号"),
    },
    /// 询价时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "ForQuoteTime",
    .get = PyCThostFtdcForQuoteRspFieldType_get_ForQuoteTime,
    .set = PyCThostFtdcForQuoteRspFieldType_set_ForQuoteTime,
    .doc = PyDoc_STR("询价时间"),
    },
    /// 业务日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "ActionDay",
    .get = PyCThostFtdcForQuoteRspFieldType_get_ActionDay,
    .set = PyCThostFtdcForQuoteRspFieldType_set_ActionDay,
    .doc = PyDoc_STR("业务日期"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcForQuoteRspFieldType_get_ExchangeID,
    .set = PyCThostFtdcForQuoteRspFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcForQuoteRspFieldType_get_InstrumentID,
    .set = PyCThostFtdcForQuoteRspFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcForQuoteRspFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcForQuoteRspField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("发给做市商的询价请求")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcForQuoteRspFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcForQuoteRspFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcForQuoteRspFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcForQuoteRspFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcForQuoteRspFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcForQuoteRspFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("发给做市商的询价请求")},
    {Py_tp_members, PyCThostFtdcForQuoteRspFieldType_members},
    {Py_tp_getset, PyCThostFtdcForQuoteRspFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcForQuoteRspFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcForQuoteRspFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcForQuoteRspFieldType_spec = {
    .name = "PyCTP.CThostFtdcForQuoteRspField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcForQuoteRspFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcForQuoteRspFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcForQuoteRspFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcForQuoteRspFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcForQuoteRspFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcForQuoteRspFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcForQuoteRspFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcForQuoteRspFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcForQuoteRspField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcForQuoteRspField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}