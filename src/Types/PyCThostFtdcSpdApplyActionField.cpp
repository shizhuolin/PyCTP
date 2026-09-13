
#include "PyCThostFtdcSpdApplyActionField.h"

///套利申请撤销回报

static int PyCThostFtdcSpdApplyActionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "ActionDate", "ActionTime", "TraderID", "InstallID", "OrderLocalID", "ActionLocalID", "ParticipantID", "ClientID", "OrderActionStatus", "UserID", "ExchangeID", "OrderSysID", "RequestID", "StatusMsg", "OrderRef", "FrontID", "SessionID", "IPAddress", "MacAddress", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcSpdApplyActionField_BrokerID = NULL;
    Py_ssize_t CThostFtdcSpdApplyActionField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcSpdApplyActionField_InvestorID = NULL;
    Py_ssize_t CThostFtdcSpdApplyActionField_InvestorID_length = 0;

    /// 操作日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcSpdApplyActionField_ActionDate = NULL;
    Py_ssize_t CThostFtdcSpdApplyActionField_ActionDate_length = 0;

    /// 操作时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcSpdApplyActionField_ActionTime = NULL;
    Py_ssize_t CThostFtdcSpdApplyActionField_ActionTime_length = 0;

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    char *CThostFtdcSpdApplyActionField_TraderID = NULL;
    Py_ssize_t CThostFtdcSpdApplyActionField_TraderID_length = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcSpdApplyActionField_InstallID = 0;

    /// 本地报单编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    char *CThostFtdcSpdApplyActionField_OrderLocalID = NULL;
    Py_ssize_t CThostFtdcSpdApplyActionField_OrderLocalID_length = 0;

    /// 操作本地编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    char *CThostFtdcSpdApplyActionField_ActionLocalID = NULL;
    Py_ssize_t CThostFtdcSpdApplyActionField_ActionLocalID_length = 0;

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcSpdApplyActionField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcSpdApplyActionField_ParticipantID_length = 0;

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    char *CThostFtdcSpdApplyActionField_ClientID = NULL;
    Py_ssize_t CThostFtdcSpdApplyActionField_ClientID_length = 0;

    /// 报单操作状态
    /// typedef char TThostFtdcOrderActionStatusType
    char CThostFtdcSpdApplyActionField_OrderActionStatus = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcSpdApplyActionField_UserID = NULL;
    Py_ssize_t CThostFtdcSpdApplyActionField_UserID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcSpdApplyActionField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcSpdApplyActionField_ExchangeID_length = 0;

    /// 合同编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    char *CThostFtdcSpdApplyActionField_OrderSysID = NULL;
    Py_ssize_t CThostFtdcSpdApplyActionField_OrderSysID_length = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcSpdApplyActionField_RequestID = 0;

    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    char *CThostFtdcSpdApplyActionField_StatusMsg = NULL;
    Py_ssize_t CThostFtdcSpdApplyActionField_StatusMsg_length = 0;

    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    char *CThostFtdcSpdApplyActionField_OrderRef = NULL;
    Py_ssize_t CThostFtdcSpdApplyActionField_OrderRef_length = 0;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    int CThostFtdcSpdApplyActionField_FrontID = 0;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcSpdApplyActionField_SessionID = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcSpdApplyActionField_IPAddress = NULL;
    Py_ssize_t CThostFtdcSpdApplyActionField_IPAddress_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcSpdApplyActionField_MacAddress = NULL;
    Py_ssize_t CThostFtdcSpdApplyActionField_MacAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#iy#y#y#y#cy#y#y#iy#y#iiy#y#", (char **)kwlist
        , &CThostFtdcSpdApplyActionField_BrokerID, &CThostFtdcSpdApplyActionField_BrokerID_length
        , &CThostFtdcSpdApplyActionField_InvestorID, &CThostFtdcSpdApplyActionField_InvestorID_length
        , &CThostFtdcSpdApplyActionField_ActionDate, &CThostFtdcSpdApplyActionField_ActionDate_length
        , &CThostFtdcSpdApplyActionField_ActionTime, &CThostFtdcSpdApplyActionField_ActionTime_length
        , &CThostFtdcSpdApplyActionField_TraderID, &CThostFtdcSpdApplyActionField_TraderID_length
        , &CThostFtdcSpdApplyActionField_InstallID
        , &CThostFtdcSpdApplyActionField_OrderLocalID, &CThostFtdcSpdApplyActionField_OrderLocalID_length
        , &CThostFtdcSpdApplyActionField_ActionLocalID, &CThostFtdcSpdApplyActionField_ActionLocalID_length
        , &CThostFtdcSpdApplyActionField_ParticipantID, &CThostFtdcSpdApplyActionField_ParticipantID_length
        , &CThostFtdcSpdApplyActionField_ClientID, &CThostFtdcSpdApplyActionField_ClientID_length
        , &CThostFtdcSpdApplyActionField_OrderActionStatus
        , &CThostFtdcSpdApplyActionField_UserID, &CThostFtdcSpdApplyActionField_UserID_length
        , &CThostFtdcSpdApplyActionField_ExchangeID, &CThostFtdcSpdApplyActionField_ExchangeID_length
        , &CThostFtdcSpdApplyActionField_OrderSysID, &CThostFtdcSpdApplyActionField_OrderSysID_length
        , &CThostFtdcSpdApplyActionField_RequestID
        , &CThostFtdcSpdApplyActionField_StatusMsg, &CThostFtdcSpdApplyActionField_StatusMsg_length
        , &CThostFtdcSpdApplyActionField_OrderRef, &CThostFtdcSpdApplyActionField_OrderRef_length
        , &CThostFtdcSpdApplyActionField_FrontID
        , &CThostFtdcSpdApplyActionField_SessionID
        , &CThostFtdcSpdApplyActionField_IPAddress, &CThostFtdcSpdApplyActionField_IPAddress_length
        , &CThostFtdcSpdApplyActionField_MacAddress, &CThostFtdcSpdApplyActionField_MacAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyActionFieldData>(self);
    CThostFtdcSpdApplyActionField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcSpdApplyActionField_BrokerID != NULL ) {
        if(CThostFtdcSpdApplyActionField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcSpdApplyActionField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcSpdApplyActionField_BrokerID, CThostFtdcSpdApplyActionField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcSpdApplyActionField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcSpdApplyActionField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcSpdApplyActionField_InvestorID != NULL ) {
        if(CThostFtdcSpdApplyActionField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcSpdApplyActionField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcSpdApplyActionField_InvestorID, CThostFtdcSpdApplyActionField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcSpdApplyActionField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcSpdApplyActionField_InvestorID = NULL;
    }

    /// 操作日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcSpdApplyActionField_ActionDate != NULL ) {
        if(CThostFtdcSpdApplyActionField_ActionDate_length >= (Py_ssize_t)sizeof(data->ActionDate)) {
            PyErr_Format(PyExc_ValueError, "ActionDate too long: length=%zd (max allowed is 8)", CThostFtdcSpdApplyActionField_ActionDate_length);
            return -1;
        }
        // memset(data->ActionDate, 0, sizeof(data->ActionDate));
        // memcpy(data->ActionDate, CThostFtdcSpdApplyActionField_ActionDate, CThostFtdcSpdApplyActionField_ActionDate_length);
        strncpy(data->ActionDate, CThostFtdcSpdApplyActionField_ActionDate, sizeof(data->ActionDate));
        CThostFtdcSpdApplyActionField_ActionDate = NULL;
    }

    /// 操作时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcSpdApplyActionField_ActionTime != NULL ) {
        if(CThostFtdcSpdApplyActionField_ActionTime_length >= (Py_ssize_t)sizeof(data->ActionTime)) {
            PyErr_Format(PyExc_ValueError, "ActionTime too long: length=%zd (max allowed is 8)", CThostFtdcSpdApplyActionField_ActionTime_length);
            return -1;
        }
        // memset(data->ActionTime, 0, sizeof(data->ActionTime));
        // memcpy(data->ActionTime, CThostFtdcSpdApplyActionField_ActionTime, CThostFtdcSpdApplyActionField_ActionTime_length);
        strncpy(data->ActionTime, CThostFtdcSpdApplyActionField_ActionTime, sizeof(data->ActionTime));
        CThostFtdcSpdApplyActionField_ActionTime = NULL;
    }

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    if( CThostFtdcSpdApplyActionField_TraderID != NULL ) {
        if(CThostFtdcSpdApplyActionField_TraderID_length >= (Py_ssize_t)sizeof(data->TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is 20)", CThostFtdcSpdApplyActionField_TraderID_length);
            return -1;
        }
        // memset(data->TraderID, 0, sizeof(data->TraderID));
        // memcpy(data->TraderID, CThostFtdcSpdApplyActionField_TraderID, CThostFtdcSpdApplyActionField_TraderID_length);
        strncpy(data->TraderID, CThostFtdcSpdApplyActionField_TraderID, sizeof(data->TraderID));
        CThostFtdcSpdApplyActionField_TraderID = NULL;
    }

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcSpdApplyActionField_InstallID;

    /// 本地报单编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    if( CThostFtdcSpdApplyActionField_OrderLocalID != NULL ) {
        if(CThostFtdcSpdApplyActionField_OrderLocalID_length >= (Py_ssize_t)sizeof(data->OrderLocalID)) {
            PyErr_Format(PyExc_ValueError, "OrderLocalID too long: length=%zd (max allowed is 12)", CThostFtdcSpdApplyActionField_OrderLocalID_length);
            return -1;
        }
        // memset(data->OrderLocalID, 0, sizeof(data->OrderLocalID));
        // memcpy(data->OrderLocalID, CThostFtdcSpdApplyActionField_OrderLocalID, CThostFtdcSpdApplyActionField_OrderLocalID_length);
        strncpy(data->OrderLocalID, CThostFtdcSpdApplyActionField_OrderLocalID, sizeof(data->OrderLocalID));
        CThostFtdcSpdApplyActionField_OrderLocalID = NULL;
    }

    /// 操作本地编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    if( CThostFtdcSpdApplyActionField_ActionLocalID != NULL ) {
        if(CThostFtdcSpdApplyActionField_ActionLocalID_length >= (Py_ssize_t)sizeof(data->ActionLocalID)) {
            PyErr_Format(PyExc_ValueError, "ActionLocalID too long: length=%zd (max allowed is 12)", CThostFtdcSpdApplyActionField_ActionLocalID_length);
            return -1;
        }
        // memset(data->ActionLocalID, 0, sizeof(data->ActionLocalID));
        // memcpy(data->ActionLocalID, CThostFtdcSpdApplyActionField_ActionLocalID, CThostFtdcSpdApplyActionField_ActionLocalID_length);
        strncpy(data->ActionLocalID, CThostFtdcSpdApplyActionField_ActionLocalID, sizeof(data->ActionLocalID));
        CThostFtdcSpdApplyActionField_ActionLocalID = NULL;
    }

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcSpdApplyActionField_ParticipantID != NULL ) {
        if(CThostFtdcSpdApplyActionField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcSpdApplyActionField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcSpdApplyActionField_ParticipantID, CThostFtdcSpdApplyActionField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcSpdApplyActionField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcSpdApplyActionField_ParticipantID = NULL;
    }

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    if( CThostFtdcSpdApplyActionField_ClientID != NULL ) {
        if(CThostFtdcSpdApplyActionField_ClientID_length >= (Py_ssize_t)sizeof(data->ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is 10)", CThostFtdcSpdApplyActionField_ClientID_length);
            return -1;
        }
        // memset(data->ClientID, 0, sizeof(data->ClientID));
        // memcpy(data->ClientID, CThostFtdcSpdApplyActionField_ClientID, CThostFtdcSpdApplyActionField_ClientID_length);
        strncpy(data->ClientID, CThostFtdcSpdApplyActionField_ClientID, sizeof(data->ClientID));
        CThostFtdcSpdApplyActionField_ClientID = NULL;
    }

    /// 报单操作状态
    /// typedef char TThostFtdcOrderActionStatusType
    data->OrderActionStatus = CThostFtdcSpdApplyActionField_OrderActionStatus;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcSpdApplyActionField_UserID != NULL ) {
        if(CThostFtdcSpdApplyActionField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcSpdApplyActionField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcSpdApplyActionField_UserID, CThostFtdcSpdApplyActionField_UserID_length);
        strncpy(data->UserID, CThostFtdcSpdApplyActionField_UserID, sizeof(data->UserID));
        CThostFtdcSpdApplyActionField_UserID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcSpdApplyActionField_ExchangeID != NULL ) {
        if(CThostFtdcSpdApplyActionField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcSpdApplyActionField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcSpdApplyActionField_ExchangeID, CThostFtdcSpdApplyActionField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcSpdApplyActionField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcSpdApplyActionField_ExchangeID = NULL;
    }

    /// 合同编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    if( CThostFtdcSpdApplyActionField_OrderSysID != NULL ) {
        if(CThostFtdcSpdApplyActionField_OrderSysID_length >= (Py_ssize_t)sizeof(data->OrderSysID)) {
            PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is 20)", CThostFtdcSpdApplyActionField_OrderSysID_length);
            return -1;
        }
        // memset(data->OrderSysID, 0, sizeof(data->OrderSysID));
        // memcpy(data->OrderSysID, CThostFtdcSpdApplyActionField_OrderSysID, CThostFtdcSpdApplyActionField_OrderSysID_length);
        strncpy(data->OrderSysID, CThostFtdcSpdApplyActionField_OrderSysID, sizeof(data->OrderSysID));
        CThostFtdcSpdApplyActionField_OrderSysID = NULL;
    }

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcSpdApplyActionField_RequestID;

    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    if( CThostFtdcSpdApplyActionField_StatusMsg != NULL ) {
        if(CThostFtdcSpdApplyActionField_StatusMsg_length >= (Py_ssize_t)sizeof(data->StatusMsg)) {
            PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is 80)", CThostFtdcSpdApplyActionField_StatusMsg_length);
            return -1;
        }
        // memset(data->StatusMsg, 0, sizeof(data->StatusMsg));
        // memcpy(data->StatusMsg, CThostFtdcSpdApplyActionField_StatusMsg, CThostFtdcSpdApplyActionField_StatusMsg_length);
        strncpy(data->StatusMsg, CThostFtdcSpdApplyActionField_StatusMsg, sizeof(data->StatusMsg));
        CThostFtdcSpdApplyActionField_StatusMsg = NULL;
    }

    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    if( CThostFtdcSpdApplyActionField_OrderRef != NULL ) {
        if(CThostFtdcSpdApplyActionField_OrderRef_length >= (Py_ssize_t)sizeof(data->OrderRef)) {
            PyErr_Format(PyExc_ValueError, "OrderRef too long: length=%zd (max allowed is 12)", CThostFtdcSpdApplyActionField_OrderRef_length);
            return -1;
        }
        // memset(data->OrderRef, 0, sizeof(data->OrderRef));
        // memcpy(data->OrderRef, CThostFtdcSpdApplyActionField_OrderRef, CThostFtdcSpdApplyActionField_OrderRef_length);
        strncpy(data->OrderRef, CThostFtdcSpdApplyActionField_OrderRef, sizeof(data->OrderRef));
        CThostFtdcSpdApplyActionField_OrderRef = NULL;
    }

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    data->FrontID = CThostFtdcSpdApplyActionField_FrontID;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcSpdApplyActionField_SessionID;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcSpdApplyActionField_IPAddress != NULL ) {
        if(CThostFtdcSpdApplyActionField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcSpdApplyActionField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcSpdApplyActionField_IPAddress, CThostFtdcSpdApplyActionField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcSpdApplyActionField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcSpdApplyActionField_IPAddress = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcSpdApplyActionField_MacAddress != NULL ) {
        if(CThostFtdcSpdApplyActionField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcSpdApplyActionField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcSpdApplyActionField_MacAddress, CThostFtdcSpdApplyActionField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcSpdApplyActionField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcSpdApplyActionField_MacAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSpdApplyActionFieldType_repr(PyObject *self) {

    PyCThostFtdcSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyActionFieldData>(self);
    CThostFtdcSpdApplyActionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:y,s:i,s:y,s:y,s:i,s:i,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "ActionDate", data->ActionDate//, (Py_ssize_t)sizeof(data->ActionDate)
        , "ActionTime", data->ActionTime//, (Py_ssize_t)sizeof(data->ActionTime)
        , "TraderID", data->TraderID//, (Py_ssize_t)sizeof(data->TraderID)
        , "InstallID", data->InstallID
        , "OrderLocalID", data->OrderLocalID//, (Py_ssize_t)sizeof(data->OrderLocalID)
        , "ActionLocalID", data->ActionLocalID//, (Py_ssize_t)sizeof(data->ActionLocalID)
        , "ParticipantID", data->ParticipantID//, (Py_ssize_t)sizeof(data->ParticipantID)
        , "ClientID", data->ClientID//, (Py_ssize_t)sizeof(data->ClientID)
        , "OrderActionStatus", data->OrderActionStatus
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "OrderSysID", data->OrderSysID//, (Py_ssize_t)sizeof(data->OrderSysID)
        , "RequestID", data->RequestID
        , "StatusMsg", data->StatusMsg//, (Py_ssize_t)sizeof(data->StatusMsg)
        , "OrderRef", data->OrderRef//, (Py_ssize_t)sizeof(data->OrderRef)
        , "FrontID", data->FrontID
        , "SessionID", data->SessionID
        , "IPAddress", data->IPAddress//, (Py_ssize_t)sizeof(data->IPAddress)
        , "MacAddress", data->MacAddress//, (Py_ssize_t)sizeof(data->MacAddress)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSpdApplyActionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSpdApplyActionField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcSpdApplyActionFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyActionFieldData>(self);
    CThostFtdcSpdApplyActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcSpdApplyActionFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSpdApplyActionField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyActionFieldData>(self);
    CThostFtdcSpdApplyActionField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcSpdApplyActionFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyActionFieldData>(self);
    CThostFtdcSpdApplyActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcSpdApplyActionFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSpdApplyActionField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyActionFieldData>(self);
    CThostFtdcSpdApplyActionField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcSpdApplyActionFieldType_get_ActionDate(PyObject *self, void *closure) {
    PyCThostFtdcSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyActionFieldData>(self);
    CThostFtdcSpdApplyActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionDate, (Py_ssize_t)sizeof(data->ActionDate));
    return PyBytes_FromString(data->ActionDate);
}

static int PyCThostFtdcSpdApplyActionFieldType_set_ActionDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSpdApplyActionField::ActionDate)) {
        PyErr_SetString(PyExc_ValueError, "ActionDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyActionFieldData>(self);
    CThostFtdcSpdApplyActionField *data = &(extra->data);
    // memset(data->ActionDate, 0, sizeof(data->ActionDate));
    // memcpy(data->ActionDate, buf, len);
    strncpy(data->ActionDate, buf, sizeof(data->ActionDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcSpdApplyActionFieldType_get_ActionTime(PyObject *self, void *closure) {
    PyCThostFtdcSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyActionFieldData>(self);
    CThostFtdcSpdApplyActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionTime, (Py_ssize_t)sizeof(data->ActionTime));
    return PyBytes_FromString(data->ActionTime);
}

static int PyCThostFtdcSpdApplyActionFieldType_set_ActionTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSpdApplyActionField::ActionTime)) {
        PyErr_SetString(PyExc_ValueError, "ActionTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyActionFieldData>(self);
    CThostFtdcSpdApplyActionField *data = &(extra->data);
    // memset(data->ActionTime, 0, sizeof(data->ActionTime));
    // memcpy(data->ActionTime, buf, len);
    strncpy(data->ActionTime, buf, sizeof(data->ActionTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所交易员代码
/// typedef char TThostFtdcTraderIDType[21]
static PyObject *PyCThostFtdcSpdApplyActionFieldType_get_TraderID(PyObject *self, void *closure) {
    PyCThostFtdcSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyActionFieldData>(self);
    CThostFtdcSpdApplyActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TraderID, (Py_ssize_t)sizeof(data->TraderID));
    return PyBytes_FromString(data->TraderID);
}

static int PyCThostFtdcSpdApplyActionFieldType_set_TraderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSpdApplyActionField::TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyActionFieldData>(self);
    CThostFtdcSpdApplyActionField *data = &(extra->data);
    // memset(data->TraderID, 0, sizeof(data->TraderID));
    // memcpy(data->TraderID, buf, len);
    strncpy(data->TraderID, buf, sizeof(data->TraderID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 本地报单编号
/// typedef char TThostFtdcOrderLocalIDType[13]
static PyObject *PyCThostFtdcSpdApplyActionFieldType_get_OrderLocalID(PyObject *self, void *closure) {
    PyCThostFtdcSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyActionFieldData>(self);
    CThostFtdcSpdApplyActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderLocalID, (Py_ssize_t)sizeof(data->OrderLocalID));
    return PyBytes_FromString(data->OrderLocalID);
}

static int PyCThostFtdcSpdApplyActionFieldType_set_OrderLocalID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderLocalID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSpdApplyActionField::OrderLocalID)) {
        PyErr_SetString(PyExc_ValueError, "OrderLocalID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyActionFieldData>(self);
    CThostFtdcSpdApplyActionField *data = &(extra->data);
    // memset(data->OrderLocalID, 0, sizeof(data->OrderLocalID));
    // memcpy(data->OrderLocalID, buf, len);
    strncpy(data->OrderLocalID, buf, sizeof(data->OrderLocalID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作本地编号
/// typedef char TThostFtdcOrderLocalIDType[13]
static PyObject *PyCThostFtdcSpdApplyActionFieldType_get_ActionLocalID(PyObject *self, void *closure) {
    PyCThostFtdcSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyActionFieldData>(self);
    CThostFtdcSpdApplyActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionLocalID, (Py_ssize_t)sizeof(data->ActionLocalID));
    return PyBytes_FromString(data->ActionLocalID);
}

static int PyCThostFtdcSpdApplyActionFieldType_set_ActionLocalID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionLocalID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSpdApplyActionField::ActionLocalID)) {
        PyErr_SetString(PyExc_ValueError, "ActionLocalID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyActionFieldData>(self);
    CThostFtdcSpdApplyActionField *data = &(extra->data);
    // memset(data->ActionLocalID, 0, sizeof(data->ActionLocalID));
    // memcpy(data->ActionLocalID, buf, len);
    strncpy(data->ActionLocalID, buf, sizeof(data->ActionLocalID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 会员代码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcSpdApplyActionFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyActionFieldData>(self);
    CThostFtdcSpdApplyActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcSpdApplyActionFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSpdApplyActionField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyActionFieldData>(self);
    CThostFtdcSpdApplyActionField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户代码
/// typedef char TThostFtdcClientIDType[11]
static PyObject *PyCThostFtdcSpdApplyActionFieldType_get_ClientID(PyObject *self, void *closure) {
    PyCThostFtdcSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyActionFieldData>(self);
    CThostFtdcSpdApplyActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientID, (Py_ssize_t)sizeof(data->ClientID));
    return PyBytes_FromString(data->ClientID);
}

static int PyCThostFtdcSpdApplyActionFieldType_set_ClientID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSpdApplyActionField::ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyActionFieldData>(self);
    CThostFtdcSpdApplyActionField *data = &(extra->data);
    // memset(data->ClientID, 0, sizeof(data->ClientID));
    // memcpy(data->ClientID, buf, len);
    strncpy(data->ClientID, buf, sizeof(data->ClientID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单操作状态
/// typedef char TThostFtdcOrderActionStatusType
static PyObject *PyCThostFtdcSpdApplyActionFieldType_get_OrderActionStatus(PyObject *self, void *closure) {
    PyCThostFtdcSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyActionFieldData>(self);
    CThostFtdcSpdApplyActionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OrderActionStatus), 1);
}

static int PyCThostFtdcSpdApplyActionFieldType_set_OrderActionStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderActionStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSpdApplyActionField::OrderActionStatus)) {
        PyErr_SetString(PyExc_ValueError, "OrderActionStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyActionFieldData>(self);
    CThostFtdcSpdApplyActionField *data = &(extra->data);
    data->OrderActionStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcSpdApplyActionFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyActionFieldData>(self);
    CThostFtdcSpdApplyActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcSpdApplyActionFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSpdApplyActionField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyActionFieldData>(self);
    CThostFtdcSpdApplyActionField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcSpdApplyActionFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyActionFieldData>(self);
    CThostFtdcSpdApplyActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcSpdApplyActionFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSpdApplyActionField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyActionFieldData>(self);
    CThostFtdcSpdApplyActionField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合同编号
/// typedef char TThostFtdcOrderSysIDType[21]
static PyObject *PyCThostFtdcSpdApplyActionFieldType_get_OrderSysID(PyObject *self, void *closure) {
    PyCThostFtdcSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyActionFieldData>(self);
    CThostFtdcSpdApplyActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderSysID, (Py_ssize_t)sizeof(data->OrderSysID));
    return PyBytes_FromString(data->OrderSysID);
}

static int PyCThostFtdcSpdApplyActionFieldType_set_OrderSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSpdApplyActionField::OrderSysID)) {
        PyErr_SetString(PyExc_ValueError, "OrderSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyActionFieldData>(self);
    CThostFtdcSpdApplyActionField *data = &(extra->data);
    // memset(data->OrderSysID, 0, sizeof(data->OrderSysID));
    // memcpy(data->OrderSysID, buf, len);
    strncpy(data->OrderSysID, buf, sizeof(data->OrderSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 状态信息
/// typedef char TThostFtdcErrorMsgType[81]
static PyObject *PyCThostFtdcSpdApplyActionFieldType_get_StatusMsg(PyObject *self, void *closure) {
    PyCThostFtdcSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyActionFieldData>(self);
    CThostFtdcSpdApplyActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->StatusMsg, (Py_ssize_t)sizeof(data->StatusMsg));
    return PyBytes_FromString(data->StatusMsg);
}

static int PyCThostFtdcSpdApplyActionFieldType_set_StatusMsg(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "StatusMsg Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSpdApplyActionField::StatusMsg)) {
        PyErr_SetString(PyExc_ValueError, "StatusMsg must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyActionFieldData>(self);
    CThostFtdcSpdApplyActionField *data = &(extra->data);
    // memset(data->StatusMsg, 0, sizeof(data->StatusMsg));
    // memcpy(data->StatusMsg, buf, len);
    strncpy(data->StatusMsg, buf, sizeof(data->StatusMsg));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单引用
/// typedef char TThostFtdcOrderRefType[13]
static PyObject *PyCThostFtdcSpdApplyActionFieldType_get_OrderRef(PyObject *self, void *closure) {
    PyCThostFtdcSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyActionFieldData>(self);
    CThostFtdcSpdApplyActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderRef, (Py_ssize_t)sizeof(data->OrderRef));
    return PyBytes_FromString(data->OrderRef);
}

static int PyCThostFtdcSpdApplyActionFieldType_set_OrderRef(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderRef Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSpdApplyActionField::OrderRef)) {
        PyErr_SetString(PyExc_ValueError, "OrderRef must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyActionFieldData>(self);
    CThostFtdcSpdApplyActionField *data = &(extra->data);
    // memset(data->OrderRef, 0, sizeof(data->OrderRef));
    // memcpy(data->OrderRef, buf, len);
    strncpy(data->OrderRef, buf, sizeof(data->OrderRef));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcSpdApplyActionFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyActionFieldData>(self);
    CThostFtdcSpdApplyActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcSpdApplyActionFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSpdApplyActionField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyActionFieldData>(self);
    CThostFtdcSpdApplyActionField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcSpdApplyActionFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyActionFieldData>(self);
    CThostFtdcSpdApplyActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcSpdApplyActionFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSpdApplyActionField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSpdApplyActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyActionFieldData>(self);
    CThostFtdcSpdApplyActionField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSpdApplyActionFieldType_members[] = {
    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    {
        .name = "InstallID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSpdApplyActionFieldData, data.InstallID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("安装编号")
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
        .offset = offsetof(PyCThostFtdcSpdApplyActionFieldData, data.RequestID),
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
        .offset = offsetof(PyCThostFtdcSpdApplyActionFieldData, data.FrontID),
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
        .offset = offsetof(PyCThostFtdcSpdApplyActionFieldData, data.SessionID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("会话编号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSpdApplyActionFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcSpdApplyActionFieldType_get_BrokerID,
    .set = PyCThostFtdcSpdApplyActionFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcSpdApplyActionFieldType_get_InvestorID,
    .set = PyCThostFtdcSpdApplyActionFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 操作日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "ActionDate",
    .get = PyCThostFtdcSpdApplyActionFieldType_get_ActionDate,
    .set = PyCThostFtdcSpdApplyActionFieldType_set_ActionDate,
    .doc = PyDoc_STR("操作日期"),
    },
    /// 操作时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "ActionTime",
    .get = PyCThostFtdcSpdApplyActionFieldType_get_ActionTime,
    .set = PyCThostFtdcSpdApplyActionFieldType_set_ActionTime,
    .doc = PyDoc_STR("操作时间"),
    },
    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    {
    .name = "TraderID",
    .get = PyCThostFtdcSpdApplyActionFieldType_get_TraderID,
    .set = PyCThostFtdcSpdApplyActionFieldType_set_TraderID,
    .doc = PyDoc_STR("交易所交易员代码"),
    },
    /// 本地报单编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    {
    .name = "OrderLocalID",
    .get = PyCThostFtdcSpdApplyActionFieldType_get_OrderLocalID,
    .set = PyCThostFtdcSpdApplyActionFieldType_set_OrderLocalID,
    .doc = PyDoc_STR("本地报单编号"),
    },
    /// 操作本地编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    {
    .name = "ActionLocalID",
    .get = PyCThostFtdcSpdApplyActionFieldType_get_ActionLocalID,
    .set = PyCThostFtdcSpdApplyActionFieldType_set_ActionLocalID,
    .doc = PyDoc_STR("操作本地编号"),
    },
    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcSpdApplyActionFieldType_get_ParticipantID,
    .set = PyCThostFtdcSpdApplyActionFieldType_set_ParticipantID,
    .doc = PyDoc_STR("会员代码"),
    },
    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    {
    .name = "ClientID",
    .get = PyCThostFtdcSpdApplyActionFieldType_get_ClientID,
    .set = PyCThostFtdcSpdApplyActionFieldType_set_ClientID,
    .doc = PyDoc_STR("客户代码"),
    },
    /// 报单操作状态
    /// typedef char TThostFtdcOrderActionStatusType
    {
    .name = "OrderActionStatus",
    .get = PyCThostFtdcSpdApplyActionFieldType_get_OrderActionStatus,
    .set = PyCThostFtdcSpdApplyActionFieldType_set_OrderActionStatus,
    .doc = PyDoc_STR("报单操作状态"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcSpdApplyActionFieldType_get_UserID,
    .set = PyCThostFtdcSpdApplyActionFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcSpdApplyActionFieldType_get_ExchangeID,
    .set = PyCThostFtdcSpdApplyActionFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 合同编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    {
    .name = "OrderSysID",
    .get = PyCThostFtdcSpdApplyActionFieldType_get_OrderSysID,
    .set = PyCThostFtdcSpdApplyActionFieldType_set_OrderSysID,
    .doc = PyDoc_STR("合同编号"),
    },
    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    {
    .name = "StatusMsg",
    .get = PyCThostFtdcSpdApplyActionFieldType_get_StatusMsg,
    .set = PyCThostFtdcSpdApplyActionFieldType_set_StatusMsg,
    .doc = PyDoc_STR("状态信息"),
    },
    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    {
    .name = "OrderRef",
    .get = PyCThostFtdcSpdApplyActionFieldType_get_OrderRef,
    .set = PyCThostFtdcSpdApplyActionFieldType_set_OrderRef,
    .doc = PyDoc_STR("报单引用"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcSpdApplyActionFieldType_get_IPAddress,
    .set = PyCThostFtdcSpdApplyActionFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcSpdApplyActionFieldType_get_MacAddress,
    .set = PyCThostFtdcSpdApplyActionFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSpdApplyActionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSpdApplyActionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("套利申请撤销回报")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSpdApplyActionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSpdApplyActionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSpdApplyActionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSpdApplyActionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSpdApplyActionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSpdApplyActionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("套利申请撤销回报")},
    {Py_tp_members, PyCThostFtdcSpdApplyActionFieldType_members},
    {Py_tp_getset, PyCThostFtdcSpdApplyActionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSpdApplyActionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSpdApplyActionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSpdApplyActionFieldType_spec = {
    .name = "PyCTP.CThostFtdcSpdApplyActionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSpdApplyActionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSpdApplyActionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSpdApplyActionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSpdApplyActionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSpdApplyActionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSpdApplyActionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSpdApplyActionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSpdApplyActionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSpdApplyActionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSpdApplyActionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}