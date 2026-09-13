
#include "PyCThostFtdcQryHisOrderField.h"

///查询报单

static int PyCThostFtdcQryHisOrderFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "reserve1", "ExchangeID", "OrderSysID", "InsertTimeStart", "InsertTimeEnd", "TradingDay", "SettlementID", "InstrumentID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryHisOrderField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryHisOrderField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryHisOrderField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryHisOrderField_InvestorID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcQryHisOrderField_reserve1 = NULL;
    Py_ssize_t CThostFtdcQryHisOrderField_reserve1_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryHisOrderField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryHisOrderField_ExchangeID_length = 0;

    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    char *CThostFtdcQryHisOrderField_OrderSysID = NULL;
    Py_ssize_t CThostFtdcQryHisOrderField_OrderSysID_length = 0;

    /// 开始时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcQryHisOrderField_InsertTimeStart = NULL;
    Py_ssize_t CThostFtdcQryHisOrderField_InsertTimeStart_length = 0;

    /// 结束时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcQryHisOrderField_InsertTimeEnd = NULL;
    Py_ssize_t CThostFtdcQryHisOrderField_InsertTimeEnd_length = 0;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcQryHisOrderField_TradingDay = NULL;
    Py_ssize_t CThostFtdcQryHisOrderField_TradingDay_length = 0;

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    int CThostFtdcQryHisOrderField_SettlementID = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryHisOrderField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcQryHisOrderField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#iy#", (char **)kwlist
        , &CThostFtdcQryHisOrderField_BrokerID, &CThostFtdcQryHisOrderField_BrokerID_length
        , &CThostFtdcQryHisOrderField_InvestorID, &CThostFtdcQryHisOrderField_InvestorID_length
        , &CThostFtdcQryHisOrderField_reserve1, &CThostFtdcQryHisOrderField_reserve1_length
        , &CThostFtdcQryHisOrderField_ExchangeID, &CThostFtdcQryHisOrderField_ExchangeID_length
        , &CThostFtdcQryHisOrderField_OrderSysID, &CThostFtdcQryHisOrderField_OrderSysID_length
        , &CThostFtdcQryHisOrderField_InsertTimeStart, &CThostFtdcQryHisOrderField_InsertTimeStart_length
        , &CThostFtdcQryHisOrderField_InsertTimeEnd, &CThostFtdcQryHisOrderField_InsertTimeEnd_length
        , &CThostFtdcQryHisOrderField_TradingDay, &CThostFtdcQryHisOrderField_TradingDay_length
        , &CThostFtdcQryHisOrderField_SettlementID
        , &CThostFtdcQryHisOrderField_InstrumentID, &CThostFtdcQryHisOrderField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryHisOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryHisOrderFieldData>(self);
    CThostFtdcQryHisOrderField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryHisOrderField_BrokerID != NULL ) {
        if(CThostFtdcQryHisOrderField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryHisOrderField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryHisOrderField_BrokerID, CThostFtdcQryHisOrderField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryHisOrderField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryHisOrderField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryHisOrderField_InvestorID != NULL ) {
        if(CThostFtdcQryHisOrderField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryHisOrderField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryHisOrderField_InvestorID, CThostFtdcQryHisOrderField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryHisOrderField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryHisOrderField_InvestorID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcQryHisOrderField_reserve1 != NULL ) {
        if(CThostFtdcQryHisOrderField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcQryHisOrderField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcQryHisOrderField_reserve1, CThostFtdcQryHisOrderField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcQryHisOrderField_reserve1, sizeof(data->reserve1));
        CThostFtdcQryHisOrderField_reserve1 = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryHisOrderField_ExchangeID != NULL ) {
        if(CThostFtdcQryHisOrderField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryHisOrderField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryHisOrderField_ExchangeID, CThostFtdcQryHisOrderField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryHisOrderField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryHisOrderField_ExchangeID = NULL;
    }

    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    if( CThostFtdcQryHisOrderField_OrderSysID != NULL ) {
        if(CThostFtdcQryHisOrderField_OrderSysID_length >= (Py_ssize_t)sizeof(data->OrderSysID)) {
            PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is 20)", CThostFtdcQryHisOrderField_OrderSysID_length);
            return -1;
        }
        // memset(data->OrderSysID, 0, sizeof(data->OrderSysID));
        // memcpy(data->OrderSysID, CThostFtdcQryHisOrderField_OrderSysID, CThostFtdcQryHisOrderField_OrderSysID_length);
        strncpy(data->OrderSysID, CThostFtdcQryHisOrderField_OrderSysID, sizeof(data->OrderSysID));
        CThostFtdcQryHisOrderField_OrderSysID = NULL;
    }

    /// 开始时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcQryHisOrderField_InsertTimeStart != NULL ) {
        if(CThostFtdcQryHisOrderField_InsertTimeStart_length >= (Py_ssize_t)sizeof(data->InsertTimeStart)) {
            PyErr_Format(PyExc_ValueError, "InsertTimeStart too long: length=%zd (max allowed is 8)", CThostFtdcQryHisOrderField_InsertTimeStart_length);
            return -1;
        }
        // memset(data->InsertTimeStart, 0, sizeof(data->InsertTimeStart));
        // memcpy(data->InsertTimeStart, CThostFtdcQryHisOrderField_InsertTimeStart, CThostFtdcQryHisOrderField_InsertTimeStart_length);
        strncpy(data->InsertTimeStart, CThostFtdcQryHisOrderField_InsertTimeStart, sizeof(data->InsertTimeStart));
        CThostFtdcQryHisOrderField_InsertTimeStart = NULL;
    }

    /// 结束时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcQryHisOrderField_InsertTimeEnd != NULL ) {
        if(CThostFtdcQryHisOrderField_InsertTimeEnd_length >= (Py_ssize_t)sizeof(data->InsertTimeEnd)) {
            PyErr_Format(PyExc_ValueError, "InsertTimeEnd too long: length=%zd (max allowed is 8)", CThostFtdcQryHisOrderField_InsertTimeEnd_length);
            return -1;
        }
        // memset(data->InsertTimeEnd, 0, sizeof(data->InsertTimeEnd));
        // memcpy(data->InsertTimeEnd, CThostFtdcQryHisOrderField_InsertTimeEnd, CThostFtdcQryHisOrderField_InsertTimeEnd_length);
        strncpy(data->InsertTimeEnd, CThostFtdcQryHisOrderField_InsertTimeEnd, sizeof(data->InsertTimeEnd));
        CThostFtdcQryHisOrderField_InsertTimeEnd = NULL;
    }

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcQryHisOrderField_TradingDay != NULL ) {
        if(CThostFtdcQryHisOrderField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcQryHisOrderField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcQryHisOrderField_TradingDay, CThostFtdcQryHisOrderField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcQryHisOrderField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcQryHisOrderField_TradingDay = NULL;
    }

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    data->SettlementID = CThostFtdcQryHisOrderField_SettlementID;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryHisOrderField_InstrumentID != NULL ) {
        if(CThostFtdcQryHisOrderField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcQryHisOrderField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcQryHisOrderField_InstrumentID, CThostFtdcQryHisOrderField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcQryHisOrderField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcQryHisOrderField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryHisOrderFieldType_repr(PyObject *self) {

    PyCThostFtdcQryHisOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryHisOrderFieldData>(self);
    CThostFtdcQryHisOrderField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "OrderSysID", data->OrderSysID//, (Py_ssize_t)sizeof(data->OrderSysID)
        , "InsertTimeStart", data->InsertTimeStart//, (Py_ssize_t)sizeof(data->InsertTimeStart)
        , "InsertTimeEnd", data->InsertTimeEnd//, (Py_ssize_t)sizeof(data->InsertTimeEnd)
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "SettlementID", data->SettlementID
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryHisOrderField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryHisOrderField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryHisOrderFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryHisOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryHisOrderFieldData>(self);
    CThostFtdcQryHisOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryHisOrderFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryHisOrderField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryHisOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryHisOrderFieldData>(self);
    CThostFtdcQryHisOrderField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryHisOrderFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryHisOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryHisOrderFieldData>(self);
    CThostFtdcQryHisOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryHisOrderFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryHisOrderField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryHisOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryHisOrderFieldData>(self);
    CThostFtdcQryHisOrderField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcQryHisOrderFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcQryHisOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryHisOrderFieldData>(self);
    CThostFtdcQryHisOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcQryHisOrderFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryHisOrderField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryHisOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryHisOrderFieldData>(self);
    CThostFtdcQryHisOrderField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryHisOrderFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryHisOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryHisOrderFieldData>(self);
    CThostFtdcQryHisOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryHisOrderFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryHisOrderField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryHisOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryHisOrderFieldData>(self);
    CThostFtdcQryHisOrderField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单编号
/// typedef char TThostFtdcOrderSysIDType[21]
static PyObject *PyCThostFtdcQryHisOrderFieldType_get_OrderSysID(PyObject *self, void *closure) {
    PyCThostFtdcQryHisOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryHisOrderFieldData>(self);
    CThostFtdcQryHisOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderSysID, (Py_ssize_t)sizeof(data->OrderSysID));
    return PyBytes_FromString(data->OrderSysID);
}

static int PyCThostFtdcQryHisOrderFieldType_set_OrderSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryHisOrderField::OrderSysID)) {
        PyErr_SetString(PyExc_ValueError, "OrderSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryHisOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryHisOrderFieldData>(self);
    CThostFtdcQryHisOrderField *data = &(extra->data);
    // memset(data->OrderSysID, 0, sizeof(data->OrderSysID));
    // memcpy(data->OrderSysID, buf, len);
    strncpy(data->OrderSysID, buf, sizeof(data->OrderSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 开始时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcQryHisOrderFieldType_get_InsertTimeStart(PyObject *self, void *closure) {
    PyCThostFtdcQryHisOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryHisOrderFieldData>(self);
    CThostFtdcQryHisOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InsertTimeStart, (Py_ssize_t)sizeof(data->InsertTimeStart));
    return PyBytes_FromString(data->InsertTimeStart);
}

static int PyCThostFtdcQryHisOrderFieldType_set_InsertTimeStart(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InsertTimeStart Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryHisOrderField::InsertTimeStart)) {
        PyErr_SetString(PyExc_ValueError, "InsertTimeStart must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryHisOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryHisOrderFieldData>(self);
    CThostFtdcQryHisOrderField *data = &(extra->data);
    // memset(data->InsertTimeStart, 0, sizeof(data->InsertTimeStart));
    // memcpy(data->InsertTimeStart, buf, len);
    strncpy(data->InsertTimeStart, buf, sizeof(data->InsertTimeStart));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 结束时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcQryHisOrderFieldType_get_InsertTimeEnd(PyObject *self, void *closure) {
    PyCThostFtdcQryHisOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryHisOrderFieldData>(self);
    CThostFtdcQryHisOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InsertTimeEnd, (Py_ssize_t)sizeof(data->InsertTimeEnd));
    return PyBytes_FromString(data->InsertTimeEnd);
}

static int PyCThostFtdcQryHisOrderFieldType_set_InsertTimeEnd(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InsertTimeEnd Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryHisOrderField::InsertTimeEnd)) {
        PyErr_SetString(PyExc_ValueError, "InsertTimeEnd must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryHisOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryHisOrderFieldData>(self);
    CThostFtdcQryHisOrderField *data = &(extra->data);
    // memset(data->InsertTimeEnd, 0, sizeof(data->InsertTimeEnd));
    // memcpy(data->InsertTimeEnd, buf, len);
    strncpy(data->InsertTimeEnd, buf, sizeof(data->InsertTimeEnd));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcQryHisOrderFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcQryHisOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryHisOrderFieldData>(self);
    CThostFtdcQryHisOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcQryHisOrderFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryHisOrderField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryHisOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryHisOrderFieldData>(self);
    CThostFtdcQryHisOrderField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryHisOrderFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcQryHisOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryHisOrderFieldData>(self);
    CThostFtdcQryHisOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcQryHisOrderFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryHisOrderField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryHisOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryHisOrderFieldData>(self);
    CThostFtdcQryHisOrderField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryHisOrderFieldType_members[] = {
    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    {
        .name = "SettlementID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcQryHisOrderFieldData, data.SettlementID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("结算编号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryHisOrderFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryHisOrderFieldType_get_BrokerID,
    .set = PyCThostFtdcQryHisOrderFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryHisOrderFieldType_get_InvestorID,
    .set = PyCThostFtdcQryHisOrderFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcQryHisOrderFieldType_get_reserve1,
    .set = PyCThostFtdcQryHisOrderFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryHisOrderFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryHisOrderFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    {
    .name = "OrderSysID",
    .get = PyCThostFtdcQryHisOrderFieldType_get_OrderSysID,
    .set = PyCThostFtdcQryHisOrderFieldType_set_OrderSysID,
    .doc = PyDoc_STR("报单编号"),
    },
    /// 开始时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "InsertTimeStart",
    .get = PyCThostFtdcQryHisOrderFieldType_get_InsertTimeStart,
    .set = PyCThostFtdcQryHisOrderFieldType_set_InsertTimeStart,
    .doc = PyDoc_STR("开始时间"),
    },
    /// 结束时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "InsertTimeEnd",
    .get = PyCThostFtdcQryHisOrderFieldType_get_InsertTimeEnd,
    .set = PyCThostFtdcQryHisOrderFieldType_set_InsertTimeEnd,
    .doc = PyDoc_STR("结束时间"),
    },
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcQryHisOrderFieldType_get_TradingDay,
    .set = PyCThostFtdcQryHisOrderFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcQryHisOrderFieldType_get_InstrumentID,
    .set = PyCThostFtdcQryHisOrderFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryHisOrderFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryHisOrderField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询报单")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryHisOrderFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryHisOrderFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryHisOrderFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryHisOrderFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryHisOrderFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryHisOrderFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询报单")},
    {Py_tp_members, PyCThostFtdcQryHisOrderFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryHisOrderFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryHisOrderFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryHisOrderFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryHisOrderFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryHisOrderField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryHisOrderFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryHisOrderFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryHisOrderFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryHisOrderFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryHisOrderFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryHisOrderFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryHisOrderFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryHisOrderFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryHisOrderField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryHisOrderField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}