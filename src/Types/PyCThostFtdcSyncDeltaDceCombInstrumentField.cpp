
#include "PyCThostFtdcSyncDeltaDceCombInstrumentField.h"

///风险结算追平组合优先级

static int PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "CombInstrumentID", "ExchangeID", "ExchangeInstID", "TradeGroupID", "CombHedgeFlag", "CombinationType", "Direction", "ProductID", "Xparameter", "ActionDirection", "SyncDeltaSequenceNo", NULL };


    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSyncDeltaDceCombInstrumentField_CombInstrumentID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaDceCombInstrumentField_CombInstrumentID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcSyncDeltaDceCombInstrumentField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaDceCombInstrumentField_ExchangeID_length = 0;

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    char *CThostFtdcSyncDeltaDceCombInstrumentField_ExchangeInstID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaDceCombInstrumentField_ExchangeInstID_length = 0;

    /// 成交组号
    /// typedef int TThostFtdcTradeGroupIDType
    int CThostFtdcSyncDeltaDceCombInstrumentField_TradeGroupID = 0;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcSyncDeltaDceCombInstrumentField_CombHedgeFlag = 0;

    /// 组合类型
    /// typedef char TThostFtdcDceCombinationTypeType
    char CThostFtdcSyncDeltaDceCombInstrumentField_CombinationType = 0;

    /// 买卖
    /// typedef char TThostFtdcDirectionType
    char CThostFtdcSyncDeltaDceCombInstrumentField_Direction = 0;

    /// 产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSyncDeltaDceCombInstrumentField_ProductID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaDceCombInstrumentField_ProductID_length = 0;

    /// 期货/期权组合保证金比例
    /// typedef double TThostFtdcDiscountRatioType
    double CThostFtdcSyncDeltaDceCombInstrumentField_Xparameter = 0.0;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    char CThostFtdcSyncDeltaDceCombInstrumentField_ActionDirection = 0;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcSyncDeltaDceCombInstrumentField_SyncDeltaSequenceNo = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#icccy#dci", (char **)kwlist
        , &CThostFtdcSyncDeltaDceCombInstrumentField_CombInstrumentID, &CThostFtdcSyncDeltaDceCombInstrumentField_CombInstrumentID_length
        , &CThostFtdcSyncDeltaDceCombInstrumentField_ExchangeID, &CThostFtdcSyncDeltaDceCombInstrumentField_ExchangeID_length
        , &CThostFtdcSyncDeltaDceCombInstrumentField_ExchangeInstID, &CThostFtdcSyncDeltaDceCombInstrumentField_ExchangeInstID_length
        , &CThostFtdcSyncDeltaDceCombInstrumentField_TradeGroupID
        , &CThostFtdcSyncDeltaDceCombInstrumentField_CombHedgeFlag
        , &CThostFtdcSyncDeltaDceCombInstrumentField_CombinationType
        , &CThostFtdcSyncDeltaDceCombInstrumentField_Direction
        , &CThostFtdcSyncDeltaDceCombInstrumentField_ProductID, &CThostFtdcSyncDeltaDceCombInstrumentField_ProductID_length
        , &CThostFtdcSyncDeltaDceCombInstrumentField_Xparameter
        , &CThostFtdcSyncDeltaDceCombInstrumentField_ActionDirection
        , &CThostFtdcSyncDeltaDceCombInstrumentField_SyncDeltaSequenceNo
    )) {
        return -1;
    }

    PyCThostFtdcSyncDeltaDceCombInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaDceCombInstrumentFieldData>(self);
    CThostFtdcSyncDeltaDceCombInstrumentField *data = &(extra->data);


    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSyncDeltaDceCombInstrumentField_CombInstrumentID != NULL ) {
        if(CThostFtdcSyncDeltaDceCombInstrumentField_CombInstrumentID_length >= (Py_ssize_t)sizeof(data->CombInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "CombInstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcSyncDeltaDceCombInstrumentField_CombInstrumentID_length);
            return -1;
        }
        // memset(data->CombInstrumentID, 0, sizeof(data->CombInstrumentID));
        // memcpy(data->CombInstrumentID, CThostFtdcSyncDeltaDceCombInstrumentField_CombInstrumentID, CThostFtdcSyncDeltaDceCombInstrumentField_CombInstrumentID_length);
        strncpy(data->CombInstrumentID, CThostFtdcSyncDeltaDceCombInstrumentField_CombInstrumentID, sizeof(data->CombInstrumentID));
        CThostFtdcSyncDeltaDceCombInstrumentField_CombInstrumentID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcSyncDeltaDceCombInstrumentField_ExchangeID != NULL ) {
        if(CThostFtdcSyncDeltaDceCombInstrumentField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaDceCombInstrumentField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcSyncDeltaDceCombInstrumentField_ExchangeID, CThostFtdcSyncDeltaDceCombInstrumentField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcSyncDeltaDceCombInstrumentField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcSyncDeltaDceCombInstrumentField_ExchangeID = NULL;
    }

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    if( CThostFtdcSyncDeltaDceCombInstrumentField_ExchangeInstID != NULL ) {
        if(CThostFtdcSyncDeltaDceCombInstrumentField_ExchangeInstID_length >= (Py_ssize_t)sizeof(data->ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is 80)", CThostFtdcSyncDeltaDceCombInstrumentField_ExchangeInstID_length);
            return -1;
        }
        // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
        // memcpy(data->ExchangeInstID, CThostFtdcSyncDeltaDceCombInstrumentField_ExchangeInstID, CThostFtdcSyncDeltaDceCombInstrumentField_ExchangeInstID_length);
        strncpy(data->ExchangeInstID, CThostFtdcSyncDeltaDceCombInstrumentField_ExchangeInstID, sizeof(data->ExchangeInstID));
        CThostFtdcSyncDeltaDceCombInstrumentField_ExchangeInstID = NULL;
    }

    /// 成交组号
    /// typedef int TThostFtdcTradeGroupIDType
    data->TradeGroupID = CThostFtdcSyncDeltaDceCombInstrumentField_TradeGroupID;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    data->CombHedgeFlag = CThostFtdcSyncDeltaDceCombInstrumentField_CombHedgeFlag;

    /// 组合类型
    /// typedef char TThostFtdcDceCombinationTypeType
    data->CombinationType = CThostFtdcSyncDeltaDceCombInstrumentField_CombinationType;

    /// 买卖
    /// typedef char TThostFtdcDirectionType
    data->Direction = CThostFtdcSyncDeltaDceCombInstrumentField_Direction;

    /// 产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSyncDeltaDceCombInstrumentField_ProductID != NULL ) {
        if(CThostFtdcSyncDeltaDceCombInstrumentField_ProductID_length >= (Py_ssize_t)sizeof(data->ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is 80)", CThostFtdcSyncDeltaDceCombInstrumentField_ProductID_length);
            return -1;
        }
        // memset(data->ProductID, 0, sizeof(data->ProductID));
        // memcpy(data->ProductID, CThostFtdcSyncDeltaDceCombInstrumentField_ProductID, CThostFtdcSyncDeltaDceCombInstrumentField_ProductID_length);
        strncpy(data->ProductID, CThostFtdcSyncDeltaDceCombInstrumentField_ProductID, sizeof(data->ProductID));
        CThostFtdcSyncDeltaDceCombInstrumentField_ProductID = NULL;
    }

    /// 期货/期权组合保证金比例
    /// typedef double TThostFtdcDiscountRatioType
    data->Xparameter = CThostFtdcSyncDeltaDceCombInstrumentField_Xparameter;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    data->ActionDirection = CThostFtdcSyncDeltaDceCombInstrumentField_ActionDirection;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    data->SyncDeltaSequenceNo = CThostFtdcSyncDeltaDceCombInstrumentField_SyncDeltaSequenceNo;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncDeltaDceCombInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaDceCombInstrumentFieldData>(self);
    CThostFtdcSyncDeltaDceCombInstrumentField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:i,s:c,s:c,s:c,s:y,s:d,s:c,s:i}"
        , "CombInstrumentID", data->CombInstrumentID//, (Py_ssize_t)sizeof(data->CombInstrumentID)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ExchangeInstID", data->ExchangeInstID//, (Py_ssize_t)sizeof(data->ExchangeInstID)
        , "TradeGroupID", data->TradeGroupID
        , "CombHedgeFlag", data->CombHedgeFlag
        , "CombinationType", data->CombinationType
        , "Direction", data->Direction
        , "ProductID", data->ProductID//, (Py_ssize_t)sizeof(data->ProductID)
        , "Xparameter", data->Xparameter
        , "ActionDirection", data->ActionDirection
        , "SyncDeltaSequenceNo", data->SyncDeltaSequenceNo
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaDceCombInstrumentField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaDceCombInstrumentField repr");
        return NULL;
    }

    return repr;
}


/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_get_CombInstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaDceCombInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaDceCombInstrumentFieldData>(self);
    CThostFtdcSyncDeltaDceCombInstrumentField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CombInstrumentID, (Py_ssize_t)sizeof(data->CombInstrumentID));
    return PyBytes_FromString(data->CombInstrumentID);
}

static int PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_set_CombInstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CombInstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaDceCombInstrumentField::CombInstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "CombInstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaDceCombInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaDceCombInstrumentFieldData>(self);
    CThostFtdcSyncDeltaDceCombInstrumentField *data = &(extra->data);
    // memset(data->CombInstrumentID, 0, sizeof(data->CombInstrumentID));
    // memcpy(data->CombInstrumentID, buf, len);
    strncpy(data->CombInstrumentID, buf, sizeof(data->CombInstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaDceCombInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaDceCombInstrumentFieldData>(self);
    CThostFtdcSyncDeltaDceCombInstrumentField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaDceCombInstrumentField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaDceCombInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaDceCombInstrumentFieldData>(self);
    CThostFtdcSyncDeltaDceCombInstrumentField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约在交易所的代码
/// typedef char TThostFtdcExchangeInstIDType[81]
static PyObject *PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_get_ExchangeInstID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaDceCombInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaDceCombInstrumentFieldData>(self);
    CThostFtdcSyncDeltaDceCombInstrumentField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeInstID, (Py_ssize_t)sizeof(data->ExchangeInstID));
    return PyBytes_FromString(data->ExchangeInstID);
}

static int PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_set_ExchangeInstID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaDceCombInstrumentField::ExchangeInstID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaDceCombInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaDceCombInstrumentFieldData>(self);
    CThostFtdcSyncDeltaDceCombInstrumentField *data = &(extra->data);
    // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
    // memcpy(data->ExchangeInstID, buf, len);
    strncpy(data->ExchangeInstID, buf, sizeof(data->ExchangeInstID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投机套保标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_get_CombHedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaDceCombInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaDceCombInstrumentFieldData>(self);
    CThostFtdcSyncDeltaDceCombInstrumentField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->CombHedgeFlag), 1);
}

static int PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_set_CombHedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CombHedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaDceCombInstrumentField::CombHedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "CombHedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaDceCombInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaDceCombInstrumentFieldData>(self);
    CThostFtdcSyncDeltaDceCombInstrumentField *data = &(extra->data);
    data->CombHedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 组合类型
/// typedef char TThostFtdcDceCombinationTypeType
static PyObject *PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_get_CombinationType(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaDceCombInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaDceCombInstrumentFieldData>(self);
    CThostFtdcSyncDeltaDceCombInstrumentField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->CombinationType), 1);
}

static int PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_set_CombinationType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CombinationType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaDceCombInstrumentField::CombinationType)) {
        PyErr_SetString(PyExc_ValueError, "CombinationType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaDceCombInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaDceCombInstrumentFieldData>(self);
    CThostFtdcSyncDeltaDceCombInstrumentField *data = &(extra->data);
    data->CombinationType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 买卖
/// typedef char TThostFtdcDirectionType
static PyObject *PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_get_Direction(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaDceCombInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaDceCombInstrumentFieldData>(self);
    CThostFtdcSyncDeltaDceCombInstrumentField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->Direction), 1);
}

static int PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_set_Direction(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Direction Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaDceCombInstrumentField::Direction)) {
        PyErr_SetString(PyExc_ValueError, "Direction must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaDceCombInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaDceCombInstrumentFieldData>(self);
    CThostFtdcSyncDeltaDceCombInstrumentField *data = &(extra->data);
    data->Direction = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 产品代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_get_ProductID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaDceCombInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaDceCombInstrumentFieldData>(self);
    CThostFtdcSyncDeltaDceCombInstrumentField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProductID, (Py_ssize_t)sizeof(data->ProductID));
    return PyBytes_FromString(data->ProductID);
}

static int PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_set_ProductID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaDceCombInstrumentField::ProductID)) {
        PyErr_SetString(PyExc_ValueError, "ProductID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaDceCombInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaDceCombInstrumentFieldData>(self);
    CThostFtdcSyncDeltaDceCombInstrumentField *data = &(extra->data);
    // memset(data->ProductID, 0, sizeof(data->ProductID));
    // memcpy(data->ProductID, buf, len);
    strncpy(data->ProductID, buf, sizeof(data->ProductID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionDirectionType
static PyObject *PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_get_ActionDirection(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaDceCombInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaDceCombInstrumentFieldData>(self);
    CThostFtdcSyncDeltaDceCombInstrumentField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionDirection), 1);
}

static int PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_set_ActionDirection(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDirection Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaDceCombInstrumentField::ActionDirection)) {
        PyErr_SetString(PyExc_ValueError, "ActionDirection must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaDceCombInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaDceCombInstrumentFieldData>(self);
    CThostFtdcSyncDeltaDceCombInstrumentField *data = &(extra->data);
    data->ActionDirection = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_members[] = {
    /// 成交组号
    /// typedef int TThostFtdcTradeGroupIDType
    {
        .name = "TradeGroupID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaDceCombInstrumentFieldData, data.TradeGroupID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("成交组号")
    },
    /// 期货/期权组合保证金比例
    /// typedef double TThostFtdcDiscountRatioType
    {
        .name = "Xparameter",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaDceCombInstrumentFieldData, data.Xparameter),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("期货/期权组合保证金比例")
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
        .offset = offsetof(PyCThostFtdcSyncDeltaDceCombInstrumentFieldData, data.SyncDeltaSequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("追平序号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_getsets[] = {
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "CombInstrumentID",
    .get = PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_get_CombInstrumentID,
    .set = PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_set_CombInstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_get_ExchangeID,
    .set = PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    {
    .name = "ExchangeInstID",
    .get = PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_get_ExchangeInstID,
    .set = PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_set_ExchangeInstID,
    .doc = PyDoc_STR("合约在交易所的代码"),
    },
    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "CombHedgeFlag",
    .get = PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_get_CombHedgeFlag,
    .set = PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_set_CombHedgeFlag,
    .doc = PyDoc_STR("投机套保标志"),
    },
    /// 组合类型
    /// typedef char TThostFtdcDceCombinationTypeType
    {
    .name = "CombinationType",
    .get = PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_get_CombinationType,
    .set = PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_set_CombinationType,
    .doc = PyDoc_STR("组合类型"),
    },
    /// 买卖
    /// typedef char TThostFtdcDirectionType
    {
    .name = "Direction",
    .get = PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_get_Direction,
    .set = PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_set_Direction,
    .doc = PyDoc_STR("买卖"),
    },
    /// 产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "ProductID",
    .get = PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_get_ProductID,
    .set = PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_set_ProductID,
    .doc = PyDoc_STR("产品代码"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    {
    .name = "ActionDirection",
    .get = PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_get_ActionDirection,
    .set = PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_set_ActionDirection,
    .doc = PyDoc_STR("操作标志"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncDeltaDceCombInstrumentField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("风险结算追平组合优先级")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncDeltaDceCombInstrumentFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("风险结算追平组合优先级")},
    {Py_tp_members, PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncDeltaDceCombInstrumentField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaDceCombInstrumentFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaDceCombInstrumentFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncDeltaDceCombInstrumentFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncDeltaDceCombInstrumentFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaDceCombInstrumentField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaDceCombInstrumentField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}