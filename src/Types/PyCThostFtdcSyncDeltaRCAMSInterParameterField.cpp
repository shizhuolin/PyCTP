
#include "PyCThostFtdcSyncDeltaRCAMSInterParameterField.h"

///风险结算追平RCAMS跨品种风险折抵参数

static int PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "ExchangeID", "ProductGroupID", "Priority", "CreditRate", "CombProduct1", "CombProduct2", "ActionDirection", "SyncDeltaSequenceNo", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcSyncDeltaRCAMSInterParameterField_TradingDay = NULL;
    Py_ssize_t CThostFtdcSyncDeltaRCAMSInterParameterField_TradingDay_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcSyncDeltaRCAMSInterParameterField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaRCAMSInterParameterField_ExchangeID_length = 0;

    /// 商品群代码
    /// typedef char TThostFtdcProductIDType[41]
    char *CThostFtdcSyncDeltaRCAMSInterParameterField_ProductGroupID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaRCAMSInterParameterField_ProductGroupID_length = 0;

    /// 优先级
    /// typedef int TThostFtdcRCAMSPriorityType
    int CThostFtdcSyncDeltaRCAMSInterParameterField_Priority = 0;

    /// 折抵率
    /// typedef double TThostFtdcHedgeRateType
    double CThostFtdcSyncDeltaRCAMSInterParameterField_CreditRate = 0.0;

    /// 产品组合代码1
    /// typedef char TThostFtdcProductIDType[41]
    char *CThostFtdcSyncDeltaRCAMSInterParameterField_CombProduct1 = NULL;
    Py_ssize_t CThostFtdcSyncDeltaRCAMSInterParameterField_CombProduct1_length = 0;

    /// 产品组合代码2
    /// typedef char TThostFtdcProductIDType[41]
    char *CThostFtdcSyncDeltaRCAMSInterParameterField_CombProduct2 = NULL;
    Py_ssize_t CThostFtdcSyncDeltaRCAMSInterParameterField_CombProduct2_length = 0;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    char CThostFtdcSyncDeltaRCAMSInterParameterField_ActionDirection = 0;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcSyncDeltaRCAMSInterParameterField_SyncDeltaSequenceNo = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#idy#y#ci", (char **)kwlist
        , &CThostFtdcSyncDeltaRCAMSInterParameterField_TradingDay, &CThostFtdcSyncDeltaRCAMSInterParameterField_TradingDay_length
        , &CThostFtdcSyncDeltaRCAMSInterParameterField_ExchangeID, &CThostFtdcSyncDeltaRCAMSInterParameterField_ExchangeID_length
        , &CThostFtdcSyncDeltaRCAMSInterParameterField_ProductGroupID, &CThostFtdcSyncDeltaRCAMSInterParameterField_ProductGroupID_length
        , &CThostFtdcSyncDeltaRCAMSInterParameterField_Priority
        , &CThostFtdcSyncDeltaRCAMSInterParameterField_CreditRate
        , &CThostFtdcSyncDeltaRCAMSInterParameterField_CombProduct1, &CThostFtdcSyncDeltaRCAMSInterParameterField_CombProduct1_length
        , &CThostFtdcSyncDeltaRCAMSInterParameterField_CombProduct2, &CThostFtdcSyncDeltaRCAMSInterParameterField_CombProduct2_length
        , &CThostFtdcSyncDeltaRCAMSInterParameterField_ActionDirection
        , &CThostFtdcSyncDeltaRCAMSInterParameterField_SyncDeltaSequenceNo
    )) {
        return -1;
    }

    PyCThostFtdcSyncDeltaRCAMSInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSInterParameterFieldData>(self);
    CThostFtdcSyncDeltaRCAMSInterParameterField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcSyncDeltaRCAMSInterParameterField_TradingDay != NULL ) {
        if(CThostFtdcSyncDeltaRCAMSInterParameterField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaRCAMSInterParameterField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcSyncDeltaRCAMSInterParameterField_TradingDay, CThostFtdcSyncDeltaRCAMSInterParameterField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcSyncDeltaRCAMSInterParameterField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcSyncDeltaRCAMSInterParameterField_TradingDay = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcSyncDeltaRCAMSInterParameterField_ExchangeID != NULL ) {
        if(CThostFtdcSyncDeltaRCAMSInterParameterField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaRCAMSInterParameterField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcSyncDeltaRCAMSInterParameterField_ExchangeID, CThostFtdcSyncDeltaRCAMSInterParameterField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcSyncDeltaRCAMSInterParameterField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcSyncDeltaRCAMSInterParameterField_ExchangeID = NULL;
    }

    /// 商品群代码
    /// typedef char TThostFtdcProductIDType[41]
    if( CThostFtdcSyncDeltaRCAMSInterParameterField_ProductGroupID != NULL ) {
        if(CThostFtdcSyncDeltaRCAMSInterParameterField_ProductGroupID_length >= (Py_ssize_t)sizeof(data->ProductGroupID)) {
            PyErr_Format(PyExc_ValueError, "ProductGroupID too long: length=%zd (max allowed is 40)", CThostFtdcSyncDeltaRCAMSInterParameterField_ProductGroupID_length);
            return -1;
        }
        // memset(data->ProductGroupID, 0, sizeof(data->ProductGroupID));
        // memcpy(data->ProductGroupID, CThostFtdcSyncDeltaRCAMSInterParameterField_ProductGroupID, CThostFtdcSyncDeltaRCAMSInterParameterField_ProductGroupID_length);
        strncpy(data->ProductGroupID, CThostFtdcSyncDeltaRCAMSInterParameterField_ProductGroupID, sizeof(data->ProductGroupID));
        CThostFtdcSyncDeltaRCAMSInterParameterField_ProductGroupID = NULL;
    }

    /// 优先级
    /// typedef int TThostFtdcRCAMSPriorityType
    data->Priority = CThostFtdcSyncDeltaRCAMSInterParameterField_Priority;

    /// 折抵率
    /// typedef double TThostFtdcHedgeRateType
    data->CreditRate = CThostFtdcSyncDeltaRCAMSInterParameterField_CreditRate;

    /// 产品组合代码1
    /// typedef char TThostFtdcProductIDType[41]
    if( CThostFtdcSyncDeltaRCAMSInterParameterField_CombProduct1 != NULL ) {
        if(CThostFtdcSyncDeltaRCAMSInterParameterField_CombProduct1_length >= (Py_ssize_t)sizeof(data->CombProduct1)) {
            PyErr_Format(PyExc_ValueError, "CombProduct1 too long: length=%zd (max allowed is 40)", CThostFtdcSyncDeltaRCAMSInterParameterField_CombProduct1_length);
            return -1;
        }
        // memset(data->CombProduct1, 0, sizeof(data->CombProduct1));
        // memcpy(data->CombProduct1, CThostFtdcSyncDeltaRCAMSInterParameterField_CombProduct1, CThostFtdcSyncDeltaRCAMSInterParameterField_CombProduct1_length);
        strncpy(data->CombProduct1, CThostFtdcSyncDeltaRCAMSInterParameterField_CombProduct1, sizeof(data->CombProduct1));
        CThostFtdcSyncDeltaRCAMSInterParameterField_CombProduct1 = NULL;
    }

    /// 产品组合代码2
    /// typedef char TThostFtdcProductIDType[41]
    if( CThostFtdcSyncDeltaRCAMSInterParameterField_CombProduct2 != NULL ) {
        if(CThostFtdcSyncDeltaRCAMSInterParameterField_CombProduct2_length >= (Py_ssize_t)sizeof(data->CombProduct2)) {
            PyErr_Format(PyExc_ValueError, "CombProduct2 too long: length=%zd (max allowed is 40)", CThostFtdcSyncDeltaRCAMSInterParameterField_CombProduct2_length);
            return -1;
        }
        // memset(data->CombProduct2, 0, sizeof(data->CombProduct2));
        // memcpy(data->CombProduct2, CThostFtdcSyncDeltaRCAMSInterParameterField_CombProduct2, CThostFtdcSyncDeltaRCAMSInterParameterField_CombProduct2_length);
        strncpy(data->CombProduct2, CThostFtdcSyncDeltaRCAMSInterParameterField_CombProduct2, sizeof(data->CombProduct2));
        CThostFtdcSyncDeltaRCAMSInterParameterField_CombProduct2 = NULL;
    }

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    data->ActionDirection = CThostFtdcSyncDeltaRCAMSInterParameterField_ActionDirection;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    data->SyncDeltaSequenceNo = CThostFtdcSyncDeltaRCAMSInterParameterField_SyncDeltaSequenceNo;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncDeltaRCAMSInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSInterParameterFieldData>(self);
    CThostFtdcSyncDeltaRCAMSInterParameterField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:i,s:d,s:y,s:y,s:c,s:i}"
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ProductGroupID", data->ProductGroupID//, (Py_ssize_t)sizeof(data->ProductGroupID)
        , "Priority", data->Priority
        , "CreditRate", data->CreditRate
        , "CombProduct1", data->CombProduct1//, (Py_ssize_t)sizeof(data->CombProduct1)
        , "CombProduct2", data->CombProduct2//, (Py_ssize_t)sizeof(data->CombProduct2)
        , "ActionDirection", data->ActionDirection
        , "SyncDeltaSequenceNo", data->SyncDeltaSequenceNo
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaRCAMSInterParameterField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaRCAMSInterParameterField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRCAMSInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSInterParameterFieldData>(self);
    CThostFtdcSyncDeltaRCAMSInterParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRCAMSInterParameterField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRCAMSInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSInterParameterFieldData>(self);
    CThostFtdcSyncDeltaRCAMSInterParameterField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRCAMSInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSInterParameterFieldData>(self);
    CThostFtdcSyncDeltaRCAMSInterParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRCAMSInterParameterField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRCAMSInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSInterParameterFieldData>(self);
    CThostFtdcSyncDeltaRCAMSInterParameterField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 商品群代码
/// typedef char TThostFtdcProductIDType[41]
static PyObject *PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_get_ProductGroupID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRCAMSInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSInterParameterFieldData>(self);
    CThostFtdcSyncDeltaRCAMSInterParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProductGroupID, (Py_ssize_t)sizeof(data->ProductGroupID));
    return PyBytes_FromString(data->ProductGroupID);
}

static int PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_set_ProductGroupID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductGroupID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRCAMSInterParameterField::ProductGroupID)) {
        PyErr_SetString(PyExc_ValueError, "ProductGroupID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRCAMSInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSInterParameterFieldData>(self);
    CThostFtdcSyncDeltaRCAMSInterParameterField *data = &(extra->data);
    // memset(data->ProductGroupID, 0, sizeof(data->ProductGroupID));
    // memcpy(data->ProductGroupID, buf, len);
    strncpy(data->ProductGroupID, buf, sizeof(data->ProductGroupID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 产品组合代码1
/// typedef char TThostFtdcProductIDType[41]
static PyObject *PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_get_CombProduct1(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRCAMSInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSInterParameterFieldData>(self);
    CThostFtdcSyncDeltaRCAMSInterParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CombProduct1, (Py_ssize_t)sizeof(data->CombProduct1));
    return PyBytes_FromString(data->CombProduct1);
}

static int PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_set_CombProduct1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CombProduct1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRCAMSInterParameterField::CombProduct1)) {
        PyErr_SetString(PyExc_ValueError, "CombProduct1 must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRCAMSInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSInterParameterFieldData>(self);
    CThostFtdcSyncDeltaRCAMSInterParameterField *data = &(extra->data);
    // memset(data->CombProduct1, 0, sizeof(data->CombProduct1));
    // memcpy(data->CombProduct1, buf, len);
    strncpy(data->CombProduct1, buf, sizeof(data->CombProduct1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 产品组合代码2
/// typedef char TThostFtdcProductIDType[41]
static PyObject *PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_get_CombProduct2(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRCAMSInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSInterParameterFieldData>(self);
    CThostFtdcSyncDeltaRCAMSInterParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CombProduct2, (Py_ssize_t)sizeof(data->CombProduct2));
    return PyBytes_FromString(data->CombProduct2);
}

static int PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_set_CombProduct2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CombProduct2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRCAMSInterParameterField::CombProduct2)) {
        PyErr_SetString(PyExc_ValueError, "CombProduct2 must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRCAMSInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSInterParameterFieldData>(self);
    CThostFtdcSyncDeltaRCAMSInterParameterField *data = &(extra->data);
    // memset(data->CombProduct2, 0, sizeof(data->CombProduct2));
    // memcpy(data->CombProduct2, buf, len);
    strncpy(data->CombProduct2, buf, sizeof(data->CombProduct2));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionDirectionType
static PyObject *PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_get_ActionDirection(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRCAMSInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSInterParameterFieldData>(self);
    CThostFtdcSyncDeltaRCAMSInterParameterField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionDirection), 1);
}

static int PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_set_ActionDirection(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDirection Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRCAMSInterParameterField::ActionDirection)) {
        PyErr_SetString(PyExc_ValueError, "ActionDirection must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRCAMSInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSInterParameterFieldData>(self);
    CThostFtdcSyncDeltaRCAMSInterParameterField *data = &(extra->data);
    data->ActionDirection = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_members[] = {
    /// 优先级
    /// typedef int TThostFtdcRCAMSPriorityType
    {
        .name = "Priority",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaRCAMSInterParameterFieldData, data.Priority),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("优先级")
    },
    /// 折抵率
    /// typedef double TThostFtdcHedgeRateType
    {
        .name = "CreditRate",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaRCAMSInterParameterFieldData, data.CreditRate),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("折抵率")
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
        .offset = offsetof(PyCThostFtdcSyncDeltaRCAMSInterParameterFieldData, data.SyncDeltaSequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("追平序号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_get_TradingDay,
    .set = PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_get_ExchangeID,
    .set = PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 商品群代码
    /// typedef char TThostFtdcProductIDType[41]
    {
    .name = "ProductGroupID",
    .get = PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_get_ProductGroupID,
    .set = PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_set_ProductGroupID,
    .doc = PyDoc_STR("商品群代码"),
    },
    /// 产品组合代码1
    /// typedef char TThostFtdcProductIDType[41]
    {
    .name = "CombProduct1",
    .get = PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_get_CombProduct1,
    .set = PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_set_CombProduct1,
    .doc = PyDoc_STR("产品组合代码1"),
    },
    /// 产品组合代码2
    /// typedef char TThostFtdcProductIDType[41]
    {
    .name = "CombProduct2",
    .get = PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_get_CombProduct2,
    .set = PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_set_CombProduct2,
    .doc = PyDoc_STR("产品组合代码2"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    {
    .name = "ActionDirection",
    .get = PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_get_ActionDirection,
    .set = PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_set_ActionDirection,
    .doc = PyDoc_STR("操作标志"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncDeltaRCAMSInterParameterField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("风险结算追平RCAMS跨品种风险折抵参数")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncDeltaRCAMSInterParameterFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("风险结算追平RCAMS跨品种风险折抵参数")},
    {Py_tp_members, PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncDeltaRCAMSInterParameterField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaRCAMSInterParameterFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaRCAMSInterParameterFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaRCAMSInterParameterField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaRCAMSInterParameterField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}