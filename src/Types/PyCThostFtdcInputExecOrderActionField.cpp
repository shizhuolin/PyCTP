
#include "PyCThostFtdcInputExecOrderActionField.h"

///输入执行宣告操作

static int PyCThostFtdcInputExecOrderActionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "ExecOrderActionRef", "ExecOrderRef", "RequestID", "FrontID", "SessionID", "ExchangeID", "ExecOrderSysID", "ActionFlag", "UserID", "reserve1", "InvestUnitID", "reserve2", "MacAddress", "InstrumentID", "IPAddress", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcInputExecOrderActionField_BrokerID = NULL;
    Py_ssize_t CThostFtdcInputExecOrderActionField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInputExecOrderActionField_InvestorID = NULL;
    Py_ssize_t CThostFtdcInputExecOrderActionField_InvestorID_length = 0;

    /// 执行宣告操作引用
    /// typedef int TThostFtdcOrderActionRefType
    int CThostFtdcInputExecOrderActionField_ExecOrderActionRef = 0;

    /// 执行宣告引用
    /// typedef char TThostFtdcOrderRefType[13]
    char *CThostFtdcInputExecOrderActionField_ExecOrderRef = NULL;
    Py_ssize_t CThostFtdcInputExecOrderActionField_ExecOrderRef_length = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcInputExecOrderActionField_RequestID = 0;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    int CThostFtdcInputExecOrderActionField_FrontID = 0;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcInputExecOrderActionField_SessionID = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcInputExecOrderActionField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcInputExecOrderActionField_ExchangeID_length = 0;

    /// 执行宣告操作编号
    /// typedef char TThostFtdcExecOrderSysIDType[21]
    char *CThostFtdcInputExecOrderActionField_ExecOrderSysID = NULL;
    Py_ssize_t CThostFtdcInputExecOrderActionField_ExecOrderSysID_length = 0;

    /// 操作标志
    /// typedef char TThostFtdcActionFlagType
    char CThostFtdcInputExecOrderActionField_ActionFlag = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcInputExecOrderActionField_UserID = NULL;
    Py_ssize_t CThostFtdcInputExecOrderActionField_UserID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcInputExecOrderActionField_reserve1 = NULL;
    Py_ssize_t CThostFtdcInputExecOrderActionField_reserve1_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcInputExecOrderActionField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcInputExecOrderActionField_InvestUnitID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcInputExecOrderActionField_reserve2 = NULL;
    Py_ssize_t CThostFtdcInputExecOrderActionField_reserve2_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcInputExecOrderActionField_MacAddress = NULL;
    Py_ssize_t CThostFtdcInputExecOrderActionField_MacAddress_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcInputExecOrderActionField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcInputExecOrderActionField_InstrumentID_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcInputExecOrderActionField_IPAddress = NULL;
    Py_ssize_t CThostFtdcInputExecOrderActionField_IPAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iy#iiiy#y#cy#y#y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcInputExecOrderActionField_BrokerID, &CThostFtdcInputExecOrderActionField_BrokerID_length
        , &CThostFtdcInputExecOrderActionField_InvestorID, &CThostFtdcInputExecOrderActionField_InvestorID_length
        , &CThostFtdcInputExecOrderActionField_ExecOrderActionRef
        , &CThostFtdcInputExecOrderActionField_ExecOrderRef, &CThostFtdcInputExecOrderActionField_ExecOrderRef_length
        , &CThostFtdcInputExecOrderActionField_RequestID
        , &CThostFtdcInputExecOrderActionField_FrontID
        , &CThostFtdcInputExecOrderActionField_SessionID
        , &CThostFtdcInputExecOrderActionField_ExchangeID, &CThostFtdcInputExecOrderActionField_ExchangeID_length
        , &CThostFtdcInputExecOrderActionField_ExecOrderSysID, &CThostFtdcInputExecOrderActionField_ExecOrderSysID_length
        , &CThostFtdcInputExecOrderActionField_ActionFlag
        , &CThostFtdcInputExecOrderActionField_UserID, &CThostFtdcInputExecOrderActionField_UserID_length
        , &CThostFtdcInputExecOrderActionField_reserve1, &CThostFtdcInputExecOrderActionField_reserve1_length
        , &CThostFtdcInputExecOrderActionField_InvestUnitID, &CThostFtdcInputExecOrderActionField_InvestUnitID_length
        , &CThostFtdcInputExecOrderActionField_reserve2, &CThostFtdcInputExecOrderActionField_reserve2_length
        , &CThostFtdcInputExecOrderActionField_MacAddress, &CThostFtdcInputExecOrderActionField_MacAddress_length
        , &CThostFtdcInputExecOrderActionField_InstrumentID, &CThostFtdcInputExecOrderActionField_InstrumentID_length
        , &CThostFtdcInputExecOrderActionField_IPAddress, &CThostFtdcInputExecOrderActionField_IPAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcInputExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderActionFieldData>(self);
    CThostFtdcInputExecOrderActionField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcInputExecOrderActionField_BrokerID != NULL ) {
        if(CThostFtdcInputExecOrderActionField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcInputExecOrderActionField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcInputExecOrderActionField_BrokerID, CThostFtdcInputExecOrderActionField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcInputExecOrderActionField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcInputExecOrderActionField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInputExecOrderActionField_InvestorID != NULL ) {
        if(CThostFtdcInputExecOrderActionField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcInputExecOrderActionField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcInputExecOrderActionField_InvestorID, CThostFtdcInputExecOrderActionField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcInputExecOrderActionField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcInputExecOrderActionField_InvestorID = NULL;
    }

    /// 执行宣告操作引用
    /// typedef int TThostFtdcOrderActionRefType
    data->ExecOrderActionRef = CThostFtdcInputExecOrderActionField_ExecOrderActionRef;

    /// 执行宣告引用
    /// typedef char TThostFtdcOrderRefType[13]
    if( CThostFtdcInputExecOrderActionField_ExecOrderRef != NULL ) {
        if(CThostFtdcInputExecOrderActionField_ExecOrderRef_length >= (Py_ssize_t)sizeof(data->ExecOrderRef)) {
            PyErr_Format(PyExc_ValueError, "ExecOrderRef too long: length=%zd (max allowed is 12)", CThostFtdcInputExecOrderActionField_ExecOrderRef_length);
            return -1;
        }
        // memset(data->ExecOrderRef, 0, sizeof(data->ExecOrderRef));
        // memcpy(data->ExecOrderRef, CThostFtdcInputExecOrderActionField_ExecOrderRef, CThostFtdcInputExecOrderActionField_ExecOrderRef_length);
        strncpy(data->ExecOrderRef, CThostFtdcInputExecOrderActionField_ExecOrderRef, sizeof(data->ExecOrderRef));
        CThostFtdcInputExecOrderActionField_ExecOrderRef = NULL;
    }

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcInputExecOrderActionField_RequestID;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    data->FrontID = CThostFtdcInputExecOrderActionField_FrontID;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcInputExecOrderActionField_SessionID;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcInputExecOrderActionField_ExchangeID != NULL ) {
        if(CThostFtdcInputExecOrderActionField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcInputExecOrderActionField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcInputExecOrderActionField_ExchangeID, CThostFtdcInputExecOrderActionField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcInputExecOrderActionField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcInputExecOrderActionField_ExchangeID = NULL;
    }

    /// 执行宣告操作编号
    /// typedef char TThostFtdcExecOrderSysIDType[21]
    if( CThostFtdcInputExecOrderActionField_ExecOrderSysID != NULL ) {
        if(CThostFtdcInputExecOrderActionField_ExecOrderSysID_length >= (Py_ssize_t)sizeof(data->ExecOrderSysID)) {
            PyErr_Format(PyExc_ValueError, "ExecOrderSysID too long: length=%zd (max allowed is 20)", CThostFtdcInputExecOrderActionField_ExecOrderSysID_length);
            return -1;
        }
        // memset(data->ExecOrderSysID, 0, sizeof(data->ExecOrderSysID));
        // memcpy(data->ExecOrderSysID, CThostFtdcInputExecOrderActionField_ExecOrderSysID, CThostFtdcInputExecOrderActionField_ExecOrderSysID_length);
        strncpy(data->ExecOrderSysID, CThostFtdcInputExecOrderActionField_ExecOrderSysID, sizeof(data->ExecOrderSysID));
        CThostFtdcInputExecOrderActionField_ExecOrderSysID = NULL;
    }

    /// 操作标志
    /// typedef char TThostFtdcActionFlagType
    data->ActionFlag = CThostFtdcInputExecOrderActionField_ActionFlag;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcInputExecOrderActionField_UserID != NULL ) {
        if(CThostFtdcInputExecOrderActionField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcInputExecOrderActionField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcInputExecOrderActionField_UserID, CThostFtdcInputExecOrderActionField_UserID_length);
        strncpy(data->UserID, CThostFtdcInputExecOrderActionField_UserID, sizeof(data->UserID));
        CThostFtdcInputExecOrderActionField_UserID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcInputExecOrderActionField_reserve1 != NULL ) {
        if(CThostFtdcInputExecOrderActionField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcInputExecOrderActionField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcInputExecOrderActionField_reserve1, CThostFtdcInputExecOrderActionField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcInputExecOrderActionField_reserve1, sizeof(data->reserve1));
        CThostFtdcInputExecOrderActionField_reserve1 = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcInputExecOrderActionField_InvestUnitID != NULL ) {
        if(CThostFtdcInputExecOrderActionField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcInputExecOrderActionField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcInputExecOrderActionField_InvestUnitID, CThostFtdcInputExecOrderActionField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcInputExecOrderActionField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcInputExecOrderActionField_InvestUnitID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcInputExecOrderActionField_reserve2 != NULL ) {
        if(CThostFtdcInputExecOrderActionField_reserve2_length >= (Py_ssize_t)sizeof(data->reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is 15)", CThostFtdcInputExecOrderActionField_reserve2_length);
            return -1;
        }
        // memset(data->reserve2, 0, sizeof(data->reserve2));
        // memcpy(data->reserve2, CThostFtdcInputExecOrderActionField_reserve2, CThostFtdcInputExecOrderActionField_reserve2_length);
        strncpy(data->reserve2, CThostFtdcInputExecOrderActionField_reserve2, sizeof(data->reserve2));
        CThostFtdcInputExecOrderActionField_reserve2 = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcInputExecOrderActionField_MacAddress != NULL ) {
        if(CThostFtdcInputExecOrderActionField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcInputExecOrderActionField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcInputExecOrderActionField_MacAddress, CThostFtdcInputExecOrderActionField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcInputExecOrderActionField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcInputExecOrderActionField_MacAddress = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcInputExecOrderActionField_InstrumentID != NULL ) {
        if(CThostFtdcInputExecOrderActionField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcInputExecOrderActionField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcInputExecOrderActionField_InstrumentID, CThostFtdcInputExecOrderActionField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcInputExecOrderActionField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcInputExecOrderActionField_InstrumentID = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcInputExecOrderActionField_IPAddress != NULL ) {
        if(CThostFtdcInputExecOrderActionField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcInputExecOrderActionField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcInputExecOrderActionField_IPAddress, CThostFtdcInputExecOrderActionField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcInputExecOrderActionField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcInputExecOrderActionField_IPAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcInputExecOrderActionFieldType_repr(PyObject *self) {

    PyCThostFtdcInputExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderActionFieldData>(self);
    CThostFtdcInputExecOrderActionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:i,s:y,s:i,s:i,s:i,s:y,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "ExecOrderActionRef", data->ExecOrderActionRef
        , "ExecOrderRef", data->ExecOrderRef//, (Py_ssize_t)sizeof(data->ExecOrderRef)
        , "RequestID", data->RequestID
        , "FrontID", data->FrontID
        , "SessionID", data->SessionID
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ExecOrderSysID", data->ExecOrderSysID//, (Py_ssize_t)sizeof(data->ExecOrderSysID)
        , "ActionFlag", data->ActionFlag
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
        , "reserve2", data->reserve2//, (Py_ssize_t)sizeof(data->reserve2)
        , "MacAddress", data->MacAddress//, (Py_ssize_t)sizeof(data->MacAddress)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "IPAddress", data->IPAddress//, (Py_ssize_t)sizeof(data->IPAddress)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputExecOrderActionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputExecOrderActionField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcInputExecOrderActionFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcInputExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderActionFieldData>(self);
    CThostFtdcInputExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcInputExecOrderActionFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputExecOrderActionField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderActionFieldData>(self);
    CThostFtdcInputExecOrderActionField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInputExecOrderActionFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcInputExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderActionFieldData>(self);
    CThostFtdcInputExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcInputExecOrderActionFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputExecOrderActionField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderActionFieldData>(self);
    CThostFtdcInputExecOrderActionField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 执行宣告引用
/// typedef char TThostFtdcOrderRefType[13]
static PyObject *PyCThostFtdcInputExecOrderActionFieldType_get_ExecOrderRef(PyObject *self, void *closure) {
    PyCThostFtdcInputExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderActionFieldData>(self);
    CThostFtdcInputExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExecOrderRef, (Py_ssize_t)sizeof(data->ExecOrderRef));
    return PyBytes_FromString(data->ExecOrderRef);
}

static int PyCThostFtdcInputExecOrderActionFieldType_set_ExecOrderRef(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExecOrderRef Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputExecOrderActionField::ExecOrderRef)) {
        PyErr_SetString(PyExc_ValueError, "ExecOrderRef must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderActionFieldData>(self);
    CThostFtdcInputExecOrderActionField *data = &(extra->data);
    // memset(data->ExecOrderRef, 0, sizeof(data->ExecOrderRef));
    // memcpy(data->ExecOrderRef, buf, len);
    strncpy(data->ExecOrderRef, buf, sizeof(data->ExecOrderRef));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcInputExecOrderActionFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcInputExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderActionFieldData>(self);
    CThostFtdcInputExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcInputExecOrderActionFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputExecOrderActionField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderActionFieldData>(self);
    CThostFtdcInputExecOrderActionField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 执行宣告操作编号
/// typedef char TThostFtdcExecOrderSysIDType[21]
static PyObject *PyCThostFtdcInputExecOrderActionFieldType_get_ExecOrderSysID(PyObject *self, void *closure) {
    PyCThostFtdcInputExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderActionFieldData>(self);
    CThostFtdcInputExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExecOrderSysID, (Py_ssize_t)sizeof(data->ExecOrderSysID));
    return PyBytes_FromString(data->ExecOrderSysID);
}

static int PyCThostFtdcInputExecOrderActionFieldType_set_ExecOrderSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExecOrderSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputExecOrderActionField::ExecOrderSysID)) {
        PyErr_SetString(PyExc_ValueError, "ExecOrderSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderActionFieldData>(self);
    CThostFtdcInputExecOrderActionField *data = &(extra->data);
    // memset(data->ExecOrderSysID, 0, sizeof(data->ExecOrderSysID));
    // memcpy(data->ExecOrderSysID, buf, len);
    strncpy(data->ExecOrderSysID, buf, sizeof(data->ExecOrderSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionFlagType
static PyObject *PyCThostFtdcInputExecOrderActionFieldType_get_ActionFlag(PyObject *self, void *closure) {
    PyCThostFtdcInputExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderActionFieldData>(self);
    CThostFtdcInputExecOrderActionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionFlag), 1);
}

static int PyCThostFtdcInputExecOrderActionFieldType_set_ActionFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInputExecOrderActionField::ActionFlag)) {
        PyErr_SetString(PyExc_ValueError, "ActionFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderActionFieldData>(self);
    CThostFtdcInputExecOrderActionField *data = &(extra->data);
    data->ActionFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcInputExecOrderActionFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcInputExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderActionFieldData>(self);
    CThostFtdcInputExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcInputExecOrderActionFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputExecOrderActionField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderActionFieldData>(self);
    CThostFtdcInputExecOrderActionField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcInputExecOrderActionFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcInputExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderActionFieldData>(self);
    CThostFtdcInputExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcInputExecOrderActionFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputExecOrderActionField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderActionFieldData>(self);
    CThostFtdcInputExecOrderActionField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcInputExecOrderActionFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcInputExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderActionFieldData>(self);
    CThostFtdcInputExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcInputExecOrderActionFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputExecOrderActionField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderActionFieldData>(self);
    CThostFtdcInputExecOrderActionField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcInputExecOrderActionFieldType_get_reserve2(PyObject *self, void *closure) {
    PyCThostFtdcInputExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderActionFieldData>(self);
    CThostFtdcInputExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve2, (Py_ssize_t)sizeof(data->reserve2));
    return PyBytes_FromString(data->reserve2);
}

static int PyCThostFtdcInputExecOrderActionFieldType_set_reserve2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputExecOrderActionField::reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderActionFieldData>(self);
    CThostFtdcInputExecOrderActionField *data = &(extra->data);
    // memset(data->reserve2, 0, sizeof(data->reserve2));
    // memcpy(data->reserve2, buf, len);
    strncpy(data->reserve2, buf, sizeof(data->reserve2));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcInputExecOrderActionFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcInputExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderActionFieldData>(self);
    CThostFtdcInputExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcInputExecOrderActionFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputExecOrderActionField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderActionFieldData>(self);
    CThostFtdcInputExecOrderActionField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcInputExecOrderActionFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcInputExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderActionFieldData>(self);
    CThostFtdcInputExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcInputExecOrderActionFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputExecOrderActionField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderActionFieldData>(self);
    CThostFtdcInputExecOrderActionField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcInputExecOrderActionFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcInputExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderActionFieldData>(self);
    CThostFtdcInputExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcInputExecOrderActionFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputExecOrderActionField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderActionFieldData>(self);
    CThostFtdcInputExecOrderActionField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcInputExecOrderActionFieldType_members[] = {
    /// 执行宣告操作引用
    /// typedef int TThostFtdcOrderActionRefType
    {
        .name = "ExecOrderActionRef",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInputExecOrderActionFieldData, data.ExecOrderActionRef),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("执行宣告操作引用")
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
        .offset = offsetof(PyCThostFtdcInputExecOrderActionFieldData, data.RequestID),
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
        .offset = offsetof(PyCThostFtdcInputExecOrderActionFieldData, data.FrontID),
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
        .offset = offsetof(PyCThostFtdcInputExecOrderActionFieldData, data.SessionID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("会话编号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcInputExecOrderActionFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcInputExecOrderActionFieldType_get_BrokerID,
    .set = PyCThostFtdcInputExecOrderActionFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcInputExecOrderActionFieldType_get_InvestorID,
    .set = PyCThostFtdcInputExecOrderActionFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 执行宣告引用
    /// typedef char TThostFtdcOrderRefType[13]
    {
    .name = "ExecOrderRef",
    .get = PyCThostFtdcInputExecOrderActionFieldType_get_ExecOrderRef,
    .set = PyCThostFtdcInputExecOrderActionFieldType_set_ExecOrderRef,
    .doc = PyDoc_STR("执行宣告引用"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcInputExecOrderActionFieldType_get_ExchangeID,
    .set = PyCThostFtdcInputExecOrderActionFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 执行宣告操作编号
    /// typedef char TThostFtdcExecOrderSysIDType[21]
    {
    .name = "ExecOrderSysID",
    .get = PyCThostFtdcInputExecOrderActionFieldType_get_ExecOrderSysID,
    .set = PyCThostFtdcInputExecOrderActionFieldType_set_ExecOrderSysID,
    .doc = PyDoc_STR("执行宣告操作编号"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionFlagType
    {
    .name = "ActionFlag",
    .get = PyCThostFtdcInputExecOrderActionFieldType_get_ActionFlag,
    .set = PyCThostFtdcInputExecOrderActionFieldType_set_ActionFlag,
    .doc = PyDoc_STR("操作标志"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcInputExecOrderActionFieldType_get_UserID,
    .set = PyCThostFtdcInputExecOrderActionFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcInputExecOrderActionFieldType_get_reserve1,
    .set = PyCThostFtdcInputExecOrderActionFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcInputExecOrderActionFieldType_get_InvestUnitID,
    .set = PyCThostFtdcInputExecOrderActionFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve2",
    .get = PyCThostFtdcInputExecOrderActionFieldType_get_reserve2,
    .set = PyCThostFtdcInputExecOrderActionFieldType_set_reserve2,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcInputExecOrderActionFieldType_get_MacAddress,
    .set = PyCThostFtdcInputExecOrderActionFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcInputExecOrderActionFieldType_get_InstrumentID,
    .set = PyCThostFtdcInputExecOrderActionFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcInputExecOrderActionFieldType_get_IPAddress,
    .set = PyCThostFtdcInputExecOrderActionFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcInputExecOrderActionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcInputExecOrderActionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("输入执行宣告操作")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcInputExecOrderActionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcInputExecOrderActionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcInputExecOrderActionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcInputExecOrderActionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcInputExecOrderActionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcInputExecOrderActionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("输入执行宣告操作")},
    {Py_tp_members, PyCThostFtdcInputExecOrderActionFieldType_members},
    {Py_tp_getset, PyCThostFtdcInputExecOrderActionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcInputExecOrderActionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcInputExecOrderActionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcInputExecOrderActionFieldType_spec = {
    .name = "PyCTP.CThostFtdcInputExecOrderActionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcInputExecOrderActionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcInputExecOrderActionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcInputExecOrderActionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcInputExecOrderActionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcInputExecOrderActionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcInputExecOrderActionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcInputExecOrderActionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcInputExecOrderActionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcInputExecOrderActionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInputExecOrderActionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}