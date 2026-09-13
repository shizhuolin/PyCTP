
#include "PyCThostFtdcExecOrderActionField.h"

///执行宣告操作

static int PyCThostFtdcExecOrderActionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "ExecOrderActionRef", "ExecOrderRef", "RequestID", "FrontID", "SessionID", "ExchangeID", "ExecOrderSysID", "ActionFlag", "ActionDate", "ActionTime", "TraderID", "InstallID", "ExecOrderLocalID", "ActionLocalID", "ParticipantID", "ClientID", "BusinessUnit", "OrderActionStatus", "UserID", "ActionType", "StatusMsg", "reserve1", "BranchID", "InvestUnitID", "reserve2", "MacAddress", "InstrumentID", "IPAddress", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcExecOrderActionField_BrokerID = NULL;
    Py_ssize_t CThostFtdcExecOrderActionField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcExecOrderActionField_InvestorID = NULL;
    Py_ssize_t CThostFtdcExecOrderActionField_InvestorID_length = 0;

    /// 执行宣告操作引用
    /// typedef int TThostFtdcOrderActionRefType
    int CThostFtdcExecOrderActionField_ExecOrderActionRef = 0;

    /// 执行宣告引用
    /// typedef char TThostFtdcOrderRefType[13]
    char *CThostFtdcExecOrderActionField_ExecOrderRef = NULL;
    Py_ssize_t CThostFtdcExecOrderActionField_ExecOrderRef_length = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcExecOrderActionField_RequestID = 0;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    int CThostFtdcExecOrderActionField_FrontID = 0;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcExecOrderActionField_SessionID = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcExecOrderActionField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcExecOrderActionField_ExchangeID_length = 0;

    /// 执行宣告操作编号
    /// typedef char TThostFtdcExecOrderSysIDType[21]
    char *CThostFtdcExecOrderActionField_ExecOrderSysID = NULL;
    Py_ssize_t CThostFtdcExecOrderActionField_ExecOrderSysID_length = 0;

    /// 操作标志
    /// typedef char TThostFtdcActionFlagType
    char CThostFtdcExecOrderActionField_ActionFlag = 0;

    /// 操作日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcExecOrderActionField_ActionDate = NULL;
    Py_ssize_t CThostFtdcExecOrderActionField_ActionDate_length = 0;

    /// 操作时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcExecOrderActionField_ActionTime = NULL;
    Py_ssize_t CThostFtdcExecOrderActionField_ActionTime_length = 0;

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    char *CThostFtdcExecOrderActionField_TraderID = NULL;
    Py_ssize_t CThostFtdcExecOrderActionField_TraderID_length = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcExecOrderActionField_InstallID = 0;

    /// 本地执行宣告编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    char *CThostFtdcExecOrderActionField_ExecOrderLocalID = NULL;
    Py_ssize_t CThostFtdcExecOrderActionField_ExecOrderLocalID_length = 0;

    /// 操作本地编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    char *CThostFtdcExecOrderActionField_ActionLocalID = NULL;
    Py_ssize_t CThostFtdcExecOrderActionField_ActionLocalID_length = 0;

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcExecOrderActionField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcExecOrderActionField_ParticipantID_length = 0;

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    char *CThostFtdcExecOrderActionField_ClientID = NULL;
    Py_ssize_t CThostFtdcExecOrderActionField_ClientID_length = 0;

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    char *CThostFtdcExecOrderActionField_BusinessUnit = NULL;
    Py_ssize_t CThostFtdcExecOrderActionField_BusinessUnit_length = 0;

    /// 报单操作状态
    /// typedef char TThostFtdcOrderActionStatusType
    char CThostFtdcExecOrderActionField_OrderActionStatus = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcExecOrderActionField_UserID = NULL;
    Py_ssize_t CThostFtdcExecOrderActionField_UserID_length = 0;

    /// 执行类型
    /// typedef char TThostFtdcActionTypeType
    char CThostFtdcExecOrderActionField_ActionType = 0;

    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    char *CThostFtdcExecOrderActionField_StatusMsg = NULL;
    Py_ssize_t CThostFtdcExecOrderActionField_StatusMsg_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcExecOrderActionField_reserve1 = NULL;
    Py_ssize_t CThostFtdcExecOrderActionField_reserve1_length = 0;

    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    char *CThostFtdcExecOrderActionField_BranchID = NULL;
    Py_ssize_t CThostFtdcExecOrderActionField_BranchID_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcExecOrderActionField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcExecOrderActionField_InvestUnitID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcExecOrderActionField_reserve2 = NULL;
    Py_ssize_t CThostFtdcExecOrderActionField_reserve2_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcExecOrderActionField_MacAddress = NULL;
    Py_ssize_t CThostFtdcExecOrderActionField_MacAddress_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcExecOrderActionField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcExecOrderActionField_InstrumentID_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcExecOrderActionField_IPAddress = NULL;
    Py_ssize_t CThostFtdcExecOrderActionField_IPAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iy#iiiy#y#cy#y#y#iy#y#y#y#y#cy#cy#y#y#y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcExecOrderActionField_BrokerID, &CThostFtdcExecOrderActionField_BrokerID_length
        , &CThostFtdcExecOrderActionField_InvestorID, &CThostFtdcExecOrderActionField_InvestorID_length
        , &CThostFtdcExecOrderActionField_ExecOrderActionRef
        , &CThostFtdcExecOrderActionField_ExecOrderRef, &CThostFtdcExecOrderActionField_ExecOrderRef_length
        , &CThostFtdcExecOrderActionField_RequestID
        , &CThostFtdcExecOrderActionField_FrontID
        , &CThostFtdcExecOrderActionField_SessionID
        , &CThostFtdcExecOrderActionField_ExchangeID, &CThostFtdcExecOrderActionField_ExchangeID_length
        , &CThostFtdcExecOrderActionField_ExecOrderSysID, &CThostFtdcExecOrderActionField_ExecOrderSysID_length
        , &CThostFtdcExecOrderActionField_ActionFlag
        , &CThostFtdcExecOrderActionField_ActionDate, &CThostFtdcExecOrderActionField_ActionDate_length
        , &CThostFtdcExecOrderActionField_ActionTime, &CThostFtdcExecOrderActionField_ActionTime_length
        , &CThostFtdcExecOrderActionField_TraderID, &CThostFtdcExecOrderActionField_TraderID_length
        , &CThostFtdcExecOrderActionField_InstallID
        , &CThostFtdcExecOrderActionField_ExecOrderLocalID, &CThostFtdcExecOrderActionField_ExecOrderLocalID_length
        , &CThostFtdcExecOrderActionField_ActionLocalID, &CThostFtdcExecOrderActionField_ActionLocalID_length
        , &CThostFtdcExecOrderActionField_ParticipantID, &CThostFtdcExecOrderActionField_ParticipantID_length
        , &CThostFtdcExecOrderActionField_ClientID, &CThostFtdcExecOrderActionField_ClientID_length
        , &CThostFtdcExecOrderActionField_BusinessUnit, &CThostFtdcExecOrderActionField_BusinessUnit_length
        , &CThostFtdcExecOrderActionField_OrderActionStatus
        , &CThostFtdcExecOrderActionField_UserID, &CThostFtdcExecOrderActionField_UserID_length
        , &CThostFtdcExecOrderActionField_ActionType
        , &CThostFtdcExecOrderActionField_StatusMsg, &CThostFtdcExecOrderActionField_StatusMsg_length
        , &CThostFtdcExecOrderActionField_reserve1, &CThostFtdcExecOrderActionField_reserve1_length
        , &CThostFtdcExecOrderActionField_BranchID, &CThostFtdcExecOrderActionField_BranchID_length
        , &CThostFtdcExecOrderActionField_InvestUnitID, &CThostFtdcExecOrderActionField_InvestUnitID_length
        , &CThostFtdcExecOrderActionField_reserve2, &CThostFtdcExecOrderActionField_reserve2_length
        , &CThostFtdcExecOrderActionField_MacAddress, &CThostFtdcExecOrderActionField_MacAddress_length
        , &CThostFtdcExecOrderActionField_InstrumentID, &CThostFtdcExecOrderActionField_InstrumentID_length
        , &CThostFtdcExecOrderActionField_IPAddress, &CThostFtdcExecOrderActionField_IPAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcExecOrderActionField_BrokerID != NULL ) {
        if(CThostFtdcExecOrderActionField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcExecOrderActionField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcExecOrderActionField_BrokerID, CThostFtdcExecOrderActionField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcExecOrderActionField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcExecOrderActionField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcExecOrderActionField_InvestorID != NULL ) {
        if(CThostFtdcExecOrderActionField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcExecOrderActionField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcExecOrderActionField_InvestorID, CThostFtdcExecOrderActionField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcExecOrderActionField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcExecOrderActionField_InvestorID = NULL;
    }

    /// 执行宣告操作引用
    /// typedef int TThostFtdcOrderActionRefType
    data->ExecOrderActionRef = CThostFtdcExecOrderActionField_ExecOrderActionRef;

    /// 执行宣告引用
    /// typedef char TThostFtdcOrderRefType[13]
    if( CThostFtdcExecOrderActionField_ExecOrderRef != NULL ) {
        if(CThostFtdcExecOrderActionField_ExecOrderRef_length >= (Py_ssize_t)sizeof(data->ExecOrderRef)) {
            PyErr_Format(PyExc_ValueError, "ExecOrderRef too long: length=%zd (max allowed is 12)", CThostFtdcExecOrderActionField_ExecOrderRef_length);
            return -1;
        }
        // memset(data->ExecOrderRef, 0, sizeof(data->ExecOrderRef));
        // memcpy(data->ExecOrderRef, CThostFtdcExecOrderActionField_ExecOrderRef, CThostFtdcExecOrderActionField_ExecOrderRef_length);
        strncpy(data->ExecOrderRef, CThostFtdcExecOrderActionField_ExecOrderRef, sizeof(data->ExecOrderRef));
        CThostFtdcExecOrderActionField_ExecOrderRef = NULL;
    }

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcExecOrderActionField_RequestID;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    data->FrontID = CThostFtdcExecOrderActionField_FrontID;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcExecOrderActionField_SessionID;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcExecOrderActionField_ExchangeID != NULL ) {
        if(CThostFtdcExecOrderActionField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcExecOrderActionField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcExecOrderActionField_ExchangeID, CThostFtdcExecOrderActionField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcExecOrderActionField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcExecOrderActionField_ExchangeID = NULL;
    }

    /// 执行宣告操作编号
    /// typedef char TThostFtdcExecOrderSysIDType[21]
    if( CThostFtdcExecOrderActionField_ExecOrderSysID != NULL ) {
        if(CThostFtdcExecOrderActionField_ExecOrderSysID_length >= (Py_ssize_t)sizeof(data->ExecOrderSysID)) {
            PyErr_Format(PyExc_ValueError, "ExecOrderSysID too long: length=%zd (max allowed is 20)", CThostFtdcExecOrderActionField_ExecOrderSysID_length);
            return -1;
        }
        // memset(data->ExecOrderSysID, 0, sizeof(data->ExecOrderSysID));
        // memcpy(data->ExecOrderSysID, CThostFtdcExecOrderActionField_ExecOrderSysID, CThostFtdcExecOrderActionField_ExecOrderSysID_length);
        strncpy(data->ExecOrderSysID, CThostFtdcExecOrderActionField_ExecOrderSysID, sizeof(data->ExecOrderSysID));
        CThostFtdcExecOrderActionField_ExecOrderSysID = NULL;
    }

    /// 操作标志
    /// typedef char TThostFtdcActionFlagType
    data->ActionFlag = CThostFtdcExecOrderActionField_ActionFlag;

    /// 操作日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcExecOrderActionField_ActionDate != NULL ) {
        if(CThostFtdcExecOrderActionField_ActionDate_length >= (Py_ssize_t)sizeof(data->ActionDate)) {
            PyErr_Format(PyExc_ValueError, "ActionDate too long: length=%zd (max allowed is 8)", CThostFtdcExecOrderActionField_ActionDate_length);
            return -1;
        }
        // memset(data->ActionDate, 0, sizeof(data->ActionDate));
        // memcpy(data->ActionDate, CThostFtdcExecOrderActionField_ActionDate, CThostFtdcExecOrderActionField_ActionDate_length);
        strncpy(data->ActionDate, CThostFtdcExecOrderActionField_ActionDate, sizeof(data->ActionDate));
        CThostFtdcExecOrderActionField_ActionDate = NULL;
    }

    /// 操作时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcExecOrderActionField_ActionTime != NULL ) {
        if(CThostFtdcExecOrderActionField_ActionTime_length >= (Py_ssize_t)sizeof(data->ActionTime)) {
            PyErr_Format(PyExc_ValueError, "ActionTime too long: length=%zd (max allowed is 8)", CThostFtdcExecOrderActionField_ActionTime_length);
            return -1;
        }
        // memset(data->ActionTime, 0, sizeof(data->ActionTime));
        // memcpy(data->ActionTime, CThostFtdcExecOrderActionField_ActionTime, CThostFtdcExecOrderActionField_ActionTime_length);
        strncpy(data->ActionTime, CThostFtdcExecOrderActionField_ActionTime, sizeof(data->ActionTime));
        CThostFtdcExecOrderActionField_ActionTime = NULL;
    }

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    if( CThostFtdcExecOrderActionField_TraderID != NULL ) {
        if(CThostFtdcExecOrderActionField_TraderID_length >= (Py_ssize_t)sizeof(data->TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is 20)", CThostFtdcExecOrderActionField_TraderID_length);
            return -1;
        }
        // memset(data->TraderID, 0, sizeof(data->TraderID));
        // memcpy(data->TraderID, CThostFtdcExecOrderActionField_TraderID, CThostFtdcExecOrderActionField_TraderID_length);
        strncpy(data->TraderID, CThostFtdcExecOrderActionField_TraderID, sizeof(data->TraderID));
        CThostFtdcExecOrderActionField_TraderID = NULL;
    }

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcExecOrderActionField_InstallID;

    /// 本地执行宣告编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    if( CThostFtdcExecOrderActionField_ExecOrderLocalID != NULL ) {
        if(CThostFtdcExecOrderActionField_ExecOrderLocalID_length >= (Py_ssize_t)sizeof(data->ExecOrderLocalID)) {
            PyErr_Format(PyExc_ValueError, "ExecOrderLocalID too long: length=%zd (max allowed is 12)", CThostFtdcExecOrderActionField_ExecOrderLocalID_length);
            return -1;
        }
        // memset(data->ExecOrderLocalID, 0, sizeof(data->ExecOrderLocalID));
        // memcpy(data->ExecOrderLocalID, CThostFtdcExecOrderActionField_ExecOrderLocalID, CThostFtdcExecOrderActionField_ExecOrderLocalID_length);
        strncpy(data->ExecOrderLocalID, CThostFtdcExecOrderActionField_ExecOrderLocalID, sizeof(data->ExecOrderLocalID));
        CThostFtdcExecOrderActionField_ExecOrderLocalID = NULL;
    }

    /// 操作本地编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    if( CThostFtdcExecOrderActionField_ActionLocalID != NULL ) {
        if(CThostFtdcExecOrderActionField_ActionLocalID_length >= (Py_ssize_t)sizeof(data->ActionLocalID)) {
            PyErr_Format(PyExc_ValueError, "ActionLocalID too long: length=%zd (max allowed is 12)", CThostFtdcExecOrderActionField_ActionLocalID_length);
            return -1;
        }
        // memset(data->ActionLocalID, 0, sizeof(data->ActionLocalID));
        // memcpy(data->ActionLocalID, CThostFtdcExecOrderActionField_ActionLocalID, CThostFtdcExecOrderActionField_ActionLocalID_length);
        strncpy(data->ActionLocalID, CThostFtdcExecOrderActionField_ActionLocalID, sizeof(data->ActionLocalID));
        CThostFtdcExecOrderActionField_ActionLocalID = NULL;
    }

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcExecOrderActionField_ParticipantID != NULL ) {
        if(CThostFtdcExecOrderActionField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcExecOrderActionField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcExecOrderActionField_ParticipantID, CThostFtdcExecOrderActionField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcExecOrderActionField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcExecOrderActionField_ParticipantID = NULL;
    }

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    if( CThostFtdcExecOrderActionField_ClientID != NULL ) {
        if(CThostFtdcExecOrderActionField_ClientID_length >= (Py_ssize_t)sizeof(data->ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is 10)", CThostFtdcExecOrderActionField_ClientID_length);
            return -1;
        }
        // memset(data->ClientID, 0, sizeof(data->ClientID));
        // memcpy(data->ClientID, CThostFtdcExecOrderActionField_ClientID, CThostFtdcExecOrderActionField_ClientID_length);
        strncpy(data->ClientID, CThostFtdcExecOrderActionField_ClientID, sizeof(data->ClientID));
        CThostFtdcExecOrderActionField_ClientID = NULL;
    }

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    if( CThostFtdcExecOrderActionField_BusinessUnit != NULL ) {
        if(CThostFtdcExecOrderActionField_BusinessUnit_length >= (Py_ssize_t)sizeof(data->BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is 20)", CThostFtdcExecOrderActionField_BusinessUnit_length);
            return -1;
        }
        // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
        // memcpy(data->BusinessUnit, CThostFtdcExecOrderActionField_BusinessUnit, CThostFtdcExecOrderActionField_BusinessUnit_length);
        strncpy(data->BusinessUnit, CThostFtdcExecOrderActionField_BusinessUnit, sizeof(data->BusinessUnit));
        CThostFtdcExecOrderActionField_BusinessUnit = NULL;
    }

    /// 报单操作状态
    /// typedef char TThostFtdcOrderActionStatusType
    data->OrderActionStatus = CThostFtdcExecOrderActionField_OrderActionStatus;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcExecOrderActionField_UserID != NULL ) {
        if(CThostFtdcExecOrderActionField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcExecOrderActionField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcExecOrderActionField_UserID, CThostFtdcExecOrderActionField_UserID_length);
        strncpy(data->UserID, CThostFtdcExecOrderActionField_UserID, sizeof(data->UserID));
        CThostFtdcExecOrderActionField_UserID = NULL;
    }

    /// 执行类型
    /// typedef char TThostFtdcActionTypeType
    data->ActionType = CThostFtdcExecOrderActionField_ActionType;

    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    if( CThostFtdcExecOrderActionField_StatusMsg != NULL ) {
        if(CThostFtdcExecOrderActionField_StatusMsg_length >= (Py_ssize_t)sizeof(data->StatusMsg)) {
            PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is 80)", CThostFtdcExecOrderActionField_StatusMsg_length);
            return -1;
        }
        // memset(data->StatusMsg, 0, sizeof(data->StatusMsg));
        // memcpy(data->StatusMsg, CThostFtdcExecOrderActionField_StatusMsg, CThostFtdcExecOrderActionField_StatusMsg_length);
        strncpy(data->StatusMsg, CThostFtdcExecOrderActionField_StatusMsg, sizeof(data->StatusMsg));
        CThostFtdcExecOrderActionField_StatusMsg = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcExecOrderActionField_reserve1 != NULL ) {
        if(CThostFtdcExecOrderActionField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcExecOrderActionField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcExecOrderActionField_reserve1, CThostFtdcExecOrderActionField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcExecOrderActionField_reserve1, sizeof(data->reserve1));
        CThostFtdcExecOrderActionField_reserve1 = NULL;
    }

    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    if( CThostFtdcExecOrderActionField_BranchID != NULL ) {
        if(CThostFtdcExecOrderActionField_BranchID_length >= (Py_ssize_t)sizeof(data->BranchID)) {
            PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is 8)", CThostFtdcExecOrderActionField_BranchID_length);
            return -1;
        }
        // memset(data->BranchID, 0, sizeof(data->BranchID));
        // memcpy(data->BranchID, CThostFtdcExecOrderActionField_BranchID, CThostFtdcExecOrderActionField_BranchID_length);
        strncpy(data->BranchID, CThostFtdcExecOrderActionField_BranchID, sizeof(data->BranchID));
        CThostFtdcExecOrderActionField_BranchID = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcExecOrderActionField_InvestUnitID != NULL ) {
        if(CThostFtdcExecOrderActionField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcExecOrderActionField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcExecOrderActionField_InvestUnitID, CThostFtdcExecOrderActionField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcExecOrderActionField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcExecOrderActionField_InvestUnitID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcExecOrderActionField_reserve2 != NULL ) {
        if(CThostFtdcExecOrderActionField_reserve2_length >= (Py_ssize_t)sizeof(data->reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is 15)", CThostFtdcExecOrderActionField_reserve2_length);
            return -1;
        }
        // memset(data->reserve2, 0, sizeof(data->reserve2));
        // memcpy(data->reserve2, CThostFtdcExecOrderActionField_reserve2, CThostFtdcExecOrderActionField_reserve2_length);
        strncpy(data->reserve2, CThostFtdcExecOrderActionField_reserve2, sizeof(data->reserve2));
        CThostFtdcExecOrderActionField_reserve2 = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcExecOrderActionField_MacAddress != NULL ) {
        if(CThostFtdcExecOrderActionField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcExecOrderActionField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcExecOrderActionField_MacAddress, CThostFtdcExecOrderActionField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcExecOrderActionField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcExecOrderActionField_MacAddress = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcExecOrderActionField_InstrumentID != NULL ) {
        if(CThostFtdcExecOrderActionField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcExecOrderActionField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcExecOrderActionField_InstrumentID, CThostFtdcExecOrderActionField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcExecOrderActionField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcExecOrderActionField_InstrumentID = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcExecOrderActionField_IPAddress != NULL ) {
        if(CThostFtdcExecOrderActionField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcExecOrderActionField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcExecOrderActionField_IPAddress, CThostFtdcExecOrderActionField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcExecOrderActionField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcExecOrderActionField_IPAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcExecOrderActionFieldType_repr(PyObject *self) {

    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:i,s:y,s:i,s:i,s:i,s:y,s:y,s:c,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
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
        , "ActionDate", data->ActionDate//, (Py_ssize_t)sizeof(data->ActionDate)
        , "ActionTime", data->ActionTime//, (Py_ssize_t)sizeof(data->ActionTime)
        , "TraderID", data->TraderID//, (Py_ssize_t)sizeof(data->TraderID)
        , "InstallID", data->InstallID
        , "ExecOrderLocalID", data->ExecOrderLocalID//, (Py_ssize_t)sizeof(data->ExecOrderLocalID)
        , "ActionLocalID", data->ActionLocalID//, (Py_ssize_t)sizeof(data->ActionLocalID)
        , "ParticipantID", data->ParticipantID//, (Py_ssize_t)sizeof(data->ParticipantID)
        , "ClientID", data->ClientID//, (Py_ssize_t)sizeof(data->ClientID)
        , "BusinessUnit", data->BusinessUnit//, (Py_ssize_t)sizeof(data->BusinessUnit)
        , "OrderActionStatus", data->OrderActionStatus
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "ActionType", data->ActionType
        , "StatusMsg", data->StatusMsg//, (Py_ssize_t)sizeof(data->StatusMsg)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "BranchID", data->BranchID//, (Py_ssize_t)sizeof(data->BranchID)
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
        , "reserve2", data->reserve2//, (Py_ssize_t)sizeof(data->reserve2)
        , "MacAddress", data->MacAddress//, (Py_ssize_t)sizeof(data->MacAddress)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "IPAddress", data->IPAddress//, (Py_ssize_t)sizeof(data->IPAddress)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExecOrderActionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExecOrderActionField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcExecOrderActionFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcExecOrderActionFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderActionField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcExecOrderActionFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcExecOrderActionFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderActionField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 执行宣告引用
/// typedef char TThostFtdcOrderRefType[13]
static PyObject *PyCThostFtdcExecOrderActionFieldType_get_ExecOrderRef(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExecOrderRef, (Py_ssize_t)sizeof(data->ExecOrderRef));
    return PyBytes_FromString(data->ExecOrderRef);
}

static int PyCThostFtdcExecOrderActionFieldType_set_ExecOrderRef(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExecOrderRef Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderActionField::ExecOrderRef)) {
        PyErr_SetString(PyExc_ValueError, "ExecOrderRef must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    // memset(data->ExecOrderRef, 0, sizeof(data->ExecOrderRef));
    // memcpy(data->ExecOrderRef, buf, len);
    strncpy(data->ExecOrderRef, buf, sizeof(data->ExecOrderRef));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcExecOrderActionFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcExecOrderActionFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderActionField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 执行宣告操作编号
/// typedef char TThostFtdcExecOrderSysIDType[21]
static PyObject *PyCThostFtdcExecOrderActionFieldType_get_ExecOrderSysID(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExecOrderSysID, (Py_ssize_t)sizeof(data->ExecOrderSysID));
    return PyBytes_FromString(data->ExecOrderSysID);
}

static int PyCThostFtdcExecOrderActionFieldType_set_ExecOrderSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExecOrderSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderActionField::ExecOrderSysID)) {
        PyErr_SetString(PyExc_ValueError, "ExecOrderSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    // memset(data->ExecOrderSysID, 0, sizeof(data->ExecOrderSysID));
    // memcpy(data->ExecOrderSysID, buf, len);
    strncpy(data->ExecOrderSysID, buf, sizeof(data->ExecOrderSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionFlagType
static PyObject *PyCThostFtdcExecOrderActionFieldType_get_ActionFlag(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionFlag), 1);
}

static int PyCThostFtdcExecOrderActionFieldType_set_ActionFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExecOrderActionField::ActionFlag)) {
        PyErr_SetString(PyExc_ValueError, "ActionFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    data->ActionFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcExecOrderActionFieldType_get_ActionDate(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionDate, (Py_ssize_t)sizeof(data->ActionDate));
    return PyBytes_FromString(data->ActionDate);
}

static int PyCThostFtdcExecOrderActionFieldType_set_ActionDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderActionField::ActionDate)) {
        PyErr_SetString(PyExc_ValueError, "ActionDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    // memset(data->ActionDate, 0, sizeof(data->ActionDate));
    // memcpy(data->ActionDate, buf, len);
    strncpy(data->ActionDate, buf, sizeof(data->ActionDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcExecOrderActionFieldType_get_ActionTime(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionTime, (Py_ssize_t)sizeof(data->ActionTime));
    return PyBytes_FromString(data->ActionTime);
}

static int PyCThostFtdcExecOrderActionFieldType_set_ActionTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderActionField::ActionTime)) {
        PyErr_SetString(PyExc_ValueError, "ActionTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    // memset(data->ActionTime, 0, sizeof(data->ActionTime));
    // memcpy(data->ActionTime, buf, len);
    strncpy(data->ActionTime, buf, sizeof(data->ActionTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所交易员代码
/// typedef char TThostFtdcTraderIDType[21]
static PyObject *PyCThostFtdcExecOrderActionFieldType_get_TraderID(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TraderID, (Py_ssize_t)sizeof(data->TraderID));
    return PyBytes_FromString(data->TraderID);
}

static int PyCThostFtdcExecOrderActionFieldType_set_TraderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderActionField::TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    // memset(data->TraderID, 0, sizeof(data->TraderID));
    // memcpy(data->TraderID, buf, len);
    strncpy(data->TraderID, buf, sizeof(data->TraderID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 本地执行宣告编号
/// typedef char TThostFtdcOrderLocalIDType[13]
static PyObject *PyCThostFtdcExecOrderActionFieldType_get_ExecOrderLocalID(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExecOrderLocalID, (Py_ssize_t)sizeof(data->ExecOrderLocalID));
    return PyBytes_FromString(data->ExecOrderLocalID);
}

static int PyCThostFtdcExecOrderActionFieldType_set_ExecOrderLocalID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExecOrderLocalID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderActionField::ExecOrderLocalID)) {
        PyErr_SetString(PyExc_ValueError, "ExecOrderLocalID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    // memset(data->ExecOrderLocalID, 0, sizeof(data->ExecOrderLocalID));
    // memcpy(data->ExecOrderLocalID, buf, len);
    strncpy(data->ExecOrderLocalID, buf, sizeof(data->ExecOrderLocalID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作本地编号
/// typedef char TThostFtdcOrderLocalIDType[13]
static PyObject *PyCThostFtdcExecOrderActionFieldType_get_ActionLocalID(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionLocalID, (Py_ssize_t)sizeof(data->ActionLocalID));
    return PyBytes_FromString(data->ActionLocalID);
}

static int PyCThostFtdcExecOrderActionFieldType_set_ActionLocalID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionLocalID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderActionField::ActionLocalID)) {
        PyErr_SetString(PyExc_ValueError, "ActionLocalID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    // memset(data->ActionLocalID, 0, sizeof(data->ActionLocalID));
    // memcpy(data->ActionLocalID, buf, len);
    strncpy(data->ActionLocalID, buf, sizeof(data->ActionLocalID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 会员代码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcExecOrderActionFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcExecOrderActionFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderActionField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户代码
/// typedef char TThostFtdcClientIDType[11]
static PyObject *PyCThostFtdcExecOrderActionFieldType_get_ClientID(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientID, (Py_ssize_t)sizeof(data->ClientID));
    return PyBytes_FromString(data->ClientID);
}

static int PyCThostFtdcExecOrderActionFieldType_set_ClientID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderActionField::ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    // memset(data->ClientID, 0, sizeof(data->ClientID));
    // memcpy(data->ClientID, buf, len);
    strncpy(data->ClientID, buf, sizeof(data->ClientID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 业务单元
/// typedef char TThostFtdcBusinessUnitType[21]
static PyObject *PyCThostFtdcExecOrderActionFieldType_get_BusinessUnit(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BusinessUnit, (Py_ssize_t)sizeof(data->BusinessUnit));
    return PyBytes_FromString(data->BusinessUnit);
}

static int PyCThostFtdcExecOrderActionFieldType_set_BusinessUnit(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BusinessUnit Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderActionField::BusinessUnit)) {
        PyErr_SetString(PyExc_ValueError, "BusinessUnit must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
    // memcpy(data->BusinessUnit, buf, len);
    strncpy(data->BusinessUnit, buf, sizeof(data->BusinessUnit));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单操作状态
/// typedef char TThostFtdcOrderActionStatusType
static PyObject *PyCThostFtdcExecOrderActionFieldType_get_OrderActionStatus(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OrderActionStatus), 1);
}

static int PyCThostFtdcExecOrderActionFieldType_set_OrderActionStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderActionStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExecOrderActionField::OrderActionStatus)) {
        PyErr_SetString(PyExc_ValueError, "OrderActionStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    data->OrderActionStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcExecOrderActionFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcExecOrderActionFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderActionField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 执行类型
/// typedef char TThostFtdcActionTypeType
static PyObject *PyCThostFtdcExecOrderActionFieldType_get_ActionType(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionType), 1);
}

static int PyCThostFtdcExecOrderActionFieldType_set_ActionType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExecOrderActionField::ActionType)) {
        PyErr_SetString(PyExc_ValueError, "ActionType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    data->ActionType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 状态信息
/// typedef char TThostFtdcErrorMsgType[81]
static PyObject *PyCThostFtdcExecOrderActionFieldType_get_StatusMsg(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->StatusMsg, (Py_ssize_t)sizeof(data->StatusMsg));
    return PyBytes_FromString(data->StatusMsg);
}

static int PyCThostFtdcExecOrderActionFieldType_set_StatusMsg(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "StatusMsg Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderActionField::StatusMsg)) {
        PyErr_SetString(PyExc_ValueError, "StatusMsg must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    // memset(data->StatusMsg, 0, sizeof(data->StatusMsg));
    // memcpy(data->StatusMsg, buf, len);
    strncpy(data->StatusMsg, buf, sizeof(data->StatusMsg));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcExecOrderActionFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcExecOrderActionFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderActionField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 营业部编号
/// typedef char TThostFtdcBranchIDType[9]
static PyObject *PyCThostFtdcExecOrderActionFieldType_get_BranchID(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BranchID, (Py_ssize_t)sizeof(data->BranchID));
    return PyBytes_FromString(data->BranchID);
}

static int PyCThostFtdcExecOrderActionFieldType_set_BranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderActionField::BranchID)) {
        PyErr_SetString(PyExc_ValueError, "BranchID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    // memset(data->BranchID, 0, sizeof(data->BranchID));
    // memcpy(data->BranchID, buf, len);
    strncpy(data->BranchID, buf, sizeof(data->BranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcExecOrderActionFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcExecOrderActionFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderActionField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcExecOrderActionFieldType_get_reserve2(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve2, (Py_ssize_t)sizeof(data->reserve2));
    return PyBytes_FromString(data->reserve2);
}

static int PyCThostFtdcExecOrderActionFieldType_set_reserve2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderActionField::reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    // memset(data->reserve2, 0, sizeof(data->reserve2));
    // memcpy(data->reserve2, buf, len);
    strncpy(data->reserve2, buf, sizeof(data->reserve2));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcExecOrderActionFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcExecOrderActionFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderActionField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcExecOrderActionFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcExecOrderActionFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderActionField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcExecOrderActionFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcExecOrderActionFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderActionField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(self);
    CThostFtdcExecOrderActionField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcExecOrderActionFieldType_members[] = {
    /// 执行宣告操作引用
    /// typedef int TThostFtdcOrderActionRefType
    {
        .name = "ExecOrderActionRef",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExecOrderActionFieldData, data.ExecOrderActionRef),
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
        .offset = offsetof(PyCThostFtdcExecOrderActionFieldData, data.RequestID),
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
        .offset = offsetof(PyCThostFtdcExecOrderActionFieldData, data.FrontID),
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
        .offset = offsetof(PyCThostFtdcExecOrderActionFieldData, data.SessionID),
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
        .offset = offsetof(PyCThostFtdcExecOrderActionFieldData, data.InstallID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("安装编号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcExecOrderActionFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcExecOrderActionFieldType_get_BrokerID,
    .set = PyCThostFtdcExecOrderActionFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcExecOrderActionFieldType_get_InvestorID,
    .set = PyCThostFtdcExecOrderActionFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 执行宣告引用
    /// typedef char TThostFtdcOrderRefType[13]
    {
    .name = "ExecOrderRef",
    .get = PyCThostFtdcExecOrderActionFieldType_get_ExecOrderRef,
    .set = PyCThostFtdcExecOrderActionFieldType_set_ExecOrderRef,
    .doc = PyDoc_STR("执行宣告引用"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcExecOrderActionFieldType_get_ExchangeID,
    .set = PyCThostFtdcExecOrderActionFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 执行宣告操作编号
    /// typedef char TThostFtdcExecOrderSysIDType[21]
    {
    .name = "ExecOrderSysID",
    .get = PyCThostFtdcExecOrderActionFieldType_get_ExecOrderSysID,
    .set = PyCThostFtdcExecOrderActionFieldType_set_ExecOrderSysID,
    .doc = PyDoc_STR("执行宣告操作编号"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionFlagType
    {
    .name = "ActionFlag",
    .get = PyCThostFtdcExecOrderActionFieldType_get_ActionFlag,
    .set = PyCThostFtdcExecOrderActionFieldType_set_ActionFlag,
    .doc = PyDoc_STR("操作标志"),
    },
    /// 操作日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "ActionDate",
    .get = PyCThostFtdcExecOrderActionFieldType_get_ActionDate,
    .set = PyCThostFtdcExecOrderActionFieldType_set_ActionDate,
    .doc = PyDoc_STR("操作日期"),
    },
    /// 操作时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "ActionTime",
    .get = PyCThostFtdcExecOrderActionFieldType_get_ActionTime,
    .set = PyCThostFtdcExecOrderActionFieldType_set_ActionTime,
    .doc = PyDoc_STR("操作时间"),
    },
    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    {
    .name = "TraderID",
    .get = PyCThostFtdcExecOrderActionFieldType_get_TraderID,
    .set = PyCThostFtdcExecOrderActionFieldType_set_TraderID,
    .doc = PyDoc_STR("交易所交易员代码"),
    },
    /// 本地执行宣告编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    {
    .name = "ExecOrderLocalID",
    .get = PyCThostFtdcExecOrderActionFieldType_get_ExecOrderLocalID,
    .set = PyCThostFtdcExecOrderActionFieldType_set_ExecOrderLocalID,
    .doc = PyDoc_STR("本地执行宣告编号"),
    },
    /// 操作本地编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    {
    .name = "ActionLocalID",
    .get = PyCThostFtdcExecOrderActionFieldType_get_ActionLocalID,
    .set = PyCThostFtdcExecOrderActionFieldType_set_ActionLocalID,
    .doc = PyDoc_STR("操作本地编号"),
    },
    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcExecOrderActionFieldType_get_ParticipantID,
    .set = PyCThostFtdcExecOrderActionFieldType_set_ParticipantID,
    .doc = PyDoc_STR("会员代码"),
    },
    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    {
    .name = "ClientID",
    .get = PyCThostFtdcExecOrderActionFieldType_get_ClientID,
    .set = PyCThostFtdcExecOrderActionFieldType_set_ClientID,
    .doc = PyDoc_STR("客户代码"),
    },
    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    {
    .name = "BusinessUnit",
    .get = PyCThostFtdcExecOrderActionFieldType_get_BusinessUnit,
    .set = PyCThostFtdcExecOrderActionFieldType_set_BusinessUnit,
    .doc = PyDoc_STR("业务单元"),
    },
    /// 报单操作状态
    /// typedef char TThostFtdcOrderActionStatusType
    {
    .name = "OrderActionStatus",
    .get = PyCThostFtdcExecOrderActionFieldType_get_OrderActionStatus,
    .set = PyCThostFtdcExecOrderActionFieldType_set_OrderActionStatus,
    .doc = PyDoc_STR("报单操作状态"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcExecOrderActionFieldType_get_UserID,
    .set = PyCThostFtdcExecOrderActionFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 执行类型
    /// typedef char TThostFtdcActionTypeType
    {
    .name = "ActionType",
    .get = PyCThostFtdcExecOrderActionFieldType_get_ActionType,
    .set = PyCThostFtdcExecOrderActionFieldType_set_ActionType,
    .doc = PyDoc_STR("执行类型"),
    },
    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    {
    .name = "StatusMsg",
    .get = PyCThostFtdcExecOrderActionFieldType_get_StatusMsg,
    .set = PyCThostFtdcExecOrderActionFieldType_set_StatusMsg,
    .doc = PyDoc_STR("状态信息"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcExecOrderActionFieldType_get_reserve1,
    .set = PyCThostFtdcExecOrderActionFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    {
    .name = "BranchID",
    .get = PyCThostFtdcExecOrderActionFieldType_get_BranchID,
    .set = PyCThostFtdcExecOrderActionFieldType_set_BranchID,
    .doc = PyDoc_STR("营业部编号"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcExecOrderActionFieldType_get_InvestUnitID,
    .set = PyCThostFtdcExecOrderActionFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve2",
    .get = PyCThostFtdcExecOrderActionFieldType_get_reserve2,
    .set = PyCThostFtdcExecOrderActionFieldType_set_reserve2,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcExecOrderActionFieldType_get_MacAddress,
    .set = PyCThostFtdcExecOrderActionFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcExecOrderActionFieldType_get_InstrumentID,
    .set = PyCThostFtdcExecOrderActionFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcExecOrderActionFieldType_get_IPAddress,
    .set = PyCThostFtdcExecOrderActionFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcExecOrderActionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcExecOrderActionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("执行宣告操作")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcExecOrderActionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcExecOrderActionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcExecOrderActionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcExecOrderActionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcExecOrderActionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcExecOrderActionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("执行宣告操作")},
    {Py_tp_members, PyCThostFtdcExecOrderActionFieldType_members},
    {Py_tp_getset, PyCThostFtdcExecOrderActionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcExecOrderActionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcExecOrderActionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcExecOrderActionFieldType_spec = {
    .name = "PyCTP.CThostFtdcExecOrderActionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcExecOrderActionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcExecOrderActionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcExecOrderActionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcExecOrderActionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcExecOrderActionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcExecOrderActionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcExecOrderActionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcExecOrderActionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcExecOrderActionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExecOrderActionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}