
#include "PyCThostFtdcOptionInstrCommRateField.h"

///当前期权合约手续费的详细内容

static int PyCThostFtdcOptionInstrCommRateFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "reserve1", "InvestorRange", "BrokerID", "InvestorID", "OpenRatioByMoney", "OpenRatioByVolume", "CloseRatioByMoney", "CloseRatioByVolume", "CloseTodayRatioByMoney", "CloseTodayRatioByVolume", "StrikeRatioByMoney", "StrikeRatioByVolume", "ExchangeID", "InvestUnitID", "InstrumentID", NULL };


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcOptionInstrCommRateField_reserve1 = NULL;
    Py_ssize_t CThostFtdcOptionInstrCommRateField_reserve1_length = 0;

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    char CThostFtdcOptionInstrCommRateField_InvestorRange = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcOptionInstrCommRateField_BrokerID = NULL;
    Py_ssize_t CThostFtdcOptionInstrCommRateField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcOptionInstrCommRateField_InvestorID = NULL;
    Py_ssize_t CThostFtdcOptionInstrCommRateField_InvestorID_length = 0;

    /// 开仓手续费率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcOptionInstrCommRateField_OpenRatioByMoney = 0.0;

    /// 开仓手续费
    /// typedef double TThostFtdcRatioType
    double CThostFtdcOptionInstrCommRateField_OpenRatioByVolume = 0.0;

    /// 平仓手续费率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcOptionInstrCommRateField_CloseRatioByMoney = 0.0;

    /// 平仓手续费
    /// typedef double TThostFtdcRatioType
    double CThostFtdcOptionInstrCommRateField_CloseRatioByVolume = 0.0;

    /// 平今手续费率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcOptionInstrCommRateField_CloseTodayRatioByMoney = 0.0;

    /// 平今手续费
    /// typedef double TThostFtdcRatioType
    double CThostFtdcOptionInstrCommRateField_CloseTodayRatioByVolume = 0.0;

    /// 执行手续费率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcOptionInstrCommRateField_StrikeRatioByMoney = 0.0;

    /// 执行手续费
    /// typedef double TThostFtdcRatioType
    double CThostFtdcOptionInstrCommRateField_StrikeRatioByVolume = 0.0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcOptionInstrCommRateField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcOptionInstrCommRateField_ExchangeID_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcOptionInstrCommRateField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcOptionInstrCommRateField_InvestUnitID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcOptionInstrCommRateField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcOptionInstrCommRateField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#ddddddddy#y#y#", (char **)kwlist
        , &CThostFtdcOptionInstrCommRateField_reserve1, &CThostFtdcOptionInstrCommRateField_reserve1_length
        , &CThostFtdcOptionInstrCommRateField_InvestorRange
        , &CThostFtdcOptionInstrCommRateField_BrokerID, &CThostFtdcOptionInstrCommRateField_BrokerID_length
        , &CThostFtdcOptionInstrCommRateField_InvestorID, &CThostFtdcOptionInstrCommRateField_InvestorID_length
        , &CThostFtdcOptionInstrCommRateField_OpenRatioByMoney
        , &CThostFtdcOptionInstrCommRateField_OpenRatioByVolume
        , &CThostFtdcOptionInstrCommRateField_CloseRatioByMoney
        , &CThostFtdcOptionInstrCommRateField_CloseRatioByVolume
        , &CThostFtdcOptionInstrCommRateField_CloseTodayRatioByMoney
        , &CThostFtdcOptionInstrCommRateField_CloseTodayRatioByVolume
        , &CThostFtdcOptionInstrCommRateField_StrikeRatioByMoney
        , &CThostFtdcOptionInstrCommRateField_StrikeRatioByVolume
        , &CThostFtdcOptionInstrCommRateField_ExchangeID, &CThostFtdcOptionInstrCommRateField_ExchangeID_length
        , &CThostFtdcOptionInstrCommRateField_InvestUnitID, &CThostFtdcOptionInstrCommRateField_InvestUnitID_length
        , &CThostFtdcOptionInstrCommRateField_InstrumentID, &CThostFtdcOptionInstrCommRateField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcOptionInstrCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrCommRateFieldData>(self);
    CThostFtdcOptionInstrCommRateField *data = &(extra->data);


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcOptionInstrCommRateField_reserve1 != NULL ) {
        if(CThostFtdcOptionInstrCommRateField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcOptionInstrCommRateField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcOptionInstrCommRateField_reserve1, CThostFtdcOptionInstrCommRateField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcOptionInstrCommRateField_reserve1, sizeof(data->reserve1));
        CThostFtdcOptionInstrCommRateField_reserve1 = NULL;
    }

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    data->InvestorRange = CThostFtdcOptionInstrCommRateField_InvestorRange;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcOptionInstrCommRateField_BrokerID != NULL ) {
        if(CThostFtdcOptionInstrCommRateField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcOptionInstrCommRateField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcOptionInstrCommRateField_BrokerID, CThostFtdcOptionInstrCommRateField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcOptionInstrCommRateField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcOptionInstrCommRateField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcOptionInstrCommRateField_InvestorID != NULL ) {
        if(CThostFtdcOptionInstrCommRateField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcOptionInstrCommRateField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcOptionInstrCommRateField_InvestorID, CThostFtdcOptionInstrCommRateField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcOptionInstrCommRateField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcOptionInstrCommRateField_InvestorID = NULL;
    }

    /// 开仓手续费率
    /// typedef double TThostFtdcRatioType
    data->OpenRatioByMoney = CThostFtdcOptionInstrCommRateField_OpenRatioByMoney;

    /// 开仓手续费
    /// typedef double TThostFtdcRatioType
    data->OpenRatioByVolume = CThostFtdcOptionInstrCommRateField_OpenRatioByVolume;

    /// 平仓手续费率
    /// typedef double TThostFtdcRatioType
    data->CloseRatioByMoney = CThostFtdcOptionInstrCommRateField_CloseRatioByMoney;

    /// 平仓手续费
    /// typedef double TThostFtdcRatioType
    data->CloseRatioByVolume = CThostFtdcOptionInstrCommRateField_CloseRatioByVolume;

    /// 平今手续费率
    /// typedef double TThostFtdcRatioType
    data->CloseTodayRatioByMoney = CThostFtdcOptionInstrCommRateField_CloseTodayRatioByMoney;

    /// 平今手续费
    /// typedef double TThostFtdcRatioType
    data->CloseTodayRatioByVolume = CThostFtdcOptionInstrCommRateField_CloseTodayRatioByVolume;

    /// 执行手续费率
    /// typedef double TThostFtdcRatioType
    data->StrikeRatioByMoney = CThostFtdcOptionInstrCommRateField_StrikeRatioByMoney;

    /// 执行手续费
    /// typedef double TThostFtdcRatioType
    data->StrikeRatioByVolume = CThostFtdcOptionInstrCommRateField_StrikeRatioByVolume;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcOptionInstrCommRateField_ExchangeID != NULL ) {
        if(CThostFtdcOptionInstrCommRateField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcOptionInstrCommRateField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcOptionInstrCommRateField_ExchangeID, CThostFtdcOptionInstrCommRateField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcOptionInstrCommRateField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcOptionInstrCommRateField_ExchangeID = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcOptionInstrCommRateField_InvestUnitID != NULL ) {
        if(CThostFtdcOptionInstrCommRateField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcOptionInstrCommRateField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcOptionInstrCommRateField_InvestUnitID, CThostFtdcOptionInstrCommRateField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcOptionInstrCommRateField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcOptionInstrCommRateField_InvestUnitID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcOptionInstrCommRateField_InstrumentID != NULL ) {
        if(CThostFtdcOptionInstrCommRateField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcOptionInstrCommRateField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcOptionInstrCommRateField_InstrumentID, CThostFtdcOptionInstrCommRateField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcOptionInstrCommRateField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcOptionInstrCommRateField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcOptionInstrCommRateFieldType_repr(PyObject *self) {

    PyCThostFtdcOptionInstrCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrCommRateFieldData>(self);
    CThostFtdcOptionInstrCommRateField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:c,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:y,s:y,s:y}"
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
        , "StrikeRatioByMoney", data->StrikeRatioByMoney
        , "StrikeRatioByVolume", data->StrikeRatioByVolume
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcOptionInstrCommRateField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcOptionInstrCommRateField repr");
        return NULL;
    }

    return repr;
}


/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcOptionInstrCommRateFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcOptionInstrCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrCommRateFieldData>(self);
    CThostFtdcOptionInstrCommRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcOptionInstrCommRateFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionInstrCommRateField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionInstrCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrCommRateFieldData>(self);
    CThostFtdcOptionInstrCommRateField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者范围
/// typedef char TThostFtdcInvestorRangeType
static PyObject *PyCThostFtdcOptionInstrCommRateFieldType_get_InvestorRange(PyObject *self, void *closure) {
    PyCThostFtdcOptionInstrCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrCommRateFieldData>(self);
    CThostFtdcOptionInstrCommRateField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->InvestorRange), 1);
}

static int PyCThostFtdcOptionInstrCommRateFieldType_set_InvestorRange(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorRange Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcOptionInstrCommRateField::InvestorRange)) {
        PyErr_SetString(PyExc_ValueError, "InvestorRange must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionInstrCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrCommRateFieldData>(self);
    CThostFtdcOptionInstrCommRateField *data = &(extra->data);
    data->InvestorRange = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcOptionInstrCommRateFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcOptionInstrCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrCommRateFieldData>(self);
    CThostFtdcOptionInstrCommRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcOptionInstrCommRateFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionInstrCommRateField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionInstrCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrCommRateFieldData>(self);
    CThostFtdcOptionInstrCommRateField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcOptionInstrCommRateFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcOptionInstrCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrCommRateFieldData>(self);
    CThostFtdcOptionInstrCommRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcOptionInstrCommRateFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionInstrCommRateField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionInstrCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrCommRateFieldData>(self);
    CThostFtdcOptionInstrCommRateField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcOptionInstrCommRateFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcOptionInstrCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrCommRateFieldData>(self);
    CThostFtdcOptionInstrCommRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcOptionInstrCommRateFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionInstrCommRateField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionInstrCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrCommRateFieldData>(self);
    CThostFtdcOptionInstrCommRateField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcOptionInstrCommRateFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcOptionInstrCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrCommRateFieldData>(self);
    CThostFtdcOptionInstrCommRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcOptionInstrCommRateFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionInstrCommRateField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionInstrCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrCommRateFieldData>(self);
    CThostFtdcOptionInstrCommRateField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcOptionInstrCommRateFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcOptionInstrCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrCommRateFieldData>(self);
    CThostFtdcOptionInstrCommRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcOptionInstrCommRateFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionInstrCommRateField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionInstrCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrCommRateFieldData>(self);
    CThostFtdcOptionInstrCommRateField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcOptionInstrCommRateFieldType_members[] = {
    /// 开仓手续费率
    /// typedef double TThostFtdcRatioType
    {
        .name = "OpenRatioByMoney",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcOptionInstrCommRateFieldData, data.OpenRatioByMoney),
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
        .offset = offsetof(PyCThostFtdcOptionInstrCommRateFieldData, data.OpenRatioByVolume),
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
        .offset = offsetof(PyCThostFtdcOptionInstrCommRateFieldData, data.CloseRatioByMoney),
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
        .offset = offsetof(PyCThostFtdcOptionInstrCommRateFieldData, data.CloseRatioByVolume),
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
        .offset = offsetof(PyCThostFtdcOptionInstrCommRateFieldData, data.CloseTodayRatioByMoney),
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
        .offset = offsetof(PyCThostFtdcOptionInstrCommRateFieldData, data.CloseTodayRatioByVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("平今手续费")
    },
    /// 执行手续费率
    /// typedef double TThostFtdcRatioType
    {
        .name = "StrikeRatioByMoney",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcOptionInstrCommRateFieldData, data.StrikeRatioByMoney),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("执行手续费率")
    },
    /// 执行手续费
    /// typedef double TThostFtdcRatioType
    {
        .name = "StrikeRatioByVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcOptionInstrCommRateFieldData, data.StrikeRatioByVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("执行手续费")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcOptionInstrCommRateFieldType_getsets[] = {
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcOptionInstrCommRateFieldType_get_reserve1,
    .set = PyCThostFtdcOptionInstrCommRateFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    {
    .name = "InvestorRange",
    .get = PyCThostFtdcOptionInstrCommRateFieldType_get_InvestorRange,
    .set = PyCThostFtdcOptionInstrCommRateFieldType_set_InvestorRange,
    .doc = PyDoc_STR("投资者范围"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcOptionInstrCommRateFieldType_get_BrokerID,
    .set = PyCThostFtdcOptionInstrCommRateFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcOptionInstrCommRateFieldType_get_InvestorID,
    .set = PyCThostFtdcOptionInstrCommRateFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcOptionInstrCommRateFieldType_get_ExchangeID,
    .set = PyCThostFtdcOptionInstrCommRateFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcOptionInstrCommRateFieldType_get_InvestUnitID,
    .set = PyCThostFtdcOptionInstrCommRateFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcOptionInstrCommRateFieldType_get_InstrumentID,
    .set = PyCThostFtdcOptionInstrCommRateFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcOptionInstrCommRateFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcOptionInstrCommRateField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("当前期权合约手续费的详细内容")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcOptionInstrCommRateFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcOptionInstrCommRateFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcOptionInstrCommRateFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcOptionInstrCommRateFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcOptionInstrCommRateFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcOptionInstrCommRateFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("当前期权合约手续费的详细内容")},
    {Py_tp_members, PyCThostFtdcOptionInstrCommRateFieldType_members},
    {Py_tp_getset, PyCThostFtdcOptionInstrCommRateFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcOptionInstrCommRateFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcOptionInstrCommRateFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcOptionInstrCommRateFieldType_spec = {
    .name = "PyCTP.CThostFtdcOptionInstrCommRateField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcOptionInstrCommRateFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcOptionInstrCommRateFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcOptionInstrCommRateFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcOptionInstrCommRateFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcOptionInstrCommRateFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcOptionInstrCommRateFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcOptionInstrCommRateFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcOptionInstrCommRateFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcOptionInstrCommRateField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcOptionInstrCommRateField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}