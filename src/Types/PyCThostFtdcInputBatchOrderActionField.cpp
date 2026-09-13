
#include "PyCThostFtdcInputBatchOrderActionField.h"

///输入批量报单操作

static int PyCThostFtdcInputBatchOrderActionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "OrderActionRef", "RequestID", "FrontID", "SessionID", "ExchangeID", "UserID", "InvestUnitID", "reserve1", "MacAddress", "IPAddress", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcInputBatchOrderActionField_BrokerID = NULL;
    Py_ssize_t CThostFtdcInputBatchOrderActionField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInputBatchOrderActionField_InvestorID = NULL;
    Py_ssize_t CThostFtdcInputBatchOrderActionField_InvestorID_length = 0;

    /// 报单操作引用
    /// typedef int TThostFtdcOrderActionRefType
    int CThostFtdcInputBatchOrderActionField_OrderActionRef = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcInputBatchOrderActionField_RequestID = 0;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    int CThostFtdcInputBatchOrderActionField_FrontID = 0;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcInputBatchOrderActionField_SessionID = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcInputBatchOrderActionField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcInputBatchOrderActionField_ExchangeID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcInputBatchOrderActionField_UserID = NULL;
    Py_ssize_t CThostFtdcInputBatchOrderActionField_UserID_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcInputBatchOrderActionField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcInputBatchOrderActionField_InvestUnitID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcInputBatchOrderActionField_reserve1 = NULL;
    Py_ssize_t CThostFtdcInputBatchOrderActionField_reserve1_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcInputBatchOrderActionField_MacAddress = NULL;
    Py_ssize_t CThostFtdcInputBatchOrderActionField_MacAddress_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcInputBatchOrderActionField_IPAddress = NULL;
    Py_ssize_t CThostFtdcInputBatchOrderActionField_IPAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iiiiy#y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcInputBatchOrderActionField_BrokerID, &CThostFtdcInputBatchOrderActionField_BrokerID_length
        , &CThostFtdcInputBatchOrderActionField_InvestorID, &CThostFtdcInputBatchOrderActionField_InvestorID_length
        , &CThostFtdcInputBatchOrderActionField_OrderActionRef
        , &CThostFtdcInputBatchOrderActionField_RequestID
        , &CThostFtdcInputBatchOrderActionField_FrontID
        , &CThostFtdcInputBatchOrderActionField_SessionID
        , &CThostFtdcInputBatchOrderActionField_ExchangeID, &CThostFtdcInputBatchOrderActionField_ExchangeID_length
        , &CThostFtdcInputBatchOrderActionField_UserID, &CThostFtdcInputBatchOrderActionField_UserID_length
        , &CThostFtdcInputBatchOrderActionField_InvestUnitID, &CThostFtdcInputBatchOrderActionField_InvestUnitID_length
        , &CThostFtdcInputBatchOrderActionField_reserve1, &CThostFtdcInputBatchOrderActionField_reserve1_length
        , &CThostFtdcInputBatchOrderActionField_MacAddress, &CThostFtdcInputBatchOrderActionField_MacAddress_length
        , &CThostFtdcInputBatchOrderActionField_IPAddress, &CThostFtdcInputBatchOrderActionField_IPAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcInputBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputBatchOrderActionFieldData>(self);
    CThostFtdcInputBatchOrderActionField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcInputBatchOrderActionField_BrokerID != NULL ) {
        if(CThostFtdcInputBatchOrderActionField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcInputBatchOrderActionField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcInputBatchOrderActionField_BrokerID, CThostFtdcInputBatchOrderActionField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcInputBatchOrderActionField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcInputBatchOrderActionField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInputBatchOrderActionField_InvestorID != NULL ) {
        if(CThostFtdcInputBatchOrderActionField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcInputBatchOrderActionField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcInputBatchOrderActionField_InvestorID, CThostFtdcInputBatchOrderActionField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcInputBatchOrderActionField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcInputBatchOrderActionField_InvestorID = NULL;
    }

    /// 报单操作引用
    /// typedef int TThostFtdcOrderActionRefType
    data->OrderActionRef = CThostFtdcInputBatchOrderActionField_OrderActionRef;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcInputBatchOrderActionField_RequestID;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    data->FrontID = CThostFtdcInputBatchOrderActionField_FrontID;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcInputBatchOrderActionField_SessionID;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcInputBatchOrderActionField_ExchangeID != NULL ) {
        if(CThostFtdcInputBatchOrderActionField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcInputBatchOrderActionField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcInputBatchOrderActionField_ExchangeID, CThostFtdcInputBatchOrderActionField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcInputBatchOrderActionField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcInputBatchOrderActionField_ExchangeID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcInputBatchOrderActionField_UserID != NULL ) {
        if(CThostFtdcInputBatchOrderActionField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcInputBatchOrderActionField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcInputBatchOrderActionField_UserID, CThostFtdcInputBatchOrderActionField_UserID_length);
        strncpy(data->UserID, CThostFtdcInputBatchOrderActionField_UserID, sizeof(data->UserID));
        CThostFtdcInputBatchOrderActionField_UserID = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcInputBatchOrderActionField_InvestUnitID != NULL ) {
        if(CThostFtdcInputBatchOrderActionField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcInputBatchOrderActionField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcInputBatchOrderActionField_InvestUnitID, CThostFtdcInputBatchOrderActionField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcInputBatchOrderActionField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcInputBatchOrderActionField_InvestUnitID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcInputBatchOrderActionField_reserve1 != NULL ) {
        if(CThostFtdcInputBatchOrderActionField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 15)", CThostFtdcInputBatchOrderActionField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcInputBatchOrderActionField_reserve1, CThostFtdcInputBatchOrderActionField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcInputBatchOrderActionField_reserve1, sizeof(data->reserve1));
        CThostFtdcInputBatchOrderActionField_reserve1 = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcInputBatchOrderActionField_MacAddress != NULL ) {
        if(CThostFtdcInputBatchOrderActionField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcInputBatchOrderActionField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcInputBatchOrderActionField_MacAddress, CThostFtdcInputBatchOrderActionField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcInputBatchOrderActionField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcInputBatchOrderActionField_MacAddress = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcInputBatchOrderActionField_IPAddress != NULL ) {
        if(CThostFtdcInputBatchOrderActionField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcInputBatchOrderActionField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcInputBatchOrderActionField_IPAddress, CThostFtdcInputBatchOrderActionField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcInputBatchOrderActionField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcInputBatchOrderActionField_IPAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcInputBatchOrderActionFieldType_repr(PyObject *self) {

    PyCThostFtdcInputBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputBatchOrderActionFieldData>(self);
    CThostFtdcInputBatchOrderActionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:i,s:i,s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "OrderActionRef", data->OrderActionRef
        , "RequestID", data->RequestID
        , "FrontID", data->FrontID
        , "SessionID", data->SessionID
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "MacAddress", data->MacAddress//, (Py_ssize_t)sizeof(data->MacAddress)
        , "IPAddress", data->IPAddress//, (Py_ssize_t)sizeof(data->IPAddress)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputBatchOrderActionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputBatchOrderActionField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcInputBatchOrderActionFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcInputBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputBatchOrderActionFieldData>(self);
    CThostFtdcInputBatchOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcInputBatchOrderActionFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputBatchOrderActionField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputBatchOrderActionFieldData>(self);
    CThostFtdcInputBatchOrderActionField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInputBatchOrderActionFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcInputBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputBatchOrderActionFieldData>(self);
    CThostFtdcInputBatchOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcInputBatchOrderActionFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputBatchOrderActionField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputBatchOrderActionFieldData>(self);
    CThostFtdcInputBatchOrderActionField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcInputBatchOrderActionFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcInputBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputBatchOrderActionFieldData>(self);
    CThostFtdcInputBatchOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcInputBatchOrderActionFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputBatchOrderActionField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputBatchOrderActionFieldData>(self);
    CThostFtdcInputBatchOrderActionField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcInputBatchOrderActionFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcInputBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputBatchOrderActionFieldData>(self);
    CThostFtdcInputBatchOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcInputBatchOrderActionFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputBatchOrderActionField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputBatchOrderActionFieldData>(self);
    CThostFtdcInputBatchOrderActionField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcInputBatchOrderActionFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcInputBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputBatchOrderActionFieldData>(self);
    CThostFtdcInputBatchOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcInputBatchOrderActionFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputBatchOrderActionField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputBatchOrderActionFieldData>(self);
    CThostFtdcInputBatchOrderActionField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcInputBatchOrderActionFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcInputBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputBatchOrderActionFieldData>(self);
    CThostFtdcInputBatchOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcInputBatchOrderActionFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputBatchOrderActionField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputBatchOrderActionFieldData>(self);
    CThostFtdcInputBatchOrderActionField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcInputBatchOrderActionFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcInputBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputBatchOrderActionFieldData>(self);
    CThostFtdcInputBatchOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcInputBatchOrderActionFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputBatchOrderActionField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputBatchOrderActionFieldData>(self);
    CThostFtdcInputBatchOrderActionField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcInputBatchOrderActionFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcInputBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputBatchOrderActionFieldData>(self);
    CThostFtdcInputBatchOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcInputBatchOrderActionFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputBatchOrderActionField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputBatchOrderActionFieldData>(self);
    CThostFtdcInputBatchOrderActionField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcInputBatchOrderActionFieldType_members[] = {
    /// 报单操作引用
    /// typedef int TThostFtdcOrderActionRefType
    {
        .name = "OrderActionRef",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInputBatchOrderActionFieldData, data.OrderActionRef),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("报单操作引用")
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
        .offset = offsetof(PyCThostFtdcInputBatchOrderActionFieldData, data.RequestID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("请求编号")
    },
    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    {
        .name = "FrontID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInputBatchOrderActionFieldData, data.FrontID),
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
        .offset = offsetof(PyCThostFtdcInputBatchOrderActionFieldData, data.SessionID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("会话编号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcInputBatchOrderActionFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcInputBatchOrderActionFieldType_get_BrokerID,
    .set = PyCThostFtdcInputBatchOrderActionFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcInputBatchOrderActionFieldType_get_InvestorID,
    .set = PyCThostFtdcInputBatchOrderActionFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcInputBatchOrderActionFieldType_get_ExchangeID,
    .set = PyCThostFtdcInputBatchOrderActionFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcInputBatchOrderActionFieldType_get_UserID,
    .set = PyCThostFtdcInputBatchOrderActionFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcInputBatchOrderActionFieldType_get_InvestUnitID,
    .set = PyCThostFtdcInputBatchOrderActionFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve1",
    .get = PyCThostFtdcInputBatchOrderActionFieldType_get_reserve1,
    .set = PyCThostFtdcInputBatchOrderActionFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcInputBatchOrderActionFieldType_get_MacAddress,
    .set = PyCThostFtdcInputBatchOrderActionFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcInputBatchOrderActionFieldType_get_IPAddress,
    .set = PyCThostFtdcInputBatchOrderActionFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcInputBatchOrderActionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcInputBatchOrderActionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("输入批量报单操作")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcInputBatchOrderActionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcInputBatchOrderActionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcInputBatchOrderActionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcInputBatchOrderActionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcInputBatchOrderActionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcInputBatchOrderActionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("输入批量报单操作")},
    {Py_tp_members, PyCThostFtdcInputBatchOrderActionFieldType_members},
    {Py_tp_getset, PyCThostFtdcInputBatchOrderActionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcInputBatchOrderActionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcInputBatchOrderActionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcInputBatchOrderActionFieldType_spec = {
    .name = "PyCTP.CThostFtdcInputBatchOrderActionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcInputBatchOrderActionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcInputBatchOrderActionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcInputBatchOrderActionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcInputBatchOrderActionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcInputBatchOrderActionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcInputBatchOrderActionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcInputBatchOrderActionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcInputBatchOrderActionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcInputBatchOrderActionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInputBatchOrderActionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}