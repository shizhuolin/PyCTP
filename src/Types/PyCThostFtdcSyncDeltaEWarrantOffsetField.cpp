
#include "PyCThostFtdcSyncDeltaEWarrantOffsetField.h"

///风险结算追平仓单折抵

static int PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "BrokerID", "InvestorID", "ExchangeID", "InstrumentID", "Direction", "HedgeFlag", "Volume", "ActionDirection", "SyncDeltaSequenceNo", NULL };


    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcSyncDeltaEWarrantOffsetField_TradingDay = NULL;
    Py_ssize_t CThostFtdcSyncDeltaEWarrantOffsetField_TradingDay_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcSyncDeltaEWarrantOffsetField_BrokerID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaEWarrantOffsetField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcSyncDeltaEWarrantOffsetField_InvestorID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaEWarrantOffsetField_InvestorID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcSyncDeltaEWarrantOffsetField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaEWarrantOffsetField_ExchangeID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSyncDeltaEWarrantOffsetField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaEWarrantOffsetField_InstrumentID_length = 0;

    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    char CThostFtdcSyncDeltaEWarrantOffsetField_Direction = 0;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcSyncDeltaEWarrantOffsetField_HedgeFlag = 0;

    /// 数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcSyncDeltaEWarrantOffsetField_Volume = 0;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    char CThostFtdcSyncDeltaEWarrantOffsetField_ActionDirection = 0;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcSyncDeltaEWarrantOffsetField_SyncDeltaSequenceNo = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#ccici", (char **)kwlist
        , &CThostFtdcSyncDeltaEWarrantOffsetField_TradingDay, &CThostFtdcSyncDeltaEWarrantOffsetField_TradingDay_length
        , &CThostFtdcSyncDeltaEWarrantOffsetField_BrokerID, &CThostFtdcSyncDeltaEWarrantOffsetField_BrokerID_length
        , &CThostFtdcSyncDeltaEWarrantOffsetField_InvestorID, &CThostFtdcSyncDeltaEWarrantOffsetField_InvestorID_length
        , &CThostFtdcSyncDeltaEWarrantOffsetField_ExchangeID, &CThostFtdcSyncDeltaEWarrantOffsetField_ExchangeID_length
        , &CThostFtdcSyncDeltaEWarrantOffsetField_InstrumentID, &CThostFtdcSyncDeltaEWarrantOffsetField_InstrumentID_length
        , &CThostFtdcSyncDeltaEWarrantOffsetField_Direction
        , &CThostFtdcSyncDeltaEWarrantOffsetField_HedgeFlag
        , &CThostFtdcSyncDeltaEWarrantOffsetField_Volume
        , &CThostFtdcSyncDeltaEWarrantOffsetField_ActionDirection
        , &CThostFtdcSyncDeltaEWarrantOffsetField_SyncDeltaSequenceNo
    )) {
        return -1;
    }

    PyCThostFtdcSyncDeltaEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaEWarrantOffsetFieldData>(self);
    CThostFtdcSyncDeltaEWarrantOffsetField *data = &(extra->data);


    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcSyncDeltaEWarrantOffsetField_TradingDay != NULL ) {
        if(CThostFtdcSyncDeltaEWarrantOffsetField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaEWarrantOffsetField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcSyncDeltaEWarrantOffsetField_TradingDay, CThostFtdcSyncDeltaEWarrantOffsetField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcSyncDeltaEWarrantOffsetField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcSyncDeltaEWarrantOffsetField_TradingDay = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcSyncDeltaEWarrantOffsetField_BrokerID != NULL ) {
        if(CThostFtdcSyncDeltaEWarrantOffsetField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcSyncDeltaEWarrantOffsetField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcSyncDeltaEWarrantOffsetField_BrokerID, CThostFtdcSyncDeltaEWarrantOffsetField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcSyncDeltaEWarrantOffsetField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcSyncDeltaEWarrantOffsetField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcSyncDeltaEWarrantOffsetField_InvestorID != NULL ) {
        if(CThostFtdcSyncDeltaEWarrantOffsetField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcSyncDeltaEWarrantOffsetField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcSyncDeltaEWarrantOffsetField_InvestorID, CThostFtdcSyncDeltaEWarrantOffsetField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcSyncDeltaEWarrantOffsetField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcSyncDeltaEWarrantOffsetField_InvestorID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcSyncDeltaEWarrantOffsetField_ExchangeID != NULL ) {
        if(CThostFtdcSyncDeltaEWarrantOffsetField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaEWarrantOffsetField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcSyncDeltaEWarrantOffsetField_ExchangeID, CThostFtdcSyncDeltaEWarrantOffsetField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcSyncDeltaEWarrantOffsetField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcSyncDeltaEWarrantOffsetField_ExchangeID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSyncDeltaEWarrantOffsetField_InstrumentID != NULL ) {
        if(CThostFtdcSyncDeltaEWarrantOffsetField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcSyncDeltaEWarrantOffsetField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcSyncDeltaEWarrantOffsetField_InstrumentID, CThostFtdcSyncDeltaEWarrantOffsetField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcSyncDeltaEWarrantOffsetField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcSyncDeltaEWarrantOffsetField_InstrumentID = NULL;
    }

    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    data->Direction = CThostFtdcSyncDeltaEWarrantOffsetField_Direction;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    data->HedgeFlag = CThostFtdcSyncDeltaEWarrantOffsetField_HedgeFlag;

    /// 数量
    /// typedef int TThostFtdcVolumeType
    data->Volume = CThostFtdcSyncDeltaEWarrantOffsetField_Volume;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    data->ActionDirection = CThostFtdcSyncDeltaEWarrantOffsetField_ActionDirection;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    data->SyncDeltaSequenceNo = CThostFtdcSyncDeltaEWarrantOffsetField_SyncDeltaSequenceNo;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncDeltaEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaEWarrantOffsetFieldData>(self);
    CThostFtdcSyncDeltaEWarrantOffsetField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:c,s:c,s:i,s:c,s:i}"
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "Direction", data->Direction
        , "HedgeFlag", data->HedgeFlag
        , "Volume", data->Volume
        , "ActionDirection", data->ActionDirection
        , "SyncDeltaSequenceNo", data->SyncDeltaSequenceNo
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaEWarrantOffsetField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaEWarrantOffsetField repr");
        return NULL;
    }

    return repr;
}


/// 交易日期
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaEWarrantOffsetFieldData>(self);
    CThostFtdcSyncDeltaEWarrantOffsetField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaEWarrantOffsetField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaEWarrantOffsetFieldData>(self);
    CThostFtdcSyncDeltaEWarrantOffsetField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaEWarrantOffsetFieldData>(self);
    CThostFtdcSyncDeltaEWarrantOffsetField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaEWarrantOffsetField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaEWarrantOffsetFieldData>(self);
    CThostFtdcSyncDeltaEWarrantOffsetField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaEWarrantOffsetFieldData>(self);
    CThostFtdcSyncDeltaEWarrantOffsetField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaEWarrantOffsetField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaEWarrantOffsetFieldData>(self);
    CThostFtdcSyncDeltaEWarrantOffsetField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaEWarrantOffsetFieldData>(self);
    CThostFtdcSyncDeltaEWarrantOffsetField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaEWarrantOffsetField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaEWarrantOffsetFieldData>(self);
    CThostFtdcSyncDeltaEWarrantOffsetField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaEWarrantOffsetFieldData>(self);
    CThostFtdcSyncDeltaEWarrantOffsetField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaEWarrantOffsetField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaEWarrantOffsetFieldData>(self);
    CThostFtdcSyncDeltaEWarrantOffsetField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 买卖方向
/// typedef char TThostFtdcDirectionType
static PyObject *PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_get_Direction(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaEWarrantOffsetFieldData>(self);
    CThostFtdcSyncDeltaEWarrantOffsetField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->Direction), 1);
}

static int PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_set_Direction(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Direction Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaEWarrantOffsetField::Direction)) {
        PyErr_SetString(PyExc_ValueError, "Direction must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaEWarrantOffsetFieldData>(self);
    CThostFtdcSyncDeltaEWarrantOffsetField *data = &(extra->data);
    data->Direction = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投机套保标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_get_HedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaEWarrantOffsetFieldData>(self);
    CThostFtdcSyncDeltaEWarrantOffsetField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->HedgeFlag), 1);
}

static int PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_set_HedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaEWarrantOffsetField::HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaEWarrantOffsetFieldData>(self);
    CThostFtdcSyncDeltaEWarrantOffsetField *data = &(extra->data);
    data->HedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionDirectionType
static PyObject *PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_get_ActionDirection(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaEWarrantOffsetFieldData>(self);
    CThostFtdcSyncDeltaEWarrantOffsetField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionDirection), 1);
}

static int PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_set_ActionDirection(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDirection Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaEWarrantOffsetField::ActionDirection)) {
        PyErr_SetString(PyExc_ValueError, "ActionDirection must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaEWarrantOffsetFieldData>(self);
    CThostFtdcSyncDeltaEWarrantOffsetField *data = &(extra->data);
    data->ActionDirection = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_members[] = {
    /// 数量
    /// typedef int TThostFtdcVolumeType
    {
        .name = "Volume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaEWarrantOffsetFieldData, data.Volume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("数量")
    },
    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    {
        .name = "SyncDeltaSequenceNo",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaEWarrantOffsetFieldData, data.SyncDeltaSequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("追平序号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_getsets[] = {
    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_get_TradingDay,
    .set = PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日期"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_get_BrokerID,
    .set = PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_get_InvestorID,
    .set = PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_get_ExchangeID,
    .set = PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_get_InstrumentID,
    .set = PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    {
    .name = "Direction",
    .get = PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_get_Direction,
    .set = PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_set_Direction,
    .doc = PyDoc_STR("买卖方向"),
    },
    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "HedgeFlag",
    .get = PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_get_HedgeFlag,
    .set = PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_set_HedgeFlag,
    .doc = PyDoc_STR("投机套保标志"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    {
    .name = "ActionDirection",
    .get = PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_get_ActionDirection,
    .set = PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_set_ActionDirection,
    .doc = PyDoc_STR("操作标志"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncDeltaEWarrantOffsetField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("风险结算追平仓单折抵")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncDeltaEWarrantOffsetFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("风险结算追平仓单折抵")},
    {Py_tp_members, PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncDeltaEWarrantOffsetField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaEWarrantOffsetFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaEWarrantOffsetFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncDeltaEWarrantOffsetFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncDeltaEWarrantOffsetFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaEWarrantOffsetField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaEWarrantOffsetField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}