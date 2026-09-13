
#include "PyCThostFtdcSyncDeltaSPBMAddOnInterParamField.h"

///风险结算追平SPBM附加跨品种抵扣参数

static int PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "ExchangeID", "SpreadId", "AddOnInterRateZ2", "Leg1ProdFamilyCode", "Leg2ProdFamilyCode", "ActionDirection", "SyncDeltaSequenceNo", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcSyncDeltaSPBMAddOnInterParamField_TradingDay = NULL;
    Py_ssize_t CThostFtdcSyncDeltaSPBMAddOnInterParamField_TradingDay_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcSyncDeltaSPBMAddOnInterParamField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaSPBMAddOnInterParamField_ExchangeID_length = 0;

    /// 优先级
    /// typedef int TThostFtdcSpreadIdType
    int CThostFtdcSyncDeltaSPBMAddOnInterParamField_SpreadId = 0;

    /// 品种间对锁仓附加费率折扣比例
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncDeltaSPBMAddOnInterParamField_AddOnInterRateZ2 = 0.0;

    /// 第一腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSyncDeltaSPBMAddOnInterParamField_Leg1ProdFamilyCode = NULL;
    Py_ssize_t CThostFtdcSyncDeltaSPBMAddOnInterParamField_Leg1ProdFamilyCode_length = 0;

    /// 第二腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSyncDeltaSPBMAddOnInterParamField_Leg2ProdFamilyCode = NULL;
    Py_ssize_t CThostFtdcSyncDeltaSPBMAddOnInterParamField_Leg2ProdFamilyCode_length = 0;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    char CThostFtdcSyncDeltaSPBMAddOnInterParamField_ActionDirection = 0;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcSyncDeltaSPBMAddOnInterParamField_SyncDeltaSequenceNo = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#idy#y#ci", (char **)kwlist
        , &CThostFtdcSyncDeltaSPBMAddOnInterParamField_TradingDay, &CThostFtdcSyncDeltaSPBMAddOnInterParamField_TradingDay_length
        , &CThostFtdcSyncDeltaSPBMAddOnInterParamField_ExchangeID, &CThostFtdcSyncDeltaSPBMAddOnInterParamField_ExchangeID_length
        , &CThostFtdcSyncDeltaSPBMAddOnInterParamField_SpreadId
        , &CThostFtdcSyncDeltaSPBMAddOnInterParamField_AddOnInterRateZ2
        , &CThostFtdcSyncDeltaSPBMAddOnInterParamField_Leg1ProdFamilyCode, &CThostFtdcSyncDeltaSPBMAddOnInterParamField_Leg1ProdFamilyCode_length
        , &CThostFtdcSyncDeltaSPBMAddOnInterParamField_Leg2ProdFamilyCode, &CThostFtdcSyncDeltaSPBMAddOnInterParamField_Leg2ProdFamilyCode_length
        , &CThostFtdcSyncDeltaSPBMAddOnInterParamField_ActionDirection
        , &CThostFtdcSyncDeltaSPBMAddOnInterParamField_SyncDeltaSequenceNo
    )) {
        return -1;
    }

    PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldData>(self);
    CThostFtdcSyncDeltaSPBMAddOnInterParamField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcSyncDeltaSPBMAddOnInterParamField_TradingDay != NULL ) {
        if(CThostFtdcSyncDeltaSPBMAddOnInterParamField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaSPBMAddOnInterParamField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcSyncDeltaSPBMAddOnInterParamField_TradingDay, CThostFtdcSyncDeltaSPBMAddOnInterParamField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcSyncDeltaSPBMAddOnInterParamField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcSyncDeltaSPBMAddOnInterParamField_TradingDay = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcSyncDeltaSPBMAddOnInterParamField_ExchangeID != NULL ) {
        if(CThostFtdcSyncDeltaSPBMAddOnInterParamField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaSPBMAddOnInterParamField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcSyncDeltaSPBMAddOnInterParamField_ExchangeID, CThostFtdcSyncDeltaSPBMAddOnInterParamField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcSyncDeltaSPBMAddOnInterParamField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcSyncDeltaSPBMAddOnInterParamField_ExchangeID = NULL;
    }

    /// 优先级
    /// typedef int TThostFtdcSpreadIdType
    data->SpreadId = CThostFtdcSyncDeltaSPBMAddOnInterParamField_SpreadId;

    /// 品种间对锁仓附加费率折扣比例
    /// typedef double TThostFtdcRatioType
    data->AddOnInterRateZ2 = CThostFtdcSyncDeltaSPBMAddOnInterParamField_AddOnInterRateZ2;

    /// 第一腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSyncDeltaSPBMAddOnInterParamField_Leg1ProdFamilyCode != NULL ) {
        if(CThostFtdcSyncDeltaSPBMAddOnInterParamField_Leg1ProdFamilyCode_length >= (Py_ssize_t)sizeof(data->Leg1ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "Leg1ProdFamilyCode too long: length=%zd (max allowed is 80)", CThostFtdcSyncDeltaSPBMAddOnInterParamField_Leg1ProdFamilyCode_length);
            return -1;
        }
        // memset(data->Leg1ProdFamilyCode, 0, sizeof(data->Leg1ProdFamilyCode));
        // memcpy(data->Leg1ProdFamilyCode, CThostFtdcSyncDeltaSPBMAddOnInterParamField_Leg1ProdFamilyCode, CThostFtdcSyncDeltaSPBMAddOnInterParamField_Leg1ProdFamilyCode_length);
        strncpy(data->Leg1ProdFamilyCode, CThostFtdcSyncDeltaSPBMAddOnInterParamField_Leg1ProdFamilyCode, sizeof(data->Leg1ProdFamilyCode));
        CThostFtdcSyncDeltaSPBMAddOnInterParamField_Leg1ProdFamilyCode = NULL;
    }

    /// 第二腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSyncDeltaSPBMAddOnInterParamField_Leg2ProdFamilyCode != NULL ) {
        if(CThostFtdcSyncDeltaSPBMAddOnInterParamField_Leg2ProdFamilyCode_length >= (Py_ssize_t)sizeof(data->Leg2ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "Leg2ProdFamilyCode too long: length=%zd (max allowed is 80)", CThostFtdcSyncDeltaSPBMAddOnInterParamField_Leg2ProdFamilyCode_length);
            return -1;
        }
        // memset(data->Leg2ProdFamilyCode, 0, sizeof(data->Leg2ProdFamilyCode));
        // memcpy(data->Leg2ProdFamilyCode, CThostFtdcSyncDeltaSPBMAddOnInterParamField_Leg2ProdFamilyCode, CThostFtdcSyncDeltaSPBMAddOnInterParamField_Leg2ProdFamilyCode_length);
        strncpy(data->Leg2ProdFamilyCode, CThostFtdcSyncDeltaSPBMAddOnInterParamField_Leg2ProdFamilyCode, sizeof(data->Leg2ProdFamilyCode));
        CThostFtdcSyncDeltaSPBMAddOnInterParamField_Leg2ProdFamilyCode = NULL;
    }

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    data->ActionDirection = CThostFtdcSyncDeltaSPBMAddOnInterParamField_ActionDirection;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    data->SyncDeltaSequenceNo = CThostFtdcSyncDeltaSPBMAddOnInterParamField_SyncDeltaSequenceNo;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldData>(self);
    CThostFtdcSyncDeltaSPBMAddOnInterParamField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:i,s:d,s:y,s:y,s:c,s:i}"
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "SpreadId", data->SpreadId
        , "AddOnInterRateZ2", data->AddOnInterRateZ2
        , "Leg1ProdFamilyCode", data->Leg1ProdFamilyCode//, (Py_ssize_t)sizeof(data->Leg1ProdFamilyCode)
        , "Leg2ProdFamilyCode", data->Leg2ProdFamilyCode//, (Py_ssize_t)sizeof(data->Leg2ProdFamilyCode)
        , "ActionDirection", data->ActionDirection
        , "SyncDeltaSequenceNo", data->SyncDeltaSequenceNo
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaSPBMAddOnInterParamField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaSPBMAddOnInterParamField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldData>(self);
    CThostFtdcSyncDeltaSPBMAddOnInterParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaSPBMAddOnInterParamField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldData>(self);
    CThostFtdcSyncDeltaSPBMAddOnInterParamField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldData>(self);
    CThostFtdcSyncDeltaSPBMAddOnInterParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaSPBMAddOnInterParamField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldData>(self);
    CThostFtdcSyncDeltaSPBMAddOnInterParamField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 第一腿构成品种
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType_get_Leg1ProdFamilyCode(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldData>(self);
    CThostFtdcSyncDeltaSPBMAddOnInterParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Leg1ProdFamilyCode, (Py_ssize_t)sizeof(data->Leg1ProdFamilyCode));
    return PyBytes_FromString(data->Leg1ProdFamilyCode);
}

static int PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType_set_Leg1ProdFamilyCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Leg1ProdFamilyCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaSPBMAddOnInterParamField::Leg1ProdFamilyCode)) {
        PyErr_SetString(PyExc_ValueError, "Leg1ProdFamilyCode must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldData>(self);
    CThostFtdcSyncDeltaSPBMAddOnInterParamField *data = &(extra->data);
    // memset(data->Leg1ProdFamilyCode, 0, sizeof(data->Leg1ProdFamilyCode));
    // memcpy(data->Leg1ProdFamilyCode, buf, len);
    strncpy(data->Leg1ProdFamilyCode, buf, sizeof(data->Leg1ProdFamilyCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 第二腿构成品种
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType_get_Leg2ProdFamilyCode(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldData>(self);
    CThostFtdcSyncDeltaSPBMAddOnInterParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Leg2ProdFamilyCode, (Py_ssize_t)sizeof(data->Leg2ProdFamilyCode));
    return PyBytes_FromString(data->Leg2ProdFamilyCode);
}

static int PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType_set_Leg2ProdFamilyCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Leg2ProdFamilyCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaSPBMAddOnInterParamField::Leg2ProdFamilyCode)) {
        PyErr_SetString(PyExc_ValueError, "Leg2ProdFamilyCode must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldData>(self);
    CThostFtdcSyncDeltaSPBMAddOnInterParamField *data = &(extra->data);
    // memset(data->Leg2ProdFamilyCode, 0, sizeof(data->Leg2ProdFamilyCode));
    // memcpy(data->Leg2ProdFamilyCode, buf, len);
    strncpy(data->Leg2ProdFamilyCode, buf, sizeof(data->Leg2ProdFamilyCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionDirectionType
static PyObject *PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType_get_ActionDirection(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldData>(self);
    CThostFtdcSyncDeltaSPBMAddOnInterParamField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionDirection), 1);
}

static int PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType_set_ActionDirection(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDirection Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaSPBMAddOnInterParamField::ActionDirection)) {
        PyErr_SetString(PyExc_ValueError, "ActionDirection must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldData>(self);
    CThostFtdcSyncDeltaSPBMAddOnInterParamField *data = &(extra->data);
    data->ActionDirection = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType_members[] = {
    /// 优先级
    /// typedef int TThostFtdcSpreadIdType
    {
        .name = "SpreadId",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldData, data.SpreadId),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("优先级")
    },
    /// 品种间对锁仓附加费率折扣比例
    /// typedef double TThostFtdcRatioType
    {
        .name = "AddOnInterRateZ2",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldData, data.AddOnInterRateZ2),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("品种间对锁仓附加费率折扣比例")
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
        .offset = offsetof(PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldData, data.SyncDeltaSequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("追平序号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType_get_TradingDay,
    .set = PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType_get_ExchangeID,
    .set = PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 第一腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "Leg1ProdFamilyCode",
    .get = PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType_get_Leg1ProdFamilyCode,
    .set = PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType_set_Leg1ProdFamilyCode,
    .doc = PyDoc_STR("第一腿构成品种"),
    },
    /// 第二腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "Leg2ProdFamilyCode",
    .get = PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType_get_Leg2ProdFamilyCode,
    .set = PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType_set_Leg2ProdFamilyCode,
    .doc = PyDoc_STR("第二腿构成品种"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    {
    .name = "ActionDirection",
    .get = PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType_get_ActionDirection,
    .set = PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType_set_ActionDirection,
    .doc = PyDoc_STR("操作标志"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncDeltaSPBMAddOnInterParamField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("风险结算追平SPBM附加跨品种抵扣参数")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("风险结算追平SPBM附加跨品种抵扣参数")},
    {Py_tp_members, PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncDeltaSPBMAddOnInterParamField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaSPBMAddOnInterParamField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaSPBMAddOnInterParamField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}