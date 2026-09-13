
#include "PyCThostFtdcSyncDeltaRCAMSInvstCombPosField.h"

///风险结算追平RCAMS策略组合持仓

static int PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "BrokerID", "InvestorID", "InstrumentID", "HedgeFlag", "PosiDirection", "CombInstrumentID", "LegID", "ExchangeInstID", "TotalAmt", "ExchMargin", "Margin", "ActionDirection", "SyncDeltaSequenceNo", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcSyncDeltaRCAMSInvstCombPosField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaRCAMSInvstCombPosField_ExchangeID_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcSyncDeltaRCAMSInvstCombPosField_BrokerID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaRCAMSInvstCombPosField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcSyncDeltaRCAMSInvstCombPosField_InvestorID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaRCAMSInvstCombPosField_InvestorID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSyncDeltaRCAMSInvstCombPosField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaRCAMSInvstCombPosField_InstrumentID_length = 0;

    /// 投套标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcSyncDeltaRCAMSInvstCombPosField_HedgeFlag = 0;

    /// 持仓多空方向
    /// typedef char TThostFtdcPosiDirectionType
    char CThostFtdcSyncDeltaRCAMSInvstCombPosField_PosiDirection = 0;

    /// 组合合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSyncDeltaRCAMSInvstCombPosField_CombInstrumentID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaRCAMSInvstCombPosField_CombInstrumentID_length = 0;

    /// 单腿编号
    /// typedef int TThostFtdcLegIDType
    int CThostFtdcSyncDeltaRCAMSInvstCombPosField_LegID = 0;

    /// 交易所组合合约代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    char *CThostFtdcSyncDeltaRCAMSInvstCombPosField_ExchangeInstID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaRCAMSInvstCombPosField_ExchangeInstID_length = 0;

    /// 持仓量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcSyncDeltaRCAMSInvstCombPosField_TotalAmt = 0;

    /// 交易所保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaRCAMSInvstCombPosField_ExchMargin = 0.0;

    /// 投资者保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaRCAMSInvstCombPosField_Margin = 0.0;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    char CThostFtdcSyncDeltaRCAMSInvstCombPosField_ActionDirection = 0;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcSyncDeltaRCAMSInvstCombPosField_SyncDeltaSequenceNo = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#ccy#iy#iddci", (char **)kwlist
        , &CThostFtdcSyncDeltaRCAMSInvstCombPosField_ExchangeID, &CThostFtdcSyncDeltaRCAMSInvstCombPosField_ExchangeID_length
        , &CThostFtdcSyncDeltaRCAMSInvstCombPosField_BrokerID, &CThostFtdcSyncDeltaRCAMSInvstCombPosField_BrokerID_length
        , &CThostFtdcSyncDeltaRCAMSInvstCombPosField_InvestorID, &CThostFtdcSyncDeltaRCAMSInvstCombPosField_InvestorID_length
        , &CThostFtdcSyncDeltaRCAMSInvstCombPosField_InstrumentID, &CThostFtdcSyncDeltaRCAMSInvstCombPosField_InstrumentID_length
        , &CThostFtdcSyncDeltaRCAMSInvstCombPosField_HedgeFlag
        , &CThostFtdcSyncDeltaRCAMSInvstCombPosField_PosiDirection
        , &CThostFtdcSyncDeltaRCAMSInvstCombPosField_CombInstrumentID, &CThostFtdcSyncDeltaRCAMSInvstCombPosField_CombInstrumentID_length
        , &CThostFtdcSyncDeltaRCAMSInvstCombPosField_LegID
        , &CThostFtdcSyncDeltaRCAMSInvstCombPosField_ExchangeInstID, &CThostFtdcSyncDeltaRCAMSInvstCombPosField_ExchangeInstID_length
        , &CThostFtdcSyncDeltaRCAMSInvstCombPosField_TotalAmt
        , &CThostFtdcSyncDeltaRCAMSInvstCombPosField_ExchMargin
        , &CThostFtdcSyncDeltaRCAMSInvstCombPosField_Margin
        , &CThostFtdcSyncDeltaRCAMSInvstCombPosField_ActionDirection
        , &CThostFtdcSyncDeltaRCAMSInvstCombPosField_SyncDeltaSequenceNo
    )) {
        return -1;
    }

    PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData>(self);
    CThostFtdcSyncDeltaRCAMSInvstCombPosField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcSyncDeltaRCAMSInvstCombPosField_ExchangeID != NULL ) {
        if(CThostFtdcSyncDeltaRCAMSInvstCombPosField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaRCAMSInvstCombPosField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcSyncDeltaRCAMSInvstCombPosField_ExchangeID, CThostFtdcSyncDeltaRCAMSInvstCombPosField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcSyncDeltaRCAMSInvstCombPosField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcSyncDeltaRCAMSInvstCombPosField_ExchangeID = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcSyncDeltaRCAMSInvstCombPosField_BrokerID != NULL ) {
        if(CThostFtdcSyncDeltaRCAMSInvstCombPosField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcSyncDeltaRCAMSInvstCombPosField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcSyncDeltaRCAMSInvstCombPosField_BrokerID, CThostFtdcSyncDeltaRCAMSInvstCombPosField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcSyncDeltaRCAMSInvstCombPosField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcSyncDeltaRCAMSInvstCombPosField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcSyncDeltaRCAMSInvstCombPosField_InvestorID != NULL ) {
        if(CThostFtdcSyncDeltaRCAMSInvstCombPosField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcSyncDeltaRCAMSInvstCombPosField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcSyncDeltaRCAMSInvstCombPosField_InvestorID, CThostFtdcSyncDeltaRCAMSInvstCombPosField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcSyncDeltaRCAMSInvstCombPosField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcSyncDeltaRCAMSInvstCombPosField_InvestorID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSyncDeltaRCAMSInvstCombPosField_InstrumentID != NULL ) {
        if(CThostFtdcSyncDeltaRCAMSInvstCombPosField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcSyncDeltaRCAMSInvstCombPosField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcSyncDeltaRCAMSInvstCombPosField_InstrumentID, CThostFtdcSyncDeltaRCAMSInvstCombPosField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcSyncDeltaRCAMSInvstCombPosField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcSyncDeltaRCAMSInvstCombPosField_InstrumentID = NULL;
    }

    /// 投套标志
    /// typedef char TThostFtdcHedgeFlagType
    data->HedgeFlag = CThostFtdcSyncDeltaRCAMSInvstCombPosField_HedgeFlag;

    /// 持仓多空方向
    /// typedef char TThostFtdcPosiDirectionType
    data->PosiDirection = CThostFtdcSyncDeltaRCAMSInvstCombPosField_PosiDirection;

    /// 组合合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSyncDeltaRCAMSInvstCombPosField_CombInstrumentID != NULL ) {
        if(CThostFtdcSyncDeltaRCAMSInvstCombPosField_CombInstrumentID_length >= (Py_ssize_t)sizeof(data->CombInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "CombInstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcSyncDeltaRCAMSInvstCombPosField_CombInstrumentID_length);
            return -1;
        }
        // memset(data->CombInstrumentID, 0, sizeof(data->CombInstrumentID));
        // memcpy(data->CombInstrumentID, CThostFtdcSyncDeltaRCAMSInvstCombPosField_CombInstrumentID, CThostFtdcSyncDeltaRCAMSInvstCombPosField_CombInstrumentID_length);
        strncpy(data->CombInstrumentID, CThostFtdcSyncDeltaRCAMSInvstCombPosField_CombInstrumentID, sizeof(data->CombInstrumentID));
        CThostFtdcSyncDeltaRCAMSInvstCombPosField_CombInstrumentID = NULL;
    }

    /// 单腿编号
    /// typedef int TThostFtdcLegIDType
    data->LegID = CThostFtdcSyncDeltaRCAMSInvstCombPosField_LegID;

    /// 交易所组合合约代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    if( CThostFtdcSyncDeltaRCAMSInvstCombPosField_ExchangeInstID != NULL ) {
        if(CThostFtdcSyncDeltaRCAMSInvstCombPosField_ExchangeInstID_length >= (Py_ssize_t)sizeof(data->ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is 80)", CThostFtdcSyncDeltaRCAMSInvstCombPosField_ExchangeInstID_length);
            return -1;
        }
        // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
        // memcpy(data->ExchangeInstID, CThostFtdcSyncDeltaRCAMSInvstCombPosField_ExchangeInstID, CThostFtdcSyncDeltaRCAMSInvstCombPosField_ExchangeInstID_length);
        strncpy(data->ExchangeInstID, CThostFtdcSyncDeltaRCAMSInvstCombPosField_ExchangeInstID, sizeof(data->ExchangeInstID));
        CThostFtdcSyncDeltaRCAMSInvstCombPosField_ExchangeInstID = NULL;
    }

    /// 持仓量
    /// typedef int TThostFtdcVolumeType
    data->TotalAmt = CThostFtdcSyncDeltaRCAMSInvstCombPosField_TotalAmt;

    /// 交易所保证金
    /// typedef double TThostFtdcMoneyType
    data->ExchMargin = CThostFtdcSyncDeltaRCAMSInvstCombPosField_ExchMargin;

    /// 投资者保证金
    /// typedef double TThostFtdcMoneyType
    data->Margin = CThostFtdcSyncDeltaRCAMSInvstCombPosField_Margin;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    data->ActionDirection = CThostFtdcSyncDeltaRCAMSInvstCombPosField_ActionDirection;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    data->SyncDeltaSequenceNo = CThostFtdcSyncDeltaRCAMSInvstCombPosField_SyncDeltaSequenceNo;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData>(self);
    CThostFtdcSyncDeltaRCAMSInvstCombPosField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:c,s:c,s:y,s:i,s:y,s:i,s:d,s:d,s:c,s:i}"
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
        , "ActionDirection", data->ActionDirection
        , "SyncDeltaSequenceNo", data->SyncDeltaSequenceNo
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaRCAMSInvstCombPosField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaRCAMSInvstCombPosField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData>(self);
    CThostFtdcSyncDeltaRCAMSInvstCombPosField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRCAMSInvstCombPosField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData>(self);
    CThostFtdcSyncDeltaRCAMSInvstCombPosField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData>(self);
    CThostFtdcSyncDeltaRCAMSInvstCombPosField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRCAMSInvstCombPosField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData>(self);
    CThostFtdcSyncDeltaRCAMSInvstCombPosField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData>(self);
    CThostFtdcSyncDeltaRCAMSInvstCombPosField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRCAMSInvstCombPosField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData>(self);
    CThostFtdcSyncDeltaRCAMSInvstCombPosField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData>(self);
    CThostFtdcSyncDeltaRCAMSInvstCombPosField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRCAMSInvstCombPosField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData>(self);
    CThostFtdcSyncDeltaRCAMSInvstCombPosField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投套标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_get_HedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData>(self);
    CThostFtdcSyncDeltaRCAMSInvstCombPosField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->HedgeFlag), 1);
}

static int PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_set_HedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRCAMSInvstCombPosField::HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData>(self);
    CThostFtdcSyncDeltaRCAMSInvstCombPosField *data = &(extra->data);
    data->HedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 持仓多空方向
/// typedef char TThostFtdcPosiDirectionType
static PyObject *PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_get_PosiDirection(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData>(self);
    CThostFtdcSyncDeltaRCAMSInvstCombPosField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->PosiDirection), 1);
}

static int PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_set_PosiDirection(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "PosiDirection Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRCAMSInvstCombPosField::PosiDirection)) {
        PyErr_SetString(PyExc_ValueError, "PosiDirection must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData>(self);
    CThostFtdcSyncDeltaRCAMSInvstCombPosField *data = &(extra->data);
    data->PosiDirection = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 组合合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_get_CombInstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData>(self);
    CThostFtdcSyncDeltaRCAMSInvstCombPosField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CombInstrumentID, (Py_ssize_t)sizeof(data->CombInstrumentID));
    return PyBytes_FromString(data->CombInstrumentID);
}

static int PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_set_CombInstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CombInstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRCAMSInvstCombPosField::CombInstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "CombInstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData>(self);
    CThostFtdcSyncDeltaRCAMSInvstCombPosField *data = &(extra->data);
    // memset(data->CombInstrumentID, 0, sizeof(data->CombInstrumentID));
    // memcpy(data->CombInstrumentID, buf, len);
    strncpy(data->CombInstrumentID, buf, sizeof(data->CombInstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所组合合约代码
/// typedef char TThostFtdcExchangeInstIDType[81]
static PyObject *PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_get_ExchangeInstID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData>(self);
    CThostFtdcSyncDeltaRCAMSInvstCombPosField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeInstID, (Py_ssize_t)sizeof(data->ExchangeInstID));
    return PyBytes_FromString(data->ExchangeInstID);
}

static int PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_set_ExchangeInstID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRCAMSInvstCombPosField::ExchangeInstID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData>(self);
    CThostFtdcSyncDeltaRCAMSInvstCombPosField *data = &(extra->data);
    // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
    // memcpy(data->ExchangeInstID, buf, len);
    strncpy(data->ExchangeInstID, buf, sizeof(data->ExchangeInstID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionDirectionType
static PyObject *PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_get_ActionDirection(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData>(self);
    CThostFtdcSyncDeltaRCAMSInvstCombPosField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionDirection), 1);
}

static int PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_set_ActionDirection(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDirection Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRCAMSInvstCombPosField::ActionDirection)) {
        PyErr_SetString(PyExc_ValueError, "ActionDirection must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData>(self);
    CThostFtdcSyncDeltaRCAMSInvstCombPosField *data = &(extra->data);
    data->ActionDirection = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_members[] = {
    /// 单腿编号
    /// typedef int TThostFtdcLegIDType
    {
        .name = "LegID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData, data.LegID),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData, data.TotalAmt),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData, data.ExchMargin),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData, data.Margin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("投资者保证金")
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
        .offset = offsetof(PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData, data.SyncDeltaSequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("追平序号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_get_ExchangeID,
    .set = PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_get_BrokerID,
    .set = PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_get_InvestorID,
    .set = PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_get_InstrumentID,
    .set = PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 投套标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "HedgeFlag",
    .get = PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_get_HedgeFlag,
    .set = PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_set_HedgeFlag,
    .doc = PyDoc_STR("投套标志"),
    },
    /// 持仓多空方向
    /// typedef char TThostFtdcPosiDirectionType
    {
    .name = "PosiDirection",
    .get = PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_get_PosiDirection,
    .set = PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_set_PosiDirection,
    .doc = PyDoc_STR("持仓多空方向"),
    },
    /// 组合合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "CombInstrumentID",
    .get = PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_get_CombInstrumentID,
    .set = PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_set_CombInstrumentID,
    .doc = PyDoc_STR("组合合约代码"),
    },
    /// 交易所组合合约代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    {
    .name = "ExchangeInstID",
    .get = PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_get_ExchangeInstID,
    .set = PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_set_ExchangeInstID,
    .doc = PyDoc_STR("交易所组合合约代码"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    {
    .name = "ActionDirection",
    .get = PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_get_ActionDirection,
    .set = PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_set_ActionDirection,
    .doc = PyDoc_STR("操作标志"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncDeltaRCAMSInvstCombPosField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("风险结算追平RCAMS策略组合持仓")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("风险结算追平RCAMS策略组合持仓")},
    {Py_tp_members, PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncDeltaRCAMSInvstCombPosField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaRCAMSInvstCombPosField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaRCAMSInvstCombPosField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}