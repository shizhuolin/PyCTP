
#include "PyCThostFtdcErrOrderActionField.h"

///错误报单操作

static int PyCThostFtdcErrOrderActionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "OrderActionRef", "OrderRef", "RequestID", "FrontID", "SessionID", "ExchangeID", "OrderSysID", "ActionFlag", "LimitPrice", "VolumeChange", "ActionDate", "ActionTime", "TraderID", "InstallID", "OrderLocalID", "ActionLocalID", "ParticipantID", "ClientID", "BusinessUnit", "OrderActionStatus", "UserID", "StatusMsg", "reserve1", "BranchID", "InvestUnitID", "reserve2", "MacAddress", "ErrorID", "ErrorMsg", "InstrumentID", "IPAddress", "OrderMemo", "SessionReqSeq", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcErrOrderActionField_BrokerID = NULL;
    Py_ssize_t CThostFtdcErrOrderActionField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcErrOrderActionField_InvestorID = NULL;
    Py_ssize_t CThostFtdcErrOrderActionField_InvestorID_length = 0;

    /// 报单操作引用
    /// typedef int TThostFtdcOrderActionRefType
    int CThostFtdcErrOrderActionField_OrderActionRef = 0;

    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    char *CThostFtdcErrOrderActionField_OrderRef = NULL;
    Py_ssize_t CThostFtdcErrOrderActionField_OrderRef_length = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcErrOrderActionField_RequestID = 0;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    int CThostFtdcErrOrderActionField_FrontID = 0;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcErrOrderActionField_SessionID = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcErrOrderActionField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcErrOrderActionField_ExchangeID_length = 0;

    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    char *CThostFtdcErrOrderActionField_OrderSysID = NULL;
    Py_ssize_t CThostFtdcErrOrderActionField_OrderSysID_length = 0;

    /// 操作标志
    /// typedef char TThostFtdcActionFlagType
    char CThostFtdcErrOrderActionField_ActionFlag = 0;

    /// 价格
    /// typedef double TThostFtdcPriceType
    double CThostFtdcErrOrderActionField_LimitPrice = 0.0;

    /// 数量变化
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcErrOrderActionField_VolumeChange = 0;

    /// 操作日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcErrOrderActionField_ActionDate = NULL;
    Py_ssize_t CThostFtdcErrOrderActionField_ActionDate_length = 0;

    /// 操作时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcErrOrderActionField_ActionTime = NULL;
    Py_ssize_t CThostFtdcErrOrderActionField_ActionTime_length = 0;

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    char *CThostFtdcErrOrderActionField_TraderID = NULL;
    Py_ssize_t CThostFtdcErrOrderActionField_TraderID_length = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcErrOrderActionField_InstallID = 0;

    /// 本地报单编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    char *CThostFtdcErrOrderActionField_OrderLocalID = NULL;
    Py_ssize_t CThostFtdcErrOrderActionField_OrderLocalID_length = 0;

    /// 操作本地编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    char *CThostFtdcErrOrderActionField_ActionLocalID = NULL;
    Py_ssize_t CThostFtdcErrOrderActionField_ActionLocalID_length = 0;

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcErrOrderActionField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcErrOrderActionField_ParticipantID_length = 0;

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    char *CThostFtdcErrOrderActionField_ClientID = NULL;
    Py_ssize_t CThostFtdcErrOrderActionField_ClientID_length = 0;

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    char *CThostFtdcErrOrderActionField_BusinessUnit = NULL;
    Py_ssize_t CThostFtdcErrOrderActionField_BusinessUnit_length = 0;

    /// 报单操作状态
    /// typedef char TThostFtdcOrderActionStatusType
    char CThostFtdcErrOrderActionField_OrderActionStatus = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcErrOrderActionField_UserID = NULL;
    Py_ssize_t CThostFtdcErrOrderActionField_UserID_length = 0;

    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    char *CThostFtdcErrOrderActionField_StatusMsg = NULL;
    Py_ssize_t CThostFtdcErrOrderActionField_StatusMsg_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcErrOrderActionField_reserve1 = NULL;
    Py_ssize_t CThostFtdcErrOrderActionField_reserve1_length = 0;

    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    char *CThostFtdcErrOrderActionField_BranchID = NULL;
    Py_ssize_t CThostFtdcErrOrderActionField_BranchID_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcErrOrderActionField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcErrOrderActionField_InvestUnitID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcErrOrderActionField_reserve2 = NULL;
    Py_ssize_t CThostFtdcErrOrderActionField_reserve2_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcErrOrderActionField_MacAddress = NULL;
    Py_ssize_t CThostFtdcErrOrderActionField_MacAddress_length = 0;

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    int CThostFtdcErrOrderActionField_ErrorID = 0;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    char *CThostFtdcErrOrderActionField_ErrorMsg = NULL;
    Py_ssize_t CThostFtdcErrOrderActionField_ErrorMsg_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcErrOrderActionField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcErrOrderActionField_InstrumentID_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcErrOrderActionField_IPAddress = NULL;
    Py_ssize_t CThostFtdcErrOrderActionField_IPAddress_length = 0;

    /// 报单回显字段
    /// typedef char TThostFtdcOrderMemoType[13]
    char *CThostFtdcErrOrderActionField_OrderMemo = NULL;
    Py_ssize_t CThostFtdcErrOrderActionField_OrderMemo_length = 0;

    /// session上请求计数 api自动维护
    /// typedef int TThostFtdcSequenceNo12Type
    int CThostFtdcErrOrderActionField_SessionReqSeq = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iy#iiiy#y#cdiy#y#y#iy#y#y#y#y#cy#y#y#y#y#y#y#iy#y#y#y#i", (char **)kwlist
        , &CThostFtdcErrOrderActionField_BrokerID, &CThostFtdcErrOrderActionField_BrokerID_length
        , &CThostFtdcErrOrderActionField_InvestorID, &CThostFtdcErrOrderActionField_InvestorID_length
        , &CThostFtdcErrOrderActionField_OrderActionRef
        , &CThostFtdcErrOrderActionField_OrderRef, &CThostFtdcErrOrderActionField_OrderRef_length
        , &CThostFtdcErrOrderActionField_RequestID
        , &CThostFtdcErrOrderActionField_FrontID
        , &CThostFtdcErrOrderActionField_SessionID
        , &CThostFtdcErrOrderActionField_ExchangeID, &CThostFtdcErrOrderActionField_ExchangeID_length
        , &CThostFtdcErrOrderActionField_OrderSysID, &CThostFtdcErrOrderActionField_OrderSysID_length
        , &CThostFtdcErrOrderActionField_ActionFlag
        , &CThostFtdcErrOrderActionField_LimitPrice
        , &CThostFtdcErrOrderActionField_VolumeChange
        , &CThostFtdcErrOrderActionField_ActionDate, &CThostFtdcErrOrderActionField_ActionDate_length
        , &CThostFtdcErrOrderActionField_ActionTime, &CThostFtdcErrOrderActionField_ActionTime_length
        , &CThostFtdcErrOrderActionField_TraderID, &CThostFtdcErrOrderActionField_TraderID_length
        , &CThostFtdcErrOrderActionField_InstallID
        , &CThostFtdcErrOrderActionField_OrderLocalID, &CThostFtdcErrOrderActionField_OrderLocalID_length
        , &CThostFtdcErrOrderActionField_ActionLocalID, &CThostFtdcErrOrderActionField_ActionLocalID_length
        , &CThostFtdcErrOrderActionField_ParticipantID, &CThostFtdcErrOrderActionField_ParticipantID_length
        , &CThostFtdcErrOrderActionField_ClientID, &CThostFtdcErrOrderActionField_ClientID_length
        , &CThostFtdcErrOrderActionField_BusinessUnit, &CThostFtdcErrOrderActionField_BusinessUnit_length
        , &CThostFtdcErrOrderActionField_OrderActionStatus
        , &CThostFtdcErrOrderActionField_UserID, &CThostFtdcErrOrderActionField_UserID_length
        , &CThostFtdcErrOrderActionField_StatusMsg, &CThostFtdcErrOrderActionField_StatusMsg_length
        , &CThostFtdcErrOrderActionField_reserve1, &CThostFtdcErrOrderActionField_reserve1_length
        , &CThostFtdcErrOrderActionField_BranchID, &CThostFtdcErrOrderActionField_BranchID_length
        , &CThostFtdcErrOrderActionField_InvestUnitID, &CThostFtdcErrOrderActionField_InvestUnitID_length
        , &CThostFtdcErrOrderActionField_reserve2, &CThostFtdcErrOrderActionField_reserve2_length
        , &CThostFtdcErrOrderActionField_MacAddress, &CThostFtdcErrOrderActionField_MacAddress_length
        , &CThostFtdcErrOrderActionField_ErrorID
        , &CThostFtdcErrOrderActionField_ErrorMsg, &CThostFtdcErrOrderActionField_ErrorMsg_length
        , &CThostFtdcErrOrderActionField_InstrumentID, &CThostFtdcErrOrderActionField_InstrumentID_length
        , &CThostFtdcErrOrderActionField_IPAddress, &CThostFtdcErrOrderActionField_IPAddress_length
        , &CThostFtdcErrOrderActionField_OrderMemo, &CThostFtdcErrOrderActionField_OrderMemo_length
        , &CThostFtdcErrOrderActionField_SessionReqSeq
    )) {
        return -1;
    }

    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcErrOrderActionField_BrokerID != NULL ) {
        if(CThostFtdcErrOrderActionField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcErrOrderActionField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcErrOrderActionField_BrokerID, CThostFtdcErrOrderActionField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcErrOrderActionField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcErrOrderActionField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcErrOrderActionField_InvestorID != NULL ) {
        if(CThostFtdcErrOrderActionField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcErrOrderActionField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcErrOrderActionField_InvestorID, CThostFtdcErrOrderActionField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcErrOrderActionField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcErrOrderActionField_InvestorID = NULL;
    }

    /// 报单操作引用
    /// typedef int TThostFtdcOrderActionRefType
    data->OrderActionRef = CThostFtdcErrOrderActionField_OrderActionRef;

    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    if( CThostFtdcErrOrderActionField_OrderRef != NULL ) {
        if(CThostFtdcErrOrderActionField_OrderRef_length >= (Py_ssize_t)sizeof(data->OrderRef)) {
            PyErr_Format(PyExc_ValueError, "OrderRef too long: length=%zd (max allowed is 12)", CThostFtdcErrOrderActionField_OrderRef_length);
            return -1;
        }
        // memset(data->OrderRef, 0, sizeof(data->OrderRef));
        // memcpy(data->OrderRef, CThostFtdcErrOrderActionField_OrderRef, CThostFtdcErrOrderActionField_OrderRef_length);
        strncpy(data->OrderRef, CThostFtdcErrOrderActionField_OrderRef, sizeof(data->OrderRef));
        CThostFtdcErrOrderActionField_OrderRef = NULL;
    }

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcErrOrderActionField_RequestID;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    data->FrontID = CThostFtdcErrOrderActionField_FrontID;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcErrOrderActionField_SessionID;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcErrOrderActionField_ExchangeID != NULL ) {
        if(CThostFtdcErrOrderActionField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcErrOrderActionField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcErrOrderActionField_ExchangeID, CThostFtdcErrOrderActionField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcErrOrderActionField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcErrOrderActionField_ExchangeID = NULL;
    }

    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    if( CThostFtdcErrOrderActionField_OrderSysID != NULL ) {
        if(CThostFtdcErrOrderActionField_OrderSysID_length >= (Py_ssize_t)sizeof(data->OrderSysID)) {
            PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is 20)", CThostFtdcErrOrderActionField_OrderSysID_length);
            return -1;
        }
        // memset(data->OrderSysID, 0, sizeof(data->OrderSysID));
        // memcpy(data->OrderSysID, CThostFtdcErrOrderActionField_OrderSysID, CThostFtdcErrOrderActionField_OrderSysID_length);
        strncpy(data->OrderSysID, CThostFtdcErrOrderActionField_OrderSysID, sizeof(data->OrderSysID));
        CThostFtdcErrOrderActionField_OrderSysID = NULL;
    }

    /// 操作标志
    /// typedef char TThostFtdcActionFlagType
    data->ActionFlag = CThostFtdcErrOrderActionField_ActionFlag;

    /// 价格
    /// typedef double TThostFtdcPriceType
    data->LimitPrice = CThostFtdcErrOrderActionField_LimitPrice;

    /// 数量变化
    /// typedef int TThostFtdcVolumeType
    data->VolumeChange = CThostFtdcErrOrderActionField_VolumeChange;

    /// 操作日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcErrOrderActionField_ActionDate != NULL ) {
        if(CThostFtdcErrOrderActionField_ActionDate_length >= (Py_ssize_t)sizeof(data->ActionDate)) {
            PyErr_Format(PyExc_ValueError, "ActionDate too long: length=%zd (max allowed is 8)", CThostFtdcErrOrderActionField_ActionDate_length);
            return -1;
        }
        // memset(data->ActionDate, 0, sizeof(data->ActionDate));
        // memcpy(data->ActionDate, CThostFtdcErrOrderActionField_ActionDate, CThostFtdcErrOrderActionField_ActionDate_length);
        strncpy(data->ActionDate, CThostFtdcErrOrderActionField_ActionDate, sizeof(data->ActionDate));
        CThostFtdcErrOrderActionField_ActionDate = NULL;
    }

    /// 操作时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcErrOrderActionField_ActionTime != NULL ) {
        if(CThostFtdcErrOrderActionField_ActionTime_length >= (Py_ssize_t)sizeof(data->ActionTime)) {
            PyErr_Format(PyExc_ValueError, "ActionTime too long: length=%zd (max allowed is 8)", CThostFtdcErrOrderActionField_ActionTime_length);
            return -1;
        }
        // memset(data->ActionTime, 0, sizeof(data->ActionTime));
        // memcpy(data->ActionTime, CThostFtdcErrOrderActionField_ActionTime, CThostFtdcErrOrderActionField_ActionTime_length);
        strncpy(data->ActionTime, CThostFtdcErrOrderActionField_ActionTime, sizeof(data->ActionTime));
        CThostFtdcErrOrderActionField_ActionTime = NULL;
    }

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    if( CThostFtdcErrOrderActionField_TraderID != NULL ) {
        if(CThostFtdcErrOrderActionField_TraderID_length >= (Py_ssize_t)sizeof(data->TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is 20)", CThostFtdcErrOrderActionField_TraderID_length);
            return -1;
        }
        // memset(data->TraderID, 0, sizeof(data->TraderID));
        // memcpy(data->TraderID, CThostFtdcErrOrderActionField_TraderID, CThostFtdcErrOrderActionField_TraderID_length);
        strncpy(data->TraderID, CThostFtdcErrOrderActionField_TraderID, sizeof(data->TraderID));
        CThostFtdcErrOrderActionField_TraderID = NULL;
    }

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcErrOrderActionField_InstallID;

    /// 本地报单编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    if( CThostFtdcErrOrderActionField_OrderLocalID != NULL ) {
        if(CThostFtdcErrOrderActionField_OrderLocalID_length >= (Py_ssize_t)sizeof(data->OrderLocalID)) {
            PyErr_Format(PyExc_ValueError, "OrderLocalID too long: length=%zd (max allowed is 12)", CThostFtdcErrOrderActionField_OrderLocalID_length);
            return -1;
        }
        // memset(data->OrderLocalID, 0, sizeof(data->OrderLocalID));
        // memcpy(data->OrderLocalID, CThostFtdcErrOrderActionField_OrderLocalID, CThostFtdcErrOrderActionField_OrderLocalID_length);
        strncpy(data->OrderLocalID, CThostFtdcErrOrderActionField_OrderLocalID, sizeof(data->OrderLocalID));
        CThostFtdcErrOrderActionField_OrderLocalID = NULL;
    }

    /// 操作本地编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    if( CThostFtdcErrOrderActionField_ActionLocalID != NULL ) {
        if(CThostFtdcErrOrderActionField_ActionLocalID_length >= (Py_ssize_t)sizeof(data->ActionLocalID)) {
            PyErr_Format(PyExc_ValueError, "ActionLocalID too long: length=%zd (max allowed is 12)", CThostFtdcErrOrderActionField_ActionLocalID_length);
            return -1;
        }
        // memset(data->ActionLocalID, 0, sizeof(data->ActionLocalID));
        // memcpy(data->ActionLocalID, CThostFtdcErrOrderActionField_ActionLocalID, CThostFtdcErrOrderActionField_ActionLocalID_length);
        strncpy(data->ActionLocalID, CThostFtdcErrOrderActionField_ActionLocalID, sizeof(data->ActionLocalID));
        CThostFtdcErrOrderActionField_ActionLocalID = NULL;
    }

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcErrOrderActionField_ParticipantID != NULL ) {
        if(CThostFtdcErrOrderActionField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcErrOrderActionField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcErrOrderActionField_ParticipantID, CThostFtdcErrOrderActionField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcErrOrderActionField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcErrOrderActionField_ParticipantID = NULL;
    }

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    if( CThostFtdcErrOrderActionField_ClientID != NULL ) {
        if(CThostFtdcErrOrderActionField_ClientID_length >= (Py_ssize_t)sizeof(data->ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is 10)", CThostFtdcErrOrderActionField_ClientID_length);
            return -1;
        }
        // memset(data->ClientID, 0, sizeof(data->ClientID));
        // memcpy(data->ClientID, CThostFtdcErrOrderActionField_ClientID, CThostFtdcErrOrderActionField_ClientID_length);
        strncpy(data->ClientID, CThostFtdcErrOrderActionField_ClientID, sizeof(data->ClientID));
        CThostFtdcErrOrderActionField_ClientID = NULL;
    }

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    if( CThostFtdcErrOrderActionField_BusinessUnit != NULL ) {
        if(CThostFtdcErrOrderActionField_BusinessUnit_length >= (Py_ssize_t)sizeof(data->BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is 20)", CThostFtdcErrOrderActionField_BusinessUnit_length);
            return -1;
        }
        // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
        // memcpy(data->BusinessUnit, CThostFtdcErrOrderActionField_BusinessUnit, CThostFtdcErrOrderActionField_BusinessUnit_length);
        strncpy(data->BusinessUnit, CThostFtdcErrOrderActionField_BusinessUnit, sizeof(data->BusinessUnit));
        CThostFtdcErrOrderActionField_BusinessUnit = NULL;
    }

    /// 报单操作状态
    /// typedef char TThostFtdcOrderActionStatusType
    data->OrderActionStatus = CThostFtdcErrOrderActionField_OrderActionStatus;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcErrOrderActionField_UserID != NULL ) {
        if(CThostFtdcErrOrderActionField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcErrOrderActionField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcErrOrderActionField_UserID, CThostFtdcErrOrderActionField_UserID_length);
        strncpy(data->UserID, CThostFtdcErrOrderActionField_UserID, sizeof(data->UserID));
        CThostFtdcErrOrderActionField_UserID = NULL;
    }

    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    if( CThostFtdcErrOrderActionField_StatusMsg != NULL ) {
        if(CThostFtdcErrOrderActionField_StatusMsg_length >= (Py_ssize_t)sizeof(data->StatusMsg)) {
            PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is 80)", CThostFtdcErrOrderActionField_StatusMsg_length);
            return -1;
        }
        // memset(data->StatusMsg, 0, sizeof(data->StatusMsg));
        // memcpy(data->StatusMsg, CThostFtdcErrOrderActionField_StatusMsg, CThostFtdcErrOrderActionField_StatusMsg_length);
        strncpy(data->StatusMsg, CThostFtdcErrOrderActionField_StatusMsg, sizeof(data->StatusMsg));
        CThostFtdcErrOrderActionField_StatusMsg = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcErrOrderActionField_reserve1 != NULL ) {
        if(CThostFtdcErrOrderActionField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcErrOrderActionField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcErrOrderActionField_reserve1, CThostFtdcErrOrderActionField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcErrOrderActionField_reserve1, sizeof(data->reserve1));
        CThostFtdcErrOrderActionField_reserve1 = NULL;
    }

    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    if( CThostFtdcErrOrderActionField_BranchID != NULL ) {
        if(CThostFtdcErrOrderActionField_BranchID_length >= (Py_ssize_t)sizeof(data->BranchID)) {
            PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is 8)", CThostFtdcErrOrderActionField_BranchID_length);
            return -1;
        }
        // memset(data->BranchID, 0, sizeof(data->BranchID));
        // memcpy(data->BranchID, CThostFtdcErrOrderActionField_BranchID, CThostFtdcErrOrderActionField_BranchID_length);
        strncpy(data->BranchID, CThostFtdcErrOrderActionField_BranchID, sizeof(data->BranchID));
        CThostFtdcErrOrderActionField_BranchID = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcErrOrderActionField_InvestUnitID != NULL ) {
        if(CThostFtdcErrOrderActionField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcErrOrderActionField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcErrOrderActionField_InvestUnitID, CThostFtdcErrOrderActionField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcErrOrderActionField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcErrOrderActionField_InvestUnitID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcErrOrderActionField_reserve2 != NULL ) {
        if(CThostFtdcErrOrderActionField_reserve2_length >= (Py_ssize_t)sizeof(data->reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is 15)", CThostFtdcErrOrderActionField_reserve2_length);
            return -1;
        }
        // memset(data->reserve2, 0, sizeof(data->reserve2));
        // memcpy(data->reserve2, CThostFtdcErrOrderActionField_reserve2, CThostFtdcErrOrderActionField_reserve2_length);
        strncpy(data->reserve2, CThostFtdcErrOrderActionField_reserve2, sizeof(data->reserve2));
        CThostFtdcErrOrderActionField_reserve2 = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcErrOrderActionField_MacAddress != NULL ) {
        if(CThostFtdcErrOrderActionField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcErrOrderActionField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcErrOrderActionField_MacAddress, CThostFtdcErrOrderActionField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcErrOrderActionField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcErrOrderActionField_MacAddress = NULL;
    }

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    data->ErrorID = CThostFtdcErrOrderActionField_ErrorID;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    if( CThostFtdcErrOrderActionField_ErrorMsg != NULL ) {
        if(CThostFtdcErrOrderActionField_ErrorMsg_length >= (Py_ssize_t)sizeof(data->ErrorMsg)) {
            PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is 80)", CThostFtdcErrOrderActionField_ErrorMsg_length);
            return -1;
        }
        // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
        // memcpy(data->ErrorMsg, CThostFtdcErrOrderActionField_ErrorMsg, CThostFtdcErrOrderActionField_ErrorMsg_length);
        strncpy(data->ErrorMsg, CThostFtdcErrOrderActionField_ErrorMsg, sizeof(data->ErrorMsg));
        CThostFtdcErrOrderActionField_ErrorMsg = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcErrOrderActionField_InstrumentID != NULL ) {
        if(CThostFtdcErrOrderActionField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcErrOrderActionField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcErrOrderActionField_InstrumentID, CThostFtdcErrOrderActionField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcErrOrderActionField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcErrOrderActionField_InstrumentID = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcErrOrderActionField_IPAddress != NULL ) {
        if(CThostFtdcErrOrderActionField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcErrOrderActionField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcErrOrderActionField_IPAddress, CThostFtdcErrOrderActionField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcErrOrderActionField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcErrOrderActionField_IPAddress = NULL;
    }

    /// 报单回显字段
    /// typedef char TThostFtdcOrderMemoType[13]
    if( CThostFtdcErrOrderActionField_OrderMemo != NULL ) {
        if(CThostFtdcErrOrderActionField_OrderMemo_length >= (Py_ssize_t)sizeof(data->OrderMemo)) {
            PyErr_Format(PyExc_ValueError, "OrderMemo too long: length=%zd (max allowed is 12)", CThostFtdcErrOrderActionField_OrderMemo_length);
            return -1;
        }
        // memset(data->OrderMemo, 0, sizeof(data->OrderMemo));
        // memcpy(data->OrderMemo, CThostFtdcErrOrderActionField_OrderMemo, CThostFtdcErrOrderActionField_OrderMemo_length);
        strncpy(data->OrderMemo, CThostFtdcErrOrderActionField_OrderMemo, sizeof(data->OrderMemo));
        CThostFtdcErrOrderActionField_OrderMemo = NULL;
    }

    /// session上请求计数 api自动维护
    /// typedef int TThostFtdcSequenceNo12Type
    data->SessionReqSeq = CThostFtdcErrOrderActionField_SessionReqSeq;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcErrOrderActionFieldType_repr(PyObject *self) {

    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:i,s:y,s:i,s:i,s:i,s:y,s:y,s:c,s:d,s:i,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:i}"
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
        , "ActionDate", data->ActionDate//, (Py_ssize_t)sizeof(data->ActionDate)
        , "ActionTime", data->ActionTime//, (Py_ssize_t)sizeof(data->ActionTime)
        , "TraderID", data->TraderID//, (Py_ssize_t)sizeof(data->TraderID)
        , "InstallID", data->InstallID
        , "OrderLocalID", data->OrderLocalID//, (Py_ssize_t)sizeof(data->OrderLocalID)
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
        , "ErrorID", data->ErrorID
        , "ErrorMsg", data->ErrorMsg//, (Py_ssize_t)sizeof(data->ErrorMsg)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "IPAddress", data->IPAddress//, (Py_ssize_t)sizeof(data->IPAddress)
        , "OrderMemo", data->OrderMemo//, (Py_ssize_t)sizeof(data->OrderMemo)
        , "SessionReqSeq", data->SessionReqSeq
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcErrOrderActionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcErrOrderActionField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcErrOrderActionFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcErrOrderActionFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrOrderActionField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcErrOrderActionFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcErrOrderActionFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrOrderActionField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单引用
/// typedef char TThostFtdcOrderRefType[13]
static PyObject *PyCThostFtdcErrOrderActionFieldType_get_OrderRef(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderRef, (Py_ssize_t)sizeof(data->OrderRef));
    return PyBytes_FromString(data->OrderRef);
}

static int PyCThostFtdcErrOrderActionFieldType_set_OrderRef(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderRef Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrOrderActionField::OrderRef)) {
        PyErr_SetString(PyExc_ValueError, "OrderRef must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // memset(data->OrderRef, 0, sizeof(data->OrderRef));
    // memcpy(data->OrderRef, buf, len);
    strncpy(data->OrderRef, buf, sizeof(data->OrderRef));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcErrOrderActionFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcErrOrderActionFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrOrderActionField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单编号
/// typedef char TThostFtdcOrderSysIDType[21]
static PyObject *PyCThostFtdcErrOrderActionFieldType_get_OrderSysID(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderSysID, (Py_ssize_t)sizeof(data->OrderSysID));
    return PyBytes_FromString(data->OrderSysID);
}

static int PyCThostFtdcErrOrderActionFieldType_set_OrderSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrOrderActionField::OrderSysID)) {
        PyErr_SetString(PyExc_ValueError, "OrderSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // memset(data->OrderSysID, 0, sizeof(data->OrderSysID));
    // memcpy(data->OrderSysID, buf, len);
    strncpy(data->OrderSysID, buf, sizeof(data->OrderSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionFlagType
static PyObject *PyCThostFtdcErrOrderActionFieldType_get_ActionFlag(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionFlag), 1);
}

static int PyCThostFtdcErrOrderActionFieldType_set_ActionFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcErrOrderActionField::ActionFlag)) {
        PyErr_SetString(PyExc_ValueError, "ActionFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    data->ActionFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcErrOrderActionFieldType_get_ActionDate(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionDate, (Py_ssize_t)sizeof(data->ActionDate));
    return PyBytes_FromString(data->ActionDate);
}

static int PyCThostFtdcErrOrderActionFieldType_set_ActionDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrOrderActionField::ActionDate)) {
        PyErr_SetString(PyExc_ValueError, "ActionDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // memset(data->ActionDate, 0, sizeof(data->ActionDate));
    // memcpy(data->ActionDate, buf, len);
    strncpy(data->ActionDate, buf, sizeof(data->ActionDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcErrOrderActionFieldType_get_ActionTime(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionTime, (Py_ssize_t)sizeof(data->ActionTime));
    return PyBytes_FromString(data->ActionTime);
}

static int PyCThostFtdcErrOrderActionFieldType_set_ActionTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrOrderActionField::ActionTime)) {
        PyErr_SetString(PyExc_ValueError, "ActionTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // memset(data->ActionTime, 0, sizeof(data->ActionTime));
    // memcpy(data->ActionTime, buf, len);
    strncpy(data->ActionTime, buf, sizeof(data->ActionTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所交易员代码
/// typedef char TThostFtdcTraderIDType[21]
static PyObject *PyCThostFtdcErrOrderActionFieldType_get_TraderID(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TraderID, (Py_ssize_t)sizeof(data->TraderID));
    return PyBytes_FromString(data->TraderID);
}

static int PyCThostFtdcErrOrderActionFieldType_set_TraderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrOrderActionField::TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // memset(data->TraderID, 0, sizeof(data->TraderID));
    // memcpy(data->TraderID, buf, len);
    strncpy(data->TraderID, buf, sizeof(data->TraderID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 本地报单编号
/// typedef char TThostFtdcOrderLocalIDType[13]
static PyObject *PyCThostFtdcErrOrderActionFieldType_get_OrderLocalID(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderLocalID, (Py_ssize_t)sizeof(data->OrderLocalID));
    return PyBytes_FromString(data->OrderLocalID);
}

static int PyCThostFtdcErrOrderActionFieldType_set_OrderLocalID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderLocalID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrOrderActionField::OrderLocalID)) {
        PyErr_SetString(PyExc_ValueError, "OrderLocalID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // memset(data->OrderLocalID, 0, sizeof(data->OrderLocalID));
    // memcpy(data->OrderLocalID, buf, len);
    strncpy(data->OrderLocalID, buf, sizeof(data->OrderLocalID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作本地编号
/// typedef char TThostFtdcOrderLocalIDType[13]
static PyObject *PyCThostFtdcErrOrderActionFieldType_get_ActionLocalID(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionLocalID, (Py_ssize_t)sizeof(data->ActionLocalID));
    return PyBytes_FromString(data->ActionLocalID);
}

static int PyCThostFtdcErrOrderActionFieldType_set_ActionLocalID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionLocalID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrOrderActionField::ActionLocalID)) {
        PyErr_SetString(PyExc_ValueError, "ActionLocalID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // memset(data->ActionLocalID, 0, sizeof(data->ActionLocalID));
    // memcpy(data->ActionLocalID, buf, len);
    strncpy(data->ActionLocalID, buf, sizeof(data->ActionLocalID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 会员代码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcErrOrderActionFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcErrOrderActionFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrOrderActionField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户代码
/// typedef char TThostFtdcClientIDType[11]
static PyObject *PyCThostFtdcErrOrderActionFieldType_get_ClientID(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientID, (Py_ssize_t)sizeof(data->ClientID));
    return PyBytes_FromString(data->ClientID);
}

static int PyCThostFtdcErrOrderActionFieldType_set_ClientID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrOrderActionField::ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // memset(data->ClientID, 0, sizeof(data->ClientID));
    // memcpy(data->ClientID, buf, len);
    strncpy(data->ClientID, buf, sizeof(data->ClientID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 业务单元
/// typedef char TThostFtdcBusinessUnitType[21]
static PyObject *PyCThostFtdcErrOrderActionFieldType_get_BusinessUnit(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BusinessUnit, (Py_ssize_t)sizeof(data->BusinessUnit));
    return PyBytes_FromString(data->BusinessUnit);
}

static int PyCThostFtdcErrOrderActionFieldType_set_BusinessUnit(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BusinessUnit Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrOrderActionField::BusinessUnit)) {
        PyErr_SetString(PyExc_ValueError, "BusinessUnit must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
    // memcpy(data->BusinessUnit, buf, len);
    strncpy(data->BusinessUnit, buf, sizeof(data->BusinessUnit));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单操作状态
/// typedef char TThostFtdcOrderActionStatusType
static PyObject *PyCThostFtdcErrOrderActionFieldType_get_OrderActionStatus(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OrderActionStatus), 1);
}

static int PyCThostFtdcErrOrderActionFieldType_set_OrderActionStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderActionStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcErrOrderActionField::OrderActionStatus)) {
        PyErr_SetString(PyExc_ValueError, "OrderActionStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    data->OrderActionStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcErrOrderActionFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcErrOrderActionFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrOrderActionField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 状态信息
/// typedef char TThostFtdcErrorMsgType[81]
static PyObject *PyCThostFtdcErrOrderActionFieldType_get_StatusMsg(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->StatusMsg, (Py_ssize_t)sizeof(data->StatusMsg));
    return PyBytes_FromString(data->StatusMsg);
}

static int PyCThostFtdcErrOrderActionFieldType_set_StatusMsg(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "StatusMsg Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrOrderActionField::StatusMsg)) {
        PyErr_SetString(PyExc_ValueError, "StatusMsg must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // memset(data->StatusMsg, 0, sizeof(data->StatusMsg));
    // memcpy(data->StatusMsg, buf, len);
    strncpy(data->StatusMsg, buf, sizeof(data->StatusMsg));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcErrOrderActionFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcErrOrderActionFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrOrderActionField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 营业部编号
/// typedef char TThostFtdcBranchIDType[9]
static PyObject *PyCThostFtdcErrOrderActionFieldType_get_BranchID(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BranchID, (Py_ssize_t)sizeof(data->BranchID));
    return PyBytes_FromString(data->BranchID);
}

static int PyCThostFtdcErrOrderActionFieldType_set_BranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrOrderActionField::BranchID)) {
        PyErr_SetString(PyExc_ValueError, "BranchID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // memset(data->BranchID, 0, sizeof(data->BranchID));
    // memcpy(data->BranchID, buf, len);
    strncpy(data->BranchID, buf, sizeof(data->BranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcErrOrderActionFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcErrOrderActionFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrOrderActionField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcErrOrderActionFieldType_get_reserve2(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve2, (Py_ssize_t)sizeof(data->reserve2));
    return PyBytes_FromString(data->reserve2);
}

static int PyCThostFtdcErrOrderActionFieldType_set_reserve2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrOrderActionField::reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // memset(data->reserve2, 0, sizeof(data->reserve2));
    // memcpy(data->reserve2, buf, len);
    strncpy(data->reserve2, buf, sizeof(data->reserve2));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcErrOrderActionFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcErrOrderActionFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrOrderActionField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 错误信息
/// typedef char TThostFtdcErrorMsgType[81]
static PyObject *PyCThostFtdcErrOrderActionFieldType_get_ErrorMsg(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ErrorMsg, (Py_ssize_t)sizeof(data->ErrorMsg));
    return PyBytes_FromString(data->ErrorMsg);
}

static int PyCThostFtdcErrOrderActionFieldType_set_ErrorMsg(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ErrorMsg Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrOrderActionField::ErrorMsg)) {
        PyErr_SetString(PyExc_ValueError, "ErrorMsg must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
    // memcpy(data->ErrorMsg, buf, len);
    strncpy(data->ErrorMsg, buf, sizeof(data->ErrorMsg));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcErrOrderActionFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcErrOrderActionFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrOrderActionField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcErrOrderActionFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcErrOrderActionFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrOrderActionField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单回显字段
/// typedef char TThostFtdcOrderMemoType[13]
static PyObject *PyCThostFtdcErrOrderActionFieldType_get_OrderMemo(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderMemo, (Py_ssize_t)sizeof(data->OrderMemo));
    return PyBytes_FromString(data->OrderMemo);
}

static int PyCThostFtdcErrOrderActionFieldType_set_OrderMemo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderMemo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrOrderActionField::OrderMemo)) {
        PyErr_SetString(PyExc_ValueError, "OrderMemo must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderActionFieldData>(self);
    CThostFtdcErrOrderActionField *data = &(extra->data);
    // memset(data->OrderMemo, 0, sizeof(data->OrderMemo));
    // memcpy(data->OrderMemo, buf, len);
    strncpy(data->OrderMemo, buf, sizeof(data->OrderMemo));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcErrOrderActionFieldType_members[] = {
    /// 报单操作引用
    /// typedef int TThostFtdcOrderActionRefType
    {
        .name = "OrderActionRef",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcErrOrderActionFieldData, data.OrderActionRef),
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
        .offset = offsetof(PyCThostFtdcErrOrderActionFieldData, data.RequestID),
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
        .offset = offsetof(PyCThostFtdcErrOrderActionFieldData, data.FrontID),
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
        .offset = offsetof(PyCThostFtdcErrOrderActionFieldData, data.SessionID),
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
        .offset = offsetof(PyCThostFtdcErrOrderActionFieldData, data.LimitPrice),
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
        .offset = offsetof(PyCThostFtdcErrOrderActionFieldData, data.VolumeChange),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("数量变化")
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
        .offset = offsetof(PyCThostFtdcErrOrderActionFieldData, data.InstallID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("安装编号")
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
        .offset = offsetof(PyCThostFtdcErrOrderActionFieldData, data.ErrorID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("错误代码")
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
        .offset = offsetof(PyCThostFtdcErrOrderActionFieldData, data.SessionReqSeq),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("session上请求计数 api自动维护")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcErrOrderActionFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcErrOrderActionFieldType_get_BrokerID,
    .set = PyCThostFtdcErrOrderActionFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcErrOrderActionFieldType_get_InvestorID,
    .set = PyCThostFtdcErrOrderActionFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    {
    .name = "OrderRef",
    .get = PyCThostFtdcErrOrderActionFieldType_get_OrderRef,
    .set = PyCThostFtdcErrOrderActionFieldType_set_OrderRef,
    .doc = PyDoc_STR("报单引用"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcErrOrderActionFieldType_get_ExchangeID,
    .set = PyCThostFtdcErrOrderActionFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    {
    .name = "OrderSysID",
    .get = PyCThostFtdcErrOrderActionFieldType_get_OrderSysID,
    .set = PyCThostFtdcErrOrderActionFieldType_set_OrderSysID,
    .doc = PyDoc_STR("报单编号"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionFlagType
    {
    .name = "ActionFlag",
    .get = PyCThostFtdcErrOrderActionFieldType_get_ActionFlag,
    .set = PyCThostFtdcErrOrderActionFieldType_set_ActionFlag,
    .doc = PyDoc_STR("操作标志"),
    },
    /// 操作日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "ActionDate",
    .get = PyCThostFtdcErrOrderActionFieldType_get_ActionDate,
    .set = PyCThostFtdcErrOrderActionFieldType_set_ActionDate,
    .doc = PyDoc_STR("操作日期"),
    },
    /// 操作时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "ActionTime",
    .get = PyCThostFtdcErrOrderActionFieldType_get_ActionTime,
    .set = PyCThostFtdcErrOrderActionFieldType_set_ActionTime,
    .doc = PyDoc_STR("操作时间"),
    },
    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    {
    .name = "TraderID",
    .get = PyCThostFtdcErrOrderActionFieldType_get_TraderID,
    .set = PyCThostFtdcErrOrderActionFieldType_set_TraderID,
    .doc = PyDoc_STR("交易所交易员代码"),
    },
    /// 本地报单编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    {
    .name = "OrderLocalID",
    .get = PyCThostFtdcErrOrderActionFieldType_get_OrderLocalID,
    .set = PyCThostFtdcErrOrderActionFieldType_set_OrderLocalID,
    .doc = PyDoc_STR("本地报单编号"),
    },
    /// 操作本地编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    {
    .name = "ActionLocalID",
    .get = PyCThostFtdcErrOrderActionFieldType_get_ActionLocalID,
    .set = PyCThostFtdcErrOrderActionFieldType_set_ActionLocalID,
    .doc = PyDoc_STR("操作本地编号"),
    },
    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcErrOrderActionFieldType_get_ParticipantID,
    .set = PyCThostFtdcErrOrderActionFieldType_set_ParticipantID,
    .doc = PyDoc_STR("会员代码"),
    },
    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    {
    .name = "ClientID",
    .get = PyCThostFtdcErrOrderActionFieldType_get_ClientID,
    .set = PyCThostFtdcErrOrderActionFieldType_set_ClientID,
    .doc = PyDoc_STR("客户代码"),
    },
    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    {
    .name = "BusinessUnit",
    .get = PyCThostFtdcErrOrderActionFieldType_get_BusinessUnit,
    .set = PyCThostFtdcErrOrderActionFieldType_set_BusinessUnit,
    .doc = PyDoc_STR("业务单元"),
    },
    /// 报单操作状态
    /// typedef char TThostFtdcOrderActionStatusType
    {
    .name = "OrderActionStatus",
    .get = PyCThostFtdcErrOrderActionFieldType_get_OrderActionStatus,
    .set = PyCThostFtdcErrOrderActionFieldType_set_OrderActionStatus,
    .doc = PyDoc_STR("报单操作状态"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcErrOrderActionFieldType_get_UserID,
    .set = PyCThostFtdcErrOrderActionFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    {
    .name = "StatusMsg",
    .get = PyCThostFtdcErrOrderActionFieldType_get_StatusMsg,
    .set = PyCThostFtdcErrOrderActionFieldType_set_StatusMsg,
    .doc = PyDoc_STR("状态信息"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcErrOrderActionFieldType_get_reserve1,
    .set = PyCThostFtdcErrOrderActionFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    {
    .name = "BranchID",
    .get = PyCThostFtdcErrOrderActionFieldType_get_BranchID,
    .set = PyCThostFtdcErrOrderActionFieldType_set_BranchID,
    .doc = PyDoc_STR("营业部编号"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcErrOrderActionFieldType_get_InvestUnitID,
    .set = PyCThostFtdcErrOrderActionFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve2",
    .get = PyCThostFtdcErrOrderActionFieldType_get_reserve2,
    .set = PyCThostFtdcErrOrderActionFieldType_set_reserve2,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcErrOrderActionFieldType_get_MacAddress,
    .set = PyCThostFtdcErrOrderActionFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    {
    .name = "ErrorMsg",
    .get = PyCThostFtdcErrOrderActionFieldType_get_ErrorMsg,
    .set = PyCThostFtdcErrOrderActionFieldType_set_ErrorMsg,
    .doc = PyDoc_STR("错误信息"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcErrOrderActionFieldType_get_InstrumentID,
    .set = PyCThostFtdcErrOrderActionFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcErrOrderActionFieldType_get_IPAddress,
    .set = PyCThostFtdcErrOrderActionFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    /// 报单回显字段
    /// typedef char TThostFtdcOrderMemoType[13]
    {
    .name = "OrderMemo",
    .get = PyCThostFtdcErrOrderActionFieldType_get_OrderMemo,
    .set = PyCThostFtdcErrOrderActionFieldType_set_OrderMemo,
    .doc = PyDoc_STR("报单回显字段"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcErrOrderActionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcErrOrderActionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("错误报单操作")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcErrOrderActionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcErrOrderActionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcErrOrderActionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcErrOrderActionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcErrOrderActionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcErrOrderActionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("错误报单操作")},
    {Py_tp_members, PyCThostFtdcErrOrderActionFieldType_members},
    {Py_tp_getset, PyCThostFtdcErrOrderActionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcErrOrderActionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcErrOrderActionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcErrOrderActionFieldType_spec = {
    .name = "PyCTP.CThostFtdcErrOrderActionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcErrOrderActionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcErrOrderActionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcErrOrderActionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcErrOrderActionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcErrOrderActionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcErrOrderActionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcErrOrderActionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcErrOrderActionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcErrOrderActionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcErrOrderActionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}