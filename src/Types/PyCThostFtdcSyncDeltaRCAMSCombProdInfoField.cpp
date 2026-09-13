
#include "PyCThostFtdcSyncDeltaRCAMSCombProdInfoField.h"

///风险结算追平RCAMS产品组合信息

static int PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "ExchangeID", "ProductID", "CombProductID", "ProductGroupID", "ActionDirection", "SyncDeltaSequenceNo", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcSyncDeltaRCAMSCombProdInfoField_TradingDay = NULL;
    Py_ssize_t CThostFtdcSyncDeltaRCAMSCombProdInfoField_TradingDay_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcSyncDeltaRCAMSCombProdInfoField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaRCAMSCombProdInfoField_ExchangeID_length = 0;

    /// 产品代码
    /// typedef char TThostFtdcProductIDType[41]
    char *CThostFtdcSyncDeltaRCAMSCombProdInfoField_ProductID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaRCAMSCombProdInfoField_ProductID_length = 0;

    /// 商品组代码
    /// typedef char TThostFtdcProductIDType[41]
    char *CThostFtdcSyncDeltaRCAMSCombProdInfoField_CombProductID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaRCAMSCombProdInfoField_CombProductID_length = 0;

    /// 商品群代码
    /// typedef char TThostFtdcProductIDType[41]
    char *CThostFtdcSyncDeltaRCAMSCombProdInfoField_ProductGroupID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaRCAMSCombProdInfoField_ProductGroupID_length = 0;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    char CThostFtdcSyncDeltaRCAMSCombProdInfoField_ActionDirection = 0;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcSyncDeltaRCAMSCombProdInfoField_SyncDeltaSequenceNo = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#ci", (char **)kwlist
        , &CThostFtdcSyncDeltaRCAMSCombProdInfoField_TradingDay, &CThostFtdcSyncDeltaRCAMSCombProdInfoField_TradingDay_length
        , &CThostFtdcSyncDeltaRCAMSCombProdInfoField_ExchangeID, &CThostFtdcSyncDeltaRCAMSCombProdInfoField_ExchangeID_length
        , &CThostFtdcSyncDeltaRCAMSCombProdInfoField_ProductID, &CThostFtdcSyncDeltaRCAMSCombProdInfoField_ProductID_length
        , &CThostFtdcSyncDeltaRCAMSCombProdInfoField_CombProductID, &CThostFtdcSyncDeltaRCAMSCombProdInfoField_CombProductID_length
        , &CThostFtdcSyncDeltaRCAMSCombProdInfoField_ProductGroupID, &CThostFtdcSyncDeltaRCAMSCombProdInfoField_ProductGroupID_length
        , &CThostFtdcSyncDeltaRCAMSCombProdInfoField_ActionDirection
        , &CThostFtdcSyncDeltaRCAMSCombProdInfoField_SyncDeltaSequenceNo
    )) {
        return -1;
    }

    PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldData>(self);
    CThostFtdcSyncDeltaRCAMSCombProdInfoField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcSyncDeltaRCAMSCombProdInfoField_TradingDay != NULL ) {
        if(CThostFtdcSyncDeltaRCAMSCombProdInfoField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaRCAMSCombProdInfoField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcSyncDeltaRCAMSCombProdInfoField_TradingDay, CThostFtdcSyncDeltaRCAMSCombProdInfoField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcSyncDeltaRCAMSCombProdInfoField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcSyncDeltaRCAMSCombProdInfoField_TradingDay = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcSyncDeltaRCAMSCombProdInfoField_ExchangeID != NULL ) {
        if(CThostFtdcSyncDeltaRCAMSCombProdInfoField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaRCAMSCombProdInfoField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcSyncDeltaRCAMSCombProdInfoField_ExchangeID, CThostFtdcSyncDeltaRCAMSCombProdInfoField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcSyncDeltaRCAMSCombProdInfoField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcSyncDeltaRCAMSCombProdInfoField_ExchangeID = NULL;
    }

    /// 产品代码
    /// typedef char TThostFtdcProductIDType[41]
    if( CThostFtdcSyncDeltaRCAMSCombProdInfoField_ProductID != NULL ) {
        if(CThostFtdcSyncDeltaRCAMSCombProdInfoField_ProductID_length >= (Py_ssize_t)sizeof(data->ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is 40)", CThostFtdcSyncDeltaRCAMSCombProdInfoField_ProductID_length);
            return -1;
        }
        // memset(data->ProductID, 0, sizeof(data->ProductID));
        // memcpy(data->ProductID, CThostFtdcSyncDeltaRCAMSCombProdInfoField_ProductID, CThostFtdcSyncDeltaRCAMSCombProdInfoField_ProductID_length);
        strncpy(data->ProductID, CThostFtdcSyncDeltaRCAMSCombProdInfoField_ProductID, sizeof(data->ProductID));
        CThostFtdcSyncDeltaRCAMSCombProdInfoField_ProductID = NULL;
    }

    /// 商品组代码
    /// typedef char TThostFtdcProductIDType[41]
    if( CThostFtdcSyncDeltaRCAMSCombProdInfoField_CombProductID != NULL ) {
        if(CThostFtdcSyncDeltaRCAMSCombProdInfoField_CombProductID_length >= (Py_ssize_t)sizeof(data->CombProductID)) {
            PyErr_Format(PyExc_ValueError, "CombProductID too long: length=%zd (max allowed is 40)", CThostFtdcSyncDeltaRCAMSCombProdInfoField_CombProductID_length);
            return -1;
        }
        // memset(data->CombProductID, 0, sizeof(data->CombProductID));
        // memcpy(data->CombProductID, CThostFtdcSyncDeltaRCAMSCombProdInfoField_CombProductID, CThostFtdcSyncDeltaRCAMSCombProdInfoField_CombProductID_length);
        strncpy(data->CombProductID, CThostFtdcSyncDeltaRCAMSCombProdInfoField_CombProductID, sizeof(data->CombProductID));
        CThostFtdcSyncDeltaRCAMSCombProdInfoField_CombProductID = NULL;
    }

    /// 商品群代码
    /// typedef char TThostFtdcProductIDType[41]
    if( CThostFtdcSyncDeltaRCAMSCombProdInfoField_ProductGroupID != NULL ) {
        if(CThostFtdcSyncDeltaRCAMSCombProdInfoField_ProductGroupID_length >= (Py_ssize_t)sizeof(data->ProductGroupID)) {
            PyErr_Format(PyExc_ValueError, "ProductGroupID too long: length=%zd (max allowed is 40)", CThostFtdcSyncDeltaRCAMSCombProdInfoField_ProductGroupID_length);
            return -1;
        }
        // memset(data->ProductGroupID, 0, sizeof(data->ProductGroupID));
        // memcpy(data->ProductGroupID, CThostFtdcSyncDeltaRCAMSCombProdInfoField_ProductGroupID, CThostFtdcSyncDeltaRCAMSCombProdInfoField_ProductGroupID_length);
        strncpy(data->ProductGroupID, CThostFtdcSyncDeltaRCAMSCombProdInfoField_ProductGroupID, sizeof(data->ProductGroupID));
        CThostFtdcSyncDeltaRCAMSCombProdInfoField_ProductGroupID = NULL;
    }

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    data->ActionDirection = CThostFtdcSyncDeltaRCAMSCombProdInfoField_ActionDirection;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    data->SyncDeltaSequenceNo = CThostFtdcSyncDeltaRCAMSCombProdInfoField_SyncDeltaSequenceNo;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldData>(self);
    CThostFtdcSyncDeltaRCAMSCombProdInfoField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:c,s:i}"
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ProductID", data->ProductID//, (Py_ssize_t)sizeof(data->ProductID)
        , "CombProductID", data->CombProductID//, (Py_ssize_t)sizeof(data->CombProductID)
        , "ProductGroupID", data->ProductGroupID//, (Py_ssize_t)sizeof(data->ProductGroupID)
        , "ActionDirection", data->ActionDirection
        , "SyncDeltaSequenceNo", data->SyncDeltaSequenceNo
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaRCAMSCombProdInfoField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaRCAMSCombProdInfoField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldData>(self);
    CThostFtdcSyncDeltaRCAMSCombProdInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRCAMSCombProdInfoField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldData>(self);
    CThostFtdcSyncDeltaRCAMSCombProdInfoField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldData>(self);
    CThostFtdcSyncDeltaRCAMSCombProdInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRCAMSCombProdInfoField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldData>(self);
    CThostFtdcSyncDeltaRCAMSCombProdInfoField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 产品代码
/// typedef char TThostFtdcProductIDType[41]
static PyObject *PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_get_ProductID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldData>(self);
    CThostFtdcSyncDeltaRCAMSCombProdInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProductID, (Py_ssize_t)sizeof(data->ProductID));
    return PyBytes_FromString(data->ProductID);
}

static int PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_set_ProductID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRCAMSCombProdInfoField::ProductID)) {
        PyErr_SetString(PyExc_ValueError, "ProductID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldData>(self);
    CThostFtdcSyncDeltaRCAMSCombProdInfoField *data = &(extra->data);
    // memset(data->ProductID, 0, sizeof(data->ProductID));
    // memcpy(data->ProductID, buf, len);
    strncpy(data->ProductID, buf, sizeof(data->ProductID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 商品组代码
/// typedef char TThostFtdcProductIDType[41]
static PyObject *PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_get_CombProductID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldData>(self);
    CThostFtdcSyncDeltaRCAMSCombProdInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CombProductID, (Py_ssize_t)sizeof(data->CombProductID));
    return PyBytes_FromString(data->CombProductID);
}

static int PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_set_CombProductID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CombProductID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRCAMSCombProdInfoField::CombProductID)) {
        PyErr_SetString(PyExc_ValueError, "CombProductID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldData>(self);
    CThostFtdcSyncDeltaRCAMSCombProdInfoField *data = &(extra->data);
    // memset(data->CombProductID, 0, sizeof(data->CombProductID));
    // memcpy(data->CombProductID, buf, len);
    strncpy(data->CombProductID, buf, sizeof(data->CombProductID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 商品群代码
/// typedef char TThostFtdcProductIDType[41]
static PyObject *PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_get_ProductGroupID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldData>(self);
    CThostFtdcSyncDeltaRCAMSCombProdInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProductGroupID, (Py_ssize_t)sizeof(data->ProductGroupID));
    return PyBytes_FromString(data->ProductGroupID);
}

static int PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_set_ProductGroupID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductGroupID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRCAMSCombProdInfoField::ProductGroupID)) {
        PyErr_SetString(PyExc_ValueError, "ProductGroupID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldData>(self);
    CThostFtdcSyncDeltaRCAMSCombProdInfoField *data = &(extra->data);
    // memset(data->ProductGroupID, 0, sizeof(data->ProductGroupID));
    // memcpy(data->ProductGroupID, buf, len);
    strncpy(data->ProductGroupID, buf, sizeof(data->ProductGroupID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionDirectionType
static PyObject *PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_get_ActionDirection(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldData>(self);
    CThostFtdcSyncDeltaRCAMSCombProdInfoField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionDirection), 1);
}

static int PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_set_ActionDirection(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDirection Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRCAMSCombProdInfoField::ActionDirection)) {
        PyErr_SetString(PyExc_ValueError, "ActionDirection must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldData>(self);
    CThostFtdcSyncDeltaRCAMSCombProdInfoField *data = &(extra->data);
    data->ActionDirection = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_members[] = {
    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    {
        .name = "SyncDeltaSequenceNo",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldData, data.SyncDeltaSequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("追平序号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_get_TradingDay,
    .set = PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_get_ExchangeID,
    .set = PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 产品代码
    /// typedef char TThostFtdcProductIDType[41]
    {
    .name = "ProductID",
    .get = PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_get_ProductID,
    .set = PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_set_ProductID,
    .doc = PyDoc_STR("产品代码"),
    },
    /// 商品组代码
    /// typedef char TThostFtdcProductIDType[41]
    {
    .name = "CombProductID",
    .get = PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_get_CombProductID,
    .set = PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_set_CombProductID,
    .doc = PyDoc_STR("商品组代码"),
    },
    /// 商品群代码
    /// typedef char TThostFtdcProductIDType[41]
    {
    .name = "ProductGroupID",
    .get = PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_get_ProductGroupID,
    .set = PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_set_ProductGroupID,
    .doc = PyDoc_STR("商品群代码"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    {
    .name = "ActionDirection",
    .get = PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_get_ActionDirection,
    .set = PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_set_ActionDirection,
    .doc = PyDoc_STR("操作标志"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncDeltaRCAMSCombProdInfoField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("风险结算追平RCAMS产品组合信息")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("风险结算追平RCAMS产品组合信息")},
    {Py_tp_members, PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncDeltaRCAMSCombProdInfoField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaRCAMSCombProdInfoField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaRCAMSCombProdInfoField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}