
#include "PyCThostFtdcQryOptionSelfCloseField.h"

///期权自对冲查询

static int PyCThostFtdcQryOptionSelfCloseFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "reserve1", "ExchangeID", "OptionSelfCloseSysID", "InsertTimeStart", "InsertTimeEnd", "InstrumentID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryOptionSelfCloseField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryOptionSelfCloseField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryOptionSelfCloseField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryOptionSelfCloseField_InvestorID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcQryOptionSelfCloseField_reserve1 = NULL;
    Py_ssize_t CThostFtdcQryOptionSelfCloseField_reserve1_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryOptionSelfCloseField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryOptionSelfCloseField_ExchangeID_length = 0;

    /// 期权自对冲编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    char *CThostFtdcQryOptionSelfCloseField_OptionSelfCloseSysID = NULL;
    Py_ssize_t CThostFtdcQryOptionSelfCloseField_OptionSelfCloseSysID_length = 0;

    /// 开始时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcQryOptionSelfCloseField_InsertTimeStart = NULL;
    Py_ssize_t CThostFtdcQryOptionSelfCloseField_InsertTimeStart_length = 0;

    /// 结束时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcQryOptionSelfCloseField_InsertTimeEnd = NULL;
    Py_ssize_t CThostFtdcQryOptionSelfCloseField_InsertTimeEnd_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryOptionSelfCloseField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcQryOptionSelfCloseField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcQryOptionSelfCloseField_BrokerID, &CThostFtdcQryOptionSelfCloseField_BrokerID_length
        , &CThostFtdcQryOptionSelfCloseField_InvestorID, &CThostFtdcQryOptionSelfCloseField_InvestorID_length
        , &CThostFtdcQryOptionSelfCloseField_reserve1, &CThostFtdcQryOptionSelfCloseField_reserve1_length
        , &CThostFtdcQryOptionSelfCloseField_ExchangeID, &CThostFtdcQryOptionSelfCloseField_ExchangeID_length
        , &CThostFtdcQryOptionSelfCloseField_OptionSelfCloseSysID, &CThostFtdcQryOptionSelfCloseField_OptionSelfCloseSysID_length
        , &CThostFtdcQryOptionSelfCloseField_InsertTimeStart, &CThostFtdcQryOptionSelfCloseField_InsertTimeStart_length
        , &CThostFtdcQryOptionSelfCloseField_InsertTimeEnd, &CThostFtdcQryOptionSelfCloseField_InsertTimeEnd_length
        , &CThostFtdcQryOptionSelfCloseField_InstrumentID, &CThostFtdcQryOptionSelfCloseField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionSelfCloseFieldData>(self);
    CThostFtdcQryOptionSelfCloseField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryOptionSelfCloseField_BrokerID != NULL ) {
        if(CThostFtdcQryOptionSelfCloseField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryOptionSelfCloseField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryOptionSelfCloseField_BrokerID, CThostFtdcQryOptionSelfCloseField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryOptionSelfCloseField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryOptionSelfCloseField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryOptionSelfCloseField_InvestorID != NULL ) {
        if(CThostFtdcQryOptionSelfCloseField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryOptionSelfCloseField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryOptionSelfCloseField_InvestorID, CThostFtdcQryOptionSelfCloseField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryOptionSelfCloseField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryOptionSelfCloseField_InvestorID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcQryOptionSelfCloseField_reserve1 != NULL ) {
        if(CThostFtdcQryOptionSelfCloseField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcQryOptionSelfCloseField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcQryOptionSelfCloseField_reserve1, CThostFtdcQryOptionSelfCloseField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcQryOptionSelfCloseField_reserve1, sizeof(data->reserve1));
        CThostFtdcQryOptionSelfCloseField_reserve1 = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryOptionSelfCloseField_ExchangeID != NULL ) {
        if(CThostFtdcQryOptionSelfCloseField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryOptionSelfCloseField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryOptionSelfCloseField_ExchangeID, CThostFtdcQryOptionSelfCloseField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryOptionSelfCloseField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryOptionSelfCloseField_ExchangeID = NULL;
    }

    /// 期权自对冲编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    if( CThostFtdcQryOptionSelfCloseField_OptionSelfCloseSysID != NULL ) {
        if(CThostFtdcQryOptionSelfCloseField_OptionSelfCloseSysID_length >= (Py_ssize_t)sizeof(data->OptionSelfCloseSysID)) {
            PyErr_Format(PyExc_ValueError, "OptionSelfCloseSysID too long: length=%zd (max allowed is 20)", CThostFtdcQryOptionSelfCloseField_OptionSelfCloseSysID_length);
            return -1;
        }
        // memset(data->OptionSelfCloseSysID, 0, sizeof(data->OptionSelfCloseSysID));
        // memcpy(data->OptionSelfCloseSysID, CThostFtdcQryOptionSelfCloseField_OptionSelfCloseSysID, CThostFtdcQryOptionSelfCloseField_OptionSelfCloseSysID_length);
        strncpy(data->OptionSelfCloseSysID, CThostFtdcQryOptionSelfCloseField_OptionSelfCloseSysID, sizeof(data->OptionSelfCloseSysID));
        CThostFtdcQryOptionSelfCloseField_OptionSelfCloseSysID = NULL;
    }

    /// 开始时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcQryOptionSelfCloseField_InsertTimeStart != NULL ) {
        if(CThostFtdcQryOptionSelfCloseField_InsertTimeStart_length >= (Py_ssize_t)sizeof(data->InsertTimeStart)) {
            PyErr_Format(PyExc_ValueError, "InsertTimeStart too long: length=%zd (max allowed is 8)", CThostFtdcQryOptionSelfCloseField_InsertTimeStart_length);
            return -1;
        }
        // memset(data->InsertTimeStart, 0, sizeof(data->InsertTimeStart));
        // memcpy(data->InsertTimeStart, CThostFtdcQryOptionSelfCloseField_InsertTimeStart, CThostFtdcQryOptionSelfCloseField_InsertTimeStart_length);
        strncpy(data->InsertTimeStart, CThostFtdcQryOptionSelfCloseField_InsertTimeStart, sizeof(data->InsertTimeStart));
        CThostFtdcQryOptionSelfCloseField_InsertTimeStart = NULL;
    }

    /// 结束时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcQryOptionSelfCloseField_InsertTimeEnd != NULL ) {
        if(CThostFtdcQryOptionSelfCloseField_InsertTimeEnd_length >= (Py_ssize_t)sizeof(data->InsertTimeEnd)) {
            PyErr_Format(PyExc_ValueError, "InsertTimeEnd too long: length=%zd (max allowed is 8)", CThostFtdcQryOptionSelfCloseField_InsertTimeEnd_length);
            return -1;
        }
        // memset(data->InsertTimeEnd, 0, sizeof(data->InsertTimeEnd));
        // memcpy(data->InsertTimeEnd, CThostFtdcQryOptionSelfCloseField_InsertTimeEnd, CThostFtdcQryOptionSelfCloseField_InsertTimeEnd_length);
        strncpy(data->InsertTimeEnd, CThostFtdcQryOptionSelfCloseField_InsertTimeEnd, sizeof(data->InsertTimeEnd));
        CThostFtdcQryOptionSelfCloseField_InsertTimeEnd = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryOptionSelfCloseField_InstrumentID != NULL ) {
        if(CThostFtdcQryOptionSelfCloseField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcQryOptionSelfCloseField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcQryOptionSelfCloseField_InstrumentID, CThostFtdcQryOptionSelfCloseField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcQryOptionSelfCloseField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcQryOptionSelfCloseField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryOptionSelfCloseFieldType_repr(PyObject *self) {

    PyCThostFtdcQryOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionSelfCloseFieldData>(self);
    CThostFtdcQryOptionSelfCloseField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "OptionSelfCloseSysID", data->OptionSelfCloseSysID//, (Py_ssize_t)sizeof(data->OptionSelfCloseSysID)
        , "InsertTimeStart", data->InsertTimeStart//, (Py_ssize_t)sizeof(data->InsertTimeStart)
        , "InsertTimeEnd", data->InsertTimeEnd//, (Py_ssize_t)sizeof(data->InsertTimeEnd)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryOptionSelfCloseField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryOptionSelfCloseField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryOptionSelfCloseFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionSelfCloseFieldData>(self);
    CThostFtdcQryOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryOptionSelfCloseFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryOptionSelfCloseField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionSelfCloseFieldData>(self);
    CThostFtdcQryOptionSelfCloseField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryOptionSelfCloseFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionSelfCloseFieldData>(self);
    CThostFtdcQryOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryOptionSelfCloseFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryOptionSelfCloseField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionSelfCloseFieldData>(self);
    CThostFtdcQryOptionSelfCloseField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcQryOptionSelfCloseFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcQryOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionSelfCloseFieldData>(self);
    CThostFtdcQryOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcQryOptionSelfCloseFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryOptionSelfCloseField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionSelfCloseFieldData>(self);
    CThostFtdcQryOptionSelfCloseField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryOptionSelfCloseFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionSelfCloseFieldData>(self);
    CThostFtdcQryOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryOptionSelfCloseFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryOptionSelfCloseField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionSelfCloseFieldData>(self);
    CThostFtdcQryOptionSelfCloseField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期权自对冲编号
/// typedef char TThostFtdcOrderSysIDType[21]
static PyObject *PyCThostFtdcQryOptionSelfCloseFieldType_get_OptionSelfCloseSysID(PyObject *self, void *closure) {
    PyCThostFtdcQryOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionSelfCloseFieldData>(self);
    CThostFtdcQryOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OptionSelfCloseSysID, (Py_ssize_t)sizeof(data->OptionSelfCloseSysID));
    return PyBytes_FromString(data->OptionSelfCloseSysID);
}

static int PyCThostFtdcQryOptionSelfCloseFieldType_set_OptionSelfCloseSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OptionSelfCloseSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryOptionSelfCloseField::OptionSelfCloseSysID)) {
        PyErr_SetString(PyExc_ValueError, "OptionSelfCloseSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionSelfCloseFieldData>(self);
    CThostFtdcQryOptionSelfCloseField *data = &(extra->data);
    // memset(data->OptionSelfCloseSysID, 0, sizeof(data->OptionSelfCloseSysID));
    // memcpy(data->OptionSelfCloseSysID, buf, len);
    strncpy(data->OptionSelfCloseSysID, buf, sizeof(data->OptionSelfCloseSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 开始时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcQryOptionSelfCloseFieldType_get_InsertTimeStart(PyObject *self, void *closure) {
    PyCThostFtdcQryOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionSelfCloseFieldData>(self);
    CThostFtdcQryOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InsertTimeStart, (Py_ssize_t)sizeof(data->InsertTimeStart));
    return PyBytes_FromString(data->InsertTimeStart);
}

static int PyCThostFtdcQryOptionSelfCloseFieldType_set_InsertTimeStart(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InsertTimeStart Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryOptionSelfCloseField::InsertTimeStart)) {
        PyErr_SetString(PyExc_ValueError, "InsertTimeStart must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionSelfCloseFieldData>(self);
    CThostFtdcQryOptionSelfCloseField *data = &(extra->data);
    // memset(data->InsertTimeStart, 0, sizeof(data->InsertTimeStart));
    // memcpy(data->InsertTimeStart, buf, len);
    strncpy(data->InsertTimeStart, buf, sizeof(data->InsertTimeStart));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 结束时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcQryOptionSelfCloseFieldType_get_InsertTimeEnd(PyObject *self, void *closure) {
    PyCThostFtdcQryOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionSelfCloseFieldData>(self);
    CThostFtdcQryOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InsertTimeEnd, (Py_ssize_t)sizeof(data->InsertTimeEnd));
    return PyBytes_FromString(data->InsertTimeEnd);
}

static int PyCThostFtdcQryOptionSelfCloseFieldType_set_InsertTimeEnd(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InsertTimeEnd Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryOptionSelfCloseField::InsertTimeEnd)) {
        PyErr_SetString(PyExc_ValueError, "InsertTimeEnd must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionSelfCloseFieldData>(self);
    CThostFtdcQryOptionSelfCloseField *data = &(extra->data);
    // memset(data->InsertTimeEnd, 0, sizeof(data->InsertTimeEnd));
    // memcpy(data->InsertTimeEnd, buf, len);
    strncpy(data->InsertTimeEnd, buf, sizeof(data->InsertTimeEnd));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryOptionSelfCloseFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcQryOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionSelfCloseFieldData>(self);
    CThostFtdcQryOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcQryOptionSelfCloseFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryOptionSelfCloseField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionSelfCloseFieldData>(self);
    CThostFtdcQryOptionSelfCloseField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryOptionSelfCloseFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryOptionSelfCloseFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryOptionSelfCloseFieldType_get_BrokerID,
    .set = PyCThostFtdcQryOptionSelfCloseFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryOptionSelfCloseFieldType_get_InvestorID,
    .set = PyCThostFtdcQryOptionSelfCloseFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcQryOptionSelfCloseFieldType_get_reserve1,
    .set = PyCThostFtdcQryOptionSelfCloseFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryOptionSelfCloseFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryOptionSelfCloseFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 期权自对冲编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    {
    .name = "OptionSelfCloseSysID",
    .get = PyCThostFtdcQryOptionSelfCloseFieldType_get_OptionSelfCloseSysID,
    .set = PyCThostFtdcQryOptionSelfCloseFieldType_set_OptionSelfCloseSysID,
    .doc = PyDoc_STR("期权自对冲编号"),
    },
    /// 开始时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "InsertTimeStart",
    .get = PyCThostFtdcQryOptionSelfCloseFieldType_get_InsertTimeStart,
    .set = PyCThostFtdcQryOptionSelfCloseFieldType_set_InsertTimeStart,
    .doc = PyDoc_STR("开始时间"),
    },
    /// 结束时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "InsertTimeEnd",
    .get = PyCThostFtdcQryOptionSelfCloseFieldType_get_InsertTimeEnd,
    .set = PyCThostFtdcQryOptionSelfCloseFieldType_set_InsertTimeEnd,
    .doc = PyDoc_STR("结束时间"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcQryOptionSelfCloseFieldType_get_InstrumentID,
    .set = PyCThostFtdcQryOptionSelfCloseFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryOptionSelfCloseFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryOptionSelfCloseField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("期权自对冲查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryOptionSelfCloseFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryOptionSelfCloseFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryOptionSelfCloseFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryOptionSelfCloseFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryOptionSelfCloseFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryOptionSelfCloseFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("期权自对冲查询")},
    {Py_tp_members, PyCThostFtdcQryOptionSelfCloseFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryOptionSelfCloseFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryOptionSelfCloseFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryOptionSelfCloseFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryOptionSelfCloseFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryOptionSelfCloseField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryOptionSelfCloseFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryOptionSelfCloseFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryOptionSelfCloseFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryOptionSelfCloseFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryOptionSelfCloseFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryOptionSelfCloseFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryOptionSelfCloseFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryOptionSelfCloseFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryOptionSelfCloseField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryOptionSelfCloseField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}