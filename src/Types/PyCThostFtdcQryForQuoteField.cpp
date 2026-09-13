
#include "PyCThostFtdcQryForQuoteField.h"

///询价查询

static int PyCThostFtdcQryForQuoteFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "reserve1", "ExchangeID", "InsertTimeStart", "InsertTimeEnd", "InvestUnitID", "InstrumentID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryForQuoteField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryForQuoteField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryForQuoteField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryForQuoteField_InvestorID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcQryForQuoteField_reserve1 = NULL;
    Py_ssize_t CThostFtdcQryForQuoteField_reserve1_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryForQuoteField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryForQuoteField_ExchangeID_length = 0;

    /// 开始时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcQryForQuoteField_InsertTimeStart = NULL;
    Py_ssize_t CThostFtdcQryForQuoteField_InsertTimeStart_length = 0;

    /// 结束时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcQryForQuoteField_InsertTimeEnd = NULL;
    Py_ssize_t CThostFtdcQryForQuoteField_InsertTimeEnd_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcQryForQuoteField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcQryForQuoteField_InvestUnitID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryForQuoteField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcQryForQuoteField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcQryForQuoteField_BrokerID, &CThostFtdcQryForQuoteField_BrokerID_length
        , &CThostFtdcQryForQuoteField_InvestorID, &CThostFtdcQryForQuoteField_InvestorID_length
        , &CThostFtdcQryForQuoteField_reserve1, &CThostFtdcQryForQuoteField_reserve1_length
        , &CThostFtdcQryForQuoteField_ExchangeID, &CThostFtdcQryForQuoteField_ExchangeID_length
        , &CThostFtdcQryForQuoteField_InsertTimeStart, &CThostFtdcQryForQuoteField_InsertTimeStart_length
        , &CThostFtdcQryForQuoteField_InsertTimeEnd, &CThostFtdcQryForQuoteField_InsertTimeEnd_length
        , &CThostFtdcQryForQuoteField_InvestUnitID, &CThostFtdcQryForQuoteField_InvestUnitID_length
        , &CThostFtdcQryForQuoteField_InstrumentID, &CThostFtdcQryForQuoteField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryForQuoteFieldData>(self);
    CThostFtdcQryForQuoteField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryForQuoteField_BrokerID != NULL ) {
        if(CThostFtdcQryForQuoteField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryForQuoteField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryForQuoteField_BrokerID, CThostFtdcQryForQuoteField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryForQuoteField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryForQuoteField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryForQuoteField_InvestorID != NULL ) {
        if(CThostFtdcQryForQuoteField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryForQuoteField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryForQuoteField_InvestorID, CThostFtdcQryForQuoteField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryForQuoteField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryForQuoteField_InvestorID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcQryForQuoteField_reserve1 != NULL ) {
        if(CThostFtdcQryForQuoteField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcQryForQuoteField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcQryForQuoteField_reserve1, CThostFtdcQryForQuoteField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcQryForQuoteField_reserve1, sizeof(data->reserve1));
        CThostFtdcQryForQuoteField_reserve1 = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryForQuoteField_ExchangeID != NULL ) {
        if(CThostFtdcQryForQuoteField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryForQuoteField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryForQuoteField_ExchangeID, CThostFtdcQryForQuoteField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryForQuoteField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryForQuoteField_ExchangeID = NULL;
    }

    /// 开始时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcQryForQuoteField_InsertTimeStart != NULL ) {
        if(CThostFtdcQryForQuoteField_InsertTimeStart_length >= (Py_ssize_t)sizeof(data->InsertTimeStart)) {
            PyErr_Format(PyExc_ValueError, "InsertTimeStart too long: length=%zd (max allowed is 8)", CThostFtdcQryForQuoteField_InsertTimeStart_length);
            return -1;
        }
        // memset(data->InsertTimeStart, 0, sizeof(data->InsertTimeStart));
        // memcpy(data->InsertTimeStart, CThostFtdcQryForQuoteField_InsertTimeStart, CThostFtdcQryForQuoteField_InsertTimeStart_length);
        strncpy(data->InsertTimeStart, CThostFtdcQryForQuoteField_InsertTimeStart, sizeof(data->InsertTimeStart));
        CThostFtdcQryForQuoteField_InsertTimeStart = NULL;
    }

    /// 结束时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcQryForQuoteField_InsertTimeEnd != NULL ) {
        if(CThostFtdcQryForQuoteField_InsertTimeEnd_length >= (Py_ssize_t)sizeof(data->InsertTimeEnd)) {
            PyErr_Format(PyExc_ValueError, "InsertTimeEnd too long: length=%zd (max allowed is 8)", CThostFtdcQryForQuoteField_InsertTimeEnd_length);
            return -1;
        }
        // memset(data->InsertTimeEnd, 0, sizeof(data->InsertTimeEnd));
        // memcpy(data->InsertTimeEnd, CThostFtdcQryForQuoteField_InsertTimeEnd, CThostFtdcQryForQuoteField_InsertTimeEnd_length);
        strncpy(data->InsertTimeEnd, CThostFtdcQryForQuoteField_InsertTimeEnd, sizeof(data->InsertTimeEnd));
        CThostFtdcQryForQuoteField_InsertTimeEnd = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcQryForQuoteField_InvestUnitID != NULL ) {
        if(CThostFtdcQryForQuoteField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcQryForQuoteField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcQryForQuoteField_InvestUnitID, CThostFtdcQryForQuoteField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcQryForQuoteField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcQryForQuoteField_InvestUnitID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryForQuoteField_InstrumentID != NULL ) {
        if(CThostFtdcQryForQuoteField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcQryForQuoteField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcQryForQuoteField_InstrumentID, CThostFtdcQryForQuoteField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcQryForQuoteField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcQryForQuoteField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryForQuoteFieldType_repr(PyObject *self) {

    PyCThostFtdcQryForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryForQuoteFieldData>(self);
    CThostFtdcQryForQuoteField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "InsertTimeStart", data->InsertTimeStart//, (Py_ssize_t)sizeof(data->InsertTimeStart)
        , "InsertTimeEnd", data->InsertTimeEnd//, (Py_ssize_t)sizeof(data->InsertTimeEnd)
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryForQuoteField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryForQuoteField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryForQuoteFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryForQuoteFieldData>(self);
    CThostFtdcQryForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryForQuoteFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryForQuoteField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryForQuoteFieldData>(self);
    CThostFtdcQryForQuoteField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryForQuoteFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryForQuoteFieldData>(self);
    CThostFtdcQryForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryForQuoteFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryForQuoteField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryForQuoteFieldData>(self);
    CThostFtdcQryForQuoteField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcQryForQuoteFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcQryForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryForQuoteFieldData>(self);
    CThostFtdcQryForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcQryForQuoteFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryForQuoteField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryForQuoteFieldData>(self);
    CThostFtdcQryForQuoteField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryForQuoteFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryForQuoteFieldData>(self);
    CThostFtdcQryForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryForQuoteFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryForQuoteField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryForQuoteFieldData>(self);
    CThostFtdcQryForQuoteField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 开始时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcQryForQuoteFieldType_get_InsertTimeStart(PyObject *self, void *closure) {
    PyCThostFtdcQryForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryForQuoteFieldData>(self);
    CThostFtdcQryForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InsertTimeStart, (Py_ssize_t)sizeof(data->InsertTimeStart));
    return PyBytes_FromString(data->InsertTimeStart);
}

static int PyCThostFtdcQryForQuoteFieldType_set_InsertTimeStart(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InsertTimeStart Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryForQuoteField::InsertTimeStart)) {
        PyErr_SetString(PyExc_ValueError, "InsertTimeStart must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryForQuoteFieldData>(self);
    CThostFtdcQryForQuoteField *data = &(extra->data);
    // memset(data->InsertTimeStart, 0, sizeof(data->InsertTimeStart));
    // memcpy(data->InsertTimeStart, buf, len);
    strncpy(data->InsertTimeStart, buf, sizeof(data->InsertTimeStart));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 结束时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcQryForQuoteFieldType_get_InsertTimeEnd(PyObject *self, void *closure) {
    PyCThostFtdcQryForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryForQuoteFieldData>(self);
    CThostFtdcQryForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InsertTimeEnd, (Py_ssize_t)sizeof(data->InsertTimeEnd));
    return PyBytes_FromString(data->InsertTimeEnd);
}

static int PyCThostFtdcQryForQuoteFieldType_set_InsertTimeEnd(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InsertTimeEnd Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryForQuoteField::InsertTimeEnd)) {
        PyErr_SetString(PyExc_ValueError, "InsertTimeEnd must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryForQuoteFieldData>(self);
    CThostFtdcQryForQuoteField *data = &(extra->data);
    // memset(data->InsertTimeEnd, 0, sizeof(data->InsertTimeEnd));
    // memcpy(data->InsertTimeEnd, buf, len);
    strncpy(data->InsertTimeEnd, buf, sizeof(data->InsertTimeEnd));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcQryForQuoteFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcQryForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryForQuoteFieldData>(self);
    CThostFtdcQryForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcQryForQuoteFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryForQuoteField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryForQuoteFieldData>(self);
    CThostFtdcQryForQuoteField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryForQuoteFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcQryForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryForQuoteFieldData>(self);
    CThostFtdcQryForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcQryForQuoteFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryForQuoteField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryForQuoteFieldData>(self);
    CThostFtdcQryForQuoteField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryForQuoteFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryForQuoteFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryForQuoteFieldType_get_BrokerID,
    .set = PyCThostFtdcQryForQuoteFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryForQuoteFieldType_get_InvestorID,
    .set = PyCThostFtdcQryForQuoteFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcQryForQuoteFieldType_get_reserve1,
    .set = PyCThostFtdcQryForQuoteFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryForQuoteFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryForQuoteFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 开始时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "InsertTimeStart",
    .get = PyCThostFtdcQryForQuoteFieldType_get_InsertTimeStart,
    .set = PyCThostFtdcQryForQuoteFieldType_set_InsertTimeStart,
    .doc = PyDoc_STR("开始时间"),
    },
    /// 结束时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "InsertTimeEnd",
    .get = PyCThostFtdcQryForQuoteFieldType_get_InsertTimeEnd,
    .set = PyCThostFtdcQryForQuoteFieldType_set_InsertTimeEnd,
    .doc = PyDoc_STR("结束时间"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcQryForQuoteFieldType_get_InvestUnitID,
    .set = PyCThostFtdcQryForQuoteFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcQryForQuoteFieldType_get_InstrumentID,
    .set = PyCThostFtdcQryForQuoteFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryForQuoteFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryForQuoteField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("询价查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryForQuoteFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryForQuoteFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryForQuoteFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryForQuoteFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryForQuoteFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryForQuoteFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("询价查询")},
    {Py_tp_members, PyCThostFtdcQryForQuoteFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryForQuoteFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryForQuoteFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryForQuoteFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryForQuoteFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryForQuoteField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryForQuoteFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryForQuoteFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryForQuoteFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryForQuoteFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryForQuoteFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryForQuoteFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryForQuoteFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryForQuoteFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryForQuoteField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryForQuoteField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}