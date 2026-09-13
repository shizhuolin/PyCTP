
#include "PyCThostFtdcSyncDeltaRULEIntraParameterField.h"

///风险结算追平RULE品种内对锁仓折扣参数

static int PyCThostFtdcSyncDeltaRULEIntraParameterFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "ExchangeID", "ProdFamilyCode", "StdInstrumentID", "StdInstrMargin", "UsualIntraRate", "DeliveryIntraRate", "ActionDirection", "SyncDeltaSequenceNo", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcSyncDeltaRULEIntraParameterField_TradingDay = NULL;
    Py_ssize_t CThostFtdcSyncDeltaRULEIntraParameterField_TradingDay_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcSyncDeltaRULEIntraParameterField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaRULEIntraParameterField_ExchangeID_length = 0;

    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSyncDeltaRULEIntraParameterField_ProdFamilyCode = NULL;
    Py_ssize_t CThostFtdcSyncDeltaRULEIntraParameterField_ProdFamilyCode_length = 0;

    /// 标准合约
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSyncDeltaRULEIntraParameterField_StdInstrumentID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaRULEIntraParameterField_StdInstrumentID_length = 0;

    /// 标准合约保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaRULEIntraParameterField_StdInstrMargin = 0.0;

    /// 一般月份合约组合保证金系数
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncDeltaRULEIntraParameterField_UsualIntraRate = 0.0;

    /// 临近交割合约组合保证金系数
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncDeltaRULEIntraParameterField_DeliveryIntraRate = 0.0;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    char CThostFtdcSyncDeltaRULEIntraParameterField_ActionDirection = 0;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcSyncDeltaRULEIntraParameterField_SyncDeltaSequenceNo = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#dddci", (char **)kwlist
        , &CThostFtdcSyncDeltaRULEIntraParameterField_TradingDay, &CThostFtdcSyncDeltaRULEIntraParameterField_TradingDay_length
        , &CThostFtdcSyncDeltaRULEIntraParameterField_ExchangeID, &CThostFtdcSyncDeltaRULEIntraParameterField_ExchangeID_length
        , &CThostFtdcSyncDeltaRULEIntraParameterField_ProdFamilyCode, &CThostFtdcSyncDeltaRULEIntraParameterField_ProdFamilyCode_length
        , &CThostFtdcSyncDeltaRULEIntraParameterField_StdInstrumentID, &CThostFtdcSyncDeltaRULEIntraParameterField_StdInstrumentID_length
        , &CThostFtdcSyncDeltaRULEIntraParameterField_StdInstrMargin
        , &CThostFtdcSyncDeltaRULEIntraParameterField_UsualIntraRate
        , &CThostFtdcSyncDeltaRULEIntraParameterField_DeliveryIntraRate
        , &CThostFtdcSyncDeltaRULEIntraParameterField_ActionDirection
        , &CThostFtdcSyncDeltaRULEIntraParameterField_SyncDeltaSequenceNo
    )) {
        return -1;
    }

    PyCThostFtdcSyncDeltaRULEIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRULEIntraParameterFieldData>(self);
    CThostFtdcSyncDeltaRULEIntraParameterField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcSyncDeltaRULEIntraParameterField_TradingDay != NULL ) {
        if(CThostFtdcSyncDeltaRULEIntraParameterField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaRULEIntraParameterField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcSyncDeltaRULEIntraParameterField_TradingDay, CThostFtdcSyncDeltaRULEIntraParameterField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcSyncDeltaRULEIntraParameterField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcSyncDeltaRULEIntraParameterField_TradingDay = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcSyncDeltaRULEIntraParameterField_ExchangeID != NULL ) {
        if(CThostFtdcSyncDeltaRULEIntraParameterField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaRULEIntraParameterField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcSyncDeltaRULEIntraParameterField_ExchangeID, CThostFtdcSyncDeltaRULEIntraParameterField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcSyncDeltaRULEIntraParameterField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcSyncDeltaRULEIntraParameterField_ExchangeID = NULL;
    }

    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSyncDeltaRULEIntraParameterField_ProdFamilyCode != NULL ) {
        if(CThostFtdcSyncDeltaRULEIntraParameterField_ProdFamilyCode_length >= (Py_ssize_t)sizeof(data->ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is 80)", CThostFtdcSyncDeltaRULEIntraParameterField_ProdFamilyCode_length);
            return -1;
        }
        // memset(data->ProdFamilyCode, 0, sizeof(data->ProdFamilyCode));
        // memcpy(data->ProdFamilyCode, CThostFtdcSyncDeltaRULEIntraParameterField_ProdFamilyCode, CThostFtdcSyncDeltaRULEIntraParameterField_ProdFamilyCode_length);
        strncpy(data->ProdFamilyCode, CThostFtdcSyncDeltaRULEIntraParameterField_ProdFamilyCode, sizeof(data->ProdFamilyCode));
        CThostFtdcSyncDeltaRULEIntraParameterField_ProdFamilyCode = NULL;
    }

    /// 标准合约
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSyncDeltaRULEIntraParameterField_StdInstrumentID != NULL ) {
        if(CThostFtdcSyncDeltaRULEIntraParameterField_StdInstrumentID_length >= (Py_ssize_t)sizeof(data->StdInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "StdInstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcSyncDeltaRULEIntraParameterField_StdInstrumentID_length);
            return -1;
        }
        // memset(data->StdInstrumentID, 0, sizeof(data->StdInstrumentID));
        // memcpy(data->StdInstrumentID, CThostFtdcSyncDeltaRULEIntraParameterField_StdInstrumentID, CThostFtdcSyncDeltaRULEIntraParameterField_StdInstrumentID_length);
        strncpy(data->StdInstrumentID, CThostFtdcSyncDeltaRULEIntraParameterField_StdInstrumentID, sizeof(data->StdInstrumentID));
        CThostFtdcSyncDeltaRULEIntraParameterField_StdInstrumentID = NULL;
    }

    /// 标准合约保证金
    /// typedef double TThostFtdcMoneyType
    data->StdInstrMargin = CThostFtdcSyncDeltaRULEIntraParameterField_StdInstrMargin;

    /// 一般月份合约组合保证金系数
    /// typedef double TThostFtdcRatioType
    data->UsualIntraRate = CThostFtdcSyncDeltaRULEIntraParameterField_UsualIntraRate;

    /// 临近交割合约组合保证金系数
    /// typedef double TThostFtdcRatioType
    data->DeliveryIntraRate = CThostFtdcSyncDeltaRULEIntraParameterField_DeliveryIntraRate;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    data->ActionDirection = CThostFtdcSyncDeltaRULEIntraParameterField_ActionDirection;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    data->SyncDeltaSequenceNo = CThostFtdcSyncDeltaRULEIntraParameterField_SyncDeltaSequenceNo;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncDeltaRULEIntraParameterFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncDeltaRULEIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRULEIntraParameterFieldData>(self);
    CThostFtdcSyncDeltaRULEIntraParameterField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:d,s:d,s:d,s:c,s:i}"
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ProdFamilyCode", data->ProdFamilyCode//, (Py_ssize_t)sizeof(data->ProdFamilyCode)
        , "StdInstrumentID", data->StdInstrumentID//, (Py_ssize_t)sizeof(data->StdInstrumentID)
        , "StdInstrMargin", data->StdInstrMargin
        , "UsualIntraRate", data->UsualIntraRate
        , "DeliveryIntraRate", data->DeliveryIntraRate
        , "ActionDirection", data->ActionDirection
        , "SyncDeltaSequenceNo", data->SyncDeltaSequenceNo
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaRULEIntraParameterField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaRULEIntraParameterField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcSyncDeltaRULEIntraParameterFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRULEIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRULEIntraParameterFieldData>(self);
    CThostFtdcSyncDeltaRULEIntraParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcSyncDeltaRULEIntraParameterFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRULEIntraParameterField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRULEIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRULEIntraParameterFieldData>(self);
    CThostFtdcSyncDeltaRULEIntraParameterField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcSyncDeltaRULEIntraParameterFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRULEIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRULEIntraParameterFieldData>(self);
    CThostFtdcSyncDeltaRULEIntraParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcSyncDeltaRULEIntraParameterFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRULEIntraParameterField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRULEIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRULEIntraParameterFieldData>(self);
    CThostFtdcSyncDeltaRULEIntraParameterField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 品种代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSyncDeltaRULEIntraParameterFieldType_get_ProdFamilyCode(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRULEIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRULEIntraParameterFieldData>(self);
    CThostFtdcSyncDeltaRULEIntraParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProdFamilyCode, (Py_ssize_t)sizeof(data->ProdFamilyCode));
    return PyBytes_FromString(data->ProdFamilyCode);
}

static int PyCThostFtdcSyncDeltaRULEIntraParameterFieldType_set_ProdFamilyCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProdFamilyCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRULEIntraParameterField::ProdFamilyCode)) {
        PyErr_SetString(PyExc_ValueError, "ProdFamilyCode must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRULEIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRULEIntraParameterFieldData>(self);
    CThostFtdcSyncDeltaRULEIntraParameterField *data = &(extra->data);
    // memset(data->ProdFamilyCode, 0, sizeof(data->ProdFamilyCode));
    // memcpy(data->ProdFamilyCode, buf, len);
    strncpy(data->ProdFamilyCode, buf, sizeof(data->ProdFamilyCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 标准合约
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSyncDeltaRULEIntraParameterFieldType_get_StdInstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRULEIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRULEIntraParameterFieldData>(self);
    CThostFtdcSyncDeltaRULEIntraParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->StdInstrumentID, (Py_ssize_t)sizeof(data->StdInstrumentID));
    return PyBytes_FromString(data->StdInstrumentID);
}

static int PyCThostFtdcSyncDeltaRULEIntraParameterFieldType_set_StdInstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "StdInstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRULEIntraParameterField::StdInstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "StdInstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRULEIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRULEIntraParameterFieldData>(self);
    CThostFtdcSyncDeltaRULEIntraParameterField *data = &(extra->data);
    // memset(data->StdInstrumentID, 0, sizeof(data->StdInstrumentID));
    // memcpy(data->StdInstrumentID, buf, len);
    strncpy(data->StdInstrumentID, buf, sizeof(data->StdInstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionDirectionType
static PyObject *PyCThostFtdcSyncDeltaRULEIntraParameterFieldType_get_ActionDirection(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRULEIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRULEIntraParameterFieldData>(self);
    CThostFtdcSyncDeltaRULEIntraParameterField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionDirection), 1);
}

static int PyCThostFtdcSyncDeltaRULEIntraParameterFieldType_set_ActionDirection(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDirection Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRULEIntraParameterField::ActionDirection)) {
        PyErr_SetString(PyExc_ValueError, "ActionDirection must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRULEIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRULEIntraParameterFieldData>(self);
    CThostFtdcSyncDeltaRULEIntraParameterField *data = &(extra->data);
    data->ActionDirection = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncDeltaRULEIntraParameterFieldType_members[] = {
    /// 标准合约保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "StdInstrMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaRULEIntraParameterFieldData, data.StdInstrMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("标准合约保证金")
    },
    /// 一般月份合约组合保证金系数
    /// typedef double TThostFtdcRatioType
    {
        .name = "UsualIntraRate",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaRULEIntraParameterFieldData, data.UsualIntraRate),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("一般月份合约组合保证金系数")
    },
    /// 临近交割合约组合保证金系数
    /// typedef double TThostFtdcRatioType
    {
        .name = "DeliveryIntraRate",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaRULEIntraParameterFieldData, data.DeliveryIntraRate),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("临近交割合约组合保证金系数")
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
        .offset = offsetof(PyCThostFtdcSyncDeltaRULEIntraParameterFieldData, data.SyncDeltaSequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("追平序号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncDeltaRULEIntraParameterFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcSyncDeltaRULEIntraParameterFieldType_get_TradingDay,
    .set = PyCThostFtdcSyncDeltaRULEIntraParameterFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcSyncDeltaRULEIntraParameterFieldType_get_ExchangeID,
    .set = PyCThostFtdcSyncDeltaRULEIntraParameterFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "ProdFamilyCode",
    .get = PyCThostFtdcSyncDeltaRULEIntraParameterFieldType_get_ProdFamilyCode,
    .set = PyCThostFtdcSyncDeltaRULEIntraParameterFieldType_set_ProdFamilyCode,
    .doc = PyDoc_STR("品种代码"),
    },
    /// 标准合约
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "StdInstrumentID",
    .get = PyCThostFtdcSyncDeltaRULEIntraParameterFieldType_get_StdInstrumentID,
    .set = PyCThostFtdcSyncDeltaRULEIntraParameterFieldType_set_StdInstrumentID,
    .doc = PyDoc_STR("标准合约"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    {
    .name = "ActionDirection",
    .get = PyCThostFtdcSyncDeltaRULEIntraParameterFieldType_get_ActionDirection,
    .set = PyCThostFtdcSyncDeltaRULEIntraParameterFieldType_set_ActionDirection,
    .doc = PyDoc_STR("操作标志"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncDeltaRULEIntraParameterFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncDeltaRULEIntraParameterField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("风险结算追平RULE品种内对锁仓折扣参数")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncDeltaRULEIntraParameterFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncDeltaRULEIntraParameterFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncDeltaRULEIntraParameterFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncDeltaRULEIntraParameterFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncDeltaRULEIntraParameterFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncDeltaRULEIntraParameterFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("风险结算追平RULE品种内对锁仓折扣参数")},
    {Py_tp_members, PyCThostFtdcSyncDeltaRULEIntraParameterFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncDeltaRULEIntraParameterFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncDeltaRULEIntraParameterFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncDeltaRULEIntraParameterFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncDeltaRULEIntraParameterFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncDeltaRULEIntraParameterField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaRULEIntraParameterFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaRULEIntraParameterFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncDeltaRULEIntraParameterFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncDeltaRULEIntraParameterFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncDeltaRULEIntraParameterFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncDeltaRULEIntraParameterFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncDeltaRULEIntraParameterFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncDeltaRULEIntraParameterFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaRULEIntraParameterField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaRULEIntraParameterField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}