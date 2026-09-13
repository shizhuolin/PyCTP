
#include "PyCThostFtdcQryExecOrderField.h"

///执行宣告查询

static int PyCThostFtdcQryExecOrderFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "reserve1", "ExchangeID", "ExecOrderSysID", "InsertTimeStart", "InsertTimeEnd", "InstrumentID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryExecOrderField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryExecOrderField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryExecOrderField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryExecOrderField_InvestorID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcQryExecOrderField_reserve1 = NULL;
    Py_ssize_t CThostFtdcQryExecOrderField_reserve1_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryExecOrderField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryExecOrderField_ExchangeID_length = 0;

    /// 执行宣告编号
    /// typedef char TThostFtdcExecOrderSysIDType[21]
    char *CThostFtdcQryExecOrderField_ExecOrderSysID = NULL;
    Py_ssize_t CThostFtdcQryExecOrderField_ExecOrderSysID_length = 0;

    /// 开始时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcQryExecOrderField_InsertTimeStart = NULL;
    Py_ssize_t CThostFtdcQryExecOrderField_InsertTimeStart_length = 0;

    /// 结束时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcQryExecOrderField_InsertTimeEnd = NULL;
    Py_ssize_t CThostFtdcQryExecOrderField_InsertTimeEnd_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryExecOrderField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcQryExecOrderField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcQryExecOrderField_BrokerID, &CThostFtdcQryExecOrderField_BrokerID_length
        , &CThostFtdcQryExecOrderField_InvestorID, &CThostFtdcQryExecOrderField_InvestorID_length
        , &CThostFtdcQryExecOrderField_reserve1, &CThostFtdcQryExecOrderField_reserve1_length
        , &CThostFtdcQryExecOrderField_ExchangeID, &CThostFtdcQryExecOrderField_ExchangeID_length
        , &CThostFtdcQryExecOrderField_ExecOrderSysID, &CThostFtdcQryExecOrderField_ExecOrderSysID_length
        , &CThostFtdcQryExecOrderField_InsertTimeStart, &CThostFtdcQryExecOrderField_InsertTimeStart_length
        , &CThostFtdcQryExecOrderField_InsertTimeEnd, &CThostFtdcQryExecOrderField_InsertTimeEnd_length
        , &CThostFtdcQryExecOrderField_InstrumentID, &CThostFtdcQryExecOrderField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExecOrderFieldData>(self);
    CThostFtdcQryExecOrderField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryExecOrderField_BrokerID != NULL ) {
        if(CThostFtdcQryExecOrderField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryExecOrderField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryExecOrderField_BrokerID, CThostFtdcQryExecOrderField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryExecOrderField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryExecOrderField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryExecOrderField_InvestorID != NULL ) {
        if(CThostFtdcQryExecOrderField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryExecOrderField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryExecOrderField_InvestorID, CThostFtdcQryExecOrderField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryExecOrderField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryExecOrderField_InvestorID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcQryExecOrderField_reserve1 != NULL ) {
        if(CThostFtdcQryExecOrderField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcQryExecOrderField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcQryExecOrderField_reserve1, CThostFtdcQryExecOrderField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcQryExecOrderField_reserve1, sizeof(data->reserve1));
        CThostFtdcQryExecOrderField_reserve1 = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryExecOrderField_ExchangeID != NULL ) {
        if(CThostFtdcQryExecOrderField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryExecOrderField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryExecOrderField_ExchangeID, CThostFtdcQryExecOrderField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryExecOrderField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryExecOrderField_ExchangeID = NULL;
    }

    /// 执行宣告编号
    /// typedef char TThostFtdcExecOrderSysIDType[21]
    if( CThostFtdcQryExecOrderField_ExecOrderSysID != NULL ) {
        if(CThostFtdcQryExecOrderField_ExecOrderSysID_length >= (Py_ssize_t)sizeof(data->ExecOrderSysID)) {
            PyErr_Format(PyExc_ValueError, "ExecOrderSysID too long: length=%zd (max allowed is 20)", CThostFtdcQryExecOrderField_ExecOrderSysID_length);
            return -1;
        }
        // memset(data->ExecOrderSysID, 0, sizeof(data->ExecOrderSysID));
        // memcpy(data->ExecOrderSysID, CThostFtdcQryExecOrderField_ExecOrderSysID, CThostFtdcQryExecOrderField_ExecOrderSysID_length);
        strncpy(data->ExecOrderSysID, CThostFtdcQryExecOrderField_ExecOrderSysID, sizeof(data->ExecOrderSysID));
        CThostFtdcQryExecOrderField_ExecOrderSysID = NULL;
    }

    /// 开始时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcQryExecOrderField_InsertTimeStart != NULL ) {
        if(CThostFtdcQryExecOrderField_InsertTimeStart_length >= (Py_ssize_t)sizeof(data->InsertTimeStart)) {
            PyErr_Format(PyExc_ValueError, "InsertTimeStart too long: length=%zd (max allowed is 8)", CThostFtdcQryExecOrderField_InsertTimeStart_length);
            return -1;
        }
        // memset(data->InsertTimeStart, 0, sizeof(data->InsertTimeStart));
        // memcpy(data->InsertTimeStart, CThostFtdcQryExecOrderField_InsertTimeStart, CThostFtdcQryExecOrderField_InsertTimeStart_length);
        strncpy(data->InsertTimeStart, CThostFtdcQryExecOrderField_InsertTimeStart, sizeof(data->InsertTimeStart));
        CThostFtdcQryExecOrderField_InsertTimeStart = NULL;
    }

    /// 结束时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcQryExecOrderField_InsertTimeEnd != NULL ) {
        if(CThostFtdcQryExecOrderField_InsertTimeEnd_length >= (Py_ssize_t)sizeof(data->InsertTimeEnd)) {
            PyErr_Format(PyExc_ValueError, "InsertTimeEnd too long: length=%zd (max allowed is 8)", CThostFtdcQryExecOrderField_InsertTimeEnd_length);
            return -1;
        }
        // memset(data->InsertTimeEnd, 0, sizeof(data->InsertTimeEnd));
        // memcpy(data->InsertTimeEnd, CThostFtdcQryExecOrderField_InsertTimeEnd, CThostFtdcQryExecOrderField_InsertTimeEnd_length);
        strncpy(data->InsertTimeEnd, CThostFtdcQryExecOrderField_InsertTimeEnd, sizeof(data->InsertTimeEnd));
        CThostFtdcQryExecOrderField_InsertTimeEnd = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryExecOrderField_InstrumentID != NULL ) {
        if(CThostFtdcQryExecOrderField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcQryExecOrderField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcQryExecOrderField_InstrumentID, CThostFtdcQryExecOrderField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcQryExecOrderField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcQryExecOrderField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryExecOrderFieldType_repr(PyObject *self) {

    PyCThostFtdcQryExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExecOrderFieldData>(self);
    CThostFtdcQryExecOrderField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ExecOrderSysID", data->ExecOrderSysID//, (Py_ssize_t)sizeof(data->ExecOrderSysID)
        , "InsertTimeStart", data->InsertTimeStart//, (Py_ssize_t)sizeof(data->InsertTimeStart)
        , "InsertTimeEnd", data->InsertTimeEnd//, (Py_ssize_t)sizeof(data->InsertTimeEnd)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryExecOrderField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryExecOrderField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryExecOrderFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExecOrderFieldData>(self);
    CThostFtdcQryExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryExecOrderFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryExecOrderField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExecOrderFieldData>(self);
    CThostFtdcQryExecOrderField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryExecOrderFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExecOrderFieldData>(self);
    CThostFtdcQryExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryExecOrderFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryExecOrderField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExecOrderFieldData>(self);
    CThostFtdcQryExecOrderField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcQryExecOrderFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcQryExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExecOrderFieldData>(self);
    CThostFtdcQryExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcQryExecOrderFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryExecOrderField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExecOrderFieldData>(self);
    CThostFtdcQryExecOrderField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryExecOrderFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExecOrderFieldData>(self);
    CThostFtdcQryExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryExecOrderFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryExecOrderField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExecOrderFieldData>(self);
    CThostFtdcQryExecOrderField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 执行宣告编号
/// typedef char TThostFtdcExecOrderSysIDType[21]
static PyObject *PyCThostFtdcQryExecOrderFieldType_get_ExecOrderSysID(PyObject *self, void *closure) {
    PyCThostFtdcQryExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExecOrderFieldData>(self);
    CThostFtdcQryExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExecOrderSysID, (Py_ssize_t)sizeof(data->ExecOrderSysID));
    return PyBytes_FromString(data->ExecOrderSysID);
}

static int PyCThostFtdcQryExecOrderFieldType_set_ExecOrderSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExecOrderSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryExecOrderField::ExecOrderSysID)) {
        PyErr_SetString(PyExc_ValueError, "ExecOrderSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExecOrderFieldData>(self);
    CThostFtdcQryExecOrderField *data = &(extra->data);
    // memset(data->ExecOrderSysID, 0, sizeof(data->ExecOrderSysID));
    // memcpy(data->ExecOrderSysID, buf, len);
    strncpy(data->ExecOrderSysID, buf, sizeof(data->ExecOrderSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 开始时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcQryExecOrderFieldType_get_InsertTimeStart(PyObject *self, void *closure) {
    PyCThostFtdcQryExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExecOrderFieldData>(self);
    CThostFtdcQryExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InsertTimeStart, (Py_ssize_t)sizeof(data->InsertTimeStart));
    return PyBytes_FromString(data->InsertTimeStart);
}

static int PyCThostFtdcQryExecOrderFieldType_set_InsertTimeStart(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InsertTimeStart Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryExecOrderField::InsertTimeStart)) {
        PyErr_SetString(PyExc_ValueError, "InsertTimeStart must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExecOrderFieldData>(self);
    CThostFtdcQryExecOrderField *data = &(extra->data);
    // memset(data->InsertTimeStart, 0, sizeof(data->InsertTimeStart));
    // memcpy(data->InsertTimeStart, buf, len);
    strncpy(data->InsertTimeStart, buf, sizeof(data->InsertTimeStart));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 结束时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcQryExecOrderFieldType_get_InsertTimeEnd(PyObject *self, void *closure) {
    PyCThostFtdcQryExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExecOrderFieldData>(self);
    CThostFtdcQryExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InsertTimeEnd, (Py_ssize_t)sizeof(data->InsertTimeEnd));
    return PyBytes_FromString(data->InsertTimeEnd);
}

static int PyCThostFtdcQryExecOrderFieldType_set_InsertTimeEnd(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InsertTimeEnd Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryExecOrderField::InsertTimeEnd)) {
        PyErr_SetString(PyExc_ValueError, "InsertTimeEnd must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExecOrderFieldData>(self);
    CThostFtdcQryExecOrderField *data = &(extra->data);
    // memset(data->InsertTimeEnd, 0, sizeof(data->InsertTimeEnd));
    // memcpy(data->InsertTimeEnd, buf, len);
    strncpy(data->InsertTimeEnd, buf, sizeof(data->InsertTimeEnd));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryExecOrderFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcQryExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExecOrderFieldData>(self);
    CThostFtdcQryExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcQryExecOrderFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryExecOrderField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExecOrderFieldData>(self);
    CThostFtdcQryExecOrderField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryExecOrderFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryExecOrderFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryExecOrderFieldType_get_BrokerID,
    .set = PyCThostFtdcQryExecOrderFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryExecOrderFieldType_get_InvestorID,
    .set = PyCThostFtdcQryExecOrderFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcQryExecOrderFieldType_get_reserve1,
    .set = PyCThostFtdcQryExecOrderFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryExecOrderFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryExecOrderFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 执行宣告编号
    /// typedef char TThostFtdcExecOrderSysIDType[21]
    {
    .name = "ExecOrderSysID",
    .get = PyCThostFtdcQryExecOrderFieldType_get_ExecOrderSysID,
    .set = PyCThostFtdcQryExecOrderFieldType_set_ExecOrderSysID,
    .doc = PyDoc_STR("执行宣告编号"),
    },
    /// 开始时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "InsertTimeStart",
    .get = PyCThostFtdcQryExecOrderFieldType_get_InsertTimeStart,
    .set = PyCThostFtdcQryExecOrderFieldType_set_InsertTimeStart,
    .doc = PyDoc_STR("开始时间"),
    },
    /// 结束时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "InsertTimeEnd",
    .get = PyCThostFtdcQryExecOrderFieldType_get_InsertTimeEnd,
    .set = PyCThostFtdcQryExecOrderFieldType_set_InsertTimeEnd,
    .doc = PyDoc_STR("结束时间"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcQryExecOrderFieldType_get_InstrumentID,
    .set = PyCThostFtdcQryExecOrderFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryExecOrderFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryExecOrderField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("执行宣告查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryExecOrderFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryExecOrderFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryExecOrderFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryExecOrderFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryExecOrderFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryExecOrderFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("执行宣告查询")},
    {Py_tp_members, PyCThostFtdcQryExecOrderFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryExecOrderFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryExecOrderFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryExecOrderFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryExecOrderFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryExecOrderField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryExecOrderFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryExecOrderFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryExecOrderFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryExecOrderFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryExecOrderFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryExecOrderFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryExecOrderFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryExecOrderFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryExecOrderField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryExecOrderField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}