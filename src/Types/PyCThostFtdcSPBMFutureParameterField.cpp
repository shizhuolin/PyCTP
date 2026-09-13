
#include "PyCThostFtdcSPBMFutureParameterField.h"

///SPBM期货合约保证金参数

static int PyCThostFtdcSPBMFutureParameterFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "ExchangeID", "InstrumentID", "ProdFamilyCode", "Cvf", "TimeRange", "MarginRate", "LockRateX", "AddOnRate", "PreSettlementPrice", "AddOnLockRateX2", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcSPBMFutureParameterField_TradingDay = NULL;
    Py_ssize_t CThostFtdcSPBMFutureParameterField_TradingDay_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcSPBMFutureParameterField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcSPBMFutureParameterField_ExchangeID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSPBMFutureParameterField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcSPBMFutureParameterField_InstrumentID_length = 0;

    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSPBMFutureParameterField_ProdFamilyCode = NULL;
    Py_ssize_t CThostFtdcSPBMFutureParameterField_ProdFamilyCode_length = 0;

    /// 期货合约因子
    /// typedef int TThostFtdcVolumeMultipleType
    int CThostFtdcSPBMFutureParameterField_Cvf = 0;

    /// 阶段标识
    /// typedef char TThostFtdcTimeRangeType
    char CThostFtdcSPBMFutureParameterField_TimeRange = 0;

    /// 品种保证金标准
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSPBMFutureParameterField_MarginRate = 0.0;

    /// 期货合约内部对锁仓费率折扣比例
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSPBMFutureParameterField_LockRateX = 0.0;

    /// 提高保证金标准
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSPBMFutureParameterField_AddOnRate = 0.0;

    /// 昨结算价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcSPBMFutureParameterField_PreSettlementPrice = 0.0;

    /// 期货合约内部对锁仓附加费率折扣比例
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSPBMFutureParameterField_AddOnLockRateX2 = 0.0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#icddddd", (char **)kwlist
        , &CThostFtdcSPBMFutureParameterField_TradingDay, &CThostFtdcSPBMFutureParameterField_TradingDay_length
        , &CThostFtdcSPBMFutureParameterField_ExchangeID, &CThostFtdcSPBMFutureParameterField_ExchangeID_length
        , &CThostFtdcSPBMFutureParameterField_InstrumentID, &CThostFtdcSPBMFutureParameterField_InstrumentID_length
        , &CThostFtdcSPBMFutureParameterField_ProdFamilyCode, &CThostFtdcSPBMFutureParameterField_ProdFamilyCode_length
        , &CThostFtdcSPBMFutureParameterField_Cvf
        , &CThostFtdcSPBMFutureParameterField_TimeRange
        , &CThostFtdcSPBMFutureParameterField_MarginRate
        , &CThostFtdcSPBMFutureParameterField_LockRateX
        , &CThostFtdcSPBMFutureParameterField_AddOnRate
        , &CThostFtdcSPBMFutureParameterField_PreSettlementPrice
        , &CThostFtdcSPBMFutureParameterField_AddOnLockRateX2
    )) {
        return -1;
    }

    PyCThostFtdcSPBMFutureParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMFutureParameterFieldData>(self);
    CThostFtdcSPBMFutureParameterField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcSPBMFutureParameterField_TradingDay != NULL ) {
        if(CThostFtdcSPBMFutureParameterField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcSPBMFutureParameterField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcSPBMFutureParameterField_TradingDay, CThostFtdcSPBMFutureParameterField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcSPBMFutureParameterField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcSPBMFutureParameterField_TradingDay = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcSPBMFutureParameterField_ExchangeID != NULL ) {
        if(CThostFtdcSPBMFutureParameterField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcSPBMFutureParameterField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcSPBMFutureParameterField_ExchangeID, CThostFtdcSPBMFutureParameterField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcSPBMFutureParameterField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcSPBMFutureParameterField_ExchangeID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSPBMFutureParameterField_InstrumentID != NULL ) {
        if(CThostFtdcSPBMFutureParameterField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcSPBMFutureParameterField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcSPBMFutureParameterField_InstrumentID, CThostFtdcSPBMFutureParameterField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcSPBMFutureParameterField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcSPBMFutureParameterField_InstrumentID = NULL;
    }

    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSPBMFutureParameterField_ProdFamilyCode != NULL ) {
        if(CThostFtdcSPBMFutureParameterField_ProdFamilyCode_length >= (Py_ssize_t)sizeof(data->ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is 80)", CThostFtdcSPBMFutureParameterField_ProdFamilyCode_length);
            return -1;
        }
        // memset(data->ProdFamilyCode, 0, sizeof(data->ProdFamilyCode));
        // memcpy(data->ProdFamilyCode, CThostFtdcSPBMFutureParameterField_ProdFamilyCode, CThostFtdcSPBMFutureParameterField_ProdFamilyCode_length);
        strncpy(data->ProdFamilyCode, CThostFtdcSPBMFutureParameterField_ProdFamilyCode, sizeof(data->ProdFamilyCode));
        CThostFtdcSPBMFutureParameterField_ProdFamilyCode = NULL;
    }

    /// 期货合约因子
    /// typedef int TThostFtdcVolumeMultipleType
    data->Cvf = CThostFtdcSPBMFutureParameterField_Cvf;

    /// 阶段标识
    /// typedef char TThostFtdcTimeRangeType
    data->TimeRange = CThostFtdcSPBMFutureParameterField_TimeRange;

    /// 品种保证金标准
    /// typedef double TThostFtdcRatioType
    data->MarginRate = CThostFtdcSPBMFutureParameterField_MarginRate;

    /// 期货合约内部对锁仓费率折扣比例
    /// typedef double TThostFtdcRatioType
    data->LockRateX = CThostFtdcSPBMFutureParameterField_LockRateX;

    /// 提高保证金标准
    /// typedef double TThostFtdcRatioType
    data->AddOnRate = CThostFtdcSPBMFutureParameterField_AddOnRate;

    /// 昨结算价
    /// typedef double TThostFtdcPriceType
    data->PreSettlementPrice = CThostFtdcSPBMFutureParameterField_PreSettlementPrice;

    /// 期货合约内部对锁仓附加费率折扣比例
    /// typedef double TThostFtdcRatioType
    data->AddOnLockRateX2 = CThostFtdcSPBMFutureParameterField_AddOnLockRateX2;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSPBMFutureParameterFieldType_repr(PyObject *self) {

    PyCThostFtdcSPBMFutureParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMFutureParameterFieldData>(self);
    CThostFtdcSPBMFutureParameterField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i,s:c,s:d,s:d,s:d,s:d,s:d}"
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
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSPBMFutureParameterField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSPBMFutureParameterField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcSPBMFutureParameterFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcSPBMFutureParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMFutureParameterFieldData>(self);
    CThostFtdcSPBMFutureParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcSPBMFutureParameterFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSPBMFutureParameterField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSPBMFutureParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMFutureParameterFieldData>(self);
    CThostFtdcSPBMFutureParameterField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcSPBMFutureParameterFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcSPBMFutureParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMFutureParameterFieldData>(self);
    CThostFtdcSPBMFutureParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcSPBMFutureParameterFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSPBMFutureParameterField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSPBMFutureParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMFutureParameterFieldData>(self);
    CThostFtdcSPBMFutureParameterField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSPBMFutureParameterFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcSPBMFutureParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMFutureParameterFieldData>(self);
    CThostFtdcSPBMFutureParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcSPBMFutureParameterFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSPBMFutureParameterField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSPBMFutureParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMFutureParameterFieldData>(self);
    CThostFtdcSPBMFutureParameterField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 品种代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSPBMFutureParameterFieldType_get_ProdFamilyCode(PyObject *self, void *closure) {
    PyCThostFtdcSPBMFutureParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMFutureParameterFieldData>(self);
    CThostFtdcSPBMFutureParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProdFamilyCode, (Py_ssize_t)sizeof(data->ProdFamilyCode));
    return PyBytes_FromString(data->ProdFamilyCode);
}

static int PyCThostFtdcSPBMFutureParameterFieldType_set_ProdFamilyCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProdFamilyCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSPBMFutureParameterField::ProdFamilyCode)) {
        PyErr_SetString(PyExc_ValueError, "ProdFamilyCode must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSPBMFutureParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMFutureParameterFieldData>(self);
    CThostFtdcSPBMFutureParameterField *data = &(extra->data);
    // memset(data->ProdFamilyCode, 0, sizeof(data->ProdFamilyCode));
    // memcpy(data->ProdFamilyCode, buf, len);
    strncpy(data->ProdFamilyCode, buf, sizeof(data->ProdFamilyCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 阶段标识
/// typedef char TThostFtdcTimeRangeType
static PyObject *PyCThostFtdcSPBMFutureParameterFieldType_get_TimeRange(PyObject *self, void *closure) {
    PyCThostFtdcSPBMFutureParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMFutureParameterFieldData>(self);
    CThostFtdcSPBMFutureParameterField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->TimeRange), 1);
}

static int PyCThostFtdcSPBMFutureParameterFieldType_set_TimeRange(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TimeRange Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSPBMFutureParameterField::TimeRange)) {
        PyErr_SetString(PyExc_ValueError, "TimeRange must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSPBMFutureParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMFutureParameterFieldData>(self);
    CThostFtdcSPBMFutureParameterField *data = &(extra->data);
    data->TimeRange = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSPBMFutureParameterFieldType_members[] = {
    /// 期货合约因子
    /// typedef int TThostFtdcVolumeMultipleType
    {
        .name = "Cvf",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSPBMFutureParameterFieldData, data.Cvf),
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
        .offset = offsetof(PyCThostFtdcSPBMFutureParameterFieldData, data.MarginRate),
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
        .offset = offsetof(PyCThostFtdcSPBMFutureParameterFieldData, data.LockRateX),
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
        .offset = offsetof(PyCThostFtdcSPBMFutureParameterFieldData, data.AddOnRate),
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
        .offset = offsetof(PyCThostFtdcSPBMFutureParameterFieldData, data.PreSettlementPrice),
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
        .offset = offsetof(PyCThostFtdcSPBMFutureParameterFieldData, data.AddOnLockRateX2),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("期货合约内部对锁仓附加费率折扣比例")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSPBMFutureParameterFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcSPBMFutureParameterFieldType_get_TradingDay,
    .set = PyCThostFtdcSPBMFutureParameterFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcSPBMFutureParameterFieldType_get_ExchangeID,
    .set = PyCThostFtdcSPBMFutureParameterFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcSPBMFutureParameterFieldType_get_InstrumentID,
    .set = PyCThostFtdcSPBMFutureParameterFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "ProdFamilyCode",
    .get = PyCThostFtdcSPBMFutureParameterFieldType_get_ProdFamilyCode,
    .set = PyCThostFtdcSPBMFutureParameterFieldType_set_ProdFamilyCode,
    .doc = PyDoc_STR("品种代码"),
    },
    /// 阶段标识
    /// typedef char TThostFtdcTimeRangeType
    {
    .name = "TimeRange",
    .get = PyCThostFtdcSPBMFutureParameterFieldType_get_TimeRange,
    .set = PyCThostFtdcSPBMFutureParameterFieldType_set_TimeRange,
    .doc = PyDoc_STR("阶段标识"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSPBMFutureParameterFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSPBMFutureParameterField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("SPBM期货合约保证金参数")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSPBMFutureParameterFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSPBMFutureParameterFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSPBMFutureParameterFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSPBMFutureParameterFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSPBMFutureParameterFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSPBMFutureParameterFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("SPBM期货合约保证金参数")},
    {Py_tp_members, PyCThostFtdcSPBMFutureParameterFieldType_members},
    {Py_tp_getset, PyCThostFtdcSPBMFutureParameterFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSPBMFutureParameterFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSPBMFutureParameterFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSPBMFutureParameterFieldType_spec = {
    .name = "PyCTP.CThostFtdcSPBMFutureParameterField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSPBMFutureParameterFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSPBMFutureParameterFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSPBMFutureParameterFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSPBMFutureParameterFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSPBMFutureParameterFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSPBMFutureParameterFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSPBMFutureParameterFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSPBMFutureParameterFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSPBMFutureParameterField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSPBMFutureParameterField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}