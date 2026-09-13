
#include "PyCThostFtdcRCAMSInvestorCombPositionField.h"

///RCAMS策略组合持仓

static int PyCThostFtdcRCAMSInvestorCombPositionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "BrokerID", "InvestorID", "InstrumentID", "HedgeFlag", "PosiDirection", "CombInstrumentID", "LegID", "ExchangeInstID", "TotalAmt", "ExchMargin", "Margin", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcRCAMSInvestorCombPositionField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcRCAMSInvestorCombPositionField_ExchangeID_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcRCAMSInvestorCombPositionField_BrokerID = NULL;
    Py_ssize_t CThostFtdcRCAMSInvestorCombPositionField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcRCAMSInvestorCombPositionField_InvestorID = NULL;
    Py_ssize_t CThostFtdcRCAMSInvestorCombPositionField_InvestorID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcRCAMSInvestorCombPositionField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcRCAMSInvestorCombPositionField_InstrumentID_length = 0;

    /// 投套标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcRCAMSInvestorCombPositionField_HedgeFlag = 0;

    /// 持仓多空方向
    /// typedef char TThostFtdcPosiDirectionType
    char CThostFtdcRCAMSInvestorCombPositionField_PosiDirection = 0;

    /// 组合合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcRCAMSInvestorCombPositionField_CombInstrumentID = NULL;
    Py_ssize_t CThostFtdcRCAMSInvestorCombPositionField_CombInstrumentID_length = 0;

    /// 单腿编号
    /// typedef int TThostFtdcLegIDType
    int CThostFtdcRCAMSInvestorCombPositionField_LegID = 0;

    /// 交易所组合合约代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    char *CThostFtdcRCAMSInvestorCombPositionField_ExchangeInstID = NULL;
    Py_ssize_t CThostFtdcRCAMSInvestorCombPositionField_ExchangeInstID_length = 0;

    /// 持仓量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcRCAMSInvestorCombPositionField_TotalAmt = 0;

    /// 交易所保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcRCAMSInvestorCombPositionField_ExchMargin = 0.0;

    /// 投资者保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcRCAMSInvestorCombPositionField_Margin = 0.0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#ccy#iy#idd", (char **)kwlist
        , &CThostFtdcRCAMSInvestorCombPositionField_ExchangeID, &CThostFtdcRCAMSInvestorCombPositionField_ExchangeID_length
        , &CThostFtdcRCAMSInvestorCombPositionField_BrokerID, &CThostFtdcRCAMSInvestorCombPositionField_BrokerID_length
        , &CThostFtdcRCAMSInvestorCombPositionField_InvestorID, &CThostFtdcRCAMSInvestorCombPositionField_InvestorID_length
        , &CThostFtdcRCAMSInvestorCombPositionField_InstrumentID, &CThostFtdcRCAMSInvestorCombPositionField_InstrumentID_length
        , &CThostFtdcRCAMSInvestorCombPositionField_HedgeFlag
        , &CThostFtdcRCAMSInvestorCombPositionField_PosiDirection
        , &CThostFtdcRCAMSInvestorCombPositionField_CombInstrumentID, &CThostFtdcRCAMSInvestorCombPositionField_CombInstrumentID_length
        , &CThostFtdcRCAMSInvestorCombPositionField_LegID
        , &CThostFtdcRCAMSInvestorCombPositionField_ExchangeInstID, &CThostFtdcRCAMSInvestorCombPositionField_ExchangeInstID_length
        , &CThostFtdcRCAMSInvestorCombPositionField_TotalAmt
        , &CThostFtdcRCAMSInvestorCombPositionField_ExchMargin
        , &CThostFtdcRCAMSInvestorCombPositionField_Margin
    )) {
        return -1;
    }

    PyCThostFtdcRCAMSInvestorCombPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSInvestorCombPositionFieldData>(self);
    CThostFtdcRCAMSInvestorCombPositionField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcRCAMSInvestorCombPositionField_ExchangeID != NULL ) {
        if(CThostFtdcRCAMSInvestorCombPositionField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcRCAMSInvestorCombPositionField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcRCAMSInvestorCombPositionField_ExchangeID, CThostFtdcRCAMSInvestorCombPositionField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcRCAMSInvestorCombPositionField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcRCAMSInvestorCombPositionField_ExchangeID = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcRCAMSInvestorCombPositionField_BrokerID != NULL ) {
        if(CThostFtdcRCAMSInvestorCombPositionField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcRCAMSInvestorCombPositionField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcRCAMSInvestorCombPositionField_BrokerID, CThostFtdcRCAMSInvestorCombPositionField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcRCAMSInvestorCombPositionField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcRCAMSInvestorCombPositionField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcRCAMSInvestorCombPositionField_InvestorID != NULL ) {
        if(CThostFtdcRCAMSInvestorCombPositionField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcRCAMSInvestorCombPositionField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcRCAMSInvestorCombPositionField_InvestorID, CThostFtdcRCAMSInvestorCombPositionField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcRCAMSInvestorCombPositionField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcRCAMSInvestorCombPositionField_InvestorID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcRCAMSInvestorCombPositionField_InstrumentID != NULL ) {
        if(CThostFtdcRCAMSInvestorCombPositionField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcRCAMSInvestorCombPositionField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcRCAMSInvestorCombPositionField_InstrumentID, CThostFtdcRCAMSInvestorCombPositionField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcRCAMSInvestorCombPositionField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcRCAMSInvestorCombPositionField_InstrumentID = NULL;
    }

    /// 投套标志
    /// typedef char TThostFtdcHedgeFlagType
    data->HedgeFlag = CThostFtdcRCAMSInvestorCombPositionField_HedgeFlag;

    /// 持仓多空方向
    /// typedef char TThostFtdcPosiDirectionType
    data->PosiDirection = CThostFtdcRCAMSInvestorCombPositionField_PosiDirection;

    /// 组合合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcRCAMSInvestorCombPositionField_CombInstrumentID != NULL ) {
        if(CThostFtdcRCAMSInvestorCombPositionField_CombInstrumentID_length >= (Py_ssize_t)sizeof(data->CombInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "CombInstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcRCAMSInvestorCombPositionField_CombInstrumentID_length);
            return -1;
        }
        // memset(data->CombInstrumentID, 0, sizeof(data->CombInstrumentID));
        // memcpy(data->CombInstrumentID, CThostFtdcRCAMSInvestorCombPositionField_CombInstrumentID, CThostFtdcRCAMSInvestorCombPositionField_CombInstrumentID_length);
        strncpy(data->CombInstrumentID, CThostFtdcRCAMSInvestorCombPositionField_CombInstrumentID, sizeof(data->CombInstrumentID));
        CThostFtdcRCAMSInvestorCombPositionField_CombInstrumentID = NULL;
    }

    /// 单腿编号
    /// typedef int TThostFtdcLegIDType
    data->LegID = CThostFtdcRCAMSInvestorCombPositionField_LegID;

    /// 交易所组合合约代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    if( CThostFtdcRCAMSInvestorCombPositionField_ExchangeInstID != NULL ) {
        if(CThostFtdcRCAMSInvestorCombPositionField_ExchangeInstID_length >= (Py_ssize_t)sizeof(data->ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is 80)", CThostFtdcRCAMSInvestorCombPositionField_ExchangeInstID_length);
            return -1;
        }
        // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
        // memcpy(data->ExchangeInstID, CThostFtdcRCAMSInvestorCombPositionField_ExchangeInstID, CThostFtdcRCAMSInvestorCombPositionField_ExchangeInstID_length);
        strncpy(data->ExchangeInstID, CThostFtdcRCAMSInvestorCombPositionField_ExchangeInstID, sizeof(data->ExchangeInstID));
        CThostFtdcRCAMSInvestorCombPositionField_ExchangeInstID = NULL;
    }

    /// 持仓量
    /// typedef int TThostFtdcVolumeType
    data->TotalAmt = CThostFtdcRCAMSInvestorCombPositionField_TotalAmt;

    /// 交易所保证金
    /// typedef double TThostFtdcMoneyType
    data->ExchMargin = CThostFtdcRCAMSInvestorCombPositionField_ExchMargin;

    /// 投资者保证金
    /// typedef double TThostFtdcMoneyType
    data->Margin = CThostFtdcRCAMSInvestorCombPositionField_Margin;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcRCAMSInvestorCombPositionFieldType_repr(PyObject *self) {

    PyCThostFtdcRCAMSInvestorCombPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSInvestorCombPositionFieldData>(self);
    CThostFtdcRCAMSInvestorCombPositionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:c,s:c,s:y,s:i,s:y,s:i,s:d,s:d}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "HedgeFlag", data->HedgeFlag
        , "PosiDirection", data->PosiDirection
        , "CombInstrumentID", data->CombInstrumentID//, (Py_ssize_t)sizeof(data->CombInstrumentID)
        , "LegID", data->LegID
        , "ExchangeInstID", data->ExchangeInstID//, (Py_ssize_t)sizeof(data->ExchangeInstID)
        , "TotalAmt", data->TotalAmt
        , "ExchMargin", data->ExchMargin
        , "Margin", data->Margin
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRCAMSInvestorCombPositionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRCAMSInvestorCombPositionField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcRCAMSInvestorCombPositionFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcRCAMSInvestorCombPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSInvestorCombPositionFieldData>(self);
    CThostFtdcRCAMSInvestorCombPositionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcRCAMSInvestorCombPositionFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRCAMSInvestorCombPositionField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRCAMSInvestorCombPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSInvestorCombPositionFieldData>(self);
    CThostFtdcRCAMSInvestorCombPositionField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcRCAMSInvestorCombPositionFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcRCAMSInvestorCombPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSInvestorCombPositionFieldData>(self);
    CThostFtdcRCAMSInvestorCombPositionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcRCAMSInvestorCombPositionFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRCAMSInvestorCombPositionField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRCAMSInvestorCombPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSInvestorCombPositionFieldData>(self);
    CThostFtdcRCAMSInvestorCombPositionField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcRCAMSInvestorCombPositionFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcRCAMSInvestorCombPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSInvestorCombPositionFieldData>(self);
    CThostFtdcRCAMSInvestorCombPositionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcRCAMSInvestorCombPositionFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRCAMSInvestorCombPositionField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRCAMSInvestorCombPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSInvestorCombPositionFieldData>(self);
    CThostFtdcRCAMSInvestorCombPositionField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcRCAMSInvestorCombPositionFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcRCAMSInvestorCombPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSInvestorCombPositionFieldData>(self);
    CThostFtdcRCAMSInvestorCombPositionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcRCAMSInvestorCombPositionFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRCAMSInvestorCombPositionField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRCAMSInvestorCombPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSInvestorCombPositionFieldData>(self);
    CThostFtdcRCAMSInvestorCombPositionField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投套标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcRCAMSInvestorCombPositionFieldType_get_HedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcRCAMSInvestorCombPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSInvestorCombPositionFieldData>(self);
    CThostFtdcRCAMSInvestorCombPositionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->HedgeFlag), 1);
}

static int PyCThostFtdcRCAMSInvestorCombPositionFieldType_set_HedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRCAMSInvestorCombPositionField::HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRCAMSInvestorCombPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSInvestorCombPositionFieldData>(self);
    CThostFtdcRCAMSInvestorCombPositionField *data = &(extra->data);
    data->HedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 持仓多空方向
/// typedef char TThostFtdcPosiDirectionType
static PyObject *PyCThostFtdcRCAMSInvestorCombPositionFieldType_get_PosiDirection(PyObject *self, void *closure) {
    PyCThostFtdcRCAMSInvestorCombPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSInvestorCombPositionFieldData>(self);
    CThostFtdcRCAMSInvestorCombPositionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->PosiDirection), 1);
}

static int PyCThostFtdcRCAMSInvestorCombPositionFieldType_set_PosiDirection(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "PosiDirection Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRCAMSInvestorCombPositionField::PosiDirection)) {
        PyErr_SetString(PyExc_ValueError, "PosiDirection must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRCAMSInvestorCombPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSInvestorCombPositionFieldData>(self);
    CThostFtdcRCAMSInvestorCombPositionField *data = &(extra->data);
    data->PosiDirection = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 组合合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcRCAMSInvestorCombPositionFieldType_get_CombInstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcRCAMSInvestorCombPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSInvestorCombPositionFieldData>(self);
    CThostFtdcRCAMSInvestorCombPositionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CombInstrumentID, (Py_ssize_t)sizeof(data->CombInstrumentID));
    return PyBytes_FromString(data->CombInstrumentID);
}

static int PyCThostFtdcRCAMSInvestorCombPositionFieldType_set_CombInstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CombInstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRCAMSInvestorCombPositionField::CombInstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "CombInstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRCAMSInvestorCombPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSInvestorCombPositionFieldData>(self);
    CThostFtdcRCAMSInvestorCombPositionField *data = &(extra->data);
    // memset(data->CombInstrumentID, 0, sizeof(data->CombInstrumentID));
    // memcpy(data->CombInstrumentID, buf, len);
    strncpy(data->CombInstrumentID, buf, sizeof(data->CombInstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所组合合约代码
/// typedef char TThostFtdcExchangeInstIDType[81]
static PyObject *PyCThostFtdcRCAMSInvestorCombPositionFieldType_get_ExchangeInstID(PyObject *self, void *closure) {
    PyCThostFtdcRCAMSInvestorCombPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSInvestorCombPositionFieldData>(self);
    CThostFtdcRCAMSInvestorCombPositionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeInstID, (Py_ssize_t)sizeof(data->ExchangeInstID));
    return PyBytes_FromString(data->ExchangeInstID);
}

static int PyCThostFtdcRCAMSInvestorCombPositionFieldType_set_ExchangeInstID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRCAMSInvestorCombPositionField::ExchangeInstID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRCAMSInvestorCombPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSInvestorCombPositionFieldData>(self);
    CThostFtdcRCAMSInvestorCombPositionField *data = &(extra->data);
    // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
    // memcpy(data->ExchangeInstID, buf, len);
    strncpy(data->ExchangeInstID, buf, sizeof(data->ExchangeInstID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcRCAMSInvestorCombPositionFieldType_members[] = {
    /// 单腿编号
    /// typedef int TThostFtdcLegIDType
    {
        .name = "LegID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRCAMSInvestorCombPositionFieldData, data.LegID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("单腿编号")
    },
    /// 持仓量
    /// typedef int TThostFtdcVolumeType
    {
        .name = "TotalAmt",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRCAMSInvestorCombPositionFieldData, data.TotalAmt),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("持仓量")
    },
    /// 交易所保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "ExchMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRCAMSInvestorCombPositionFieldData, data.ExchMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易所保证金")
    },
    /// 投资者保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "Margin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRCAMSInvestorCombPositionFieldData, data.Margin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("投资者保证金")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcRCAMSInvestorCombPositionFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcRCAMSInvestorCombPositionFieldType_get_ExchangeID,
    .set = PyCThostFtdcRCAMSInvestorCombPositionFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcRCAMSInvestorCombPositionFieldType_get_BrokerID,
    .set = PyCThostFtdcRCAMSInvestorCombPositionFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcRCAMSInvestorCombPositionFieldType_get_InvestorID,
    .set = PyCThostFtdcRCAMSInvestorCombPositionFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcRCAMSInvestorCombPositionFieldType_get_InstrumentID,
    .set = PyCThostFtdcRCAMSInvestorCombPositionFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 投套标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "HedgeFlag",
    .get = PyCThostFtdcRCAMSInvestorCombPositionFieldType_get_HedgeFlag,
    .set = PyCThostFtdcRCAMSInvestorCombPositionFieldType_set_HedgeFlag,
    .doc = PyDoc_STR("投套标志"),
    },
    /// 持仓多空方向
    /// typedef char TThostFtdcPosiDirectionType
    {
    .name = "PosiDirection",
    .get = PyCThostFtdcRCAMSInvestorCombPositionFieldType_get_PosiDirection,
    .set = PyCThostFtdcRCAMSInvestorCombPositionFieldType_set_PosiDirection,
    .doc = PyDoc_STR("持仓多空方向"),
    },
    /// 组合合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "CombInstrumentID",
    .get = PyCThostFtdcRCAMSInvestorCombPositionFieldType_get_CombInstrumentID,
    .set = PyCThostFtdcRCAMSInvestorCombPositionFieldType_set_CombInstrumentID,
    .doc = PyDoc_STR("组合合约代码"),
    },
    /// 交易所组合合约代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    {
    .name = "ExchangeInstID",
    .get = PyCThostFtdcRCAMSInvestorCombPositionFieldType_get_ExchangeInstID,
    .set = PyCThostFtdcRCAMSInvestorCombPositionFieldType_set_ExchangeInstID,
    .doc = PyDoc_STR("交易所组合合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcRCAMSInvestorCombPositionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcRCAMSInvestorCombPositionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("RCAMS策略组合持仓")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcRCAMSInvestorCombPositionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcRCAMSInvestorCombPositionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcRCAMSInvestorCombPositionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcRCAMSInvestorCombPositionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcRCAMSInvestorCombPositionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcRCAMSInvestorCombPositionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("RCAMS策略组合持仓")},
    {Py_tp_members, PyCThostFtdcRCAMSInvestorCombPositionFieldType_members},
    {Py_tp_getset, PyCThostFtdcRCAMSInvestorCombPositionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcRCAMSInvestorCombPositionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcRCAMSInvestorCombPositionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcRCAMSInvestorCombPositionFieldType_spec = {
    .name = "PyCTP.CThostFtdcRCAMSInvestorCombPositionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcRCAMSInvestorCombPositionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcRCAMSInvestorCombPositionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcRCAMSInvestorCombPositionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcRCAMSInvestorCombPositionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcRCAMSInvestorCombPositionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcRCAMSInvestorCombPositionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcRCAMSInvestorCombPositionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcRCAMSInvestorCombPositionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcRCAMSInvestorCombPositionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRCAMSInvestorCombPositionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}