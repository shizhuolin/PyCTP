
#include "PyCThostFtdcSyncDeltaSPBMFutureParameterField.h"

///风险结算追平SPBM期货合约保证金参数

static int PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "ExchangeID", "InstrumentID", "ProdFamilyCode", "Cvf", "TimeRange", "MarginRate", "LockRateX", "AddOnRate", "PreSettlementPrice", "AddOnLockRateX2", "ActionDirection", "SyncDeltaSequenceNo", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcSyncDeltaSPBMFutureParameterField_TradingDay = NULL;
    Py_ssize_t CThostFtdcSyncDeltaSPBMFutureParameterField_TradingDay_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcSyncDeltaSPBMFutureParameterField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaSPBMFutureParameterField_ExchangeID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSyncDeltaSPBMFutureParameterField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaSPBMFutureParameterField_InstrumentID_length = 0;

    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSyncDeltaSPBMFutureParameterField_ProdFamilyCode = NULL;
    Py_ssize_t CThostFtdcSyncDeltaSPBMFutureParameterField_ProdFamilyCode_length = 0;

    /// 期货合约因子
    /// typedef int TThostFtdcVolumeMultipleType
    int CThostFtdcSyncDeltaSPBMFutureParameterField_Cvf = 0;

    /// 阶段标识
    /// typedef char TThostFtdcTimeRangeType
    char CThostFtdcSyncDeltaSPBMFutureParameterField_TimeRange = 0;

    /// 品种保证金标准
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncDeltaSPBMFutureParameterField_MarginRate = 0.0;

    /// 期货合约内部对锁仓费率折扣比例
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncDeltaSPBMFutureParameterField_LockRateX = 0.0;

    /// 提高保证金标准
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncDeltaSPBMFutureParameterField_AddOnRate = 0.0;

    /// 昨结算价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcSyncDeltaSPBMFutureParameterField_PreSettlementPrice = 0.0;

    /// 期货合约内部对锁仓附加费率折扣比例
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncDeltaSPBMFutureParameterField_AddOnLockRateX2 = 0.0;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    char CThostFtdcSyncDeltaSPBMFutureParameterField_ActionDirection = 0;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcSyncDeltaSPBMFutureParameterField_SyncDeltaSequenceNo = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#icdddddci", (char **)kwlist
        , &CThostFtdcSyncDeltaSPBMFutureParameterField_TradingDay, &CThostFtdcSyncDeltaSPBMFutureParameterField_TradingDay_length
        , &CThostFtdcSyncDeltaSPBMFutureParameterField_ExchangeID, &CThostFtdcSyncDeltaSPBMFutureParameterField_ExchangeID_length
        , &CThostFtdcSyncDeltaSPBMFutureParameterField_InstrumentID, &CThostFtdcSyncDeltaSPBMFutureParameterField_InstrumentID_length
        , &CThostFtdcSyncDeltaSPBMFutureParameterField_ProdFamilyCode, &CThostFtdcSyncDeltaSPBMFutureParameterField_ProdFamilyCode_length
        , &CThostFtdcSyncDeltaSPBMFutureParameterField_Cvf
        , &CThostFtdcSyncDeltaSPBMFutureParameterField_TimeRange
        , &CThostFtdcSyncDeltaSPBMFutureParameterField_MarginRate
        , &CThostFtdcSyncDeltaSPBMFutureParameterField_LockRateX
        , &CThostFtdcSyncDeltaSPBMFutureParameterField_AddOnRate
        , &CThostFtdcSyncDeltaSPBMFutureParameterField_PreSettlementPrice
        , &CThostFtdcSyncDeltaSPBMFutureParameterField_AddOnLockRateX2
        , &CThostFtdcSyncDeltaSPBMFutureParameterField_ActionDirection
        , &CThostFtdcSyncDeltaSPBMFutureParameterField_SyncDeltaSequenceNo
    )) {
        return -1;
    }

    PyCThostFtdcSyncDeltaSPBMFutureParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMFutureParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMFutureParameterField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcSyncDeltaSPBMFutureParameterField_TradingDay != NULL ) {
        if(CThostFtdcSyncDeltaSPBMFutureParameterField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaSPBMFutureParameterField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcSyncDeltaSPBMFutureParameterField_TradingDay, CThostFtdcSyncDeltaSPBMFutureParameterField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcSyncDeltaSPBMFutureParameterField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcSyncDeltaSPBMFutureParameterField_TradingDay = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcSyncDeltaSPBMFutureParameterField_ExchangeID != NULL ) {
        if(CThostFtdcSyncDeltaSPBMFutureParameterField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaSPBMFutureParameterField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcSyncDeltaSPBMFutureParameterField_ExchangeID, CThostFtdcSyncDeltaSPBMFutureParameterField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcSyncDeltaSPBMFutureParameterField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcSyncDeltaSPBMFutureParameterField_ExchangeID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSyncDeltaSPBMFutureParameterField_InstrumentID != NULL ) {
        if(CThostFtdcSyncDeltaSPBMFutureParameterField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcSyncDeltaSPBMFutureParameterField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcSyncDeltaSPBMFutureParameterField_InstrumentID, CThostFtdcSyncDeltaSPBMFutureParameterField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcSyncDeltaSPBMFutureParameterField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcSyncDeltaSPBMFutureParameterField_InstrumentID = NULL;
    }

    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSyncDeltaSPBMFutureParameterField_ProdFamilyCode != NULL ) {
        if(CThostFtdcSyncDeltaSPBMFutureParameterField_ProdFamilyCode_length >= (Py_ssize_t)sizeof(data->ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is 80)", CThostFtdcSyncDeltaSPBMFutureParameterField_ProdFamilyCode_length);
            return -1;
        }
        // memset(data->ProdFamilyCode, 0, sizeof(data->ProdFamilyCode));
        // memcpy(data->ProdFamilyCode, CThostFtdcSyncDeltaSPBMFutureParameterField_ProdFamilyCode, CThostFtdcSyncDeltaSPBMFutureParameterField_ProdFamilyCode_length);
        strncpy(data->ProdFamilyCode, CThostFtdcSyncDeltaSPBMFutureParameterField_ProdFamilyCode, sizeof(data->ProdFamilyCode));
        CThostFtdcSyncDeltaSPBMFutureParameterField_ProdFamilyCode = NULL;
    }

    /// 期货合约因子
    /// typedef int TThostFtdcVolumeMultipleType
    data->Cvf = CThostFtdcSyncDeltaSPBMFutureParameterField_Cvf;

    /// 阶段标识
    /// typedef char TThostFtdcTimeRangeType
    data->TimeRange = CThostFtdcSyncDeltaSPBMFutureParameterField_TimeRange;

    /// 品种保证金标准
    /// typedef double TThostFtdcRatioType
    data->MarginRate = CThostFtdcSyncDeltaSPBMFutureParameterField_MarginRate;

    /// 期货合约内部对锁仓费率折扣比例
    /// typedef double TThostFtdcRatioType
    data->LockRateX = CThostFtdcSyncDeltaSPBMFutureParameterField_LockRateX;

    /// 提高保证金标准
    /// typedef double TThostFtdcRatioType
    data->AddOnRate = CThostFtdcSyncDeltaSPBMFutureParameterField_AddOnRate;

    /// 昨结算价
    /// typedef double TThostFtdcPriceType
    data->PreSettlementPrice = CThostFtdcSyncDeltaSPBMFutureParameterField_PreSettlementPrice;

    /// 期货合约内部对锁仓附加费率折扣比例
    /// typedef double TThostFtdcRatioType
    data->AddOnLockRateX2 = CThostFtdcSyncDeltaSPBMFutureParameterField_AddOnLockRateX2;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    data->ActionDirection = CThostFtdcSyncDeltaSPBMFutureParameterField_ActionDirection;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    data->SyncDeltaSequenceNo = CThostFtdcSyncDeltaSPBMFutureParameterField_SyncDeltaSequenceNo;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncDeltaSPBMFutureParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMFutureParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMFutureParameterField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i,s:c,s:d,s:d,s:d,s:d,s:d,s:c,s:i}"
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "ProdFamilyCode", data->ProdFamilyCode//, (Py_ssize_t)sizeof(data->ProdFamilyCode)
        , "Cvf", data->Cvf
        , "TimeRange", data->TimeRange
        , "MarginRate", data->MarginRate
        , "LockRateX", data->LockRateX
        , "AddOnRate", data->AddOnRate
        , "PreSettlementPrice", data->PreSettlementPrice
        , "AddOnLockRateX2", data->AddOnLockRateX2
        , "ActionDirection", data->ActionDirection
        , "SyncDeltaSequenceNo", data->SyncDeltaSequenceNo
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaSPBMFutureParameterField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaSPBMFutureParameterField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaSPBMFutureParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMFutureParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMFutureParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaSPBMFutureParameterField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaSPBMFutureParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMFutureParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMFutureParameterField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaSPBMFutureParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMFutureParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMFutureParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaSPBMFutureParameterField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaSPBMFutureParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMFutureParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMFutureParameterField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaSPBMFutureParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMFutureParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMFutureParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaSPBMFutureParameterField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaSPBMFutureParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMFutureParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMFutureParameterField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 品种代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_get_ProdFamilyCode(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaSPBMFutureParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMFutureParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMFutureParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProdFamilyCode, (Py_ssize_t)sizeof(data->ProdFamilyCode));
    return PyBytes_FromString(data->ProdFamilyCode);
}

static int PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_set_ProdFamilyCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProdFamilyCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaSPBMFutureParameterField::ProdFamilyCode)) {
        PyErr_SetString(PyExc_ValueError, "ProdFamilyCode must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaSPBMFutureParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMFutureParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMFutureParameterField *data = &(extra->data);
    // memset(data->ProdFamilyCode, 0, sizeof(data->ProdFamilyCode));
    // memcpy(data->ProdFamilyCode, buf, len);
    strncpy(data->ProdFamilyCode, buf, sizeof(data->ProdFamilyCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 阶段标识
/// typedef char TThostFtdcTimeRangeType
static PyObject *PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_get_TimeRange(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaSPBMFutureParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMFutureParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMFutureParameterField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->TimeRange), 1);
}

static int PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_set_TimeRange(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TimeRange Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaSPBMFutureParameterField::TimeRange)) {
        PyErr_SetString(PyExc_ValueError, "TimeRange must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaSPBMFutureParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMFutureParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMFutureParameterField *data = &(extra->data);
    data->TimeRange = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionDirectionType
static PyObject *PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_get_ActionDirection(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaSPBMFutureParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMFutureParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMFutureParameterField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionDirection), 1);
}

static int PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_set_ActionDirection(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDirection Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaSPBMFutureParameterField::ActionDirection)) {
        PyErr_SetString(PyExc_ValueError, "ActionDirection must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaSPBMFutureParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMFutureParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMFutureParameterField *data = &(extra->data);
    data->ActionDirection = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_members[] = {
    /// 期货合约因子
    /// typedef int TThostFtdcVolumeMultipleType
    {
        .name = "Cvf",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaSPBMFutureParameterFieldData, data.Cvf),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("期货合约因子")
    },
    /// 品种保证金标准
    /// typedef double TThostFtdcRatioType
    {
        .name = "MarginRate",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaSPBMFutureParameterFieldData, data.MarginRate),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("品种保证金标准")
    },
    /// 期货合约内部对锁仓费率折扣比例
    /// typedef double TThostFtdcRatioType
    {
        .name = "LockRateX",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaSPBMFutureParameterFieldData, data.LockRateX),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("期货合约内部对锁仓费率折扣比例")
    },
    /// 提高保证金标准
    /// typedef double TThostFtdcRatioType
    {
        .name = "AddOnRate",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaSPBMFutureParameterFieldData, data.AddOnRate),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("提高保证金标准")
    },
    /// 昨结算价
    /// typedef double TThostFtdcPriceType
    {
        .name = "PreSettlementPrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaSPBMFutureParameterFieldData, data.PreSettlementPrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("昨结算价")
    },
    /// 期货合约内部对锁仓附加费率折扣比例
    /// typedef double TThostFtdcRatioType
    {
        .name = "AddOnLockRateX2",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaSPBMFutureParameterFieldData, data.AddOnLockRateX2),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("期货合约内部对锁仓附加费率折扣比例")
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
        .offset = offsetof(PyCThostFtdcSyncDeltaSPBMFutureParameterFieldData, data.SyncDeltaSequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("追平序号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_get_TradingDay,
    .set = PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_get_ExchangeID,
    .set = PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_get_InstrumentID,
    .set = PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "ProdFamilyCode",
    .get = PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_get_ProdFamilyCode,
    .set = PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_set_ProdFamilyCode,
    .doc = PyDoc_STR("品种代码"),
    },
    /// 阶段标识
    /// typedef char TThostFtdcTimeRangeType
    {
    .name = "TimeRange",
    .get = PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_get_TimeRange,
    .set = PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_set_TimeRange,
    .doc = PyDoc_STR("阶段标识"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    {
    .name = "ActionDirection",
    .get = PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_get_ActionDirection,
    .set = PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_set_ActionDirection,
    .doc = PyDoc_STR("操作标志"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncDeltaSPBMFutureParameterField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("风险结算追平SPBM期货合约保证金参数")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncDeltaSPBMFutureParameterFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("风险结算追平SPBM期货合约保证金参数")},
    {Py_tp_members, PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncDeltaSPBMFutureParameterField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaSPBMFutureParameterFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaSPBMFutureParameterFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaSPBMFutureParameterField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaSPBMFutureParameterField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}