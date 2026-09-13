
#include "PyCThostFtdcSyncDeltaSPBMOptionParameterField.h"

///风险结算追平SPBM期权合约保证金参数

static int PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "ExchangeID", "InstrumentID", "ProdFamilyCode", "Cvf", "DownPrice", "Delta", "SlimiDelta", "PreSettlementPrice", "ActionDirection", "SyncDeltaSequenceNo", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcSyncDeltaSPBMOptionParameterField_TradingDay = NULL;
    Py_ssize_t CThostFtdcSyncDeltaSPBMOptionParameterField_TradingDay_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcSyncDeltaSPBMOptionParameterField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaSPBMOptionParameterField_ExchangeID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSyncDeltaSPBMOptionParameterField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaSPBMOptionParameterField_InstrumentID_length = 0;

    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSyncDeltaSPBMOptionParameterField_ProdFamilyCode = NULL;
    Py_ssize_t CThostFtdcSyncDeltaSPBMOptionParameterField_ProdFamilyCode_length = 0;

    /// 期权合约因子
    /// typedef int TThostFtdcVolumeMultipleType
    int CThostFtdcSyncDeltaSPBMOptionParameterField_Cvf = 0;

    /// 期权冲抵价格
    /// typedef double TThostFtdcPriceType
    double CThostFtdcSyncDeltaSPBMOptionParameterField_DownPrice = 0.0;

    /// Delta值
    /// typedef double TThostFtdcDeltaType
    double CThostFtdcSyncDeltaSPBMOptionParameterField_Delta = 0.0;

    /// 卖方期权风险转换最低值
    /// typedef double TThostFtdcDeltaType
    double CThostFtdcSyncDeltaSPBMOptionParameterField_SlimiDelta = 0.0;

    /// 昨结算价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcSyncDeltaSPBMOptionParameterField_PreSettlementPrice = 0.0;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    char CThostFtdcSyncDeltaSPBMOptionParameterField_ActionDirection = 0;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcSyncDeltaSPBMOptionParameterField_SyncDeltaSequenceNo = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#iddddci", (char **)kwlist
        , &CThostFtdcSyncDeltaSPBMOptionParameterField_TradingDay, &CThostFtdcSyncDeltaSPBMOptionParameterField_TradingDay_length
        , &CThostFtdcSyncDeltaSPBMOptionParameterField_ExchangeID, &CThostFtdcSyncDeltaSPBMOptionParameterField_ExchangeID_length
        , &CThostFtdcSyncDeltaSPBMOptionParameterField_InstrumentID, &CThostFtdcSyncDeltaSPBMOptionParameterField_InstrumentID_length
        , &CThostFtdcSyncDeltaSPBMOptionParameterField_ProdFamilyCode, &CThostFtdcSyncDeltaSPBMOptionParameterField_ProdFamilyCode_length
        , &CThostFtdcSyncDeltaSPBMOptionParameterField_Cvf
        , &CThostFtdcSyncDeltaSPBMOptionParameterField_DownPrice
        , &CThostFtdcSyncDeltaSPBMOptionParameterField_Delta
        , &CThostFtdcSyncDeltaSPBMOptionParameterField_SlimiDelta
        , &CThostFtdcSyncDeltaSPBMOptionParameterField_PreSettlementPrice
        , &CThostFtdcSyncDeltaSPBMOptionParameterField_ActionDirection
        , &CThostFtdcSyncDeltaSPBMOptionParameterField_SyncDeltaSequenceNo
    )) {
        return -1;
    }

    PyCThostFtdcSyncDeltaSPBMOptionParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMOptionParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMOptionParameterField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcSyncDeltaSPBMOptionParameterField_TradingDay != NULL ) {
        if(CThostFtdcSyncDeltaSPBMOptionParameterField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaSPBMOptionParameterField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcSyncDeltaSPBMOptionParameterField_TradingDay, CThostFtdcSyncDeltaSPBMOptionParameterField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcSyncDeltaSPBMOptionParameterField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcSyncDeltaSPBMOptionParameterField_TradingDay = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcSyncDeltaSPBMOptionParameterField_ExchangeID != NULL ) {
        if(CThostFtdcSyncDeltaSPBMOptionParameterField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaSPBMOptionParameterField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcSyncDeltaSPBMOptionParameterField_ExchangeID, CThostFtdcSyncDeltaSPBMOptionParameterField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcSyncDeltaSPBMOptionParameterField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcSyncDeltaSPBMOptionParameterField_ExchangeID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSyncDeltaSPBMOptionParameterField_InstrumentID != NULL ) {
        if(CThostFtdcSyncDeltaSPBMOptionParameterField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcSyncDeltaSPBMOptionParameterField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcSyncDeltaSPBMOptionParameterField_InstrumentID, CThostFtdcSyncDeltaSPBMOptionParameterField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcSyncDeltaSPBMOptionParameterField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcSyncDeltaSPBMOptionParameterField_InstrumentID = NULL;
    }

    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSyncDeltaSPBMOptionParameterField_ProdFamilyCode != NULL ) {
        if(CThostFtdcSyncDeltaSPBMOptionParameterField_ProdFamilyCode_length >= (Py_ssize_t)sizeof(data->ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is 80)", CThostFtdcSyncDeltaSPBMOptionParameterField_ProdFamilyCode_length);
            return -1;
        }
        // memset(data->ProdFamilyCode, 0, sizeof(data->ProdFamilyCode));
        // memcpy(data->ProdFamilyCode, CThostFtdcSyncDeltaSPBMOptionParameterField_ProdFamilyCode, CThostFtdcSyncDeltaSPBMOptionParameterField_ProdFamilyCode_length);
        strncpy(data->ProdFamilyCode, CThostFtdcSyncDeltaSPBMOptionParameterField_ProdFamilyCode, sizeof(data->ProdFamilyCode));
        CThostFtdcSyncDeltaSPBMOptionParameterField_ProdFamilyCode = NULL;
    }

    /// 期权合约因子
    /// typedef int TThostFtdcVolumeMultipleType
    data->Cvf = CThostFtdcSyncDeltaSPBMOptionParameterField_Cvf;

    /// 期权冲抵价格
    /// typedef double TThostFtdcPriceType
    data->DownPrice = CThostFtdcSyncDeltaSPBMOptionParameterField_DownPrice;

    /// Delta值
    /// typedef double TThostFtdcDeltaType
    data->Delta = CThostFtdcSyncDeltaSPBMOptionParameterField_Delta;

    /// 卖方期权风险转换最低值
    /// typedef double TThostFtdcDeltaType
    data->SlimiDelta = CThostFtdcSyncDeltaSPBMOptionParameterField_SlimiDelta;

    /// 昨结算价
    /// typedef double TThostFtdcPriceType
    data->PreSettlementPrice = CThostFtdcSyncDeltaSPBMOptionParameterField_PreSettlementPrice;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    data->ActionDirection = CThostFtdcSyncDeltaSPBMOptionParameterField_ActionDirection;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    data->SyncDeltaSequenceNo = CThostFtdcSyncDeltaSPBMOptionParameterField_SyncDeltaSequenceNo;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncDeltaSPBMOptionParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMOptionParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMOptionParameterField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i,s:d,s:d,s:d,s:d,s:c,s:i}"
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "ProdFamilyCode", data->ProdFamilyCode//, (Py_ssize_t)sizeof(data->ProdFamilyCode)
        , "Cvf", data->Cvf
        , "DownPrice", data->DownPrice
        , "Delta", data->Delta
        , "SlimiDelta", data->SlimiDelta
        , "PreSettlementPrice", data->PreSettlementPrice
        , "ActionDirection", data->ActionDirection
        , "SyncDeltaSequenceNo", data->SyncDeltaSequenceNo
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaSPBMOptionParameterField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaSPBMOptionParameterField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaSPBMOptionParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMOptionParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMOptionParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaSPBMOptionParameterField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaSPBMOptionParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMOptionParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMOptionParameterField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaSPBMOptionParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMOptionParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMOptionParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaSPBMOptionParameterField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaSPBMOptionParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMOptionParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMOptionParameterField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaSPBMOptionParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMOptionParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMOptionParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaSPBMOptionParameterField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaSPBMOptionParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMOptionParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMOptionParameterField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 品种代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType_get_ProdFamilyCode(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaSPBMOptionParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMOptionParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMOptionParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProdFamilyCode, (Py_ssize_t)sizeof(data->ProdFamilyCode));
    return PyBytes_FromString(data->ProdFamilyCode);
}

static int PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType_set_ProdFamilyCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProdFamilyCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaSPBMOptionParameterField::ProdFamilyCode)) {
        PyErr_SetString(PyExc_ValueError, "ProdFamilyCode must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaSPBMOptionParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMOptionParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMOptionParameterField *data = &(extra->data);
    // memset(data->ProdFamilyCode, 0, sizeof(data->ProdFamilyCode));
    // memcpy(data->ProdFamilyCode, buf, len);
    strncpy(data->ProdFamilyCode, buf, sizeof(data->ProdFamilyCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionDirectionType
static PyObject *PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType_get_ActionDirection(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaSPBMOptionParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMOptionParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMOptionParameterField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionDirection), 1);
}

static int PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType_set_ActionDirection(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDirection Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaSPBMOptionParameterField::ActionDirection)) {
        PyErr_SetString(PyExc_ValueError, "ActionDirection must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaSPBMOptionParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMOptionParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMOptionParameterField *data = &(extra->data);
    data->ActionDirection = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType_members[] = {
    /// 期权合约因子
    /// typedef int TThostFtdcVolumeMultipleType
    {
        .name = "Cvf",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaSPBMOptionParameterFieldData, data.Cvf),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("期权合约因子")
    },
    /// 期权冲抵价格
    /// typedef double TThostFtdcPriceType
    {
        .name = "DownPrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaSPBMOptionParameterFieldData, data.DownPrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("期权冲抵价格")
    },
    /// Delta值
    /// typedef double TThostFtdcDeltaType
    {
        .name = "Delta",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaSPBMOptionParameterFieldData, data.Delta),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("Delta值")
    },
    /// 卖方期权风险转换最低值
    /// typedef double TThostFtdcDeltaType
    {
        .name = "SlimiDelta",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaSPBMOptionParameterFieldData, data.SlimiDelta),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("卖方期权风险转换最低值")
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
        .offset = offsetof(PyCThostFtdcSyncDeltaSPBMOptionParameterFieldData, data.PreSettlementPrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("昨结算价")
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
        .offset = offsetof(PyCThostFtdcSyncDeltaSPBMOptionParameterFieldData, data.SyncDeltaSequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("追平序号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType_get_TradingDay,
    .set = PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType_get_ExchangeID,
    .set = PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType_get_InstrumentID,
    .set = PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "ProdFamilyCode",
    .get = PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType_get_ProdFamilyCode,
    .set = PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType_set_ProdFamilyCode,
    .doc = PyDoc_STR("品种代码"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    {
    .name = "ActionDirection",
    .get = PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType_get_ActionDirection,
    .set = PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType_set_ActionDirection,
    .doc = PyDoc_STR("操作标志"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncDeltaSPBMOptionParameterField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("风险结算追平SPBM期权合约保证金参数")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncDeltaSPBMOptionParameterFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("风险结算追平SPBM期权合约保证金参数")},
    {Py_tp_members, PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncDeltaSPBMOptionParameterField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaSPBMOptionParameterFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaSPBMOptionParameterFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaSPBMOptionParameterField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaSPBMOptionParameterField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}