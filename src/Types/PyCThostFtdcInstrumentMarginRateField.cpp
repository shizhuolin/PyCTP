
#include "PyCThostFtdcInstrumentMarginRateField.h"

///合约保证金率

static int PyCThostFtdcInstrumentMarginRateFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "reserve1", "InvestorRange", "BrokerID", "InvestorID", "HedgeFlag", "LongMarginRatioByMoney", "LongMarginRatioByVolume", "ShortMarginRatioByMoney", "ShortMarginRatioByVolume", "IsRelative", "ExchangeID", "InvestUnitID", "InstrumentID", NULL };


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcInstrumentMarginRateField_reserve1 = NULL;
    Py_ssize_t CThostFtdcInstrumentMarginRateField_reserve1_length = 0;

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    char CThostFtdcInstrumentMarginRateField_InvestorRange = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcInstrumentMarginRateField_BrokerID = NULL;
    Py_ssize_t CThostFtdcInstrumentMarginRateField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInstrumentMarginRateField_InvestorID = NULL;
    Py_ssize_t CThostFtdcInstrumentMarginRateField_InvestorID_length = 0;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcInstrumentMarginRateField_HedgeFlag = 0;

    /// 多头保证金率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcInstrumentMarginRateField_LongMarginRatioByMoney = 0.0;

    /// 多头保证金费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInstrumentMarginRateField_LongMarginRatioByVolume = 0.0;

    /// 空头保证金率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcInstrumentMarginRateField_ShortMarginRatioByMoney = 0.0;

    /// 空头保证金费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInstrumentMarginRateField_ShortMarginRatioByVolume = 0.0;

    /// 是否相对交易所收取
    /// typedef int TThostFtdcBoolType
    int CThostFtdcInstrumentMarginRateField_IsRelative = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcInstrumentMarginRateField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcInstrumentMarginRateField_ExchangeID_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcInstrumentMarginRateField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcInstrumentMarginRateField_InvestUnitID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcInstrumentMarginRateField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcInstrumentMarginRateField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#cddddiy#y#y#", (char **)kwlist
        , &CThostFtdcInstrumentMarginRateField_reserve1, &CThostFtdcInstrumentMarginRateField_reserve1_length
        , &CThostFtdcInstrumentMarginRateField_InvestorRange
        , &CThostFtdcInstrumentMarginRateField_BrokerID, &CThostFtdcInstrumentMarginRateField_BrokerID_length
        , &CThostFtdcInstrumentMarginRateField_InvestorID, &CThostFtdcInstrumentMarginRateField_InvestorID_length
        , &CThostFtdcInstrumentMarginRateField_HedgeFlag
        , &CThostFtdcInstrumentMarginRateField_LongMarginRatioByMoney
        , &CThostFtdcInstrumentMarginRateField_LongMarginRatioByVolume
        , &CThostFtdcInstrumentMarginRateField_ShortMarginRatioByMoney
        , &CThostFtdcInstrumentMarginRateField_ShortMarginRatioByVolume
        , &CThostFtdcInstrumentMarginRateField_IsRelative
        , &CThostFtdcInstrumentMarginRateField_ExchangeID, &CThostFtdcInstrumentMarginRateField_ExchangeID_length
        , &CThostFtdcInstrumentMarginRateField_InvestUnitID, &CThostFtdcInstrumentMarginRateField_InvestUnitID_length
        , &CThostFtdcInstrumentMarginRateField_InstrumentID, &CThostFtdcInstrumentMarginRateField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentMarginRateFieldData>(self);
    CThostFtdcInstrumentMarginRateField *data = &(extra->data);


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcInstrumentMarginRateField_reserve1 != NULL ) {
        if(CThostFtdcInstrumentMarginRateField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcInstrumentMarginRateField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcInstrumentMarginRateField_reserve1, CThostFtdcInstrumentMarginRateField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcInstrumentMarginRateField_reserve1, sizeof(data->reserve1));
        CThostFtdcInstrumentMarginRateField_reserve1 = NULL;
    }

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    data->InvestorRange = CThostFtdcInstrumentMarginRateField_InvestorRange;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcInstrumentMarginRateField_BrokerID != NULL ) {
        if(CThostFtdcInstrumentMarginRateField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcInstrumentMarginRateField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcInstrumentMarginRateField_BrokerID, CThostFtdcInstrumentMarginRateField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcInstrumentMarginRateField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcInstrumentMarginRateField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInstrumentMarginRateField_InvestorID != NULL ) {
        if(CThostFtdcInstrumentMarginRateField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcInstrumentMarginRateField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcInstrumentMarginRateField_InvestorID, CThostFtdcInstrumentMarginRateField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcInstrumentMarginRateField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcInstrumentMarginRateField_InvestorID = NULL;
    }

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    data->HedgeFlag = CThostFtdcInstrumentMarginRateField_HedgeFlag;

    /// 多头保证金率
    /// typedef double TThostFtdcRatioType
    data->LongMarginRatioByMoney = CThostFtdcInstrumentMarginRateField_LongMarginRatioByMoney;

    /// 多头保证金费
    /// typedef double TThostFtdcMoneyType
    data->LongMarginRatioByVolume = CThostFtdcInstrumentMarginRateField_LongMarginRatioByVolume;

    /// 空头保证金率
    /// typedef double TThostFtdcRatioType
    data->ShortMarginRatioByMoney = CThostFtdcInstrumentMarginRateField_ShortMarginRatioByMoney;

    /// 空头保证金费
    /// typedef double TThostFtdcMoneyType
    data->ShortMarginRatioByVolume = CThostFtdcInstrumentMarginRateField_ShortMarginRatioByVolume;

    /// 是否相对交易所收取
    /// typedef int TThostFtdcBoolType
    data->IsRelative = CThostFtdcInstrumentMarginRateField_IsRelative;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcInstrumentMarginRateField_ExchangeID != NULL ) {
        if(CThostFtdcInstrumentMarginRateField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcInstrumentMarginRateField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcInstrumentMarginRateField_ExchangeID, CThostFtdcInstrumentMarginRateField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcInstrumentMarginRateField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcInstrumentMarginRateField_ExchangeID = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcInstrumentMarginRateField_InvestUnitID != NULL ) {
        if(CThostFtdcInstrumentMarginRateField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcInstrumentMarginRateField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcInstrumentMarginRateField_InvestUnitID, CThostFtdcInstrumentMarginRateField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcInstrumentMarginRateField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcInstrumentMarginRateField_InvestUnitID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcInstrumentMarginRateField_InstrumentID != NULL ) {
        if(CThostFtdcInstrumentMarginRateField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcInstrumentMarginRateField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcInstrumentMarginRateField_InstrumentID, CThostFtdcInstrumentMarginRateField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcInstrumentMarginRateField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcInstrumentMarginRateField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcInstrumentMarginRateFieldType_repr(PyObject *self) {

    PyCThostFtdcInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentMarginRateFieldData>(self);
    CThostFtdcInstrumentMarginRateField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:c,s:y,s:y,s:c,s:d,s:d,s:d,s:d,s:i,s:y,s:y,s:y}"
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "InvestorRange", data->InvestorRange
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "HedgeFlag", data->HedgeFlag
        , "LongMarginRatioByMoney", data->LongMarginRatioByMoney
        , "LongMarginRatioByVolume", data->LongMarginRatioByVolume
        , "ShortMarginRatioByMoney", data->ShortMarginRatioByMoney
        , "ShortMarginRatioByVolume", data->ShortMarginRatioByVolume
        , "IsRelative", data->IsRelative
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInstrumentMarginRateField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInstrumentMarginRateField repr");
        return NULL;
    }

    return repr;
}


/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcInstrumentMarginRateFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentMarginRateFieldData>(self);
    CThostFtdcInstrumentMarginRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcInstrumentMarginRateFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentMarginRateField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentMarginRateFieldData>(self);
    CThostFtdcInstrumentMarginRateField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者范围
/// typedef char TThostFtdcInvestorRangeType
static PyObject *PyCThostFtdcInstrumentMarginRateFieldType_get_InvestorRange(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentMarginRateFieldData>(self);
    CThostFtdcInstrumentMarginRateField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->InvestorRange), 1);
}

static int PyCThostFtdcInstrumentMarginRateFieldType_set_InvestorRange(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorRange Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInstrumentMarginRateField::InvestorRange)) {
        PyErr_SetString(PyExc_ValueError, "InvestorRange must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentMarginRateFieldData>(self);
    CThostFtdcInstrumentMarginRateField *data = &(extra->data);
    data->InvestorRange = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcInstrumentMarginRateFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentMarginRateFieldData>(self);
    CThostFtdcInstrumentMarginRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcInstrumentMarginRateFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentMarginRateField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentMarginRateFieldData>(self);
    CThostFtdcInstrumentMarginRateField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInstrumentMarginRateFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentMarginRateFieldData>(self);
    CThostFtdcInstrumentMarginRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcInstrumentMarginRateFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentMarginRateField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentMarginRateFieldData>(self);
    CThostFtdcInstrumentMarginRateField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投机套保标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcInstrumentMarginRateFieldType_get_HedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentMarginRateFieldData>(self);
    CThostFtdcInstrumentMarginRateField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->HedgeFlag), 1);
}

static int PyCThostFtdcInstrumentMarginRateFieldType_set_HedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInstrumentMarginRateField::HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentMarginRateFieldData>(self);
    CThostFtdcInstrumentMarginRateField *data = &(extra->data);
    data->HedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcInstrumentMarginRateFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentMarginRateFieldData>(self);
    CThostFtdcInstrumentMarginRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcInstrumentMarginRateFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentMarginRateField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentMarginRateFieldData>(self);
    CThostFtdcInstrumentMarginRateField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcInstrumentMarginRateFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentMarginRateFieldData>(self);
    CThostFtdcInstrumentMarginRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcInstrumentMarginRateFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentMarginRateField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentMarginRateFieldData>(self);
    CThostFtdcInstrumentMarginRateField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcInstrumentMarginRateFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentMarginRateFieldData>(self);
    CThostFtdcInstrumentMarginRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcInstrumentMarginRateFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentMarginRateField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentMarginRateFieldData>(self);
    CThostFtdcInstrumentMarginRateField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcInstrumentMarginRateFieldType_members[] = {
    /// 多头保证金率
    /// typedef double TThostFtdcRatioType
    {
        .name = "LongMarginRatioByMoney",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInstrumentMarginRateFieldData, data.LongMarginRatioByMoney),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("多头保证金率")
    },
    /// 多头保证金费
    /// typedef double TThostFtdcMoneyType
    {
        .name = "LongMarginRatioByVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInstrumentMarginRateFieldData, data.LongMarginRatioByVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("多头保证金费")
    },
    /// 空头保证金率
    /// typedef double TThostFtdcRatioType
    {
        .name = "ShortMarginRatioByMoney",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInstrumentMarginRateFieldData, data.ShortMarginRatioByMoney),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("空头保证金率")
    },
    /// 空头保证金费
    /// typedef double TThostFtdcMoneyType
    {
        .name = "ShortMarginRatioByVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInstrumentMarginRateFieldData, data.ShortMarginRatioByVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("空头保证金费")
    },
    /// 是否相对交易所收取
    /// typedef int TThostFtdcBoolType
    {
        .name = "IsRelative",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInstrumentMarginRateFieldData, data.IsRelative),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("是否相对交易所收取")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcInstrumentMarginRateFieldType_getsets[] = {
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcInstrumentMarginRateFieldType_get_reserve1,
    .set = PyCThostFtdcInstrumentMarginRateFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    {
    .name = "InvestorRange",
    .get = PyCThostFtdcInstrumentMarginRateFieldType_get_InvestorRange,
    .set = PyCThostFtdcInstrumentMarginRateFieldType_set_InvestorRange,
    .doc = PyDoc_STR("投资者范围"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcInstrumentMarginRateFieldType_get_BrokerID,
    .set = PyCThostFtdcInstrumentMarginRateFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcInstrumentMarginRateFieldType_get_InvestorID,
    .set = PyCThostFtdcInstrumentMarginRateFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "HedgeFlag",
    .get = PyCThostFtdcInstrumentMarginRateFieldType_get_HedgeFlag,
    .set = PyCThostFtdcInstrumentMarginRateFieldType_set_HedgeFlag,
    .doc = PyDoc_STR("投机套保标志"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcInstrumentMarginRateFieldType_get_ExchangeID,
    .set = PyCThostFtdcInstrumentMarginRateFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcInstrumentMarginRateFieldType_get_InvestUnitID,
    .set = PyCThostFtdcInstrumentMarginRateFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcInstrumentMarginRateFieldType_get_InstrumentID,
    .set = PyCThostFtdcInstrumentMarginRateFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcInstrumentMarginRateFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcInstrumentMarginRateField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("合约保证金率")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcInstrumentMarginRateFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcInstrumentMarginRateFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcInstrumentMarginRateFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcInstrumentMarginRateFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcInstrumentMarginRateFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcInstrumentMarginRateFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("合约保证金率")},
    {Py_tp_members, PyCThostFtdcInstrumentMarginRateFieldType_members},
    {Py_tp_getset, PyCThostFtdcInstrumentMarginRateFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcInstrumentMarginRateFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcInstrumentMarginRateFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcInstrumentMarginRateFieldType_spec = {
    .name = "PyCTP.CThostFtdcInstrumentMarginRateField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcInstrumentMarginRateFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcInstrumentMarginRateFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcInstrumentMarginRateFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcInstrumentMarginRateFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcInstrumentMarginRateFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcInstrumentMarginRateFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcInstrumentMarginRateFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcInstrumentMarginRateFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcInstrumentMarginRateField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInstrumentMarginRateField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}