
#include "PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField.h"

///风险结算追平RCAMS策略组合规则明细

static int PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "ExchangeID", "ProdGroup", "RuleId", "Priority", "HedgeFlag", "CombMargin", "ExchangeInstID", "LegID", "LegInstrumentID", "Direction", "LegMultiple", "ActionDirection", "SyncDeltaSequenceNo", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcSyncDeltaRCAMSCombRuleDtlField_TradingDay = NULL;
    Py_ssize_t CThostFtdcSyncDeltaRCAMSCombRuleDtlField_TradingDay_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcSyncDeltaRCAMSCombRuleDtlField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaRCAMSCombRuleDtlField_ExchangeID_length = 0;

    /// 策略产品
    /// typedef char TThostFtdcProductIDType[41]
    char *CThostFtdcSyncDeltaRCAMSCombRuleDtlField_ProdGroup = NULL;
    Py_ssize_t CThostFtdcSyncDeltaRCAMSCombRuleDtlField_ProdGroup_length = 0;

    /// 策略id
    /// typedef char TThostFtdcRuleIdType[51]
    char *CThostFtdcSyncDeltaRCAMSCombRuleDtlField_RuleId = NULL;
    Py_ssize_t CThostFtdcSyncDeltaRCAMSCombRuleDtlField_RuleId_length = 0;

    /// 优先级
    /// typedef int TThostFtdcRCAMSPriorityType
    int CThostFtdcSyncDeltaRCAMSCombRuleDtlField_Priority = 0;

    /// 投套标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcSyncDeltaRCAMSCombRuleDtlField_HedgeFlag = 0;

    /// 组合保证金标准
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaRCAMSCombRuleDtlField_CombMargin = 0.0;

    /// 交易所组合合约代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    char *CThostFtdcSyncDeltaRCAMSCombRuleDtlField_ExchangeInstID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaRCAMSCombRuleDtlField_ExchangeInstID_length = 0;

    /// 单腿编号
    /// typedef int TThostFtdcLegIDType
    int CThostFtdcSyncDeltaRCAMSCombRuleDtlField_LegID = 0;

    /// 单腿合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSyncDeltaRCAMSCombRuleDtlField_LegInstrumentID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaRCAMSCombRuleDtlField_LegInstrumentID_length = 0;

    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    char CThostFtdcSyncDeltaRCAMSCombRuleDtlField_Direction = 0;

    /// 单腿乘数
    /// typedef int TThostFtdcLegMultipleType
    int CThostFtdcSyncDeltaRCAMSCombRuleDtlField_LegMultiple = 0;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    char CThostFtdcSyncDeltaRCAMSCombRuleDtlField_ActionDirection = 0;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcSyncDeltaRCAMSCombRuleDtlField_SyncDeltaSequenceNo = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#icdy#iy#cici", (char **)kwlist
        , &CThostFtdcSyncDeltaRCAMSCombRuleDtlField_TradingDay, &CThostFtdcSyncDeltaRCAMSCombRuleDtlField_TradingDay_length
        , &CThostFtdcSyncDeltaRCAMSCombRuleDtlField_ExchangeID, &CThostFtdcSyncDeltaRCAMSCombRuleDtlField_ExchangeID_length
        , &CThostFtdcSyncDeltaRCAMSCombRuleDtlField_ProdGroup, &CThostFtdcSyncDeltaRCAMSCombRuleDtlField_ProdGroup_length
        , &CThostFtdcSyncDeltaRCAMSCombRuleDtlField_RuleId, &CThostFtdcSyncDeltaRCAMSCombRuleDtlField_RuleId_length
        , &CThostFtdcSyncDeltaRCAMSCombRuleDtlField_Priority
        , &CThostFtdcSyncDeltaRCAMSCombRuleDtlField_HedgeFlag
        , &CThostFtdcSyncDeltaRCAMSCombRuleDtlField_CombMargin
        , &CThostFtdcSyncDeltaRCAMSCombRuleDtlField_ExchangeInstID, &CThostFtdcSyncDeltaRCAMSCombRuleDtlField_ExchangeInstID_length
        , &CThostFtdcSyncDeltaRCAMSCombRuleDtlField_LegID
        , &CThostFtdcSyncDeltaRCAMSCombRuleDtlField_LegInstrumentID, &CThostFtdcSyncDeltaRCAMSCombRuleDtlField_LegInstrumentID_length
        , &CThostFtdcSyncDeltaRCAMSCombRuleDtlField_Direction
        , &CThostFtdcSyncDeltaRCAMSCombRuleDtlField_LegMultiple
        , &CThostFtdcSyncDeltaRCAMSCombRuleDtlField_ActionDirection
        , &CThostFtdcSyncDeltaRCAMSCombRuleDtlField_SyncDeltaSequenceNo
    )) {
        return -1;
    }

    PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData>(self);
    CThostFtdcSyncDeltaRCAMSCombRuleDtlField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcSyncDeltaRCAMSCombRuleDtlField_TradingDay != NULL ) {
        if(CThostFtdcSyncDeltaRCAMSCombRuleDtlField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaRCAMSCombRuleDtlField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcSyncDeltaRCAMSCombRuleDtlField_TradingDay, CThostFtdcSyncDeltaRCAMSCombRuleDtlField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcSyncDeltaRCAMSCombRuleDtlField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcSyncDeltaRCAMSCombRuleDtlField_TradingDay = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcSyncDeltaRCAMSCombRuleDtlField_ExchangeID != NULL ) {
        if(CThostFtdcSyncDeltaRCAMSCombRuleDtlField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaRCAMSCombRuleDtlField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcSyncDeltaRCAMSCombRuleDtlField_ExchangeID, CThostFtdcSyncDeltaRCAMSCombRuleDtlField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcSyncDeltaRCAMSCombRuleDtlField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcSyncDeltaRCAMSCombRuleDtlField_ExchangeID = NULL;
    }

    /// 策略产品
    /// typedef char TThostFtdcProductIDType[41]
    if( CThostFtdcSyncDeltaRCAMSCombRuleDtlField_ProdGroup != NULL ) {
        if(CThostFtdcSyncDeltaRCAMSCombRuleDtlField_ProdGroup_length >= (Py_ssize_t)sizeof(data->ProdGroup)) {
            PyErr_Format(PyExc_ValueError, "ProdGroup too long: length=%zd (max allowed is 40)", CThostFtdcSyncDeltaRCAMSCombRuleDtlField_ProdGroup_length);
            return -1;
        }
        // memset(data->ProdGroup, 0, sizeof(data->ProdGroup));
        // memcpy(data->ProdGroup, CThostFtdcSyncDeltaRCAMSCombRuleDtlField_ProdGroup, CThostFtdcSyncDeltaRCAMSCombRuleDtlField_ProdGroup_length);
        strncpy(data->ProdGroup, CThostFtdcSyncDeltaRCAMSCombRuleDtlField_ProdGroup, sizeof(data->ProdGroup));
        CThostFtdcSyncDeltaRCAMSCombRuleDtlField_ProdGroup = NULL;
    }

    /// 策略id
    /// typedef char TThostFtdcRuleIdType[51]
    if( CThostFtdcSyncDeltaRCAMSCombRuleDtlField_RuleId != NULL ) {
        if(CThostFtdcSyncDeltaRCAMSCombRuleDtlField_RuleId_length >= (Py_ssize_t)sizeof(data->RuleId)) {
            PyErr_Format(PyExc_ValueError, "RuleId too long: length=%zd (max allowed is 50)", CThostFtdcSyncDeltaRCAMSCombRuleDtlField_RuleId_length);
            return -1;
        }
        // memset(data->RuleId, 0, sizeof(data->RuleId));
        // memcpy(data->RuleId, CThostFtdcSyncDeltaRCAMSCombRuleDtlField_RuleId, CThostFtdcSyncDeltaRCAMSCombRuleDtlField_RuleId_length);
        strncpy(data->RuleId, CThostFtdcSyncDeltaRCAMSCombRuleDtlField_RuleId, sizeof(data->RuleId));
        CThostFtdcSyncDeltaRCAMSCombRuleDtlField_RuleId = NULL;
    }

    /// 优先级
    /// typedef int TThostFtdcRCAMSPriorityType
    data->Priority = CThostFtdcSyncDeltaRCAMSCombRuleDtlField_Priority;

    /// 投套标志
    /// typedef char TThostFtdcHedgeFlagType
    data->HedgeFlag = CThostFtdcSyncDeltaRCAMSCombRuleDtlField_HedgeFlag;

    /// 组合保证金标准
    /// typedef double TThostFtdcMoneyType
    data->CombMargin = CThostFtdcSyncDeltaRCAMSCombRuleDtlField_CombMargin;

    /// 交易所组合合约代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    if( CThostFtdcSyncDeltaRCAMSCombRuleDtlField_ExchangeInstID != NULL ) {
        if(CThostFtdcSyncDeltaRCAMSCombRuleDtlField_ExchangeInstID_length >= (Py_ssize_t)sizeof(data->ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is 80)", CThostFtdcSyncDeltaRCAMSCombRuleDtlField_ExchangeInstID_length);
            return -1;
        }
        // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
        // memcpy(data->ExchangeInstID, CThostFtdcSyncDeltaRCAMSCombRuleDtlField_ExchangeInstID, CThostFtdcSyncDeltaRCAMSCombRuleDtlField_ExchangeInstID_length);
        strncpy(data->ExchangeInstID, CThostFtdcSyncDeltaRCAMSCombRuleDtlField_ExchangeInstID, sizeof(data->ExchangeInstID));
        CThostFtdcSyncDeltaRCAMSCombRuleDtlField_ExchangeInstID = NULL;
    }

    /// 单腿编号
    /// typedef int TThostFtdcLegIDType
    data->LegID = CThostFtdcSyncDeltaRCAMSCombRuleDtlField_LegID;

    /// 单腿合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSyncDeltaRCAMSCombRuleDtlField_LegInstrumentID != NULL ) {
        if(CThostFtdcSyncDeltaRCAMSCombRuleDtlField_LegInstrumentID_length >= (Py_ssize_t)sizeof(data->LegInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "LegInstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcSyncDeltaRCAMSCombRuleDtlField_LegInstrumentID_length);
            return -1;
        }
        // memset(data->LegInstrumentID, 0, sizeof(data->LegInstrumentID));
        // memcpy(data->LegInstrumentID, CThostFtdcSyncDeltaRCAMSCombRuleDtlField_LegInstrumentID, CThostFtdcSyncDeltaRCAMSCombRuleDtlField_LegInstrumentID_length);
        strncpy(data->LegInstrumentID, CThostFtdcSyncDeltaRCAMSCombRuleDtlField_LegInstrumentID, sizeof(data->LegInstrumentID));
        CThostFtdcSyncDeltaRCAMSCombRuleDtlField_LegInstrumentID = NULL;
    }

    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    data->Direction = CThostFtdcSyncDeltaRCAMSCombRuleDtlField_Direction;

    /// 单腿乘数
    /// typedef int TThostFtdcLegMultipleType
    data->LegMultiple = CThostFtdcSyncDeltaRCAMSCombRuleDtlField_LegMultiple;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    data->ActionDirection = CThostFtdcSyncDeltaRCAMSCombRuleDtlField_ActionDirection;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    data->SyncDeltaSequenceNo = CThostFtdcSyncDeltaRCAMSCombRuleDtlField_SyncDeltaSequenceNo;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData>(self);
    CThostFtdcSyncDeltaRCAMSCombRuleDtlField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i,s:c,s:d,s:y,s:i,s:y,s:c,s:i,s:c,s:i}"
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ProdGroup", data->ProdGroup//, (Py_ssize_t)sizeof(data->ProdGroup)
        , "RuleId", data->RuleId//, (Py_ssize_t)sizeof(data->RuleId)
        , "Priority", data->Priority
        , "HedgeFlag", data->HedgeFlag
        , "CombMargin", data->CombMargin
        , "ExchangeInstID", data->ExchangeInstID//, (Py_ssize_t)sizeof(data->ExchangeInstID)
        , "LegID", data->LegID
        , "LegInstrumentID", data->LegInstrumentID//, (Py_ssize_t)sizeof(data->LegInstrumentID)
        , "Direction", data->Direction
        , "LegMultiple", data->LegMultiple
        , "ActionDirection", data->ActionDirection
        , "SyncDeltaSequenceNo", data->SyncDeltaSequenceNo
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaRCAMSCombRuleDtlField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaRCAMSCombRuleDtlField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData>(self);
    CThostFtdcSyncDeltaRCAMSCombRuleDtlField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRCAMSCombRuleDtlField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData>(self);
    CThostFtdcSyncDeltaRCAMSCombRuleDtlField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData>(self);
    CThostFtdcSyncDeltaRCAMSCombRuleDtlField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRCAMSCombRuleDtlField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData>(self);
    CThostFtdcSyncDeltaRCAMSCombRuleDtlField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 策略产品
/// typedef char TThostFtdcProductIDType[41]
static PyObject *PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_get_ProdGroup(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData>(self);
    CThostFtdcSyncDeltaRCAMSCombRuleDtlField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProdGroup, (Py_ssize_t)sizeof(data->ProdGroup));
    return PyBytes_FromString(data->ProdGroup);
}

static int PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_set_ProdGroup(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProdGroup Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRCAMSCombRuleDtlField::ProdGroup)) {
        PyErr_SetString(PyExc_ValueError, "ProdGroup must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData>(self);
    CThostFtdcSyncDeltaRCAMSCombRuleDtlField *data = &(extra->data);
    // memset(data->ProdGroup, 0, sizeof(data->ProdGroup));
    // memcpy(data->ProdGroup, buf, len);
    strncpy(data->ProdGroup, buf, sizeof(data->ProdGroup));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 策略id
/// typedef char TThostFtdcRuleIdType[51]
static PyObject *PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_get_RuleId(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData>(self);
    CThostFtdcSyncDeltaRCAMSCombRuleDtlField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->RuleId, (Py_ssize_t)sizeof(data->RuleId));
    return PyBytes_FromString(data->RuleId);
}

static int PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_set_RuleId(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "RuleId Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRCAMSCombRuleDtlField::RuleId)) {
        PyErr_SetString(PyExc_ValueError, "RuleId must be less than 50 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData>(self);
    CThostFtdcSyncDeltaRCAMSCombRuleDtlField *data = &(extra->data);
    // memset(data->RuleId, 0, sizeof(data->RuleId));
    // memcpy(data->RuleId, buf, len);
    strncpy(data->RuleId, buf, sizeof(data->RuleId));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投套标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_get_HedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData>(self);
    CThostFtdcSyncDeltaRCAMSCombRuleDtlField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->HedgeFlag), 1);
}

static int PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_set_HedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRCAMSCombRuleDtlField::HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData>(self);
    CThostFtdcSyncDeltaRCAMSCombRuleDtlField *data = &(extra->data);
    data->HedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所组合合约代码
/// typedef char TThostFtdcExchangeInstIDType[81]
static PyObject *PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_get_ExchangeInstID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData>(self);
    CThostFtdcSyncDeltaRCAMSCombRuleDtlField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeInstID, (Py_ssize_t)sizeof(data->ExchangeInstID));
    return PyBytes_FromString(data->ExchangeInstID);
}

static int PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_set_ExchangeInstID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRCAMSCombRuleDtlField::ExchangeInstID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData>(self);
    CThostFtdcSyncDeltaRCAMSCombRuleDtlField *data = &(extra->data);
    // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
    // memcpy(data->ExchangeInstID, buf, len);
    strncpy(data->ExchangeInstID, buf, sizeof(data->ExchangeInstID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 单腿合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_get_LegInstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData>(self);
    CThostFtdcSyncDeltaRCAMSCombRuleDtlField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->LegInstrumentID, (Py_ssize_t)sizeof(data->LegInstrumentID));
    return PyBytes_FromString(data->LegInstrumentID);
}

static int PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_set_LegInstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LegInstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRCAMSCombRuleDtlField::LegInstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "LegInstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData>(self);
    CThostFtdcSyncDeltaRCAMSCombRuleDtlField *data = &(extra->data);
    // memset(data->LegInstrumentID, 0, sizeof(data->LegInstrumentID));
    // memcpy(data->LegInstrumentID, buf, len);
    strncpy(data->LegInstrumentID, buf, sizeof(data->LegInstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 买卖方向
/// typedef char TThostFtdcDirectionType
static PyObject *PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_get_Direction(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData>(self);
    CThostFtdcSyncDeltaRCAMSCombRuleDtlField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->Direction), 1);
}

static int PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_set_Direction(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Direction Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRCAMSCombRuleDtlField::Direction)) {
        PyErr_SetString(PyExc_ValueError, "Direction must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData>(self);
    CThostFtdcSyncDeltaRCAMSCombRuleDtlField *data = &(extra->data);
    data->Direction = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionDirectionType
static PyObject *PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_get_ActionDirection(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData>(self);
    CThostFtdcSyncDeltaRCAMSCombRuleDtlField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionDirection), 1);
}

static int PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_set_ActionDirection(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDirection Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRCAMSCombRuleDtlField::ActionDirection)) {
        PyErr_SetString(PyExc_ValueError, "ActionDirection must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData>(self);
    CThostFtdcSyncDeltaRCAMSCombRuleDtlField *data = &(extra->data);
    data->ActionDirection = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_members[] = {
    /// 优先级
    /// typedef int TThostFtdcRCAMSPriorityType
    {
        .name = "Priority",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData, data.Priority),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("优先级")
    },
    /// 组合保证金标准
    /// typedef double TThostFtdcMoneyType
    {
        .name = "CombMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData, data.CombMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("组合保证金标准")
    },
    /// 单腿编号
    /// typedef int TThostFtdcLegIDType
    {
        .name = "LegID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData, data.LegID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("单腿编号")
    },
    /// 单腿乘数
    /// typedef int TThostFtdcLegMultipleType
    {
        .name = "LegMultiple",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData, data.LegMultiple),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("单腿乘数")
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
        .offset = offsetof(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData, data.SyncDeltaSequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("追平序号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_get_TradingDay,
    .set = PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_get_ExchangeID,
    .set = PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 策略产品
    /// typedef char TThostFtdcProductIDType[41]
    {
    .name = "ProdGroup",
    .get = PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_get_ProdGroup,
    .set = PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_set_ProdGroup,
    .doc = PyDoc_STR("策略产品"),
    },
    /// 策略id
    /// typedef char TThostFtdcRuleIdType[51]
    {
    .name = "RuleId",
    .get = PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_get_RuleId,
    .set = PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_set_RuleId,
    .doc = PyDoc_STR("策略id"),
    },
    /// 投套标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "HedgeFlag",
    .get = PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_get_HedgeFlag,
    .set = PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_set_HedgeFlag,
    .doc = PyDoc_STR("投套标志"),
    },
    /// 交易所组合合约代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    {
    .name = "ExchangeInstID",
    .get = PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_get_ExchangeInstID,
    .set = PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_set_ExchangeInstID,
    .doc = PyDoc_STR("交易所组合合约代码"),
    },
    /// 单腿合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "LegInstrumentID",
    .get = PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_get_LegInstrumentID,
    .set = PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_set_LegInstrumentID,
    .doc = PyDoc_STR("单腿合约代码"),
    },
    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    {
    .name = "Direction",
    .get = PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_get_Direction,
    .set = PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_set_Direction,
    .doc = PyDoc_STR("买卖方向"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    {
    .name = "ActionDirection",
    .get = PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_get_ActionDirection,
    .set = PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_set_ActionDirection,
    .doc = PyDoc_STR("操作标志"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncDeltaRCAMSCombRuleDtlField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("风险结算追平RCAMS策略组合规则明细")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("风险结算追平RCAMS策略组合规则明细")},
    {Py_tp_members, PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncDeltaRCAMSCombRuleDtlField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaRCAMSCombRuleDtlField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaRCAMSCombRuleDtlField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}