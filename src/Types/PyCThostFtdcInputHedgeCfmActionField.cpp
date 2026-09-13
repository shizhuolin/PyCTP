
#include "PyCThostFtdcInputHedgeCfmActionField.h"

///套保申请撤销

static int PyCThostFtdcInputHedgeCfmActionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "UserID", "InvestorID", "ExchangeID", "OrderSysID", "OrderRef", "FrontID", "SessionID", "RequestID", "IPAddress", "MacAddress", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcInputHedgeCfmActionField_BrokerID = NULL;
    Py_ssize_t CThostFtdcInputHedgeCfmActionField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcInputHedgeCfmActionField_UserID = NULL;
    Py_ssize_t CThostFtdcInputHedgeCfmActionField_UserID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInputHedgeCfmActionField_InvestorID = NULL;
    Py_ssize_t CThostFtdcInputHedgeCfmActionField_InvestorID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcInputHedgeCfmActionField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcInputHedgeCfmActionField_ExchangeID_length = 0;

    /// 合同编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    char *CThostFtdcInputHedgeCfmActionField_OrderSysID = NULL;
    Py_ssize_t CThostFtdcInputHedgeCfmActionField_OrderSysID_length = 0;

    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    char *CThostFtdcInputHedgeCfmActionField_OrderRef = NULL;
    Py_ssize_t CThostFtdcInputHedgeCfmActionField_OrderRef_length = 0;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    int CThostFtdcInputHedgeCfmActionField_FrontID = 0;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcInputHedgeCfmActionField_SessionID = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcInputHedgeCfmActionField_RequestID = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcInputHedgeCfmActionField_IPAddress = NULL;
    Py_ssize_t CThostFtdcInputHedgeCfmActionField_IPAddress_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcInputHedgeCfmActionField_MacAddress = NULL;
    Py_ssize_t CThostFtdcInputHedgeCfmActionField_MacAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#iiiy#y#", (char **)kwlist
        , &CThostFtdcInputHedgeCfmActionField_BrokerID, &CThostFtdcInputHedgeCfmActionField_BrokerID_length
        , &CThostFtdcInputHedgeCfmActionField_UserID, &CThostFtdcInputHedgeCfmActionField_UserID_length
        , &CThostFtdcInputHedgeCfmActionField_InvestorID, &CThostFtdcInputHedgeCfmActionField_InvestorID_length
        , &CThostFtdcInputHedgeCfmActionField_ExchangeID, &CThostFtdcInputHedgeCfmActionField_ExchangeID_length
        , &CThostFtdcInputHedgeCfmActionField_OrderSysID, &CThostFtdcInputHedgeCfmActionField_OrderSysID_length
        , &CThostFtdcInputHedgeCfmActionField_OrderRef, &CThostFtdcInputHedgeCfmActionField_OrderRef_length
        , &CThostFtdcInputHedgeCfmActionField_FrontID
        , &CThostFtdcInputHedgeCfmActionField_SessionID
        , &CThostFtdcInputHedgeCfmActionField_RequestID
        , &CThostFtdcInputHedgeCfmActionField_IPAddress, &CThostFtdcInputHedgeCfmActionField_IPAddress_length
        , &CThostFtdcInputHedgeCfmActionField_MacAddress, &CThostFtdcInputHedgeCfmActionField_MacAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcInputHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputHedgeCfmActionFieldData>(self);
    CThostFtdcInputHedgeCfmActionField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcInputHedgeCfmActionField_BrokerID != NULL ) {
        if(CThostFtdcInputHedgeCfmActionField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcInputHedgeCfmActionField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcInputHedgeCfmActionField_BrokerID, CThostFtdcInputHedgeCfmActionField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcInputHedgeCfmActionField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcInputHedgeCfmActionField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcInputHedgeCfmActionField_UserID != NULL ) {
        if(CThostFtdcInputHedgeCfmActionField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcInputHedgeCfmActionField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcInputHedgeCfmActionField_UserID, CThostFtdcInputHedgeCfmActionField_UserID_length);
        strncpy(data->UserID, CThostFtdcInputHedgeCfmActionField_UserID, sizeof(data->UserID));
        CThostFtdcInputHedgeCfmActionField_UserID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInputHedgeCfmActionField_InvestorID != NULL ) {
        if(CThostFtdcInputHedgeCfmActionField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcInputHedgeCfmActionField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcInputHedgeCfmActionField_InvestorID, CThostFtdcInputHedgeCfmActionField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcInputHedgeCfmActionField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcInputHedgeCfmActionField_InvestorID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcInputHedgeCfmActionField_ExchangeID != NULL ) {
        if(CThostFtdcInputHedgeCfmActionField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcInputHedgeCfmActionField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcInputHedgeCfmActionField_ExchangeID, CThostFtdcInputHedgeCfmActionField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcInputHedgeCfmActionField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcInputHedgeCfmActionField_ExchangeID = NULL;
    }

    /// 合同编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    if( CThostFtdcInputHedgeCfmActionField_OrderSysID != NULL ) {
        if(CThostFtdcInputHedgeCfmActionField_OrderSysID_length >= (Py_ssize_t)sizeof(data->OrderSysID)) {
            PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is 20)", CThostFtdcInputHedgeCfmActionField_OrderSysID_length);
            return -1;
        }
        // memset(data->OrderSysID, 0, sizeof(data->OrderSysID));
        // memcpy(data->OrderSysID, CThostFtdcInputHedgeCfmActionField_OrderSysID, CThostFtdcInputHedgeCfmActionField_OrderSysID_length);
        strncpy(data->OrderSysID, CThostFtdcInputHedgeCfmActionField_OrderSysID, sizeof(data->OrderSysID));
        CThostFtdcInputHedgeCfmActionField_OrderSysID = NULL;
    }

    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    if( CThostFtdcInputHedgeCfmActionField_OrderRef != NULL ) {
        if(CThostFtdcInputHedgeCfmActionField_OrderRef_length >= (Py_ssize_t)sizeof(data->OrderRef)) {
            PyErr_Format(PyExc_ValueError, "OrderRef too long: length=%zd (max allowed is 12)", CThostFtdcInputHedgeCfmActionField_OrderRef_length);
            return -1;
        }
        // memset(data->OrderRef, 0, sizeof(data->OrderRef));
        // memcpy(data->OrderRef, CThostFtdcInputHedgeCfmActionField_OrderRef, CThostFtdcInputHedgeCfmActionField_OrderRef_length);
        strncpy(data->OrderRef, CThostFtdcInputHedgeCfmActionField_OrderRef, sizeof(data->OrderRef));
        CThostFtdcInputHedgeCfmActionField_OrderRef = NULL;
    }

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    data->FrontID = CThostFtdcInputHedgeCfmActionField_FrontID;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcInputHedgeCfmActionField_SessionID;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcInputHedgeCfmActionField_RequestID;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcInputHedgeCfmActionField_IPAddress != NULL ) {
        if(CThostFtdcInputHedgeCfmActionField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcInputHedgeCfmActionField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcInputHedgeCfmActionField_IPAddress, CThostFtdcInputHedgeCfmActionField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcInputHedgeCfmActionField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcInputHedgeCfmActionField_IPAddress = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcInputHedgeCfmActionField_MacAddress != NULL ) {
        if(CThostFtdcInputHedgeCfmActionField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcInputHedgeCfmActionField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcInputHedgeCfmActionField_MacAddress, CThostFtdcInputHedgeCfmActionField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcInputHedgeCfmActionField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcInputHedgeCfmActionField_MacAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcInputHedgeCfmActionFieldType_repr(PyObject *self) {

    PyCThostFtdcInputHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputHedgeCfmActionFieldData>(self);
    CThostFtdcInputHedgeCfmActionField *data = &(extra->data);

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputHedgeCfmActionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputHedgeCfmActionField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcInputHedgeCfmActionFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcInputHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputHedgeCfmActionFieldData>(self);
    CThostFtdcInputHedgeCfmActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcInputHedgeCfmActionFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputHedgeCfmActionField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputHedgeCfmActionFieldData>(self);
    CThostFtdcInputHedgeCfmActionField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcInputHedgeCfmActionFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcInputHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputHedgeCfmActionFieldData>(self);
    CThostFtdcInputHedgeCfmActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcInputHedgeCfmActionFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputHedgeCfmActionField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputHedgeCfmActionFieldData>(self);
    CThostFtdcInputHedgeCfmActionField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInputHedgeCfmActionFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcInputHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputHedgeCfmActionFieldData>(self);
    CThostFtdcInputHedgeCfmActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcInputHedgeCfmActionFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputHedgeCfmActionField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputHedgeCfmActionFieldData>(self);
    CThostFtdcInputHedgeCfmActionField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcInputHedgeCfmActionFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcInputHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputHedgeCfmActionFieldData>(self);
    CThostFtdcInputHedgeCfmActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcInputHedgeCfmActionFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputHedgeCfmActionField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputHedgeCfmActionFieldData>(self);
    CThostFtdcInputHedgeCfmActionField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合同编号
/// typedef char TThostFtdcOrderSysIDType[21]
static PyObject *PyCThostFtdcInputHedgeCfmActionFieldType_get_OrderSysID(PyObject *self, void *closure) {
    PyCThostFtdcInputHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputHedgeCfmActionFieldData>(self);
    CThostFtdcInputHedgeCfmActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderSysID, (Py_ssize_t)sizeof(data->OrderSysID));
    return PyBytes_FromString(data->OrderSysID);
}

static int PyCThostFtdcInputHedgeCfmActionFieldType_set_OrderSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputHedgeCfmActionField::OrderSysID)) {
        PyErr_SetString(PyExc_ValueError, "OrderSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputHedgeCfmActionFieldData>(self);
    CThostFtdcInputHedgeCfmActionField *data = &(extra->data);
    // memset(data->OrderSysID, 0, sizeof(data->OrderSysID));
    // memcpy(data->OrderSysID, buf, len);
    strncpy(data->OrderSysID, buf, sizeof(data->OrderSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单引用
/// typedef char TThostFtdcOrderRefType[13]
static PyObject *PyCThostFtdcInputHedgeCfmActionFieldType_get_OrderRef(PyObject *self, void *closure) {
    PyCThostFtdcInputHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputHedgeCfmActionFieldData>(self);
    CThostFtdcInputHedgeCfmActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderRef, (Py_ssize_t)sizeof(data->OrderRef));
    return PyBytes_FromString(data->OrderRef);
}

static int PyCThostFtdcInputHedgeCfmActionFieldType_set_OrderRef(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderRef Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputHedgeCfmActionField::OrderRef)) {
        PyErr_SetString(PyExc_ValueError, "OrderRef must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputHedgeCfmActionFieldData>(self);
    CThostFtdcInputHedgeCfmActionField *data = &(extra->data);
    // memset(data->OrderRef, 0, sizeof(data->OrderRef));
    // memcpy(data->OrderRef, buf, len);
    strncpy(data->OrderRef, buf, sizeof(data->OrderRef));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcInputHedgeCfmActionFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcInputHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputHedgeCfmActionFieldData>(self);
    CThostFtdcInputHedgeCfmActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcInputHedgeCfmActionFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputHedgeCfmActionField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputHedgeCfmActionFieldData>(self);
    CThostFtdcInputHedgeCfmActionField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcInputHedgeCfmActionFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcInputHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputHedgeCfmActionFieldData>(self);
    CThostFtdcInputHedgeCfmActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcInputHedgeCfmActionFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputHedgeCfmActionField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputHedgeCfmActionFieldData>(self);
    CThostFtdcInputHedgeCfmActionField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcInputHedgeCfmActionFieldType_members[] = {
    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    {
        .name = "FrontID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInputHedgeCfmActionFieldData, data.FrontID),
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
        .offset = offsetof(PyCThostFtdcInputHedgeCfmActionFieldData, data.SessionID),
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
        .offset = offsetof(PyCThostFtdcInputHedgeCfmActionFieldData, data.RequestID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("请求编号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcInputHedgeCfmActionFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcInputHedgeCfmActionFieldType_get_BrokerID,
    .set = PyCThostFtdcInputHedgeCfmActionFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcInputHedgeCfmActionFieldType_get_UserID,
    .set = PyCThostFtdcInputHedgeCfmActionFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcInputHedgeCfmActionFieldType_get_InvestorID,
    .set = PyCThostFtdcInputHedgeCfmActionFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcInputHedgeCfmActionFieldType_get_ExchangeID,
    .set = PyCThostFtdcInputHedgeCfmActionFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 合同编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    {
    .name = "OrderSysID",
    .get = PyCThostFtdcInputHedgeCfmActionFieldType_get_OrderSysID,
    .set = PyCThostFtdcInputHedgeCfmActionFieldType_set_OrderSysID,
    .doc = PyDoc_STR("合同编号"),
    },
    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    {
    .name = "OrderRef",
    .get = PyCThostFtdcInputHedgeCfmActionFieldType_get_OrderRef,
    .set = PyCThostFtdcInputHedgeCfmActionFieldType_set_OrderRef,
    .doc = PyDoc_STR("报单引用"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcInputHedgeCfmActionFieldType_get_IPAddress,
    .set = PyCThostFtdcInputHedgeCfmActionFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcInputHedgeCfmActionFieldType_get_MacAddress,
    .set = PyCThostFtdcInputHedgeCfmActionFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcInputHedgeCfmActionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcInputHedgeCfmActionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("套保申请撤销")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcInputHedgeCfmActionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcInputHedgeCfmActionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcInputHedgeCfmActionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcInputHedgeCfmActionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcInputHedgeCfmActionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcInputHedgeCfmActionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("套保申请撤销")},
    {Py_tp_members, PyCThostFtdcInputHedgeCfmActionFieldType_members},
    {Py_tp_getset, PyCThostFtdcInputHedgeCfmActionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcInputHedgeCfmActionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcInputHedgeCfmActionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcInputHedgeCfmActionFieldType_spec = {
    .name = "PyCTP.CThostFtdcInputHedgeCfmActionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcInputHedgeCfmActionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcInputHedgeCfmActionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcInputHedgeCfmActionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcInputHedgeCfmActionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcInputHedgeCfmActionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcInputHedgeCfmActionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcInputHedgeCfmActionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcInputHedgeCfmActionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcInputHedgeCfmActionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInputHedgeCfmActionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}