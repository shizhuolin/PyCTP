
#include "PyCThostFtdcQryQuoteField.h"

///报价查询

static int PyCThostFtdcQryQuoteFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "reserve1", "ExchangeID", "QuoteSysID", "InsertTimeStart", "InsertTimeEnd", "InvestUnitID", "InstrumentID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryQuoteField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryQuoteField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryQuoteField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryQuoteField_InvestorID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcQryQuoteField_reserve1 = NULL;
    Py_ssize_t CThostFtdcQryQuoteField_reserve1_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryQuoteField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryQuoteField_ExchangeID_length = 0;

    /// 报价编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    char *CThostFtdcQryQuoteField_QuoteSysID = NULL;
    Py_ssize_t CThostFtdcQryQuoteField_QuoteSysID_length = 0;

    /// 开始时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcQryQuoteField_InsertTimeStart = NULL;
    Py_ssize_t CThostFtdcQryQuoteField_InsertTimeStart_length = 0;

    /// 结束时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcQryQuoteField_InsertTimeEnd = NULL;
    Py_ssize_t CThostFtdcQryQuoteField_InsertTimeEnd_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcQryQuoteField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcQryQuoteField_InvestUnitID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryQuoteField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcQryQuoteField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcQryQuoteField_BrokerID, &CThostFtdcQryQuoteField_BrokerID_length
        , &CThostFtdcQryQuoteField_InvestorID, &CThostFtdcQryQuoteField_InvestorID_length
        , &CThostFtdcQryQuoteField_reserve1, &CThostFtdcQryQuoteField_reserve1_length
        , &CThostFtdcQryQuoteField_ExchangeID, &CThostFtdcQryQuoteField_ExchangeID_length
        , &CThostFtdcQryQuoteField_QuoteSysID, &CThostFtdcQryQuoteField_QuoteSysID_length
        , &CThostFtdcQryQuoteField_InsertTimeStart, &CThostFtdcQryQuoteField_InsertTimeStart_length
        , &CThostFtdcQryQuoteField_InsertTimeEnd, &CThostFtdcQryQuoteField_InsertTimeEnd_length
        , &CThostFtdcQryQuoteField_InvestUnitID, &CThostFtdcQryQuoteField_InvestUnitID_length
        , &CThostFtdcQryQuoteField_InstrumentID, &CThostFtdcQryQuoteField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryQuoteFieldData>(self);
    CThostFtdcQryQuoteField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryQuoteField_BrokerID != NULL ) {
        if(CThostFtdcQryQuoteField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryQuoteField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryQuoteField_BrokerID, CThostFtdcQryQuoteField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryQuoteField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryQuoteField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryQuoteField_InvestorID != NULL ) {
        if(CThostFtdcQryQuoteField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryQuoteField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryQuoteField_InvestorID, CThostFtdcQryQuoteField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryQuoteField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryQuoteField_InvestorID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcQryQuoteField_reserve1 != NULL ) {
        if(CThostFtdcQryQuoteField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcQryQuoteField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcQryQuoteField_reserve1, CThostFtdcQryQuoteField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcQryQuoteField_reserve1, sizeof(data->reserve1));
        CThostFtdcQryQuoteField_reserve1 = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryQuoteField_ExchangeID != NULL ) {
        if(CThostFtdcQryQuoteField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryQuoteField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryQuoteField_ExchangeID, CThostFtdcQryQuoteField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryQuoteField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryQuoteField_ExchangeID = NULL;
    }

    /// 报价编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    if( CThostFtdcQryQuoteField_QuoteSysID != NULL ) {
        if(CThostFtdcQryQuoteField_QuoteSysID_length >= (Py_ssize_t)sizeof(data->QuoteSysID)) {
            PyErr_Format(PyExc_ValueError, "QuoteSysID too long: length=%zd (max allowed is 20)", CThostFtdcQryQuoteField_QuoteSysID_length);
            return -1;
        }
        // memset(data->QuoteSysID, 0, sizeof(data->QuoteSysID));
        // memcpy(data->QuoteSysID, CThostFtdcQryQuoteField_QuoteSysID, CThostFtdcQryQuoteField_QuoteSysID_length);
        strncpy(data->QuoteSysID, CThostFtdcQryQuoteField_QuoteSysID, sizeof(data->QuoteSysID));
        CThostFtdcQryQuoteField_QuoteSysID = NULL;
    }

    /// 开始时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcQryQuoteField_InsertTimeStart != NULL ) {
        if(CThostFtdcQryQuoteField_InsertTimeStart_length >= (Py_ssize_t)sizeof(data->InsertTimeStart)) {
            PyErr_Format(PyExc_ValueError, "InsertTimeStart too long: length=%zd (max allowed is 8)", CThostFtdcQryQuoteField_InsertTimeStart_length);
            return -1;
        }
        // memset(data->InsertTimeStart, 0, sizeof(data->InsertTimeStart));
        // memcpy(data->InsertTimeStart, CThostFtdcQryQuoteField_InsertTimeStart, CThostFtdcQryQuoteField_InsertTimeStart_length);
        strncpy(data->InsertTimeStart, CThostFtdcQryQuoteField_InsertTimeStart, sizeof(data->InsertTimeStart));
        CThostFtdcQryQuoteField_InsertTimeStart = NULL;
    }

    /// 结束时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcQryQuoteField_InsertTimeEnd != NULL ) {
        if(CThostFtdcQryQuoteField_InsertTimeEnd_length >= (Py_ssize_t)sizeof(data->InsertTimeEnd)) {
            PyErr_Format(PyExc_ValueError, "InsertTimeEnd too long: length=%zd (max allowed is 8)", CThostFtdcQryQuoteField_InsertTimeEnd_length);
            return -1;
        }
        // memset(data->InsertTimeEnd, 0, sizeof(data->InsertTimeEnd));
        // memcpy(data->InsertTimeEnd, CThostFtdcQryQuoteField_InsertTimeEnd, CThostFtdcQryQuoteField_InsertTimeEnd_length);
        strncpy(data->InsertTimeEnd, CThostFtdcQryQuoteField_InsertTimeEnd, sizeof(data->InsertTimeEnd));
        CThostFtdcQryQuoteField_InsertTimeEnd = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcQryQuoteField_InvestUnitID != NULL ) {
        if(CThostFtdcQryQuoteField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcQryQuoteField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcQryQuoteField_InvestUnitID, CThostFtdcQryQuoteField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcQryQuoteField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcQryQuoteField_InvestUnitID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryQuoteField_InstrumentID != NULL ) {
        if(CThostFtdcQryQuoteField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcQryQuoteField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcQryQuoteField_InstrumentID, CThostFtdcQryQuoteField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcQryQuoteField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcQryQuoteField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryQuoteFieldType_repr(PyObject *self) {

    PyCThostFtdcQryQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryQuoteFieldData>(self);
    CThostFtdcQryQuoteField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "QuoteSysID", data->QuoteSysID//, (Py_ssize_t)sizeof(data->QuoteSysID)
        , "InsertTimeStart", data->InsertTimeStart//, (Py_ssize_t)sizeof(data->InsertTimeStart)
        , "InsertTimeEnd", data->InsertTimeEnd//, (Py_ssize_t)sizeof(data->InsertTimeEnd)
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryQuoteField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryQuoteField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryQuoteFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryQuoteFieldData>(self);
    CThostFtdcQryQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryQuoteFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryQuoteField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryQuoteFieldData>(self);
    CThostFtdcQryQuoteField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryQuoteFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryQuoteFieldData>(self);
    CThostFtdcQryQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryQuoteFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryQuoteField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryQuoteFieldData>(self);
    CThostFtdcQryQuoteField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcQryQuoteFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcQryQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryQuoteFieldData>(self);
    CThostFtdcQryQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcQryQuoteFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryQuoteField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryQuoteFieldData>(self);
    CThostFtdcQryQuoteField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryQuoteFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryQuoteFieldData>(self);
    CThostFtdcQryQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryQuoteFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryQuoteField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryQuoteFieldData>(self);
    CThostFtdcQryQuoteField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报价编号
/// typedef char TThostFtdcOrderSysIDType[21]
static PyObject *PyCThostFtdcQryQuoteFieldType_get_QuoteSysID(PyObject *self, void *closure) {
    PyCThostFtdcQryQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryQuoteFieldData>(self);
    CThostFtdcQryQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->QuoteSysID, (Py_ssize_t)sizeof(data->QuoteSysID));
    return PyBytes_FromString(data->QuoteSysID);
}

static int PyCThostFtdcQryQuoteFieldType_set_QuoteSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "QuoteSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryQuoteField::QuoteSysID)) {
        PyErr_SetString(PyExc_ValueError, "QuoteSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryQuoteFieldData>(self);
    CThostFtdcQryQuoteField *data = &(extra->data);
    // memset(data->QuoteSysID, 0, sizeof(data->QuoteSysID));
    // memcpy(data->QuoteSysID, buf, len);
    strncpy(data->QuoteSysID, buf, sizeof(data->QuoteSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 开始时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcQryQuoteFieldType_get_InsertTimeStart(PyObject *self, void *closure) {
    PyCThostFtdcQryQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryQuoteFieldData>(self);
    CThostFtdcQryQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InsertTimeStart, (Py_ssize_t)sizeof(data->InsertTimeStart));
    return PyBytes_FromString(data->InsertTimeStart);
}

static int PyCThostFtdcQryQuoteFieldType_set_InsertTimeStart(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InsertTimeStart Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryQuoteField::InsertTimeStart)) {
        PyErr_SetString(PyExc_ValueError, "InsertTimeStart must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryQuoteFieldData>(self);
    CThostFtdcQryQuoteField *data = &(extra->data);
    // memset(data->InsertTimeStart, 0, sizeof(data->InsertTimeStart));
    // memcpy(data->InsertTimeStart, buf, len);
    strncpy(data->InsertTimeStart, buf, sizeof(data->InsertTimeStart));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 结束时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcQryQuoteFieldType_get_InsertTimeEnd(PyObject *self, void *closure) {
    PyCThostFtdcQryQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryQuoteFieldData>(self);
    CThostFtdcQryQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InsertTimeEnd, (Py_ssize_t)sizeof(data->InsertTimeEnd));
    return PyBytes_FromString(data->InsertTimeEnd);
}

static int PyCThostFtdcQryQuoteFieldType_set_InsertTimeEnd(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InsertTimeEnd Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryQuoteField::InsertTimeEnd)) {
        PyErr_SetString(PyExc_ValueError, "InsertTimeEnd must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryQuoteFieldData>(self);
    CThostFtdcQryQuoteField *data = &(extra->data);
    // memset(data->InsertTimeEnd, 0, sizeof(data->InsertTimeEnd));
    // memcpy(data->InsertTimeEnd, buf, len);
    strncpy(data->InsertTimeEnd, buf, sizeof(data->InsertTimeEnd));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcQryQuoteFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcQryQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryQuoteFieldData>(self);
    CThostFtdcQryQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcQryQuoteFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryQuoteField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryQuoteFieldData>(self);
    CThostFtdcQryQuoteField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryQuoteFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcQryQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryQuoteFieldData>(self);
    CThostFtdcQryQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcQryQuoteFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryQuoteField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryQuoteFieldData>(self);
    CThostFtdcQryQuoteField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryQuoteFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryQuoteFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryQuoteFieldType_get_BrokerID,
    .set = PyCThostFtdcQryQuoteFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryQuoteFieldType_get_InvestorID,
    .set = PyCThostFtdcQryQuoteFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcQryQuoteFieldType_get_reserve1,
    .set = PyCThostFtdcQryQuoteFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryQuoteFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryQuoteFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 报价编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    {
    .name = "QuoteSysID",
    .get = PyCThostFtdcQryQuoteFieldType_get_QuoteSysID,
    .set = PyCThostFtdcQryQuoteFieldType_set_QuoteSysID,
    .doc = PyDoc_STR("报价编号"),
    },
    /// 开始时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "InsertTimeStart",
    .get = PyCThostFtdcQryQuoteFieldType_get_InsertTimeStart,
    .set = PyCThostFtdcQryQuoteFieldType_set_InsertTimeStart,
    .doc = PyDoc_STR("开始时间"),
    },
    /// 结束时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "InsertTimeEnd",
    .get = PyCThostFtdcQryQuoteFieldType_get_InsertTimeEnd,
    .set = PyCThostFtdcQryQuoteFieldType_set_InsertTimeEnd,
    .doc = PyDoc_STR("结束时间"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcQryQuoteFieldType_get_InvestUnitID,
    .set = PyCThostFtdcQryQuoteFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcQryQuoteFieldType_get_InstrumentID,
    .set = PyCThostFtdcQryQuoteFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryQuoteFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryQuoteField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("报价查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryQuoteFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryQuoteFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryQuoteFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryQuoteFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryQuoteFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryQuoteFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("报价查询")},
    {Py_tp_members, PyCThostFtdcQryQuoteFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryQuoteFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryQuoteFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryQuoteFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryQuoteFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryQuoteField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryQuoteFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryQuoteFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryQuoteFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryQuoteFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryQuoteFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryQuoteFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryQuoteFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryQuoteFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryQuoteField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryQuoteField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}