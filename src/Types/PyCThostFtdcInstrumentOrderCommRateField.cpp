
#include "PyCThostFtdcInstrumentOrderCommRateField.h"

///当前报单手续费的详细内容

static int PyCThostFtdcInstrumentOrderCommRateFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "reserve1", "InvestorRange", "BrokerID", "InvestorID", "HedgeFlag", "OrderCommByVolume", "OrderActionCommByVolume", "ExchangeID", "InvestUnitID", "InstrumentID", "OrderCommByTrade", "OrderActionCommByTrade", NULL };


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcInstrumentOrderCommRateField_reserve1 = NULL;
    Py_ssize_t CThostFtdcInstrumentOrderCommRateField_reserve1_length = 0;

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    char CThostFtdcInstrumentOrderCommRateField_InvestorRange = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcInstrumentOrderCommRateField_BrokerID = NULL;
    Py_ssize_t CThostFtdcInstrumentOrderCommRateField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInstrumentOrderCommRateField_InvestorID = NULL;
    Py_ssize_t CThostFtdcInstrumentOrderCommRateField_InvestorID_length = 0;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcInstrumentOrderCommRateField_HedgeFlag = 0;

    /// 报单手续费
    /// typedef double TThostFtdcRatioType
    double CThostFtdcInstrumentOrderCommRateField_OrderCommByVolume = 0.0;

    /// 撤单手续费
    /// typedef double TThostFtdcRatioType
    double CThostFtdcInstrumentOrderCommRateField_OrderActionCommByVolume = 0.0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcInstrumentOrderCommRateField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcInstrumentOrderCommRateField_ExchangeID_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcInstrumentOrderCommRateField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcInstrumentOrderCommRateField_InvestUnitID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcInstrumentOrderCommRateField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcInstrumentOrderCommRateField_InstrumentID_length = 0;

    /// 报单手续费
    /// typedef double TThostFtdcRatioType
    double CThostFtdcInstrumentOrderCommRateField_OrderCommByTrade = 0.0;

    /// 撤单手续费
    /// typedef double TThostFtdcRatioType
    double CThostFtdcInstrumentOrderCommRateField_OrderActionCommByTrade = 0.0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#cddy#y#y#dd", (char **)kwlist
        , &CThostFtdcInstrumentOrderCommRateField_reserve1, &CThostFtdcInstrumentOrderCommRateField_reserve1_length
        , &CThostFtdcInstrumentOrderCommRateField_InvestorRange
        , &CThostFtdcInstrumentOrderCommRateField_BrokerID, &CThostFtdcInstrumentOrderCommRateField_BrokerID_length
        , &CThostFtdcInstrumentOrderCommRateField_InvestorID, &CThostFtdcInstrumentOrderCommRateField_InvestorID_length
        , &CThostFtdcInstrumentOrderCommRateField_HedgeFlag
        , &CThostFtdcInstrumentOrderCommRateField_OrderCommByVolume
        , &CThostFtdcInstrumentOrderCommRateField_OrderActionCommByVolume
        , &CThostFtdcInstrumentOrderCommRateField_ExchangeID, &CThostFtdcInstrumentOrderCommRateField_ExchangeID_length
        , &CThostFtdcInstrumentOrderCommRateField_InvestUnitID, &CThostFtdcInstrumentOrderCommRateField_InvestUnitID_length
        , &CThostFtdcInstrumentOrderCommRateField_InstrumentID, &CThostFtdcInstrumentOrderCommRateField_InstrumentID_length
        , &CThostFtdcInstrumentOrderCommRateField_OrderCommByTrade
        , &CThostFtdcInstrumentOrderCommRateField_OrderActionCommByTrade
    )) {
        return -1;
    }

    PyCThostFtdcInstrumentOrderCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentOrderCommRateFieldData>(self);
    CThostFtdcInstrumentOrderCommRateField *data = &(extra->data);


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcInstrumentOrderCommRateField_reserve1 != NULL ) {
        if(CThostFtdcInstrumentOrderCommRateField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcInstrumentOrderCommRateField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcInstrumentOrderCommRateField_reserve1, CThostFtdcInstrumentOrderCommRateField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcInstrumentOrderCommRateField_reserve1, sizeof(data->reserve1));
        CThostFtdcInstrumentOrderCommRateField_reserve1 = NULL;
    }

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    data->InvestorRange = CThostFtdcInstrumentOrderCommRateField_InvestorRange;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcInstrumentOrderCommRateField_BrokerID != NULL ) {
        if(CThostFtdcInstrumentOrderCommRateField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcInstrumentOrderCommRateField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcInstrumentOrderCommRateField_BrokerID, CThostFtdcInstrumentOrderCommRateField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcInstrumentOrderCommRateField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcInstrumentOrderCommRateField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInstrumentOrderCommRateField_InvestorID != NULL ) {
        if(CThostFtdcInstrumentOrderCommRateField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcInstrumentOrderCommRateField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcInstrumentOrderCommRateField_InvestorID, CThostFtdcInstrumentOrderCommRateField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcInstrumentOrderCommRateField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcInstrumentOrderCommRateField_InvestorID = NULL;
    }

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    data->HedgeFlag = CThostFtdcInstrumentOrderCommRateField_HedgeFlag;

    /// 报单手续费
    /// typedef double TThostFtdcRatioType
    data->OrderCommByVolume = CThostFtdcInstrumentOrderCommRateField_OrderCommByVolume;

    /// 撤单手续费
    /// typedef double TThostFtdcRatioType
    data->OrderActionCommByVolume = CThostFtdcInstrumentOrderCommRateField_OrderActionCommByVolume;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcInstrumentOrderCommRateField_ExchangeID != NULL ) {
        if(CThostFtdcInstrumentOrderCommRateField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcInstrumentOrderCommRateField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcInstrumentOrderCommRateField_ExchangeID, CThostFtdcInstrumentOrderCommRateField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcInstrumentOrderCommRateField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcInstrumentOrderCommRateField_ExchangeID = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcInstrumentOrderCommRateField_InvestUnitID != NULL ) {
        if(CThostFtdcInstrumentOrderCommRateField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcInstrumentOrderCommRateField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcInstrumentOrderCommRateField_InvestUnitID, CThostFtdcInstrumentOrderCommRateField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcInstrumentOrderCommRateField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcInstrumentOrderCommRateField_InvestUnitID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcInstrumentOrderCommRateField_InstrumentID != NULL ) {
        if(CThostFtdcInstrumentOrderCommRateField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcInstrumentOrderCommRateField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcInstrumentOrderCommRateField_InstrumentID, CThostFtdcInstrumentOrderCommRateField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcInstrumentOrderCommRateField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcInstrumentOrderCommRateField_InstrumentID = NULL;
    }

    /// 报单手续费
    /// typedef double TThostFtdcRatioType
    data->OrderCommByTrade = CThostFtdcInstrumentOrderCommRateField_OrderCommByTrade;

    /// 撤单手续费
    /// typedef double TThostFtdcRatioType
    data->OrderActionCommByTrade = CThostFtdcInstrumentOrderCommRateField_OrderActionCommByTrade;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcInstrumentOrderCommRateFieldType_repr(PyObject *self) {

    PyCThostFtdcInstrumentOrderCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentOrderCommRateFieldData>(self);
    CThostFtdcInstrumentOrderCommRateField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:c,s:y,s:y,s:c,s:d,s:d,s:y,s:y,s:y,s:d,s:d}"
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "InvestorRange", data->InvestorRange
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "HedgeFlag", data->HedgeFlag
        , "OrderCommByVolume", data->OrderCommByVolume
        , "OrderActionCommByVolume", data->OrderActionCommByVolume
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "OrderCommByTrade", data->OrderCommByTrade
        , "OrderActionCommByTrade", data->OrderActionCommByTrade
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInstrumentOrderCommRateField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInstrumentOrderCommRateField repr");
        return NULL;
    }

    return repr;
}


/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcInstrumentOrderCommRateFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentOrderCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentOrderCommRateFieldData>(self);
    CThostFtdcInstrumentOrderCommRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcInstrumentOrderCommRateFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentOrderCommRateField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentOrderCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentOrderCommRateFieldData>(self);
    CThostFtdcInstrumentOrderCommRateField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者范围
/// typedef char TThostFtdcInvestorRangeType
static PyObject *PyCThostFtdcInstrumentOrderCommRateFieldType_get_InvestorRange(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentOrderCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentOrderCommRateFieldData>(self);
    CThostFtdcInstrumentOrderCommRateField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->InvestorRange), 1);
}

static int PyCThostFtdcInstrumentOrderCommRateFieldType_set_InvestorRange(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorRange Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInstrumentOrderCommRateField::InvestorRange)) {
        PyErr_SetString(PyExc_ValueError, "InvestorRange must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentOrderCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentOrderCommRateFieldData>(self);
    CThostFtdcInstrumentOrderCommRateField *data = &(extra->data);
    data->InvestorRange = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcInstrumentOrderCommRateFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentOrderCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentOrderCommRateFieldData>(self);
    CThostFtdcInstrumentOrderCommRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcInstrumentOrderCommRateFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentOrderCommRateField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentOrderCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentOrderCommRateFieldData>(self);
    CThostFtdcInstrumentOrderCommRateField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInstrumentOrderCommRateFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentOrderCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentOrderCommRateFieldData>(self);
    CThostFtdcInstrumentOrderCommRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcInstrumentOrderCommRateFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentOrderCommRateField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentOrderCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentOrderCommRateFieldData>(self);
    CThostFtdcInstrumentOrderCommRateField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投机套保标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcInstrumentOrderCommRateFieldType_get_HedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentOrderCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentOrderCommRateFieldData>(self);
    CThostFtdcInstrumentOrderCommRateField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->HedgeFlag), 1);
}

static int PyCThostFtdcInstrumentOrderCommRateFieldType_set_HedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInstrumentOrderCommRateField::HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentOrderCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentOrderCommRateFieldData>(self);
    CThostFtdcInstrumentOrderCommRateField *data = &(extra->data);
    data->HedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcInstrumentOrderCommRateFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentOrderCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentOrderCommRateFieldData>(self);
    CThostFtdcInstrumentOrderCommRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcInstrumentOrderCommRateFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentOrderCommRateField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentOrderCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentOrderCommRateFieldData>(self);
    CThostFtdcInstrumentOrderCommRateField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcInstrumentOrderCommRateFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentOrderCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentOrderCommRateFieldData>(self);
    CThostFtdcInstrumentOrderCommRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcInstrumentOrderCommRateFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentOrderCommRateField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentOrderCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentOrderCommRateFieldData>(self);
    CThostFtdcInstrumentOrderCommRateField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcInstrumentOrderCommRateFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentOrderCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentOrderCommRateFieldData>(self);
    CThostFtdcInstrumentOrderCommRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcInstrumentOrderCommRateFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentOrderCommRateField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentOrderCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentOrderCommRateFieldData>(self);
    CThostFtdcInstrumentOrderCommRateField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcInstrumentOrderCommRateFieldType_members[] = {
    /// 报单手续费
    /// typedef double TThostFtdcRatioType
    {
        .name = "OrderCommByVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInstrumentOrderCommRateFieldData, data.OrderCommByVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("报单手续费")
    },
    /// 撤单手续费
    /// typedef double TThostFtdcRatioType
    {
        .name = "OrderActionCommByVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInstrumentOrderCommRateFieldData, data.OrderActionCommByVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("撤单手续费")
    },
    /// 报单手续费
    /// typedef double TThostFtdcRatioType
    {
        .name = "OrderCommByTrade",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInstrumentOrderCommRateFieldData, data.OrderCommByTrade),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("报单手续费")
    },
    /// 撤单手续费
    /// typedef double TThostFtdcRatioType
    {
        .name = "OrderActionCommByTrade",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInstrumentOrderCommRateFieldData, data.OrderActionCommByTrade),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("撤单手续费")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcInstrumentOrderCommRateFieldType_getsets[] = {
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcInstrumentOrderCommRateFieldType_get_reserve1,
    .set = PyCThostFtdcInstrumentOrderCommRateFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    {
    .name = "InvestorRange",
    .get = PyCThostFtdcInstrumentOrderCommRateFieldType_get_InvestorRange,
    .set = PyCThostFtdcInstrumentOrderCommRateFieldType_set_InvestorRange,
    .doc = PyDoc_STR("投资者范围"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcInstrumentOrderCommRateFieldType_get_BrokerID,
    .set = PyCThostFtdcInstrumentOrderCommRateFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcInstrumentOrderCommRateFieldType_get_InvestorID,
    .set = PyCThostFtdcInstrumentOrderCommRateFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "HedgeFlag",
    .get = PyCThostFtdcInstrumentOrderCommRateFieldType_get_HedgeFlag,
    .set = PyCThostFtdcInstrumentOrderCommRateFieldType_set_HedgeFlag,
    .doc = PyDoc_STR("投机套保标志"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcInstrumentOrderCommRateFieldType_get_ExchangeID,
    .set = PyCThostFtdcInstrumentOrderCommRateFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcInstrumentOrderCommRateFieldType_get_InvestUnitID,
    .set = PyCThostFtdcInstrumentOrderCommRateFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcInstrumentOrderCommRateFieldType_get_InstrumentID,
    .set = PyCThostFtdcInstrumentOrderCommRateFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcInstrumentOrderCommRateFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcInstrumentOrderCommRateField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("当前报单手续费的详细内容")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcInstrumentOrderCommRateFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcInstrumentOrderCommRateFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcInstrumentOrderCommRateFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcInstrumentOrderCommRateFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcInstrumentOrderCommRateFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcInstrumentOrderCommRateFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("当前报单手续费的详细内容")},
    {Py_tp_members, PyCThostFtdcInstrumentOrderCommRateFieldType_members},
    {Py_tp_getset, PyCThostFtdcInstrumentOrderCommRateFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcInstrumentOrderCommRateFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcInstrumentOrderCommRateFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcInstrumentOrderCommRateFieldType_spec = {
    .name = "PyCTP.CThostFtdcInstrumentOrderCommRateField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcInstrumentOrderCommRateFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcInstrumentOrderCommRateFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcInstrumentOrderCommRateFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcInstrumentOrderCommRateFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcInstrumentOrderCommRateFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcInstrumentOrderCommRateFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcInstrumentOrderCommRateFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcInstrumentOrderCommRateFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcInstrumentOrderCommRateField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInstrumentOrderCommRateField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}