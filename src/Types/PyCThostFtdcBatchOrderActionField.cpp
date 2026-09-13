
#include "PyCThostFtdcBatchOrderActionField.h"

///批量报单操作

static int PyCThostFtdcBatchOrderActionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "OrderActionRef", "RequestID", "FrontID", "SessionID", "ExchangeID", "ActionDate", "ActionTime", "TraderID", "InstallID", "ActionLocalID", "ParticipantID", "ClientID", "BusinessUnit", "OrderActionStatus", "UserID", "StatusMsg", "InvestUnitID", "reserve1", "MacAddress", "IPAddress", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcBatchOrderActionField_BrokerID = NULL;
    Py_ssize_t CThostFtdcBatchOrderActionField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcBatchOrderActionField_InvestorID = NULL;
    Py_ssize_t CThostFtdcBatchOrderActionField_InvestorID_length = 0;

    /// 报单操作引用
    /// typedef int TThostFtdcOrderActionRefType
    int CThostFtdcBatchOrderActionField_OrderActionRef = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcBatchOrderActionField_RequestID = 0;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    int CThostFtdcBatchOrderActionField_FrontID = 0;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcBatchOrderActionField_SessionID = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcBatchOrderActionField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcBatchOrderActionField_ExchangeID_length = 0;

    /// 操作日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcBatchOrderActionField_ActionDate = NULL;
    Py_ssize_t CThostFtdcBatchOrderActionField_ActionDate_length = 0;

    /// 操作时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcBatchOrderActionField_ActionTime = NULL;
    Py_ssize_t CThostFtdcBatchOrderActionField_ActionTime_length = 0;

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    char *CThostFtdcBatchOrderActionField_TraderID = NULL;
    Py_ssize_t CThostFtdcBatchOrderActionField_TraderID_length = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcBatchOrderActionField_InstallID = 0;

    /// 操作本地编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    char *CThostFtdcBatchOrderActionField_ActionLocalID = NULL;
    Py_ssize_t CThostFtdcBatchOrderActionField_ActionLocalID_length = 0;

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcBatchOrderActionField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcBatchOrderActionField_ParticipantID_length = 0;

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    char *CThostFtdcBatchOrderActionField_ClientID = NULL;
    Py_ssize_t CThostFtdcBatchOrderActionField_ClientID_length = 0;

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    char *CThostFtdcBatchOrderActionField_BusinessUnit = NULL;
    Py_ssize_t CThostFtdcBatchOrderActionField_BusinessUnit_length = 0;

    /// 报单操作状态
    /// typedef char TThostFtdcOrderActionStatusType
    char CThostFtdcBatchOrderActionField_OrderActionStatus = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcBatchOrderActionField_UserID = NULL;
    Py_ssize_t CThostFtdcBatchOrderActionField_UserID_length = 0;

    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    char *CThostFtdcBatchOrderActionField_StatusMsg = NULL;
    Py_ssize_t CThostFtdcBatchOrderActionField_StatusMsg_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcBatchOrderActionField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcBatchOrderActionField_InvestUnitID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcBatchOrderActionField_reserve1 = NULL;
    Py_ssize_t CThostFtdcBatchOrderActionField_reserve1_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcBatchOrderActionField_MacAddress = NULL;
    Py_ssize_t CThostFtdcBatchOrderActionField_MacAddress_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcBatchOrderActionField_IPAddress = NULL;
    Py_ssize_t CThostFtdcBatchOrderActionField_IPAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iiiiy#y#y#y#iy#y#y#y#cy#y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcBatchOrderActionField_BrokerID, &CThostFtdcBatchOrderActionField_BrokerID_length
        , &CThostFtdcBatchOrderActionField_InvestorID, &CThostFtdcBatchOrderActionField_InvestorID_length
        , &CThostFtdcBatchOrderActionField_OrderActionRef
        , &CThostFtdcBatchOrderActionField_RequestID
        , &CThostFtdcBatchOrderActionField_FrontID
        , &CThostFtdcBatchOrderActionField_SessionID
        , &CThostFtdcBatchOrderActionField_ExchangeID, &CThostFtdcBatchOrderActionField_ExchangeID_length
        , &CThostFtdcBatchOrderActionField_ActionDate, &CThostFtdcBatchOrderActionField_ActionDate_length
        , &CThostFtdcBatchOrderActionField_ActionTime, &CThostFtdcBatchOrderActionField_ActionTime_length
        , &CThostFtdcBatchOrderActionField_TraderID, &CThostFtdcBatchOrderActionField_TraderID_length
        , &CThostFtdcBatchOrderActionField_InstallID
        , &CThostFtdcBatchOrderActionField_ActionLocalID, &CThostFtdcBatchOrderActionField_ActionLocalID_length
        , &CThostFtdcBatchOrderActionField_ParticipantID, &CThostFtdcBatchOrderActionField_ParticipantID_length
        , &CThostFtdcBatchOrderActionField_ClientID, &CThostFtdcBatchOrderActionField_ClientID_length
        , &CThostFtdcBatchOrderActionField_BusinessUnit, &CThostFtdcBatchOrderActionField_BusinessUnit_length
        , &CThostFtdcBatchOrderActionField_OrderActionStatus
        , &CThostFtdcBatchOrderActionField_UserID, &CThostFtdcBatchOrderActionField_UserID_length
        , &CThostFtdcBatchOrderActionField_StatusMsg, &CThostFtdcBatchOrderActionField_StatusMsg_length
        , &CThostFtdcBatchOrderActionField_InvestUnitID, &CThostFtdcBatchOrderActionField_InvestUnitID_length
        , &CThostFtdcBatchOrderActionField_reserve1, &CThostFtdcBatchOrderActionField_reserve1_length
        , &CThostFtdcBatchOrderActionField_MacAddress, &CThostFtdcBatchOrderActionField_MacAddress_length
        , &CThostFtdcBatchOrderActionField_IPAddress, &CThostFtdcBatchOrderActionField_IPAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBatchOrderActionFieldData>(self);
    CThostFtdcBatchOrderActionField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcBatchOrderActionField_BrokerID != NULL ) {
        if(CThostFtdcBatchOrderActionField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcBatchOrderActionField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcBatchOrderActionField_BrokerID, CThostFtdcBatchOrderActionField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcBatchOrderActionField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcBatchOrderActionField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcBatchOrderActionField_InvestorID != NULL ) {
        if(CThostFtdcBatchOrderActionField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcBatchOrderActionField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcBatchOrderActionField_InvestorID, CThostFtdcBatchOrderActionField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcBatchOrderActionField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcBatchOrderActionField_InvestorID = NULL;
    }

    /// 报单操作引用
    /// typedef int TThostFtdcOrderActionRefType
    data->OrderActionRef = CThostFtdcBatchOrderActionField_OrderActionRef;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcBatchOrderActionField_RequestID;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    data->FrontID = CThostFtdcBatchOrderActionField_FrontID;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcBatchOrderActionField_SessionID;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcBatchOrderActionField_ExchangeID != NULL ) {
        if(CThostFtdcBatchOrderActionField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcBatchOrderActionField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcBatchOrderActionField_ExchangeID, CThostFtdcBatchOrderActionField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcBatchOrderActionField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcBatchOrderActionField_ExchangeID = NULL;
    }

    /// 操作日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcBatchOrderActionField_ActionDate != NULL ) {
        if(CThostFtdcBatchOrderActionField_ActionDate_length >= (Py_ssize_t)sizeof(data->ActionDate)) {
            PyErr_Format(PyExc_ValueError, "ActionDate too long: length=%zd (max allowed is 8)", CThostFtdcBatchOrderActionField_ActionDate_length);
            return -1;
        }
        // memset(data->ActionDate, 0, sizeof(data->ActionDate));
        // memcpy(data->ActionDate, CThostFtdcBatchOrderActionField_ActionDate, CThostFtdcBatchOrderActionField_ActionDate_length);
        strncpy(data->ActionDate, CThostFtdcBatchOrderActionField_ActionDate, sizeof(data->ActionDate));
        CThostFtdcBatchOrderActionField_ActionDate = NULL;
    }

    /// 操作时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcBatchOrderActionField_ActionTime != NULL ) {
        if(CThostFtdcBatchOrderActionField_ActionTime_length >= (Py_ssize_t)sizeof(data->ActionTime)) {
            PyErr_Format(PyExc_ValueError, "ActionTime too long: length=%zd (max allowed is 8)", CThostFtdcBatchOrderActionField_ActionTime_length);
            return -1;
        }
        // memset(data->ActionTime, 0, sizeof(data->ActionTime));
        // memcpy(data->ActionTime, CThostFtdcBatchOrderActionField_ActionTime, CThostFtdcBatchOrderActionField_ActionTime_length);
        strncpy(data->ActionTime, CThostFtdcBatchOrderActionField_ActionTime, sizeof(data->ActionTime));
        CThostFtdcBatchOrderActionField_ActionTime = NULL;
    }

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    if( CThostFtdcBatchOrderActionField_TraderID != NULL ) {
        if(CThostFtdcBatchOrderActionField_TraderID_length >= (Py_ssize_t)sizeof(data->TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is 20)", CThostFtdcBatchOrderActionField_TraderID_length);
            return -1;
        }
        // memset(data->TraderID, 0, sizeof(data->TraderID));
        // memcpy(data->TraderID, CThostFtdcBatchOrderActionField_TraderID, CThostFtdcBatchOrderActionField_TraderID_length);
        strncpy(data->TraderID, CThostFtdcBatchOrderActionField_TraderID, sizeof(data->TraderID));
        CThostFtdcBatchOrderActionField_TraderID = NULL;
    }

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcBatchOrderActionField_InstallID;

    /// 操作本地编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    if( CThostFtdcBatchOrderActionField_ActionLocalID != NULL ) {
        if(CThostFtdcBatchOrderActionField_ActionLocalID_length >= (Py_ssize_t)sizeof(data->ActionLocalID)) {
            PyErr_Format(PyExc_ValueError, "ActionLocalID too long: length=%zd (max allowed is 12)", CThostFtdcBatchOrderActionField_ActionLocalID_length);
            return -1;
        }
        // memset(data->ActionLocalID, 0, sizeof(data->ActionLocalID));
        // memcpy(data->ActionLocalID, CThostFtdcBatchOrderActionField_ActionLocalID, CThostFtdcBatchOrderActionField_ActionLocalID_length);
        strncpy(data->ActionLocalID, CThostFtdcBatchOrderActionField_ActionLocalID, sizeof(data->ActionLocalID));
        CThostFtdcBatchOrderActionField_ActionLocalID = NULL;
    }

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcBatchOrderActionField_ParticipantID != NULL ) {
        if(CThostFtdcBatchOrderActionField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcBatchOrderActionField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcBatchOrderActionField_ParticipantID, CThostFtdcBatchOrderActionField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcBatchOrderActionField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcBatchOrderActionField_ParticipantID = NULL;
    }

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    if( CThostFtdcBatchOrderActionField_ClientID != NULL ) {
        if(CThostFtdcBatchOrderActionField_ClientID_length >= (Py_ssize_t)sizeof(data->ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is 10)", CThostFtdcBatchOrderActionField_ClientID_length);
            return -1;
        }
        // memset(data->ClientID, 0, sizeof(data->ClientID));
        // memcpy(data->ClientID, CThostFtdcBatchOrderActionField_ClientID, CThostFtdcBatchOrderActionField_ClientID_length);
        strncpy(data->ClientID, CThostFtdcBatchOrderActionField_ClientID, sizeof(data->ClientID));
        CThostFtdcBatchOrderActionField_ClientID = NULL;
    }

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    if( CThostFtdcBatchOrderActionField_BusinessUnit != NULL ) {
        if(CThostFtdcBatchOrderActionField_BusinessUnit_length >= (Py_ssize_t)sizeof(data->BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is 20)", CThostFtdcBatchOrderActionField_BusinessUnit_length);
            return -1;
        }
        // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
        // memcpy(data->BusinessUnit, CThostFtdcBatchOrderActionField_BusinessUnit, CThostFtdcBatchOrderActionField_BusinessUnit_length);
        strncpy(data->BusinessUnit, CThostFtdcBatchOrderActionField_BusinessUnit, sizeof(data->BusinessUnit));
        CThostFtdcBatchOrderActionField_BusinessUnit = NULL;
    }

    /// 报单操作状态
    /// typedef char TThostFtdcOrderActionStatusType
    data->OrderActionStatus = CThostFtdcBatchOrderActionField_OrderActionStatus;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcBatchOrderActionField_UserID != NULL ) {
        if(CThostFtdcBatchOrderActionField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcBatchOrderActionField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcBatchOrderActionField_UserID, CThostFtdcBatchOrderActionField_UserID_length);
        strncpy(data->UserID, CThostFtdcBatchOrderActionField_UserID, sizeof(data->UserID));
        CThostFtdcBatchOrderActionField_UserID = NULL;
    }

    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    if( CThostFtdcBatchOrderActionField_StatusMsg != NULL ) {
        if(CThostFtdcBatchOrderActionField_StatusMsg_length >= (Py_ssize_t)sizeof(data->StatusMsg)) {
            PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is 80)", CThostFtdcBatchOrderActionField_StatusMsg_length);
            return -1;
        }
        // memset(data->StatusMsg, 0, sizeof(data->StatusMsg));
        // memcpy(data->StatusMsg, CThostFtdcBatchOrderActionField_StatusMsg, CThostFtdcBatchOrderActionField_StatusMsg_length);
        strncpy(data->StatusMsg, CThostFtdcBatchOrderActionField_StatusMsg, sizeof(data->StatusMsg));
        CThostFtdcBatchOrderActionField_StatusMsg = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcBatchOrderActionField_InvestUnitID != NULL ) {
        if(CThostFtdcBatchOrderActionField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcBatchOrderActionField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcBatchOrderActionField_InvestUnitID, CThostFtdcBatchOrderActionField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcBatchOrderActionField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcBatchOrderActionField_InvestUnitID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcBatchOrderActionField_reserve1 != NULL ) {
        if(CThostFtdcBatchOrderActionField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 15)", CThostFtdcBatchOrderActionField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcBatchOrderActionField_reserve1, CThostFtdcBatchOrderActionField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcBatchOrderActionField_reserve1, sizeof(data->reserve1));
        CThostFtdcBatchOrderActionField_reserve1 = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcBatchOrderActionField_MacAddress != NULL ) {
        if(CThostFtdcBatchOrderActionField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcBatchOrderActionField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcBatchOrderActionField_MacAddress, CThostFtdcBatchOrderActionField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcBatchOrderActionField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcBatchOrderActionField_MacAddress = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcBatchOrderActionField_IPAddress != NULL ) {
        if(CThostFtdcBatchOrderActionField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcBatchOrderActionField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcBatchOrderActionField_IPAddress, CThostFtdcBatchOrderActionField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcBatchOrderActionField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcBatchOrderActionField_IPAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcBatchOrderActionFieldType_repr(PyObject *self) {

    PyCThostFtdcBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBatchOrderActionFieldData>(self);
    CThostFtdcBatchOrderActionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:i,s:i,s:i,s:i,s:y,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "OrderActionRef", data->OrderActionRef
        , "RequestID", data->RequestID
        , "FrontID", data->FrontID
        , "SessionID", data->SessionID
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ActionDate", data->ActionDate//, (Py_ssize_t)sizeof(data->ActionDate)
        , "ActionTime", data->ActionTime//, (Py_ssize_t)sizeof(data->ActionTime)
        , "TraderID", data->TraderID//, (Py_ssize_t)sizeof(data->TraderID)
        , "InstallID", data->InstallID
        , "ActionLocalID", data->ActionLocalID//, (Py_ssize_t)sizeof(data->ActionLocalID)
        , "ParticipantID", data->ParticipantID//, (Py_ssize_t)sizeof(data->ParticipantID)
        , "ClientID", data->ClientID//, (Py_ssize_t)sizeof(data->ClientID)
        , "BusinessUnit", data->BusinessUnit//, (Py_ssize_t)sizeof(data->BusinessUnit)
        , "OrderActionStatus", data->OrderActionStatus
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "StatusMsg", data->StatusMsg//, (Py_ssize_t)sizeof(data->StatusMsg)
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "MacAddress", data->MacAddress//, (Py_ssize_t)sizeof(data->MacAddress)
        , "IPAddress", data->IPAddress//, (Py_ssize_t)sizeof(data->IPAddress)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBatchOrderActionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBatchOrderActionField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcBatchOrderActionFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBatchOrderActionFieldData>(self);
    CThostFtdcBatchOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcBatchOrderActionFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBatchOrderActionField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBatchOrderActionFieldData>(self);
    CThostFtdcBatchOrderActionField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcBatchOrderActionFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBatchOrderActionFieldData>(self);
    CThostFtdcBatchOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcBatchOrderActionFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBatchOrderActionField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBatchOrderActionFieldData>(self);
    CThostFtdcBatchOrderActionField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcBatchOrderActionFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBatchOrderActionFieldData>(self);
    CThostFtdcBatchOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcBatchOrderActionFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBatchOrderActionField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBatchOrderActionFieldData>(self);
    CThostFtdcBatchOrderActionField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcBatchOrderActionFieldType_get_ActionDate(PyObject *self, void *closure) {
    PyCThostFtdcBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBatchOrderActionFieldData>(self);
    CThostFtdcBatchOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionDate, (Py_ssize_t)sizeof(data->ActionDate));
    return PyBytes_FromString(data->ActionDate);
}

static int PyCThostFtdcBatchOrderActionFieldType_set_ActionDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBatchOrderActionField::ActionDate)) {
        PyErr_SetString(PyExc_ValueError, "ActionDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBatchOrderActionFieldData>(self);
    CThostFtdcBatchOrderActionField *data = &(extra->data);
    // memset(data->ActionDate, 0, sizeof(data->ActionDate));
    // memcpy(data->ActionDate, buf, len);
    strncpy(data->ActionDate, buf, sizeof(data->ActionDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcBatchOrderActionFieldType_get_ActionTime(PyObject *self, void *closure) {
    PyCThostFtdcBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBatchOrderActionFieldData>(self);
    CThostFtdcBatchOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionTime, (Py_ssize_t)sizeof(data->ActionTime));
    return PyBytes_FromString(data->ActionTime);
}

static int PyCThostFtdcBatchOrderActionFieldType_set_ActionTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBatchOrderActionField::ActionTime)) {
        PyErr_SetString(PyExc_ValueError, "ActionTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBatchOrderActionFieldData>(self);
    CThostFtdcBatchOrderActionField *data = &(extra->data);
    // memset(data->ActionTime, 0, sizeof(data->ActionTime));
    // memcpy(data->ActionTime, buf, len);
    strncpy(data->ActionTime, buf, sizeof(data->ActionTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所交易员代码
/// typedef char TThostFtdcTraderIDType[21]
static PyObject *PyCThostFtdcBatchOrderActionFieldType_get_TraderID(PyObject *self, void *closure) {
    PyCThostFtdcBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBatchOrderActionFieldData>(self);
    CThostFtdcBatchOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TraderID, (Py_ssize_t)sizeof(data->TraderID));
    return PyBytes_FromString(data->TraderID);
}

static int PyCThostFtdcBatchOrderActionFieldType_set_TraderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBatchOrderActionField::TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBatchOrderActionFieldData>(self);
    CThostFtdcBatchOrderActionField *data = &(extra->data);
    // memset(data->TraderID, 0, sizeof(data->TraderID));
    // memcpy(data->TraderID, buf, len);
    strncpy(data->TraderID, buf, sizeof(data->TraderID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作本地编号
/// typedef char TThostFtdcOrderLocalIDType[13]
static PyObject *PyCThostFtdcBatchOrderActionFieldType_get_ActionLocalID(PyObject *self, void *closure) {
    PyCThostFtdcBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBatchOrderActionFieldData>(self);
    CThostFtdcBatchOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionLocalID, (Py_ssize_t)sizeof(data->ActionLocalID));
    return PyBytes_FromString(data->ActionLocalID);
}

static int PyCThostFtdcBatchOrderActionFieldType_set_ActionLocalID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionLocalID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBatchOrderActionField::ActionLocalID)) {
        PyErr_SetString(PyExc_ValueError, "ActionLocalID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBatchOrderActionFieldData>(self);
    CThostFtdcBatchOrderActionField *data = &(extra->data);
    // memset(data->ActionLocalID, 0, sizeof(data->ActionLocalID));
    // memcpy(data->ActionLocalID, buf, len);
    strncpy(data->ActionLocalID, buf, sizeof(data->ActionLocalID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 会员代码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcBatchOrderActionFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBatchOrderActionFieldData>(self);
    CThostFtdcBatchOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcBatchOrderActionFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBatchOrderActionField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBatchOrderActionFieldData>(self);
    CThostFtdcBatchOrderActionField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户代码
/// typedef char TThostFtdcClientIDType[11]
static PyObject *PyCThostFtdcBatchOrderActionFieldType_get_ClientID(PyObject *self, void *closure) {
    PyCThostFtdcBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBatchOrderActionFieldData>(self);
    CThostFtdcBatchOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientID, (Py_ssize_t)sizeof(data->ClientID));
    return PyBytes_FromString(data->ClientID);
}

static int PyCThostFtdcBatchOrderActionFieldType_set_ClientID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBatchOrderActionField::ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBatchOrderActionFieldData>(self);
    CThostFtdcBatchOrderActionField *data = &(extra->data);
    // memset(data->ClientID, 0, sizeof(data->ClientID));
    // memcpy(data->ClientID, buf, len);
    strncpy(data->ClientID, buf, sizeof(data->ClientID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 业务单元
/// typedef char TThostFtdcBusinessUnitType[21]
static PyObject *PyCThostFtdcBatchOrderActionFieldType_get_BusinessUnit(PyObject *self, void *closure) {
    PyCThostFtdcBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBatchOrderActionFieldData>(self);
    CThostFtdcBatchOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BusinessUnit, (Py_ssize_t)sizeof(data->BusinessUnit));
    return PyBytes_FromString(data->BusinessUnit);
}

static int PyCThostFtdcBatchOrderActionFieldType_set_BusinessUnit(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BusinessUnit Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBatchOrderActionField::BusinessUnit)) {
        PyErr_SetString(PyExc_ValueError, "BusinessUnit must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBatchOrderActionFieldData>(self);
    CThostFtdcBatchOrderActionField *data = &(extra->data);
    // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
    // memcpy(data->BusinessUnit, buf, len);
    strncpy(data->BusinessUnit, buf, sizeof(data->BusinessUnit));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单操作状态
/// typedef char TThostFtdcOrderActionStatusType
static PyObject *PyCThostFtdcBatchOrderActionFieldType_get_OrderActionStatus(PyObject *self, void *closure) {
    PyCThostFtdcBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBatchOrderActionFieldData>(self);
    CThostFtdcBatchOrderActionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OrderActionStatus), 1);
}

static int PyCThostFtdcBatchOrderActionFieldType_set_OrderActionStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderActionStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcBatchOrderActionField::OrderActionStatus)) {
        PyErr_SetString(PyExc_ValueError, "OrderActionStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBatchOrderActionFieldData>(self);
    CThostFtdcBatchOrderActionField *data = &(extra->data);
    data->OrderActionStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcBatchOrderActionFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBatchOrderActionFieldData>(self);
    CThostFtdcBatchOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcBatchOrderActionFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBatchOrderActionField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBatchOrderActionFieldData>(self);
    CThostFtdcBatchOrderActionField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 状态信息
/// typedef char TThostFtdcErrorMsgType[81]
static PyObject *PyCThostFtdcBatchOrderActionFieldType_get_StatusMsg(PyObject *self, void *closure) {
    PyCThostFtdcBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBatchOrderActionFieldData>(self);
    CThostFtdcBatchOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->StatusMsg, (Py_ssize_t)sizeof(data->StatusMsg));
    return PyBytes_FromString(data->StatusMsg);
}

static int PyCThostFtdcBatchOrderActionFieldType_set_StatusMsg(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "StatusMsg Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBatchOrderActionField::StatusMsg)) {
        PyErr_SetString(PyExc_ValueError, "StatusMsg must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBatchOrderActionFieldData>(self);
    CThostFtdcBatchOrderActionField *data = &(extra->data);
    // memset(data->StatusMsg, 0, sizeof(data->StatusMsg));
    // memcpy(data->StatusMsg, buf, len);
    strncpy(data->StatusMsg, buf, sizeof(data->StatusMsg));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcBatchOrderActionFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBatchOrderActionFieldData>(self);
    CThostFtdcBatchOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcBatchOrderActionFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBatchOrderActionField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBatchOrderActionFieldData>(self);
    CThostFtdcBatchOrderActionField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcBatchOrderActionFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBatchOrderActionFieldData>(self);
    CThostFtdcBatchOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcBatchOrderActionFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBatchOrderActionField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBatchOrderActionFieldData>(self);
    CThostFtdcBatchOrderActionField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcBatchOrderActionFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBatchOrderActionFieldData>(self);
    CThostFtdcBatchOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcBatchOrderActionFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBatchOrderActionField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBatchOrderActionFieldData>(self);
    CThostFtdcBatchOrderActionField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcBatchOrderActionFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBatchOrderActionFieldData>(self);
    CThostFtdcBatchOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcBatchOrderActionFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBatchOrderActionField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBatchOrderActionFieldData>(self);
    CThostFtdcBatchOrderActionField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcBatchOrderActionFieldType_members[] = {
    /// 报单操作引用
    /// typedef int TThostFtdcOrderActionRefType
    {
        .name = "OrderActionRef",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcBatchOrderActionFieldData, data.OrderActionRef),
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
        .offset = offsetof(PyCThostFtdcBatchOrderActionFieldData, data.RequestID),
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
        .offset = offsetof(PyCThostFtdcBatchOrderActionFieldData, data.FrontID),
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
        .offset = offsetof(PyCThostFtdcBatchOrderActionFieldData, data.SessionID),
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
        .offset = offsetof(PyCThostFtdcBatchOrderActionFieldData, data.InstallID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("安装编号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcBatchOrderActionFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcBatchOrderActionFieldType_get_BrokerID,
    .set = PyCThostFtdcBatchOrderActionFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcBatchOrderActionFieldType_get_InvestorID,
    .set = PyCThostFtdcBatchOrderActionFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcBatchOrderActionFieldType_get_ExchangeID,
    .set = PyCThostFtdcBatchOrderActionFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 操作日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "ActionDate",
    .get = PyCThostFtdcBatchOrderActionFieldType_get_ActionDate,
    .set = PyCThostFtdcBatchOrderActionFieldType_set_ActionDate,
    .doc = PyDoc_STR("操作日期"),
    },
    /// 操作时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "ActionTime",
    .get = PyCThostFtdcBatchOrderActionFieldType_get_ActionTime,
    .set = PyCThostFtdcBatchOrderActionFieldType_set_ActionTime,
    .doc = PyDoc_STR("操作时间"),
    },
    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    {
    .name = "TraderID",
    .get = PyCThostFtdcBatchOrderActionFieldType_get_TraderID,
    .set = PyCThostFtdcBatchOrderActionFieldType_set_TraderID,
    .doc = PyDoc_STR("交易所交易员代码"),
    },
    /// 操作本地编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    {
    .name = "ActionLocalID",
    .get = PyCThostFtdcBatchOrderActionFieldType_get_ActionLocalID,
    .set = PyCThostFtdcBatchOrderActionFieldType_set_ActionLocalID,
    .doc = PyDoc_STR("操作本地编号"),
    },
    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcBatchOrderActionFieldType_get_ParticipantID,
    .set = PyCThostFtdcBatchOrderActionFieldType_set_ParticipantID,
    .doc = PyDoc_STR("会员代码"),
    },
    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    {
    .name = "ClientID",
    .get = PyCThostFtdcBatchOrderActionFieldType_get_ClientID,
    .set = PyCThostFtdcBatchOrderActionFieldType_set_ClientID,
    .doc = PyDoc_STR("客户代码"),
    },
    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    {
    .name = "BusinessUnit",
    .get = PyCThostFtdcBatchOrderActionFieldType_get_BusinessUnit,
    .set = PyCThostFtdcBatchOrderActionFieldType_set_BusinessUnit,
    .doc = PyDoc_STR("业务单元"),
    },
    /// 报单操作状态
    /// typedef char TThostFtdcOrderActionStatusType
    {
    .name = "OrderActionStatus",
    .get = PyCThostFtdcBatchOrderActionFieldType_get_OrderActionStatus,
    .set = PyCThostFtdcBatchOrderActionFieldType_set_OrderActionStatus,
    .doc = PyDoc_STR("报单操作状态"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcBatchOrderActionFieldType_get_UserID,
    .set = PyCThostFtdcBatchOrderActionFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    {
    .name = "StatusMsg",
    .get = PyCThostFtdcBatchOrderActionFieldType_get_StatusMsg,
    .set = PyCThostFtdcBatchOrderActionFieldType_set_StatusMsg,
    .doc = PyDoc_STR("状态信息"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcBatchOrderActionFieldType_get_InvestUnitID,
    .set = PyCThostFtdcBatchOrderActionFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve1",
    .get = PyCThostFtdcBatchOrderActionFieldType_get_reserve1,
    .set = PyCThostFtdcBatchOrderActionFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcBatchOrderActionFieldType_get_MacAddress,
    .set = PyCThostFtdcBatchOrderActionFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcBatchOrderActionFieldType_get_IPAddress,
    .set = PyCThostFtdcBatchOrderActionFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcBatchOrderActionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcBatchOrderActionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("批量报单操作")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcBatchOrderActionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcBatchOrderActionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcBatchOrderActionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcBatchOrderActionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcBatchOrderActionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcBatchOrderActionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("批量报单操作")},
    {Py_tp_members, PyCThostFtdcBatchOrderActionFieldType_members},
    {Py_tp_getset, PyCThostFtdcBatchOrderActionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcBatchOrderActionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcBatchOrderActionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcBatchOrderActionFieldType_spec = {
    .name = "PyCTP.CThostFtdcBatchOrderActionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcBatchOrderActionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcBatchOrderActionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcBatchOrderActionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcBatchOrderActionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcBatchOrderActionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcBatchOrderActionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcBatchOrderActionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcBatchOrderActionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcBatchOrderActionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcBatchOrderActionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}