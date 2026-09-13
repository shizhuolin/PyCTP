
#include "PyCThostFtdcOptionSelfCloseActionField.h"

///期权自对冲操作

static int PyCThostFtdcOptionSelfCloseActionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "OptionSelfCloseActionRef", "OptionSelfCloseRef", "RequestID", "FrontID", "SessionID", "ExchangeID", "OptionSelfCloseSysID", "ActionFlag", "ActionDate", "ActionTime", "TraderID", "InstallID", "OptionSelfCloseLocalID", "ActionLocalID", "ParticipantID", "ClientID", "BusinessUnit", "OrderActionStatus", "UserID", "StatusMsg", "reserve1", "BranchID", "InvestUnitID", "reserve2", "MacAddress", "InstrumentID", "IPAddress", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcOptionSelfCloseActionField_BrokerID = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseActionField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcOptionSelfCloseActionField_InvestorID = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseActionField_InvestorID_length = 0;

    /// 期权自对冲操作引用
    /// typedef int TThostFtdcOrderActionRefType
    int CThostFtdcOptionSelfCloseActionField_OptionSelfCloseActionRef = 0;

    /// 期权自对冲引用
    /// typedef char TThostFtdcOrderRefType[13]
    char *CThostFtdcOptionSelfCloseActionField_OptionSelfCloseRef = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseActionField_OptionSelfCloseRef_length = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcOptionSelfCloseActionField_RequestID = 0;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    int CThostFtdcOptionSelfCloseActionField_FrontID = 0;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcOptionSelfCloseActionField_SessionID = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcOptionSelfCloseActionField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseActionField_ExchangeID_length = 0;

    /// 期权自对冲操作编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    char *CThostFtdcOptionSelfCloseActionField_OptionSelfCloseSysID = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseActionField_OptionSelfCloseSysID_length = 0;

    /// 操作标志
    /// typedef char TThostFtdcActionFlagType
    char CThostFtdcOptionSelfCloseActionField_ActionFlag = 0;

    /// 操作日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcOptionSelfCloseActionField_ActionDate = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseActionField_ActionDate_length = 0;

    /// 操作时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcOptionSelfCloseActionField_ActionTime = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseActionField_ActionTime_length = 0;

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    char *CThostFtdcOptionSelfCloseActionField_TraderID = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseActionField_TraderID_length = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcOptionSelfCloseActionField_InstallID = 0;

    /// 本地期权自对冲编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    char *CThostFtdcOptionSelfCloseActionField_OptionSelfCloseLocalID = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseActionField_OptionSelfCloseLocalID_length = 0;

    /// 操作本地编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    char *CThostFtdcOptionSelfCloseActionField_ActionLocalID = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseActionField_ActionLocalID_length = 0;

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcOptionSelfCloseActionField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseActionField_ParticipantID_length = 0;

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    char *CThostFtdcOptionSelfCloseActionField_ClientID = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseActionField_ClientID_length = 0;

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    char *CThostFtdcOptionSelfCloseActionField_BusinessUnit = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseActionField_BusinessUnit_length = 0;

    /// 报单操作状态
    /// typedef char TThostFtdcOrderActionStatusType
    char CThostFtdcOptionSelfCloseActionField_OrderActionStatus = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcOptionSelfCloseActionField_UserID = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseActionField_UserID_length = 0;

    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    char *CThostFtdcOptionSelfCloseActionField_StatusMsg = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseActionField_StatusMsg_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcOptionSelfCloseActionField_reserve1 = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseActionField_reserve1_length = 0;

    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    char *CThostFtdcOptionSelfCloseActionField_BranchID = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseActionField_BranchID_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcOptionSelfCloseActionField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseActionField_InvestUnitID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcOptionSelfCloseActionField_reserve2 = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseActionField_reserve2_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcOptionSelfCloseActionField_MacAddress = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseActionField_MacAddress_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcOptionSelfCloseActionField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseActionField_InstrumentID_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcOptionSelfCloseActionField_IPAddress = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseActionField_IPAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iy#iiiy#y#cy#y#y#iy#y#y#y#y#cy#y#y#y#y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcOptionSelfCloseActionField_BrokerID, &CThostFtdcOptionSelfCloseActionField_BrokerID_length
        , &CThostFtdcOptionSelfCloseActionField_InvestorID, &CThostFtdcOptionSelfCloseActionField_InvestorID_length
        , &CThostFtdcOptionSelfCloseActionField_OptionSelfCloseActionRef
        , &CThostFtdcOptionSelfCloseActionField_OptionSelfCloseRef, &CThostFtdcOptionSelfCloseActionField_OptionSelfCloseRef_length
        , &CThostFtdcOptionSelfCloseActionField_RequestID
        , &CThostFtdcOptionSelfCloseActionField_FrontID
        , &CThostFtdcOptionSelfCloseActionField_SessionID
        , &CThostFtdcOptionSelfCloseActionField_ExchangeID, &CThostFtdcOptionSelfCloseActionField_ExchangeID_length
        , &CThostFtdcOptionSelfCloseActionField_OptionSelfCloseSysID, &CThostFtdcOptionSelfCloseActionField_OptionSelfCloseSysID_length
        , &CThostFtdcOptionSelfCloseActionField_ActionFlag
        , &CThostFtdcOptionSelfCloseActionField_ActionDate, &CThostFtdcOptionSelfCloseActionField_ActionDate_length
        , &CThostFtdcOptionSelfCloseActionField_ActionTime, &CThostFtdcOptionSelfCloseActionField_ActionTime_length
        , &CThostFtdcOptionSelfCloseActionField_TraderID, &CThostFtdcOptionSelfCloseActionField_TraderID_length
        , &CThostFtdcOptionSelfCloseActionField_InstallID
        , &CThostFtdcOptionSelfCloseActionField_OptionSelfCloseLocalID, &CThostFtdcOptionSelfCloseActionField_OptionSelfCloseLocalID_length
        , &CThostFtdcOptionSelfCloseActionField_ActionLocalID, &CThostFtdcOptionSelfCloseActionField_ActionLocalID_length
        , &CThostFtdcOptionSelfCloseActionField_ParticipantID, &CThostFtdcOptionSelfCloseActionField_ParticipantID_length
        , &CThostFtdcOptionSelfCloseActionField_ClientID, &CThostFtdcOptionSelfCloseActionField_ClientID_length
        , &CThostFtdcOptionSelfCloseActionField_BusinessUnit, &CThostFtdcOptionSelfCloseActionField_BusinessUnit_length
        , &CThostFtdcOptionSelfCloseActionField_OrderActionStatus
        , &CThostFtdcOptionSelfCloseActionField_UserID, &CThostFtdcOptionSelfCloseActionField_UserID_length
        , &CThostFtdcOptionSelfCloseActionField_StatusMsg, &CThostFtdcOptionSelfCloseActionField_StatusMsg_length
        , &CThostFtdcOptionSelfCloseActionField_reserve1, &CThostFtdcOptionSelfCloseActionField_reserve1_length
        , &CThostFtdcOptionSelfCloseActionField_BranchID, &CThostFtdcOptionSelfCloseActionField_BranchID_length
        , &CThostFtdcOptionSelfCloseActionField_InvestUnitID, &CThostFtdcOptionSelfCloseActionField_InvestUnitID_length
        , &CThostFtdcOptionSelfCloseActionField_reserve2, &CThostFtdcOptionSelfCloseActionField_reserve2_length
        , &CThostFtdcOptionSelfCloseActionField_MacAddress, &CThostFtdcOptionSelfCloseActionField_MacAddress_length
        , &CThostFtdcOptionSelfCloseActionField_InstrumentID, &CThostFtdcOptionSelfCloseActionField_InstrumentID_length
        , &CThostFtdcOptionSelfCloseActionField_IPAddress, &CThostFtdcOptionSelfCloseActionField_IPAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcOptionSelfCloseActionField_BrokerID != NULL ) {
        if(CThostFtdcOptionSelfCloseActionField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcOptionSelfCloseActionField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcOptionSelfCloseActionField_BrokerID, CThostFtdcOptionSelfCloseActionField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcOptionSelfCloseActionField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcOptionSelfCloseActionField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcOptionSelfCloseActionField_InvestorID != NULL ) {
        if(CThostFtdcOptionSelfCloseActionField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcOptionSelfCloseActionField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcOptionSelfCloseActionField_InvestorID, CThostFtdcOptionSelfCloseActionField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcOptionSelfCloseActionField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcOptionSelfCloseActionField_InvestorID = NULL;
    }

    /// 期权自对冲操作引用
    /// typedef int TThostFtdcOrderActionRefType
    data->OptionSelfCloseActionRef = CThostFtdcOptionSelfCloseActionField_OptionSelfCloseActionRef;

    /// 期权自对冲引用
    /// typedef char TThostFtdcOrderRefType[13]
    if( CThostFtdcOptionSelfCloseActionField_OptionSelfCloseRef != NULL ) {
        if(CThostFtdcOptionSelfCloseActionField_OptionSelfCloseRef_length >= (Py_ssize_t)sizeof(data->OptionSelfCloseRef)) {
            PyErr_Format(PyExc_ValueError, "OptionSelfCloseRef too long: length=%zd (max allowed is 12)", CThostFtdcOptionSelfCloseActionField_OptionSelfCloseRef_length);
            return -1;
        }
        // memset(data->OptionSelfCloseRef, 0, sizeof(data->OptionSelfCloseRef));
        // memcpy(data->OptionSelfCloseRef, CThostFtdcOptionSelfCloseActionField_OptionSelfCloseRef, CThostFtdcOptionSelfCloseActionField_OptionSelfCloseRef_length);
        strncpy(data->OptionSelfCloseRef, CThostFtdcOptionSelfCloseActionField_OptionSelfCloseRef, sizeof(data->OptionSelfCloseRef));
        CThostFtdcOptionSelfCloseActionField_OptionSelfCloseRef = NULL;
    }

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcOptionSelfCloseActionField_RequestID;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    data->FrontID = CThostFtdcOptionSelfCloseActionField_FrontID;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcOptionSelfCloseActionField_SessionID;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcOptionSelfCloseActionField_ExchangeID != NULL ) {
        if(CThostFtdcOptionSelfCloseActionField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcOptionSelfCloseActionField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcOptionSelfCloseActionField_ExchangeID, CThostFtdcOptionSelfCloseActionField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcOptionSelfCloseActionField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcOptionSelfCloseActionField_ExchangeID = NULL;
    }

    /// 期权自对冲操作编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    if( CThostFtdcOptionSelfCloseActionField_OptionSelfCloseSysID != NULL ) {
        if(CThostFtdcOptionSelfCloseActionField_OptionSelfCloseSysID_length >= (Py_ssize_t)sizeof(data->OptionSelfCloseSysID)) {
            PyErr_Format(PyExc_ValueError, "OptionSelfCloseSysID too long: length=%zd (max allowed is 20)", CThostFtdcOptionSelfCloseActionField_OptionSelfCloseSysID_length);
            return -1;
        }
        // memset(data->OptionSelfCloseSysID, 0, sizeof(data->OptionSelfCloseSysID));
        // memcpy(data->OptionSelfCloseSysID, CThostFtdcOptionSelfCloseActionField_OptionSelfCloseSysID, CThostFtdcOptionSelfCloseActionField_OptionSelfCloseSysID_length);
        strncpy(data->OptionSelfCloseSysID, CThostFtdcOptionSelfCloseActionField_OptionSelfCloseSysID, sizeof(data->OptionSelfCloseSysID));
        CThostFtdcOptionSelfCloseActionField_OptionSelfCloseSysID = NULL;
    }

    /// 操作标志
    /// typedef char TThostFtdcActionFlagType
    data->ActionFlag = CThostFtdcOptionSelfCloseActionField_ActionFlag;

    /// 操作日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcOptionSelfCloseActionField_ActionDate != NULL ) {
        if(CThostFtdcOptionSelfCloseActionField_ActionDate_length >= (Py_ssize_t)sizeof(data->ActionDate)) {
            PyErr_Format(PyExc_ValueError, "ActionDate too long: length=%zd (max allowed is 8)", CThostFtdcOptionSelfCloseActionField_ActionDate_length);
            return -1;
        }
        // memset(data->ActionDate, 0, sizeof(data->ActionDate));
        // memcpy(data->ActionDate, CThostFtdcOptionSelfCloseActionField_ActionDate, CThostFtdcOptionSelfCloseActionField_ActionDate_length);
        strncpy(data->ActionDate, CThostFtdcOptionSelfCloseActionField_ActionDate, sizeof(data->ActionDate));
        CThostFtdcOptionSelfCloseActionField_ActionDate = NULL;
    }

    /// 操作时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcOptionSelfCloseActionField_ActionTime != NULL ) {
        if(CThostFtdcOptionSelfCloseActionField_ActionTime_length >= (Py_ssize_t)sizeof(data->ActionTime)) {
            PyErr_Format(PyExc_ValueError, "ActionTime too long: length=%zd (max allowed is 8)", CThostFtdcOptionSelfCloseActionField_ActionTime_length);
            return -1;
        }
        // memset(data->ActionTime, 0, sizeof(data->ActionTime));
        // memcpy(data->ActionTime, CThostFtdcOptionSelfCloseActionField_ActionTime, CThostFtdcOptionSelfCloseActionField_ActionTime_length);
        strncpy(data->ActionTime, CThostFtdcOptionSelfCloseActionField_ActionTime, sizeof(data->ActionTime));
        CThostFtdcOptionSelfCloseActionField_ActionTime = NULL;
    }

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    if( CThostFtdcOptionSelfCloseActionField_TraderID != NULL ) {
        if(CThostFtdcOptionSelfCloseActionField_TraderID_length >= (Py_ssize_t)sizeof(data->TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is 20)", CThostFtdcOptionSelfCloseActionField_TraderID_length);
            return -1;
        }
        // memset(data->TraderID, 0, sizeof(data->TraderID));
        // memcpy(data->TraderID, CThostFtdcOptionSelfCloseActionField_TraderID, CThostFtdcOptionSelfCloseActionField_TraderID_length);
        strncpy(data->TraderID, CThostFtdcOptionSelfCloseActionField_TraderID, sizeof(data->TraderID));
        CThostFtdcOptionSelfCloseActionField_TraderID = NULL;
    }

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcOptionSelfCloseActionField_InstallID;

    /// 本地期权自对冲编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    if( CThostFtdcOptionSelfCloseActionField_OptionSelfCloseLocalID != NULL ) {
        if(CThostFtdcOptionSelfCloseActionField_OptionSelfCloseLocalID_length >= (Py_ssize_t)sizeof(data->OptionSelfCloseLocalID)) {
            PyErr_Format(PyExc_ValueError, "OptionSelfCloseLocalID too long: length=%zd (max allowed is 12)", CThostFtdcOptionSelfCloseActionField_OptionSelfCloseLocalID_length);
            return -1;
        }
        // memset(data->OptionSelfCloseLocalID, 0, sizeof(data->OptionSelfCloseLocalID));
        // memcpy(data->OptionSelfCloseLocalID, CThostFtdcOptionSelfCloseActionField_OptionSelfCloseLocalID, CThostFtdcOptionSelfCloseActionField_OptionSelfCloseLocalID_length);
        strncpy(data->OptionSelfCloseLocalID, CThostFtdcOptionSelfCloseActionField_OptionSelfCloseLocalID, sizeof(data->OptionSelfCloseLocalID));
        CThostFtdcOptionSelfCloseActionField_OptionSelfCloseLocalID = NULL;
    }

    /// 操作本地编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    if( CThostFtdcOptionSelfCloseActionField_ActionLocalID != NULL ) {
        if(CThostFtdcOptionSelfCloseActionField_ActionLocalID_length >= (Py_ssize_t)sizeof(data->ActionLocalID)) {
            PyErr_Format(PyExc_ValueError, "ActionLocalID too long: length=%zd (max allowed is 12)", CThostFtdcOptionSelfCloseActionField_ActionLocalID_length);
            return -1;
        }
        // memset(data->ActionLocalID, 0, sizeof(data->ActionLocalID));
        // memcpy(data->ActionLocalID, CThostFtdcOptionSelfCloseActionField_ActionLocalID, CThostFtdcOptionSelfCloseActionField_ActionLocalID_length);
        strncpy(data->ActionLocalID, CThostFtdcOptionSelfCloseActionField_ActionLocalID, sizeof(data->ActionLocalID));
        CThostFtdcOptionSelfCloseActionField_ActionLocalID = NULL;
    }

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcOptionSelfCloseActionField_ParticipantID != NULL ) {
        if(CThostFtdcOptionSelfCloseActionField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcOptionSelfCloseActionField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcOptionSelfCloseActionField_ParticipantID, CThostFtdcOptionSelfCloseActionField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcOptionSelfCloseActionField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcOptionSelfCloseActionField_ParticipantID = NULL;
    }

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    if( CThostFtdcOptionSelfCloseActionField_ClientID != NULL ) {
        if(CThostFtdcOptionSelfCloseActionField_ClientID_length >= (Py_ssize_t)sizeof(data->ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is 10)", CThostFtdcOptionSelfCloseActionField_ClientID_length);
            return -1;
        }
        // memset(data->ClientID, 0, sizeof(data->ClientID));
        // memcpy(data->ClientID, CThostFtdcOptionSelfCloseActionField_ClientID, CThostFtdcOptionSelfCloseActionField_ClientID_length);
        strncpy(data->ClientID, CThostFtdcOptionSelfCloseActionField_ClientID, sizeof(data->ClientID));
        CThostFtdcOptionSelfCloseActionField_ClientID = NULL;
    }

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    if( CThostFtdcOptionSelfCloseActionField_BusinessUnit != NULL ) {
        if(CThostFtdcOptionSelfCloseActionField_BusinessUnit_length >= (Py_ssize_t)sizeof(data->BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is 20)", CThostFtdcOptionSelfCloseActionField_BusinessUnit_length);
            return -1;
        }
        // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
        // memcpy(data->BusinessUnit, CThostFtdcOptionSelfCloseActionField_BusinessUnit, CThostFtdcOptionSelfCloseActionField_BusinessUnit_length);
        strncpy(data->BusinessUnit, CThostFtdcOptionSelfCloseActionField_BusinessUnit, sizeof(data->BusinessUnit));
        CThostFtdcOptionSelfCloseActionField_BusinessUnit = NULL;
    }

    /// 报单操作状态
    /// typedef char TThostFtdcOrderActionStatusType
    data->OrderActionStatus = CThostFtdcOptionSelfCloseActionField_OrderActionStatus;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcOptionSelfCloseActionField_UserID != NULL ) {
        if(CThostFtdcOptionSelfCloseActionField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcOptionSelfCloseActionField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcOptionSelfCloseActionField_UserID, CThostFtdcOptionSelfCloseActionField_UserID_length);
        strncpy(data->UserID, CThostFtdcOptionSelfCloseActionField_UserID, sizeof(data->UserID));
        CThostFtdcOptionSelfCloseActionField_UserID = NULL;
    }

    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    if( CThostFtdcOptionSelfCloseActionField_StatusMsg != NULL ) {
        if(CThostFtdcOptionSelfCloseActionField_StatusMsg_length >= (Py_ssize_t)sizeof(data->StatusMsg)) {
            PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is 80)", CThostFtdcOptionSelfCloseActionField_StatusMsg_length);
            return -1;
        }
        // memset(data->StatusMsg, 0, sizeof(data->StatusMsg));
        // memcpy(data->StatusMsg, CThostFtdcOptionSelfCloseActionField_StatusMsg, CThostFtdcOptionSelfCloseActionField_StatusMsg_length);
        strncpy(data->StatusMsg, CThostFtdcOptionSelfCloseActionField_StatusMsg, sizeof(data->StatusMsg));
        CThostFtdcOptionSelfCloseActionField_StatusMsg = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcOptionSelfCloseActionField_reserve1 != NULL ) {
        if(CThostFtdcOptionSelfCloseActionField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcOptionSelfCloseActionField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcOptionSelfCloseActionField_reserve1, CThostFtdcOptionSelfCloseActionField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcOptionSelfCloseActionField_reserve1, sizeof(data->reserve1));
        CThostFtdcOptionSelfCloseActionField_reserve1 = NULL;
    }

    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    if( CThostFtdcOptionSelfCloseActionField_BranchID != NULL ) {
        if(CThostFtdcOptionSelfCloseActionField_BranchID_length >= (Py_ssize_t)sizeof(data->BranchID)) {
            PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is 8)", CThostFtdcOptionSelfCloseActionField_BranchID_length);
            return -1;
        }
        // memset(data->BranchID, 0, sizeof(data->BranchID));
        // memcpy(data->BranchID, CThostFtdcOptionSelfCloseActionField_BranchID, CThostFtdcOptionSelfCloseActionField_BranchID_length);
        strncpy(data->BranchID, CThostFtdcOptionSelfCloseActionField_BranchID, sizeof(data->BranchID));
        CThostFtdcOptionSelfCloseActionField_BranchID = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcOptionSelfCloseActionField_InvestUnitID != NULL ) {
        if(CThostFtdcOptionSelfCloseActionField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcOptionSelfCloseActionField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcOptionSelfCloseActionField_InvestUnitID, CThostFtdcOptionSelfCloseActionField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcOptionSelfCloseActionField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcOptionSelfCloseActionField_InvestUnitID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcOptionSelfCloseActionField_reserve2 != NULL ) {
        if(CThostFtdcOptionSelfCloseActionField_reserve2_length >= (Py_ssize_t)sizeof(data->reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is 15)", CThostFtdcOptionSelfCloseActionField_reserve2_length);
            return -1;
        }
        // memset(data->reserve2, 0, sizeof(data->reserve2));
        // memcpy(data->reserve2, CThostFtdcOptionSelfCloseActionField_reserve2, CThostFtdcOptionSelfCloseActionField_reserve2_length);
        strncpy(data->reserve2, CThostFtdcOptionSelfCloseActionField_reserve2, sizeof(data->reserve2));
        CThostFtdcOptionSelfCloseActionField_reserve2 = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcOptionSelfCloseActionField_MacAddress != NULL ) {
        if(CThostFtdcOptionSelfCloseActionField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcOptionSelfCloseActionField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcOptionSelfCloseActionField_MacAddress, CThostFtdcOptionSelfCloseActionField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcOptionSelfCloseActionField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcOptionSelfCloseActionField_MacAddress = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcOptionSelfCloseActionField_InstrumentID != NULL ) {
        if(CThostFtdcOptionSelfCloseActionField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcOptionSelfCloseActionField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcOptionSelfCloseActionField_InstrumentID, CThostFtdcOptionSelfCloseActionField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcOptionSelfCloseActionField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcOptionSelfCloseActionField_InstrumentID = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcOptionSelfCloseActionField_IPAddress != NULL ) {
        if(CThostFtdcOptionSelfCloseActionField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcOptionSelfCloseActionField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcOptionSelfCloseActionField_IPAddress, CThostFtdcOptionSelfCloseActionField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcOptionSelfCloseActionField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcOptionSelfCloseActionField_IPAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcOptionSelfCloseActionFieldType_repr(PyObject *self) {

    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:i,s:y,s:i,s:i,s:i,s:y,s:y,s:c,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "OptionSelfCloseActionRef", data->OptionSelfCloseActionRef
        , "OptionSelfCloseRef", data->OptionSelfCloseRef//, (Py_ssize_t)sizeof(data->OptionSelfCloseRef)
        , "RequestID", data->RequestID
        , "FrontID", data->FrontID
        , "SessionID", data->SessionID
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "OptionSelfCloseSysID", data->OptionSelfCloseSysID//, (Py_ssize_t)sizeof(data->OptionSelfCloseSysID)
        , "ActionFlag", data->ActionFlag
        , "ActionDate", data->ActionDate//, (Py_ssize_t)sizeof(data->ActionDate)
        , "ActionTime", data->ActionTime//, (Py_ssize_t)sizeof(data->ActionTime)
        , "TraderID", data->TraderID//, (Py_ssize_t)sizeof(data->TraderID)
        , "InstallID", data->InstallID
        , "OptionSelfCloseLocalID", data->OptionSelfCloseLocalID//, (Py_ssize_t)sizeof(data->OptionSelfCloseLocalID)
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
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcOptionSelfCloseActionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcOptionSelfCloseActionField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcOptionSelfCloseActionFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcOptionSelfCloseActionFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseActionField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcOptionSelfCloseActionFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcOptionSelfCloseActionFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseActionField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期权自对冲引用
/// typedef char TThostFtdcOrderRefType[13]
static PyObject *PyCThostFtdcOptionSelfCloseActionFieldType_get_OptionSelfCloseRef(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OptionSelfCloseRef, (Py_ssize_t)sizeof(data->OptionSelfCloseRef));
    return PyBytes_FromString(data->OptionSelfCloseRef);
}

static int PyCThostFtdcOptionSelfCloseActionFieldType_set_OptionSelfCloseRef(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OptionSelfCloseRef Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseActionField::OptionSelfCloseRef)) {
        PyErr_SetString(PyExc_ValueError, "OptionSelfCloseRef must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->OptionSelfCloseRef, 0, sizeof(data->OptionSelfCloseRef));
    // memcpy(data->OptionSelfCloseRef, buf, len);
    strncpy(data->OptionSelfCloseRef, buf, sizeof(data->OptionSelfCloseRef));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcOptionSelfCloseActionFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcOptionSelfCloseActionFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseActionField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期权自对冲操作编号
/// typedef char TThostFtdcOrderSysIDType[21]
static PyObject *PyCThostFtdcOptionSelfCloseActionFieldType_get_OptionSelfCloseSysID(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OptionSelfCloseSysID, (Py_ssize_t)sizeof(data->OptionSelfCloseSysID));
    return PyBytes_FromString(data->OptionSelfCloseSysID);
}

static int PyCThostFtdcOptionSelfCloseActionFieldType_set_OptionSelfCloseSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OptionSelfCloseSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseActionField::OptionSelfCloseSysID)) {
        PyErr_SetString(PyExc_ValueError, "OptionSelfCloseSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->OptionSelfCloseSysID, 0, sizeof(data->OptionSelfCloseSysID));
    // memcpy(data->OptionSelfCloseSysID, buf, len);
    strncpy(data->OptionSelfCloseSysID, buf, sizeof(data->OptionSelfCloseSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionFlagType
static PyObject *PyCThostFtdcOptionSelfCloseActionFieldType_get_ActionFlag(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionFlag), 1);
}

static int PyCThostFtdcOptionSelfCloseActionFieldType_set_ActionFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseActionField::ActionFlag)) {
        PyErr_SetString(PyExc_ValueError, "ActionFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    data->ActionFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcOptionSelfCloseActionFieldType_get_ActionDate(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionDate, (Py_ssize_t)sizeof(data->ActionDate));
    return PyBytes_FromString(data->ActionDate);
}

static int PyCThostFtdcOptionSelfCloseActionFieldType_set_ActionDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseActionField::ActionDate)) {
        PyErr_SetString(PyExc_ValueError, "ActionDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->ActionDate, 0, sizeof(data->ActionDate));
    // memcpy(data->ActionDate, buf, len);
    strncpy(data->ActionDate, buf, sizeof(data->ActionDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcOptionSelfCloseActionFieldType_get_ActionTime(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionTime, (Py_ssize_t)sizeof(data->ActionTime));
    return PyBytes_FromString(data->ActionTime);
}

static int PyCThostFtdcOptionSelfCloseActionFieldType_set_ActionTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseActionField::ActionTime)) {
        PyErr_SetString(PyExc_ValueError, "ActionTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->ActionTime, 0, sizeof(data->ActionTime));
    // memcpy(data->ActionTime, buf, len);
    strncpy(data->ActionTime, buf, sizeof(data->ActionTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所交易员代码
/// typedef char TThostFtdcTraderIDType[21]
static PyObject *PyCThostFtdcOptionSelfCloseActionFieldType_get_TraderID(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TraderID, (Py_ssize_t)sizeof(data->TraderID));
    return PyBytes_FromString(data->TraderID);
}

static int PyCThostFtdcOptionSelfCloseActionFieldType_set_TraderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseActionField::TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->TraderID, 0, sizeof(data->TraderID));
    // memcpy(data->TraderID, buf, len);
    strncpy(data->TraderID, buf, sizeof(data->TraderID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 本地期权自对冲编号
/// typedef char TThostFtdcOrderLocalIDType[13]
static PyObject *PyCThostFtdcOptionSelfCloseActionFieldType_get_OptionSelfCloseLocalID(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OptionSelfCloseLocalID, (Py_ssize_t)sizeof(data->OptionSelfCloseLocalID));
    return PyBytes_FromString(data->OptionSelfCloseLocalID);
}

static int PyCThostFtdcOptionSelfCloseActionFieldType_set_OptionSelfCloseLocalID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OptionSelfCloseLocalID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseActionField::OptionSelfCloseLocalID)) {
        PyErr_SetString(PyExc_ValueError, "OptionSelfCloseLocalID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->OptionSelfCloseLocalID, 0, sizeof(data->OptionSelfCloseLocalID));
    // memcpy(data->OptionSelfCloseLocalID, buf, len);
    strncpy(data->OptionSelfCloseLocalID, buf, sizeof(data->OptionSelfCloseLocalID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作本地编号
/// typedef char TThostFtdcOrderLocalIDType[13]
static PyObject *PyCThostFtdcOptionSelfCloseActionFieldType_get_ActionLocalID(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionLocalID, (Py_ssize_t)sizeof(data->ActionLocalID));
    return PyBytes_FromString(data->ActionLocalID);
}

static int PyCThostFtdcOptionSelfCloseActionFieldType_set_ActionLocalID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionLocalID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseActionField::ActionLocalID)) {
        PyErr_SetString(PyExc_ValueError, "ActionLocalID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->ActionLocalID, 0, sizeof(data->ActionLocalID));
    // memcpy(data->ActionLocalID, buf, len);
    strncpy(data->ActionLocalID, buf, sizeof(data->ActionLocalID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 会员代码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcOptionSelfCloseActionFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcOptionSelfCloseActionFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseActionField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户代码
/// typedef char TThostFtdcClientIDType[11]
static PyObject *PyCThostFtdcOptionSelfCloseActionFieldType_get_ClientID(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientID, (Py_ssize_t)sizeof(data->ClientID));
    return PyBytes_FromString(data->ClientID);
}

static int PyCThostFtdcOptionSelfCloseActionFieldType_set_ClientID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseActionField::ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->ClientID, 0, sizeof(data->ClientID));
    // memcpy(data->ClientID, buf, len);
    strncpy(data->ClientID, buf, sizeof(data->ClientID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 业务单元
/// typedef char TThostFtdcBusinessUnitType[21]
static PyObject *PyCThostFtdcOptionSelfCloseActionFieldType_get_BusinessUnit(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BusinessUnit, (Py_ssize_t)sizeof(data->BusinessUnit));
    return PyBytes_FromString(data->BusinessUnit);
}

static int PyCThostFtdcOptionSelfCloseActionFieldType_set_BusinessUnit(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BusinessUnit Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseActionField::BusinessUnit)) {
        PyErr_SetString(PyExc_ValueError, "BusinessUnit must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
    // memcpy(data->BusinessUnit, buf, len);
    strncpy(data->BusinessUnit, buf, sizeof(data->BusinessUnit));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单操作状态
/// typedef char TThostFtdcOrderActionStatusType
static PyObject *PyCThostFtdcOptionSelfCloseActionFieldType_get_OrderActionStatus(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OrderActionStatus), 1);
}

static int PyCThostFtdcOptionSelfCloseActionFieldType_set_OrderActionStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderActionStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseActionField::OrderActionStatus)) {
        PyErr_SetString(PyExc_ValueError, "OrderActionStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    data->OrderActionStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcOptionSelfCloseActionFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcOptionSelfCloseActionFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseActionField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 状态信息
/// typedef char TThostFtdcErrorMsgType[81]
static PyObject *PyCThostFtdcOptionSelfCloseActionFieldType_get_StatusMsg(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->StatusMsg, (Py_ssize_t)sizeof(data->StatusMsg));
    return PyBytes_FromString(data->StatusMsg);
}

static int PyCThostFtdcOptionSelfCloseActionFieldType_set_StatusMsg(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "StatusMsg Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseActionField::StatusMsg)) {
        PyErr_SetString(PyExc_ValueError, "StatusMsg must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->StatusMsg, 0, sizeof(data->StatusMsg));
    // memcpy(data->StatusMsg, buf, len);
    strncpy(data->StatusMsg, buf, sizeof(data->StatusMsg));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcOptionSelfCloseActionFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcOptionSelfCloseActionFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseActionField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 营业部编号
/// typedef char TThostFtdcBranchIDType[9]
static PyObject *PyCThostFtdcOptionSelfCloseActionFieldType_get_BranchID(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BranchID, (Py_ssize_t)sizeof(data->BranchID));
    return PyBytes_FromString(data->BranchID);
}

static int PyCThostFtdcOptionSelfCloseActionFieldType_set_BranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseActionField::BranchID)) {
        PyErr_SetString(PyExc_ValueError, "BranchID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->BranchID, 0, sizeof(data->BranchID));
    // memcpy(data->BranchID, buf, len);
    strncpy(data->BranchID, buf, sizeof(data->BranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcOptionSelfCloseActionFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcOptionSelfCloseActionFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseActionField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcOptionSelfCloseActionFieldType_get_reserve2(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve2, (Py_ssize_t)sizeof(data->reserve2));
    return PyBytes_FromString(data->reserve2);
}

static int PyCThostFtdcOptionSelfCloseActionFieldType_set_reserve2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseActionField::reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->reserve2, 0, sizeof(data->reserve2));
    // memcpy(data->reserve2, buf, len);
    strncpy(data->reserve2, buf, sizeof(data->reserve2));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcOptionSelfCloseActionFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcOptionSelfCloseActionFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseActionField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcOptionSelfCloseActionFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcOptionSelfCloseActionFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseActionField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcOptionSelfCloseActionFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcOptionSelfCloseActionFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseActionField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(self);
    CThostFtdcOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcOptionSelfCloseActionFieldType_members[] = {
    /// 期权自对冲操作引用
    /// typedef int TThostFtdcOrderActionRefType
    {
        .name = "OptionSelfCloseActionRef",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcOptionSelfCloseActionFieldData, data.OptionSelfCloseActionRef),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("期权自对冲操作引用")
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
        .offset = offsetof(PyCThostFtdcOptionSelfCloseActionFieldData, data.RequestID),
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
        .offset = offsetof(PyCThostFtdcOptionSelfCloseActionFieldData, data.FrontID),
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
        .offset = offsetof(PyCThostFtdcOptionSelfCloseActionFieldData, data.SessionID),
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
        .offset = offsetof(PyCThostFtdcOptionSelfCloseActionFieldData, data.InstallID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("安装编号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcOptionSelfCloseActionFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcOptionSelfCloseActionFieldType_get_BrokerID,
    .set = PyCThostFtdcOptionSelfCloseActionFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcOptionSelfCloseActionFieldType_get_InvestorID,
    .set = PyCThostFtdcOptionSelfCloseActionFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 期权自对冲引用
    /// typedef char TThostFtdcOrderRefType[13]
    {
    .name = "OptionSelfCloseRef",
    .get = PyCThostFtdcOptionSelfCloseActionFieldType_get_OptionSelfCloseRef,
    .set = PyCThostFtdcOptionSelfCloseActionFieldType_set_OptionSelfCloseRef,
    .doc = PyDoc_STR("期权自对冲引用"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcOptionSelfCloseActionFieldType_get_ExchangeID,
    .set = PyCThostFtdcOptionSelfCloseActionFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 期权自对冲操作编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    {
    .name = "OptionSelfCloseSysID",
    .get = PyCThostFtdcOptionSelfCloseActionFieldType_get_OptionSelfCloseSysID,
    .set = PyCThostFtdcOptionSelfCloseActionFieldType_set_OptionSelfCloseSysID,
    .doc = PyDoc_STR("期权自对冲操作编号"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionFlagType
    {
    .name = "ActionFlag",
    .get = PyCThostFtdcOptionSelfCloseActionFieldType_get_ActionFlag,
    .set = PyCThostFtdcOptionSelfCloseActionFieldType_set_ActionFlag,
    .doc = PyDoc_STR("操作标志"),
    },
    /// 操作日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "ActionDate",
    .get = PyCThostFtdcOptionSelfCloseActionFieldType_get_ActionDate,
    .set = PyCThostFtdcOptionSelfCloseActionFieldType_set_ActionDate,
    .doc = PyDoc_STR("操作日期"),
    },
    /// 操作时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "ActionTime",
    .get = PyCThostFtdcOptionSelfCloseActionFieldType_get_ActionTime,
    .set = PyCThostFtdcOptionSelfCloseActionFieldType_set_ActionTime,
    .doc = PyDoc_STR("操作时间"),
    },
    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    {
    .name = "TraderID",
    .get = PyCThostFtdcOptionSelfCloseActionFieldType_get_TraderID,
    .set = PyCThostFtdcOptionSelfCloseActionFieldType_set_TraderID,
    .doc = PyDoc_STR("交易所交易员代码"),
    },
    /// 本地期权自对冲编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    {
    .name = "OptionSelfCloseLocalID",
    .get = PyCThostFtdcOptionSelfCloseActionFieldType_get_OptionSelfCloseLocalID,
    .set = PyCThostFtdcOptionSelfCloseActionFieldType_set_OptionSelfCloseLocalID,
    .doc = PyDoc_STR("本地期权自对冲编号"),
    },
    /// 操作本地编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    {
    .name = "ActionLocalID",
    .get = PyCThostFtdcOptionSelfCloseActionFieldType_get_ActionLocalID,
    .set = PyCThostFtdcOptionSelfCloseActionFieldType_set_ActionLocalID,
    .doc = PyDoc_STR("操作本地编号"),
    },
    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcOptionSelfCloseActionFieldType_get_ParticipantID,
    .set = PyCThostFtdcOptionSelfCloseActionFieldType_set_ParticipantID,
    .doc = PyDoc_STR("会员代码"),
    },
    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    {
    .name = "ClientID",
    .get = PyCThostFtdcOptionSelfCloseActionFieldType_get_ClientID,
    .set = PyCThostFtdcOptionSelfCloseActionFieldType_set_ClientID,
    .doc = PyDoc_STR("客户代码"),
    },
    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    {
    .name = "BusinessUnit",
    .get = PyCThostFtdcOptionSelfCloseActionFieldType_get_BusinessUnit,
    .set = PyCThostFtdcOptionSelfCloseActionFieldType_set_BusinessUnit,
    .doc = PyDoc_STR("业务单元"),
    },
    /// 报单操作状态
    /// typedef char TThostFtdcOrderActionStatusType
    {
    .name = "OrderActionStatus",
    .get = PyCThostFtdcOptionSelfCloseActionFieldType_get_OrderActionStatus,
    .set = PyCThostFtdcOptionSelfCloseActionFieldType_set_OrderActionStatus,
    .doc = PyDoc_STR("报单操作状态"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcOptionSelfCloseActionFieldType_get_UserID,
    .set = PyCThostFtdcOptionSelfCloseActionFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    {
    .name = "StatusMsg",
    .get = PyCThostFtdcOptionSelfCloseActionFieldType_get_StatusMsg,
    .set = PyCThostFtdcOptionSelfCloseActionFieldType_set_StatusMsg,
    .doc = PyDoc_STR("状态信息"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcOptionSelfCloseActionFieldType_get_reserve1,
    .set = PyCThostFtdcOptionSelfCloseActionFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    {
    .name = "BranchID",
    .get = PyCThostFtdcOptionSelfCloseActionFieldType_get_BranchID,
    .set = PyCThostFtdcOptionSelfCloseActionFieldType_set_BranchID,
    .doc = PyDoc_STR("营业部编号"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcOptionSelfCloseActionFieldType_get_InvestUnitID,
    .set = PyCThostFtdcOptionSelfCloseActionFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve2",
    .get = PyCThostFtdcOptionSelfCloseActionFieldType_get_reserve2,
    .set = PyCThostFtdcOptionSelfCloseActionFieldType_set_reserve2,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcOptionSelfCloseActionFieldType_get_MacAddress,
    .set = PyCThostFtdcOptionSelfCloseActionFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcOptionSelfCloseActionFieldType_get_InstrumentID,
    .set = PyCThostFtdcOptionSelfCloseActionFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcOptionSelfCloseActionFieldType_get_IPAddress,
    .set = PyCThostFtdcOptionSelfCloseActionFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcOptionSelfCloseActionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcOptionSelfCloseActionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("期权自对冲操作")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcOptionSelfCloseActionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcOptionSelfCloseActionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcOptionSelfCloseActionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcOptionSelfCloseActionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcOptionSelfCloseActionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcOptionSelfCloseActionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("期权自对冲操作")},
    {Py_tp_members, PyCThostFtdcOptionSelfCloseActionFieldType_members},
    {Py_tp_getset, PyCThostFtdcOptionSelfCloseActionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcOptionSelfCloseActionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcOptionSelfCloseActionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcOptionSelfCloseActionFieldType_spec = {
    .name = "PyCTP.CThostFtdcOptionSelfCloseActionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcOptionSelfCloseActionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcOptionSelfCloseActionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcOptionSelfCloseActionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcOptionSelfCloseActionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcOptionSelfCloseActionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcOptionSelfCloseActionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcOptionSelfCloseActionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcOptionSelfCloseActionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcOptionSelfCloseActionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcOptionSelfCloseActionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}