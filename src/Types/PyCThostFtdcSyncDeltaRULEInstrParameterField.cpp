
#include "PyCThostFtdcSyncDeltaRULEInstrParameterField.h"

///风险结算追平RULE合约保证金参数

static int PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "ExchangeID", "InstrumentID", "InstrumentClass", "StdInstrumentID", "BSpecRatio", "SSpecRatio", "BHedgeRatio", "SHedgeRatio", "BAddOnMargin", "SAddOnMargin", "CommodityGroupID", "ActionDirection", "SyncDeltaSequenceNo", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcSyncDeltaRULEInstrParameterField_TradingDay = NULL;
    Py_ssize_t CThostFtdcSyncDeltaRULEInstrParameterField_TradingDay_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcSyncDeltaRULEInstrParameterField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaRULEInstrParameterField_ExchangeID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSyncDeltaRULEInstrParameterField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaRULEInstrParameterField_InstrumentID_length = 0;

    /// 合约类型
    /// typedef char TThostFtdcInstrumentClassType
    char CThostFtdcSyncDeltaRULEInstrParameterField_InstrumentClass = 0;

    /// 标准合约
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSyncDeltaRULEInstrParameterField_StdInstrumentID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaRULEInstrParameterField_StdInstrumentID_length = 0;

    /// 投机买折算系数
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncDeltaRULEInstrParameterField_BSpecRatio = 0.0;

    /// 投机卖折算系数
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncDeltaRULEInstrParameterField_SSpecRatio = 0.0;

    /// 套保买折算系数
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncDeltaRULEInstrParameterField_BHedgeRatio = 0.0;

    /// 套保卖折算系数
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncDeltaRULEInstrParameterField_SHedgeRatio = 0.0;

    /// 买附加风险保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaRULEInstrParameterField_BAddOnMargin = 0.0;

    /// 卖附加风险保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaRULEInstrParameterField_SAddOnMargin = 0.0;

    /// 商品群号
    /// typedef int TThostFtdcCommodityGroupIDType
    int CThostFtdcSyncDeltaRULEInstrParameterField_CommodityGroupID = 0;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    char CThostFtdcSyncDeltaRULEInstrParameterField_ActionDirection = 0;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcSyncDeltaRULEInstrParameterField_SyncDeltaSequenceNo = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#cy#ddddddici", (char **)kwlist
        , &CThostFtdcSyncDeltaRULEInstrParameterField_TradingDay, &CThostFtdcSyncDeltaRULEInstrParameterField_TradingDay_length
        , &CThostFtdcSyncDeltaRULEInstrParameterField_ExchangeID, &CThostFtdcSyncDeltaRULEInstrParameterField_ExchangeID_length
        , &CThostFtdcSyncDeltaRULEInstrParameterField_InstrumentID, &CThostFtdcSyncDeltaRULEInstrParameterField_InstrumentID_length
        , &CThostFtdcSyncDeltaRULEInstrParameterField_InstrumentClass
        , &CThostFtdcSyncDeltaRULEInstrParameterField_StdInstrumentID, &CThostFtdcSyncDeltaRULEInstrParameterField_StdInstrumentID_length
        , &CThostFtdcSyncDeltaRULEInstrParameterField_BSpecRatio
        , &CThostFtdcSyncDeltaRULEInstrParameterField_SSpecRatio
        , &CThostFtdcSyncDeltaRULEInstrParameterField_BHedgeRatio
        , &CThostFtdcSyncDeltaRULEInstrParameterField_SHedgeRatio
        , &CThostFtdcSyncDeltaRULEInstrParameterField_BAddOnMargin
        , &CThostFtdcSyncDeltaRULEInstrParameterField_SAddOnMargin
        , &CThostFtdcSyncDeltaRULEInstrParameterField_CommodityGroupID
        , &CThostFtdcSyncDeltaRULEInstrParameterField_ActionDirection
        , &CThostFtdcSyncDeltaRULEInstrParameterField_SyncDeltaSequenceNo
    )) {
        return -1;
    }

    PyCThostFtdcSyncDeltaRULEInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRULEInstrParameterFieldData>(self);
    CThostFtdcSyncDeltaRULEInstrParameterField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcSyncDeltaRULEInstrParameterField_TradingDay != NULL ) {
        if(CThostFtdcSyncDeltaRULEInstrParameterField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaRULEInstrParameterField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcSyncDeltaRULEInstrParameterField_TradingDay, CThostFtdcSyncDeltaRULEInstrParameterField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcSyncDeltaRULEInstrParameterField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcSyncDeltaRULEInstrParameterField_TradingDay = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcSyncDeltaRULEInstrParameterField_ExchangeID != NULL ) {
        if(CThostFtdcSyncDeltaRULEInstrParameterField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaRULEInstrParameterField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcSyncDeltaRULEInstrParameterField_ExchangeID, CThostFtdcSyncDeltaRULEInstrParameterField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcSyncDeltaRULEInstrParameterField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcSyncDeltaRULEInstrParameterField_ExchangeID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSyncDeltaRULEInstrParameterField_InstrumentID != NULL ) {
        if(CThostFtdcSyncDeltaRULEInstrParameterField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcSyncDeltaRULEInstrParameterField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcSyncDeltaRULEInstrParameterField_InstrumentID, CThostFtdcSyncDeltaRULEInstrParameterField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcSyncDeltaRULEInstrParameterField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcSyncDeltaRULEInstrParameterField_InstrumentID = NULL;
    }

    /// 合约类型
    /// typedef char TThostFtdcInstrumentClassType
    data->InstrumentClass = CThostFtdcSyncDeltaRULEInstrParameterField_InstrumentClass;

    /// 标准合约
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSyncDeltaRULEInstrParameterField_StdInstrumentID != NULL ) {
        if(CThostFtdcSyncDeltaRULEInstrParameterField_StdInstrumentID_length >= (Py_ssize_t)sizeof(data->StdInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "StdInstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcSyncDeltaRULEInstrParameterField_StdInstrumentID_length);
            return -1;
        }
        // memset(data->StdInstrumentID, 0, sizeof(data->StdInstrumentID));
        // memcpy(data->StdInstrumentID, CThostFtdcSyncDeltaRULEInstrParameterField_StdInstrumentID, CThostFtdcSyncDeltaRULEInstrParameterField_StdInstrumentID_length);
        strncpy(data->StdInstrumentID, CThostFtdcSyncDeltaRULEInstrParameterField_StdInstrumentID, sizeof(data->StdInstrumentID));
        CThostFtdcSyncDeltaRULEInstrParameterField_StdInstrumentID = NULL;
    }

    /// 投机买折算系数
    /// typedef double TThostFtdcRatioType
    data->BSpecRatio = CThostFtdcSyncDeltaRULEInstrParameterField_BSpecRatio;

    /// 投机卖折算系数
    /// typedef double TThostFtdcRatioType
    data->SSpecRatio = CThostFtdcSyncDeltaRULEInstrParameterField_SSpecRatio;

    /// 套保买折算系数
    /// typedef double TThostFtdcRatioType
    data->BHedgeRatio = CThostFtdcSyncDeltaRULEInstrParameterField_BHedgeRatio;

    /// 套保卖折算系数
    /// typedef double TThostFtdcRatioType
    data->SHedgeRatio = CThostFtdcSyncDeltaRULEInstrParameterField_SHedgeRatio;

    /// 买附加风险保证金
    /// typedef double TThostFtdcMoneyType
    data->BAddOnMargin = CThostFtdcSyncDeltaRULEInstrParameterField_BAddOnMargin;

    /// 卖附加风险保证金
    /// typedef double TThostFtdcMoneyType
    data->SAddOnMargin = CThostFtdcSyncDeltaRULEInstrParameterField_SAddOnMargin;

    /// 商品群号
    /// typedef int TThostFtdcCommodityGroupIDType
    data->CommodityGroupID = CThostFtdcSyncDeltaRULEInstrParameterField_CommodityGroupID;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    data->ActionDirection = CThostFtdcSyncDeltaRULEInstrParameterField_ActionDirection;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    data->SyncDeltaSequenceNo = CThostFtdcSyncDeltaRULEInstrParameterField_SyncDeltaSequenceNo;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncDeltaRULEInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRULEInstrParameterFieldData>(self);
    CThostFtdcSyncDeltaRULEInstrParameterField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:c,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:i,s:c,s:i}"
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "InstrumentClass", data->InstrumentClass
        , "StdInstrumentID", data->StdInstrumentID//, (Py_ssize_t)sizeof(data->StdInstrumentID)
        , "BSpecRatio", data->BSpecRatio
        , "SSpecRatio", data->SSpecRatio
        , "BHedgeRatio", data->BHedgeRatio
        , "SHedgeRatio", data->SHedgeRatio
        , "BAddOnMargin", data->BAddOnMargin
        , "SAddOnMargin", data->SAddOnMargin
        , "CommodityGroupID", data->CommodityGroupID
        , "ActionDirection", data->ActionDirection
        , "SyncDeltaSequenceNo", data->SyncDeltaSequenceNo
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaRULEInstrParameterField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaRULEInstrParameterField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRULEInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRULEInstrParameterFieldData>(self);
    CThostFtdcSyncDeltaRULEInstrParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRULEInstrParameterField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRULEInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRULEInstrParameterFieldData>(self);
    CThostFtdcSyncDeltaRULEInstrParameterField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRULEInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRULEInstrParameterFieldData>(self);
    CThostFtdcSyncDeltaRULEInstrParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRULEInstrParameterField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRULEInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRULEInstrParameterFieldData>(self);
    CThostFtdcSyncDeltaRULEInstrParameterField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRULEInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRULEInstrParameterFieldData>(self);
    CThostFtdcSyncDeltaRULEInstrParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRULEInstrParameterField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRULEInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRULEInstrParameterFieldData>(self);
    CThostFtdcSyncDeltaRULEInstrParameterField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约类型
/// typedef char TThostFtdcInstrumentClassType
static PyObject *PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_get_InstrumentClass(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRULEInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRULEInstrParameterFieldData>(self);
    CThostFtdcSyncDeltaRULEInstrParameterField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->InstrumentClass), 1);
}

static int PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_set_InstrumentClass(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentClass Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRULEInstrParameterField::InstrumentClass)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentClass must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRULEInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRULEInstrParameterFieldData>(self);
    CThostFtdcSyncDeltaRULEInstrParameterField *data = &(extra->data);
    data->InstrumentClass = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 标准合约
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_get_StdInstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRULEInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRULEInstrParameterFieldData>(self);
    CThostFtdcSyncDeltaRULEInstrParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->StdInstrumentID, (Py_ssize_t)sizeof(data->StdInstrumentID));
    return PyBytes_FromString(data->StdInstrumentID);
}

static int PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_set_StdInstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "StdInstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRULEInstrParameterField::StdInstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "StdInstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRULEInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRULEInstrParameterFieldData>(self);
    CThostFtdcSyncDeltaRULEInstrParameterField *data = &(extra->data);
    // memset(data->StdInstrumentID, 0, sizeof(data->StdInstrumentID));
    // memcpy(data->StdInstrumentID, buf, len);
    strncpy(data->StdInstrumentID, buf, sizeof(data->StdInstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionDirectionType
static PyObject *PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_get_ActionDirection(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRULEInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRULEInstrParameterFieldData>(self);
    CThostFtdcSyncDeltaRULEInstrParameterField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionDirection), 1);
}

static int PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_set_ActionDirection(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDirection Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRULEInstrParameterField::ActionDirection)) {
        PyErr_SetString(PyExc_ValueError, "ActionDirection must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRULEInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRULEInstrParameterFieldData>(self);
    CThostFtdcSyncDeltaRULEInstrParameterField *data = &(extra->data);
    data->ActionDirection = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_members[] = {
    /// 投机买折算系数
    /// typedef double TThostFtdcRatioType
    {
        .name = "BSpecRatio",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaRULEInstrParameterFieldData, data.BSpecRatio),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("投机买折算系数")
    },
    /// 投机卖折算系数
    /// typedef double TThostFtdcRatioType
    {
        .name = "SSpecRatio",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaRULEInstrParameterFieldData, data.SSpecRatio),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("投机卖折算系数")
    },
    /// 套保买折算系数
    /// typedef double TThostFtdcRatioType
    {
        .name = "BHedgeRatio",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaRULEInstrParameterFieldData, data.BHedgeRatio),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("套保买折算系数")
    },
    /// 套保卖折算系数
    /// typedef double TThostFtdcRatioType
    {
        .name = "SHedgeRatio",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaRULEInstrParameterFieldData, data.SHedgeRatio),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("套保卖折算系数")
    },
    /// 买附加风险保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "BAddOnMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaRULEInstrParameterFieldData, data.BAddOnMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("买附加风险保证金")
    },
    /// 卖附加风险保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "SAddOnMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaRULEInstrParameterFieldData, data.SAddOnMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("卖附加风险保证金")
    },
    /// 商品群号
    /// typedef int TThostFtdcCommodityGroupIDType
    {
        .name = "CommodityGroupID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaRULEInstrParameterFieldData, data.CommodityGroupID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("商品群号")
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
        .offset = offsetof(PyCThostFtdcSyncDeltaRULEInstrParameterFieldData, data.SyncDeltaSequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("追平序号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_get_TradingDay,
    .set = PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_get_ExchangeID,
    .set = PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_get_InstrumentID,
    .set = PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 合约类型
    /// typedef char TThostFtdcInstrumentClassType
    {
    .name = "InstrumentClass",
    .get = PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_get_InstrumentClass,
    .set = PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_set_InstrumentClass,
    .doc = PyDoc_STR("合约类型"),
    },
    /// 标准合约
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "StdInstrumentID",
    .get = PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_get_StdInstrumentID,
    .set = PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_set_StdInstrumentID,
    .doc = PyDoc_STR("标准合约"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    {
    .name = "ActionDirection",
    .get = PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_get_ActionDirection,
    .set = PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_set_ActionDirection,
    .doc = PyDoc_STR("操作标志"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncDeltaRULEInstrParameterField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("风险结算追平RULE合约保证金参数")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncDeltaRULEInstrParameterFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("风险结算追平RULE合约保证金参数")},
    {Py_tp_members, PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncDeltaRULEInstrParameterField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaRULEInstrParameterFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaRULEInstrParameterFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncDeltaRULEInstrParameterFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncDeltaRULEInstrParameterFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaRULEInstrParameterField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaRULEInstrParameterField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}