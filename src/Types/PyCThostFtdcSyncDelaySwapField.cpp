
#include "PyCThostFtdcSyncDelaySwapField.h"

///延时换汇同步

static int PyCThostFtdcSyncDelaySwapFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "DelaySwapSeqNo", "BrokerID", "InvestorID", "FromCurrencyID", "FromAmount", "FromFrozenSwap", "FromRemainSwap", "ToCurrencyID", "ToAmount", "IsManualSwap", "IsAllRemainSetZero", NULL };


    /// 换汇流水号
    /// typedef char TThostFtdcDepositSeqNoType[15]
    char *CThostFtdcSyncDelaySwapField_DelaySwapSeqNo = NULL;
    Py_ssize_t CThostFtdcSyncDelaySwapField_DelaySwapSeqNo_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcSyncDelaySwapField_BrokerID = NULL;
    Py_ssize_t CThostFtdcSyncDelaySwapField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcSyncDelaySwapField_InvestorID = NULL;
    Py_ssize_t CThostFtdcSyncDelaySwapField_InvestorID_length = 0;

    /// 源币种
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcSyncDelaySwapField_FromCurrencyID = NULL;
    Py_ssize_t CThostFtdcSyncDelaySwapField_FromCurrencyID_length = 0;

    /// 源金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDelaySwapField_FromAmount = 0.0;

    /// 源换汇冻结金额(可用冻结)
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDelaySwapField_FromFrozenSwap = 0.0;

    /// 源剩余换汇额度(可提冻结)
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDelaySwapField_FromRemainSwap = 0.0;

    /// 目标币种
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcSyncDelaySwapField_ToCurrencyID = NULL;
    Py_ssize_t CThostFtdcSyncDelaySwapField_ToCurrencyID_length = 0;

    /// 目标金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDelaySwapField_ToAmount = 0.0;

    /// 是否手工换汇
    /// typedef int TThostFtdcBoolType
    int CThostFtdcSyncDelaySwapField_IsManualSwap = 0;

    /// 是否将所有外币的剩余换汇额度设置为0
    /// typedef int TThostFtdcBoolType
    int CThostFtdcSyncDelaySwapField_IsAllRemainSetZero = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#dddy#dii", (char **)kwlist
        , &CThostFtdcSyncDelaySwapField_DelaySwapSeqNo, &CThostFtdcSyncDelaySwapField_DelaySwapSeqNo_length
        , &CThostFtdcSyncDelaySwapField_BrokerID, &CThostFtdcSyncDelaySwapField_BrokerID_length
        , &CThostFtdcSyncDelaySwapField_InvestorID, &CThostFtdcSyncDelaySwapField_InvestorID_length
        , &CThostFtdcSyncDelaySwapField_FromCurrencyID, &CThostFtdcSyncDelaySwapField_FromCurrencyID_length
        , &CThostFtdcSyncDelaySwapField_FromAmount
        , &CThostFtdcSyncDelaySwapField_FromFrozenSwap
        , &CThostFtdcSyncDelaySwapField_FromRemainSwap
        , &CThostFtdcSyncDelaySwapField_ToCurrencyID, &CThostFtdcSyncDelaySwapField_ToCurrencyID_length
        , &CThostFtdcSyncDelaySwapField_ToAmount
        , &CThostFtdcSyncDelaySwapField_IsManualSwap
        , &CThostFtdcSyncDelaySwapField_IsAllRemainSetZero
    )) {
        return -1;
    }

    PyCThostFtdcSyncDelaySwapFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDelaySwapFieldData>(self);
    CThostFtdcSyncDelaySwapField *data = &(extra->data);


    /// 换汇流水号
    /// typedef char TThostFtdcDepositSeqNoType[15]
    if( CThostFtdcSyncDelaySwapField_DelaySwapSeqNo != NULL ) {
        if(CThostFtdcSyncDelaySwapField_DelaySwapSeqNo_length >= (Py_ssize_t)sizeof(data->DelaySwapSeqNo)) {
            PyErr_Format(PyExc_ValueError, "DelaySwapSeqNo too long: length=%zd (max allowed is 14)", CThostFtdcSyncDelaySwapField_DelaySwapSeqNo_length);
            return -1;
        }
        // memset(data->DelaySwapSeqNo, 0, sizeof(data->DelaySwapSeqNo));
        // memcpy(data->DelaySwapSeqNo, CThostFtdcSyncDelaySwapField_DelaySwapSeqNo, CThostFtdcSyncDelaySwapField_DelaySwapSeqNo_length);
        strncpy(data->DelaySwapSeqNo, CThostFtdcSyncDelaySwapField_DelaySwapSeqNo, sizeof(data->DelaySwapSeqNo));
        CThostFtdcSyncDelaySwapField_DelaySwapSeqNo = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcSyncDelaySwapField_BrokerID != NULL ) {
        if(CThostFtdcSyncDelaySwapField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcSyncDelaySwapField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcSyncDelaySwapField_BrokerID, CThostFtdcSyncDelaySwapField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcSyncDelaySwapField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcSyncDelaySwapField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcSyncDelaySwapField_InvestorID != NULL ) {
        if(CThostFtdcSyncDelaySwapField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcSyncDelaySwapField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcSyncDelaySwapField_InvestorID, CThostFtdcSyncDelaySwapField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcSyncDelaySwapField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcSyncDelaySwapField_InvestorID = NULL;
    }

    /// 源币种
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcSyncDelaySwapField_FromCurrencyID != NULL ) {
        if(CThostFtdcSyncDelaySwapField_FromCurrencyID_length >= (Py_ssize_t)sizeof(data->FromCurrencyID)) {
            PyErr_Format(PyExc_ValueError, "FromCurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcSyncDelaySwapField_FromCurrencyID_length);
            return -1;
        }
        // memset(data->FromCurrencyID, 0, sizeof(data->FromCurrencyID));
        // memcpy(data->FromCurrencyID, CThostFtdcSyncDelaySwapField_FromCurrencyID, CThostFtdcSyncDelaySwapField_FromCurrencyID_length);
        strncpy(data->FromCurrencyID, CThostFtdcSyncDelaySwapField_FromCurrencyID, sizeof(data->FromCurrencyID));
        CThostFtdcSyncDelaySwapField_FromCurrencyID = NULL;
    }

    /// 源金额
    /// typedef double TThostFtdcMoneyType
    data->FromAmount = CThostFtdcSyncDelaySwapField_FromAmount;

    /// 源换汇冻结金额(可用冻结)
    /// typedef double TThostFtdcMoneyType
    data->FromFrozenSwap = CThostFtdcSyncDelaySwapField_FromFrozenSwap;

    /// 源剩余换汇额度(可提冻结)
    /// typedef double TThostFtdcMoneyType
    data->FromRemainSwap = CThostFtdcSyncDelaySwapField_FromRemainSwap;

    /// 目标币种
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcSyncDelaySwapField_ToCurrencyID != NULL ) {
        if(CThostFtdcSyncDelaySwapField_ToCurrencyID_length >= (Py_ssize_t)sizeof(data->ToCurrencyID)) {
            PyErr_Format(PyExc_ValueError, "ToCurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcSyncDelaySwapField_ToCurrencyID_length);
            return -1;
        }
        // memset(data->ToCurrencyID, 0, sizeof(data->ToCurrencyID));
        // memcpy(data->ToCurrencyID, CThostFtdcSyncDelaySwapField_ToCurrencyID, CThostFtdcSyncDelaySwapField_ToCurrencyID_length);
        strncpy(data->ToCurrencyID, CThostFtdcSyncDelaySwapField_ToCurrencyID, sizeof(data->ToCurrencyID));
        CThostFtdcSyncDelaySwapField_ToCurrencyID = NULL;
    }

    /// 目标金额
    /// typedef double TThostFtdcMoneyType
    data->ToAmount = CThostFtdcSyncDelaySwapField_ToAmount;

    /// 是否手工换汇
    /// typedef int TThostFtdcBoolType
    data->IsManualSwap = CThostFtdcSyncDelaySwapField_IsManualSwap;

    /// 是否将所有外币的剩余换汇额度设置为0
    /// typedef int TThostFtdcBoolType
    data->IsAllRemainSetZero = CThostFtdcSyncDelaySwapField_IsAllRemainSetZero;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncDelaySwapFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncDelaySwapFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDelaySwapFieldData>(self);
    CThostFtdcSyncDelaySwapField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:d,s:d,s:d,s:y,s:d,s:i,s:i}"
        , "DelaySwapSeqNo", data->DelaySwapSeqNo//, (Py_ssize_t)sizeof(data->DelaySwapSeqNo)
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "FromCurrencyID", data->FromCurrencyID//, (Py_ssize_t)sizeof(data->FromCurrencyID)
        , "FromAmount", data->FromAmount
        , "FromFrozenSwap", data->FromFrozenSwap
        , "FromRemainSwap", data->FromRemainSwap
        , "ToCurrencyID", data->ToCurrencyID//, (Py_ssize_t)sizeof(data->ToCurrencyID)
        , "ToAmount", data->ToAmount
        , "IsManualSwap", data->IsManualSwap
        , "IsAllRemainSetZero", data->IsAllRemainSetZero
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDelaySwapField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDelaySwapField repr");
        return NULL;
    }

    return repr;
}


/// 换汇流水号
/// typedef char TThostFtdcDepositSeqNoType[15]
static PyObject *PyCThostFtdcSyncDelaySwapFieldType_get_DelaySwapSeqNo(PyObject *self, void *closure) {
    PyCThostFtdcSyncDelaySwapFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDelaySwapFieldData>(self);
    CThostFtdcSyncDelaySwapField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->DelaySwapSeqNo, (Py_ssize_t)sizeof(data->DelaySwapSeqNo));
    return PyBytes_FromString(data->DelaySwapSeqNo);
}

static int PyCThostFtdcSyncDelaySwapFieldType_set_DelaySwapSeqNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "DelaySwapSeqNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDelaySwapField::DelaySwapSeqNo)) {
        PyErr_SetString(PyExc_ValueError, "DelaySwapSeqNo must be less than 14 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDelaySwapFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDelaySwapFieldData>(self);
    CThostFtdcSyncDelaySwapField *data = &(extra->data);
    // memset(data->DelaySwapSeqNo, 0, sizeof(data->DelaySwapSeqNo));
    // memcpy(data->DelaySwapSeqNo, buf, len);
    strncpy(data->DelaySwapSeqNo, buf, sizeof(data->DelaySwapSeqNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcSyncDelaySwapFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDelaySwapFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDelaySwapFieldData>(self);
    CThostFtdcSyncDelaySwapField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcSyncDelaySwapFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDelaySwapField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDelaySwapFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDelaySwapFieldData>(self);
    CThostFtdcSyncDelaySwapField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcSyncDelaySwapFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDelaySwapFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDelaySwapFieldData>(self);
    CThostFtdcSyncDelaySwapField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcSyncDelaySwapFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDelaySwapField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDelaySwapFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDelaySwapFieldData>(self);
    CThostFtdcSyncDelaySwapField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 源币种
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcSyncDelaySwapFieldType_get_FromCurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDelaySwapFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDelaySwapFieldData>(self);
    CThostFtdcSyncDelaySwapField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->FromCurrencyID, (Py_ssize_t)sizeof(data->FromCurrencyID));
    return PyBytes_FromString(data->FromCurrencyID);
}

static int PyCThostFtdcSyncDelaySwapFieldType_set_FromCurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "FromCurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDelaySwapField::FromCurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "FromCurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDelaySwapFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDelaySwapFieldData>(self);
    CThostFtdcSyncDelaySwapField *data = &(extra->data);
    // memset(data->FromCurrencyID, 0, sizeof(data->FromCurrencyID));
    // memcpy(data->FromCurrencyID, buf, len);
    strncpy(data->FromCurrencyID, buf, sizeof(data->FromCurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 目标币种
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcSyncDelaySwapFieldType_get_ToCurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDelaySwapFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDelaySwapFieldData>(self);
    CThostFtdcSyncDelaySwapField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ToCurrencyID, (Py_ssize_t)sizeof(data->ToCurrencyID));
    return PyBytes_FromString(data->ToCurrencyID);
}

static int PyCThostFtdcSyncDelaySwapFieldType_set_ToCurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ToCurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDelaySwapField::ToCurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "ToCurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDelaySwapFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDelaySwapFieldData>(self);
    CThostFtdcSyncDelaySwapField *data = &(extra->data);
    // memset(data->ToCurrencyID, 0, sizeof(data->ToCurrencyID));
    // memcpy(data->ToCurrencyID, buf, len);
    strncpy(data->ToCurrencyID, buf, sizeof(data->ToCurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncDelaySwapFieldType_members[] = {
    /// 源金额
    /// typedef double TThostFtdcMoneyType
    {
        .name = "FromAmount",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDelaySwapFieldData, data.FromAmount),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("源金额")
    },
    /// 源换汇冻结金额(可用冻结)
    /// typedef double TThostFtdcMoneyType
    {
        .name = "FromFrozenSwap",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDelaySwapFieldData, data.FromFrozenSwap),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("源换汇冻结金额(可用冻结)")
    },
    /// 源剩余换汇额度(可提冻结)
    /// typedef double TThostFtdcMoneyType
    {
        .name = "FromRemainSwap",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDelaySwapFieldData, data.FromRemainSwap),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("源剩余换汇额度(可提冻结)")
    },
    /// 目标金额
    /// typedef double TThostFtdcMoneyType
    {
        .name = "ToAmount",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDelaySwapFieldData, data.ToAmount),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("目标金额")
    },
    /// 是否手工换汇
    /// typedef int TThostFtdcBoolType
    {
        .name = "IsManualSwap",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDelaySwapFieldData, data.IsManualSwap),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("是否手工换汇")
    },
    /// 是否将所有外币的剩余换汇额度设置为0
    /// typedef int TThostFtdcBoolType
    {
        .name = "IsAllRemainSetZero",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDelaySwapFieldData, data.IsAllRemainSetZero),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("是否将所有外币的剩余换汇额度设置为0")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncDelaySwapFieldType_getsets[] = {
    /// 换汇流水号
    /// typedef char TThostFtdcDepositSeqNoType[15]
    {
    .name = "DelaySwapSeqNo",
    .get = PyCThostFtdcSyncDelaySwapFieldType_get_DelaySwapSeqNo,
    .set = PyCThostFtdcSyncDelaySwapFieldType_set_DelaySwapSeqNo,
    .doc = PyDoc_STR("换汇流水号"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcSyncDelaySwapFieldType_get_BrokerID,
    .set = PyCThostFtdcSyncDelaySwapFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcSyncDelaySwapFieldType_get_InvestorID,
    .set = PyCThostFtdcSyncDelaySwapFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 源币种
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "FromCurrencyID",
    .get = PyCThostFtdcSyncDelaySwapFieldType_get_FromCurrencyID,
    .set = PyCThostFtdcSyncDelaySwapFieldType_set_FromCurrencyID,
    .doc = PyDoc_STR("源币种"),
    },
    /// 目标币种
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "ToCurrencyID",
    .get = PyCThostFtdcSyncDelaySwapFieldType_get_ToCurrencyID,
    .set = PyCThostFtdcSyncDelaySwapFieldType_set_ToCurrencyID,
    .doc = PyDoc_STR("目标币种"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncDelaySwapFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncDelaySwapField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("延时换汇同步")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncDelaySwapFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncDelaySwapFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncDelaySwapFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncDelaySwapFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncDelaySwapFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncDelaySwapFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("延时换汇同步")},
    {Py_tp_members, PyCThostFtdcSyncDelaySwapFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncDelaySwapFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncDelaySwapFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncDelaySwapFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncDelaySwapFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncDelaySwapField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncDelaySwapFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncDelaySwapFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncDelaySwapFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncDelaySwapFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncDelaySwapFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncDelaySwapFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncDelaySwapFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncDelaySwapFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncDelaySwapField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDelaySwapField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}