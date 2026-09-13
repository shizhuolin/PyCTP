
#include "PyCThostFtdcEWarrantOffsetField.h"

///仓单折抵信息

static int PyCThostFtdcEWarrantOffsetFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "BrokerID", "InvestorID", "ExchangeID", "reserve1", "Direction", "HedgeFlag", "Volume", "InvestUnitID", "InstrumentID", NULL };


    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcEWarrantOffsetField_TradingDay = NULL;
    Py_ssize_t CThostFtdcEWarrantOffsetField_TradingDay_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcEWarrantOffsetField_BrokerID = NULL;
    Py_ssize_t CThostFtdcEWarrantOffsetField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcEWarrantOffsetField_InvestorID = NULL;
    Py_ssize_t CThostFtdcEWarrantOffsetField_InvestorID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcEWarrantOffsetField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcEWarrantOffsetField_ExchangeID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcEWarrantOffsetField_reserve1 = NULL;
    Py_ssize_t CThostFtdcEWarrantOffsetField_reserve1_length = 0;

    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    char CThostFtdcEWarrantOffsetField_Direction = 0;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcEWarrantOffsetField_HedgeFlag = 0;

    /// 数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcEWarrantOffsetField_Volume = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcEWarrantOffsetField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcEWarrantOffsetField_InvestUnitID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcEWarrantOffsetField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcEWarrantOffsetField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#cciy#y#", (char **)kwlist
        , &CThostFtdcEWarrantOffsetField_TradingDay, &CThostFtdcEWarrantOffsetField_TradingDay_length
        , &CThostFtdcEWarrantOffsetField_BrokerID, &CThostFtdcEWarrantOffsetField_BrokerID_length
        , &CThostFtdcEWarrantOffsetField_InvestorID, &CThostFtdcEWarrantOffsetField_InvestorID_length
        , &CThostFtdcEWarrantOffsetField_ExchangeID, &CThostFtdcEWarrantOffsetField_ExchangeID_length
        , &CThostFtdcEWarrantOffsetField_reserve1, &CThostFtdcEWarrantOffsetField_reserve1_length
        , &CThostFtdcEWarrantOffsetField_Direction
        , &CThostFtdcEWarrantOffsetField_HedgeFlag
        , &CThostFtdcEWarrantOffsetField_Volume
        , &CThostFtdcEWarrantOffsetField_InvestUnitID, &CThostFtdcEWarrantOffsetField_InvestUnitID_length
        , &CThostFtdcEWarrantOffsetField_InstrumentID, &CThostFtdcEWarrantOffsetField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcEWarrantOffsetFieldData>(self);
    CThostFtdcEWarrantOffsetField *data = &(extra->data);


    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcEWarrantOffsetField_TradingDay != NULL ) {
        if(CThostFtdcEWarrantOffsetField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcEWarrantOffsetField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcEWarrantOffsetField_TradingDay, CThostFtdcEWarrantOffsetField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcEWarrantOffsetField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcEWarrantOffsetField_TradingDay = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcEWarrantOffsetField_BrokerID != NULL ) {
        if(CThostFtdcEWarrantOffsetField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcEWarrantOffsetField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcEWarrantOffsetField_BrokerID, CThostFtdcEWarrantOffsetField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcEWarrantOffsetField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcEWarrantOffsetField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcEWarrantOffsetField_InvestorID != NULL ) {
        if(CThostFtdcEWarrantOffsetField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcEWarrantOffsetField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcEWarrantOffsetField_InvestorID, CThostFtdcEWarrantOffsetField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcEWarrantOffsetField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcEWarrantOffsetField_InvestorID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcEWarrantOffsetField_ExchangeID != NULL ) {
        if(CThostFtdcEWarrantOffsetField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcEWarrantOffsetField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcEWarrantOffsetField_ExchangeID, CThostFtdcEWarrantOffsetField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcEWarrantOffsetField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcEWarrantOffsetField_ExchangeID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcEWarrantOffsetField_reserve1 != NULL ) {
        if(CThostFtdcEWarrantOffsetField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcEWarrantOffsetField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcEWarrantOffsetField_reserve1, CThostFtdcEWarrantOffsetField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcEWarrantOffsetField_reserve1, sizeof(data->reserve1));
        CThostFtdcEWarrantOffsetField_reserve1 = NULL;
    }

    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    data->Direction = CThostFtdcEWarrantOffsetField_Direction;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    data->HedgeFlag = CThostFtdcEWarrantOffsetField_HedgeFlag;

    /// 数量
    /// typedef int TThostFtdcVolumeType
    data->Volume = CThostFtdcEWarrantOffsetField_Volume;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcEWarrantOffsetField_InvestUnitID != NULL ) {
        if(CThostFtdcEWarrantOffsetField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcEWarrantOffsetField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcEWarrantOffsetField_InvestUnitID, CThostFtdcEWarrantOffsetField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcEWarrantOffsetField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcEWarrantOffsetField_InvestUnitID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcEWarrantOffsetField_InstrumentID != NULL ) {
        if(CThostFtdcEWarrantOffsetField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcEWarrantOffsetField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcEWarrantOffsetField_InstrumentID, CThostFtdcEWarrantOffsetField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcEWarrantOffsetField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcEWarrantOffsetField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcEWarrantOffsetFieldType_repr(PyObject *self) {

    PyCThostFtdcEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcEWarrantOffsetFieldData>(self);
    CThostFtdcEWarrantOffsetField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:c,s:c,s:i,s:y,s:y}"
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "Direction", data->Direction
        , "HedgeFlag", data->HedgeFlag
        , "Volume", data->Volume
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcEWarrantOffsetField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcEWarrantOffsetField repr");
        return NULL;
    }

    return repr;
}


/// 交易日期
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcEWarrantOffsetFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcEWarrantOffsetFieldData>(self);
    CThostFtdcEWarrantOffsetField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcEWarrantOffsetFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcEWarrantOffsetField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcEWarrantOffsetFieldData>(self);
    CThostFtdcEWarrantOffsetField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcEWarrantOffsetFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcEWarrantOffsetFieldData>(self);
    CThostFtdcEWarrantOffsetField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcEWarrantOffsetFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcEWarrantOffsetField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcEWarrantOffsetFieldData>(self);
    CThostFtdcEWarrantOffsetField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcEWarrantOffsetFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcEWarrantOffsetFieldData>(self);
    CThostFtdcEWarrantOffsetField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcEWarrantOffsetFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcEWarrantOffsetField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcEWarrantOffsetFieldData>(self);
    CThostFtdcEWarrantOffsetField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcEWarrantOffsetFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcEWarrantOffsetFieldData>(self);
    CThostFtdcEWarrantOffsetField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcEWarrantOffsetFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcEWarrantOffsetField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcEWarrantOffsetFieldData>(self);
    CThostFtdcEWarrantOffsetField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcEWarrantOffsetFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcEWarrantOffsetFieldData>(self);
    CThostFtdcEWarrantOffsetField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcEWarrantOffsetFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcEWarrantOffsetField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcEWarrantOffsetFieldData>(self);
    CThostFtdcEWarrantOffsetField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 买卖方向
/// typedef char TThostFtdcDirectionType
static PyObject *PyCThostFtdcEWarrantOffsetFieldType_get_Direction(PyObject *self, void *closure) {
    PyCThostFtdcEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcEWarrantOffsetFieldData>(self);
    CThostFtdcEWarrantOffsetField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->Direction), 1);
}

static int PyCThostFtdcEWarrantOffsetFieldType_set_Direction(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Direction Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcEWarrantOffsetField::Direction)) {
        PyErr_SetString(PyExc_ValueError, "Direction must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcEWarrantOffsetFieldData>(self);
    CThostFtdcEWarrantOffsetField *data = &(extra->data);
    data->Direction = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投机套保标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcEWarrantOffsetFieldType_get_HedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcEWarrantOffsetFieldData>(self);
    CThostFtdcEWarrantOffsetField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->HedgeFlag), 1);
}

static int PyCThostFtdcEWarrantOffsetFieldType_set_HedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcEWarrantOffsetField::HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcEWarrantOffsetFieldData>(self);
    CThostFtdcEWarrantOffsetField *data = &(extra->data);
    data->HedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcEWarrantOffsetFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcEWarrantOffsetFieldData>(self);
    CThostFtdcEWarrantOffsetField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcEWarrantOffsetFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcEWarrantOffsetField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcEWarrantOffsetFieldData>(self);
    CThostFtdcEWarrantOffsetField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcEWarrantOffsetFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcEWarrantOffsetFieldData>(self);
    CThostFtdcEWarrantOffsetField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcEWarrantOffsetFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcEWarrantOffsetField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcEWarrantOffsetFieldData>(self);
    CThostFtdcEWarrantOffsetField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcEWarrantOffsetFieldType_members[] = {
    /// 数量
    /// typedef int TThostFtdcVolumeType
    {
        .name = "Volume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcEWarrantOffsetFieldData, data.Volume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("数量")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcEWarrantOffsetFieldType_getsets[] = {
    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcEWarrantOffsetFieldType_get_TradingDay,
    .set = PyCThostFtdcEWarrantOffsetFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日期"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcEWarrantOffsetFieldType_get_BrokerID,
    .set = PyCThostFtdcEWarrantOffsetFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcEWarrantOffsetFieldType_get_InvestorID,
    .set = PyCThostFtdcEWarrantOffsetFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcEWarrantOffsetFieldType_get_ExchangeID,
    .set = PyCThostFtdcEWarrantOffsetFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcEWarrantOffsetFieldType_get_reserve1,
    .set = PyCThostFtdcEWarrantOffsetFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    {
    .name = "Direction",
    .get = PyCThostFtdcEWarrantOffsetFieldType_get_Direction,
    .set = PyCThostFtdcEWarrantOffsetFieldType_set_Direction,
    .doc = PyDoc_STR("买卖方向"),
    },
    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "HedgeFlag",
    .get = PyCThostFtdcEWarrantOffsetFieldType_get_HedgeFlag,
    .set = PyCThostFtdcEWarrantOffsetFieldType_set_HedgeFlag,
    .doc = PyDoc_STR("投机套保标志"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcEWarrantOffsetFieldType_get_InvestUnitID,
    .set = PyCThostFtdcEWarrantOffsetFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcEWarrantOffsetFieldType_get_InstrumentID,
    .set = PyCThostFtdcEWarrantOffsetFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcEWarrantOffsetFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcEWarrantOffsetField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("仓单折抵信息")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcEWarrantOffsetFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcEWarrantOffsetFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcEWarrantOffsetFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcEWarrantOffsetFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcEWarrantOffsetFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcEWarrantOffsetFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("仓单折抵信息")},
    {Py_tp_members, PyCThostFtdcEWarrantOffsetFieldType_members},
    {Py_tp_getset, PyCThostFtdcEWarrantOffsetFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcEWarrantOffsetFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcEWarrantOffsetFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcEWarrantOffsetFieldType_spec = {
    .name = "PyCTP.CThostFtdcEWarrantOffsetField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcEWarrantOffsetFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcEWarrantOffsetFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcEWarrantOffsetFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcEWarrantOffsetFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcEWarrantOffsetFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcEWarrantOffsetFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcEWarrantOffsetFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcEWarrantOffsetFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcEWarrantOffsetField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcEWarrantOffsetField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}