
#include "PyCThostFtdcHedgeCfmActionField.h"

///套保申请撤销回报

static int PyCThostFtdcHedgeCfmActionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "ActionDate", "ActionTime", "TraderID", "InstallID", "OrderLocalID", "ActionLocalID", "ParticipantID", "ClientID", "OrderActionStatus", "UserID", "ExchangeID", "OrderSysID", "RequestID", "StatusMsg", "OrderRef", "FrontID", "SessionID", "IPAddress", "MacAddress", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcHedgeCfmActionField_BrokerID = NULL;
    Py_ssize_t CThostFtdcHedgeCfmActionField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcHedgeCfmActionField_InvestorID = NULL;
    Py_ssize_t CThostFtdcHedgeCfmActionField_InvestorID_length = 0;

    /// 操作日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcHedgeCfmActionField_ActionDate = NULL;
    Py_ssize_t CThostFtdcHedgeCfmActionField_ActionDate_length = 0;

    /// 操作时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcHedgeCfmActionField_ActionTime = NULL;
    Py_ssize_t CThostFtdcHedgeCfmActionField_ActionTime_length = 0;

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    char *CThostFtdcHedgeCfmActionField_TraderID = NULL;
    Py_ssize_t CThostFtdcHedgeCfmActionField_TraderID_length = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcHedgeCfmActionField_InstallID = 0;

    /// 本地报单编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    char *CThostFtdcHedgeCfmActionField_OrderLocalID = NULL;
    Py_ssize_t CThostFtdcHedgeCfmActionField_OrderLocalID_length = 0;

    /// 操作本地编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    char *CThostFtdcHedgeCfmActionField_ActionLocalID = NULL;
    Py_ssize_t CThostFtdcHedgeCfmActionField_ActionLocalID_length = 0;

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcHedgeCfmActionField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcHedgeCfmActionField_ParticipantID_length = 0;

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    char *CThostFtdcHedgeCfmActionField_ClientID = NULL;
    Py_ssize_t CThostFtdcHedgeCfmActionField_ClientID_length = 0;

    /// 报单操作状态
    /// typedef char TThostFtdcOrderActionStatusType
    char CThostFtdcHedgeCfmActionField_OrderActionStatus = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcHedgeCfmActionField_UserID = NULL;
    Py_ssize_t CThostFtdcHedgeCfmActionField_UserID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcHedgeCfmActionField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcHedgeCfmActionField_ExchangeID_length = 0;

    /// 合同编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    char *CThostFtdcHedgeCfmActionField_OrderSysID = NULL;
    Py_ssize_t CThostFtdcHedgeCfmActionField_OrderSysID_length = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcHedgeCfmActionField_RequestID = 0;

    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    char *CThostFtdcHedgeCfmActionField_StatusMsg = NULL;
    Py_ssize_t CThostFtdcHedgeCfmActionField_StatusMsg_length = 0;

    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    char *CThostFtdcHedgeCfmActionField_OrderRef = NULL;
    Py_ssize_t CThostFtdcHedgeCfmActionField_OrderRef_length = 0;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    int CThostFtdcHedgeCfmActionField_FrontID = 0;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcHedgeCfmActionField_SessionID = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcHedgeCfmActionField_IPAddress = NULL;
    Py_ssize_t CThostFtdcHedgeCfmActionField_IPAddress_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcHedgeCfmActionField_MacAddress = NULL;
    Py_ssize_t CThostFtdcHedgeCfmActionField_MacAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#iy#y#y#y#cy#y#y#iy#y#iiy#y#", (char **)kwlist
        , &CThostFtdcHedgeCfmActionField_BrokerID, &CThostFtdcHedgeCfmActionField_BrokerID_length
        , &CThostFtdcHedgeCfmActionField_InvestorID, &CThostFtdcHedgeCfmActionField_InvestorID_length
        , &CThostFtdcHedgeCfmActionField_ActionDate, &CThostFtdcHedgeCfmActionField_ActionDate_length
        , &CThostFtdcHedgeCfmActionField_ActionTime, &CThostFtdcHedgeCfmActionField_ActionTime_length
        , &CThostFtdcHedgeCfmActionField_TraderID, &CThostFtdcHedgeCfmActionField_TraderID_length
        , &CThostFtdcHedgeCfmActionField_InstallID
        , &CThostFtdcHedgeCfmActionField_OrderLocalID, &CThostFtdcHedgeCfmActionField_OrderLocalID_length
        , &CThostFtdcHedgeCfmActionField_ActionLocalID, &CThostFtdcHedgeCfmActionField_ActionLocalID_length
        , &CThostFtdcHedgeCfmActionField_ParticipantID, &CThostFtdcHedgeCfmActionField_ParticipantID_length
        , &CThostFtdcHedgeCfmActionField_ClientID, &CThostFtdcHedgeCfmActionField_ClientID_length
        , &CThostFtdcHedgeCfmActionField_OrderActionStatus
        , &CThostFtdcHedgeCfmActionField_UserID, &CThostFtdcHedgeCfmActionField_UserID_length
        , &CThostFtdcHedgeCfmActionField_ExchangeID, &CThostFtdcHedgeCfmActionField_ExchangeID_length
        , &CThostFtdcHedgeCfmActionField_OrderSysID, &CThostFtdcHedgeCfmActionField_OrderSysID_length
        , &CThostFtdcHedgeCfmActionField_RequestID
        , &CThostFtdcHedgeCfmActionField_StatusMsg, &CThostFtdcHedgeCfmActionField_StatusMsg_length
        , &CThostFtdcHedgeCfmActionField_OrderRef, &CThostFtdcHedgeCfmActionField_OrderRef_length
        , &CThostFtdcHedgeCfmActionField_FrontID
        , &CThostFtdcHedgeCfmActionField_SessionID
        , &CThostFtdcHedgeCfmActionField_IPAddress, &CThostFtdcHedgeCfmActionField_IPAddress_length
        , &CThostFtdcHedgeCfmActionField_MacAddress, &CThostFtdcHedgeCfmActionField_MacAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmActionFieldData>(self);
    CThostFtdcHedgeCfmActionField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcHedgeCfmActionField_BrokerID != NULL ) {
        if(CThostFtdcHedgeCfmActionField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcHedgeCfmActionField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcHedgeCfmActionField_BrokerID, CThostFtdcHedgeCfmActionField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcHedgeCfmActionField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcHedgeCfmActionField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcHedgeCfmActionField_InvestorID != NULL ) {
        if(CThostFtdcHedgeCfmActionField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcHedgeCfmActionField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcHedgeCfmActionField_InvestorID, CThostFtdcHedgeCfmActionField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcHedgeCfmActionField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcHedgeCfmActionField_InvestorID = NULL;
    }

    /// 操作日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcHedgeCfmActionField_ActionDate != NULL ) {
        if(CThostFtdcHedgeCfmActionField_ActionDate_length >= (Py_ssize_t)sizeof(data->ActionDate)) {
            PyErr_Format(PyExc_ValueError, "ActionDate too long: length=%zd (max allowed is 8)", CThostFtdcHedgeCfmActionField_ActionDate_length);
            return -1;
        }
        // memset(data->ActionDate, 0, sizeof(data->ActionDate));
        // memcpy(data->ActionDate, CThostFtdcHedgeCfmActionField_ActionDate, CThostFtdcHedgeCfmActionField_ActionDate_length);
        strncpy(data->ActionDate, CThostFtdcHedgeCfmActionField_ActionDate, sizeof(data->ActionDate));
        CThostFtdcHedgeCfmActionField_ActionDate = NULL;
    }

    /// 操作时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcHedgeCfmActionField_ActionTime != NULL ) {
        if(CThostFtdcHedgeCfmActionField_ActionTime_length >= (Py_ssize_t)sizeof(data->ActionTime)) {
            PyErr_Format(PyExc_ValueError, "ActionTime too long: length=%zd (max allowed is 8)", CThostFtdcHedgeCfmActionField_ActionTime_length);
            return -1;
        }
        // memset(data->ActionTime, 0, sizeof(data->ActionTime));
        // memcpy(data->ActionTime, CThostFtdcHedgeCfmActionField_ActionTime, CThostFtdcHedgeCfmActionField_ActionTime_length);
        strncpy(data->ActionTime, CThostFtdcHedgeCfmActionField_ActionTime, sizeof(data->ActionTime));
        CThostFtdcHedgeCfmActionField_ActionTime = NULL;
    }

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    if( CThostFtdcHedgeCfmActionField_TraderID != NULL ) {
        if(CThostFtdcHedgeCfmActionField_TraderID_length >= (Py_ssize_t)sizeof(data->TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is 20)", CThostFtdcHedgeCfmActionField_TraderID_length);
            return -1;
        }
        // memset(data->TraderID, 0, sizeof(data->TraderID));
        // memcpy(data->TraderID, CThostFtdcHedgeCfmActionField_TraderID, CThostFtdcHedgeCfmActionField_TraderID_length);
        strncpy(data->TraderID, CThostFtdcHedgeCfmActionField_TraderID, sizeof(data->TraderID));
        CThostFtdcHedgeCfmActionField_TraderID = NULL;
    }

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcHedgeCfmActionField_InstallID;

    /// 本地报单编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    if( CThostFtdcHedgeCfmActionField_OrderLocalID != NULL ) {
        if(CThostFtdcHedgeCfmActionField_OrderLocalID_length >= (Py_ssize_t)sizeof(data->OrderLocalID)) {
            PyErr_Format(PyExc_ValueError, "OrderLocalID too long: length=%zd (max allowed is 12)", CThostFtdcHedgeCfmActionField_OrderLocalID_length);
            return -1;
        }
        // memset(data->OrderLocalID, 0, sizeof(data->OrderLocalID));
        // memcpy(data->OrderLocalID, CThostFtdcHedgeCfmActionField_OrderLocalID, CThostFtdcHedgeCfmActionField_OrderLocalID_length);
        strncpy(data->OrderLocalID, CThostFtdcHedgeCfmActionField_OrderLocalID, sizeof(data->OrderLocalID));
        CThostFtdcHedgeCfmActionField_OrderLocalID = NULL;
    }

    /// 操作本地编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    if( CThostFtdcHedgeCfmActionField_ActionLocalID != NULL ) {
        if(CThostFtdcHedgeCfmActionField_ActionLocalID_length >= (Py_ssize_t)sizeof(data->ActionLocalID)) {
            PyErr_Format(PyExc_ValueError, "ActionLocalID too long: length=%zd (max allowed is 12)", CThostFtdcHedgeCfmActionField_ActionLocalID_length);
            return -1;
        }
        // memset(data->ActionLocalID, 0, sizeof(data->ActionLocalID));
        // memcpy(data->ActionLocalID, CThostFtdcHedgeCfmActionField_ActionLocalID, CThostFtdcHedgeCfmActionField_ActionLocalID_length);
        strncpy(data->ActionLocalID, CThostFtdcHedgeCfmActionField_ActionLocalID, sizeof(data->ActionLocalID));
        CThostFtdcHedgeCfmActionField_ActionLocalID = NULL;
    }

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcHedgeCfmActionField_ParticipantID != NULL ) {
        if(CThostFtdcHedgeCfmActionField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcHedgeCfmActionField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcHedgeCfmActionField_ParticipantID, CThostFtdcHedgeCfmActionField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcHedgeCfmActionField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcHedgeCfmActionField_ParticipantID = NULL;
    }

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    if( CThostFtdcHedgeCfmActionField_ClientID != NULL ) {
        if(CThostFtdcHedgeCfmActionField_ClientID_length >= (Py_ssize_t)sizeof(data->ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is 10)", CThostFtdcHedgeCfmActionField_ClientID_length);
            return -1;
        }
        // memset(data->ClientID, 0, sizeof(data->ClientID));
        // memcpy(data->ClientID, CThostFtdcHedgeCfmActionField_ClientID, CThostFtdcHedgeCfmActionField_ClientID_length);
        strncpy(data->ClientID, CThostFtdcHedgeCfmActionField_ClientID, sizeof(data->ClientID));
        CThostFtdcHedgeCfmActionField_ClientID = NULL;
    }

    /// 报单操作状态
    /// typedef char TThostFtdcOrderActionStatusType
    data->OrderActionStatus = CThostFtdcHedgeCfmActionField_OrderActionStatus;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcHedgeCfmActionField_UserID != NULL ) {
        if(CThostFtdcHedgeCfmActionField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcHedgeCfmActionField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcHedgeCfmActionField_UserID, CThostFtdcHedgeCfmActionField_UserID_length);
        strncpy(data->UserID, CThostFtdcHedgeCfmActionField_UserID, sizeof(data->UserID));
        CThostFtdcHedgeCfmActionField_UserID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcHedgeCfmActionField_ExchangeID != NULL ) {
        if(CThostFtdcHedgeCfmActionField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcHedgeCfmActionField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcHedgeCfmActionField_ExchangeID, CThostFtdcHedgeCfmActionField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcHedgeCfmActionField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcHedgeCfmActionField_ExchangeID = NULL;
    }

    /// 合同编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    if( CThostFtdcHedgeCfmActionField_OrderSysID != NULL ) {
        if(CThostFtdcHedgeCfmActionField_OrderSysID_length >= (Py_ssize_t)sizeof(data->OrderSysID)) {
            PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is 20)", CThostFtdcHedgeCfmActionField_OrderSysID_length);
            return -1;
        }
        // memset(data->OrderSysID, 0, sizeof(data->OrderSysID));
        // memcpy(data->OrderSysID, CThostFtdcHedgeCfmActionField_OrderSysID, CThostFtdcHedgeCfmActionField_OrderSysID_length);
        strncpy(data->OrderSysID, CThostFtdcHedgeCfmActionField_OrderSysID, sizeof(data->OrderSysID));
        CThostFtdcHedgeCfmActionField_OrderSysID = NULL;
    }

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcHedgeCfmActionField_RequestID;

    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    if( CThostFtdcHedgeCfmActionField_StatusMsg != NULL ) {
        if(CThostFtdcHedgeCfmActionField_StatusMsg_length >= (Py_ssize_t)sizeof(data->StatusMsg)) {
            PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is 80)", CThostFtdcHedgeCfmActionField_StatusMsg_length);
            return -1;
        }
        // memset(data->StatusMsg, 0, sizeof(data->StatusMsg));
        // memcpy(data->StatusMsg, CThostFtdcHedgeCfmActionField_StatusMsg, CThostFtdcHedgeCfmActionField_StatusMsg_length);
        strncpy(data->StatusMsg, CThostFtdcHedgeCfmActionField_StatusMsg, sizeof(data->StatusMsg));
        CThostFtdcHedgeCfmActionField_StatusMsg = NULL;
    }

    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    if( CThostFtdcHedgeCfmActionField_OrderRef != NULL ) {
        if(CThostFtdcHedgeCfmActionField_OrderRef_length >= (Py_ssize_t)sizeof(data->OrderRef)) {
            PyErr_Format(PyExc_ValueError, "OrderRef too long: length=%zd (max allowed is 12)", CThostFtdcHedgeCfmActionField_OrderRef_length);
            return -1;
        }
        // memset(data->OrderRef, 0, sizeof(data->OrderRef));
        // memcpy(data->OrderRef, CThostFtdcHedgeCfmActionField_OrderRef, CThostFtdcHedgeCfmActionField_OrderRef_length);
        strncpy(data->OrderRef, CThostFtdcHedgeCfmActionField_OrderRef, sizeof(data->OrderRef));
        CThostFtdcHedgeCfmActionField_OrderRef = NULL;
    }

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    data->FrontID = CThostFtdcHedgeCfmActionField_FrontID;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcHedgeCfmActionField_SessionID;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcHedgeCfmActionField_IPAddress != NULL ) {
        if(CThostFtdcHedgeCfmActionField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcHedgeCfmActionField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcHedgeCfmActionField_IPAddress, CThostFtdcHedgeCfmActionField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcHedgeCfmActionField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcHedgeCfmActionField_IPAddress = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcHedgeCfmActionField_MacAddress != NULL ) {
        if(CThostFtdcHedgeCfmActionField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcHedgeCfmActionField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcHedgeCfmActionField_MacAddress, CThostFtdcHedgeCfmActionField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcHedgeCfmActionField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcHedgeCfmActionField_MacAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcHedgeCfmActionFieldType_repr(PyObject *self) {

    PyCThostFtdcHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmActionFieldData>(self);
    CThostFtdcHedgeCfmActionField *data = &(extra->data);

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcHedgeCfmActionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcHedgeCfmActionField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcHedgeCfmActionFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmActionFieldData>(self);
    CThostFtdcHedgeCfmActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcHedgeCfmActionFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcHedgeCfmActionField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmActionFieldData>(self);
    CThostFtdcHedgeCfmActionField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcHedgeCfmActionFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmActionFieldData>(self);
    CThostFtdcHedgeCfmActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcHedgeCfmActionFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcHedgeCfmActionField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmActionFieldData>(self);
    CThostFtdcHedgeCfmActionField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcHedgeCfmActionFieldType_get_ActionDate(PyObject *self, void *closure) {
    PyCThostFtdcHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmActionFieldData>(self);
    CThostFtdcHedgeCfmActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionDate, (Py_ssize_t)sizeof(data->ActionDate));
    return PyBytes_FromString(data->ActionDate);
}

static int PyCThostFtdcHedgeCfmActionFieldType_set_ActionDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcHedgeCfmActionField::ActionDate)) {
        PyErr_SetString(PyExc_ValueError, "ActionDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmActionFieldData>(self);
    CThostFtdcHedgeCfmActionField *data = &(extra->data);
    // memset(data->ActionDate, 0, sizeof(data->ActionDate));
    // memcpy(data->ActionDate, buf, len);
    strncpy(data->ActionDate, buf, sizeof(data->ActionDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcHedgeCfmActionFieldType_get_ActionTime(PyObject *self, void *closure) {
    PyCThostFtdcHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmActionFieldData>(self);
    CThostFtdcHedgeCfmActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionTime, (Py_ssize_t)sizeof(data->ActionTime));
    return PyBytes_FromString(data->ActionTime);
}

static int PyCThostFtdcHedgeCfmActionFieldType_set_ActionTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcHedgeCfmActionField::ActionTime)) {
        PyErr_SetString(PyExc_ValueError, "ActionTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmActionFieldData>(self);
    CThostFtdcHedgeCfmActionField *data = &(extra->data);
    // memset(data->ActionTime, 0, sizeof(data->ActionTime));
    // memcpy(data->ActionTime, buf, len);
    strncpy(data->ActionTime, buf, sizeof(data->ActionTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所交易员代码
/// typedef char TThostFtdcTraderIDType[21]
static PyObject *PyCThostFtdcHedgeCfmActionFieldType_get_TraderID(PyObject *self, void *closure) {
    PyCThostFtdcHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmActionFieldData>(self);
    CThostFtdcHedgeCfmActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TraderID, (Py_ssize_t)sizeof(data->TraderID));
    return PyBytes_FromString(data->TraderID);
}

static int PyCThostFtdcHedgeCfmActionFieldType_set_TraderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcHedgeCfmActionField::TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmActionFieldData>(self);
    CThostFtdcHedgeCfmActionField *data = &(extra->data);
    // memset(data->TraderID, 0, sizeof(data->TraderID));
    // memcpy(data->TraderID, buf, len);
    strncpy(data->TraderID, buf, sizeof(data->TraderID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 本地报单编号
/// typedef char TThostFtdcOrderLocalIDType[13]
static PyObject *PyCThostFtdcHedgeCfmActionFieldType_get_OrderLocalID(PyObject *self, void *closure) {
    PyCThostFtdcHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmActionFieldData>(self);
    CThostFtdcHedgeCfmActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderLocalID, (Py_ssize_t)sizeof(data->OrderLocalID));
    return PyBytes_FromString(data->OrderLocalID);
}

static int PyCThostFtdcHedgeCfmActionFieldType_set_OrderLocalID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderLocalID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcHedgeCfmActionField::OrderLocalID)) {
        PyErr_SetString(PyExc_ValueError, "OrderLocalID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmActionFieldData>(self);
    CThostFtdcHedgeCfmActionField *data = &(extra->data);
    // memset(data->OrderLocalID, 0, sizeof(data->OrderLocalID));
    // memcpy(data->OrderLocalID, buf, len);
    strncpy(data->OrderLocalID, buf, sizeof(data->OrderLocalID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作本地编号
/// typedef char TThostFtdcOrderLocalIDType[13]
static PyObject *PyCThostFtdcHedgeCfmActionFieldType_get_ActionLocalID(PyObject *self, void *closure) {
    PyCThostFtdcHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmActionFieldData>(self);
    CThostFtdcHedgeCfmActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionLocalID, (Py_ssize_t)sizeof(data->ActionLocalID));
    return PyBytes_FromString(data->ActionLocalID);
}

static int PyCThostFtdcHedgeCfmActionFieldType_set_ActionLocalID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionLocalID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcHedgeCfmActionField::ActionLocalID)) {
        PyErr_SetString(PyExc_ValueError, "ActionLocalID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmActionFieldData>(self);
    CThostFtdcHedgeCfmActionField *data = &(extra->data);
    // memset(data->ActionLocalID, 0, sizeof(data->ActionLocalID));
    // memcpy(data->ActionLocalID, buf, len);
    strncpy(data->ActionLocalID, buf, sizeof(data->ActionLocalID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 会员代码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcHedgeCfmActionFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmActionFieldData>(self);
    CThostFtdcHedgeCfmActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcHedgeCfmActionFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcHedgeCfmActionField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmActionFieldData>(self);
    CThostFtdcHedgeCfmActionField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户代码
/// typedef char TThostFtdcClientIDType[11]
static PyObject *PyCThostFtdcHedgeCfmActionFieldType_get_ClientID(PyObject *self, void *closure) {
    PyCThostFtdcHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmActionFieldData>(self);
    CThostFtdcHedgeCfmActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientID, (Py_ssize_t)sizeof(data->ClientID));
    return PyBytes_FromString(data->ClientID);
}

static int PyCThostFtdcHedgeCfmActionFieldType_set_ClientID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcHedgeCfmActionField::ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmActionFieldData>(self);
    CThostFtdcHedgeCfmActionField *data = &(extra->data);
    // memset(data->ClientID, 0, sizeof(data->ClientID));
    // memcpy(data->ClientID, buf, len);
    strncpy(data->ClientID, buf, sizeof(data->ClientID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单操作状态
/// typedef char TThostFtdcOrderActionStatusType
static PyObject *PyCThostFtdcHedgeCfmActionFieldType_get_OrderActionStatus(PyObject *self, void *closure) {
    PyCThostFtdcHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmActionFieldData>(self);
    CThostFtdcHedgeCfmActionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OrderActionStatus), 1);
}

static int PyCThostFtdcHedgeCfmActionFieldType_set_OrderActionStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderActionStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcHedgeCfmActionField::OrderActionStatus)) {
        PyErr_SetString(PyExc_ValueError, "OrderActionStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmActionFieldData>(self);
    CThostFtdcHedgeCfmActionField *data = &(extra->data);
    data->OrderActionStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcHedgeCfmActionFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmActionFieldData>(self);
    CThostFtdcHedgeCfmActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcHedgeCfmActionFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcHedgeCfmActionField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmActionFieldData>(self);
    CThostFtdcHedgeCfmActionField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcHedgeCfmActionFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmActionFieldData>(self);
    CThostFtdcHedgeCfmActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcHedgeCfmActionFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcHedgeCfmActionField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmActionFieldData>(self);
    CThostFtdcHedgeCfmActionField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合同编号
/// typedef char TThostFtdcOrderSysIDType[21]
static PyObject *PyCThostFtdcHedgeCfmActionFieldType_get_OrderSysID(PyObject *self, void *closure) {
    PyCThostFtdcHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmActionFieldData>(self);
    CThostFtdcHedgeCfmActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderSysID, (Py_ssize_t)sizeof(data->OrderSysID));
    return PyBytes_FromString(data->OrderSysID);
}

static int PyCThostFtdcHedgeCfmActionFieldType_set_OrderSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcHedgeCfmActionField::OrderSysID)) {
        PyErr_SetString(PyExc_ValueError, "OrderSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmActionFieldData>(self);
    CThostFtdcHedgeCfmActionField *data = &(extra->data);
    // memset(data->OrderSysID, 0, sizeof(data->OrderSysID));
    // memcpy(data->OrderSysID, buf, len);
    strncpy(data->OrderSysID, buf, sizeof(data->OrderSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 状态信息
/// typedef char TThostFtdcErrorMsgType[81]
static PyObject *PyCThostFtdcHedgeCfmActionFieldType_get_StatusMsg(PyObject *self, void *closure) {
    PyCThostFtdcHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmActionFieldData>(self);
    CThostFtdcHedgeCfmActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->StatusMsg, (Py_ssize_t)sizeof(data->StatusMsg));
    return PyBytes_FromString(data->StatusMsg);
}

static int PyCThostFtdcHedgeCfmActionFieldType_set_StatusMsg(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "StatusMsg Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcHedgeCfmActionField::StatusMsg)) {
        PyErr_SetString(PyExc_ValueError, "StatusMsg must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmActionFieldData>(self);
    CThostFtdcHedgeCfmActionField *data = &(extra->data);
    // memset(data->StatusMsg, 0, sizeof(data->StatusMsg));
    // memcpy(data->StatusMsg, buf, len);
    strncpy(data->StatusMsg, buf, sizeof(data->StatusMsg));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单引用
/// typedef char TThostFtdcOrderRefType[13]
static PyObject *PyCThostFtdcHedgeCfmActionFieldType_get_OrderRef(PyObject *self, void *closure) {
    PyCThostFtdcHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmActionFieldData>(self);
    CThostFtdcHedgeCfmActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderRef, (Py_ssize_t)sizeof(data->OrderRef));
    return PyBytes_FromString(data->OrderRef);
}

static int PyCThostFtdcHedgeCfmActionFieldType_set_OrderRef(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderRef Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcHedgeCfmActionField::OrderRef)) {
        PyErr_SetString(PyExc_ValueError, "OrderRef must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmActionFieldData>(self);
    CThostFtdcHedgeCfmActionField *data = &(extra->data);
    // memset(data->OrderRef, 0, sizeof(data->OrderRef));
    // memcpy(data->OrderRef, buf, len);
    strncpy(data->OrderRef, buf, sizeof(data->OrderRef));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcHedgeCfmActionFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmActionFieldData>(self);
    CThostFtdcHedgeCfmActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcHedgeCfmActionFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcHedgeCfmActionField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmActionFieldData>(self);
    CThostFtdcHedgeCfmActionField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcHedgeCfmActionFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmActionFieldData>(self);
    CThostFtdcHedgeCfmActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcHedgeCfmActionFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcHedgeCfmActionField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcHedgeCfmActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmActionFieldData>(self);
    CThostFtdcHedgeCfmActionField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcHedgeCfmActionFieldType_members[] = {
    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    {
        .name = "InstallID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcHedgeCfmActionFieldData, data.InstallID),
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
        .offset = offsetof(PyCThostFtdcHedgeCfmActionFieldData, data.RequestID),
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
        .offset = offsetof(PyCThostFtdcHedgeCfmActionFieldData, data.FrontID),
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
        .offset = offsetof(PyCThostFtdcHedgeCfmActionFieldData, data.SessionID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("会话编号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcHedgeCfmActionFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcHedgeCfmActionFieldType_get_BrokerID,
    .set = PyCThostFtdcHedgeCfmActionFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcHedgeCfmActionFieldType_get_InvestorID,
    .set = PyCThostFtdcHedgeCfmActionFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 操作日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "ActionDate",
    .get = PyCThostFtdcHedgeCfmActionFieldType_get_ActionDate,
    .set = PyCThostFtdcHedgeCfmActionFieldType_set_ActionDate,
    .doc = PyDoc_STR("操作日期"),
    },
    /// 操作时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "ActionTime",
    .get = PyCThostFtdcHedgeCfmActionFieldType_get_ActionTime,
    .set = PyCThostFtdcHedgeCfmActionFieldType_set_ActionTime,
    .doc = PyDoc_STR("操作时间"),
    },
    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    {
    .name = "TraderID",
    .get = PyCThostFtdcHedgeCfmActionFieldType_get_TraderID,
    .set = PyCThostFtdcHedgeCfmActionFieldType_set_TraderID,
    .doc = PyDoc_STR("交易所交易员代码"),
    },
    /// 本地报单编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    {
    .name = "OrderLocalID",
    .get = PyCThostFtdcHedgeCfmActionFieldType_get_OrderLocalID,
    .set = PyCThostFtdcHedgeCfmActionFieldType_set_OrderLocalID,
    .doc = PyDoc_STR("本地报单编号"),
    },
    /// 操作本地编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    {
    .name = "ActionLocalID",
    .get = PyCThostFtdcHedgeCfmActionFieldType_get_ActionLocalID,
    .set = PyCThostFtdcHedgeCfmActionFieldType_set_ActionLocalID,
    .doc = PyDoc_STR("操作本地编号"),
    },
    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcHedgeCfmActionFieldType_get_ParticipantID,
    .set = PyCThostFtdcHedgeCfmActionFieldType_set_ParticipantID,
    .doc = PyDoc_STR("会员代码"),
    },
    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    {
    .name = "ClientID",
    .get = PyCThostFtdcHedgeCfmActionFieldType_get_ClientID,
    .set = PyCThostFtdcHedgeCfmActionFieldType_set_ClientID,
    .doc = PyDoc_STR("客户代码"),
    },
    /// 报单操作状态
    /// typedef char TThostFtdcOrderActionStatusType
    {
    .name = "OrderActionStatus",
    .get = PyCThostFtdcHedgeCfmActionFieldType_get_OrderActionStatus,
    .set = PyCThostFtdcHedgeCfmActionFieldType_set_OrderActionStatus,
    .doc = PyDoc_STR("报单操作状态"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcHedgeCfmActionFieldType_get_UserID,
    .set = PyCThostFtdcHedgeCfmActionFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcHedgeCfmActionFieldType_get_ExchangeID,
    .set = PyCThostFtdcHedgeCfmActionFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 合同编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    {
    .name = "OrderSysID",
    .get = PyCThostFtdcHedgeCfmActionFieldType_get_OrderSysID,
    .set = PyCThostFtdcHedgeCfmActionFieldType_set_OrderSysID,
    .doc = PyDoc_STR("合同编号"),
    },
    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    {
    .name = "StatusMsg",
    .get = PyCThostFtdcHedgeCfmActionFieldType_get_StatusMsg,
    .set = PyCThostFtdcHedgeCfmActionFieldType_set_StatusMsg,
    .doc = PyDoc_STR("状态信息"),
    },
    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    {
    .name = "OrderRef",
    .get = PyCThostFtdcHedgeCfmActionFieldType_get_OrderRef,
    .set = PyCThostFtdcHedgeCfmActionFieldType_set_OrderRef,
    .doc = PyDoc_STR("报单引用"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcHedgeCfmActionFieldType_get_IPAddress,
    .set = PyCThostFtdcHedgeCfmActionFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcHedgeCfmActionFieldType_get_MacAddress,
    .set = PyCThostFtdcHedgeCfmActionFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcHedgeCfmActionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcHedgeCfmActionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("套保申请撤销回报")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcHedgeCfmActionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcHedgeCfmActionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcHedgeCfmActionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcHedgeCfmActionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcHedgeCfmActionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcHedgeCfmActionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("套保申请撤销回报")},
    {Py_tp_members, PyCThostFtdcHedgeCfmActionFieldType_members},
    {Py_tp_getset, PyCThostFtdcHedgeCfmActionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcHedgeCfmActionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcHedgeCfmActionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcHedgeCfmActionFieldType_spec = {
    .name = "PyCTP.CThostFtdcHedgeCfmActionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcHedgeCfmActionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcHedgeCfmActionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcHedgeCfmActionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcHedgeCfmActionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcHedgeCfmActionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcHedgeCfmActionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcHedgeCfmActionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcHedgeCfmActionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcHedgeCfmActionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcHedgeCfmActionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}