
#include "PyCThostFtdcOptionInstrTradeCostField.h"

///期权交易成本

static int PyCThostFtdcOptionInstrTradeCostFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "reserve1", "HedgeFlag", "FixedMargin", "MiniMargin", "Royalty", "ExchFixedMargin", "ExchMiniMargin", "ExchangeID", "InvestUnitID", "InstrumentID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcOptionInstrTradeCostField_BrokerID = NULL;
    Py_ssize_t CThostFtdcOptionInstrTradeCostField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcOptionInstrTradeCostField_InvestorID = NULL;
    Py_ssize_t CThostFtdcOptionInstrTradeCostField_InvestorID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcOptionInstrTradeCostField_reserve1 = NULL;
    Py_ssize_t CThostFtdcOptionInstrTradeCostField_reserve1_length = 0;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcOptionInstrTradeCostField_HedgeFlag = 0;

    /// 期权合约保证金不变部分
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcOptionInstrTradeCostField_FixedMargin = 0.0;

    /// 期权合约最小保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcOptionInstrTradeCostField_MiniMargin = 0.0;

    /// 期权合约权利金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcOptionInstrTradeCostField_Royalty = 0.0;

    /// 交易所期权合约保证金不变部分
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcOptionInstrTradeCostField_ExchFixedMargin = 0.0;

    /// 交易所期权合约最小保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcOptionInstrTradeCostField_ExchMiniMargin = 0.0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcOptionInstrTradeCostField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcOptionInstrTradeCostField_ExchangeID_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcOptionInstrTradeCostField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcOptionInstrTradeCostField_InvestUnitID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcOptionInstrTradeCostField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcOptionInstrTradeCostField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#cdddddy#y#y#", (char **)kwlist
        , &CThostFtdcOptionInstrTradeCostField_BrokerID, &CThostFtdcOptionInstrTradeCostField_BrokerID_length
        , &CThostFtdcOptionInstrTradeCostField_InvestorID, &CThostFtdcOptionInstrTradeCostField_InvestorID_length
        , &CThostFtdcOptionInstrTradeCostField_reserve1, &CThostFtdcOptionInstrTradeCostField_reserve1_length
        , &CThostFtdcOptionInstrTradeCostField_HedgeFlag
        , &CThostFtdcOptionInstrTradeCostField_FixedMargin
        , &CThostFtdcOptionInstrTradeCostField_MiniMargin
        , &CThostFtdcOptionInstrTradeCostField_Royalty
        , &CThostFtdcOptionInstrTradeCostField_ExchFixedMargin
        , &CThostFtdcOptionInstrTradeCostField_ExchMiniMargin
        , &CThostFtdcOptionInstrTradeCostField_ExchangeID, &CThostFtdcOptionInstrTradeCostField_ExchangeID_length
        , &CThostFtdcOptionInstrTradeCostField_InvestUnitID, &CThostFtdcOptionInstrTradeCostField_InvestUnitID_length
        , &CThostFtdcOptionInstrTradeCostField_InstrumentID, &CThostFtdcOptionInstrTradeCostField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcOptionInstrTradeCostFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrTradeCostFieldData>(self);
    CThostFtdcOptionInstrTradeCostField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcOptionInstrTradeCostField_BrokerID != NULL ) {
        if(CThostFtdcOptionInstrTradeCostField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcOptionInstrTradeCostField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcOptionInstrTradeCostField_BrokerID, CThostFtdcOptionInstrTradeCostField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcOptionInstrTradeCostField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcOptionInstrTradeCostField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcOptionInstrTradeCostField_InvestorID != NULL ) {
        if(CThostFtdcOptionInstrTradeCostField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcOptionInstrTradeCostField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcOptionInstrTradeCostField_InvestorID, CThostFtdcOptionInstrTradeCostField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcOptionInstrTradeCostField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcOptionInstrTradeCostField_InvestorID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcOptionInstrTradeCostField_reserve1 != NULL ) {
        if(CThostFtdcOptionInstrTradeCostField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcOptionInstrTradeCostField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcOptionInstrTradeCostField_reserve1, CThostFtdcOptionInstrTradeCostField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcOptionInstrTradeCostField_reserve1, sizeof(data->reserve1));
        CThostFtdcOptionInstrTradeCostField_reserve1 = NULL;
    }

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    data->HedgeFlag = CThostFtdcOptionInstrTradeCostField_HedgeFlag;

    /// 期权合约保证金不变部分
    /// typedef double TThostFtdcMoneyType
    data->FixedMargin = CThostFtdcOptionInstrTradeCostField_FixedMargin;

    /// 期权合约最小保证金
    /// typedef double TThostFtdcMoneyType
    data->MiniMargin = CThostFtdcOptionInstrTradeCostField_MiniMargin;

    /// 期权合约权利金
    /// typedef double TThostFtdcMoneyType
    data->Royalty = CThostFtdcOptionInstrTradeCostField_Royalty;

    /// 交易所期权合约保证金不变部分
    /// typedef double TThostFtdcMoneyType
    data->ExchFixedMargin = CThostFtdcOptionInstrTradeCostField_ExchFixedMargin;

    /// 交易所期权合约最小保证金
    /// typedef double TThostFtdcMoneyType
    data->ExchMiniMargin = CThostFtdcOptionInstrTradeCostField_ExchMiniMargin;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcOptionInstrTradeCostField_ExchangeID != NULL ) {
        if(CThostFtdcOptionInstrTradeCostField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcOptionInstrTradeCostField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcOptionInstrTradeCostField_ExchangeID, CThostFtdcOptionInstrTradeCostField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcOptionInstrTradeCostField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcOptionInstrTradeCostField_ExchangeID = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcOptionInstrTradeCostField_InvestUnitID != NULL ) {
        if(CThostFtdcOptionInstrTradeCostField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcOptionInstrTradeCostField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcOptionInstrTradeCostField_InvestUnitID, CThostFtdcOptionInstrTradeCostField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcOptionInstrTradeCostField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcOptionInstrTradeCostField_InvestUnitID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcOptionInstrTradeCostField_InstrumentID != NULL ) {
        if(CThostFtdcOptionInstrTradeCostField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcOptionInstrTradeCostField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcOptionInstrTradeCostField_InstrumentID, CThostFtdcOptionInstrTradeCostField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcOptionInstrTradeCostField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcOptionInstrTradeCostField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcOptionInstrTradeCostFieldType_repr(PyObject *self) {

    PyCThostFtdcOptionInstrTradeCostFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrTradeCostFieldData>(self);
    CThostFtdcOptionInstrTradeCostField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:c,s:d,s:d,s:d,s:d,s:d,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "HedgeFlag", data->HedgeFlag
        , "FixedMargin", data->FixedMargin
        , "MiniMargin", data->MiniMargin
        , "Royalty", data->Royalty
        , "ExchFixedMargin", data->ExchFixedMargin
        , "ExchMiniMargin", data->ExchMiniMargin
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcOptionInstrTradeCostField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcOptionInstrTradeCostField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcOptionInstrTradeCostFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcOptionInstrTradeCostFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrTradeCostFieldData>(self);
    CThostFtdcOptionInstrTradeCostField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcOptionInstrTradeCostFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionInstrTradeCostField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionInstrTradeCostFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrTradeCostFieldData>(self);
    CThostFtdcOptionInstrTradeCostField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcOptionInstrTradeCostFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcOptionInstrTradeCostFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrTradeCostFieldData>(self);
    CThostFtdcOptionInstrTradeCostField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcOptionInstrTradeCostFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionInstrTradeCostField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionInstrTradeCostFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrTradeCostFieldData>(self);
    CThostFtdcOptionInstrTradeCostField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcOptionInstrTradeCostFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcOptionInstrTradeCostFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrTradeCostFieldData>(self);
    CThostFtdcOptionInstrTradeCostField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcOptionInstrTradeCostFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionInstrTradeCostField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionInstrTradeCostFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrTradeCostFieldData>(self);
    CThostFtdcOptionInstrTradeCostField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投机套保标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcOptionInstrTradeCostFieldType_get_HedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcOptionInstrTradeCostFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrTradeCostFieldData>(self);
    CThostFtdcOptionInstrTradeCostField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->HedgeFlag), 1);
}

static int PyCThostFtdcOptionInstrTradeCostFieldType_set_HedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcOptionInstrTradeCostField::HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionInstrTradeCostFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrTradeCostFieldData>(self);
    CThostFtdcOptionInstrTradeCostField *data = &(extra->data);
    data->HedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcOptionInstrTradeCostFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcOptionInstrTradeCostFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrTradeCostFieldData>(self);
    CThostFtdcOptionInstrTradeCostField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcOptionInstrTradeCostFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionInstrTradeCostField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionInstrTradeCostFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrTradeCostFieldData>(self);
    CThostFtdcOptionInstrTradeCostField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcOptionInstrTradeCostFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcOptionInstrTradeCostFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrTradeCostFieldData>(self);
    CThostFtdcOptionInstrTradeCostField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcOptionInstrTradeCostFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionInstrTradeCostField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionInstrTradeCostFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrTradeCostFieldData>(self);
    CThostFtdcOptionInstrTradeCostField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcOptionInstrTradeCostFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcOptionInstrTradeCostFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrTradeCostFieldData>(self);
    CThostFtdcOptionInstrTradeCostField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcOptionInstrTradeCostFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionInstrTradeCostField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionInstrTradeCostFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrTradeCostFieldData>(self);
    CThostFtdcOptionInstrTradeCostField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcOptionInstrTradeCostFieldType_members[] = {
    /// 期权合约保证金不变部分
    /// typedef double TThostFtdcMoneyType
    {
        .name = "FixedMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcOptionInstrTradeCostFieldData, data.FixedMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("期权合约保证金不变部分")
    },
    /// 期权合约最小保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "MiniMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcOptionInstrTradeCostFieldData, data.MiniMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("期权合约最小保证金")
    },
    /// 期权合约权利金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "Royalty",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcOptionInstrTradeCostFieldData, data.Royalty),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("期权合约权利金")
    },
    /// 交易所期权合约保证金不变部分
    /// typedef double TThostFtdcMoneyType
    {
        .name = "ExchFixedMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcOptionInstrTradeCostFieldData, data.ExchFixedMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易所期权合约保证金不变部分")
    },
    /// 交易所期权合约最小保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "ExchMiniMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcOptionInstrTradeCostFieldData, data.ExchMiniMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易所期权合约最小保证金")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcOptionInstrTradeCostFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcOptionInstrTradeCostFieldType_get_BrokerID,
    .set = PyCThostFtdcOptionInstrTradeCostFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcOptionInstrTradeCostFieldType_get_InvestorID,
    .set = PyCThostFtdcOptionInstrTradeCostFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcOptionInstrTradeCostFieldType_get_reserve1,
    .set = PyCThostFtdcOptionInstrTradeCostFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "HedgeFlag",
    .get = PyCThostFtdcOptionInstrTradeCostFieldType_get_HedgeFlag,
    .set = PyCThostFtdcOptionInstrTradeCostFieldType_set_HedgeFlag,
    .doc = PyDoc_STR("投机套保标志"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcOptionInstrTradeCostFieldType_get_ExchangeID,
    .set = PyCThostFtdcOptionInstrTradeCostFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcOptionInstrTradeCostFieldType_get_InvestUnitID,
    .set = PyCThostFtdcOptionInstrTradeCostFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcOptionInstrTradeCostFieldType_get_InstrumentID,
    .set = PyCThostFtdcOptionInstrTradeCostFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcOptionInstrTradeCostFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcOptionInstrTradeCostField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("期权交易成本")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcOptionInstrTradeCostFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcOptionInstrTradeCostFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcOptionInstrTradeCostFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcOptionInstrTradeCostFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcOptionInstrTradeCostFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcOptionInstrTradeCostFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("期权交易成本")},
    {Py_tp_members, PyCThostFtdcOptionInstrTradeCostFieldType_members},
    {Py_tp_getset, PyCThostFtdcOptionInstrTradeCostFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcOptionInstrTradeCostFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcOptionInstrTradeCostFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcOptionInstrTradeCostFieldType_spec = {
    .name = "PyCTP.CThostFtdcOptionInstrTradeCostField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcOptionInstrTradeCostFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcOptionInstrTradeCostFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcOptionInstrTradeCostFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcOptionInstrTradeCostFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcOptionInstrTradeCostFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcOptionInstrTradeCostFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcOptionInstrTradeCostFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcOptionInstrTradeCostFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcOptionInstrTradeCostField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcOptionInstrTradeCostField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}