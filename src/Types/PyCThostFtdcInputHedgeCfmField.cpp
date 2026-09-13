
#include "PyCThostFtdcInputHedgeCfmField.h"

///套保确认输入基本信息

static int PyCThostFtdcInputHedgeCfmFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "UserID", "InvestorID", "ExchangeID", "InstrumentID", "Volume", "Direction", "RequestID", "OrderRef", "IPAddress", "MacAddress", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcInputHedgeCfmField_BrokerID = NULL;
    Py_ssize_t CThostFtdcInputHedgeCfmField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcInputHedgeCfmField_UserID = NULL;
    Py_ssize_t CThostFtdcInputHedgeCfmField_UserID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInputHedgeCfmField_InvestorID = NULL;
    Py_ssize_t CThostFtdcInputHedgeCfmField_InvestorID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcInputHedgeCfmField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcInputHedgeCfmField_ExchangeID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcInputHedgeCfmField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcInputHedgeCfmField_InstrumentID_length = 0;

    /// 数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcInputHedgeCfmField_Volume = 0;

    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    char CThostFtdcInputHedgeCfmField_Direction = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcInputHedgeCfmField_RequestID = 0;

    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    char *CThostFtdcInputHedgeCfmField_OrderRef = NULL;
    Py_ssize_t CThostFtdcInputHedgeCfmField_OrderRef_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcInputHedgeCfmField_IPAddress = NULL;
    Py_ssize_t CThostFtdcInputHedgeCfmField_IPAddress_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcInputHedgeCfmField_MacAddress = NULL;
    Py_ssize_t CThostFtdcInputHedgeCfmField_MacAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#iciy#y#y#", (char **)kwlist
        , &CThostFtdcInputHedgeCfmField_BrokerID, &CThostFtdcInputHedgeCfmField_BrokerID_length
        , &CThostFtdcInputHedgeCfmField_UserID, &CThostFtdcInputHedgeCfmField_UserID_length
        , &CThostFtdcInputHedgeCfmField_InvestorID, &CThostFtdcInputHedgeCfmField_InvestorID_length
        , &CThostFtdcInputHedgeCfmField_ExchangeID, &CThostFtdcInputHedgeCfmField_ExchangeID_length
        , &CThostFtdcInputHedgeCfmField_InstrumentID, &CThostFtdcInputHedgeCfmField_InstrumentID_length
        , &CThostFtdcInputHedgeCfmField_Volume
        , &CThostFtdcInputHedgeCfmField_Direction
        , &CThostFtdcInputHedgeCfmField_RequestID
        , &CThostFtdcInputHedgeCfmField_OrderRef, &CThostFtdcInputHedgeCfmField_OrderRef_length
        , &CThostFtdcInputHedgeCfmField_IPAddress, &CThostFtdcInputHedgeCfmField_IPAddress_length
        , &CThostFtdcInputHedgeCfmField_MacAddress, &CThostFtdcInputHedgeCfmField_MacAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcInputHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputHedgeCfmFieldData>(self);
    CThostFtdcInputHedgeCfmField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcInputHedgeCfmField_BrokerID != NULL ) {
        if(CThostFtdcInputHedgeCfmField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcInputHedgeCfmField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcInputHedgeCfmField_BrokerID, CThostFtdcInputHedgeCfmField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcInputHedgeCfmField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcInputHedgeCfmField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcInputHedgeCfmField_UserID != NULL ) {
        if(CThostFtdcInputHedgeCfmField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcInputHedgeCfmField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcInputHedgeCfmField_UserID, CThostFtdcInputHedgeCfmField_UserID_length);
        strncpy(data->UserID, CThostFtdcInputHedgeCfmField_UserID, sizeof(data->UserID));
        CThostFtdcInputHedgeCfmField_UserID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInputHedgeCfmField_InvestorID != NULL ) {
        if(CThostFtdcInputHedgeCfmField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcInputHedgeCfmField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcInputHedgeCfmField_InvestorID, CThostFtdcInputHedgeCfmField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcInputHedgeCfmField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcInputHedgeCfmField_InvestorID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcInputHedgeCfmField_ExchangeID != NULL ) {
        if(CThostFtdcInputHedgeCfmField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcInputHedgeCfmField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcInputHedgeCfmField_ExchangeID, CThostFtdcInputHedgeCfmField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcInputHedgeCfmField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcInputHedgeCfmField_ExchangeID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcInputHedgeCfmField_InstrumentID != NULL ) {
        if(CThostFtdcInputHedgeCfmField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcInputHedgeCfmField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcInputHedgeCfmField_InstrumentID, CThostFtdcInputHedgeCfmField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcInputHedgeCfmField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcInputHedgeCfmField_InstrumentID = NULL;
    }

    /// 数量
    /// typedef int TThostFtdcVolumeType
    data->Volume = CThostFtdcInputHedgeCfmField_Volume;

    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    data->Direction = CThostFtdcInputHedgeCfmField_Direction;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcInputHedgeCfmField_RequestID;

    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    if( CThostFtdcInputHedgeCfmField_OrderRef != NULL ) {
        if(CThostFtdcInputHedgeCfmField_OrderRef_length >= (Py_ssize_t)sizeof(data->OrderRef)) {
            PyErr_Format(PyExc_ValueError, "OrderRef too long: length=%zd (max allowed is 12)", CThostFtdcInputHedgeCfmField_OrderRef_length);
            return -1;
        }
        // memset(data->OrderRef, 0, sizeof(data->OrderRef));
        // memcpy(data->OrderRef, CThostFtdcInputHedgeCfmField_OrderRef, CThostFtdcInputHedgeCfmField_OrderRef_length);
        strncpy(data->OrderRef, CThostFtdcInputHedgeCfmField_OrderRef, sizeof(data->OrderRef));
        CThostFtdcInputHedgeCfmField_OrderRef = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcInputHedgeCfmField_IPAddress != NULL ) {
        if(CThostFtdcInputHedgeCfmField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcInputHedgeCfmField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcInputHedgeCfmField_IPAddress, CThostFtdcInputHedgeCfmField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcInputHedgeCfmField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcInputHedgeCfmField_IPAddress = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcInputHedgeCfmField_MacAddress != NULL ) {
        if(CThostFtdcInputHedgeCfmField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcInputHedgeCfmField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcInputHedgeCfmField_MacAddress, CThostFtdcInputHedgeCfmField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcInputHedgeCfmField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcInputHedgeCfmField_MacAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcInputHedgeCfmFieldType_repr(PyObject *self) {

    PyCThostFtdcInputHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputHedgeCfmFieldData>(self);
    CThostFtdcInputHedgeCfmField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "Volume", data->Volume
        , "Direction", data->Direction
        , "RequestID", data->RequestID
        , "OrderRef", data->OrderRef//, (Py_ssize_t)sizeof(data->OrderRef)
        , "IPAddress", data->IPAddress//, (Py_ssize_t)sizeof(data->IPAddress)
        , "MacAddress", data->MacAddress//, (Py_ssize_t)sizeof(data->MacAddress)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputHedgeCfmField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputHedgeCfmField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcInputHedgeCfmFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcInputHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputHedgeCfmFieldData>(self);
    CThostFtdcInputHedgeCfmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcInputHedgeCfmFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputHedgeCfmField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputHedgeCfmFieldData>(self);
    CThostFtdcInputHedgeCfmField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcInputHedgeCfmFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcInputHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputHedgeCfmFieldData>(self);
    CThostFtdcInputHedgeCfmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcInputHedgeCfmFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputHedgeCfmField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputHedgeCfmFieldData>(self);
    CThostFtdcInputHedgeCfmField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInputHedgeCfmFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcInputHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputHedgeCfmFieldData>(self);
    CThostFtdcInputHedgeCfmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcInputHedgeCfmFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputHedgeCfmField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputHedgeCfmFieldData>(self);
    CThostFtdcInputHedgeCfmField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcInputHedgeCfmFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcInputHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputHedgeCfmFieldData>(self);
    CThostFtdcInputHedgeCfmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcInputHedgeCfmFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputHedgeCfmField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputHedgeCfmFieldData>(self);
    CThostFtdcInputHedgeCfmField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcInputHedgeCfmFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcInputHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputHedgeCfmFieldData>(self);
    CThostFtdcInputHedgeCfmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcInputHedgeCfmFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputHedgeCfmField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputHedgeCfmFieldData>(self);
    CThostFtdcInputHedgeCfmField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 买卖方向
/// typedef char TThostFtdcDirectionType
static PyObject *PyCThostFtdcInputHedgeCfmFieldType_get_Direction(PyObject *self, void *closure) {
    PyCThostFtdcInputHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputHedgeCfmFieldData>(self);
    CThostFtdcInputHedgeCfmField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->Direction), 1);
}

static int PyCThostFtdcInputHedgeCfmFieldType_set_Direction(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Direction Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInputHedgeCfmField::Direction)) {
        PyErr_SetString(PyExc_ValueError, "Direction must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputHedgeCfmFieldData>(self);
    CThostFtdcInputHedgeCfmField *data = &(extra->data);
    data->Direction = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单引用
/// typedef char TThostFtdcOrderRefType[13]
static PyObject *PyCThostFtdcInputHedgeCfmFieldType_get_OrderRef(PyObject *self, void *closure) {
    PyCThostFtdcInputHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputHedgeCfmFieldData>(self);
    CThostFtdcInputHedgeCfmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderRef, (Py_ssize_t)sizeof(data->OrderRef));
    return PyBytes_FromString(data->OrderRef);
}

static int PyCThostFtdcInputHedgeCfmFieldType_set_OrderRef(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderRef Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputHedgeCfmField::OrderRef)) {
        PyErr_SetString(PyExc_ValueError, "OrderRef must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputHedgeCfmFieldData>(self);
    CThostFtdcInputHedgeCfmField *data = &(extra->data);
    // memset(data->OrderRef, 0, sizeof(data->OrderRef));
    // memcpy(data->OrderRef, buf, len);
    strncpy(data->OrderRef, buf, sizeof(data->OrderRef));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcInputHedgeCfmFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcInputHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputHedgeCfmFieldData>(self);
    CThostFtdcInputHedgeCfmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcInputHedgeCfmFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputHedgeCfmField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputHedgeCfmFieldData>(self);
    CThostFtdcInputHedgeCfmField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcInputHedgeCfmFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcInputHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputHedgeCfmFieldData>(self);
    CThostFtdcInputHedgeCfmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcInputHedgeCfmFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputHedgeCfmField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputHedgeCfmFieldData>(self);
    CThostFtdcInputHedgeCfmField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcInputHedgeCfmFieldType_members[] = {
    /// 数量
    /// typedef int TThostFtdcVolumeType
    {
        .name = "Volume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInputHedgeCfmFieldData, data.Volume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("数量")
    },
    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    {
        .name = "RequestID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInputHedgeCfmFieldData, data.RequestID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("请求编号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcInputHedgeCfmFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcInputHedgeCfmFieldType_get_BrokerID,
    .set = PyCThostFtdcInputHedgeCfmFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcInputHedgeCfmFieldType_get_UserID,
    .set = PyCThostFtdcInputHedgeCfmFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcInputHedgeCfmFieldType_get_InvestorID,
    .set = PyCThostFtdcInputHedgeCfmFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcInputHedgeCfmFieldType_get_ExchangeID,
    .set = PyCThostFtdcInputHedgeCfmFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcInputHedgeCfmFieldType_get_InstrumentID,
    .set = PyCThostFtdcInputHedgeCfmFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    {
    .name = "Direction",
    .get = PyCThostFtdcInputHedgeCfmFieldType_get_Direction,
    .set = PyCThostFtdcInputHedgeCfmFieldType_set_Direction,
    .doc = PyDoc_STR("买卖方向"),
    },
    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    {
    .name = "OrderRef",
    .get = PyCThostFtdcInputHedgeCfmFieldType_get_OrderRef,
    .set = PyCThostFtdcInputHedgeCfmFieldType_set_OrderRef,
    .doc = PyDoc_STR("报单引用"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcInputHedgeCfmFieldType_get_IPAddress,
    .set = PyCThostFtdcInputHedgeCfmFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcInputHedgeCfmFieldType_get_MacAddress,
    .set = PyCThostFtdcInputHedgeCfmFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcInputHedgeCfmFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcInputHedgeCfmField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("套保确认输入基本信息")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcInputHedgeCfmFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcInputHedgeCfmFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcInputHedgeCfmFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcInputHedgeCfmFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcInputHedgeCfmFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcInputHedgeCfmFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("套保确认输入基本信息")},
    {Py_tp_members, PyCThostFtdcInputHedgeCfmFieldType_members},
    {Py_tp_getset, PyCThostFtdcInputHedgeCfmFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcInputHedgeCfmFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcInputHedgeCfmFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcInputHedgeCfmFieldType_spec = {
    .name = "PyCTP.CThostFtdcInputHedgeCfmField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcInputHedgeCfmFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcInputHedgeCfmFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcInputHedgeCfmFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcInputHedgeCfmFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcInputHedgeCfmFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcInputHedgeCfmFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcInputHedgeCfmFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcInputHedgeCfmFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcInputHedgeCfmField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInputHedgeCfmField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}