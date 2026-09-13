
#include "PyCThostFtdcQuoteActionField.h"

///报价操作

static int PyCThostFtdcQuoteActionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "QuoteActionRef", "QuoteRef", "RequestID", "FrontID", "SessionID", "ExchangeID", "QuoteSysID", "ActionFlag", "ActionDate", "ActionTime", "TraderID", "InstallID", "QuoteLocalID", "ActionLocalID", "ParticipantID", "ClientID", "BusinessUnit", "OrderActionStatus", "UserID", "StatusMsg", "reserve1", "BranchID", "InvestUnitID", "reserve2", "MacAddress", "InstrumentID", "IPAddress", "OrderMemo", "SessionReqSeq", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQuoteActionField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQuoteActionField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQuoteActionField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQuoteActionField_InvestorID_length = 0;

    /// 报价操作引用
    /// typedef int TThostFtdcOrderActionRefType
    int CThostFtdcQuoteActionField_QuoteActionRef = 0;

    /// 报价引用
    /// typedef char TThostFtdcOrderRefType[13]
    char *CThostFtdcQuoteActionField_QuoteRef = NULL;
    Py_ssize_t CThostFtdcQuoteActionField_QuoteRef_length = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcQuoteActionField_RequestID = 0;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    int CThostFtdcQuoteActionField_FrontID = 0;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcQuoteActionField_SessionID = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQuoteActionField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQuoteActionField_ExchangeID_length = 0;

    /// 报价操作编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    char *CThostFtdcQuoteActionField_QuoteSysID = NULL;
    Py_ssize_t CThostFtdcQuoteActionField_QuoteSysID_length = 0;

    /// 操作标志
    /// typedef char TThostFtdcActionFlagType
    char CThostFtdcQuoteActionField_ActionFlag = 0;

    /// 操作日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcQuoteActionField_ActionDate = NULL;
    Py_ssize_t CThostFtdcQuoteActionField_ActionDate_length = 0;

    /// 操作时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcQuoteActionField_ActionTime = NULL;
    Py_ssize_t CThostFtdcQuoteActionField_ActionTime_length = 0;

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    char *CThostFtdcQuoteActionField_TraderID = NULL;
    Py_ssize_t CThostFtdcQuoteActionField_TraderID_length = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcQuoteActionField_InstallID = 0;

    /// 本地报价编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    char *CThostFtdcQuoteActionField_QuoteLocalID = NULL;
    Py_ssize_t CThostFtdcQuoteActionField_QuoteLocalID_length = 0;

    /// 操作本地编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    char *CThostFtdcQuoteActionField_ActionLocalID = NULL;
    Py_ssize_t CThostFtdcQuoteActionField_ActionLocalID_length = 0;

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcQuoteActionField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcQuoteActionField_ParticipantID_length = 0;

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    char *CThostFtdcQuoteActionField_ClientID = NULL;
    Py_ssize_t CThostFtdcQuoteActionField_ClientID_length = 0;

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    char *CThostFtdcQuoteActionField_BusinessUnit = NULL;
    Py_ssize_t CThostFtdcQuoteActionField_BusinessUnit_length = 0;

    /// 报单操作状态
    /// typedef char TThostFtdcOrderActionStatusType
    char CThostFtdcQuoteActionField_OrderActionStatus = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcQuoteActionField_UserID = NULL;
    Py_ssize_t CThostFtdcQuoteActionField_UserID_length = 0;

    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    char *CThostFtdcQuoteActionField_StatusMsg = NULL;
    Py_ssize_t CThostFtdcQuoteActionField_StatusMsg_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcQuoteActionField_reserve1 = NULL;
    Py_ssize_t CThostFtdcQuoteActionField_reserve1_length = 0;

    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    char *CThostFtdcQuoteActionField_BranchID = NULL;
    Py_ssize_t CThostFtdcQuoteActionField_BranchID_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcQuoteActionField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcQuoteActionField_InvestUnitID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcQuoteActionField_reserve2 = NULL;
    Py_ssize_t CThostFtdcQuoteActionField_reserve2_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcQuoteActionField_MacAddress = NULL;
    Py_ssize_t CThostFtdcQuoteActionField_MacAddress_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQuoteActionField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcQuoteActionField_InstrumentID_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcQuoteActionField_IPAddress = NULL;
    Py_ssize_t CThostFtdcQuoteActionField_IPAddress_length = 0;

    /// 报单回显字段
    /// typedef char TThostFtdcOrderMemoType[13]
    char *CThostFtdcQuoteActionField_OrderMemo = NULL;
    Py_ssize_t CThostFtdcQuoteActionField_OrderMemo_length = 0;

    /// session上请求计数 api自动维护
    /// typedef int TThostFtdcSequenceNo12Type
    int CThostFtdcQuoteActionField_SessionReqSeq = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iy#iiiy#y#cy#y#y#iy#y#y#y#y#cy#y#y#y#y#y#y#y#y#y#i", (char **)kwlist
        , &CThostFtdcQuoteActionField_BrokerID, &CThostFtdcQuoteActionField_BrokerID_length
        , &CThostFtdcQuoteActionField_InvestorID, &CThostFtdcQuoteActionField_InvestorID_length
        , &CThostFtdcQuoteActionField_QuoteActionRef
        , &CThostFtdcQuoteActionField_QuoteRef, &CThostFtdcQuoteActionField_QuoteRef_length
        , &CThostFtdcQuoteActionField_RequestID
        , &CThostFtdcQuoteActionField_FrontID
        , &CThostFtdcQuoteActionField_SessionID
        , &CThostFtdcQuoteActionField_ExchangeID, &CThostFtdcQuoteActionField_ExchangeID_length
        , &CThostFtdcQuoteActionField_QuoteSysID, &CThostFtdcQuoteActionField_QuoteSysID_length
        , &CThostFtdcQuoteActionField_ActionFlag
        , &CThostFtdcQuoteActionField_ActionDate, &CThostFtdcQuoteActionField_ActionDate_length
        , &CThostFtdcQuoteActionField_ActionTime, &CThostFtdcQuoteActionField_ActionTime_length
        , &CThostFtdcQuoteActionField_TraderID, &CThostFtdcQuoteActionField_TraderID_length
        , &CThostFtdcQuoteActionField_InstallID
        , &CThostFtdcQuoteActionField_QuoteLocalID, &CThostFtdcQuoteActionField_QuoteLocalID_length
        , &CThostFtdcQuoteActionField_ActionLocalID, &CThostFtdcQuoteActionField_ActionLocalID_length
        , &CThostFtdcQuoteActionField_ParticipantID, &CThostFtdcQuoteActionField_ParticipantID_length
        , &CThostFtdcQuoteActionField_ClientID, &CThostFtdcQuoteActionField_ClientID_length
        , &CThostFtdcQuoteActionField_BusinessUnit, &CThostFtdcQuoteActionField_BusinessUnit_length
        , &CThostFtdcQuoteActionField_OrderActionStatus
        , &CThostFtdcQuoteActionField_UserID, &CThostFtdcQuoteActionField_UserID_length
        , &CThostFtdcQuoteActionField_StatusMsg, &CThostFtdcQuoteActionField_StatusMsg_length
        , &CThostFtdcQuoteActionField_reserve1, &CThostFtdcQuoteActionField_reserve1_length
        , &CThostFtdcQuoteActionField_BranchID, &CThostFtdcQuoteActionField_BranchID_length
        , &CThostFtdcQuoteActionField_InvestUnitID, &CThostFtdcQuoteActionField_InvestUnitID_length
        , &CThostFtdcQuoteActionField_reserve2, &CThostFtdcQuoteActionField_reserve2_length
        , &CThostFtdcQuoteActionField_MacAddress, &CThostFtdcQuoteActionField_MacAddress_length
        , &CThostFtdcQuoteActionField_InstrumentID, &CThostFtdcQuoteActionField_InstrumentID_length
        , &CThostFtdcQuoteActionField_IPAddress, &CThostFtdcQuoteActionField_IPAddress_length
        , &CThostFtdcQuoteActionField_OrderMemo, &CThostFtdcQuoteActionField_OrderMemo_length
        , &CThostFtdcQuoteActionField_SessionReqSeq
    )) {
        return -1;
    }

    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQuoteActionField_BrokerID != NULL ) {
        if(CThostFtdcQuoteActionField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQuoteActionField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQuoteActionField_BrokerID, CThostFtdcQuoteActionField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQuoteActionField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQuoteActionField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQuoteActionField_InvestorID != NULL ) {
        if(CThostFtdcQuoteActionField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQuoteActionField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQuoteActionField_InvestorID, CThostFtdcQuoteActionField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQuoteActionField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQuoteActionField_InvestorID = NULL;
    }

    /// 报价操作引用
    /// typedef int TThostFtdcOrderActionRefType
    data->QuoteActionRef = CThostFtdcQuoteActionField_QuoteActionRef;

    /// 报价引用
    /// typedef char TThostFtdcOrderRefType[13]
    if( CThostFtdcQuoteActionField_QuoteRef != NULL ) {
        if(CThostFtdcQuoteActionField_QuoteRef_length >= (Py_ssize_t)sizeof(data->QuoteRef)) {
            PyErr_Format(PyExc_ValueError, "QuoteRef too long: length=%zd (max allowed is 12)", CThostFtdcQuoteActionField_QuoteRef_length);
            return -1;
        }
        // memset(data->QuoteRef, 0, sizeof(data->QuoteRef));
        // memcpy(data->QuoteRef, CThostFtdcQuoteActionField_QuoteRef, CThostFtdcQuoteActionField_QuoteRef_length);
        strncpy(data->QuoteRef, CThostFtdcQuoteActionField_QuoteRef, sizeof(data->QuoteRef));
        CThostFtdcQuoteActionField_QuoteRef = NULL;
    }

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcQuoteActionField_RequestID;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    data->FrontID = CThostFtdcQuoteActionField_FrontID;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcQuoteActionField_SessionID;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQuoteActionField_ExchangeID != NULL ) {
        if(CThostFtdcQuoteActionField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQuoteActionField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQuoteActionField_ExchangeID, CThostFtdcQuoteActionField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQuoteActionField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQuoteActionField_ExchangeID = NULL;
    }

    /// 报价操作编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    if( CThostFtdcQuoteActionField_QuoteSysID != NULL ) {
        if(CThostFtdcQuoteActionField_QuoteSysID_length >= (Py_ssize_t)sizeof(data->QuoteSysID)) {
            PyErr_Format(PyExc_ValueError, "QuoteSysID too long: length=%zd (max allowed is 20)", CThostFtdcQuoteActionField_QuoteSysID_length);
            return -1;
        }
        // memset(data->QuoteSysID, 0, sizeof(data->QuoteSysID));
        // memcpy(data->QuoteSysID, CThostFtdcQuoteActionField_QuoteSysID, CThostFtdcQuoteActionField_QuoteSysID_length);
        strncpy(data->QuoteSysID, CThostFtdcQuoteActionField_QuoteSysID, sizeof(data->QuoteSysID));
        CThostFtdcQuoteActionField_QuoteSysID = NULL;
    }

    /// 操作标志
    /// typedef char TThostFtdcActionFlagType
    data->ActionFlag = CThostFtdcQuoteActionField_ActionFlag;

    /// 操作日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcQuoteActionField_ActionDate != NULL ) {
        if(CThostFtdcQuoteActionField_ActionDate_length >= (Py_ssize_t)sizeof(data->ActionDate)) {
            PyErr_Format(PyExc_ValueError, "ActionDate too long: length=%zd (max allowed is 8)", CThostFtdcQuoteActionField_ActionDate_length);
            return -1;
        }
        // memset(data->ActionDate, 0, sizeof(data->ActionDate));
        // memcpy(data->ActionDate, CThostFtdcQuoteActionField_ActionDate, CThostFtdcQuoteActionField_ActionDate_length);
        strncpy(data->ActionDate, CThostFtdcQuoteActionField_ActionDate, sizeof(data->ActionDate));
        CThostFtdcQuoteActionField_ActionDate = NULL;
    }

    /// 操作时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcQuoteActionField_ActionTime != NULL ) {
        if(CThostFtdcQuoteActionField_ActionTime_length >= (Py_ssize_t)sizeof(data->ActionTime)) {
            PyErr_Format(PyExc_ValueError, "ActionTime too long: length=%zd (max allowed is 8)", CThostFtdcQuoteActionField_ActionTime_length);
            return -1;
        }
        // memset(data->ActionTime, 0, sizeof(data->ActionTime));
        // memcpy(data->ActionTime, CThostFtdcQuoteActionField_ActionTime, CThostFtdcQuoteActionField_ActionTime_length);
        strncpy(data->ActionTime, CThostFtdcQuoteActionField_ActionTime, sizeof(data->ActionTime));
        CThostFtdcQuoteActionField_ActionTime = NULL;
    }

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    if( CThostFtdcQuoteActionField_TraderID != NULL ) {
        if(CThostFtdcQuoteActionField_TraderID_length >= (Py_ssize_t)sizeof(data->TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is 20)", CThostFtdcQuoteActionField_TraderID_length);
            return -1;
        }
        // memset(data->TraderID, 0, sizeof(data->TraderID));
        // memcpy(data->TraderID, CThostFtdcQuoteActionField_TraderID, CThostFtdcQuoteActionField_TraderID_length);
        strncpy(data->TraderID, CThostFtdcQuoteActionField_TraderID, sizeof(data->TraderID));
        CThostFtdcQuoteActionField_TraderID = NULL;
    }

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcQuoteActionField_InstallID;

    /// 本地报价编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    if( CThostFtdcQuoteActionField_QuoteLocalID != NULL ) {
        if(CThostFtdcQuoteActionField_QuoteLocalID_length >= (Py_ssize_t)sizeof(data->QuoteLocalID)) {
            PyErr_Format(PyExc_ValueError, "QuoteLocalID too long: length=%zd (max allowed is 12)", CThostFtdcQuoteActionField_QuoteLocalID_length);
            return -1;
        }
        // memset(data->QuoteLocalID, 0, sizeof(data->QuoteLocalID));
        // memcpy(data->QuoteLocalID, CThostFtdcQuoteActionField_QuoteLocalID, CThostFtdcQuoteActionField_QuoteLocalID_length);
        strncpy(data->QuoteLocalID, CThostFtdcQuoteActionField_QuoteLocalID, sizeof(data->QuoteLocalID));
        CThostFtdcQuoteActionField_QuoteLocalID = NULL;
    }

    /// 操作本地编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    if( CThostFtdcQuoteActionField_ActionLocalID != NULL ) {
        if(CThostFtdcQuoteActionField_ActionLocalID_length >= (Py_ssize_t)sizeof(data->ActionLocalID)) {
            PyErr_Format(PyExc_ValueError, "ActionLocalID too long: length=%zd (max allowed is 12)", CThostFtdcQuoteActionField_ActionLocalID_length);
            return -1;
        }
        // memset(data->ActionLocalID, 0, sizeof(data->ActionLocalID));
        // memcpy(data->ActionLocalID, CThostFtdcQuoteActionField_ActionLocalID, CThostFtdcQuoteActionField_ActionLocalID_length);
        strncpy(data->ActionLocalID, CThostFtdcQuoteActionField_ActionLocalID, sizeof(data->ActionLocalID));
        CThostFtdcQuoteActionField_ActionLocalID = NULL;
    }

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcQuoteActionField_ParticipantID != NULL ) {
        if(CThostFtdcQuoteActionField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcQuoteActionField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcQuoteActionField_ParticipantID, CThostFtdcQuoteActionField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcQuoteActionField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcQuoteActionField_ParticipantID = NULL;
    }

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    if( CThostFtdcQuoteActionField_ClientID != NULL ) {
        if(CThostFtdcQuoteActionField_ClientID_length >= (Py_ssize_t)sizeof(data->ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is 10)", CThostFtdcQuoteActionField_ClientID_length);
            return -1;
        }
        // memset(data->ClientID, 0, sizeof(data->ClientID));
        // memcpy(data->ClientID, CThostFtdcQuoteActionField_ClientID, CThostFtdcQuoteActionField_ClientID_length);
        strncpy(data->ClientID, CThostFtdcQuoteActionField_ClientID, sizeof(data->ClientID));
        CThostFtdcQuoteActionField_ClientID = NULL;
    }

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    if( CThostFtdcQuoteActionField_BusinessUnit != NULL ) {
        if(CThostFtdcQuoteActionField_BusinessUnit_length >= (Py_ssize_t)sizeof(data->BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is 20)", CThostFtdcQuoteActionField_BusinessUnit_length);
            return -1;
        }
        // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
        // memcpy(data->BusinessUnit, CThostFtdcQuoteActionField_BusinessUnit, CThostFtdcQuoteActionField_BusinessUnit_length);
        strncpy(data->BusinessUnit, CThostFtdcQuoteActionField_BusinessUnit, sizeof(data->BusinessUnit));
        CThostFtdcQuoteActionField_BusinessUnit = NULL;
    }

    /// 报单操作状态
    /// typedef char TThostFtdcOrderActionStatusType
    data->OrderActionStatus = CThostFtdcQuoteActionField_OrderActionStatus;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcQuoteActionField_UserID != NULL ) {
        if(CThostFtdcQuoteActionField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcQuoteActionField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcQuoteActionField_UserID, CThostFtdcQuoteActionField_UserID_length);
        strncpy(data->UserID, CThostFtdcQuoteActionField_UserID, sizeof(data->UserID));
        CThostFtdcQuoteActionField_UserID = NULL;
    }

    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    if( CThostFtdcQuoteActionField_StatusMsg != NULL ) {
        if(CThostFtdcQuoteActionField_StatusMsg_length >= (Py_ssize_t)sizeof(data->StatusMsg)) {
            PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is 80)", CThostFtdcQuoteActionField_StatusMsg_length);
            return -1;
        }
        // memset(data->StatusMsg, 0, sizeof(data->StatusMsg));
        // memcpy(data->StatusMsg, CThostFtdcQuoteActionField_StatusMsg, CThostFtdcQuoteActionField_StatusMsg_length);
        strncpy(data->StatusMsg, CThostFtdcQuoteActionField_StatusMsg, sizeof(data->StatusMsg));
        CThostFtdcQuoteActionField_StatusMsg = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcQuoteActionField_reserve1 != NULL ) {
        if(CThostFtdcQuoteActionField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcQuoteActionField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcQuoteActionField_reserve1, CThostFtdcQuoteActionField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcQuoteActionField_reserve1, sizeof(data->reserve1));
        CThostFtdcQuoteActionField_reserve1 = NULL;
    }

    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    if( CThostFtdcQuoteActionField_BranchID != NULL ) {
        if(CThostFtdcQuoteActionField_BranchID_length >= (Py_ssize_t)sizeof(data->BranchID)) {
            PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is 8)", CThostFtdcQuoteActionField_BranchID_length);
            return -1;
        }
        // memset(data->BranchID, 0, sizeof(data->BranchID));
        // memcpy(data->BranchID, CThostFtdcQuoteActionField_BranchID, CThostFtdcQuoteActionField_BranchID_length);
        strncpy(data->BranchID, CThostFtdcQuoteActionField_BranchID, sizeof(data->BranchID));
        CThostFtdcQuoteActionField_BranchID = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcQuoteActionField_InvestUnitID != NULL ) {
        if(CThostFtdcQuoteActionField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcQuoteActionField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcQuoteActionField_InvestUnitID, CThostFtdcQuoteActionField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcQuoteActionField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcQuoteActionField_InvestUnitID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcQuoteActionField_reserve2 != NULL ) {
        if(CThostFtdcQuoteActionField_reserve2_length >= (Py_ssize_t)sizeof(data->reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is 15)", CThostFtdcQuoteActionField_reserve2_length);
            return -1;
        }
        // memset(data->reserve2, 0, sizeof(data->reserve2));
        // memcpy(data->reserve2, CThostFtdcQuoteActionField_reserve2, CThostFtdcQuoteActionField_reserve2_length);
        strncpy(data->reserve2, CThostFtdcQuoteActionField_reserve2, sizeof(data->reserve2));
        CThostFtdcQuoteActionField_reserve2 = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcQuoteActionField_MacAddress != NULL ) {
        if(CThostFtdcQuoteActionField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcQuoteActionField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcQuoteActionField_MacAddress, CThostFtdcQuoteActionField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcQuoteActionField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcQuoteActionField_MacAddress = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQuoteActionField_InstrumentID != NULL ) {
        if(CThostFtdcQuoteActionField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcQuoteActionField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcQuoteActionField_InstrumentID, CThostFtdcQuoteActionField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcQuoteActionField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcQuoteActionField_InstrumentID = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcQuoteActionField_IPAddress != NULL ) {
        if(CThostFtdcQuoteActionField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcQuoteActionField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcQuoteActionField_IPAddress, CThostFtdcQuoteActionField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcQuoteActionField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcQuoteActionField_IPAddress = NULL;
    }

    /// 报单回显字段
    /// typedef char TThostFtdcOrderMemoType[13]
    if( CThostFtdcQuoteActionField_OrderMemo != NULL ) {
        if(CThostFtdcQuoteActionField_OrderMemo_length >= (Py_ssize_t)sizeof(data->OrderMemo)) {
            PyErr_Format(PyExc_ValueError, "OrderMemo too long: length=%zd (max allowed is 12)", CThostFtdcQuoteActionField_OrderMemo_length);
            return -1;
        }
        // memset(data->OrderMemo, 0, sizeof(data->OrderMemo));
        // memcpy(data->OrderMemo, CThostFtdcQuoteActionField_OrderMemo, CThostFtdcQuoteActionField_OrderMemo_length);
        strncpy(data->OrderMemo, CThostFtdcQuoteActionField_OrderMemo, sizeof(data->OrderMemo));
        CThostFtdcQuoteActionField_OrderMemo = NULL;
    }

    /// session上请求计数 api自动维护
    /// typedef int TThostFtdcSequenceNo12Type
    data->SessionReqSeq = CThostFtdcQuoteActionField_SessionReqSeq;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQuoteActionFieldType_repr(PyObject *self) {

    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:i,s:y,s:i,s:i,s:i,s:y,s:y,s:c,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "QuoteActionRef", data->QuoteActionRef
        , "QuoteRef", data->QuoteRef//, (Py_ssize_t)sizeof(data->QuoteRef)
        , "RequestID", data->RequestID
        , "FrontID", data->FrontID
        , "SessionID", data->SessionID
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "QuoteSysID", data->QuoteSysID//, (Py_ssize_t)sizeof(data->QuoteSysID)
        , "ActionFlag", data->ActionFlag
        , "ActionDate", data->ActionDate//, (Py_ssize_t)sizeof(data->ActionDate)
        , "ActionTime", data->ActionTime//, (Py_ssize_t)sizeof(data->ActionTime)
        , "TraderID", data->TraderID//, (Py_ssize_t)sizeof(data->TraderID)
        , "InstallID", data->InstallID
        , "QuoteLocalID", data->QuoteLocalID//, (Py_ssize_t)sizeof(data->QuoteLocalID)
        , "ActionLocalID", data->ActionLocalID//, (Py_ssize_t)sizeof(data->ActionLocalID)
        , "ParticipantID", data->ParticipantID//, (Py_ssize_t)sizeof(data->ParticipantID)
        , "ClientID", data->ClientID//, (Py_ssize_t)sizeof(data->ClientID)
        , "BusinessUnit", data->BusinessUnit//, (Py_ssize_t)sizeof(data->BusinessUnit)
        , "OrderActionStatus", data->OrderActionStatus
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "StatusMsg", data->StatusMsg//, (Py_ssize_t)sizeof(data->StatusMsg)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "BranchID", data->BranchID//, (Py_ssize_t)sizeof(data->BranchID)
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
        , "reserve2", data->reserve2//, (Py_ssize_t)sizeof(data->reserve2)
        , "MacAddress", data->MacAddress//, (Py_ssize_t)sizeof(data->MacAddress)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "IPAddress", data->IPAddress//, (Py_ssize_t)sizeof(data->IPAddress)
        , "OrderMemo", data->OrderMemo//, (Py_ssize_t)sizeof(data->OrderMemo)
        , "SessionReqSeq", data->SessionReqSeq
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQuoteActionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQuoteActionField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQuoteActionFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQuoteActionFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteActionField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQuoteActionFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQuoteActionFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteActionField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报价引用
/// typedef char TThostFtdcOrderRefType[13]
static PyObject *PyCThostFtdcQuoteActionFieldType_get_QuoteRef(PyObject *self, void *closure) {
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->QuoteRef, (Py_ssize_t)sizeof(data->QuoteRef));
    return PyBytes_FromString(data->QuoteRef);
}

static int PyCThostFtdcQuoteActionFieldType_set_QuoteRef(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "QuoteRef Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteActionField::QuoteRef)) {
        PyErr_SetString(PyExc_ValueError, "QuoteRef must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    // memset(data->QuoteRef, 0, sizeof(data->QuoteRef));
    // memcpy(data->QuoteRef, buf, len);
    strncpy(data->QuoteRef, buf, sizeof(data->QuoteRef));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQuoteActionFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQuoteActionFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteActionField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报价操作编号
/// typedef char TThostFtdcOrderSysIDType[21]
static PyObject *PyCThostFtdcQuoteActionFieldType_get_QuoteSysID(PyObject *self, void *closure) {
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->QuoteSysID, (Py_ssize_t)sizeof(data->QuoteSysID));
    return PyBytes_FromString(data->QuoteSysID);
}

static int PyCThostFtdcQuoteActionFieldType_set_QuoteSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "QuoteSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteActionField::QuoteSysID)) {
        PyErr_SetString(PyExc_ValueError, "QuoteSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    // memset(data->QuoteSysID, 0, sizeof(data->QuoteSysID));
    // memcpy(data->QuoteSysID, buf, len);
    strncpy(data->QuoteSysID, buf, sizeof(data->QuoteSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionFlagType
static PyObject *PyCThostFtdcQuoteActionFieldType_get_ActionFlag(PyObject *self, void *closure) {
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionFlag), 1);
}

static int PyCThostFtdcQuoteActionFieldType_set_ActionFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcQuoteActionField::ActionFlag)) {
        PyErr_SetString(PyExc_ValueError, "ActionFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    data->ActionFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcQuoteActionFieldType_get_ActionDate(PyObject *self, void *closure) {
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionDate, (Py_ssize_t)sizeof(data->ActionDate));
    return PyBytes_FromString(data->ActionDate);
}

static int PyCThostFtdcQuoteActionFieldType_set_ActionDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteActionField::ActionDate)) {
        PyErr_SetString(PyExc_ValueError, "ActionDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    // memset(data->ActionDate, 0, sizeof(data->ActionDate));
    // memcpy(data->ActionDate, buf, len);
    strncpy(data->ActionDate, buf, sizeof(data->ActionDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcQuoteActionFieldType_get_ActionTime(PyObject *self, void *closure) {
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionTime, (Py_ssize_t)sizeof(data->ActionTime));
    return PyBytes_FromString(data->ActionTime);
}

static int PyCThostFtdcQuoteActionFieldType_set_ActionTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteActionField::ActionTime)) {
        PyErr_SetString(PyExc_ValueError, "ActionTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    // memset(data->ActionTime, 0, sizeof(data->ActionTime));
    // memcpy(data->ActionTime, buf, len);
    strncpy(data->ActionTime, buf, sizeof(data->ActionTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所交易员代码
/// typedef char TThostFtdcTraderIDType[21]
static PyObject *PyCThostFtdcQuoteActionFieldType_get_TraderID(PyObject *self, void *closure) {
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TraderID, (Py_ssize_t)sizeof(data->TraderID));
    return PyBytes_FromString(data->TraderID);
}

static int PyCThostFtdcQuoteActionFieldType_set_TraderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteActionField::TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    // memset(data->TraderID, 0, sizeof(data->TraderID));
    // memcpy(data->TraderID, buf, len);
    strncpy(data->TraderID, buf, sizeof(data->TraderID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 本地报价编号
/// typedef char TThostFtdcOrderLocalIDType[13]
static PyObject *PyCThostFtdcQuoteActionFieldType_get_QuoteLocalID(PyObject *self, void *closure) {
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->QuoteLocalID, (Py_ssize_t)sizeof(data->QuoteLocalID));
    return PyBytes_FromString(data->QuoteLocalID);
}

static int PyCThostFtdcQuoteActionFieldType_set_QuoteLocalID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "QuoteLocalID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteActionField::QuoteLocalID)) {
        PyErr_SetString(PyExc_ValueError, "QuoteLocalID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    // memset(data->QuoteLocalID, 0, sizeof(data->QuoteLocalID));
    // memcpy(data->QuoteLocalID, buf, len);
    strncpy(data->QuoteLocalID, buf, sizeof(data->QuoteLocalID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作本地编号
/// typedef char TThostFtdcOrderLocalIDType[13]
static PyObject *PyCThostFtdcQuoteActionFieldType_get_ActionLocalID(PyObject *self, void *closure) {
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionLocalID, (Py_ssize_t)sizeof(data->ActionLocalID));
    return PyBytes_FromString(data->ActionLocalID);
}

static int PyCThostFtdcQuoteActionFieldType_set_ActionLocalID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionLocalID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteActionField::ActionLocalID)) {
        PyErr_SetString(PyExc_ValueError, "ActionLocalID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    // memset(data->ActionLocalID, 0, sizeof(data->ActionLocalID));
    // memcpy(data->ActionLocalID, buf, len);
    strncpy(data->ActionLocalID, buf, sizeof(data->ActionLocalID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 会员代码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcQuoteActionFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcQuoteActionFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteActionField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户代码
/// typedef char TThostFtdcClientIDType[11]
static PyObject *PyCThostFtdcQuoteActionFieldType_get_ClientID(PyObject *self, void *closure) {
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientID, (Py_ssize_t)sizeof(data->ClientID));
    return PyBytes_FromString(data->ClientID);
}

static int PyCThostFtdcQuoteActionFieldType_set_ClientID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteActionField::ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    // memset(data->ClientID, 0, sizeof(data->ClientID));
    // memcpy(data->ClientID, buf, len);
    strncpy(data->ClientID, buf, sizeof(data->ClientID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 业务单元
/// typedef char TThostFtdcBusinessUnitType[21]
static PyObject *PyCThostFtdcQuoteActionFieldType_get_BusinessUnit(PyObject *self, void *closure) {
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BusinessUnit, (Py_ssize_t)sizeof(data->BusinessUnit));
    return PyBytes_FromString(data->BusinessUnit);
}

static int PyCThostFtdcQuoteActionFieldType_set_BusinessUnit(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BusinessUnit Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteActionField::BusinessUnit)) {
        PyErr_SetString(PyExc_ValueError, "BusinessUnit must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
    // memcpy(data->BusinessUnit, buf, len);
    strncpy(data->BusinessUnit, buf, sizeof(data->BusinessUnit));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单操作状态
/// typedef char TThostFtdcOrderActionStatusType
static PyObject *PyCThostFtdcQuoteActionFieldType_get_OrderActionStatus(PyObject *self, void *closure) {
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OrderActionStatus), 1);
}

static int PyCThostFtdcQuoteActionFieldType_set_OrderActionStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderActionStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcQuoteActionField::OrderActionStatus)) {
        PyErr_SetString(PyExc_ValueError, "OrderActionStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    data->OrderActionStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcQuoteActionFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcQuoteActionFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteActionField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 状态信息
/// typedef char TThostFtdcErrorMsgType[81]
static PyObject *PyCThostFtdcQuoteActionFieldType_get_StatusMsg(PyObject *self, void *closure) {
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->StatusMsg, (Py_ssize_t)sizeof(data->StatusMsg));
    return PyBytes_FromString(data->StatusMsg);
}

static int PyCThostFtdcQuoteActionFieldType_set_StatusMsg(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "StatusMsg Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteActionField::StatusMsg)) {
        PyErr_SetString(PyExc_ValueError, "StatusMsg must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    // memset(data->StatusMsg, 0, sizeof(data->StatusMsg));
    // memcpy(data->StatusMsg, buf, len);
    strncpy(data->StatusMsg, buf, sizeof(data->StatusMsg));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcQuoteActionFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcQuoteActionFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteActionField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 营业部编号
/// typedef char TThostFtdcBranchIDType[9]
static PyObject *PyCThostFtdcQuoteActionFieldType_get_BranchID(PyObject *self, void *closure) {
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BranchID, (Py_ssize_t)sizeof(data->BranchID));
    return PyBytes_FromString(data->BranchID);
}

static int PyCThostFtdcQuoteActionFieldType_set_BranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteActionField::BranchID)) {
        PyErr_SetString(PyExc_ValueError, "BranchID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    // memset(data->BranchID, 0, sizeof(data->BranchID));
    // memcpy(data->BranchID, buf, len);
    strncpy(data->BranchID, buf, sizeof(data->BranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcQuoteActionFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcQuoteActionFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteActionField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcQuoteActionFieldType_get_reserve2(PyObject *self, void *closure) {
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve2, (Py_ssize_t)sizeof(data->reserve2));
    return PyBytes_FromString(data->reserve2);
}

static int PyCThostFtdcQuoteActionFieldType_set_reserve2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteActionField::reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    // memset(data->reserve2, 0, sizeof(data->reserve2));
    // memcpy(data->reserve2, buf, len);
    strncpy(data->reserve2, buf, sizeof(data->reserve2));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcQuoteActionFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcQuoteActionFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteActionField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQuoteActionFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcQuoteActionFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteActionField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcQuoteActionFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcQuoteActionFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteActionField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单回显字段
/// typedef char TThostFtdcOrderMemoType[13]
static PyObject *PyCThostFtdcQuoteActionFieldType_get_OrderMemo(PyObject *self, void *closure) {
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderMemo, (Py_ssize_t)sizeof(data->OrderMemo));
    return PyBytes_FromString(data->OrderMemo);
}

static int PyCThostFtdcQuoteActionFieldType_set_OrderMemo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderMemo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteActionField::OrderMemo)) {
        PyErr_SetString(PyExc_ValueError, "OrderMemo must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(self);
    CThostFtdcQuoteActionField *data = &(extra->data);
    // memset(data->OrderMemo, 0, sizeof(data->OrderMemo));
    // memcpy(data->OrderMemo, buf, len);
    strncpy(data->OrderMemo, buf, sizeof(data->OrderMemo));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQuoteActionFieldType_members[] = {
    /// 报价操作引用
    /// typedef int TThostFtdcOrderActionRefType
    {
        .name = "QuoteActionRef",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcQuoteActionFieldData, data.QuoteActionRef),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("报价操作引用")
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
        .offset = offsetof(PyCThostFtdcQuoteActionFieldData, data.RequestID),
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
        .offset = offsetof(PyCThostFtdcQuoteActionFieldData, data.FrontID),
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
        .offset = offsetof(PyCThostFtdcQuoteActionFieldData, data.SessionID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("会话编号")
    },
    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    {
        .name = "InstallID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcQuoteActionFieldData, data.InstallID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("安装编号")
    },
    /// session上请求计数 api自动维护
    /// typedef int TThostFtdcSequenceNo12Type
    {
        .name = "SessionReqSeq",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcQuoteActionFieldData, data.SessionReqSeq),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("session上请求计数 api自动维护")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQuoteActionFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQuoteActionFieldType_get_BrokerID,
    .set = PyCThostFtdcQuoteActionFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQuoteActionFieldType_get_InvestorID,
    .set = PyCThostFtdcQuoteActionFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 报价引用
    /// typedef char TThostFtdcOrderRefType[13]
    {
    .name = "QuoteRef",
    .get = PyCThostFtdcQuoteActionFieldType_get_QuoteRef,
    .set = PyCThostFtdcQuoteActionFieldType_set_QuoteRef,
    .doc = PyDoc_STR("报价引用"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQuoteActionFieldType_get_ExchangeID,
    .set = PyCThostFtdcQuoteActionFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 报价操作编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    {
    .name = "QuoteSysID",
    .get = PyCThostFtdcQuoteActionFieldType_get_QuoteSysID,
    .set = PyCThostFtdcQuoteActionFieldType_set_QuoteSysID,
    .doc = PyDoc_STR("报价操作编号"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionFlagType
    {
    .name = "ActionFlag",
    .get = PyCThostFtdcQuoteActionFieldType_get_ActionFlag,
    .set = PyCThostFtdcQuoteActionFieldType_set_ActionFlag,
    .doc = PyDoc_STR("操作标志"),
    },
    /// 操作日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "ActionDate",
    .get = PyCThostFtdcQuoteActionFieldType_get_ActionDate,
    .set = PyCThostFtdcQuoteActionFieldType_set_ActionDate,
    .doc = PyDoc_STR("操作日期"),
    },
    /// 操作时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "ActionTime",
    .get = PyCThostFtdcQuoteActionFieldType_get_ActionTime,
    .set = PyCThostFtdcQuoteActionFieldType_set_ActionTime,
    .doc = PyDoc_STR("操作时间"),
    },
    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    {
    .name = "TraderID",
    .get = PyCThostFtdcQuoteActionFieldType_get_TraderID,
    .set = PyCThostFtdcQuoteActionFieldType_set_TraderID,
    .doc = PyDoc_STR("交易所交易员代码"),
    },
    /// 本地报价编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    {
    .name = "QuoteLocalID",
    .get = PyCThostFtdcQuoteActionFieldType_get_QuoteLocalID,
    .set = PyCThostFtdcQuoteActionFieldType_set_QuoteLocalID,
    .doc = PyDoc_STR("本地报价编号"),
    },
    /// 操作本地编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    {
    .name = "ActionLocalID",
    .get = PyCThostFtdcQuoteActionFieldType_get_ActionLocalID,
    .set = PyCThostFtdcQuoteActionFieldType_set_ActionLocalID,
    .doc = PyDoc_STR("操作本地编号"),
    },
    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcQuoteActionFieldType_get_ParticipantID,
    .set = PyCThostFtdcQuoteActionFieldType_set_ParticipantID,
    .doc = PyDoc_STR("会员代码"),
    },
    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    {
    .name = "ClientID",
    .get = PyCThostFtdcQuoteActionFieldType_get_ClientID,
    .set = PyCThostFtdcQuoteActionFieldType_set_ClientID,
    .doc = PyDoc_STR("客户代码"),
    },
    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    {
    .name = "BusinessUnit",
    .get = PyCThostFtdcQuoteActionFieldType_get_BusinessUnit,
    .set = PyCThostFtdcQuoteActionFieldType_set_BusinessUnit,
    .doc = PyDoc_STR("业务单元"),
    },
    /// 报单操作状态
    /// typedef char TThostFtdcOrderActionStatusType
    {
    .name = "OrderActionStatus",
    .get = PyCThostFtdcQuoteActionFieldType_get_OrderActionStatus,
    .set = PyCThostFtdcQuoteActionFieldType_set_OrderActionStatus,
    .doc = PyDoc_STR("报单操作状态"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcQuoteActionFieldType_get_UserID,
    .set = PyCThostFtdcQuoteActionFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    {
    .name = "StatusMsg",
    .get = PyCThostFtdcQuoteActionFieldType_get_StatusMsg,
    .set = PyCThostFtdcQuoteActionFieldType_set_StatusMsg,
    .doc = PyDoc_STR("状态信息"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcQuoteActionFieldType_get_reserve1,
    .set = PyCThostFtdcQuoteActionFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    {
    .name = "BranchID",
    .get = PyCThostFtdcQuoteActionFieldType_get_BranchID,
    .set = PyCThostFtdcQuoteActionFieldType_set_BranchID,
    .doc = PyDoc_STR("营业部编号"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcQuoteActionFieldType_get_InvestUnitID,
    .set = PyCThostFtdcQuoteActionFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve2",
    .get = PyCThostFtdcQuoteActionFieldType_get_reserve2,
    .set = PyCThostFtdcQuoteActionFieldType_set_reserve2,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcQuoteActionFieldType_get_MacAddress,
    .set = PyCThostFtdcQuoteActionFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcQuoteActionFieldType_get_InstrumentID,
    .set = PyCThostFtdcQuoteActionFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcQuoteActionFieldType_get_IPAddress,
    .set = PyCThostFtdcQuoteActionFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    /// 报单回显字段
    /// typedef char TThostFtdcOrderMemoType[13]
    {
    .name = "OrderMemo",
    .get = PyCThostFtdcQuoteActionFieldType_get_OrderMemo,
    .set = PyCThostFtdcQuoteActionFieldType_set_OrderMemo,
    .doc = PyDoc_STR("报单回显字段"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQuoteActionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQuoteActionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("报价操作")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQuoteActionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQuoteActionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQuoteActionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQuoteActionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQuoteActionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQuoteActionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("报价操作")},
    {Py_tp_members, PyCThostFtdcQuoteActionFieldType_members},
    {Py_tp_getset, PyCThostFtdcQuoteActionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQuoteActionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQuoteActionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQuoteActionFieldType_spec = {
    .name = "PyCTP.CThostFtdcQuoteActionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQuoteActionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQuoteActionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQuoteActionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQuoteActionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQuoteActionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQuoteActionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQuoteActionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQuoteActionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQuoteActionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQuoteActionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}