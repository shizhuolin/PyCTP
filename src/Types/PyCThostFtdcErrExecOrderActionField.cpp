
#include "PyCThostFtdcErrExecOrderActionField.h"

///错误执行宣告操作

static int PyCThostFtdcErrExecOrderActionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "ExecOrderActionRef", "ExecOrderRef", "RequestID", "FrontID", "SessionID", "ExchangeID", "ExecOrderSysID", "ActionFlag", "UserID", "reserve1", "InvestUnitID", "reserve2", "MacAddress", "ErrorID", "ErrorMsg", "InstrumentID", "IPAddress", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcErrExecOrderActionField_BrokerID = NULL;
    Py_ssize_t CThostFtdcErrExecOrderActionField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcErrExecOrderActionField_InvestorID = NULL;
    Py_ssize_t CThostFtdcErrExecOrderActionField_InvestorID_length = 0;

    /// 执行宣告操作引用
    /// typedef int TThostFtdcOrderActionRefType
    int CThostFtdcErrExecOrderActionField_ExecOrderActionRef = 0;

    /// 执行宣告引用
    /// typedef char TThostFtdcOrderRefType[13]
    char *CThostFtdcErrExecOrderActionField_ExecOrderRef = NULL;
    Py_ssize_t CThostFtdcErrExecOrderActionField_ExecOrderRef_length = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcErrExecOrderActionField_RequestID = 0;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    int CThostFtdcErrExecOrderActionField_FrontID = 0;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcErrExecOrderActionField_SessionID = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcErrExecOrderActionField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcErrExecOrderActionField_ExchangeID_length = 0;

    /// 执行宣告操作编号
    /// typedef char TThostFtdcExecOrderSysIDType[21]
    char *CThostFtdcErrExecOrderActionField_ExecOrderSysID = NULL;
    Py_ssize_t CThostFtdcErrExecOrderActionField_ExecOrderSysID_length = 0;

    /// 操作标志
    /// typedef char TThostFtdcActionFlagType
    char CThostFtdcErrExecOrderActionField_ActionFlag = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcErrExecOrderActionField_UserID = NULL;
    Py_ssize_t CThostFtdcErrExecOrderActionField_UserID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcErrExecOrderActionField_reserve1 = NULL;
    Py_ssize_t CThostFtdcErrExecOrderActionField_reserve1_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcErrExecOrderActionField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcErrExecOrderActionField_InvestUnitID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcErrExecOrderActionField_reserve2 = NULL;
    Py_ssize_t CThostFtdcErrExecOrderActionField_reserve2_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcErrExecOrderActionField_MacAddress = NULL;
    Py_ssize_t CThostFtdcErrExecOrderActionField_MacAddress_length = 0;

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    int CThostFtdcErrExecOrderActionField_ErrorID = 0;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    char *CThostFtdcErrExecOrderActionField_ErrorMsg = NULL;
    Py_ssize_t CThostFtdcErrExecOrderActionField_ErrorMsg_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcErrExecOrderActionField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcErrExecOrderActionField_InstrumentID_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcErrExecOrderActionField_IPAddress = NULL;
    Py_ssize_t CThostFtdcErrExecOrderActionField_IPAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iy#iiiy#y#cy#y#y#y#y#iy#y#y#", (char **)kwlist
        , &CThostFtdcErrExecOrderActionField_BrokerID, &CThostFtdcErrExecOrderActionField_BrokerID_length
        , &CThostFtdcErrExecOrderActionField_InvestorID, &CThostFtdcErrExecOrderActionField_InvestorID_length
        , &CThostFtdcErrExecOrderActionField_ExecOrderActionRef
        , &CThostFtdcErrExecOrderActionField_ExecOrderRef, &CThostFtdcErrExecOrderActionField_ExecOrderRef_length
        , &CThostFtdcErrExecOrderActionField_RequestID
        , &CThostFtdcErrExecOrderActionField_FrontID
        , &CThostFtdcErrExecOrderActionField_SessionID
        , &CThostFtdcErrExecOrderActionField_ExchangeID, &CThostFtdcErrExecOrderActionField_ExchangeID_length
        , &CThostFtdcErrExecOrderActionField_ExecOrderSysID, &CThostFtdcErrExecOrderActionField_ExecOrderSysID_length
        , &CThostFtdcErrExecOrderActionField_ActionFlag
        , &CThostFtdcErrExecOrderActionField_UserID, &CThostFtdcErrExecOrderActionField_UserID_length
        , &CThostFtdcErrExecOrderActionField_reserve1, &CThostFtdcErrExecOrderActionField_reserve1_length
        , &CThostFtdcErrExecOrderActionField_InvestUnitID, &CThostFtdcErrExecOrderActionField_InvestUnitID_length
        , &CThostFtdcErrExecOrderActionField_reserve2, &CThostFtdcErrExecOrderActionField_reserve2_length
        , &CThostFtdcErrExecOrderActionField_MacAddress, &CThostFtdcErrExecOrderActionField_MacAddress_length
        , &CThostFtdcErrExecOrderActionField_ErrorID
        , &CThostFtdcErrExecOrderActionField_ErrorMsg, &CThostFtdcErrExecOrderActionField_ErrorMsg_length
        , &CThostFtdcErrExecOrderActionField_InstrumentID, &CThostFtdcErrExecOrderActionField_InstrumentID_length
        , &CThostFtdcErrExecOrderActionField_IPAddress, &CThostFtdcErrExecOrderActionField_IPAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcErrExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrExecOrderActionFieldData>(self);
    CThostFtdcErrExecOrderActionField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcErrExecOrderActionField_BrokerID != NULL ) {
        if(CThostFtdcErrExecOrderActionField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcErrExecOrderActionField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcErrExecOrderActionField_BrokerID, CThostFtdcErrExecOrderActionField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcErrExecOrderActionField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcErrExecOrderActionField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcErrExecOrderActionField_InvestorID != NULL ) {
        if(CThostFtdcErrExecOrderActionField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcErrExecOrderActionField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcErrExecOrderActionField_InvestorID, CThostFtdcErrExecOrderActionField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcErrExecOrderActionField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcErrExecOrderActionField_InvestorID = NULL;
    }

    /// 执行宣告操作引用
    /// typedef int TThostFtdcOrderActionRefType
    data->ExecOrderActionRef = CThostFtdcErrExecOrderActionField_ExecOrderActionRef;

    /// 执行宣告引用
    /// typedef char TThostFtdcOrderRefType[13]
    if( CThostFtdcErrExecOrderActionField_ExecOrderRef != NULL ) {
        if(CThostFtdcErrExecOrderActionField_ExecOrderRef_length >= (Py_ssize_t)sizeof(data->ExecOrderRef)) {
            PyErr_Format(PyExc_ValueError, "ExecOrderRef too long: length=%zd (max allowed is 12)", CThostFtdcErrExecOrderActionField_ExecOrderRef_length);
            return -1;
        }
        // memset(data->ExecOrderRef, 0, sizeof(data->ExecOrderRef));
        // memcpy(data->ExecOrderRef, CThostFtdcErrExecOrderActionField_ExecOrderRef, CThostFtdcErrExecOrderActionField_ExecOrderRef_length);
        strncpy(data->ExecOrderRef, CThostFtdcErrExecOrderActionField_ExecOrderRef, sizeof(data->ExecOrderRef));
        CThostFtdcErrExecOrderActionField_ExecOrderRef = NULL;
    }

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcErrExecOrderActionField_RequestID;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    data->FrontID = CThostFtdcErrExecOrderActionField_FrontID;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcErrExecOrderActionField_SessionID;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcErrExecOrderActionField_ExchangeID != NULL ) {
        if(CThostFtdcErrExecOrderActionField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcErrExecOrderActionField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcErrExecOrderActionField_ExchangeID, CThostFtdcErrExecOrderActionField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcErrExecOrderActionField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcErrExecOrderActionField_ExchangeID = NULL;
    }

    /// 执行宣告操作编号
    /// typedef char TThostFtdcExecOrderSysIDType[21]
    if( CThostFtdcErrExecOrderActionField_ExecOrderSysID != NULL ) {
        if(CThostFtdcErrExecOrderActionField_ExecOrderSysID_length >= (Py_ssize_t)sizeof(data->ExecOrderSysID)) {
            PyErr_Format(PyExc_ValueError, "ExecOrderSysID too long: length=%zd (max allowed is 20)", CThostFtdcErrExecOrderActionField_ExecOrderSysID_length);
            return -1;
        }
        // memset(data->ExecOrderSysID, 0, sizeof(data->ExecOrderSysID));
        // memcpy(data->ExecOrderSysID, CThostFtdcErrExecOrderActionField_ExecOrderSysID, CThostFtdcErrExecOrderActionField_ExecOrderSysID_length);
        strncpy(data->ExecOrderSysID, CThostFtdcErrExecOrderActionField_ExecOrderSysID, sizeof(data->ExecOrderSysID));
        CThostFtdcErrExecOrderActionField_ExecOrderSysID = NULL;
    }

    /// 操作标志
    /// typedef char TThostFtdcActionFlagType
    data->ActionFlag = CThostFtdcErrExecOrderActionField_ActionFlag;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcErrExecOrderActionField_UserID != NULL ) {
        if(CThostFtdcErrExecOrderActionField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcErrExecOrderActionField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcErrExecOrderActionField_UserID, CThostFtdcErrExecOrderActionField_UserID_length);
        strncpy(data->UserID, CThostFtdcErrExecOrderActionField_UserID, sizeof(data->UserID));
        CThostFtdcErrExecOrderActionField_UserID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcErrExecOrderActionField_reserve1 != NULL ) {
        if(CThostFtdcErrExecOrderActionField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcErrExecOrderActionField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcErrExecOrderActionField_reserve1, CThostFtdcErrExecOrderActionField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcErrExecOrderActionField_reserve1, sizeof(data->reserve1));
        CThostFtdcErrExecOrderActionField_reserve1 = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcErrExecOrderActionField_InvestUnitID != NULL ) {
        if(CThostFtdcErrExecOrderActionField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcErrExecOrderActionField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcErrExecOrderActionField_InvestUnitID, CThostFtdcErrExecOrderActionField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcErrExecOrderActionField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcErrExecOrderActionField_InvestUnitID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcErrExecOrderActionField_reserve2 != NULL ) {
        if(CThostFtdcErrExecOrderActionField_reserve2_length >= (Py_ssize_t)sizeof(data->reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is 15)", CThostFtdcErrExecOrderActionField_reserve2_length);
            return -1;
        }
        // memset(data->reserve2, 0, sizeof(data->reserve2));
        // memcpy(data->reserve2, CThostFtdcErrExecOrderActionField_reserve2, CThostFtdcErrExecOrderActionField_reserve2_length);
        strncpy(data->reserve2, CThostFtdcErrExecOrderActionField_reserve2, sizeof(data->reserve2));
        CThostFtdcErrExecOrderActionField_reserve2 = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcErrExecOrderActionField_MacAddress != NULL ) {
        if(CThostFtdcErrExecOrderActionField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcErrExecOrderActionField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcErrExecOrderActionField_MacAddress, CThostFtdcErrExecOrderActionField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcErrExecOrderActionField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcErrExecOrderActionField_MacAddress = NULL;
    }

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    data->ErrorID = CThostFtdcErrExecOrderActionField_ErrorID;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    if( CThostFtdcErrExecOrderActionField_ErrorMsg != NULL ) {
        if(CThostFtdcErrExecOrderActionField_ErrorMsg_length >= (Py_ssize_t)sizeof(data->ErrorMsg)) {
            PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is 80)", CThostFtdcErrExecOrderActionField_ErrorMsg_length);
            return -1;
        }
        // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
        // memcpy(data->ErrorMsg, CThostFtdcErrExecOrderActionField_ErrorMsg, CThostFtdcErrExecOrderActionField_ErrorMsg_length);
        strncpy(data->ErrorMsg, CThostFtdcErrExecOrderActionField_ErrorMsg, sizeof(data->ErrorMsg));
        CThostFtdcErrExecOrderActionField_ErrorMsg = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcErrExecOrderActionField_InstrumentID != NULL ) {
        if(CThostFtdcErrExecOrderActionField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcErrExecOrderActionField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcErrExecOrderActionField_InstrumentID, CThostFtdcErrExecOrderActionField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcErrExecOrderActionField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcErrExecOrderActionField_InstrumentID = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcErrExecOrderActionField_IPAddress != NULL ) {
        if(CThostFtdcErrExecOrderActionField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcErrExecOrderActionField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcErrExecOrderActionField_IPAddress, CThostFtdcErrExecOrderActionField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcErrExecOrderActionField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcErrExecOrderActionField_IPAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcErrExecOrderActionFieldType_repr(PyObject *self) {

    PyCThostFtdcErrExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrExecOrderActionFieldData>(self);
    CThostFtdcErrExecOrderActionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:i,s:y,s:i,s:i,s:i,s:y,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:i,s:y,s:y,s:y}"
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
        , "ErrorID", data->ErrorID
        , "ErrorMsg", data->ErrorMsg//, (Py_ssize_t)sizeof(data->ErrorMsg)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "IPAddress", data->IPAddress//, (Py_ssize_t)sizeof(data->IPAddress)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcErrExecOrderActionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcErrExecOrderActionField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcErrExecOrderActionFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcErrExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrExecOrderActionFieldData>(self);
    CThostFtdcErrExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcErrExecOrderActionFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrExecOrderActionField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrExecOrderActionFieldData>(self);
    CThostFtdcErrExecOrderActionField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcErrExecOrderActionFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcErrExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrExecOrderActionFieldData>(self);
    CThostFtdcErrExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcErrExecOrderActionFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrExecOrderActionField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrExecOrderActionFieldData>(self);
    CThostFtdcErrExecOrderActionField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 执行宣告引用
/// typedef char TThostFtdcOrderRefType[13]
static PyObject *PyCThostFtdcErrExecOrderActionFieldType_get_ExecOrderRef(PyObject *self, void *closure) {
    PyCThostFtdcErrExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrExecOrderActionFieldData>(self);
    CThostFtdcErrExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExecOrderRef, (Py_ssize_t)sizeof(data->ExecOrderRef));
    return PyBytes_FromString(data->ExecOrderRef);
}

static int PyCThostFtdcErrExecOrderActionFieldType_set_ExecOrderRef(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExecOrderRef Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrExecOrderActionField::ExecOrderRef)) {
        PyErr_SetString(PyExc_ValueError, "ExecOrderRef must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrExecOrderActionFieldData>(self);
    CThostFtdcErrExecOrderActionField *data = &(extra->data);
    // memset(data->ExecOrderRef, 0, sizeof(data->ExecOrderRef));
    // memcpy(data->ExecOrderRef, buf, len);
    strncpy(data->ExecOrderRef, buf, sizeof(data->ExecOrderRef));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcErrExecOrderActionFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcErrExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrExecOrderActionFieldData>(self);
    CThostFtdcErrExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcErrExecOrderActionFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrExecOrderActionField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrExecOrderActionFieldData>(self);
    CThostFtdcErrExecOrderActionField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 执行宣告操作编号
/// typedef char TThostFtdcExecOrderSysIDType[21]
static PyObject *PyCThostFtdcErrExecOrderActionFieldType_get_ExecOrderSysID(PyObject *self, void *closure) {
    PyCThostFtdcErrExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrExecOrderActionFieldData>(self);
    CThostFtdcErrExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExecOrderSysID, (Py_ssize_t)sizeof(data->ExecOrderSysID));
    return PyBytes_FromString(data->ExecOrderSysID);
}

static int PyCThostFtdcErrExecOrderActionFieldType_set_ExecOrderSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExecOrderSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrExecOrderActionField::ExecOrderSysID)) {
        PyErr_SetString(PyExc_ValueError, "ExecOrderSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrExecOrderActionFieldData>(self);
    CThostFtdcErrExecOrderActionField *data = &(extra->data);
    // memset(data->ExecOrderSysID, 0, sizeof(data->ExecOrderSysID));
    // memcpy(data->ExecOrderSysID, buf, len);
    strncpy(data->ExecOrderSysID, buf, sizeof(data->ExecOrderSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionFlagType
static PyObject *PyCThostFtdcErrExecOrderActionFieldType_get_ActionFlag(PyObject *self, void *closure) {
    PyCThostFtdcErrExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrExecOrderActionFieldData>(self);
    CThostFtdcErrExecOrderActionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionFlag), 1);
}

static int PyCThostFtdcErrExecOrderActionFieldType_set_ActionFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcErrExecOrderActionField::ActionFlag)) {
        PyErr_SetString(PyExc_ValueError, "ActionFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrExecOrderActionFieldData>(self);
    CThostFtdcErrExecOrderActionField *data = &(extra->data);
    data->ActionFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcErrExecOrderActionFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcErrExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrExecOrderActionFieldData>(self);
    CThostFtdcErrExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcErrExecOrderActionFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrExecOrderActionField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrExecOrderActionFieldData>(self);
    CThostFtdcErrExecOrderActionField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcErrExecOrderActionFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcErrExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrExecOrderActionFieldData>(self);
    CThostFtdcErrExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcErrExecOrderActionFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrExecOrderActionField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrExecOrderActionFieldData>(self);
    CThostFtdcErrExecOrderActionField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcErrExecOrderActionFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcErrExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrExecOrderActionFieldData>(self);
    CThostFtdcErrExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcErrExecOrderActionFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrExecOrderActionField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrExecOrderActionFieldData>(self);
    CThostFtdcErrExecOrderActionField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcErrExecOrderActionFieldType_get_reserve2(PyObject *self, void *closure) {
    PyCThostFtdcErrExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrExecOrderActionFieldData>(self);
    CThostFtdcErrExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve2, (Py_ssize_t)sizeof(data->reserve2));
    return PyBytes_FromString(data->reserve2);
}

static int PyCThostFtdcErrExecOrderActionFieldType_set_reserve2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrExecOrderActionField::reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrExecOrderActionFieldData>(self);
    CThostFtdcErrExecOrderActionField *data = &(extra->data);
    // memset(data->reserve2, 0, sizeof(data->reserve2));
    // memcpy(data->reserve2, buf, len);
    strncpy(data->reserve2, buf, sizeof(data->reserve2));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcErrExecOrderActionFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcErrExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrExecOrderActionFieldData>(self);
    CThostFtdcErrExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcErrExecOrderActionFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrExecOrderActionField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrExecOrderActionFieldData>(self);
    CThostFtdcErrExecOrderActionField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 错误信息
/// typedef char TThostFtdcErrorMsgType[81]
static PyObject *PyCThostFtdcErrExecOrderActionFieldType_get_ErrorMsg(PyObject *self, void *closure) {
    PyCThostFtdcErrExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrExecOrderActionFieldData>(self);
    CThostFtdcErrExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ErrorMsg, (Py_ssize_t)sizeof(data->ErrorMsg));
    return PyBytes_FromString(data->ErrorMsg);
}

static int PyCThostFtdcErrExecOrderActionFieldType_set_ErrorMsg(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ErrorMsg Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrExecOrderActionField::ErrorMsg)) {
        PyErr_SetString(PyExc_ValueError, "ErrorMsg must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrExecOrderActionFieldData>(self);
    CThostFtdcErrExecOrderActionField *data = &(extra->data);
    // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
    // memcpy(data->ErrorMsg, buf, len);
    strncpy(data->ErrorMsg, buf, sizeof(data->ErrorMsg));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcErrExecOrderActionFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcErrExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrExecOrderActionFieldData>(self);
    CThostFtdcErrExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcErrExecOrderActionFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrExecOrderActionField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrExecOrderActionFieldData>(self);
    CThostFtdcErrExecOrderActionField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcErrExecOrderActionFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcErrExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrExecOrderActionFieldData>(self);
    CThostFtdcErrExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcErrExecOrderActionFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrExecOrderActionField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrExecOrderActionFieldData>(self);
    CThostFtdcErrExecOrderActionField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcErrExecOrderActionFieldType_members[] = {
    /// 执行宣告操作引用
    /// typedef int TThostFtdcOrderActionRefType
    {
        .name = "ExecOrderActionRef",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcErrExecOrderActionFieldData, data.ExecOrderActionRef),
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
        .offset = offsetof(PyCThostFtdcErrExecOrderActionFieldData, data.RequestID),
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
        .offset = offsetof(PyCThostFtdcErrExecOrderActionFieldData, data.FrontID),
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
        .offset = offsetof(PyCThostFtdcErrExecOrderActionFieldData, data.SessionID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("会话编号")
    },
    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    {
        .name = "ErrorID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcErrExecOrderActionFieldData, data.ErrorID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("错误代码")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcErrExecOrderActionFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcErrExecOrderActionFieldType_get_BrokerID,
    .set = PyCThostFtdcErrExecOrderActionFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcErrExecOrderActionFieldType_get_InvestorID,
    .set = PyCThostFtdcErrExecOrderActionFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 执行宣告引用
    /// typedef char TThostFtdcOrderRefType[13]
    {
    .name = "ExecOrderRef",
    .get = PyCThostFtdcErrExecOrderActionFieldType_get_ExecOrderRef,
    .set = PyCThostFtdcErrExecOrderActionFieldType_set_ExecOrderRef,
    .doc = PyDoc_STR("执行宣告引用"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcErrExecOrderActionFieldType_get_ExchangeID,
    .set = PyCThostFtdcErrExecOrderActionFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 执行宣告操作编号
    /// typedef char TThostFtdcExecOrderSysIDType[21]
    {
    .name = "ExecOrderSysID",
    .get = PyCThostFtdcErrExecOrderActionFieldType_get_ExecOrderSysID,
    .set = PyCThostFtdcErrExecOrderActionFieldType_set_ExecOrderSysID,
    .doc = PyDoc_STR("执行宣告操作编号"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionFlagType
    {
    .name = "ActionFlag",
    .get = PyCThostFtdcErrExecOrderActionFieldType_get_ActionFlag,
    .set = PyCThostFtdcErrExecOrderActionFieldType_set_ActionFlag,
    .doc = PyDoc_STR("操作标志"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcErrExecOrderActionFieldType_get_UserID,
    .set = PyCThostFtdcErrExecOrderActionFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcErrExecOrderActionFieldType_get_reserve1,
    .set = PyCThostFtdcErrExecOrderActionFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcErrExecOrderActionFieldType_get_InvestUnitID,
    .set = PyCThostFtdcErrExecOrderActionFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve2",
    .get = PyCThostFtdcErrExecOrderActionFieldType_get_reserve2,
    .set = PyCThostFtdcErrExecOrderActionFieldType_set_reserve2,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcErrExecOrderActionFieldType_get_MacAddress,
    .set = PyCThostFtdcErrExecOrderActionFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    {
    .name = "ErrorMsg",
    .get = PyCThostFtdcErrExecOrderActionFieldType_get_ErrorMsg,
    .set = PyCThostFtdcErrExecOrderActionFieldType_set_ErrorMsg,
    .doc = PyDoc_STR("错误信息"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcErrExecOrderActionFieldType_get_InstrumentID,
    .set = PyCThostFtdcErrExecOrderActionFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcErrExecOrderActionFieldType_get_IPAddress,
    .set = PyCThostFtdcErrExecOrderActionFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcErrExecOrderActionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcErrExecOrderActionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("错误执行宣告操作")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcErrExecOrderActionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcErrExecOrderActionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcErrExecOrderActionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcErrExecOrderActionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcErrExecOrderActionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcErrExecOrderActionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("错误执行宣告操作")},
    {Py_tp_members, PyCThostFtdcErrExecOrderActionFieldType_members},
    {Py_tp_getset, PyCThostFtdcErrExecOrderActionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcErrExecOrderActionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcErrExecOrderActionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcErrExecOrderActionFieldType_spec = {
    .name = "PyCTP.CThostFtdcErrExecOrderActionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcErrExecOrderActionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcErrExecOrderActionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcErrExecOrderActionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcErrExecOrderActionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcErrExecOrderActionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcErrExecOrderActionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcErrExecOrderActionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcErrExecOrderActionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcErrExecOrderActionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcErrExecOrderActionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}