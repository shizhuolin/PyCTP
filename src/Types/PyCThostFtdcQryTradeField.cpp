
#include "PyCThostFtdcQryTradeField.h"

///查询成交

static int PyCThostFtdcQryTradeFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "reserve1", "ExchangeID", "TradeID", "TradeTimeStart", "TradeTimeEnd", "InvestUnitID", "InstrumentID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryTradeField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryTradeField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryTradeField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryTradeField_InvestorID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcQryTradeField_reserve1 = NULL;
    Py_ssize_t CThostFtdcQryTradeField_reserve1_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryTradeField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryTradeField_ExchangeID_length = 0;

    /// 成交编号
    /// typedef char TThostFtdcTradeIDType[21]
    char *CThostFtdcQryTradeField_TradeID = NULL;
    Py_ssize_t CThostFtdcQryTradeField_TradeID_length = 0;

    /// 开始时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcQryTradeField_TradeTimeStart = NULL;
    Py_ssize_t CThostFtdcQryTradeField_TradeTimeStart_length = 0;

    /// 结束时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcQryTradeField_TradeTimeEnd = NULL;
    Py_ssize_t CThostFtdcQryTradeField_TradeTimeEnd_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcQryTradeField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcQryTradeField_InvestUnitID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryTradeField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcQryTradeField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcQryTradeField_BrokerID, &CThostFtdcQryTradeField_BrokerID_length
        , &CThostFtdcQryTradeField_InvestorID, &CThostFtdcQryTradeField_InvestorID_length
        , &CThostFtdcQryTradeField_reserve1, &CThostFtdcQryTradeField_reserve1_length
        , &CThostFtdcQryTradeField_ExchangeID, &CThostFtdcQryTradeField_ExchangeID_length
        , &CThostFtdcQryTradeField_TradeID, &CThostFtdcQryTradeField_TradeID_length
        , &CThostFtdcQryTradeField_TradeTimeStart, &CThostFtdcQryTradeField_TradeTimeStart_length
        , &CThostFtdcQryTradeField_TradeTimeEnd, &CThostFtdcQryTradeField_TradeTimeEnd_length
        , &CThostFtdcQryTradeField_InvestUnitID, &CThostFtdcQryTradeField_InvestUnitID_length
        , &CThostFtdcQryTradeField_InstrumentID, &CThostFtdcQryTradeField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradeFieldData>(self);
    CThostFtdcQryTradeField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryTradeField_BrokerID != NULL ) {
        if(CThostFtdcQryTradeField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryTradeField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryTradeField_BrokerID, CThostFtdcQryTradeField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryTradeField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryTradeField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryTradeField_InvestorID != NULL ) {
        if(CThostFtdcQryTradeField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryTradeField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryTradeField_InvestorID, CThostFtdcQryTradeField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryTradeField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryTradeField_InvestorID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcQryTradeField_reserve1 != NULL ) {
        if(CThostFtdcQryTradeField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcQryTradeField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcQryTradeField_reserve1, CThostFtdcQryTradeField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcQryTradeField_reserve1, sizeof(data->reserve1));
        CThostFtdcQryTradeField_reserve1 = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryTradeField_ExchangeID != NULL ) {
        if(CThostFtdcQryTradeField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryTradeField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryTradeField_ExchangeID, CThostFtdcQryTradeField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryTradeField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryTradeField_ExchangeID = NULL;
    }

    /// 成交编号
    /// typedef char TThostFtdcTradeIDType[21]
    if( CThostFtdcQryTradeField_TradeID != NULL ) {
        if(CThostFtdcQryTradeField_TradeID_length >= (Py_ssize_t)sizeof(data->TradeID)) {
            PyErr_Format(PyExc_ValueError, "TradeID too long: length=%zd (max allowed is 20)", CThostFtdcQryTradeField_TradeID_length);
            return -1;
        }
        // memset(data->TradeID, 0, sizeof(data->TradeID));
        // memcpy(data->TradeID, CThostFtdcQryTradeField_TradeID, CThostFtdcQryTradeField_TradeID_length);
        strncpy(data->TradeID, CThostFtdcQryTradeField_TradeID, sizeof(data->TradeID));
        CThostFtdcQryTradeField_TradeID = NULL;
    }

    /// 开始时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcQryTradeField_TradeTimeStart != NULL ) {
        if(CThostFtdcQryTradeField_TradeTimeStart_length >= (Py_ssize_t)sizeof(data->TradeTimeStart)) {
            PyErr_Format(PyExc_ValueError, "TradeTimeStart too long: length=%zd (max allowed is 8)", CThostFtdcQryTradeField_TradeTimeStart_length);
            return -1;
        }
        // memset(data->TradeTimeStart, 0, sizeof(data->TradeTimeStart));
        // memcpy(data->TradeTimeStart, CThostFtdcQryTradeField_TradeTimeStart, CThostFtdcQryTradeField_TradeTimeStart_length);
        strncpy(data->TradeTimeStart, CThostFtdcQryTradeField_TradeTimeStart, sizeof(data->TradeTimeStart));
        CThostFtdcQryTradeField_TradeTimeStart = NULL;
    }

    /// 结束时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcQryTradeField_TradeTimeEnd != NULL ) {
        if(CThostFtdcQryTradeField_TradeTimeEnd_length >= (Py_ssize_t)sizeof(data->TradeTimeEnd)) {
            PyErr_Format(PyExc_ValueError, "TradeTimeEnd too long: length=%zd (max allowed is 8)", CThostFtdcQryTradeField_TradeTimeEnd_length);
            return -1;
        }
        // memset(data->TradeTimeEnd, 0, sizeof(data->TradeTimeEnd));
        // memcpy(data->TradeTimeEnd, CThostFtdcQryTradeField_TradeTimeEnd, CThostFtdcQryTradeField_TradeTimeEnd_length);
        strncpy(data->TradeTimeEnd, CThostFtdcQryTradeField_TradeTimeEnd, sizeof(data->TradeTimeEnd));
        CThostFtdcQryTradeField_TradeTimeEnd = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcQryTradeField_InvestUnitID != NULL ) {
        if(CThostFtdcQryTradeField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcQryTradeField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcQryTradeField_InvestUnitID, CThostFtdcQryTradeField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcQryTradeField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcQryTradeField_InvestUnitID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryTradeField_InstrumentID != NULL ) {
        if(CThostFtdcQryTradeField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcQryTradeField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcQryTradeField_InstrumentID, CThostFtdcQryTradeField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcQryTradeField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcQryTradeField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryTradeFieldType_repr(PyObject *self) {

    PyCThostFtdcQryTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradeFieldData>(self);
    CThostFtdcQryTradeField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "TradeID", data->TradeID//, (Py_ssize_t)sizeof(data->TradeID)
        , "TradeTimeStart", data->TradeTimeStart//, (Py_ssize_t)sizeof(data->TradeTimeStart)
        , "TradeTimeEnd", data->TradeTimeEnd//, (Py_ssize_t)sizeof(data->TradeTimeEnd)
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryTradeField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryTradeField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryTradeFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradeFieldData>(self);
    CThostFtdcQryTradeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryTradeFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryTradeField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradeFieldData>(self);
    CThostFtdcQryTradeField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryTradeFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradeFieldData>(self);
    CThostFtdcQryTradeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryTradeFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryTradeField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradeFieldData>(self);
    CThostFtdcQryTradeField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcQryTradeFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcQryTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradeFieldData>(self);
    CThostFtdcQryTradeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcQryTradeFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryTradeField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradeFieldData>(self);
    CThostFtdcQryTradeField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryTradeFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradeFieldData>(self);
    CThostFtdcQryTradeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryTradeFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryTradeField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradeFieldData>(self);
    CThostFtdcQryTradeField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 成交编号
/// typedef char TThostFtdcTradeIDType[21]
static PyObject *PyCThostFtdcQryTradeFieldType_get_TradeID(PyObject *self, void *closure) {
    PyCThostFtdcQryTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradeFieldData>(self);
    CThostFtdcQryTradeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeID, (Py_ssize_t)sizeof(data->TradeID));
    return PyBytes_FromString(data->TradeID);
}

static int PyCThostFtdcQryTradeFieldType_set_TradeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryTradeField::TradeID)) {
        PyErr_SetString(PyExc_ValueError, "TradeID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradeFieldData>(self);
    CThostFtdcQryTradeField *data = &(extra->data);
    // memset(data->TradeID, 0, sizeof(data->TradeID));
    // memcpy(data->TradeID, buf, len);
    strncpy(data->TradeID, buf, sizeof(data->TradeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 开始时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcQryTradeFieldType_get_TradeTimeStart(PyObject *self, void *closure) {
    PyCThostFtdcQryTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradeFieldData>(self);
    CThostFtdcQryTradeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeTimeStart, (Py_ssize_t)sizeof(data->TradeTimeStart));
    return PyBytes_FromString(data->TradeTimeStart);
}

static int PyCThostFtdcQryTradeFieldType_set_TradeTimeStart(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeTimeStart Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryTradeField::TradeTimeStart)) {
        PyErr_SetString(PyExc_ValueError, "TradeTimeStart must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradeFieldData>(self);
    CThostFtdcQryTradeField *data = &(extra->data);
    // memset(data->TradeTimeStart, 0, sizeof(data->TradeTimeStart));
    // memcpy(data->TradeTimeStart, buf, len);
    strncpy(data->TradeTimeStart, buf, sizeof(data->TradeTimeStart));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 结束时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcQryTradeFieldType_get_TradeTimeEnd(PyObject *self, void *closure) {
    PyCThostFtdcQryTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradeFieldData>(self);
    CThostFtdcQryTradeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeTimeEnd, (Py_ssize_t)sizeof(data->TradeTimeEnd));
    return PyBytes_FromString(data->TradeTimeEnd);
}

static int PyCThostFtdcQryTradeFieldType_set_TradeTimeEnd(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeTimeEnd Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryTradeField::TradeTimeEnd)) {
        PyErr_SetString(PyExc_ValueError, "TradeTimeEnd must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradeFieldData>(self);
    CThostFtdcQryTradeField *data = &(extra->data);
    // memset(data->TradeTimeEnd, 0, sizeof(data->TradeTimeEnd));
    // memcpy(data->TradeTimeEnd, buf, len);
    strncpy(data->TradeTimeEnd, buf, sizeof(data->TradeTimeEnd));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcQryTradeFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcQryTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradeFieldData>(self);
    CThostFtdcQryTradeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcQryTradeFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryTradeField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradeFieldData>(self);
    CThostFtdcQryTradeField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryTradeFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcQryTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradeFieldData>(self);
    CThostFtdcQryTradeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcQryTradeFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryTradeField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradeFieldData>(self);
    CThostFtdcQryTradeField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryTradeFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryTradeFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryTradeFieldType_get_BrokerID,
    .set = PyCThostFtdcQryTradeFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryTradeFieldType_get_InvestorID,
    .set = PyCThostFtdcQryTradeFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcQryTradeFieldType_get_reserve1,
    .set = PyCThostFtdcQryTradeFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryTradeFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryTradeFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 成交编号
    /// typedef char TThostFtdcTradeIDType[21]
    {
    .name = "TradeID",
    .get = PyCThostFtdcQryTradeFieldType_get_TradeID,
    .set = PyCThostFtdcQryTradeFieldType_set_TradeID,
    .doc = PyDoc_STR("成交编号"),
    },
    /// 开始时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "TradeTimeStart",
    .get = PyCThostFtdcQryTradeFieldType_get_TradeTimeStart,
    .set = PyCThostFtdcQryTradeFieldType_set_TradeTimeStart,
    .doc = PyDoc_STR("开始时间"),
    },
    /// 结束时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "TradeTimeEnd",
    .get = PyCThostFtdcQryTradeFieldType_get_TradeTimeEnd,
    .set = PyCThostFtdcQryTradeFieldType_set_TradeTimeEnd,
    .doc = PyDoc_STR("结束时间"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcQryTradeFieldType_get_InvestUnitID,
    .set = PyCThostFtdcQryTradeFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcQryTradeFieldType_get_InstrumentID,
    .set = PyCThostFtdcQryTradeFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryTradeFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryTradeField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询成交")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryTradeFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryTradeFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryTradeFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryTradeFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryTradeFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryTradeFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询成交")},
    {Py_tp_members, PyCThostFtdcQryTradeFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryTradeFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryTradeFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryTradeFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryTradeFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryTradeField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryTradeFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryTradeFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryTradeFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryTradeFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryTradeFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryTradeFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryTradeFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryTradeFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryTradeField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryTradeField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}