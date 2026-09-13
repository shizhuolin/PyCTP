
#include "PyCThostFtdcQryMaxOrderVolumeWithPriceField.h"

///根据价格查询最大报单数量

static int PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "reserve1", "Direction", "OffsetFlag", "HedgeFlag", "MaxVolume", "Price", "ExchangeID", "InvestUnitID", "InstrumentID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryMaxOrderVolumeWithPriceField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryMaxOrderVolumeWithPriceField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryMaxOrderVolumeWithPriceField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryMaxOrderVolumeWithPriceField_InvestorID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcQryMaxOrderVolumeWithPriceField_reserve1 = NULL;
    Py_ssize_t CThostFtdcQryMaxOrderVolumeWithPriceField_reserve1_length = 0;

    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    char CThostFtdcQryMaxOrderVolumeWithPriceField_Direction = 0;

    /// 开平标志
    /// typedef char TThostFtdcOffsetFlagType
    char CThostFtdcQryMaxOrderVolumeWithPriceField_OffsetFlag = 0;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcQryMaxOrderVolumeWithPriceField_HedgeFlag = 0;

    /// 最大允许报单数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcQryMaxOrderVolumeWithPriceField_MaxVolume = 0;

    /// 报单价格
    /// typedef double TThostFtdcPriceType
    double CThostFtdcQryMaxOrderVolumeWithPriceField_Price = 0.0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryMaxOrderVolumeWithPriceField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryMaxOrderVolumeWithPriceField_ExchangeID_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcQryMaxOrderVolumeWithPriceField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcQryMaxOrderVolumeWithPriceField_InvestUnitID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryMaxOrderVolumeWithPriceField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcQryMaxOrderVolumeWithPriceField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#cccidy#y#y#", (char **)kwlist
        , &CThostFtdcQryMaxOrderVolumeWithPriceField_BrokerID, &CThostFtdcQryMaxOrderVolumeWithPriceField_BrokerID_length
        , &CThostFtdcQryMaxOrderVolumeWithPriceField_InvestorID, &CThostFtdcQryMaxOrderVolumeWithPriceField_InvestorID_length
        , &CThostFtdcQryMaxOrderVolumeWithPriceField_reserve1, &CThostFtdcQryMaxOrderVolumeWithPriceField_reserve1_length
        , &CThostFtdcQryMaxOrderVolumeWithPriceField_Direction
        , &CThostFtdcQryMaxOrderVolumeWithPriceField_OffsetFlag
        , &CThostFtdcQryMaxOrderVolumeWithPriceField_HedgeFlag
        , &CThostFtdcQryMaxOrderVolumeWithPriceField_MaxVolume
        , &CThostFtdcQryMaxOrderVolumeWithPriceField_Price
        , &CThostFtdcQryMaxOrderVolumeWithPriceField_ExchangeID, &CThostFtdcQryMaxOrderVolumeWithPriceField_ExchangeID_length
        , &CThostFtdcQryMaxOrderVolumeWithPriceField_InvestUnitID, &CThostFtdcQryMaxOrderVolumeWithPriceField_InvestUnitID_length
        , &CThostFtdcQryMaxOrderVolumeWithPriceField_InstrumentID, &CThostFtdcQryMaxOrderVolumeWithPriceField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryMaxOrderVolumeWithPriceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryMaxOrderVolumeWithPriceFieldData>(self);
    CThostFtdcQryMaxOrderVolumeWithPriceField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryMaxOrderVolumeWithPriceField_BrokerID != NULL ) {
        if(CThostFtdcQryMaxOrderVolumeWithPriceField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryMaxOrderVolumeWithPriceField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryMaxOrderVolumeWithPriceField_BrokerID, CThostFtdcQryMaxOrderVolumeWithPriceField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryMaxOrderVolumeWithPriceField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryMaxOrderVolumeWithPriceField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryMaxOrderVolumeWithPriceField_InvestorID != NULL ) {
        if(CThostFtdcQryMaxOrderVolumeWithPriceField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryMaxOrderVolumeWithPriceField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryMaxOrderVolumeWithPriceField_InvestorID, CThostFtdcQryMaxOrderVolumeWithPriceField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryMaxOrderVolumeWithPriceField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryMaxOrderVolumeWithPriceField_InvestorID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcQryMaxOrderVolumeWithPriceField_reserve1 != NULL ) {
        if(CThostFtdcQryMaxOrderVolumeWithPriceField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcQryMaxOrderVolumeWithPriceField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcQryMaxOrderVolumeWithPriceField_reserve1, CThostFtdcQryMaxOrderVolumeWithPriceField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcQryMaxOrderVolumeWithPriceField_reserve1, sizeof(data->reserve1));
        CThostFtdcQryMaxOrderVolumeWithPriceField_reserve1 = NULL;
    }

    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    data->Direction = CThostFtdcQryMaxOrderVolumeWithPriceField_Direction;

    /// 开平标志
    /// typedef char TThostFtdcOffsetFlagType
    data->OffsetFlag = CThostFtdcQryMaxOrderVolumeWithPriceField_OffsetFlag;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    data->HedgeFlag = CThostFtdcQryMaxOrderVolumeWithPriceField_HedgeFlag;

    /// 最大允许报单数量
    /// typedef int TThostFtdcVolumeType
    data->MaxVolume = CThostFtdcQryMaxOrderVolumeWithPriceField_MaxVolume;

    /// 报单价格
    /// typedef double TThostFtdcPriceType
    data->Price = CThostFtdcQryMaxOrderVolumeWithPriceField_Price;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryMaxOrderVolumeWithPriceField_ExchangeID != NULL ) {
        if(CThostFtdcQryMaxOrderVolumeWithPriceField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryMaxOrderVolumeWithPriceField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryMaxOrderVolumeWithPriceField_ExchangeID, CThostFtdcQryMaxOrderVolumeWithPriceField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryMaxOrderVolumeWithPriceField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryMaxOrderVolumeWithPriceField_ExchangeID = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcQryMaxOrderVolumeWithPriceField_InvestUnitID != NULL ) {
        if(CThostFtdcQryMaxOrderVolumeWithPriceField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcQryMaxOrderVolumeWithPriceField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcQryMaxOrderVolumeWithPriceField_InvestUnitID, CThostFtdcQryMaxOrderVolumeWithPriceField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcQryMaxOrderVolumeWithPriceField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcQryMaxOrderVolumeWithPriceField_InvestUnitID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryMaxOrderVolumeWithPriceField_InstrumentID != NULL ) {
        if(CThostFtdcQryMaxOrderVolumeWithPriceField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcQryMaxOrderVolumeWithPriceField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcQryMaxOrderVolumeWithPriceField_InstrumentID, CThostFtdcQryMaxOrderVolumeWithPriceField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcQryMaxOrderVolumeWithPriceField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcQryMaxOrderVolumeWithPriceField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_repr(PyObject *self) {

    PyCThostFtdcQryMaxOrderVolumeWithPriceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryMaxOrderVolumeWithPriceFieldData>(self);
    CThostFtdcQryMaxOrderVolumeWithPriceField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:c,s:c,s:c,s:i,s:d,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "Direction", data->Direction
        , "OffsetFlag", data->OffsetFlag
        , "HedgeFlag", data->HedgeFlag
        , "MaxVolume", data->MaxVolume
        , "Price", data->Price
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryMaxOrderVolumeWithPriceField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryMaxOrderVolumeWithPriceField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryMaxOrderVolumeWithPriceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryMaxOrderVolumeWithPriceFieldData>(self);
    CThostFtdcQryMaxOrderVolumeWithPriceField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryMaxOrderVolumeWithPriceField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryMaxOrderVolumeWithPriceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryMaxOrderVolumeWithPriceFieldData>(self);
    CThostFtdcQryMaxOrderVolumeWithPriceField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryMaxOrderVolumeWithPriceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryMaxOrderVolumeWithPriceFieldData>(self);
    CThostFtdcQryMaxOrderVolumeWithPriceField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryMaxOrderVolumeWithPriceField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryMaxOrderVolumeWithPriceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryMaxOrderVolumeWithPriceFieldData>(self);
    CThostFtdcQryMaxOrderVolumeWithPriceField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcQryMaxOrderVolumeWithPriceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryMaxOrderVolumeWithPriceFieldData>(self);
    CThostFtdcQryMaxOrderVolumeWithPriceField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryMaxOrderVolumeWithPriceField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryMaxOrderVolumeWithPriceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryMaxOrderVolumeWithPriceFieldData>(self);
    CThostFtdcQryMaxOrderVolumeWithPriceField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 买卖方向
/// typedef char TThostFtdcDirectionType
static PyObject *PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_get_Direction(PyObject *self, void *closure) {
    PyCThostFtdcQryMaxOrderVolumeWithPriceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryMaxOrderVolumeWithPriceFieldData>(self);
    CThostFtdcQryMaxOrderVolumeWithPriceField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->Direction), 1);
}

static int PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_set_Direction(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Direction Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcQryMaxOrderVolumeWithPriceField::Direction)) {
        PyErr_SetString(PyExc_ValueError, "Direction must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryMaxOrderVolumeWithPriceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryMaxOrderVolumeWithPriceFieldData>(self);
    CThostFtdcQryMaxOrderVolumeWithPriceField *data = &(extra->data);
    data->Direction = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 开平标志
/// typedef char TThostFtdcOffsetFlagType
static PyObject *PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_get_OffsetFlag(PyObject *self, void *closure) {
    PyCThostFtdcQryMaxOrderVolumeWithPriceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryMaxOrderVolumeWithPriceFieldData>(self);
    CThostFtdcQryMaxOrderVolumeWithPriceField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OffsetFlag), 1);
}

static int PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_set_OffsetFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OffsetFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcQryMaxOrderVolumeWithPriceField::OffsetFlag)) {
        PyErr_SetString(PyExc_ValueError, "OffsetFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryMaxOrderVolumeWithPriceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryMaxOrderVolumeWithPriceFieldData>(self);
    CThostFtdcQryMaxOrderVolumeWithPriceField *data = &(extra->data);
    data->OffsetFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投机套保标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_get_HedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcQryMaxOrderVolumeWithPriceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryMaxOrderVolumeWithPriceFieldData>(self);
    CThostFtdcQryMaxOrderVolumeWithPriceField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->HedgeFlag), 1);
}

static int PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_set_HedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcQryMaxOrderVolumeWithPriceField::HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryMaxOrderVolumeWithPriceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryMaxOrderVolumeWithPriceFieldData>(self);
    CThostFtdcQryMaxOrderVolumeWithPriceField *data = &(extra->data);
    data->HedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryMaxOrderVolumeWithPriceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryMaxOrderVolumeWithPriceFieldData>(self);
    CThostFtdcQryMaxOrderVolumeWithPriceField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryMaxOrderVolumeWithPriceField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryMaxOrderVolumeWithPriceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryMaxOrderVolumeWithPriceFieldData>(self);
    CThostFtdcQryMaxOrderVolumeWithPriceField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcQryMaxOrderVolumeWithPriceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryMaxOrderVolumeWithPriceFieldData>(self);
    CThostFtdcQryMaxOrderVolumeWithPriceField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryMaxOrderVolumeWithPriceField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryMaxOrderVolumeWithPriceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryMaxOrderVolumeWithPriceFieldData>(self);
    CThostFtdcQryMaxOrderVolumeWithPriceField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcQryMaxOrderVolumeWithPriceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryMaxOrderVolumeWithPriceFieldData>(self);
    CThostFtdcQryMaxOrderVolumeWithPriceField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryMaxOrderVolumeWithPriceField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryMaxOrderVolumeWithPriceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryMaxOrderVolumeWithPriceFieldData>(self);
    CThostFtdcQryMaxOrderVolumeWithPriceField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_members[] = {
    /// 最大允许报单数量
    /// typedef int TThostFtdcVolumeType
    {
        .name = "MaxVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcQryMaxOrderVolumeWithPriceFieldData, data.MaxVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("最大允许报单数量")
    },
    /// 报单价格
    /// typedef double TThostFtdcPriceType
    {
        .name = "Price",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcQryMaxOrderVolumeWithPriceFieldData, data.Price),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("报单价格")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_get_BrokerID,
    .set = PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_get_InvestorID,
    .set = PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_get_reserve1,
    .set = PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    {
    .name = "Direction",
    .get = PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_get_Direction,
    .set = PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_set_Direction,
    .doc = PyDoc_STR("买卖方向"),
    },
    /// 开平标志
    /// typedef char TThostFtdcOffsetFlagType
    {
    .name = "OffsetFlag",
    .get = PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_get_OffsetFlag,
    .set = PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_set_OffsetFlag,
    .doc = PyDoc_STR("开平标志"),
    },
    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "HedgeFlag",
    .get = PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_get_HedgeFlag,
    .set = PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_set_HedgeFlag,
    .doc = PyDoc_STR("投机套保标志"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_get_InvestUnitID,
    .set = PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_get_InstrumentID,
    .set = PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryMaxOrderVolumeWithPriceField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("根据价格查询最大报单数量")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryMaxOrderVolumeWithPriceFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("根据价格查询最大报单数量")},
    {Py_tp_members, PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryMaxOrderVolumeWithPriceField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryMaxOrderVolumeWithPriceFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryMaxOrderVolumeWithPriceFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryMaxOrderVolumeWithPriceField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryMaxOrderVolumeWithPriceField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}