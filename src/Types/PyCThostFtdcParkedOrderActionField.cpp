
#include "PyCThostFtdcParkedOrderActionField.h"

///输入预埋单操作

static int PyCThostFtdcParkedOrderActionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "OrderActionRef", "OrderRef", "RequestID", "FrontID", "SessionID", "ExchangeID", "OrderSysID", "ActionFlag", "LimitPrice", "VolumeChange", "UserID", "reserve1", "ParkedOrderActionID", "UserType", "Status", "ErrorID", "ErrorMsg", "InvestUnitID", "reserve2", "MacAddress", "InstrumentID", "IPAddress", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcParkedOrderActionField_BrokerID = NULL;
    Py_ssize_t CThostFtdcParkedOrderActionField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcParkedOrderActionField_InvestorID = NULL;
    Py_ssize_t CThostFtdcParkedOrderActionField_InvestorID_length = 0;

    /// 报单操作引用
    /// typedef int TThostFtdcOrderActionRefType
    int CThostFtdcParkedOrderActionField_OrderActionRef = 0;

    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    char *CThostFtdcParkedOrderActionField_OrderRef = NULL;
    Py_ssize_t CThostFtdcParkedOrderActionField_OrderRef_length = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcParkedOrderActionField_RequestID = 0;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    int CThostFtdcParkedOrderActionField_FrontID = 0;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcParkedOrderActionField_SessionID = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcParkedOrderActionField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcParkedOrderActionField_ExchangeID_length = 0;

    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    char *CThostFtdcParkedOrderActionField_OrderSysID = NULL;
    Py_ssize_t CThostFtdcParkedOrderActionField_OrderSysID_length = 0;

    /// 操作标志
    /// typedef char TThostFtdcActionFlagType
    char CThostFtdcParkedOrderActionField_ActionFlag = 0;

    /// 价格
    /// typedef double TThostFtdcPriceType
    double CThostFtdcParkedOrderActionField_LimitPrice = 0.0;

    /// 数量变化
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcParkedOrderActionField_VolumeChange = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcParkedOrderActionField_UserID = NULL;
    Py_ssize_t CThostFtdcParkedOrderActionField_UserID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcParkedOrderActionField_reserve1 = NULL;
    Py_ssize_t CThostFtdcParkedOrderActionField_reserve1_length = 0;

    /// 预埋撤单单编号
    /// typedef char TThostFtdcParkedOrderActionIDType[13]
    char *CThostFtdcParkedOrderActionField_ParkedOrderActionID = NULL;
    Py_ssize_t CThostFtdcParkedOrderActionField_ParkedOrderActionID_length = 0;

    /// 用户类型
    /// typedef char TThostFtdcUserTypeType
    char CThostFtdcParkedOrderActionField_UserType = 0;

    /// 预埋撤单状态
    /// typedef char TThostFtdcParkedOrderStatusType
    char CThostFtdcParkedOrderActionField_Status = 0;

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    int CThostFtdcParkedOrderActionField_ErrorID = 0;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    char *CThostFtdcParkedOrderActionField_ErrorMsg = NULL;
    Py_ssize_t CThostFtdcParkedOrderActionField_ErrorMsg_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcParkedOrderActionField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcParkedOrderActionField_InvestUnitID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcParkedOrderActionField_reserve2 = NULL;
    Py_ssize_t CThostFtdcParkedOrderActionField_reserve2_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcParkedOrderActionField_MacAddress = NULL;
    Py_ssize_t CThostFtdcParkedOrderActionField_MacAddress_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcParkedOrderActionField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcParkedOrderActionField_InstrumentID_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcParkedOrderActionField_IPAddress = NULL;
    Py_ssize_t CThostFtdcParkedOrderActionField_IPAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iy#iiiy#y#cdiy#y#y#cciy#y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcParkedOrderActionField_BrokerID, &CThostFtdcParkedOrderActionField_BrokerID_length
        , &CThostFtdcParkedOrderActionField_InvestorID, &CThostFtdcParkedOrderActionField_InvestorID_length
        , &CThostFtdcParkedOrderActionField_OrderActionRef
        , &CThostFtdcParkedOrderActionField_OrderRef, &CThostFtdcParkedOrderActionField_OrderRef_length
        , &CThostFtdcParkedOrderActionField_RequestID
        , &CThostFtdcParkedOrderActionField_FrontID
        , &CThostFtdcParkedOrderActionField_SessionID
        , &CThostFtdcParkedOrderActionField_ExchangeID, &CThostFtdcParkedOrderActionField_ExchangeID_length
        , &CThostFtdcParkedOrderActionField_OrderSysID, &CThostFtdcParkedOrderActionField_OrderSysID_length
        , &CThostFtdcParkedOrderActionField_ActionFlag
        , &CThostFtdcParkedOrderActionField_LimitPrice
        , &CThostFtdcParkedOrderActionField_VolumeChange
        , &CThostFtdcParkedOrderActionField_UserID, &CThostFtdcParkedOrderActionField_UserID_length
        , &CThostFtdcParkedOrderActionField_reserve1, &CThostFtdcParkedOrderActionField_reserve1_length
        , &CThostFtdcParkedOrderActionField_ParkedOrderActionID, &CThostFtdcParkedOrderActionField_ParkedOrderActionID_length
        , &CThostFtdcParkedOrderActionField_UserType
        , &CThostFtdcParkedOrderActionField_Status
        , &CThostFtdcParkedOrderActionField_ErrorID
        , &CThostFtdcParkedOrderActionField_ErrorMsg, &CThostFtdcParkedOrderActionField_ErrorMsg_length
        , &CThostFtdcParkedOrderActionField_InvestUnitID, &CThostFtdcParkedOrderActionField_InvestUnitID_length
        , &CThostFtdcParkedOrderActionField_reserve2, &CThostFtdcParkedOrderActionField_reserve2_length
        , &CThostFtdcParkedOrderActionField_MacAddress, &CThostFtdcParkedOrderActionField_MacAddress_length
        , &CThostFtdcParkedOrderActionField_InstrumentID, &CThostFtdcParkedOrderActionField_InstrumentID_length
        , &CThostFtdcParkedOrderActionField_IPAddress, &CThostFtdcParkedOrderActionField_IPAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcParkedOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderActionFieldData>(self);
    CThostFtdcParkedOrderActionField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcParkedOrderActionField_BrokerID != NULL ) {
        if(CThostFtdcParkedOrderActionField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcParkedOrderActionField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcParkedOrderActionField_BrokerID, CThostFtdcParkedOrderActionField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcParkedOrderActionField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcParkedOrderActionField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcParkedOrderActionField_InvestorID != NULL ) {
        if(CThostFtdcParkedOrderActionField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcParkedOrderActionField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcParkedOrderActionField_InvestorID, CThostFtdcParkedOrderActionField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcParkedOrderActionField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcParkedOrderActionField_InvestorID = NULL;
    }

    /// 报单操作引用
    /// typedef int TThostFtdcOrderActionRefType
    data->OrderActionRef = CThostFtdcParkedOrderActionField_OrderActionRef;

    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    if( CThostFtdcParkedOrderActionField_OrderRef != NULL ) {
        if(CThostFtdcParkedOrderActionField_OrderRef_length >= (Py_ssize_t)sizeof(data->OrderRef)) {
            PyErr_Format(PyExc_ValueError, "OrderRef too long: length=%zd (max allowed is 12)", CThostFtdcParkedOrderActionField_OrderRef_length);
            return -1;
        }
        // memset(data->OrderRef, 0, sizeof(data->OrderRef));
        // memcpy(data->OrderRef, CThostFtdcParkedOrderActionField_OrderRef, CThostFtdcParkedOrderActionField_OrderRef_length);
        strncpy(data->OrderRef, CThostFtdcParkedOrderActionField_OrderRef, sizeof(data->OrderRef));
        CThostFtdcParkedOrderActionField_OrderRef = NULL;
    }

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcParkedOrderActionField_RequestID;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    data->FrontID = CThostFtdcParkedOrderActionField_FrontID;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcParkedOrderActionField_SessionID;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcParkedOrderActionField_ExchangeID != NULL ) {
        if(CThostFtdcParkedOrderActionField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcParkedOrderActionField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcParkedOrderActionField_ExchangeID, CThostFtdcParkedOrderActionField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcParkedOrderActionField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcParkedOrderActionField_ExchangeID = NULL;
    }

    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    if( CThostFtdcParkedOrderActionField_OrderSysID != NULL ) {
        if(CThostFtdcParkedOrderActionField_OrderSysID_length >= (Py_ssize_t)sizeof(data->OrderSysID)) {
            PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is 20)", CThostFtdcParkedOrderActionField_OrderSysID_length);
            return -1;
        }
        // memset(data->OrderSysID, 0, sizeof(data->OrderSysID));
        // memcpy(data->OrderSysID, CThostFtdcParkedOrderActionField_OrderSysID, CThostFtdcParkedOrderActionField_OrderSysID_length);
        strncpy(data->OrderSysID, CThostFtdcParkedOrderActionField_OrderSysID, sizeof(data->OrderSysID));
        CThostFtdcParkedOrderActionField_OrderSysID = NULL;
    }

    /// 操作标志
    /// typedef char TThostFtdcActionFlagType
    data->ActionFlag = CThostFtdcParkedOrderActionField_ActionFlag;

    /// 价格
    /// typedef double TThostFtdcPriceType
    data->LimitPrice = CThostFtdcParkedOrderActionField_LimitPrice;

    /// 数量变化
    /// typedef int TThostFtdcVolumeType
    data->VolumeChange = CThostFtdcParkedOrderActionField_VolumeChange;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcParkedOrderActionField_UserID != NULL ) {
        if(CThostFtdcParkedOrderActionField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcParkedOrderActionField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcParkedOrderActionField_UserID, CThostFtdcParkedOrderActionField_UserID_length);
        strncpy(data->UserID, CThostFtdcParkedOrderActionField_UserID, sizeof(data->UserID));
        CThostFtdcParkedOrderActionField_UserID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcParkedOrderActionField_reserve1 != NULL ) {
        if(CThostFtdcParkedOrderActionField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcParkedOrderActionField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcParkedOrderActionField_reserve1, CThostFtdcParkedOrderActionField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcParkedOrderActionField_reserve1, sizeof(data->reserve1));
        CThostFtdcParkedOrderActionField_reserve1 = NULL;
    }

    /// 预埋撤单单编号
    /// typedef char TThostFtdcParkedOrderActionIDType[13]
    if( CThostFtdcParkedOrderActionField_ParkedOrderActionID != NULL ) {
        if(CThostFtdcParkedOrderActionField_ParkedOrderActionID_length >= (Py_ssize_t)sizeof(data->ParkedOrderActionID)) {
            PyErr_Format(PyExc_ValueError, "ParkedOrderActionID too long: length=%zd (max allowed is 12)", CThostFtdcParkedOrderActionField_ParkedOrderActionID_length);
            return -1;
        }
        // memset(data->ParkedOrderActionID, 0, sizeof(data->ParkedOrderActionID));
        // memcpy(data->ParkedOrderActionID, CThostFtdcParkedOrderActionField_ParkedOrderActionID, CThostFtdcParkedOrderActionField_ParkedOrderActionID_length);
        strncpy(data->ParkedOrderActionID, CThostFtdcParkedOrderActionField_ParkedOrderActionID, sizeof(data->ParkedOrderActionID));
        CThostFtdcParkedOrderActionField_ParkedOrderActionID = NULL;
    }

    /// 用户类型
    /// typedef char TThostFtdcUserTypeType
    data->UserType = CThostFtdcParkedOrderActionField_UserType;

    /// 预埋撤单状态
    /// typedef char TThostFtdcParkedOrderStatusType
    data->Status = CThostFtdcParkedOrderActionField_Status;

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    data->ErrorID = CThostFtdcParkedOrderActionField_ErrorID;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    if( CThostFtdcParkedOrderActionField_ErrorMsg != NULL ) {
        if(CThostFtdcParkedOrderActionField_ErrorMsg_length >= (Py_ssize_t)sizeof(data->ErrorMsg)) {
            PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is 80)", CThostFtdcParkedOrderActionField_ErrorMsg_length);
            return -1;
        }
        // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
        // memcpy(data->ErrorMsg, CThostFtdcParkedOrderActionField_ErrorMsg, CThostFtdcParkedOrderActionField_ErrorMsg_length);
        strncpy(data->ErrorMsg, CThostFtdcParkedOrderActionField_ErrorMsg, sizeof(data->ErrorMsg));
        CThostFtdcParkedOrderActionField_ErrorMsg = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcParkedOrderActionField_InvestUnitID != NULL ) {
        if(CThostFtdcParkedOrderActionField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcParkedOrderActionField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcParkedOrderActionField_InvestUnitID, CThostFtdcParkedOrderActionField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcParkedOrderActionField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcParkedOrderActionField_InvestUnitID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcParkedOrderActionField_reserve2 != NULL ) {
        if(CThostFtdcParkedOrderActionField_reserve2_length >= (Py_ssize_t)sizeof(data->reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is 15)", CThostFtdcParkedOrderActionField_reserve2_length);
            return -1;
        }
        // memset(data->reserve2, 0, sizeof(data->reserve2));
        // memcpy(data->reserve2, CThostFtdcParkedOrderActionField_reserve2, CThostFtdcParkedOrderActionField_reserve2_length);
        strncpy(data->reserve2, CThostFtdcParkedOrderActionField_reserve2, sizeof(data->reserve2));
        CThostFtdcParkedOrderActionField_reserve2 = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcParkedOrderActionField_MacAddress != NULL ) {
        if(CThostFtdcParkedOrderActionField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcParkedOrderActionField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcParkedOrderActionField_MacAddress, CThostFtdcParkedOrderActionField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcParkedOrderActionField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcParkedOrderActionField_MacAddress = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcParkedOrderActionField_InstrumentID != NULL ) {
        if(CThostFtdcParkedOrderActionField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcParkedOrderActionField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcParkedOrderActionField_InstrumentID, CThostFtdcParkedOrderActionField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcParkedOrderActionField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcParkedOrderActionField_InstrumentID = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcParkedOrderActionField_IPAddress != NULL ) {
        if(CThostFtdcParkedOrderActionField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcParkedOrderActionField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcParkedOrderActionField_IPAddress, CThostFtdcParkedOrderActionField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcParkedOrderActionField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcParkedOrderActionField_IPAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcParkedOrderActionFieldType_repr(PyObject *self) {

    PyCThostFtdcParkedOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderActionFieldData>(self);
    CThostFtdcParkedOrderActionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:i,s:y,s:i,s:i,s:i,s:y,s:y,s:c,s:d,s:i,s:y,s:y,s:y,s:c,s:c,s:i,s:y,s:y,s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "OrderActionRef", data->OrderActionRef
        , "OrderRef", data->OrderRef//, (Py_ssize_t)sizeof(data->OrderRef)
        , "RequestID", data->RequestID
        , "FrontID", data->FrontID
        , "SessionID", data->SessionID
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "OrderSysID", data->OrderSysID//, (Py_ssize_t)sizeof(data->OrderSysID)
        , "ActionFlag", data->ActionFlag
        , "LimitPrice", data->LimitPrice
        , "VolumeChange", data->VolumeChange
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "ParkedOrderActionID", data->ParkedOrderActionID//, (Py_ssize_t)sizeof(data->ParkedOrderActionID)
        , "UserType", data->UserType
        , "Status", data->Status
        , "ErrorID", data->ErrorID
        , "ErrorMsg", data->ErrorMsg//, (Py_ssize_t)sizeof(data->ErrorMsg)
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
        , "reserve2", data->reserve2//, (Py_ssize_t)sizeof(data->reserve2)
        , "MacAddress", data->MacAddress//, (Py_ssize_t)sizeof(data->MacAddress)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "IPAddress", data->IPAddress//, (Py_ssize_t)sizeof(data->IPAddress)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcParkedOrderActionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcParkedOrderActionField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcParkedOrderActionFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcParkedOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderActionFieldData>(self);
    CThostFtdcParkedOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcParkedOrderActionFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcParkedOrderActionField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcParkedOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderActionFieldData>(self);
    CThostFtdcParkedOrderActionField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcParkedOrderActionFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcParkedOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderActionFieldData>(self);
    CThostFtdcParkedOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcParkedOrderActionFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcParkedOrderActionField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcParkedOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderActionFieldData>(self);
    CThostFtdcParkedOrderActionField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单引用
/// typedef char TThostFtdcOrderRefType[13]
static PyObject *PyCThostFtdcParkedOrderActionFieldType_get_OrderRef(PyObject *self, void *closure) {
    PyCThostFtdcParkedOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderActionFieldData>(self);
    CThostFtdcParkedOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderRef, (Py_ssize_t)sizeof(data->OrderRef));
    return PyBytes_FromString(data->OrderRef);
}

static int PyCThostFtdcParkedOrderActionFieldType_set_OrderRef(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderRef Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcParkedOrderActionField::OrderRef)) {
        PyErr_SetString(PyExc_ValueError, "OrderRef must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcParkedOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderActionFieldData>(self);
    CThostFtdcParkedOrderActionField *data = &(extra->data);
    // memset(data->OrderRef, 0, sizeof(data->OrderRef));
    // memcpy(data->OrderRef, buf, len);
    strncpy(data->OrderRef, buf, sizeof(data->OrderRef));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcParkedOrderActionFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcParkedOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderActionFieldData>(self);
    CThostFtdcParkedOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcParkedOrderActionFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcParkedOrderActionField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcParkedOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderActionFieldData>(self);
    CThostFtdcParkedOrderActionField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单编号
/// typedef char TThostFtdcOrderSysIDType[21]
static PyObject *PyCThostFtdcParkedOrderActionFieldType_get_OrderSysID(PyObject *self, void *closure) {
    PyCThostFtdcParkedOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderActionFieldData>(self);
    CThostFtdcParkedOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderSysID, (Py_ssize_t)sizeof(data->OrderSysID));
    return PyBytes_FromString(data->OrderSysID);
}

static int PyCThostFtdcParkedOrderActionFieldType_set_OrderSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcParkedOrderActionField::OrderSysID)) {
        PyErr_SetString(PyExc_ValueError, "OrderSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcParkedOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderActionFieldData>(self);
    CThostFtdcParkedOrderActionField *data = &(extra->data);
    // memset(data->OrderSysID, 0, sizeof(data->OrderSysID));
    // memcpy(data->OrderSysID, buf, len);
    strncpy(data->OrderSysID, buf, sizeof(data->OrderSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionFlagType
static PyObject *PyCThostFtdcParkedOrderActionFieldType_get_ActionFlag(PyObject *self, void *closure) {
    PyCThostFtdcParkedOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderActionFieldData>(self);
    CThostFtdcParkedOrderActionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionFlag), 1);
}

static int PyCThostFtdcParkedOrderActionFieldType_set_ActionFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcParkedOrderActionField::ActionFlag)) {
        PyErr_SetString(PyExc_ValueError, "ActionFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcParkedOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderActionFieldData>(self);
    CThostFtdcParkedOrderActionField *data = &(extra->data);
    data->ActionFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcParkedOrderActionFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcParkedOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderActionFieldData>(self);
    CThostFtdcParkedOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcParkedOrderActionFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcParkedOrderActionField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcParkedOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderActionFieldData>(self);
    CThostFtdcParkedOrderActionField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcParkedOrderActionFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcParkedOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderActionFieldData>(self);
    CThostFtdcParkedOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcParkedOrderActionFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcParkedOrderActionField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcParkedOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderActionFieldData>(self);
    CThostFtdcParkedOrderActionField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 预埋撤单单编号
/// typedef char TThostFtdcParkedOrderActionIDType[13]
static PyObject *PyCThostFtdcParkedOrderActionFieldType_get_ParkedOrderActionID(PyObject *self, void *closure) {
    PyCThostFtdcParkedOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderActionFieldData>(self);
    CThostFtdcParkedOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParkedOrderActionID, (Py_ssize_t)sizeof(data->ParkedOrderActionID));
    return PyBytes_FromString(data->ParkedOrderActionID);
}

static int PyCThostFtdcParkedOrderActionFieldType_set_ParkedOrderActionID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParkedOrderActionID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcParkedOrderActionField::ParkedOrderActionID)) {
        PyErr_SetString(PyExc_ValueError, "ParkedOrderActionID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcParkedOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderActionFieldData>(self);
    CThostFtdcParkedOrderActionField *data = &(extra->data);
    // memset(data->ParkedOrderActionID, 0, sizeof(data->ParkedOrderActionID));
    // memcpy(data->ParkedOrderActionID, buf, len);
    strncpy(data->ParkedOrderActionID, buf, sizeof(data->ParkedOrderActionID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户类型
/// typedef char TThostFtdcUserTypeType
static PyObject *PyCThostFtdcParkedOrderActionFieldType_get_UserType(PyObject *self, void *closure) {
    PyCThostFtdcParkedOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderActionFieldData>(self);
    CThostFtdcParkedOrderActionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->UserType), 1);
}

static int PyCThostFtdcParkedOrderActionFieldType_set_UserType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcParkedOrderActionField::UserType)) {
        PyErr_SetString(PyExc_ValueError, "UserType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcParkedOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderActionFieldData>(self);
    CThostFtdcParkedOrderActionField *data = &(extra->data);
    data->UserType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 预埋撤单状态
/// typedef char TThostFtdcParkedOrderStatusType
static PyObject *PyCThostFtdcParkedOrderActionFieldType_get_Status(PyObject *self, void *closure) {
    PyCThostFtdcParkedOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderActionFieldData>(self);
    CThostFtdcParkedOrderActionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->Status), 1);
}

static int PyCThostFtdcParkedOrderActionFieldType_set_Status(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Status Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcParkedOrderActionField::Status)) {
        PyErr_SetString(PyExc_ValueError, "Status must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcParkedOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderActionFieldData>(self);
    CThostFtdcParkedOrderActionField *data = &(extra->data);
    data->Status = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 错误信息
/// typedef char TThostFtdcErrorMsgType[81]
static PyObject *PyCThostFtdcParkedOrderActionFieldType_get_ErrorMsg(PyObject *self, void *closure) {
    PyCThostFtdcParkedOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderActionFieldData>(self);
    CThostFtdcParkedOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ErrorMsg, (Py_ssize_t)sizeof(data->ErrorMsg));
    return PyBytes_FromString(data->ErrorMsg);
}

static int PyCThostFtdcParkedOrderActionFieldType_set_ErrorMsg(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ErrorMsg Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcParkedOrderActionField::ErrorMsg)) {
        PyErr_SetString(PyExc_ValueError, "ErrorMsg must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcParkedOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderActionFieldData>(self);
    CThostFtdcParkedOrderActionField *data = &(extra->data);
    // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
    // memcpy(data->ErrorMsg, buf, len);
    strncpy(data->ErrorMsg, buf, sizeof(data->ErrorMsg));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcParkedOrderActionFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcParkedOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderActionFieldData>(self);
    CThostFtdcParkedOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcParkedOrderActionFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcParkedOrderActionField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcParkedOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderActionFieldData>(self);
    CThostFtdcParkedOrderActionField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcParkedOrderActionFieldType_get_reserve2(PyObject *self, void *closure) {
    PyCThostFtdcParkedOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderActionFieldData>(self);
    CThostFtdcParkedOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve2, (Py_ssize_t)sizeof(data->reserve2));
    return PyBytes_FromString(data->reserve2);
}

static int PyCThostFtdcParkedOrderActionFieldType_set_reserve2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcParkedOrderActionField::reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcParkedOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderActionFieldData>(self);
    CThostFtdcParkedOrderActionField *data = &(extra->data);
    // memset(data->reserve2, 0, sizeof(data->reserve2));
    // memcpy(data->reserve2, buf, len);
    strncpy(data->reserve2, buf, sizeof(data->reserve2));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcParkedOrderActionFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcParkedOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderActionFieldData>(self);
    CThostFtdcParkedOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcParkedOrderActionFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcParkedOrderActionField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcParkedOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderActionFieldData>(self);
    CThostFtdcParkedOrderActionField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcParkedOrderActionFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcParkedOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderActionFieldData>(self);
    CThostFtdcParkedOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcParkedOrderActionFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcParkedOrderActionField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcParkedOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderActionFieldData>(self);
    CThostFtdcParkedOrderActionField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcParkedOrderActionFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcParkedOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderActionFieldData>(self);
    CThostFtdcParkedOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcParkedOrderActionFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcParkedOrderActionField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcParkedOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderActionFieldData>(self);
    CThostFtdcParkedOrderActionField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcParkedOrderActionFieldType_members[] = {
    /// 报单操作引用
    /// typedef int TThostFtdcOrderActionRefType
    {
        .name = "OrderActionRef",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcParkedOrderActionFieldData, data.OrderActionRef),
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
        .offset = offsetof(PyCThostFtdcParkedOrderActionFieldData, data.RequestID),
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
        .offset = offsetof(PyCThostFtdcParkedOrderActionFieldData, data.FrontID),
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
        .offset = offsetof(PyCThostFtdcParkedOrderActionFieldData, data.SessionID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("会话编号")
    },
    /// 价格
    /// typedef double TThostFtdcPriceType
    {
        .name = "LimitPrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcParkedOrderActionFieldData, data.LimitPrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("价格")
    },
    /// 数量变化
    /// typedef int TThostFtdcVolumeType
    {
        .name = "VolumeChange",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcParkedOrderActionFieldData, data.VolumeChange),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("数量变化")
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
        .offset = offsetof(PyCThostFtdcParkedOrderActionFieldData, data.ErrorID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("错误代码")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcParkedOrderActionFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcParkedOrderActionFieldType_get_BrokerID,
    .set = PyCThostFtdcParkedOrderActionFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcParkedOrderActionFieldType_get_InvestorID,
    .set = PyCThostFtdcParkedOrderActionFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    {
    .name = "OrderRef",
    .get = PyCThostFtdcParkedOrderActionFieldType_get_OrderRef,
    .set = PyCThostFtdcParkedOrderActionFieldType_set_OrderRef,
    .doc = PyDoc_STR("报单引用"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcParkedOrderActionFieldType_get_ExchangeID,
    .set = PyCThostFtdcParkedOrderActionFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    {
    .name = "OrderSysID",
    .get = PyCThostFtdcParkedOrderActionFieldType_get_OrderSysID,
    .set = PyCThostFtdcParkedOrderActionFieldType_set_OrderSysID,
    .doc = PyDoc_STR("报单编号"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionFlagType
    {
    .name = "ActionFlag",
    .get = PyCThostFtdcParkedOrderActionFieldType_get_ActionFlag,
    .set = PyCThostFtdcParkedOrderActionFieldType_set_ActionFlag,
    .doc = PyDoc_STR("操作标志"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcParkedOrderActionFieldType_get_UserID,
    .set = PyCThostFtdcParkedOrderActionFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcParkedOrderActionFieldType_get_reserve1,
    .set = PyCThostFtdcParkedOrderActionFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 预埋撤单单编号
    /// typedef char TThostFtdcParkedOrderActionIDType[13]
    {
    .name = "ParkedOrderActionID",
    .get = PyCThostFtdcParkedOrderActionFieldType_get_ParkedOrderActionID,
    .set = PyCThostFtdcParkedOrderActionFieldType_set_ParkedOrderActionID,
    .doc = PyDoc_STR("预埋撤单单编号"),
    },
    /// 用户类型
    /// typedef char TThostFtdcUserTypeType
    {
    .name = "UserType",
    .get = PyCThostFtdcParkedOrderActionFieldType_get_UserType,
    .set = PyCThostFtdcParkedOrderActionFieldType_set_UserType,
    .doc = PyDoc_STR("用户类型"),
    },
    /// 预埋撤单状态
    /// typedef char TThostFtdcParkedOrderStatusType
    {
    .name = "Status",
    .get = PyCThostFtdcParkedOrderActionFieldType_get_Status,
    .set = PyCThostFtdcParkedOrderActionFieldType_set_Status,
    .doc = PyDoc_STR("预埋撤单状态"),
    },
    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    {
    .name = "ErrorMsg",
    .get = PyCThostFtdcParkedOrderActionFieldType_get_ErrorMsg,
    .set = PyCThostFtdcParkedOrderActionFieldType_set_ErrorMsg,
    .doc = PyDoc_STR("错误信息"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcParkedOrderActionFieldType_get_InvestUnitID,
    .set = PyCThostFtdcParkedOrderActionFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve2",
    .get = PyCThostFtdcParkedOrderActionFieldType_get_reserve2,
    .set = PyCThostFtdcParkedOrderActionFieldType_set_reserve2,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcParkedOrderActionFieldType_get_MacAddress,
    .set = PyCThostFtdcParkedOrderActionFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcParkedOrderActionFieldType_get_InstrumentID,
    .set = PyCThostFtdcParkedOrderActionFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcParkedOrderActionFieldType_get_IPAddress,
    .set = PyCThostFtdcParkedOrderActionFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcParkedOrderActionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcParkedOrderActionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("输入预埋单操作")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcParkedOrderActionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcParkedOrderActionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcParkedOrderActionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcParkedOrderActionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcParkedOrderActionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcParkedOrderActionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("输入预埋单操作")},
    {Py_tp_members, PyCThostFtdcParkedOrderActionFieldType_members},
    {Py_tp_getset, PyCThostFtdcParkedOrderActionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcParkedOrderActionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcParkedOrderActionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcParkedOrderActionFieldType_spec = {
    .name = "PyCTP.CThostFtdcParkedOrderActionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcParkedOrderActionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcParkedOrderActionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcParkedOrderActionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcParkedOrderActionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcParkedOrderActionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcParkedOrderActionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcParkedOrderActionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcParkedOrderActionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcParkedOrderActionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcParkedOrderActionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}