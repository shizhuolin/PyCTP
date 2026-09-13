
#include "PyCThostFtdcInputSpdApplyField.h"

///套利确认输入基本信息

static int PyCThostFtdcInputSpdApplyFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "UserID", "InvestorID", "ExchangeID", "FirstLegInstrumentID", "SecondLegInstrumentID", "Volume", "Direction", "CmbType", "RequestID", "OrderRef", "IPAddress", "MacAddress", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcInputSpdApplyField_BrokerID = NULL;
    Py_ssize_t CThostFtdcInputSpdApplyField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcInputSpdApplyField_UserID = NULL;
    Py_ssize_t CThostFtdcInputSpdApplyField_UserID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInputSpdApplyField_InvestorID = NULL;
    Py_ssize_t CThostFtdcInputSpdApplyField_InvestorID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcInputSpdApplyField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcInputSpdApplyField_ExchangeID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcInputSpdApplyField_FirstLegInstrumentID = NULL;
    Py_ssize_t CThostFtdcInputSpdApplyField_FirstLegInstrumentID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcInputSpdApplyField_SecondLegInstrumentID = NULL;
    Py_ssize_t CThostFtdcInputSpdApplyField_SecondLegInstrumentID_length = 0;

    /// 数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcInputSpdApplyField_Volume = 0;

    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    char CThostFtdcInputSpdApplyField_Direction = 0;

    /// 组合定单类型
    /// typedef char TThostFtdcCmbTypeType
    char CThostFtdcInputSpdApplyField_CmbType = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcInputSpdApplyField_RequestID = 0;

    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    char *CThostFtdcInputSpdApplyField_OrderRef = NULL;
    Py_ssize_t CThostFtdcInputSpdApplyField_OrderRef_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcInputSpdApplyField_IPAddress = NULL;
    Py_ssize_t CThostFtdcInputSpdApplyField_IPAddress_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcInputSpdApplyField_MacAddress = NULL;
    Py_ssize_t CThostFtdcInputSpdApplyField_MacAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#icciy#y#y#", (char **)kwlist
        , &CThostFtdcInputSpdApplyField_BrokerID, &CThostFtdcInputSpdApplyField_BrokerID_length
        , &CThostFtdcInputSpdApplyField_UserID, &CThostFtdcInputSpdApplyField_UserID_length
        , &CThostFtdcInputSpdApplyField_InvestorID, &CThostFtdcInputSpdApplyField_InvestorID_length
        , &CThostFtdcInputSpdApplyField_ExchangeID, &CThostFtdcInputSpdApplyField_ExchangeID_length
        , &CThostFtdcInputSpdApplyField_FirstLegInstrumentID, &CThostFtdcInputSpdApplyField_FirstLegInstrumentID_length
        , &CThostFtdcInputSpdApplyField_SecondLegInstrumentID, &CThostFtdcInputSpdApplyField_SecondLegInstrumentID_length
        , &CThostFtdcInputSpdApplyField_Volume
        , &CThostFtdcInputSpdApplyField_Direction
        , &CThostFtdcInputSpdApplyField_CmbType
        , &CThostFtdcInputSpdApplyField_RequestID
        , &CThostFtdcInputSpdApplyField_OrderRef, &CThostFtdcInputSpdApplyField_OrderRef_length
        , &CThostFtdcInputSpdApplyField_IPAddress, &CThostFtdcInputSpdApplyField_IPAddress_length
        , &CThostFtdcInputSpdApplyField_MacAddress, &CThostFtdcInputSpdApplyField_MacAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcInputSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputSpdApplyFieldData>(self);
    CThostFtdcInputSpdApplyField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcInputSpdApplyField_BrokerID != NULL ) {
        if(CThostFtdcInputSpdApplyField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcInputSpdApplyField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcInputSpdApplyField_BrokerID, CThostFtdcInputSpdApplyField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcInputSpdApplyField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcInputSpdApplyField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcInputSpdApplyField_UserID != NULL ) {
        if(CThostFtdcInputSpdApplyField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcInputSpdApplyField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcInputSpdApplyField_UserID, CThostFtdcInputSpdApplyField_UserID_length);
        strncpy(data->UserID, CThostFtdcInputSpdApplyField_UserID, sizeof(data->UserID));
        CThostFtdcInputSpdApplyField_UserID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInputSpdApplyField_InvestorID != NULL ) {
        if(CThostFtdcInputSpdApplyField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcInputSpdApplyField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcInputSpdApplyField_InvestorID, CThostFtdcInputSpdApplyField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcInputSpdApplyField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcInputSpdApplyField_InvestorID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcInputSpdApplyField_ExchangeID != NULL ) {
        if(CThostFtdcInputSpdApplyField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcInputSpdApplyField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcInputSpdApplyField_ExchangeID, CThostFtdcInputSpdApplyField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcInputSpdApplyField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcInputSpdApplyField_ExchangeID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcInputSpdApplyField_FirstLegInstrumentID != NULL ) {
        if(CThostFtdcInputSpdApplyField_FirstLegInstrumentID_length >= (Py_ssize_t)sizeof(data->FirstLegInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "FirstLegInstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcInputSpdApplyField_FirstLegInstrumentID_length);
            return -1;
        }
        // memset(data->FirstLegInstrumentID, 0, sizeof(data->FirstLegInstrumentID));
        // memcpy(data->FirstLegInstrumentID, CThostFtdcInputSpdApplyField_FirstLegInstrumentID, CThostFtdcInputSpdApplyField_FirstLegInstrumentID_length);
        strncpy(data->FirstLegInstrumentID, CThostFtdcInputSpdApplyField_FirstLegInstrumentID, sizeof(data->FirstLegInstrumentID));
        CThostFtdcInputSpdApplyField_FirstLegInstrumentID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcInputSpdApplyField_SecondLegInstrumentID != NULL ) {
        if(CThostFtdcInputSpdApplyField_SecondLegInstrumentID_length >= (Py_ssize_t)sizeof(data->SecondLegInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "SecondLegInstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcInputSpdApplyField_SecondLegInstrumentID_length);
            return -1;
        }
        // memset(data->SecondLegInstrumentID, 0, sizeof(data->SecondLegInstrumentID));
        // memcpy(data->SecondLegInstrumentID, CThostFtdcInputSpdApplyField_SecondLegInstrumentID, CThostFtdcInputSpdApplyField_SecondLegInstrumentID_length);
        strncpy(data->SecondLegInstrumentID, CThostFtdcInputSpdApplyField_SecondLegInstrumentID, sizeof(data->SecondLegInstrumentID));
        CThostFtdcInputSpdApplyField_SecondLegInstrumentID = NULL;
    }

    /// 数量
    /// typedef int TThostFtdcVolumeType
    data->Volume = CThostFtdcInputSpdApplyField_Volume;

    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    data->Direction = CThostFtdcInputSpdApplyField_Direction;

    /// 组合定单类型
    /// typedef char TThostFtdcCmbTypeType
    data->CmbType = CThostFtdcInputSpdApplyField_CmbType;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcInputSpdApplyField_RequestID;

    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    if( CThostFtdcInputSpdApplyField_OrderRef != NULL ) {
        if(CThostFtdcInputSpdApplyField_OrderRef_length >= (Py_ssize_t)sizeof(data->OrderRef)) {
            PyErr_Format(PyExc_ValueError, "OrderRef too long: length=%zd (max allowed is 12)", CThostFtdcInputSpdApplyField_OrderRef_length);
            return -1;
        }
        // memset(data->OrderRef, 0, sizeof(data->OrderRef));
        // memcpy(data->OrderRef, CThostFtdcInputSpdApplyField_OrderRef, CThostFtdcInputSpdApplyField_OrderRef_length);
        strncpy(data->OrderRef, CThostFtdcInputSpdApplyField_OrderRef, sizeof(data->OrderRef));
        CThostFtdcInputSpdApplyField_OrderRef = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcInputSpdApplyField_IPAddress != NULL ) {
        if(CThostFtdcInputSpdApplyField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcInputSpdApplyField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcInputSpdApplyField_IPAddress, CThostFtdcInputSpdApplyField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcInputSpdApplyField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcInputSpdApplyField_IPAddress = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcInputSpdApplyField_MacAddress != NULL ) {
        if(CThostFtdcInputSpdApplyField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcInputSpdApplyField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcInputSpdApplyField_MacAddress, CThostFtdcInputSpdApplyField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcInputSpdApplyField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcInputSpdApplyField_MacAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcInputSpdApplyFieldType_repr(PyObject *self) {

    PyCThostFtdcInputSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputSpdApplyFieldData>(self);
    CThostFtdcInputSpdApplyField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:c,s:i,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "FirstLegInstrumentID", data->FirstLegInstrumentID//, (Py_ssize_t)sizeof(data->FirstLegInstrumentID)
        , "SecondLegInstrumentID", data->SecondLegInstrumentID//, (Py_ssize_t)sizeof(data->SecondLegInstrumentID)
        , "Volume", data->Volume
        , "Direction", data->Direction
        , "CmbType", data->CmbType
        , "RequestID", data->RequestID
        , "OrderRef", data->OrderRef//, (Py_ssize_t)sizeof(data->OrderRef)
        , "IPAddress", data->IPAddress//, (Py_ssize_t)sizeof(data->IPAddress)
        , "MacAddress", data->MacAddress//, (Py_ssize_t)sizeof(data->MacAddress)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputSpdApplyField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputSpdApplyField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcInputSpdApplyFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcInputSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputSpdApplyFieldData>(self);
    CThostFtdcInputSpdApplyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcInputSpdApplyFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputSpdApplyField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputSpdApplyFieldData>(self);
    CThostFtdcInputSpdApplyField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcInputSpdApplyFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcInputSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputSpdApplyFieldData>(self);
    CThostFtdcInputSpdApplyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcInputSpdApplyFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputSpdApplyField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputSpdApplyFieldData>(self);
    CThostFtdcInputSpdApplyField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInputSpdApplyFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcInputSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputSpdApplyFieldData>(self);
    CThostFtdcInputSpdApplyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcInputSpdApplyFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputSpdApplyField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputSpdApplyFieldData>(self);
    CThostFtdcInputSpdApplyField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcInputSpdApplyFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcInputSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputSpdApplyFieldData>(self);
    CThostFtdcInputSpdApplyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcInputSpdApplyFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputSpdApplyField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputSpdApplyFieldData>(self);
    CThostFtdcInputSpdApplyField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcInputSpdApplyFieldType_get_FirstLegInstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcInputSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputSpdApplyFieldData>(self);
    CThostFtdcInputSpdApplyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->FirstLegInstrumentID, (Py_ssize_t)sizeof(data->FirstLegInstrumentID));
    return PyBytes_FromString(data->FirstLegInstrumentID);
}

static int PyCThostFtdcInputSpdApplyFieldType_set_FirstLegInstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "FirstLegInstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputSpdApplyField::FirstLegInstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "FirstLegInstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputSpdApplyFieldData>(self);
    CThostFtdcInputSpdApplyField *data = &(extra->data);
    // memset(data->FirstLegInstrumentID, 0, sizeof(data->FirstLegInstrumentID));
    // memcpy(data->FirstLegInstrumentID, buf, len);
    strncpy(data->FirstLegInstrumentID, buf, sizeof(data->FirstLegInstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcInputSpdApplyFieldType_get_SecondLegInstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcInputSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputSpdApplyFieldData>(self);
    CThostFtdcInputSpdApplyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->SecondLegInstrumentID, (Py_ssize_t)sizeof(data->SecondLegInstrumentID));
    return PyBytes_FromString(data->SecondLegInstrumentID);
}

static int PyCThostFtdcInputSpdApplyFieldType_set_SecondLegInstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SecondLegInstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputSpdApplyField::SecondLegInstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "SecondLegInstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputSpdApplyFieldData>(self);
    CThostFtdcInputSpdApplyField *data = &(extra->data);
    // memset(data->SecondLegInstrumentID, 0, sizeof(data->SecondLegInstrumentID));
    // memcpy(data->SecondLegInstrumentID, buf, len);
    strncpy(data->SecondLegInstrumentID, buf, sizeof(data->SecondLegInstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 买卖方向
/// typedef char TThostFtdcDirectionType
static PyObject *PyCThostFtdcInputSpdApplyFieldType_get_Direction(PyObject *self, void *closure) {
    PyCThostFtdcInputSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputSpdApplyFieldData>(self);
    CThostFtdcInputSpdApplyField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->Direction), 1);
}

static int PyCThostFtdcInputSpdApplyFieldType_set_Direction(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Direction Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInputSpdApplyField::Direction)) {
        PyErr_SetString(PyExc_ValueError, "Direction must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputSpdApplyFieldData>(self);
    CThostFtdcInputSpdApplyField *data = &(extra->data);
    data->Direction = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 组合定单类型
/// typedef char TThostFtdcCmbTypeType
static PyObject *PyCThostFtdcInputSpdApplyFieldType_get_CmbType(PyObject *self, void *closure) {
    PyCThostFtdcInputSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputSpdApplyFieldData>(self);
    CThostFtdcInputSpdApplyField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->CmbType), 1);
}

static int PyCThostFtdcInputSpdApplyFieldType_set_CmbType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CmbType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInputSpdApplyField::CmbType)) {
        PyErr_SetString(PyExc_ValueError, "CmbType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputSpdApplyFieldData>(self);
    CThostFtdcInputSpdApplyField *data = &(extra->data);
    data->CmbType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单引用
/// typedef char TThostFtdcOrderRefType[13]
static PyObject *PyCThostFtdcInputSpdApplyFieldType_get_OrderRef(PyObject *self, void *closure) {
    PyCThostFtdcInputSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputSpdApplyFieldData>(self);
    CThostFtdcInputSpdApplyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderRef, (Py_ssize_t)sizeof(data->OrderRef));
    return PyBytes_FromString(data->OrderRef);
}

static int PyCThostFtdcInputSpdApplyFieldType_set_OrderRef(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderRef Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputSpdApplyField::OrderRef)) {
        PyErr_SetString(PyExc_ValueError, "OrderRef must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputSpdApplyFieldData>(self);
    CThostFtdcInputSpdApplyField *data = &(extra->data);
    // memset(data->OrderRef, 0, sizeof(data->OrderRef));
    // memcpy(data->OrderRef, buf, len);
    strncpy(data->OrderRef, buf, sizeof(data->OrderRef));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcInputSpdApplyFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcInputSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputSpdApplyFieldData>(self);
    CThostFtdcInputSpdApplyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcInputSpdApplyFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputSpdApplyField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputSpdApplyFieldData>(self);
    CThostFtdcInputSpdApplyField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcInputSpdApplyFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcInputSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputSpdApplyFieldData>(self);
    CThostFtdcInputSpdApplyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcInputSpdApplyFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputSpdApplyField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputSpdApplyFieldData>(self);
    CThostFtdcInputSpdApplyField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcInputSpdApplyFieldType_members[] = {
    /// 数量
    /// typedef int TThostFtdcVolumeType
    {
        .name = "Volume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInputSpdApplyFieldData, data.Volume),
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
        .offset = offsetof(PyCThostFtdcInputSpdApplyFieldData, data.RequestID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("请求编号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcInputSpdApplyFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcInputSpdApplyFieldType_get_BrokerID,
    .set = PyCThostFtdcInputSpdApplyFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcInputSpdApplyFieldType_get_UserID,
    .set = PyCThostFtdcInputSpdApplyFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcInputSpdApplyFieldType_get_InvestorID,
    .set = PyCThostFtdcInputSpdApplyFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcInputSpdApplyFieldType_get_ExchangeID,
    .set = PyCThostFtdcInputSpdApplyFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "FirstLegInstrumentID",
    .get = PyCThostFtdcInputSpdApplyFieldType_get_FirstLegInstrumentID,
    .set = PyCThostFtdcInputSpdApplyFieldType_set_FirstLegInstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "SecondLegInstrumentID",
    .get = PyCThostFtdcInputSpdApplyFieldType_get_SecondLegInstrumentID,
    .set = PyCThostFtdcInputSpdApplyFieldType_set_SecondLegInstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    {
    .name = "Direction",
    .get = PyCThostFtdcInputSpdApplyFieldType_get_Direction,
    .set = PyCThostFtdcInputSpdApplyFieldType_set_Direction,
    .doc = PyDoc_STR("买卖方向"),
    },
    /// 组合定单类型
    /// typedef char TThostFtdcCmbTypeType
    {
    .name = "CmbType",
    .get = PyCThostFtdcInputSpdApplyFieldType_get_CmbType,
    .set = PyCThostFtdcInputSpdApplyFieldType_set_CmbType,
    .doc = PyDoc_STR("组合定单类型"),
    },
    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    {
    .name = "OrderRef",
    .get = PyCThostFtdcInputSpdApplyFieldType_get_OrderRef,
    .set = PyCThostFtdcInputSpdApplyFieldType_set_OrderRef,
    .doc = PyDoc_STR("报单引用"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcInputSpdApplyFieldType_get_IPAddress,
    .set = PyCThostFtdcInputSpdApplyFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcInputSpdApplyFieldType_get_MacAddress,
    .set = PyCThostFtdcInputSpdApplyFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcInputSpdApplyFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcInputSpdApplyField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("套利确认输入基本信息")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcInputSpdApplyFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcInputSpdApplyFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcInputSpdApplyFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcInputSpdApplyFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcInputSpdApplyFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcInputSpdApplyFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("套利确认输入基本信息")},
    {Py_tp_members, PyCThostFtdcInputSpdApplyFieldType_members},
    {Py_tp_getset, PyCThostFtdcInputSpdApplyFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcInputSpdApplyFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcInputSpdApplyFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcInputSpdApplyFieldType_spec = {
    .name = "PyCTP.CThostFtdcInputSpdApplyField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcInputSpdApplyFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcInputSpdApplyFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcInputSpdApplyFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcInputSpdApplyFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcInputSpdApplyFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcInputSpdApplyFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcInputSpdApplyFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcInputSpdApplyFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcInputSpdApplyField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInputSpdApplyField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}