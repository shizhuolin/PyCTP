
#include "PyCThostFtdcInstrumentStatusField.h"

///合约状态

static int PyCThostFtdcInstrumentStatusFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "reserve1", "SettlementGroupID", "reserve2", "InstrumentStatus", "TradingSegmentSN", "EnterTime", "EnterReason", "ExchangeInstID", "InstrumentID", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcInstrumentStatusField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcInstrumentStatusField_ExchangeID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    char *CThostFtdcInstrumentStatusField_reserve1 = NULL;
    Py_ssize_t CThostFtdcInstrumentStatusField_reserve1_length = 0;

    /// 结算组代码
    /// typedef char TThostFtdcSettlementGroupIDType[9]
    char *CThostFtdcInstrumentStatusField_SettlementGroupID = NULL;
    Py_ssize_t CThostFtdcInstrumentStatusField_SettlementGroupID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcInstrumentStatusField_reserve2 = NULL;
    Py_ssize_t CThostFtdcInstrumentStatusField_reserve2_length = 0;

    /// 合约交易状态
    /// typedef char TThostFtdcInstrumentStatusType
    char CThostFtdcInstrumentStatusField_InstrumentStatus = 0;

    /// 交易阶段编号
    /// typedef int TThostFtdcTradingSegmentSNType
    int CThostFtdcInstrumentStatusField_TradingSegmentSN = 0;

    /// 进入本状态时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcInstrumentStatusField_EnterTime = NULL;
    Py_ssize_t CThostFtdcInstrumentStatusField_EnterTime_length = 0;

    /// 进入本状态原因
    /// typedef char TThostFtdcInstStatusEnterReasonType
    char CThostFtdcInstrumentStatusField_EnterReason = 0;

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    char *CThostFtdcInstrumentStatusField_ExchangeInstID = NULL;
    Py_ssize_t CThostFtdcInstrumentStatusField_ExchangeInstID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcInstrumentStatusField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcInstrumentStatusField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#ciy#cy#y#", (char **)kwlist
        , &CThostFtdcInstrumentStatusField_ExchangeID, &CThostFtdcInstrumentStatusField_ExchangeID_length
        , &CThostFtdcInstrumentStatusField_reserve1, &CThostFtdcInstrumentStatusField_reserve1_length
        , &CThostFtdcInstrumentStatusField_SettlementGroupID, &CThostFtdcInstrumentStatusField_SettlementGroupID_length
        , &CThostFtdcInstrumentStatusField_reserve2, &CThostFtdcInstrumentStatusField_reserve2_length
        , &CThostFtdcInstrumentStatusField_InstrumentStatus
        , &CThostFtdcInstrumentStatusField_TradingSegmentSN
        , &CThostFtdcInstrumentStatusField_EnterTime, &CThostFtdcInstrumentStatusField_EnterTime_length
        , &CThostFtdcInstrumentStatusField_EnterReason
        , &CThostFtdcInstrumentStatusField_ExchangeInstID, &CThostFtdcInstrumentStatusField_ExchangeInstID_length
        , &CThostFtdcInstrumentStatusField_InstrumentID, &CThostFtdcInstrumentStatusField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcInstrumentStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentStatusFieldData>(self);
    CThostFtdcInstrumentStatusField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcInstrumentStatusField_ExchangeID != NULL ) {
        if(CThostFtdcInstrumentStatusField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcInstrumentStatusField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcInstrumentStatusField_ExchangeID, CThostFtdcInstrumentStatusField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcInstrumentStatusField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcInstrumentStatusField_ExchangeID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    if( CThostFtdcInstrumentStatusField_reserve1 != NULL ) {
        if(CThostFtdcInstrumentStatusField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcInstrumentStatusField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcInstrumentStatusField_reserve1, CThostFtdcInstrumentStatusField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcInstrumentStatusField_reserve1, sizeof(data->reserve1));
        CThostFtdcInstrumentStatusField_reserve1 = NULL;
    }

    /// 结算组代码
    /// typedef char TThostFtdcSettlementGroupIDType[9]
    if( CThostFtdcInstrumentStatusField_SettlementGroupID != NULL ) {
        if(CThostFtdcInstrumentStatusField_SettlementGroupID_length >= (Py_ssize_t)sizeof(data->SettlementGroupID)) {
            PyErr_Format(PyExc_ValueError, "SettlementGroupID too long: length=%zd (max allowed is 8)", CThostFtdcInstrumentStatusField_SettlementGroupID_length);
            return -1;
        }
        // memset(data->SettlementGroupID, 0, sizeof(data->SettlementGroupID));
        // memcpy(data->SettlementGroupID, CThostFtdcInstrumentStatusField_SettlementGroupID, CThostFtdcInstrumentStatusField_SettlementGroupID_length);
        strncpy(data->SettlementGroupID, CThostFtdcInstrumentStatusField_SettlementGroupID, sizeof(data->SettlementGroupID));
        CThostFtdcInstrumentStatusField_SettlementGroupID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcInstrumentStatusField_reserve2 != NULL ) {
        if(CThostFtdcInstrumentStatusField_reserve2_length >= (Py_ssize_t)sizeof(data->reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is 30)", CThostFtdcInstrumentStatusField_reserve2_length);
            return -1;
        }
        // memset(data->reserve2, 0, sizeof(data->reserve2));
        // memcpy(data->reserve2, CThostFtdcInstrumentStatusField_reserve2, CThostFtdcInstrumentStatusField_reserve2_length);
        strncpy(data->reserve2, CThostFtdcInstrumentStatusField_reserve2, sizeof(data->reserve2));
        CThostFtdcInstrumentStatusField_reserve2 = NULL;
    }

    /// 合约交易状态
    /// typedef char TThostFtdcInstrumentStatusType
    data->InstrumentStatus = CThostFtdcInstrumentStatusField_InstrumentStatus;

    /// 交易阶段编号
    /// typedef int TThostFtdcTradingSegmentSNType
    data->TradingSegmentSN = CThostFtdcInstrumentStatusField_TradingSegmentSN;

    /// 进入本状态时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcInstrumentStatusField_EnterTime != NULL ) {
        if(CThostFtdcInstrumentStatusField_EnterTime_length >= (Py_ssize_t)sizeof(data->EnterTime)) {
            PyErr_Format(PyExc_ValueError, "EnterTime too long: length=%zd (max allowed is 8)", CThostFtdcInstrumentStatusField_EnterTime_length);
            return -1;
        }
        // memset(data->EnterTime, 0, sizeof(data->EnterTime));
        // memcpy(data->EnterTime, CThostFtdcInstrumentStatusField_EnterTime, CThostFtdcInstrumentStatusField_EnterTime_length);
        strncpy(data->EnterTime, CThostFtdcInstrumentStatusField_EnterTime, sizeof(data->EnterTime));
        CThostFtdcInstrumentStatusField_EnterTime = NULL;
    }

    /// 进入本状态原因
    /// typedef char TThostFtdcInstStatusEnterReasonType
    data->EnterReason = CThostFtdcInstrumentStatusField_EnterReason;

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    if( CThostFtdcInstrumentStatusField_ExchangeInstID != NULL ) {
        if(CThostFtdcInstrumentStatusField_ExchangeInstID_length >= (Py_ssize_t)sizeof(data->ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is 80)", CThostFtdcInstrumentStatusField_ExchangeInstID_length);
            return -1;
        }
        // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
        // memcpy(data->ExchangeInstID, CThostFtdcInstrumentStatusField_ExchangeInstID, CThostFtdcInstrumentStatusField_ExchangeInstID_length);
        strncpy(data->ExchangeInstID, CThostFtdcInstrumentStatusField_ExchangeInstID, sizeof(data->ExchangeInstID));
        CThostFtdcInstrumentStatusField_ExchangeInstID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcInstrumentStatusField_InstrumentID != NULL ) {
        if(CThostFtdcInstrumentStatusField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcInstrumentStatusField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcInstrumentStatusField_InstrumentID, CThostFtdcInstrumentStatusField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcInstrumentStatusField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcInstrumentStatusField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcInstrumentStatusFieldType_repr(PyObject *self) {

    PyCThostFtdcInstrumentStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentStatusFieldData>(self);
    CThostFtdcInstrumentStatusField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:c,s:i,s:y,s:c,s:y,s:y}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "SettlementGroupID", data->SettlementGroupID//, (Py_ssize_t)sizeof(data->SettlementGroupID)
        , "reserve2", data->reserve2//, (Py_ssize_t)sizeof(data->reserve2)
        , "InstrumentStatus", data->InstrumentStatus
        , "TradingSegmentSN", data->TradingSegmentSN
        , "EnterTime", data->EnterTime//, (Py_ssize_t)sizeof(data->EnterTime)
        , "EnterReason", data->EnterReason
        , "ExchangeInstID", data->ExchangeInstID//, (Py_ssize_t)sizeof(data->ExchangeInstID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInstrumentStatusField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInstrumentStatusField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcInstrumentStatusFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentStatusFieldData>(self);
    CThostFtdcInstrumentStatusField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcInstrumentStatusFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentStatusField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentStatusFieldData>(self);
    CThostFtdcInstrumentStatusField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldExchangeInstIDType[31]
static PyObject *PyCThostFtdcInstrumentStatusFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentStatusFieldData>(self);
    CThostFtdcInstrumentStatusField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcInstrumentStatusFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentStatusField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentStatusFieldData>(self);
    CThostFtdcInstrumentStatusField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 结算组代码
/// typedef char TThostFtdcSettlementGroupIDType[9]
static PyObject *PyCThostFtdcInstrumentStatusFieldType_get_SettlementGroupID(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentStatusFieldData>(self);
    CThostFtdcInstrumentStatusField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->SettlementGroupID, (Py_ssize_t)sizeof(data->SettlementGroupID));
    return PyBytes_FromString(data->SettlementGroupID);
}

static int PyCThostFtdcInstrumentStatusFieldType_set_SettlementGroupID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SettlementGroupID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentStatusField::SettlementGroupID)) {
        PyErr_SetString(PyExc_ValueError, "SettlementGroupID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentStatusFieldData>(self);
    CThostFtdcInstrumentStatusField *data = &(extra->data);
    // memset(data->SettlementGroupID, 0, sizeof(data->SettlementGroupID));
    // memcpy(data->SettlementGroupID, buf, len);
    strncpy(data->SettlementGroupID, buf, sizeof(data->SettlementGroupID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcInstrumentStatusFieldType_get_reserve2(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentStatusFieldData>(self);
    CThostFtdcInstrumentStatusField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve2, (Py_ssize_t)sizeof(data->reserve2));
    return PyBytes_FromString(data->reserve2);
}

static int PyCThostFtdcInstrumentStatusFieldType_set_reserve2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentStatusField::reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentStatusFieldData>(self);
    CThostFtdcInstrumentStatusField *data = &(extra->data);
    // memset(data->reserve2, 0, sizeof(data->reserve2));
    // memcpy(data->reserve2, buf, len);
    strncpy(data->reserve2, buf, sizeof(data->reserve2));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约交易状态
/// typedef char TThostFtdcInstrumentStatusType
static PyObject *PyCThostFtdcInstrumentStatusFieldType_get_InstrumentStatus(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentStatusFieldData>(self);
    CThostFtdcInstrumentStatusField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->InstrumentStatus), 1);
}

static int PyCThostFtdcInstrumentStatusFieldType_set_InstrumentStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInstrumentStatusField::InstrumentStatus)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentStatusFieldData>(self);
    CThostFtdcInstrumentStatusField *data = &(extra->data);
    data->InstrumentStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 进入本状态时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcInstrumentStatusFieldType_get_EnterTime(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentStatusFieldData>(self);
    CThostFtdcInstrumentStatusField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->EnterTime, (Py_ssize_t)sizeof(data->EnterTime));
    return PyBytes_FromString(data->EnterTime);
}

static int PyCThostFtdcInstrumentStatusFieldType_set_EnterTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "EnterTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentStatusField::EnterTime)) {
        PyErr_SetString(PyExc_ValueError, "EnterTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentStatusFieldData>(self);
    CThostFtdcInstrumentStatusField *data = &(extra->data);
    // memset(data->EnterTime, 0, sizeof(data->EnterTime));
    // memcpy(data->EnterTime, buf, len);
    strncpy(data->EnterTime, buf, sizeof(data->EnterTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 进入本状态原因
/// typedef char TThostFtdcInstStatusEnterReasonType
static PyObject *PyCThostFtdcInstrumentStatusFieldType_get_EnterReason(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentStatusFieldData>(self);
    CThostFtdcInstrumentStatusField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->EnterReason), 1);
}

static int PyCThostFtdcInstrumentStatusFieldType_set_EnterReason(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "EnterReason Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInstrumentStatusField::EnterReason)) {
        PyErr_SetString(PyExc_ValueError, "EnterReason must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentStatusFieldData>(self);
    CThostFtdcInstrumentStatusField *data = &(extra->data);
    data->EnterReason = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约在交易所的代码
/// typedef char TThostFtdcExchangeInstIDType[81]
static PyObject *PyCThostFtdcInstrumentStatusFieldType_get_ExchangeInstID(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentStatusFieldData>(self);
    CThostFtdcInstrumentStatusField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeInstID, (Py_ssize_t)sizeof(data->ExchangeInstID));
    return PyBytes_FromString(data->ExchangeInstID);
}

static int PyCThostFtdcInstrumentStatusFieldType_set_ExchangeInstID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentStatusField::ExchangeInstID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentStatusFieldData>(self);
    CThostFtdcInstrumentStatusField *data = &(extra->data);
    // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
    // memcpy(data->ExchangeInstID, buf, len);
    strncpy(data->ExchangeInstID, buf, sizeof(data->ExchangeInstID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcInstrumentStatusFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentStatusFieldData>(self);
    CThostFtdcInstrumentStatusField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcInstrumentStatusFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentStatusField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentStatusFieldData>(self);
    CThostFtdcInstrumentStatusField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcInstrumentStatusFieldType_members[] = {
    /// 交易阶段编号
    /// typedef int TThostFtdcTradingSegmentSNType
    {
        .name = "TradingSegmentSN",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInstrumentStatusFieldData, data.TradingSegmentSN),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易阶段编号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcInstrumentStatusFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcInstrumentStatusFieldType_get_ExchangeID,
    .set = PyCThostFtdcInstrumentStatusFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcInstrumentStatusFieldType_get_reserve1,
    .set = PyCThostFtdcInstrumentStatusFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 结算组代码
    /// typedef char TThostFtdcSettlementGroupIDType[9]
    {
    .name = "SettlementGroupID",
    .get = PyCThostFtdcInstrumentStatusFieldType_get_SettlementGroupID,
    .set = PyCThostFtdcInstrumentStatusFieldType_set_SettlementGroupID,
    .doc = PyDoc_STR("结算组代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve2",
    .get = PyCThostFtdcInstrumentStatusFieldType_get_reserve2,
    .set = PyCThostFtdcInstrumentStatusFieldType_set_reserve2,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 合约交易状态
    /// typedef char TThostFtdcInstrumentStatusType
    {
    .name = "InstrumentStatus",
    .get = PyCThostFtdcInstrumentStatusFieldType_get_InstrumentStatus,
    .set = PyCThostFtdcInstrumentStatusFieldType_set_InstrumentStatus,
    .doc = PyDoc_STR("合约交易状态"),
    },
    /// 进入本状态时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "EnterTime",
    .get = PyCThostFtdcInstrumentStatusFieldType_get_EnterTime,
    .set = PyCThostFtdcInstrumentStatusFieldType_set_EnterTime,
    .doc = PyDoc_STR("进入本状态时间"),
    },
    /// 进入本状态原因
    /// typedef char TThostFtdcInstStatusEnterReasonType
    {
    .name = "EnterReason",
    .get = PyCThostFtdcInstrumentStatusFieldType_get_EnterReason,
    .set = PyCThostFtdcInstrumentStatusFieldType_set_EnterReason,
    .doc = PyDoc_STR("进入本状态原因"),
    },
    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    {
    .name = "ExchangeInstID",
    .get = PyCThostFtdcInstrumentStatusFieldType_get_ExchangeInstID,
    .set = PyCThostFtdcInstrumentStatusFieldType_set_ExchangeInstID,
    .doc = PyDoc_STR("合约在交易所的代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcInstrumentStatusFieldType_get_InstrumentID,
    .set = PyCThostFtdcInstrumentStatusFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcInstrumentStatusFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcInstrumentStatusField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("合约状态")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcInstrumentStatusFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcInstrumentStatusFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcInstrumentStatusFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcInstrumentStatusFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcInstrumentStatusFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcInstrumentStatusFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("合约状态")},
    {Py_tp_members, PyCThostFtdcInstrumentStatusFieldType_members},
    {Py_tp_getset, PyCThostFtdcInstrumentStatusFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcInstrumentStatusFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcInstrumentStatusFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcInstrumentStatusFieldType_spec = {
    .name = "PyCTP.CThostFtdcInstrumentStatusField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcInstrumentStatusFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcInstrumentStatusFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcInstrumentStatusFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcInstrumentStatusFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcInstrumentStatusFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcInstrumentStatusFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcInstrumentStatusFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcInstrumentStatusFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcInstrumentStatusField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInstrumentStatusField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}