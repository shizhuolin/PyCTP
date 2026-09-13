
#include "PyCThostFtdcQryOrderField.h"

///查询报单

static int PyCThostFtdcQryOrderFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "reserve1", "ExchangeID", "OrderSysID", "InsertTimeStart", "InsertTimeEnd", "InvestUnitID", "InstrumentID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryOrderField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryOrderField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryOrderField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryOrderField_InvestorID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcQryOrderField_reserve1 = NULL;
    Py_ssize_t CThostFtdcQryOrderField_reserve1_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryOrderField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryOrderField_ExchangeID_length = 0;

    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    char *CThostFtdcQryOrderField_OrderSysID = NULL;
    Py_ssize_t CThostFtdcQryOrderField_OrderSysID_length = 0;

    /// 开始时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcQryOrderField_InsertTimeStart = NULL;
    Py_ssize_t CThostFtdcQryOrderField_InsertTimeStart_length = 0;

    /// 结束时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcQryOrderField_InsertTimeEnd = NULL;
    Py_ssize_t CThostFtdcQryOrderField_InsertTimeEnd_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcQryOrderField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcQryOrderField_InvestUnitID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryOrderField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcQryOrderField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcQryOrderField_BrokerID, &CThostFtdcQryOrderField_BrokerID_length
        , &CThostFtdcQryOrderField_InvestorID, &CThostFtdcQryOrderField_InvestorID_length
        , &CThostFtdcQryOrderField_reserve1, &CThostFtdcQryOrderField_reserve1_length
        , &CThostFtdcQryOrderField_ExchangeID, &CThostFtdcQryOrderField_ExchangeID_length
        , &CThostFtdcQryOrderField_OrderSysID, &CThostFtdcQryOrderField_OrderSysID_length
        , &CThostFtdcQryOrderField_InsertTimeStart, &CThostFtdcQryOrderField_InsertTimeStart_length
        , &CThostFtdcQryOrderField_InsertTimeEnd, &CThostFtdcQryOrderField_InsertTimeEnd_length
        , &CThostFtdcQryOrderField_InvestUnitID, &CThostFtdcQryOrderField_InvestUnitID_length
        , &CThostFtdcQryOrderField_InstrumentID, &CThostFtdcQryOrderField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOrderFieldData>(self);
    CThostFtdcQryOrderField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryOrderField_BrokerID != NULL ) {
        if(CThostFtdcQryOrderField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryOrderField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryOrderField_BrokerID, CThostFtdcQryOrderField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryOrderField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryOrderField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryOrderField_InvestorID != NULL ) {
        if(CThostFtdcQryOrderField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryOrderField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryOrderField_InvestorID, CThostFtdcQryOrderField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryOrderField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryOrderField_InvestorID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcQryOrderField_reserve1 != NULL ) {
        if(CThostFtdcQryOrderField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcQryOrderField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcQryOrderField_reserve1, CThostFtdcQryOrderField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcQryOrderField_reserve1, sizeof(data->reserve1));
        CThostFtdcQryOrderField_reserve1 = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryOrderField_ExchangeID != NULL ) {
        if(CThostFtdcQryOrderField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryOrderField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryOrderField_ExchangeID, CThostFtdcQryOrderField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryOrderField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryOrderField_ExchangeID = NULL;
    }

    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    if( CThostFtdcQryOrderField_OrderSysID != NULL ) {
        if(CThostFtdcQryOrderField_OrderSysID_length >= (Py_ssize_t)sizeof(data->OrderSysID)) {
            PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is 20)", CThostFtdcQryOrderField_OrderSysID_length);
            return -1;
        }
        // memset(data->OrderSysID, 0, sizeof(data->OrderSysID));
        // memcpy(data->OrderSysID, CThostFtdcQryOrderField_OrderSysID, CThostFtdcQryOrderField_OrderSysID_length);
        strncpy(data->OrderSysID, CThostFtdcQryOrderField_OrderSysID, sizeof(data->OrderSysID));
        CThostFtdcQryOrderField_OrderSysID = NULL;
    }

    /// 开始时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcQryOrderField_InsertTimeStart != NULL ) {
        if(CThostFtdcQryOrderField_InsertTimeStart_length >= (Py_ssize_t)sizeof(data->InsertTimeStart)) {
            PyErr_Format(PyExc_ValueError, "InsertTimeStart too long: length=%zd (max allowed is 8)", CThostFtdcQryOrderField_InsertTimeStart_length);
            return -1;
        }
        // memset(data->InsertTimeStart, 0, sizeof(data->InsertTimeStart));
        // memcpy(data->InsertTimeStart, CThostFtdcQryOrderField_InsertTimeStart, CThostFtdcQryOrderField_InsertTimeStart_length);
        strncpy(data->InsertTimeStart, CThostFtdcQryOrderField_InsertTimeStart, sizeof(data->InsertTimeStart));
        CThostFtdcQryOrderField_InsertTimeStart = NULL;
    }

    /// 结束时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcQryOrderField_InsertTimeEnd != NULL ) {
        if(CThostFtdcQryOrderField_InsertTimeEnd_length >= (Py_ssize_t)sizeof(data->InsertTimeEnd)) {
            PyErr_Format(PyExc_ValueError, "InsertTimeEnd too long: length=%zd (max allowed is 8)", CThostFtdcQryOrderField_InsertTimeEnd_length);
            return -1;
        }
        // memset(data->InsertTimeEnd, 0, sizeof(data->InsertTimeEnd));
        // memcpy(data->InsertTimeEnd, CThostFtdcQryOrderField_InsertTimeEnd, CThostFtdcQryOrderField_InsertTimeEnd_length);
        strncpy(data->InsertTimeEnd, CThostFtdcQryOrderField_InsertTimeEnd, sizeof(data->InsertTimeEnd));
        CThostFtdcQryOrderField_InsertTimeEnd = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcQryOrderField_InvestUnitID != NULL ) {
        if(CThostFtdcQryOrderField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcQryOrderField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcQryOrderField_InvestUnitID, CThostFtdcQryOrderField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcQryOrderField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcQryOrderField_InvestUnitID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryOrderField_InstrumentID != NULL ) {
        if(CThostFtdcQryOrderField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcQryOrderField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcQryOrderField_InstrumentID, CThostFtdcQryOrderField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcQryOrderField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcQryOrderField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryOrderFieldType_repr(PyObject *self) {

    PyCThostFtdcQryOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOrderFieldData>(self);
    CThostFtdcQryOrderField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "OrderSysID", data->OrderSysID//, (Py_ssize_t)sizeof(data->OrderSysID)
        , "InsertTimeStart", data->InsertTimeStart//, (Py_ssize_t)sizeof(data->InsertTimeStart)
        , "InsertTimeEnd", data->InsertTimeEnd//, (Py_ssize_t)sizeof(data->InsertTimeEnd)
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryOrderField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryOrderField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryOrderFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOrderFieldData>(self);
    CThostFtdcQryOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryOrderFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryOrderField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOrderFieldData>(self);
    CThostFtdcQryOrderField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryOrderFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOrderFieldData>(self);
    CThostFtdcQryOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryOrderFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryOrderField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOrderFieldData>(self);
    CThostFtdcQryOrderField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcQryOrderFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcQryOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOrderFieldData>(self);
    CThostFtdcQryOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcQryOrderFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryOrderField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOrderFieldData>(self);
    CThostFtdcQryOrderField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryOrderFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOrderFieldData>(self);
    CThostFtdcQryOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryOrderFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryOrderField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOrderFieldData>(self);
    CThostFtdcQryOrderField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单编号
/// typedef char TThostFtdcOrderSysIDType[21]
static PyObject *PyCThostFtdcQryOrderFieldType_get_OrderSysID(PyObject *self, void *closure) {
    PyCThostFtdcQryOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOrderFieldData>(self);
    CThostFtdcQryOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderSysID, (Py_ssize_t)sizeof(data->OrderSysID));
    return PyBytes_FromString(data->OrderSysID);
}

static int PyCThostFtdcQryOrderFieldType_set_OrderSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryOrderField::OrderSysID)) {
        PyErr_SetString(PyExc_ValueError, "OrderSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOrderFieldData>(self);
    CThostFtdcQryOrderField *data = &(extra->data);
    // memset(data->OrderSysID, 0, sizeof(data->OrderSysID));
    // memcpy(data->OrderSysID, buf, len);
    strncpy(data->OrderSysID, buf, sizeof(data->OrderSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 开始时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcQryOrderFieldType_get_InsertTimeStart(PyObject *self, void *closure) {
    PyCThostFtdcQryOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOrderFieldData>(self);
    CThostFtdcQryOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InsertTimeStart, (Py_ssize_t)sizeof(data->InsertTimeStart));
    return PyBytes_FromString(data->InsertTimeStart);
}

static int PyCThostFtdcQryOrderFieldType_set_InsertTimeStart(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InsertTimeStart Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryOrderField::InsertTimeStart)) {
        PyErr_SetString(PyExc_ValueError, "InsertTimeStart must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOrderFieldData>(self);
    CThostFtdcQryOrderField *data = &(extra->data);
    // memset(data->InsertTimeStart, 0, sizeof(data->InsertTimeStart));
    // memcpy(data->InsertTimeStart, buf, len);
    strncpy(data->InsertTimeStart, buf, sizeof(data->InsertTimeStart));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 结束时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcQryOrderFieldType_get_InsertTimeEnd(PyObject *self, void *closure) {
    PyCThostFtdcQryOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOrderFieldData>(self);
    CThostFtdcQryOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InsertTimeEnd, (Py_ssize_t)sizeof(data->InsertTimeEnd));
    return PyBytes_FromString(data->InsertTimeEnd);
}

static int PyCThostFtdcQryOrderFieldType_set_InsertTimeEnd(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InsertTimeEnd Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryOrderField::InsertTimeEnd)) {
        PyErr_SetString(PyExc_ValueError, "InsertTimeEnd must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOrderFieldData>(self);
    CThostFtdcQryOrderField *data = &(extra->data);
    // memset(data->InsertTimeEnd, 0, sizeof(data->InsertTimeEnd));
    // memcpy(data->InsertTimeEnd, buf, len);
    strncpy(data->InsertTimeEnd, buf, sizeof(data->InsertTimeEnd));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcQryOrderFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcQryOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOrderFieldData>(self);
    CThostFtdcQryOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcQryOrderFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryOrderField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOrderFieldData>(self);
    CThostFtdcQryOrderField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryOrderFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcQryOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOrderFieldData>(self);
    CThostFtdcQryOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcQryOrderFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryOrderField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOrderFieldData>(self);
    CThostFtdcQryOrderField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryOrderFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryOrderFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryOrderFieldType_get_BrokerID,
    .set = PyCThostFtdcQryOrderFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryOrderFieldType_get_InvestorID,
    .set = PyCThostFtdcQryOrderFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcQryOrderFieldType_get_reserve1,
    .set = PyCThostFtdcQryOrderFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryOrderFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryOrderFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    {
    .name = "OrderSysID",
    .get = PyCThostFtdcQryOrderFieldType_get_OrderSysID,
    .set = PyCThostFtdcQryOrderFieldType_set_OrderSysID,
    .doc = PyDoc_STR("报单编号"),
    },
    /// 开始时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "InsertTimeStart",
    .get = PyCThostFtdcQryOrderFieldType_get_InsertTimeStart,
    .set = PyCThostFtdcQryOrderFieldType_set_InsertTimeStart,
    .doc = PyDoc_STR("开始时间"),
    },
    /// 结束时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "InsertTimeEnd",
    .get = PyCThostFtdcQryOrderFieldType_get_InsertTimeEnd,
    .set = PyCThostFtdcQryOrderFieldType_set_InsertTimeEnd,
    .doc = PyDoc_STR("结束时间"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcQryOrderFieldType_get_InvestUnitID,
    .set = PyCThostFtdcQryOrderFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcQryOrderFieldType_get_InstrumentID,
    .set = PyCThostFtdcQryOrderFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryOrderFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryOrderField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询报单")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryOrderFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryOrderFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryOrderFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryOrderFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryOrderFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryOrderFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询报单")},
    {Py_tp_members, PyCThostFtdcQryOrderFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryOrderFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryOrderFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryOrderFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryOrderFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryOrderField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryOrderFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryOrderFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryOrderFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryOrderFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryOrderFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryOrderFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryOrderFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryOrderFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryOrderField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryOrderField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}