
#include "PyCThostFtdcBrokerTradingAlgosField.h"

///经纪公司交易算法

static int PyCThostFtdcBrokerTradingAlgosFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "ExchangeID", "reserve1", "HandlePositionAlgoID", "FindMarginRateAlgoID", "HandleTradingAccountAlgoID", "InstrumentID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcBrokerTradingAlgosField_BrokerID = NULL;
    Py_ssize_t CThostFtdcBrokerTradingAlgosField_BrokerID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcBrokerTradingAlgosField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcBrokerTradingAlgosField_ExchangeID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcBrokerTradingAlgosField_reserve1 = NULL;
    Py_ssize_t CThostFtdcBrokerTradingAlgosField_reserve1_length = 0;

    /// 持仓处理算法编号
    /// typedef char TThostFtdcHandlePositionAlgoIDType
    char CThostFtdcBrokerTradingAlgosField_HandlePositionAlgoID = 0;

    /// 寻找保证金率算法编号
    /// typedef char TThostFtdcFindMarginRateAlgoIDType
    char CThostFtdcBrokerTradingAlgosField_FindMarginRateAlgoID = 0;

    /// 资金处理算法编号
    /// typedef char TThostFtdcHandleTradingAccountAlgoIDType
    char CThostFtdcBrokerTradingAlgosField_HandleTradingAccountAlgoID = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcBrokerTradingAlgosField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcBrokerTradingAlgosField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#cccy#", (char **)kwlist
        , &CThostFtdcBrokerTradingAlgosField_BrokerID, &CThostFtdcBrokerTradingAlgosField_BrokerID_length
        , &CThostFtdcBrokerTradingAlgosField_ExchangeID, &CThostFtdcBrokerTradingAlgosField_ExchangeID_length
        , &CThostFtdcBrokerTradingAlgosField_reserve1, &CThostFtdcBrokerTradingAlgosField_reserve1_length
        , &CThostFtdcBrokerTradingAlgosField_HandlePositionAlgoID
        , &CThostFtdcBrokerTradingAlgosField_FindMarginRateAlgoID
        , &CThostFtdcBrokerTradingAlgosField_HandleTradingAccountAlgoID
        , &CThostFtdcBrokerTradingAlgosField_InstrumentID, &CThostFtdcBrokerTradingAlgosField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcBrokerTradingAlgosFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerTradingAlgosFieldData>(self);
    CThostFtdcBrokerTradingAlgosField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcBrokerTradingAlgosField_BrokerID != NULL ) {
        if(CThostFtdcBrokerTradingAlgosField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcBrokerTradingAlgosField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcBrokerTradingAlgosField_BrokerID, CThostFtdcBrokerTradingAlgosField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcBrokerTradingAlgosField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcBrokerTradingAlgosField_BrokerID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcBrokerTradingAlgosField_ExchangeID != NULL ) {
        if(CThostFtdcBrokerTradingAlgosField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcBrokerTradingAlgosField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcBrokerTradingAlgosField_ExchangeID, CThostFtdcBrokerTradingAlgosField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcBrokerTradingAlgosField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcBrokerTradingAlgosField_ExchangeID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcBrokerTradingAlgosField_reserve1 != NULL ) {
        if(CThostFtdcBrokerTradingAlgosField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcBrokerTradingAlgosField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcBrokerTradingAlgosField_reserve1, CThostFtdcBrokerTradingAlgosField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcBrokerTradingAlgosField_reserve1, sizeof(data->reserve1));
        CThostFtdcBrokerTradingAlgosField_reserve1 = NULL;
    }

    /// 持仓处理算法编号
    /// typedef char TThostFtdcHandlePositionAlgoIDType
    data->HandlePositionAlgoID = CThostFtdcBrokerTradingAlgosField_HandlePositionAlgoID;

    /// 寻找保证金率算法编号
    /// typedef char TThostFtdcFindMarginRateAlgoIDType
    data->FindMarginRateAlgoID = CThostFtdcBrokerTradingAlgosField_FindMarginRateAlgoID;

    /// 资金处理算法编号
    /// typedef char TThostFtdcHandleTradingAccountAlgoIDType
    data->HandleTradingAccountAlgoID = CThostFtdcBrokerTradingAlgosField_HandleTradingAccountAlgoID;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcBrokerTradingAlgosField_InstrumentID != NULL ) {
        if(CThostFtdcBrokerTradingAlgosField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcBrokerTradingAlgosField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcBrokerTradingAlgosField_InstrumentID, CThostFtdcBrokerTradingAlgosField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcBrokerTradingAlgosField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcBrokerTradingAlgosField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcBrokerTradingAlgosFieldType_repr(PyObject *self) {

    PyCThostFtdcBrokerTradingAlgosFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerTradingAlgosFieldData>(self);
    CThostFtdcBrokerTradingAlgosField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:c,s:c,s:c,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "HandlePositionAlgoID", data->HandlePositionAlgoID
        , "FindMarginRateAlgoID", data->FindMarginRateAlgoID
        , "HandleTradingAccountAlgoID", data->HandleTradingAccountAlgoID
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBrokerTradingAlgosField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBrokerTradingAlgosField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcBrokerTradingAlgosFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcBrokerTradingAlgosFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerTradingAlgosFieldData>(self);
    CThostFtdcBrokerTradingAlgosField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcBrokerTradingAlgosFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBrokerTradingAlgosField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerTradingAlgosFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerTradingAlgosFieldData>(self);
    CThostFtdcBrokerTradingAlgosField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcBrokerTradingAlgosFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcBrokerTradingAlgosFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerTradingAlgosFieldData>(self);
    CThostFtdcBrokerTradingAlgosField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcBrokerTradingAlgosFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBrokerTradingAlgosField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerTradingAlgosFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerTradingAlgosFieldData>(self);
    CThostFtdcBrokerTradingAlgosField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcBrokerTradingAlgosFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcBrokerTradingAlgosFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerTradingAlgosFieldData>(self);
    CThostFtdcBrokerTradingAlgosField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcBrokerTradingAlgosFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBrokerTradingAlgosField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerTradingAlgosFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerTradingAlgosFieldData>(self);
    CThostFtdcBrokerTradingAlgosField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 持仓处理算法编号
/// typedef char TThostFtdcHandlePositionAlgoIDType
static PyObject *PyCThostFtdcBrokerTradingAlgosFieldType_get_HandlePositionAlgoID(PyObject *self, void *closure) {
    PyCThostFtdcBrokerTradingAlgosFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerTradingAlgosFieldData>(self);
    CThostFtdcBrokerTradingAlgosField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->HandlePositionAlgoID), 1);
}

static int PyCThostFtdcBrokerTradingAlgosFieldType_set_HandlePositionAlgoID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "HandlePositionAlgoID Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcBrokerTradingAlgosField::HandlePositionAlgoID)) {
        PyErr_SetString(PyExc_ValueError, "HandlePositionAlgoID must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerTradingAlgosFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerTradingAlgosFieldData>(self);
    CThostFtdcBrokerTradingAlgosField *data = &(extra->data);
    data->HandlePositionAlgoID = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 寻找保证金率算法编号
/// typedef char TThostFtdcFindMarginRateAlgoIDType
static PyObject *PyCThostFtdcBrokerTradingAlgosFieldType_get_FindMarginRateAlgoID(PyObject *self, void *closure) {
    PyCThostFtdcBrokerTradingAlgosFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerTradingAlgosFieldData>(self);
    CThostFtdcBrokerTradingAlgosField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->FindMarginRateAlgoID), 1);
}

static int PyCThostFtdcBrokerTradingAlgosFieldType_set_FindMarginRateAlgoID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "FindMarginRateAlgoID Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcBrokerTradingAlgosField::FindMarginRateAlgoID)) {
        PyErr_SetString(PyExc_ValueError, "FindMarginRateAlgoID must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerTradingAlgosFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerTradingAlgosFieldData>(self);
    CThostFtdcBrokerTradingAlgosField *data = &(extra->data);
    data->FindMarginRateAlgoID = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 资金处理算法编号
/// typedef char TThostFtdcHandleTradingAccountAlgoIDType
static PyObject *PyCThostFtdcBrokerTradingAlgosFieldType_get_HandleTradingAccountAlgoID(PyObject *self, void *closure) {
    PyCThostFtdcBrokerTradingAlgosFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerTradingAlgosFieldData>(self);
    CThostFtdcBrokerTradingAlgosField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->HandleTradingAccountAlgoID), 1);
}

static int PyCThostFtdcBrokerTradingAlgosFieldType_set_HandleTradingAccountAlgoID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "HandleTradingAccountAlgoID Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcBrokerTradingAlgosField::HandleTradingAccountAlgoID)) {
        PyErr_SetString(PyExc_ValueError, "HandleTradingAccountAlgoID must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerTradingAlgosFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerTradingAlgosFieldData>(self);
    CThostFtdcBrokerTradingAlgosField *data = &(extra->data);
    data->HandleTradingAccountAlgoID = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcBrokerTradingAlgosFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcBrokerTradingAlgosFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerTradingAlgosFieldData>(self);
    CThostFtdcBrokerTradingAlgosField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcBrokerTradingAlgosFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBrokerTradingAlgosField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerTradingAlgosFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerTradingAlgosFieldData>(self);
    CThostFtdcBrokerTradingAlgosField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcBrokerTradingAlgosFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcBrokerTradingAlgosFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcBrokerTradingAlgosFieldType_get_BrokerID,
    .set = PyCThostFtdcBrokerTradingAlgosFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcBrokerTradingAlgosFieldType_get_ExchangeID,
    .set = PyCThostFtdcBrokerTradingAlgosFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcBrokerTradingAlgosFieldType_get_reserve1,
    .set = PyCThostFtdcBrokerTradingAlgosFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 持仓处理算法编号
    /// typedef char TThostFtdcHandlePositionAlgoIDType
    {
    .name = "HandlePositionAlgoID",
    .get = PyCThostFtdcBrokerTradingAlgosFieldType_get_HandlePositionAlgoID,
    .set = PyCThostFtdcBrokerTradingAlgosFieldType_set_HandlePositionAlgoID,
    .doc = PyDoc_STR("持仓处理算法编号"),
    },
    /// 寻找保证金率算法编号
    /// typedef char TThostFtdcFindMarginRateAlgoIDType
    {
    .name = "FindMarginRateAlgoID",
    .get = PyCThostFtdcBrokerTradingAlgosFieldType_get_FindMarginRateAlgoID,
    .set = PyCThostFtdcBrokerTradingAlgosFieldType_set_FindMarginRateAlgoID,
    .doc = PyDoc_STR("寻找保证金率算法编号"),
    },
    /// 资金处理算法编号
    /// typedef char TThostFtdcHandleTradingAccountAlgoIDType
    {
    .name = "HandleTradingAccountAlgoID",
    .get = PyCThostFtdcBrokerTradingAlgosFieldType_get_HandleTradingAccountAlgoID,
    .set = PyCThostFtdcBrokerTradingAlgosFieldType_set_HandleTradingAccountAlgoID,
    .doc = PyDoc_STR("资金处理算法编号"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcBrokerTradingAlgosFieldType_get_InstrumentID,
    .set = PyCThostFtdcBrokerTradingAlgosFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcBrokerTradingAlgosFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcBrokerTradingAlgosField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("经纪公司交易算法")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcBrokerTradingAlgosFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcBrokerTradingAlgosFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcBrokerTradingAlgosFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcBrokerTradingAlgosFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcBrokerTradingAlgosFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcBrokerTradingAlgosFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("经纪公司交易算法")},
    {Py_tp_members, PyCThostFtdcBrokerTradingAlgosFieldType_members},
    {Py_tp_getset, PyCThostFtdcBrokerTradingAlgosFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcBrokerTradingAlgosFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcBrokerTradingAlgosFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcBrokerTradingAlgosFieldType_spec = {
    .name = "PyCTP.CThostFtdcBrokerTradingAlgosField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcBrokerTradingAlgosFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcBrokerTradingAlgosFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcBrokerTradingAlgosFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcBrokerTradingAlgosFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcBrokerTradingAlgosFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcBrokerTradingAlgosFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcBrokerTradingAlgosFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcBrokerTradingAlgosFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcBrokerTradingAlgosField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcBrokerTradingAlgosField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}