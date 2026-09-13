
#include "PyCThostFtdcInstrumentCommissionRateField.h"

///合约手续费率

static int PyCThostFtdcInstrumentCommissionRateFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "reserve1", "InvestorRange", "BrokerID", "InvestorID", "OpenRatioByMoney", "OpenRatioByVolume", "CloseRatioByMoney", "CloseRatioByVolume", "CloseTodayRatioByMoney", "CloseTodayRatioByVolume", "ExchangeID", "BizType", "InvestUnitID", "InstrumentID", NULL };


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcInstrumentCommissionRateField_reserve1 = NULL;
    Py_ssize_t CThostFtdcInstrumentCommissionRateField_reserve1_length = 0;

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    char CThostFtdcInstrumentCommissionRateField_InvestorRange = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcInstrumentCommissionRateField_BrokerID = NULL;
    Py_ssize_t CThostFtdcInstrumentCommissionRateField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInstrumentCommissionRateField_InvestorID = NULL;
    Py_ssize_t CThostFtdcInstrumentCommissionRateField_InvestorID_length = 0;

    /// 开仓手续费率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcInstrumentCommissionRateField_OpenRatioByMoney = 0.0;

    /// 开仓手续费
    /// typedef double TThostFtdcRatioType
    double CThostFtdcInstrumentCommissionRateField_OpenRatioByVolume = 0.0;

    /// 平仓手续费率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcInstrumentCommissionRateField_CloseRatioByMoney = 0.0;

    /// 平仓手续费
    /// typedef double TThostFtdcRatioType
    double CThostFtdcInstrumentCommissionRateField_CloseRatioByVolume = 0.0;

    /// 平今手续费率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcInstrumentCommissionRateField_CloseTodayRatioByMoney = 0.0;

    /// 平今手续费
    /// typedef double TThostFtdcRatioType
    double CThostFtdcInstrumentCommissionRateField_CloseTodayRatioByVolume = 0.0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcInstrumentCommissionRateField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcInstrumentCommissionRateField_ExchangeID_length = 0;

    /// 业务类型
    /// typedef char TThostFtdcBizTypeType
    char CThostFtdcInstrumentCommissionRateField_BizType = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcInstrumentCommissionRateField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcInstrumentCommissionRateField_InvestUnitID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcInstrumentCommissionRateField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcInstrumentCommissionRateField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#ddddddy#cy#y#", (char **)kwlist
        , &CThostFtdcInstrumentCommissionRateField_reserve1, &CThostFtdcInstrumentCommissionRateField_reserve1_length
        , &CThostFtdcInstrumentCommissionRateField_InvestorRange
        , &CThostFtdcInstrumentCommissionRateField_BrokerID, &CThostFtdcInstrumentCommissionRateField_BrokerID_length
        , &CThostFtdcInstrumentCommissionRateField_InvestorID, &CThostFtdcInstrumentCommissionRateField_InvestorID_length
        , &CThostFtdcInstrumentCommissionRateField_OpenRatioByMoney
        , &CThostFtdcInstrumentCommissionRateField_OpenRatioByVolume
        , &CThostFtdcInstrumentCommissionRateField_CloseRatioByMoney
        , &CThostFtdcInstrumentCommissionRateField_CloseRatioByVolume
        , &CThostFtdcInstrumentCommissionRateField_CloseTodayRatioByMoney
        , &CThostFtdcInstrumentCommissionRateField_CloseTodayRatioByVolume
        , &CThostFtdcInstrumentCommissionRateField_ExchangeID, &CThostFtdcInstrumentCommissionRateField_ExchangeID_length
        , &CThostFtdcInstrumentCommissionRateField_BizType
        , &CThostFtdcInstrumentCommissionRateField_InvestUnitID, &CThostFtdcInstrumentCommissionRateField_InvestUnitID_length
        , &CThostFtdcInstrumentCommissionRateField_InstrumentID, &CThostFtdcInstrumentCommissionRateField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcInstrumentCommissionRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentCommissionRateFieldData>(self);
    CThostFtdcInstrumentCommissionRateField *data = &(extra->data);


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcInstrumentCommissionRateField_reserve1 != NULL ) {
        if(CThostFtdcInstrumentCommissionRateField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcInstrumentCommissionRateField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcInstrumentCommissionRateField_reserve1, CThostFtdcInstrumentCommissionRateField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcInstrumentCommissionRateField_reserve1, sizeof(data->reserve1));
        CThostFtdcInstrumentCommissionRateField_reserve1 = NULL;
    }

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    data->InvestorRange = CThostFtdcInstrumentCommissionRateField_InvestorRange;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcInstrumentCommissionRateField_BrokerID != NULL ) {
        if(CThostFtdcInstrumentCommissionRateField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcInstrumentCommissionRateField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcInstrumentCommissionRateField_BrokerID, CThostFtdcInstrumentCommissionRateField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcInstrumentCommissionRateField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcInstrumentCommissionRateField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInstrumentCommissionRateField_InvestorID != NULL ) {
        if(CThostFtdcInstrumentCommissionRateField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcInstrumentCommissionRateField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcInstrumentCommissionRateField_InvestorID, CThostFtdcInstrumentCommissionRateField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcInstrumentCommissionRateField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcInstrumentCommissionRateField_InvestorID = NULL;
    }

    /// 开仓手续费率
    /// typedef double TThostFtdcRatioType
    data->OpenRatioByMoney = CThostFtdcInstrumentCommissionRateField_OpenRatioByMoney;

    /// 开仓手续费
    /// typedef double TThostFtdcRatioType
    data->OpenRatioByVolume = CThostFtdcInstrumentCommissionRateField_OpenRatioByVolume;

    /// 平仓手续费率
    /// typedef double TThostFtdcRatioType
    data->CloseRatioByMoney = CThostFtdcInstrumentCommissionRateField_CloseRatioByMoney;

    /// 平仓手续费
    /// typedef double TThostFtdcRatioType
    data->CloseRatioByVolume = CThostFtdcInstrumentCommissionRateField_CloseRatioByVolume;

    /// 平今手续费率
    /// typedef double TThostFtdcRatioType
    data->CloseTodayRatioByMoney = CThostFtdcInstrumentCommissionRateField_CloseTodayRatioByMoney;

    /// 平今手续费
    /// typedef double TThostFtdcRatioType
    data->CloseTodayRatioByVolume = CThostFtdcInstrumentCommissionRateField_CloseTodayRatioByVolume;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcInstrumentCommissionRateField_ExchangeID != NULL ) {
        if(CThostFtdcInstrumentCommissionRateField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcInstrumentCommissionRateField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcInstrumentCommissionRateField_ExchangeID, CThostFtdcInstrumentCommissionRateField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcInstrumentCommissionRateField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcInstrumentCommissionRateField_ExchangeID = NULL;
    }

    /// 业务类型
    /// typedef char TThostFtdcBizTypeType
    data->BizType = CThostFtdcInstrumentCommissionRateField_BizType;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcInstrumentCommissionRateField_InvestUnitID != NULL ) {
        if(CThostFtdcInstrumentCommissionRateField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcInstrumentCommissionRateField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcInstrumentCommissionRateField_InvestUnitID, CThostFtdcInstrumentCommissionRateField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcInstrumentCommissionRateField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcInstrumentCommissionRateField_InvestUnitID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcInstrumentCommissionRateField_InstrumentID != NULL ) {
        if(CThostFtdcInstrumentCommissionRateField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcInstrumentCommissionRateField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcInstrumentCommissionRateField_InstrumentID, CThostFtdcInstrumentCommissionRateField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcInstrumentCommissionRateField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcInstrumentCommissionRateField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcInstrumentCommissionRateFieldType_repr(PyObject *self) {

    PyCThostFtdcInstrumentCommissionRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentCommissionRateFieldData>(self);
    CThostFtdcInstrumentCommissionRateField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:c,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:y,s:c,s:y,s:y}"
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "InvestorRange", data->InvestorRange
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "OpenRatioByMoney", data->OpenRatioByMoney
        , "OpenRatioByVolume", data->OpenRatioByVolume
        , "CloseRatioByMoney", data->CloseRatioByMoney
        , "CloseRatioByVolume", data->CloseRatioByVolume
        , "CloseTodayRatioByMoney", data->CloseTodayRatioByMoney
        , "CloseTodayRatioByVolume", data->CloseTodayRatioByVolume
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "BizType", data->BizType
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInstrumentCommissionRateField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInstrumentCommissionRateField repr");
        return NULL;
    }

    return repr;
}


/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcInstrumentCommissionRateFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentCommissionRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentCommissionRateFieldData>(self);
    CThostFtdcInstrumentCommissionRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcInstrumentCommissionRateFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentCommissionRateField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentCommissionRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentCommissionRateFieldData>(self);
    CThostFtdcInstrumentCommissionRateField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者范围
/// typedef char TThostFtdcInvestorRangeType
static PyObject *PyCThostFtdcInstrumentCommissionRateFieldType_get_InvestorRange(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentCommissionRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentCommissionRateFieldData>(self);
    CThostFtdcInstrumentCommissionRateField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->InvestorRange), 1);
}

static int PyCThostFtdcInstrumentCommissionRateFieldType_set_InvestorRange(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorRange Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInstrumentCommissionRateField::InvestorRange)) {
        PyErr_SetString(PyExc_ValueError, "InvestorRange must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentCommissionRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentCommissionRateFieldData>(self);
    CThostFtdcInstrumentCommissionRateField *data = &(extra->data);
    data->InvestorRange = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcInstrumentCommissionRateFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentCommissionRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentCommissionRateFieldData>(self);
    CThostFtdcInstrumentCommissionRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcInstrumentCommissionRateFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentCommissionRateField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentCommissionRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentCommissionRateFieldData>(self);
    CThostFtdcInstrumentCommissionRateField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInstrumentCommissionRateFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentCommissionRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentCommissionRateFieldData>(self);
    CThostFtdcInstrumentCommissionRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcInstrumentCommissionRateFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentCommissionRateField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentCommissionRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentCommissionRateFieldData>(self);
    CThostFtdcInstrumentCommissionRateField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcInstrumentCommissionRateFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentCommissionRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentCommissionRateFieldData>(self);
    CThostFtdcInstrumentCommissionRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcInstrumentCommissionRateFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentCommissionRateField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentCommissionRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentCommissionRateFieldData>(self);
    CThostFtdcInstrumentCommissionRateField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 业务类型
/// typedef char TThostFtdcBizTypeType
static PyObject *PyCThostFtdcInstrumentCommissionRateFieldType_get_BizType(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentCommissionRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentCommissionRateFieldData>(self);
    CThostFtdcInstrumentCommissionRateField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BizType), 1);
}

static int PyCThostFtdcInstrumentCommissionRateFieldType_set_BizType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BizType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInstrumentCommissionRateField::BizType)) {
        PyErr_SetString(PyExc_ValueError, "BizType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentCommissionRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentCommissionRateFieldData>(self);
    CThostFtdcInstrumentCommissionRateField *data = &(extra->data);
    data->BizType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcInstrumentCommissionRateFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentCommissionRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentCommissionRateFieldData>(self);
    CThostFtdcInstrumentCommissionRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcInstrumentCommissionRateFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentCommissionRateField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentCommissionRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentCommissionRateFieldData>(self);
    CThostFtdcInstrumentCommissionRateField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcInstrumentCommissionRateFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentCommissionRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentCommissionRateFieldData>(self);
    CThostFtdcInstrumentCommissionRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcInstrumentCommissionRateFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentCommissionRateField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentCommissionRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentCommissionRateFieldData>(self);
    CThostFtdcInstrumentCommissionRateField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcInstrumentCommissionRateFieldType_members[] = {
    /// 开仓手续费率
    /// typedef double TThostFtdcRatioType
    {
        .name = "OpenRatioByMoney",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInstrumentCommissionRateFieldData, data.OpenRatioByMoney),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("开仓手续费率")
    },
    /// 开仓手续费
    /// typedef double TThostFtdcRatioType
    {
        .name = "OpenRatioByVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInstrumentCommissionRateFieldData, data.OpenRatioByVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("开仓手续费")
    },
    /// 平仓手续费率
    /// typedef double TThostFtdcRatioType
    {
        .name = "CloseRatioByMoney",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInstrumentCommissionRateFieldData, data.CloseRatioByMoney),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("平仓手续费率")
    },
    /// 平仓手续费
    /// typedef double TThostFtdcRatioType
    {
        .name = "CloseRatioByVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInstrumentCommissionRateFieldData, data.CloseRatioByVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("平仓手续费")
    },
    /// 平今手续费率
    /// typedef double TThostFtdcRatioType
    {
        .name = "CloseTodayRatioByMoney",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInstrumentCommissionRateFieldData, data.CloseTodayRatioByMoney),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("平今手续费率")
    },
    /// 平今手续费
    /// typedef double TThostFtdcRatioType
    {
        .name = "CloseTodayRatioByVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInstrumentCommissionRateFieldData, data.CloseTodayRatioByVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("平今手续费")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcInstrumentCommissionRateFieldType_getsets[] = {
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcInstrumentCommissionRateFieldType_get_reserve1,
    .set = PyCThostFtdcInstrumentCommissionRateFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    {
    .name = "InvestorRange",
    .get = PyCThostFtdcInstrumentCommissionRateFieldType_get_InvestorRange,
    .set = PyCThostFtdcInstrumentCommissionRateFieldType_set_InvestorRange,
    .doc = PyDoc_STR("投资者范围"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcInstrumentCommissionRateFieldType_get_BrokerID,
    .set = PyCThostFtdcInstrumentCommissionRateFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcInstrumentCommissionRateFieldType_get_InvestorID,
    .set = PyCThostFtdcInstrumentCommissionRateFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcInstrumentCommissionRateFieldType_get_ExchangeID,
    .set = PyCThostFtdcInstrumentCommissionRateFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 业务类型
    /// typedef char TThostFtdcBizTypeType
    {
    .name = "BizType",
    .get = PyCThostFtdcInstrumentCommissionRateFieldType_get_BizType,
    .set = PyCThostFtdcInstrumentCommissionRateFieldType_set_BizType,
    .doc = PyDoc_STR("业务类型"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcInstrumentCommissionRateFieldType_get_InvestUnitID,
    .set = PyCThostFtdcInstrumentCommissionRateFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcInstrumentCommissionRateFieldType_get_InstrumentID,
    .set = PyCThostFtdcInstrumentCommissionRateFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcInstrumentCommissionRateFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcInstrumentCommissionRateField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("合约手续费率")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcInstrumentCommissionRateFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcInstrumentCommissionRateFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcInstrumentCommissionRateFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcInstrumentCommissionRateFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcInstrumentCommissionRateFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcInstrumentCommissionRateFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("合约手续费率")},
    {Py_tp_members, PyCThostFtdcInstrumentCommissionRateFieldType_members},
    {Py_tp_getset, PyCThostFtdcInstrumentCommissionRateFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcInstrumentCommissionRateFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcInstrumentCommissionRateFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcInstrumentCommissionRateFieldType_spec = {
    .name = "PyCTP.CThostFtdcInstrumentCommissionRateField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcInstrumentCommissionRateFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcInstrumentCommissionRateFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcInstrumentCommissionRateFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcInstrumentCommissionRateFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcInstrumentCommissionRateFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcInstrumentCommissionRateFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcInstrumentCommissionRateFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcInstrumentCommissionRateFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcInstrumentCommissionRateField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInstrumentCommissionRateField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}