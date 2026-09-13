
#include "PyCThostFtdcForQuoteField.h"

///询价

static int PyCThostFtdcForQuoteFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "reserve1", "ForQuoteRef", "UserID", "ForQuoteLocalID", "ExchangeID", "ParticipantID", "ClientID", "reserve2", "TraderID", "InstallID", "InsertDate", "InsertTime", "ForQuoteStatus", "FrontID", "SessionID", "StatusMsg", "ActiveUserID", "BrokerForQutoSeq", "InvestUnitID", "reserve3", "MacAddress", "InstrumentID", "ExchangeInstID", "IPAddress", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcForQuoteField_BrokerID = NULL;
    Py_ssize_t CThostFtdcForQuoteField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcForQuoteField_InvestorID = NULL;
    Py_ssize_t CThostFtdcForQuoteField_InvestorID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcForQuoteField_reserve1 = NULL;
    Py_ssize_t CThostFtdcForQuoteField_reserve1_length = 0;

    /// 询价引用
    /// typedef char TThostFtdcOrderRefType[13]
    char *CThostFtdcForQuoteField_ForQuoteRef = NULL;
    Py_ssize_t CThostFtdcForQuoteField_ForQuoteRef_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcForQuoteField_UserID = NULL;
    Py_ssize_t CThostFtdcForQuoteField_UserID_length = 0;

    /// 本地询价编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    char *CThostFtdcForQuoteField_ForQuoteLocalID = NULL;
    Py_ssize_t CThostFtdcForQuoteField_ForQuoteLocalID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcForQuoteField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcForQuoteField_ExchangeID_length = 0;

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcForQuoteField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcForQuoteField_ParticipantID_length = 0;

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    char *CThostFtdcForQuoteField_ClientID = NULL;
    Py_ssize_t CThostFtdcForQuoteField_ClientID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    char *CThostFtdcForQuoteField_reserve2 = NULL;
    Py_ssize_t CThostFtdcForQuoteField_reserve2_length = 0;

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    char *CThostFtdcForQuoteField_TraderID = NULL;
    Py_ssize_t CThostFtdcForQuoteField_TraderID_length = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcForQuoteField_InstallID = 0;

    /// 报单日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcForQuoteField_InsertDate = NULL;
    Py_ssize_t CThostFtdcForQuoteField_InsertDate_length = 0;

    /// 插入时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcForQuoteField_InsertTime = NULL;
    Py_ssize_t CThostFtdcForQuoteField_InsertTime_length = 0;

    /// 询价状态
    /// typedef char TThostFtdcForQuoteStatusType
    char CThostFtdcForQuoteField_ForQuoteStatus = 0;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    int CThostFtdcForQuoteField_FrontID = 0;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcForQuoteField_SessionID = 0;

    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    char *CThostFtdcForQuoteField_StatusMsg = NULL;
    Py_ssize_t CThostFtdcForQuoteField_StatusMsg_length = 0;

    /// 操作用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcForQuoteField_ActiveUserID = NULL;
    Py_ssize_t CThostFtdcForQuoteField_ActiveUserID_length = 0;

    /// 经纪公司询价编号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcForQuoteField_BrokerForQutoSeq = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcForQuoteField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcForQuoteField_InvestUnitID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcForQuoteField_reserve3 = NULL;
    Py_ssize_t CThostFtdcForQuoteField_reserve3_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcForQuoteField_MacAddress = NULL;
    Py_ssize_t CThostFtdcForQuoteField_MacAddress_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcForQuoteField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcForQuoteField_InstrumentID_length = 0;

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    char *CThostFtdcForQuoteField_ExchangeInstID = NULL;
    Py_ssize_t CThostFtdcForQuoteField_ExchangeInstID_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcForQuoteField_IPAddress = NULL;
    Py_ssize_t CThostFtdcForQuoteField_IPAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#y#y#iy#y#ciiy#y#iy#y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcForQuoteField_BrokerID, &CThostFtdcForQuoteField_BrokerID_length
        , &CThostFtdcForQuoteField_InvestorID, &CThostFtdcForQuoteField_InvestorID_length
        , &CThostFtdcForQuoteField_reserve1, &CThostFtdcForQuoteField_reserve1_length
        , &CThostFtdcForQuoteField_ForQuoteRef, &CThostFtdcForQuoteField_ForQuoteRef_length
        , &CThostFtdcForQuoteField_UserID, &CThostFtdcForQuoteField_UserID_length
        , &CThostFtdcForQuoteField_ForQuoteLocalID, &CThostFtdcForQuoteField_ForQuoteLocalID_length
        , &CThostFtdcForQuoteField_ExchangeID, &CThostFtdcForQuoteField_ExchangeID_length
        , &CThostFtdcForQuoteField_ParticipantID, &CThostFtdcForQuoteField_ParticipantID_length
        , &CThostFtdcForQuoteField_ClientID, &CThostFtdcForQuoteField_ClientID_length
        , &CThostFtdcForQuoteField_reserve2, &CThostFtdcForQuoteField_reserve2_length
        , &CThostFtdcForQuoteField_TraderID, &CThostFtdcForQuoteField_TraderID_length
        , &CThostFtdcForQuoteField_InstallID
        , &CThostFtdcForQuoteField_InsertDate, &CThostFtdcForQuoteField_InsertDate_length
        , &CThostFtdcForQuoteField_InsertTime, &CThostFtdcForQuoteField_InsertTime_length
        , &CThostFtdcForQuoteField_ForQuoteStatus
        , &CThostFtdcForQuoteField_FrontID
        , &CThostFtdcForQuoteField_SessionID
        , &CThostFtdcForQuoteField_StatusMsg, &CThostFtdcForQuoteField_StatusMsg_length
        , &CThostFtdcForQuoteField_ActiveUserID, &CThostFtdcForQuoteField_ActiveUserID_length
        , &CThostFtdcForQuoteField_BrokerForQutoSeq
        , &CThostFtdcForQuoteField_InvestUnitID, &CThostFtdcForQuoteField_InvestUnitID_length
        , &CThostFtdcForQuoteField_reserve3, &CThostFtdcForQuoteField_reserve3_length
        , &CThostFtdcForQuoteField_MacAddress, &CThostFtdcForQuoteField_MacAddress_length
        , &CThostFtdcForQuoteField_InstrumentID, &CThostFtdcForQuoteField_InstrumentID_length
        , &CThostFtdcForQuoteField_ExchangeInstID, &CThostFtdcForQuoteField_ExchangeInstID_length
        , &CThostFtdcForQuoteField_IPAddress, &CThostFtdcForQuoteField_IPAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteFieldData>(self);
    CThostFtdcForQuoteField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcForQuoteField_BrokerID != NULL ) {
        if(CThostFtdcForQuoteField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcForQuoteField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcForQuoteField_BrokerID, CThostFtdcForQuoteField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcForQuoteField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcForQuoteField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcForQuoteField_InvestorID != NULL ) {
        if(CThostFtdcForQuoteField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcForQuoteField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcForQuoteField_InvestorID, CThostFtdcForQuoteField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcForQuoteField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcForQuoteField_InvestorID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcForQuoteField_reserve1 != NULL ) {
        if(CThostFtdcForQuoteField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcForQuoteField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcForQuoteField_reserve1, CThostFtdcForQuoteField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcForQuoteField_reserve1, sizeof(data->reserve1));
        CThostFtdcForQuoteField_reserve1 = NULL;
    }

    /// 询价引用
    /// typedef char TThostFtdcOrderRefType[13]
    if( CThostFtdcForQuoteField_ForQuoteRef != NULL ) {
        if(CThostFtdcForQuoteField_ForQuoteRef_length >= (Py_ssize_t)sizeof(data->ForQuoteRef)) {
            PyErr_Format(PyExc_ValueError, "ForQuoteRef too long: length=%zd (max allowed is 12)", CThostFtdcForQuoteField_ForQuoteRef_length);
            return -1;
        }
        // memset(data->ForQuoteRef, 0, sizeof(data->ForQuoteRef));
        // memcpy(data->ForQuoteRef, CThostFtdcForQuoteField_ForQuoteRef, CThostFtdcForQuoteField_ForQuoteRef_length);
        strncpy(data->ForQuoteRef, CThostFtdcForQuoteField_ForQuoteRef, sizeof(data->ForQuoteRef));
        CThostFtdcForQuoteField_ForQuoteRef = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcForQuoteField_UserID != NULL ) {
        if(CThostFtdcForQuoteField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcForQuoteField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcForQuoteField_UserID, CThostFtdcForQuoteField_UserID_length);
        strncpy(data->UserID, CThostFtdcForQuoteField_UserID, sizeof(data->UserID));
        CThostFtdcForQuoteField_UserID = NULL;
    }

    /// 本地询价编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    if( CThostFtdcForQuoteField_ForQuoteLocalID != NULL ) {
        if(CThostFtdcForQuoteField_ForQuoteLocalID_length >= (Py_ssize_t)sizeof(data->ForQuoteLocalID)) {
            PyErr_Format(PyExc_ValueError, "ForQuoteLocalID too long: length=%zd (max allowed is 12)", CThostFtdcForQuoteField_ForQuoteLocalID_length);
            return -1;
        }
        // memset(data->ForQuoteLocalID, 0, sizeof(data->ForQuoteLocalID));
        // memcpy(data->ForQuoteLocalID, CThostFtdcForQuoteField_ForQuoteLocalID, CThostFtdcForQuoteField_ForQuoteLocalID_length);
        strncpy(data->ForQuoteLocalID, CThostFtdcForQuoteField_ForQuoteLocalID, sizeof(data->ForQuoteLocalID));
        CThostFtdcForQuoteField_ForQuoteLocalID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcForQuoteField_ExchangeID != NULL ) {
        if(CThostFtdcForQuoteField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcForQuoteField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcForQuoteField_ExchangeID, CThostFtdcForQuoteField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcForQuoteField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcForQuoteField_ExchangeID = NULL;
    }

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcForQuoteField_ParticipantID != NULL ) {
        if(CThostFtdcForQuoteField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcForQuoteField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcForQuoteField_ParticipantID, CThostFtdcForQuoteField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcForQuoteField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcForQuoteField_ParticipantID = NULL;
    }

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    if( CThostFtdcForQuoteField_ClientID != NULL ) {
        if(CThostFtdcForQuoteField_ClientID_length >= (Py_ssize_t)sizeof(data->ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is 10)", CThostFtdcForQuoteField_ClientID_length);
            return -1;
        }
        // memset(data->ClientID, 0, sizeof(data->ClientID));
        // memcpy(data->ClientID, CThostFtdcForQuoteField_ClientID, CThostFtdcForQuoteField_ClientID_length);
        strncpy(data->ClientID, CThostFtdcForQuoteField_ClientID, sizeof(data->ClientID));
        CThostFtdcForQuoteField_ClientID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    if( CThostFtdcForQuoteField_reserve2 != NULL ) {
        if(CThostFtdcForQuoteField_reserve2_length >= (Py_ssize_t)sizeof(data->reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is 30)", CThostFtdcForQuoteField_reserve2_length);
            return -1;
        }
        // memset(data->reserve2, 0, sizeof(data->reserve2));
        // memcpy(data->reserve2, CThostFtdcForQuoteField_reserve2, CThostFtdcForQuoteField_reserve2_length);
        strncpy(data->reserve2, CThostFtdcForQuoteField_reserve2, sizeof(data->reserve2));
        CThostFtdcForQuoteField_reserve2 = NULL;
    }

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    if( CThostFtdcForQuoteField_TraderID != NULL ) {
        if(CThostFtdcForQuoteField_TraderID_length >= (Py_ssize_t)sizeof(data->TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is 20)", CThostFtdcForQuoteField_TraderID_length);
            return -1;
        }
        // memset(data->TraderID, 0, sizeof(data->TraderID));
        // memcpy(data->TraderID, CThostFtdcForQuoteField_TraderID, CThostFtdcForQuoteField_TraderID_length);
        strncpy(data->TraderID, CThostFtdcForQuoteField_TraderID, sizeof(data->TraderID));
        CThostFtdcForQuoteField_TraderID = NULL;
    }

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcForQuoteField_InstallID;

    /// 报单日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcForQuoteField_InsertDate != NULL ) {
        if(CThostFtdcForQuoteField_InsertDate_length >= (Py_ssize_t)sizeof(data->InsertDate)) {
            PyErr_Format(PyExc_ValueError, "InsertDate too long: length=%zd (max allowed is 8)", CThostFtdcForQuoteField_InsertDate_length);
            return -1;
        }
        // memset(data->InsertDate, 0, sizeof(data->InsertDate));
        // memcpy(data->InsertDate, CThostFtdcForQuoteField_InsertDate, CThostFtdcForQuoteField_InsertDate_length);
        strncpy(data->InsertDate, CThostFtdcForQuoteField_InsertDate, sizeof(data->InsertDate));
        CThostFtdcForQuoteField_InsertDate = NULL;
    }

    /// 插入时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcForQuoteField_InsertTime != NULL ) {
        if(CThostFtdcForQuoteField_InsertTime_length >= (Py_ssize_t)sizeof(data->InsertTime)) {
            PyErr_Format(PyExc_ValueError, "InsertTime too long: length=%zd (max allowed is 8)", CThostFtdcForQuoteField_InsertTime_length);
            return -1;
        }
        // memset(data->InsertTime, 0, sizeof(data->InsertTime));
        // memcpy(data->InsertTime, CThostFtdcForQuoteField_InsertTime, CThostFtdcForQuoteField_InsertTime_length);
        strncpy(data->InsertTime, CThostFtdcForQuoteField_InsertTime, sizeof(data->InsertTime));
        CThostFtdcForQuoteField_InsertTime = NULL;
    }

    /// 询价状态
    /// typedef char TThostFtdcForQuoteStatusType
    data->ForQuoteStatus = CThostFtdcForQuoteField_ForQuoteStatus;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    data->FrontID = CThostFtdcForQuoteField_FrontID;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcForQuoteField_SessionID;

    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    if( CThostFtdcForQuoteField_StatusMsg != NULL ) {
        if(CThostFtdcForQuoteField_StatusMsg_length >= (Py_ssize_t)sizeof(data->StatusMsg)) {
            PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is 80)", CThostFtdcForQuoteField_StatusMsg_length);
            return -1;
        }
        // memset(data->StatusMsg, 0, sizeof(data->StatusMsg));
        // memcpy(data->StatusMsg, CThostFtdcForQuoteField_StatusMsg, CThostFtdcForQuoteField_StatusMsg_length);
        strncpy(data->StatusMsg, CThostFtdcForQuoteField_StatusMsg, sizeof(data->StatusMsg));
        CThostFtdcForQuoteField_StatusMsg = NULL;
    }

    /// 操作用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcForQuoteField_ActiveUserID != NULL ) {
        if(CThostFtdcForQuoteField_ActiveUserID_length >= (Py_ssize_t)sizeof(data->ActiveUserID)) {
            PyErr_Format(PyExc_ValueError, "ActiveUserID too long: length=%zd (max allowed is 15)", CThostFtdcForQuoteField_ActiveUserID_length);
            return -1;
        }
        // memset(data->ActiveUserID, 0, sizeof(data->ActiveUserID));
        // memcpy(data->ActiveUserID, CThostFtdcForQuoteField_ActiveUserID, CThostFtdcForQuoteField_ActiveUserID_length);
        strncpy(data->ActiveUserID, CThostFtdcForQuoteField_ActiveUserID, sizeof(data->ActiveUserID));
        CThostFtdcForQuoteField_ActiveUserID = NULL;
    }

    /// 经纪公司询价编号
    /// typedef int TThostFtdcSequenceNoType
    data->BrokerForQutoSeq = CThostFtdcForQuoteField_BrokerForQutoSeq;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcForQuoteField_InvestUnitID != NULL ) {
        if(CThostFtdcForQuoteField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcForQuoteField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcForQuoteField_InvestUnitID, CThostFtdcForQuoteField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcForQuoteField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcForQuoteField_InvestUnitID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcForQuoteField_reserve3 != NULL ) {
        if(CThostFtdcForQuoteField_reserve3_length >= (Py_ssize_t)sizeof(data->reserve3)) {
            PyErr_Format(PyExc_ValueError, "reserve3 too long: length=%zd (max allowed is 15)", CThostFtdcForQuoteField_reserve3_length);
            return -1;
        }
        // memset(data->reserve3, 0, sizeof(data->reserve3));
        // memcpy(data->reserve3, CThostFtdcForQuoteField_reserve3, CThostFtdcForQuoteField_reserve3_length);
        strncpy(data->reserve3, CThostFtdcForQuoteField_reserve3, sizeof(data->reserve3));
        CThostFtdcForQuoteField_reserve3 = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcForQuoteField_MacAddress != NULL ) {
        if(CThostFtdcForQuoteField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcForQuoteField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcForQuoteField_MacAddress, CThostFtdcForQuoteField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcForQuoteField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcForQuoteField_MacAddress = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcForQuoteField_InstrumentID != NULL ) {
        if(CThostFtdcForQuoteField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcForQuoteField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcForQuoteField_InstrumentID, CThostFtdcForQuoteField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcForQuoteField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcForQuoteField_InstrumentID = NULL;
    }

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    if( CThostFtdcForQuoteField_ExchangeInstID != NULL ) {
        if(CThostFtdcForQuoteField_ExchangeInstID_length >= (Py_ssize_t)sizeof(data->ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is 80)", CThostFtdcForQuoteField_ExchangeInstID_length);
            return -1;
        }
        // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
        // memcpy(data->ExchangeInstID, CThostFtdcForQuoteField_ExchangeInstID, CThostFtdcForQuoteField_ExchangeInstID_length);
        strncpy(data->ExchangeInstID, CThostFtdcForQuoteField_ExchangeInstID, sizeof(data->ExchangeInstID));
        CThostFtdcForQuoteField_ExchangeInstID = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcForQuoteField_IPAddress != NULL ) {
        if(CThostFtdcForQuoteField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcForQuoteField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcForQuoteField_IPAddress, CThostFtdcForQuoteField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcForQuoteField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcForQuoteField_IPAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcForQuoteFieldType_repr(PyObject *self) {

    PyCThostFtdcForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteFieldData>(self);
    CThostFtdcForQuoteField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:y,s:y,s:c,s:i,s:i,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "ForQuoteRef", data->ForQuoteRef//, (Py_ssize_t)sizeof(data->ForQuoteRef)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "ForQuoteLocalID", data->ForQuoteLocalID//, (Py_ssize_t)sizeof(data->ForQuoteLocalID)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ParticipantID", data->ParticipantID//, (Py_ssize_t)sizeof(data->ParticipantID)
        , "ClientID", data->ClientID//, (Py_ssize_t)sizeof(data->ClientID)
        , "reserve2", data->reserve2//, (Py_ssize_t)sizeof(data->reserve2)
        , "TraderID", data->TraderID//, (Py_ssize_t)sizeof(data->TraderID)
        , "InstallID", data->InstallID
        , "InsertDate", data->InsertDate//, (Py_ssize_t)sizeof(data->InsertDate)
        , "InsertTime", data->InsertTime//, (Py_ssize_t)sizeof(data->InsertTime)
        , "ForQuoteStatus", data->ForQuoteStatus
        , "FrontID", data->FrontID
        , "SessionID", data->SessionID
        , "StatusMsg", data->StatusMsg//, (Py_ssize_t)sizeof(data->StatusMsg)
        , "ActiveUserID", data->ActiveUserID//, (Py_ssize_t)sizeof(data->ActiveUserID)
        , "BrokerForQutoSeq", data->BrokerForQutoSeq
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
        , "reserve3", data->reserve3//, (Py_ssize_t)sizeof(data->reserve3)
        , "MacAddress", data->MacAddress//, (Py_ssize_t)sizeof(data->MacAddress)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "ExchangeInstID", data->ExchangeInstID//, (Py_ssize_t)sizeof(data->ExchangeInstID)
        , "IPAddress", data->IPAddress//, (Py_ssize_t)sizeof(data->IPAddress)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcForQuoteField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcForQuoteField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcForQuoteFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteFieldData>(self);
    CThostFtdcForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcForQuoteFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcForQuoteField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteFieldData>(self);
    CThostFtdcForQuoteField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcForQuoteFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteFieldData>(self);
    CThostFtdcForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcForQuoteFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcForQuoteField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteFieldData>(self);
    CThostFtdcForQuoteField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcForQuoteFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteFieldData>(self);
    CThostFtdcForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcForQuoteFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcForQuoteField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteFieldData>(self);
    CThostFtdcForQuoteField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 询价引用
/// typedef char TThostFtdcOrderRefType[13]
static PyObject *PyCThostFtdcForQuoteFieldType_get_ForQuoteRef(PyObject *self, void *closure) {
    PyCThostFtdcForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteFieldData>(self);
    CThostFtdcForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ForQuoteRef, (Py_ssize_t)sizeof(data->ForQuoteRef));
    return PyBytes_FromString(data->ForQuoteRef);
}

static int PyCThostFtdcForQuoteFieldType_set_ForQuoteRef(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ForQuoteRef Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcForQuoteField::ForQuoteRef)) {
        PyErr_SetString(PyExc_ValueError, "ForQuoteRef must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteFieldData>(self);
    CThostFtdcForQuoteField *data = &(extra->data);
    // memset(data->ForQuoteRef, 0, sizeof(data->ForQuoteRef));
    // memcpy(data->ForQuoteRef, buf, len);
    strncpy(data->ForQuoteRef, buf, sizeof(data->ForQuoteRef));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcForQuoteFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteFieldData>(self);
    CThostFtdcForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcForQuoteFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcForQuoteField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteFieldData>(self);
    CThostFtdcForQuoteField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 本地询价编号
/// typedef char TThostFtdcOrderLocalIDType[13]
static PyObject *PyCThostFtdcForQuoteFieldType_get_ForQuoteLocalID(PyObject *self, void *closure) {
    PyCThostFtdcForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteFieldData>(self);
    CThostFtdcForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ForQuoteLocalID, (Py_ssize_t)sizeof(data->ForQuoteLocalID));
    return PyBytes_FromString(data->ForQuoteLocalID);
}

static int PyCThostFtdcForQuoteFieldType_set_ForQuoteLocalID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ForQuoteLocalID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcForQuoteField::ForQuoteLocalID)) {
        PyErr_SetString(PyExc_ValueError, "ForQuoteLocalID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteFieldData>(self);
    CThostFtdcForQuoteField *data = &(extra->data);
    // memset(data->ForQuoteLocalID, 0, sizeof(data->ForQuoteLocalID));
    // memcpy(data->ForQuoteLocalID, buf, len);
    strncpy(data->ForQuoteLocalID, buf, sizeof(data->ForQuoteLocalID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcForQuoteFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteFieldData>(self);
    CThostFtdcForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcForQuoteFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcForQuoteField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteFieldData>(self);
    CThostFtdcForQuoteField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 会员代码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcForQuoteFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteFieldData>(self);
    CThostFtdcForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcForQuoteFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcForQuoteField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteFieldData>(self);
    CThostFtdcForQuoteField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户代码
/// typedef char TThostFtdcClientIDType[11]
static PyObject *PyCThostFtdcForQuoteFieldType_get_ClientID(PyObject *self, void *closure) {
    PyCThostFtdcForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteFieldData>(self);
    CThostFtdcForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientID, (Py_ssize_t)sizeof(data->ClientID));
    return PyBytes_FromString(data->ClientID);
}

static int PyCThostFtdcForQuoteFieldType_set_ClientID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcForQuoteField::ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteFieldData>(self);
    CThostFtdcForQuoteField *data = &(extra->data);
    // memset(data->ClientID, 0, sizeof(data->ClientID));
    // memcpy(data->ClientID, buf, len);
    strncpy(data->ClientID, buf, sizeof(data->ClientID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldExchangeInstIDType[31]
static PyObject *PyCThostFtdcForQuoteFieldType_get_reserve2(PyObject *self, void *closure) {
    PyCThostFtdcForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteFieldData>(self);
    CThostFtdcForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve2, (Py_ssize_t)sizeof(data->reserve2));
    return PyBytes_FromString(data->reserve2);
}

static int PyCThostFtdcForQuoteFieldType_set_reserve2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcForQuoteField::reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteFieldData>(self);
    CThostFtdcForQuoteField *data = &(extra->data);
    // memset(data->reserve2, 0, sizeof(data->reserve2));
    // memcpy(data->reserve2, buf, len);
    strncpy(data->reserve2, buf, sizeof(data->reserve2));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所交易员代码
/// typedef char TThostFtdcTraderIDType[21]
static PyObject *PyCThostFtdcForQuoteFieldType_get_TraderID(PyObject *self, void *closure) {
    PyCThostFtdcForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteFieldData>(self);
    CThostFtdcForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TraderID, (Py_ssize_t)sizeof(data->TraderID));
    return PyBytes_FromString(data->TraderID);
}

static int PyCThostFtdcForQuoteFieldType_set_TraderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcForQuoteField::TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteFieldData>(self);
    CThostFtdcForQuoteField *data = &(extra->data);
    // memset(data->TraderID, 0, sizeof(data->TraderID));
    // memcpy(data->TraderID, buf, len);
    strncpy(data->TraderID, buf, sizeof(data->TraderID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcForQuoteFieldType_get_InsertDate(PyObject *self, void *closure) {
    PyCThostFtdcForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteFieldData>(self);
    CThostFtdcForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InsertDate, (Py_ssize_t)sizeof(data->InsertDate));
    return PyBytes_FromString(data->InsertDate);
}

static int PyCThostFtdcForQuoteFieldType_set_InsertDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InsertDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcForQuoteField::InsertDate)) {
        PyErr_SetString(PyExc_ValueError, "InsertDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteFieldData>(self);
    CThostFtdcForQuoteField *data = &(extra->data);
    // memset(data->InsertDate, 0, sizeof(data->InsertDate));
    // memcpy(data->InsertDate, buf, len);
    strncpy(data->InsertDate, buf, sizeof(data->InsertDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 插入时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcForQuoteFieldType_get_InsertTime(PyObject *self, void *closure) {
    PyCThostFtdcForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteFieldData>(self);
    CThostFtdcForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InsertTime, (Py_ssize_t)sizeof(data->InsertTime));
    return PyBytes_FromString(data->InsertTime);
}

static int PyCThostFtdcForQuoteFieldType_set_InsertTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InsertTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcForQuoteField::InsertTime)) {
        PyErr_SetString(PyExc_ValueError, "InsertTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteFieldData>(self);
    CThostFtdcForQuoteField *data = &(extra->data);
    // memset(data->InsertTime, 0, sizeof(data->InsertTime));
    // memcpy(data->InsertTime, buf, len);
    strncpy(data->InsertTime, buf, sizeof(data->InsertTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 询价状态
/// typedef char TThostFtdcForQuoteStatusType
static PyObject *PyCThostFtdcForQuoteFieldType_get_ForQuoteStatus(PyObject *self, void *closure) {
    PyCThostFtdcForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteFieldData>(self);
    CThostFtdcForQuoteField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ForQuoteStatus), 1);
}

static int PyCThostFtdcForQuoteFieldType_set_ForQuoteStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ForQuoteStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcForQuoteField::ForQuoteStatus)) {
        PyErr_SetString(PyExc_ValueError, "ForQuoteStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteFieldData>(self);
    CThostFtdcForQuoteField *data = &(extra->data);
    data->ForQuoteStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 状态信息
/// typedef char TThostFtdcErrorMsgType[81]
static PyObject *PyCThostFtdcForQuoteFieldType_get_StatusMsg(PyObject *self, void *closure) {
    PyCThostFtdcForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteFieldData>(self);
    CThostFtdcForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->StatusMsg, (Py_ssize_t)sizeof(data->StatusMsg));
    return PyBytes_FromString(data->StatusMsg);
}

static int PyCThostFtdcForQuoteFieldType_set_StatusMsg(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "StatusMsg Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcForQuoteField::StatusMsg)) {
        PyErr_SetString(PyExc_ValueError, "StatusMsg must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteFieldData>(self);
    CThostFtdcForQuoteField *data = &(extra->data);
    // memset(data->StatusMsg, 0, sizeof(data->StatusMsg));
    // memcpy(data->StatusMsg, buf, len);
    strncpy(data->StatusMsg, buf, sizeof(data->StatusMsg));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcForQuoteFieldType_get_ActiveUserID(PyObject *self, void *closure) {
    PyCThostFtdcForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteFieldData>(self);
    CThostFtdcForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActiveUserID, (Py_ssize_t)sizeof(data->ActiveUserID));
    return PyBytes_FromString(data->ActiveUserID);
}

static int PyCThostFtdcForQuoteFieldType_set_ActiveUserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActiveUserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcForQuoteField::ActiveUserID)) {
        PyErr_SetString(PyExc_ValueError, "ActiveUserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteFieldData>(self);
    CThostFtdcForQuoteField *data = &(extra->data);
    // memset(data->ActiveUserID, 0, sizeof(data->ActiveUserID));
    // memcpy(data->ActiveUserID, buf, len);
    strncpy(data->ActiveUserID, buf, sizeof(data->ActiveUserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcForQuoteFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteFieldData>(self);
    CThostFtdcForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcForQuoteFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcForQuoteField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteFieldData>(self);
    CThostFtdcForQuoteField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcForQuoteFieldType_get_reserve3(PyObject *self, void *closure) {
    PyCThostFtdcForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteFieldData>(self);
    CThostFtdcForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve3, (Py_ssize_t)sizeof(data->reserve3));
    return PyBytes_FromString(data->reserve3);
}

static int PyCThostFtdcForQuoteFieldType_set_reserve3(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve3 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcForQuoteField::reserve3)) {
        PyErr_SetString(PyExc_ValueError, "reserve3 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteFieldData>(self);
    CThostFtdcForQuoteField *data = &(extra->data);
    // memset(data->reserve3, 0, sizeof(data->reserve3));
    // memcpy(data->reserve3, buf, len);
    strncpy(data->reserve3, buf, sizeof(data->reserve3));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcForQuoteFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteFieldData>(self);
    CThostFtdcForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcForQuoteFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcForQuoteField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteFieldData>(self);
    CThostFtdcForQuoteField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcForQuoteFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteFieldData>(self);
    CThostFtdcForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcForQuoteFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcForQuoteField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteFieldData>(self);
    CThostFtdcForQuoteField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约在交易所的代码
/// typedef char TThostFtdcExchangeInstIDType[81]
static PyObject *PyCThostFtdcForQuoteFieldType_get_ExchangeInstID(PyObject *self, void *closure) {
    PyCThostFtdcForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteFieldData>(self);
    CThostFtdcForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeInstID, (Py_ssize_t)sizeof(data->ExchangeInstID));
    return PyBytes_FromString(data->ExchangeInstID);
}

static int PyCThostFtdcForQuoteFieldType_set_ExchangeInstID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcForQuoteField::ExchangeInstID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteFieldData>(self);
    CThostFtdcForQuoteField *data = &(extra->data);
    // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
    // memcpy(data->ExchangeInstID, buf, len);
    strncpy(data->ExchangeInstID, buf, sizeof(data->ExchangeInstID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcForQuoteFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteFieldData>(self);
    CThostFtdcForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcForQuoteFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcForQuoteField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteFieldData>(self);
    CThostFtdcForQuoteField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcForQuoteFieldType_members[] = {
    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    {
        .name = "InstallID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcForQuoteFieldData, data.InstallID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("安装编号")
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
        .offset = offsetof(PyCThostFtdcForQuoteFieldData, data.FrontID),
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
        .offset = offsetof(PyCThostFtdcForQuoteFieldData, data.SessionID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("会话编号")
    },
    /// 经纪公司询价编号
    /// typedef int TThostFtdcSequenceNoType
    {
        .name = "BrokerForQutoSeq",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcForQuoteFieldData, data.BrokerForQutoSeq),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("经纪公司询价编号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcForQuoteFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcForQuoteFieldType_get_BrokerID,
    .set = PyCThostFtdcForQuoteFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcForQuoteFieldType_get_InvestorID,
    .set = PyCThostFtdcForQuoteFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcForQuoteFieldType_get_reserve1,
    .set = PyCThostFtdcForQuoteFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 询价引用
    /// typedef char TThostFtdcOrderRefType[13]
    {
    .name = "ForQuoteRef",
    .get = PyCThostFtdcForQuoteFieldType_get_ForQuoteRef,
    .set = PyCThostFtdcForQuoteFieldType_set_ForQuoteRef,
    .doc = PyDoc_STR("询价引用"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcForQuoteFieldType_get_UserID,
    .set = PyCThostFtdcForQuoteFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 本地询价编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    {
    .name = "ForQuoteLocalID",
    .get = PyCThostFtdcForQuoteFieldType_get_ForQuoteLocalID,
    .set = PyCThostFtdcForQuoteFieldType_set_ForQuoteLocalID,
    .doc = PyDoc_STR("本地询价编号"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcForQuoteFieldType_get_ExchangeID,
    .set = PyCThostFtdcForQuoteFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcForQuoteFieldType_get_ParticipantID,
    .set = PyCThostFtdcForQuoteFieldType_set_ParticipantID,
    .doc = PyDoc_STR("会员代码"),
    },
    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    {
    .name = "ClientID",
    .get = PyCThostFtdcForQuoteFieldType_get_ClientID,
    .set = PyCThostFtdcForQuoteFieldType_set_ClientID,
    .doc = PyDoc_STR("客户代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    {
    .name = "reserve2",
    .get = PyCThostFtdcForQuoteFieldType_get_reserve2,
    .set = PyCThostFtdcForQuoteFieldType_set_reserve2,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    {
    .name = "TraderID",
    .get = PyCThostFtdcForQuoteFieldType_get_TraderID,
    .set = PyCThostFtdcForQuoteFieldType_set_TraderID,
    .doc = PyDoc_STR("交易所交易员代码"),
    },
    /// 报单日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "InsertDate",
    .get = PyCThostFtdcForQuoteFieldType_get_InsertDate,
    .set = PyCThostFtdcForQuoteFieldType_set_InsertDate,
    .doc = PyDoc_STR("报单日期"),
    },
    /// 插入时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "InsertTime",
    .get = PyCThostFtdcForQuoteFieldType_get_InsertTime,
    .set = PyCThostFtdcForQuoteFieldType_set_InsertTime,
    .doc = PyDoc_STR("插入时间"),
    },
    /// 询价状态
    /// typedef char TThostFtdcForQuoteStatusType
    {
    .name = "ForQuoteStatus",
    .get = PyCThostFtdcForQuoteFieldType_get_ForQuoteStatus,
    .set = PyCThostFtdcForQuoteFieldType_set_ForQuoteStatus,
    .doc = PyDoc_STR("询价状态"),
    },
    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    {
    .name = "StatusMsg",
    .get = PyCThostFtdcForQuoteFieldType_get_StatusMsg,
    .set = PyCThostFtdcForQuoteFieldType_set_StatusMsg,
    .doc = PyDoc_STR("状态信息"),
    },
    /// 操作用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "ActiveUserID",
    .get = PyCThostFtdcForQuoteFieldType_get_ActiveUserID,
    .set = PyCThostFtdcForQuoteFieldType_set_ActiveUserID,
    .doc = PyDoc_STR("操作用户代码"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcForQuoteFieldType_get_InvestUnitID,
    .set = PyCThostFtdcForQuoteFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve3",
    .get = PyCThostFtdcForQuoteFieldType_get_reserve3,
    .set = PyCThostFtdcForQuoteFieldType_set_reserve3,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcForQuoteFieldType_get_MacAddress,
    .set = PyCThostFtdcForQuoteFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcForQuoteFieldType_get_InstrumentID,
    .set = PyCThostFtdcForQuoteFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    {
    .name = "ExchangeInstID",
    .get = PyCThostFtdcForQuoteFieldType_get_ExchangeInstID,
    .set = PyCThostFtdcForQuoteFieldType_set_ExchangeInstID,
    .doc = PyDoc_STR("合约在交易所的代码"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcForQuoteFieldType_get_IPAddress,
    .set = PyCThostFtdcForQuoteFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcForQuoteFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcForQuoteField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("询价")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcForQuoteFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcForQuoteFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcForQuoteFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcForQuoteFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcForQuoteFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcForQuoteFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("询价")},
    {Py_tp_members, PyCThostFtdcForQuoteFieldType_members},
    {Py_tp_getset, PyCThostFtdcForQuoteFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcForQuoteFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcForQuoteFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcForQuoteFieldType_spec = {
    .name = "PyCTP.CThostFtdcForQuoteField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcForQuoteFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcForQuoteFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcForQuoteFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcForQuoteFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcForQuoteFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcForQuoteFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcForQuoteFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcForQuoteFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcForQuoteField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcForQuoteField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}