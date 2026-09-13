
#include "PyCThostFtdcSyncDeltaSPBMInterParameterField.h"

///风险结算追平SPBM跨品种抵扣参数

static int PyCThostFtdcSyncDeltaSPBMInterParameterFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "ExchangeID", "SpreadId", "InterRateZ", "Leg1ProdFamilyCode", "Leg2ProdFamilyCode", "ActionDirection", "SyncDeltaSequenceNo", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcSyncDeltaSPBMInterParameterField_TradingDay = NULL;
    Py_ssize_t CThostFtdcSyncDeltaSPBMInterParameterField_TradingDay_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcSyncDeltaSPBMInterParameterField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaSPBMInterParameterField_ExchangeID_length = 0;

    /// 优先级
    /// typedef int TThostFtdcSpreadIdType
    int CThostFtdcSyncDeltaSPBMInterParameterField_SpreadId = 0;

    /// 品种间对锁仓费率折扣比例
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncDeltaSPBMInterParameterField_InterRateZ = 0.0;

    /// 第一腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSyncDeltaSPBMInterParameterField_Leg1ProdFamilyCode = NULL;
    Py_ssize_t CThostFtdcSyncDeltaSPBMInterParameterField_Leg1ProdFamilyCode_length = 0;

    /// 第二腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSyncDeltaSPBMInterParameterField_Leg2ProdFamilyCode = NULL;
    Py_ssize_t CThostFtdcSyncDeltaSPBMInterParameterField_Leg2ProdFamilyCode_length = 0;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    char CThostFtdcSyncDeltaSPBMInterParameterField_ActionDirection = 0;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcSyncDeltaSPBMInterParameterField_SyncDeltaSequenceNo = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#idy#y#ci", (char **)kwlist
        , &CThostFtdcSyncDeltaSPBMInterParameterField_TradingDay, &CThostFtdcSyncDeltaSPBMInterParameterField_TradingDay_length
        , &CThostFtdcSyncDeltaSPBMInterParameterField_ExchangeID, &CThostFtdcSyncDeltaSPBMInterParameterField_ExchangeID_length
        , &CThostFtdcSyncDeltaSPBMInterParameterField_SpreadId
        , &CThostFtdcSyncDeltaSPBMInterParameterField_InterRateZ
        , &CThostFtdcSyncDeltaSPBMInterParameterField_Leg1ProdFamilyCode, &CThostFtdcSyncDeltaSPBMInterParameterField_Leg1ProdFamilyCode_length
        , &CThostFtdcSyncDeltaSPBMInterParameterField_Leg2ProdFamilyCode, &CThostFtdcSyncDeltaSPBMInterParameterField_Leg2ProdFamilyCode_length
        , &CThostFtdcSyncDeltaSPBMInterParameterField_ActionDirection
        , &CThostFtdcSyncDeltaSPBMInterParameterField_SyncDeltaSequenceNo
    )) {
        return -1;
    }

    PyCThostFtdcSyncDeltaSPBMInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMInterParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMInterParameterField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcSyncDeltaSPBMInterParameterField_TradingDay != NULL ) {
        if(CThostFtdcSyncDeltaSPBMInterParameterField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaSPBMInterParameterField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcSyncDeltaSPBMInterParameterField_TradingDay, CThostFtdcSyncDeltaSPBMInterParameterField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcSyncDeltaSPBMInterParameterField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcSyncDeltaSPBMInterParameterField_TradingDay = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcSyncDeltaSPBMInterParameterField_ExchangeID != NULL ) {
        if(CThostFtdcSyncDeltaSPBMInterParameterField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaSPBMInterParameterField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcSyncDeltaSPBMInterParameterField_ExchangeID, CThostFtdcSyncDeltaSPBMInterParameterField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcSyncDeltaSPBMInterParameterField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcSyncDeltaSPBMInterParameterField_ExchangeID = NULL;
    }

    /// 优先级
    /// typedef int TThostFtdcSpreadIdType
    data->SpreadId = CThostFtdcSyncDeltaSPBMInterParameterField_SpreadId;

    /// 品种间对锁仓费率折扣比例
    /// typedef double TThostFtdcRatioType
    data->InterRateZ = CThostFtdcSyncDeltaSPBMInterParameterField_InterRateZ;

    /// 第一腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSyncDeltaSPBMInterParameterField_Leg1ProdFamilyCode != NULL ) {
        if(CThostFtdcSyncDeltaSPBMInterParameterField_Leg1ProdFamilyCode_length >= (Py_ssize_t)sizeof(data->Leg1ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "Leg1ProdFamilyCode too long: length=%zd (max allowed is 80)", CThostFtdcSyncDeltaSPBMInterParameterField_Leg1ProdFamilyCode_length);
            return -1;
        }
        // memset(data->Leg1ProdFamilyCode, 0, sizeof(data->Leg1ProdFamilyCode));
        // memcpy(data->Leg1ProdFamilyCode, CThostFtdcSyncDeltaSPBMInterParameterField_Leg1ProdFamilyCode, CThostFtdcSyncDeltaSPBMInterParameterField_Leg1ProdFamilyCode_length);
        strncpy(data->Leg1ProdFamilyCode, CThostFtdcSyncDeltaSPBMInterParameterField_Leg1ProdFamilyCode, sizeof(data->Leg1ProdFamilyCode));
        CThostFtdcSyncDeltaSPBMInterParameterField_Leg1ProdFamilyCode = NULL;
    }

    /// 第二腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSyncDeltaSPBMInterParameterField_Leg2ProdFamilyCode != NULL ) {
        if(CThostFtdcSyncDeltaSPBMInterParameterField_Leg2ProdFamilyCode_length >= (Py_ssize_t)sizeof(data->Leg2ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "Leg2ProdFamilyCode too long: length=%zd (max allowed is 80)", CThostFtdcSyncDeltaSPBMInterParameterField_Leg2ProdFamilyCode_length);
            return -1;
        }
        // memset(data->Leg2ProdFamilyCode, 0, sizeof(data->Leg2ProdFamilyCode));
        // memcpy(data->Leg2ProdFamilyCode, CThostFtdcSyncDeltaSPBMInterParameterField_Leg2ProdFamilyCode, CThostFtdcSyncDeltaSPBMInterParameterField_Leg2ProdFamilyCode_length);
        strncpy(data->Leg2ProdFamilyCode, CThostFtdcSyncDeltaSPBMInterParameterField_Leg2ProdFamilyCode, sizeof(data->Leg2ProdFamilyCode));
        CThostFtdcSyncDeltaSPBMInterParameterField_Leg2ProdFamilyCode = NULL;
    }

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    data->ActionDirection = CThostFtdcSyncDeltaSPBMInterParameterField_ActionDirection;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    data->SyncDeltaSequenceNo = CThostFtdcSyncDeltaSPBMInterParameterField_SyncDeltaSequenceNo;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncDeltaSPBMInterParameterFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncDeltaSPBMInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMInterParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMInterParameterField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:i,s:d,s:y,s:y,s:c,s:i}"
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "SpreadId", data->SpreadId
        , "InterRateZ", data->InterRateZ
        , "Leg1ProdFamilyCode", data->Leg1ProdFamilyCode//, (Py_ssize_t)sizeof(data->Leg1ProdFamilyCode)
        , "Leg2ProdFamilyCode", data->Leg2ProdFamilyCode//, (Py_ssize_t)sizeof(data->Leg2ProdFamilyCode)
        , "ActionDirection", data->ActionDirection
        , "SyncDeltaSequenceNo", data->SyncDeltaSequenceNo
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaSPBMInterParameterField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaSPBMInterParameterField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcSyncDeltaSPBMInterParameterFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaSPBMInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMInterParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMInterParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcSyncDeltaSPBMInterParameterFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaSPBMInterParameterField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaSPBMInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMInterParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMInterParameterField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcSyncDeltaSPBMInterParameterFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaSPBMInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMInterParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMInterParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcSyncDeltaSPBMInterParameterFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaSPBMInterParameterField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaSPBMInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMInterParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMInterParameterField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 第一腿构成品种
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSyncDeltaSPBMInterParameterFieldType_get_Leg1ProdFamilyCode(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaSPBMInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMInterParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMInterParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Leg1ProdFamilyCode, (Py_ssize_t)sizeof(data->Leg1ProdFamilyCode));
    return PyBytes_FromString(data->Leg1ProdFamilyCode);
}

static int PyCThostFtdcSyncDeltaSPBMInterParameterFieldType_set_Leg1ProdFamilyCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Leg1ProdFamilyCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaSPBMInterParameterField::Leg1ProdFamilyCode)) {
        PyErr_SetString(PyExc_ValueError, "Leg1ProdFamilyCode must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaSPBMInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMInterParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMInterParameterField *data = &(extra->data);
    // memset(data->Leg1ProdFamilyCode, 0, sizeof(data->Leg1ProdFamilyCode));
    // memcpy(data->Leg1ProdFamilyCode, buf, len);
    strncpy(data->Leg1ProdFamilyCode, buf, sizeof(data->Leg1ProdFamilyCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 第二腿构成品种
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSyncDeltaSPBMInterParameterFieldType_get_Leg2ProdFamilyCode(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaSPBMInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMInterParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMInterParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Leg2ProdFamilyCode, (Py_ssize_t)sizeof(data->Leg2ProdFamilyCode));
    return PyBytes_FromString(data->Leg2ProdFamilyCode);
}

static int PyCThostFtdcSyncDeltaSPBMInterParameterFieldType_set_Leg2ProdFamilyCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Leg2ProdFamilyCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaSPBMInterParameterField::Leg2ProdFamilyCode)) {
        PyErr_SetString(PyExc_ValueError, "Leg2ProdFamilyCode must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaSPBMInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMInterParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMInterParameterField *data = &(extra->data);
    // memset(data->Leg2ProdFamilyCode, 0, sizeof(data->Leg2ProdFamilyCode));
    // memcpy(data->Leg2ProdFamilyCode, buf, len);
    strncpy(data->Leg2ProdFamilyCode, buf, sizeof(data->Leg2ProdFamilyCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionDirectionType
static PyObject *PyCThostFtdcSyncDeltaSPBMInterParameterFieldType_get_ActionDirection(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaSPBMInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMInterParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMInterParameterField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionDirection), 1);
}

static int PyCThostFtdcSyncDeltaSPBMInterParameterFieldType_set_ActionDirection(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDirection Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaSPBMInterParameterField::ActionDirection)) {
        PyErr_SetString(PyExc_ValueError, "ActionDirection must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaSPBMInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMInterParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMInterParameterField *data = &(extra->data);
    data->ActionDirection = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncDeltaSPBMInterParameterFieldType_members[] = {
    /// 优先级
    /// typedef int TThostFtdcSpreadIdType
    {
        .name = "SpreadId",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaSPBMInterParameterFieldData, data.SpreadId),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("优先级")
    },
    /// 品种间对锁仓费率折扣比例
    /// typedef double TThostFtdcRatioType
    {
        .name = "InterRateZ",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaSPBMInterParameterFieldData, data.InterRateZ),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("品种间对锁仓费率折扣比例")
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
        .offset = offsetof(PyCThostFtdcSyncDeltaSPBMInterParameterFieldData, data.SyncDeltaSequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("追平序号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncDeltaSPBMInterParameterFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcSyncDeltaSPBMInterParameterFieldType_get_TradingDay,
    .set = PyCThostFtdcSyncDeltaSPBMInterParameterFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcSyncDeltaSPBMInterParameterFieldType_get_ExchangeID,
    .set = PyCThostFtdcSyncDeltaSPBMInterParameterFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 第一腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "Leg1ProdFamilyCode",
    .get = PyCThostFtdcSyncDeltaSPBMInterParameterFieldType_get_Leg1ProdFamilyCode,
    .set = PyCThostFtdcSyncDeltaSPBMInterParameterFieldType_set_Leg1ProdFamilyCode,
    .doc = PyDoc_STR("第一腿构成品种"),
    },
    /// 第二腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "Leg2ProdFamilyCode",
    .get = PyCThostFtdcSyncDeltaSPBMInterParameterFieldType_get_Leg2ProdFamilyCode,
    .set = PyCThostFtdcSyncDeltaSPBMInterParameterFieldType_set_Leg2ProdFamilyCode,
    .doc = PyDoc_STR("第二腿构成品种"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    {
    .name = "ActionDirection",
    .get = PyCThostFtdcSyncDeltaSPBMInterParameterFieldType_get_ActionDirection,
    .set = PyCThostFtdcSyncDeltaSPBMInterParameterFieldType_set_ActionDirection,
    .doc = PyDoc_STR("操作标志"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncDeltaSPBMInterParameterFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncDeltaSPBMInterParameterField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("风险结算追平SPBM跨品种抵扣参数")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncDeltaSPBMInterParameterFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncDeltaSPBMInterParameterFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncDeltaSPBMInterParameterFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncDeltaSPBMInterParameterFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncDeltaSPBMInterParameterFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncDeltaSPBMInterParameterFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("风险结算追平SPBM跨品种抵扣参数")},
    {Py_tp_members, PyCThostFtdcSyncDeltaSPBMInterParameterFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncDeltaSPBMInterParameterFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncDeltaSPBMInterParameterFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncDeltaSPBMInterParameterFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncDeltaSPBMInterParameterFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncDeltaSPBMInterParameterField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaSPBMInterParameterFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaSPBMInterParameterFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncDeltaSPBMInterParameterFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncDeltaSPBMInterParameterFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncDeltaSPBMInterParameterFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncDeltaSPBMInterParameterFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncDeltaSPBMInterParameterFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncDeltaSPBMInterParameterFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaSPBMInterParameterField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaSPBMInterParameterField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}