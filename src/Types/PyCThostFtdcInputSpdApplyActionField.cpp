
#include "PyCThostFtdcInputSpdApplyActionField.h"

///套利申请撤销

static int PyCThostFtdcInputSpdApplyActionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "UserID", "InvestorID", "ExchangeID", "OrderSysID", "OrderRef", "FrontID", "SessionID", "RequestID", "IPAddress", "MacAddress", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcInputSpdApplyActionField_BrokerID = NULL;
    Py_ssize_t CThostFtdcInputSpdApplyActionField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcInputSpdApplyActionField_UserID = NULL;
    Py_ssize_t CThostFtdcInputSpdApplyActionField_UserID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInputSpdApplyActionField_InvestorID = NULL;
    Py_ssize_t CThostFtdcInputSpdApplyActionField_InvestorID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcInputSpdApplyActionField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcInputSpdApplyActionField_ExchangeID_length = 0;

    /// 合同编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    char *CThostFtdcInputSpdApplyActionField_OrderSysID = NULL;
    Py_ssize_t CThostFtdcInputSpdApplyActionField_OrderSysID_length = 0;

    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    char *CThostFtdcInputSpdApplyActionField_OrderRef = NULL;
    Py_ssize_t CThostFtdcInputSpdApplyActionField_OrderRef_length = 0;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    int CThostFtdcInputSpdApplyActionField_FrontID = 0;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcInputSpdApplyActionField_SessionID = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcInputSpdApplyActionField_RequestID = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcInputSpdApplyActionField_IPAddress = NULL;
    Py_ssize_t CThostFtdcInputSpdApplyActionField_IPAddress_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcInputSpdApplyActionField_MacAddress = NULL;
    Py_ssize_t CThostFtdcInputSpdApplyActionField_MacAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#iiiy#y#", (char **)kwlist
        , &CThostFtdcInputSpdApplyActionField_BrokerID, &CThostFtdcInputSpdApplyActionField_BrokerID_length
        , &CThostFtdcInputSpdApplyActionField_UserID, &CThostFtdcInputSpdApplyActionField_UserID_length
        , &CThostFtdcInputSpdApplyActionField_InvestorID, &CThostFtdcInputSpdApplyActionField_InvestorID_length
        , &CThostFtdcInputSpdApplyActionField_ExchangeID, &CThostFtdcInputSpdApplyActionField_ExchangeID_length
        , &CThostFtdcInputSpdApplyActionField_OrderSysID, &CThostFtdcInputSpdApplyActionField_OrderSysID_length
        , &CThostFtdcInputSpdApplyActionField_OrderRef, &CThostFtdcInputSpdApplyActionField_OrderRef_length
        , &CThostFtdcInputSpdApplyActionField_FrontID
        , &CThostFtdcInputSpdApplyActionField_SessionID
        , &CThostFtdcInputSpdApplyActionField_RequestID
        , &CThostFtdcInputSpdApplyActionField_IPAddress, &CThostFtdcInputSpdApplyActionField_IPAddress_length
        , &CThostFtdcInputSpdApplyActionField_MacAddress, &CThostFtdcInputSpdApplyActionField_MacAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcInputSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputSpdApplyActionFieldData>(self);
    CThostFtdcInputSpdApplyActionField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcInputSpdApplyActionField_BrokerID != NULL ) {
        if(CThostFtdcInputSpdApplyActionField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcInputSpdApplyActionField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcInputSpdApplyActionField_BrokerID, CThostFtdcInputSpdApplyActionField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcInputSpdApplyActionField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcInputSpdApplyActionField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcInputSpdApplyActionField_UserID != NULL ) {
        if(CThostFtdcInputSpdApplyActionField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcInputSpdApplyActionField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcInputSpdApplyActionField_UserID, CThostFtdcInputSpdApplyActionField_UserID_length);
        strncpy(data->UserID, CThostFtdcInputSpdApplyActionField_UserID, sizeof(data->UserID));
        CThostFtdcInputSpdApplyActionField_UserID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInputSpdApplyActionField_InvestorID != NULL ) {
        if(CThostFtdcInputSpdApplyActionField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcInputSpdApplyActionField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcInputSpdApplyActionField_InvestorID, CThostFtdcInputSpdApplyActionField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcInputSpdApplyActionField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcInputSpdApplyActionField_InvestorID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcInputSpdApplyActionField_ExchangeID != NULL ) {
        if(CThostFtdcInputSpdApplyActionField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcInputSpdApplyActionField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcInputSpdApplyActionField_ExchangeID, CThostFtdcInputSpdApplyActionField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcInputSpdApplyActionField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcInputSpdApplyActionField_ExchangeID = NULL;
    }

    /// 合同编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    if( CThostFtdcInputSpdApplyActionField_OrderSysID != NULL ) {
        if(CThostFtdcInputSpdApplyActionField_OrderSysID_length >= (Py_ssize_t)sizeof(data->OrderSysID)) {
            PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is 20)", CThostFtdcInputSpdApplyActionField_OrderSysID_length);
            return -1;
        }
        // memset(data->OrderSysID, 0, sizeof(data->OrderSysID));
        // memcpy(data->OrderSysID, CThostFtdcInputSpdApplyActionField_OrderSysID, CThostFtdcInputSpdApplyActionField_OrderSysID_length);
        strncpy(data->OrderSysID, CThostFtdcInputSpdApplyActionField_OrderSysID, sizeof(data->OrderSysID));
        CThostFtdcInputSpdApplyActionField_OrderSysID = NULL;
    }

    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    if( CThostFtdcInputSpdApplyActionField_OrderRef != NULL ) {
        if(CThostFtdcInputSpdApplyActionField_OrderRef_length >= (Py_ssize_t)sizeof(data->OrderRef)) {
            PyErr_Format(PyExc_ValueError, "OrderRef too long: length=%zd (max allowed is 12)", CThostFtdcInputSpdApplyActionField_OrderRef_length);
            return -1;
        }
        // memset(data->OrderRef, 0, sizeof(data->OrderRef));
        // memcpy(data->OrderRef, CThostFtdcInputSpdApplyActionField_OrderRef, CThostFtdcInputSpdApplyActionField_OrderRef_length);
        strncpy(data->OrderRef, CThostFtdcInputSpdApplyActionField_OrderRef, sizeof(data->OrderRef));
        CThostFtdcInputSpdApplyActionField_OrderRef = NULL;
    }

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    data->FrontID = CThostFtdcInputSpdApplyActionField_FrontID;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcInputSpdApplyActionField_SessionID;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcInputSpdApplyActionField_RequestID;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcInputSpdApplyActionField_IPAddress != NULL ) {
        if(CThostFtdcInputSpdApplyActionField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcInputSpdApplyActionField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcInputSpdApplyActionField_IPAddress, CThostFtdcInputSpdApplyActionField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcInputSpdApplyActionField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcInputSpdApplyActionField_IPAddress = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcInputSpdApplyActionField_MacAddress != NULL ) {
        if(CThostFtdcInputSpdApplyActionField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcInputSpdApplyActionField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcInputSpdApplyActionField_MacAddress, CThostFtdcInputSpdApplyActionField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcInputSpdApplyActionField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcInputSpdApplyActionField_MacAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcInputSpdApplyActionFieldType_repr(PyObject *self) {

    PyCThostFtdcInputSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputSpdApplyActionFieldData>(self);
    CThostFtdcInputSpdApplyActionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:i,s:i,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "OrderSysID", data->OrderSysID//, (Py_ssize_t)sizeof(data->OrderSysID)
        , "OrderRef", data->OrderRef//, (Py_ssize_t)sizeof(data->OrderRef)
        , "FrontID", data->FrontID
        , "SessionID", data->SessionID
        , "RequestID", data->RequestID
        , "IPAddress", data->IPAddress//, (Py_ssize_t)sizeof(data->IPAddress)
        , "MacAddress", data->MacAddress//, (Py_ssize_t)sizeof(data->MacAddress)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputSpdApplyActionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputSpdApplyActionField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcInputSpdApplyActionFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcInputSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputSpdApplyActionFieldData>(self);
    CThostFtdcInputSpdApplyActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcInputSpdApplyActionFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputSpdApplyActionField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputSpdApplyActionFieldData>(self);
    CThostFtdcInputSpdApplyActionField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcInputSpdApplyActionFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcInputSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputSpdApplyActionFieldData>(self);
    CThostFtdcInputSpdApplyActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcInputSpdApplyActionFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputSpdApplyActionField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputSpdApplyActionFieldData>(self);
    CThostFtdcInputSpdApplyActionField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInputSpdApplyActionFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcInputSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputSpdApplyActionFieldData>(self);
    CThostFtdcInputSpdApplyActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcInputSpdApplyActionFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputSpdApplyActionField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputSpdApplyActionFieldData>(self);
    CThostFtdcInputSpdApplyActionField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcInputSpdApplyActionFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcInputSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputSpdApplyActionFieldData>(self);
    CThostFtdcInputSpdApplyActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcInputSpdApplyActionFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputSpdApplyActionField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputSpdApplyActionFieldData>(self);
    CThostFtdcInputSpdApplyActionField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合同编号
/// typedef char TThostFtdcOrderSysIDType[21]
static PyObject *PyCThostFtdcInputSpdApplyActionFieldType_get_OrderSysID(PyObject *self, void *closure) {
    PyCThostFtdcInputSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputSpdApplyActionFieldData>(self);
    CThostFtdcInputSpdApplyActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderSysID, (Py_ssize_t)sizeof(data->OrderSysID));
    return PyBytes_FromString(data->OrderSysID);
}

static int PyCThostFtdcInputSpdApplyActionFieldType_set_OrderSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputSpdApplyActionField::OrderSysID)) {
        PyErr_SetString(PyExc_ValueError, "OrderSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputSpdApplyActionFieldData>(self);
    CThostFtdcInputSpdApplyActionField *data = &(extra->data);
    // memset(data->OrderSysID, 0, sizeof(data->OrderSysID));
    // memcpy(data->OrderSysID, buf, len);
    strncpy(data->OrderSysID, buf, sizeof(data->OrderSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单引用
/// typedef char TThostFtdcOrderRefType[13]
static PyObject *PyCThostFtdcInputSpdApplyActionFieldType_get_OrderRef(PyObject *self, void *closure) {
    PyCThostFtdcInputSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputSpdApplyActionFieldData>(self);
    CThostFtdcInputSpdApplyActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderRef, (Py_ssize_t)sizeof(data->OrderRef));
    return PyBytes_FromString(data->OrderRef);
}

static int PyCThostFtdcInputSpdApplyActionFieldType_set_OrderRef(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderRef Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputSpdApplyActionField::OrderRef)) {
        PyErr_SetString(PyExc_ValueError, "OrderRef must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputSpdApplyActionFieldData>(self);
    CThostFtdcInputSpdApplyActionField *data = &(extra->data);
    // memset(data->OrderRef, 0, sizeof(data->OrderRef));
    // memcpy(data->OrderRef, buf, len);
    strncpy(data->OrderRef, buf, sizeof(data->OrderRef));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcInputSpdApplyActionFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcInputSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputSpdApplyActionFieldData>(self);
    CThostFtdcInputSpdApplyActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcInputSpdApplyActionFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputSpdApplyActionField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputSpdApplyActionFieldData>(self);
    CThostFtdcInputSpdApplyActionField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcInputSpdApplyActionFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcInputSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputSpdApplyActionFieldData>(self);
    CThostFtdcInputSpdApplyActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcInputSpdApplyActionFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputSpdApplyActionField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputSpdApplyActionFieldData>(self);
    CThostFtdcInputSpdApplyActionField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcInputSpdApplyActionFieldType_members[] = {
    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    {
        .name = "FrontID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInputSpdApplyActionFieldData, data.FrontID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("前置编号")
    },
    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    {
        .name = "SessionID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInputSpdApplyActionFieldData, data.SessionID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("会话编号")
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
        .offset = offsetof(PyCThostFtdcInputSpdApplyActionFieldData, data.RequestID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("请求编号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcInputSpdApplyActionFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcInputSpdApplyActionFieldType_get_BrokerID,
    .set = PyCThostFtdcInputSpdApplyActionFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcInputSpdApplyActionFieldType_get_UserID,
    .set = PyCThostFtdcInputSpdApplyActionFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcInputSpdApplyActionFieldType_get_InvestorID,
    .set = PyCThostFtdcInputSpdApplyActionFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcInputSpdApplyActionFieldType_get_ExchangeID,
    .set = PyCThostFtdcInputSpdApplyActionFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 合同编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    {
    .name = "OrderSysID",
    .get = PyCThostFtdcInputSpdApplyActionFieldType_get_OrderSysID,
    .set = PyCThostFtdcInputSpdApplyActionFieldType_set_OrderSysID,
    .doc = PyDoc_STR("合同编号"),
    },
    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    {
    .name = "OrderRef",
    .get = PyCThostFtdcInputSpdApplyActionFieldType_get_OrderRef,
    .set = PyCThostFtdcInputSpdApplyActionFieldType_set_OrderRef,
    .doc = PyDoc_STR("报单引用"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcInputSpdApplyActionFieldType_get_IPAddress,
    .set = PyCThostFtdcInputSpdApplyActionFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcInputSpdApplyActionFieldType_get_MacAddress,
    .set = PyCThostFtdcInputSpdApplyActionFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcInputSpdApplyActionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcInputSpdApplyActionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("套利申请撤销")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcInputSpdApplyActionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcInputSpdApplyActionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcInputSpdApplyActionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcInputSpdApplyActionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcInputSpdApplyActionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcInputSpdApplyActionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("套利申请撤销")},
    {Py_tp_members, PyCThostFtdcInputSpdApplyActionFieldType_members},
    {Py_tp_getset, PyCThostFtdcInputSpdApplyActionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcInputSpdApplyActionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcInputSpdApplyActionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcInputSpdApplyActionFieldType_spec = {
    .name = "PyCTP.CThostFtdcInputSpdApplyActionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcInputSpdApplyActionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcInputSpdApplyActionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcInputSpdApplyActionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcInputSpdApplyActionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcInputSpdApplyActionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcInputSpdApplyActionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcInputSpdApplyActionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcInputSpdApplyActionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcInputSpdApplyActionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInputSpdApplyActionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}