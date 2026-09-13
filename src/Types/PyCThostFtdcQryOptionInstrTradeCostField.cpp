
#include "PyCThostFtdcQryOptionInstrTradeCostField.h"

///期权交易成本查询

static int PyCThostFtdcQryOptionInstrTradeCostFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "reserve1", "HedgeFlag", "InputPrice", "UnderlyingPrice", "ExchangeID", "InvestUnitID", "InstrumentID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryOptionInstrTradeCostField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryOptionInstrTradeCostField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryOptionInstrTradeCostField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryOptionInstrTradeCostField_InvestorID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcQryOptionInstrTradeCostField_reserve1 = NULL;
    Py_ssize_t CThostFtdcQryOptionInstrTradeCostField_reserve1_length = 0;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcQryOptionInstrTradeCostField_HedgeFlag = 0;

    /// 期权合约报价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcQryOptionInstrTradeCostField_InputPrice = 0.0;

    /// 标的价格,填0则用昨结算价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcQryOptionInstrTradeCostField_UnderlyingPrice = 0.0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryOptionInstrTradeCostField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryOptionInstrTradeCostField_ExchangeID_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcQryOptionInstrTradeCostField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcQryOptionInstrTradeCostField_InvestUnitID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryOptionInstrTradeCostField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcQryOptionInstrTradeCostField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#cddy#y#y#", (char **)kwlist
        , &CThostFtdcQryOptionInstrTradeCostField_BrokerID, &CThostFtdcQryOptionInstrTradeCostField_BrokerID_length
        , &CThostFtdcQryOptionInstrTradeCostField_InvestorID, &CThostFtdcQryOptionInstrTradeCostField_InvestorID_length
        , &CThostFtdcQryOptionInstrTradeCostField_reserve1, &CThostFtdcQryOptionInstrTradeCostField_reserve1_length
        , &CThostFtdcQryOptionInstrTradeCostField_HedgeFlag
        , &CThostFtdcQryOptionInstrTradeCostField_InputPrice
        , &CThostFtdcQryOptionInstrTradeCostField_UnderlyingPrice
        , &CThostFtdcQryOptionInstrTradeCostField_ExchangeID, &CThostFtdcQryOptionInstrTradeCostField_ExchangeID_length
        , &CThostFtdcQryOptionInstrTradeCostField_InvestUnitID, &CThostFtdcQryOptionInstrTradeCostField_InvestUnitID_length
        , &CThostFtdcQryOptionInstrTradeCostField_InstrumentID, &CThostFtdcQryOptionInstrTradeCostField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryOptionInstrTradeCostFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionInstrTradeCostFieldData>(self);
    CThostFtdcQryOptionInstrTradeCostField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryOptionInstrTradeCostField_BrokerID != NULL ) {
        if(CThostFtdcQryOptionInstrTradeCostField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryOptionInstrTradeCostField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryOptionInstrTradeCostField_BrokerID, CThostFtdcQryOptionInstrTradeCostField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryOptionInstrTradeCostField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryOptionInstrTradeCostField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryOptionInstrTradeCostField_InvestorID != NULL ) {
        if(CThostFtdcQryOptionInstrTradeCostField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryOptionInstrTradeCostField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryOptionInstrTradeCostField_InvestorID, CThostFtdcQryOptionInstrTradeCostField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryOptionInstrTradeCostField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryOptionInstrTradeCostField_InvestorID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcQryOptionInstrTradeCostField_reserve1 != NULL ) {
        if(CThostFtdcQryOptionInstrTradeCostField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcQryOptionInstrTradeCostField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcQryOptionInstrTradeCostField_reserve1, CThostFtdcQryOptionInstrTradeCostField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcQryOptionInstrTradeCostField_reserve1, sizeof(data->reserve1));
        CThostFtdcQryOptionInstrTradeCostField_reserve1 = NULL;
    }

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    data->HedgeFlag = CThostFtdcQryOptionInstrTradeCostField_HedgeFlag;

    /// 期权合约报价
    /// typedef double TThostFtdcPriceType
    data->InputPrice = CThostFtdcQryOptionInstrTradeCostField_InputPrice;

    /// 标的价格,填0则用昨结算价
    /// typedef double TThostFtdcPriceType
    data->UnderlyingPrice = CThostFtdcQryOptionInstrTradeCostField_UnderlyingPrice;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryOptionInstrTradeCostField_ExchangeID != NULL ) {
        if(CThostFtdcQryOptionInstrTradeCostField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryOptionInstrTradeCostField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryOptionInstrTradeCostField_ExchangeID, CThostFtdcQryOptionInstrTradeCostField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryOptionInstrTradeCostField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryOptionInstrTradeCostField_ExchangeID = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcQryOptionInstrTradeCostField_InvestUnitID != NULL ) {
        if(CThostFtdcQryOptionInstrTradeCostField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcQryOptionInstrTradeCostField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcQryOptionInstrTradeCostField_InvestUnitID, CThostFtdcQryOptionInstrTradeCostField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcQryOptionInstrTradeCostField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcQryOptionInstrTradeCostField_InvestUnitID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryOptionInstrTradeCostField_InstrumentID != NULL ) {
        if(CThostFtdcQryOptionInstrTradeCostField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcQryOptionInstrTradeCostField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcQryOptionInstrTradeCostField_InstrumentID, CThostFtdcQryOptionInstrTradeCostField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcQryOptionInstrTradeCostField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcQryOptionInstrTradeCostField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryOptionInstrTradeCostFieldType_repr(PyObject *self) {

    PyCThostFtdcQryOptionInstrTradeCostFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionInstrTradeCostFieldData>(self);
    CThostFtdcQryOptionInstrTradeCostField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:c,s:d,s:d,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "HedgeFlag", data->HedgeFlag
        , "InputPrice", data->InputPrice
        , "UnderlyingPrice", data->UnderlyingPrice
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryOptionInstrTradeCostField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryOptionInstrTradeCostField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryOptionInstrTradeCostFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryOptionInstrTradeCostFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionInstrTradeCostFieldData>(self);
    CThostFtdcQryOptionInstrTradeCostField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryOptionInstrTradeCostFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryOptionInstrTradeCostField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryOptionInstrTradeCostFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionInstrTradeCostFieldData>(self);
    CThostFtdcQryOptionInstrTradeCostField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryOptionInstrTradeCostFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryOptionInstrTradeCostFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionInstrTradeCostFieldData>(self);
    CThostFtdcQryOptionInstrTradeCostField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryOptionInstrTradeCostFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryOptionInstrTradeCostField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryOptionInstrTradeCostFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionInstrTradeCostFieldData>(self);
    CThostFtdcQryOptionInstrTradeCostField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcQryOptionInstrTradeCostFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcQryOptionInstrTradeCostFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionInstrTradeCostFieldData>(self);
    CThostFtdcQryOptionInstrTradeCostField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcQryOptionInstrTradeCostFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryOptionInstrTradeCostField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryOptionInstrTradeCostFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionInstrTradeCostFieldData>(self);
    CThostFtdcQryOptionInstrTradeCostField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投机套保标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcQryOptionInstrTradeCostFieldType_get_HedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcQryOptionInstrTradeCostFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionInstrTradeCostFieldData>(self);
    CThostFtdcQryOptionInstrTradeCostField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->HedgeFlag), 1);
}

static int PyCThostFtdcQryOptionInstrTradeCostFieldType_set_HedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcQryOptionInstrTradeCostField::HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryOptionInstrTradeCostFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionInstrTradeCostFieldData>(self);
    CThostFtdcQryOptionInstrTradeCostField *data = &(extra->data);
    data->HedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryOptionInstrTradeCostFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryOptionInstrTradeCostFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionInstrTradeCostFieldData>(self);
    CThostFtdcQryOptionInstrTradeCostField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryOptionInstrTradeCostFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryOptionInstrTradeCostField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryOptionInstrTradeCostFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionInstrTradeCostFieldData>(self);
    CThostFtdcQryOptionInstrTradeCostField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcQryOptionInstrTradeCostFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcQryOptionInstrTradeCostFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionInstrTradeCostFieldData>(self);
    CThostFtdcQryOptionInstrTradeCostField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcQryOptionInstrTradeCostFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryOptionInstrTradeCostField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryOptionInstrTradeCostFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionInstrTradeCostFieldData>(self);
    CThostFtdcQryOptionInstrTradeCostField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryOptionInstrTradeCostFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcQryOptionInstrTradeCostFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionInstrTradeCostFieldData>(self);
    CThostFtdcQryOptionInstrTradeCostField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcQryOptionInstrTradeCostFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryOptionInstrTradeCostField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryOptionInstrTradeCostFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionInstrTradeCostFieldData>(self);
    CThostFtdcQryOptionInstrTradeCostField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryOptionInstrTradeCostFieldType_members[] = {
    /// 期权合约报价
    /// typedef double TThostFtdcPriceType
    {
        .name = "InputPrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcQryOptionInstrTradeCostFieldData, data.InputPrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("期权合约报价")
    },
    /// 标的价格,填0则用昨结算价
    /// typedef double TThostFtdcPriceType
    {
        .name = "UnderlyingPrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcQryOptionInstrTradeCostFieldData, data.UnderlyingPrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("标的价格,填0则用昨结算价")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryOptionInstrTradeCostFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryOptionInstrTradeCostFieldType_get_BrokerID,
    .set = PyCThostFtdcQryOptionInstrTradeCostFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryOptionInstrTradeCostFieldType_get_InvestorID,
    .set = PyCThostFtdcQryOptionInstrTradeCostFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcQryOptionInstrTradeCostFieldType_get_reserve1,
    .set = PyCThostFtdcQryOptionInstrTradeCostFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "HedgeFlag",
    .get = PyCThostFtdcQryOptionInstrTradeCostFieldType_get_HedgeFlag,
    .set = PyCThostFtdcQryOptionInstrTradeCostFieldType_set_HedgeFlag,
    .doc = PyDoc_STR("投机套保标志"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryOptionInstrTradeCostFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryOptionInstrTradeCostFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcQryOptionInstrTradeCostFieldType_get_InvestUnitID,
    .set = PyCThostFtdcQryOptionInstrTradeCostFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcQryOptionInstrTradeCostFieldType_get_InstrumentID,
    .set = PyCThostFtdcQryOptionInstrTradeCostFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryOptionInstrTradeCostFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryOptionInstrTradeCostField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("期权交易成本查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryOptionInstrTradeCostFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryOptionInstrTradeCostFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryOptionInstrTradeCostFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryOptionInstrTradeCostFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryOptionInstrTradeCostFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryOptionInstrTradeCostFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("期权交易成本查询")},
    {Py_tp_members, PyCThostFtdcQryOptionInstrTradeCostFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryOptionInstrTradeCostFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryOptionInstrTradeCostFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryOptionInstrTradeCostFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryOptionInstrTradeCostFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryOptionInstrTradeCostField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryOptionInstrTradeCostFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryOptionInstrTradeCostFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryOptionInstrTradeCostFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryOptionInstrTradeCostFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryOptionInstrTradeCostFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryOptionInstrTradeCostFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryOptionInstrTradeCostFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryOptionInstrTradeCostFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryOptionInstrTradeCostField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryOptionInstrTradeCostField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}