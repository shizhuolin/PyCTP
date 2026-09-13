
#include "PyCThostFtdcCombActionField.h"

///申请组合

static int PyCThostFtdcCombActionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "reserve1", "CombActionRef", "UserID", "Direction", "Volume", "CombDirection", "HedgeFlag", "ActionLocalID", "ExchangeID", "ParticipantID", "ClientID", "reserve2", "TraderID", "InstallID", "ActionStatus", "NotifySequence", "TradingDay", "SettlementID", "SequenceNo", "FrontID", "SessionID", "UserProductInfo", "StatusMsg", "reserve3", "MacAddress", "ComTradeID", "BranchID", "InvestUnitID", "InstrumentID", "ExchangeInstID", "IPAddress", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcCombActionField_BrokerID = NULL;
    Py_ssize_t CThostFtdcCombActionField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcCombActionField_InvestorID = NULL;
    Py_ssize_t CThostFtdcCombActionField_InvestorID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcCombActionField_reserve1 = NULL;
    Py_ssize_t CThostFtdcCombActionField_reserve1_length = 0;

    /// 组合引用
    /// typedef char TThostFtdcOrderRefType[13]
    char *CThostFtdcCombActionField_CombActionRef = NULL;
    Py_ssize_t CThostFtdcCombActionField_CombActionRef_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcCombActionField_UserID = NULL;
    Py_ssize_t CThostFtdcCombActionField_UserID_length = 0;

    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    char CThostFtdcCombActionField_Direction = 0;

    /// 数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcCombActionField_Volume = 0;

    /// 组合指令方向
    /// typedef char TThostFtdcCombDirectionType
    char CThostFtdcCombActionField_CombDirection = 0;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcCombActionField_HedgeFlag = 0;

    /// 本地申请组合编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    char *CThostFtdcCombActionField_ActionLocalID = NULL;
    Py_ssize_t CThostFtdcCombActionField_ActionLocalID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcCombActionField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcCombActionField_ExchangeID_length = 0;

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcCombActionField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcCombActionField_ParticipantID_length = 0;

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    char *CThostFtdcCombActionField_ClientID = NULL;
    Py_ssize_t CThostFtdcCombActionField_ClientID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    char *CThostFtdcCombActionField_reserve2 = NULL;
    Py_ssize_t CThostFtdcCombActionField_reserve2_length = 0;

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    char *CThostFtdcCombActionField_TraderID = NULL;
    Py_ssize_t CThostFtdcCombActionField_TraderID_length = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcCombActionField_InstallID = 0;

    /// 组合状态
    /// typedef char TThostFtdcOrderActionStatusType
    char CThostFtdcCombActionField_ActionStatus = 0;

    /// 报单提示序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcCombActionField_NotifySequence = 0;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcCombActionField_TradingDay = NULL;
    Py_ssize_t CThostFtdcCombActionField_TradingDay_length = 0;

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    int CThostFtdcCombActionField_SettlementID = 0;

    /// 序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcCombActionField_SequenceNo = 0;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    int CThostFtdcCombActionField_FrontID = 0;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcCombActionField_SessionID = 0;

    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    char *CThostFtdcCombActionField_UserProductInfo = NULL;
    Py_ssize_t CThostFtdcCombActionField_UserProductInfo_length = 0;

    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    char *CThostFtdcCombActionField_StatusMsg = NULL;
    Py_ssize_t CThostFtdcCombActionField_StatusMsg_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcCombActionField_reserve3 = NULL;
    Py_ssize_t CThostFtdcCombActionField_reserve3_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcCombActionField_MacAddress = NULL;
    Py_ssize_t CThostFtdcCombActionField_MacAddress_length = 0;

    /// 组合编号
    /// typedef char TThostFtdcTradeIDType[21]
    char *CThostFtdcCombActionField_ComTradeID = NULL;
    Py_ssize_t CThostFtdcCombActionField_ComTradeID_length = 0;

    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    char *CThostFtdcCombActionField_BranchID = NULL;
    Py_ssize_t CThostFtdcCombActionField_BranchID_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcCombActionField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcCombActionField_InvestUnitID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcCombActionField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcCombActionField_InstrumentID_length = 0;

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    char *CThostFtdcCombActionField_ExchangeInstID = NULL;
    Py_ssize_t CThostFtdcCombActionField_ExchangeInstID_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcCombActionField_IPAddress = NULL;
    Py_ssize_t CThostFtdcCombActionField_IPAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#ciccy#y#y#y#y#y#iciy#iiiiy#y#y#y#y#y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcCombActionField_BrokerID, &CThostFtdcCombActionField_BrokerID_length
        , &CThostFtdcCombActionField_InvestorID, &CThostFtdcCombActionField_InvestorID_length
        , &CThostFtdcCombActionField_reserve1, &CThostFtdcCombActionField_reserve1_length
        , &CThostFtdcCombActionField_CombActionRef, &CThostFtdcCombActionField_CombActionRef_length
        , &CThostFtdcCombActionField_UserID, &CThostFtdcCombActionField_UserID_length
        , &CThostFtdcCombActionField_Direction
        , &CThostFtdcCombActionField_Volume
        , &CThostFtdcCombActionField_CombDirection
        , &CThostFtdcCombActionField_HedgeFlag
        , &CThostFtdcCombActionField_ActionLocalID, &CThostFtdcCombActionField_ActionLocalID_length
        , &CThostFtdcCombActionField_ExchangeID, &CThostFtdcCombActionField_ExchangeID_length
        , &CThostFtdcCombActionField_ParticipantID, &CThostFtdcCombActionField_ParticipantID_length
        , &CThostFtdcCombActionField_ClientID, &CThostFtdcCombActionField_ClientID_length
        , &CThostFtdcCombActionField_reserve2, &CThostFtdcCombActionField_reserve2_length
        , &CThostFtdcCombActionField_TraderID, &CThostFtdcCombActionField_TraderID_length
        , &CThostFtdcCombActionField_InstallID
        , &CThostFtdcCombActionField_ActionStatus
        , &CThostFtdcCombActionField_NotifySequence
        , &CThostFtdcCombActionField_TradingDay, &CThostFtdcCombActionField_TradingDay_length
        , &CThostFtdcCombActionField_SettlementID
        , &CThostFtdcCombActionField_SequenceNo
        , &CThostFtdcCombActionField_FrontID
        , &CThostFtdcCombActionField_SessionID
        , &CThostFtdcCombActionField_UserProductInfo, &CThostFtdcCombActionField_UserProductInfo_length
        , &CThostFtdcCombActionField_StatusMsg, &CThostFtdcCombActionField_StatusMsg_length
        , &CThostFtdcCombActionField_reserve3, &CThostFtdcCombActionField_reserve3_length
        , &CThostFtdcCombActionField_MacAddress, &CThostFtdcCombActionField_MacAddress_length
        , &CThostFtdcCombActionField_ComTradeID, &CThostFtdcCombActionField_ComTradeID_length
        , &CThostFtdcCombActionField_BranchID, &CThostFtdcCombActionField_BranchID_length
        , &CThostFtdcCombActionField_InvestUnitID, &CThostFtdcCombActionField_InvestUnitID_length
        , &CThostFtdcCombActionField_InstrumentID, &CThostFtdcCombActionField_InstrumentID_length
        , &CThostFtdcCombActionField_ExchangeInstID, &CThostFtdcCombActionField_ExchangeInstID_length
        , &CThostFtdcCombActionField_IPAddress, &CThostFtdcCombActionField_IPAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcCombActionField_BrokerID != NULL ) {
        if(CThostFtdcCombActionField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcCombActionField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcCombActionField_BrokerID, CThostFtdcCombActionField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcCombActionField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcCombActionField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcCombActionField_InvestorID != NULL ) {
        if(CThostFtdcCombActionField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcCombActionField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcCombActionField_InvestorID, CThostFtdcCombActionField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcCombActionField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcCombActionField_InvestorID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcCombActionField_reserve1 != NULL ) {
        if(CThostFtdcCombActionField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcCombActionField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcCombActionField_reserve1, CThostFtdcCombActionField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcCombActionField_reserve1, sizeof(data->reserve1));
        CThostFtdcCombActionField_reserve1 = NULL;
    }

    /// 组合引用
    /// typedef char TThostFtdcOrderRefType[13]
    if( CThostFtdcCombActionField_CombActionRef != NULL ) {
        if(CThostFtdcCombActionField_CombActionRef_length >= (Py_ssize_t)sizeof(data->CombActionRef)) {
            PyErr_Format(PyExc_ValueError, "CombActionRef too long: length=%zd (max allowed is 12)", CThostFtdcCombActionField_CombActionRef_length);
            return -1;
        }
        // memset(data->CombActionRef, 0, sizeof(data->CombActionRef));
        // memcpy(data->CombActionRef, CThostFtdcCombActionField_CombActionRef, CThostFtdcCombActionField_CombActionRef_length);
        strncpy(data->CombActionRef, CThostFtdcCombActionField_CombActionRef, sizeof(data->CombActionRef));
        CThostFtdcCombActionField_CombActionRef = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcCombActionField_UserID != NULL ) {
        if(CThostFtdcCombActionField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcCombActionField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcCombActionField_UserID, CThostFtdcCombActionField_UserID_length);
        strncpy(data->UserID, CThostFtdcCombActionField_UserID, sizeof(data->UserID));
        CThostFtdcCombActionField_UserID = NULL;
    }

    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    data->Direction = CThostFtdcCombActionField_Direction;

    /// 数量
    /// typedef int TThostFtdcVolumeType
    data->Volume = CThostFtdcCombActionField_Volume;

    /// 组合指令方向
    /// typedef char TThostFtdcCombDirectionType
    data->CombDirection = CThostFtdcCombActionField_CombDirection;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    data->HedgeFlag = CThostFtdcCombActionField_HedgeFlag;

    /// 本地申请组合编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    if( CThostFtdcCombActionField_ActionLocalID != NULL ) {
        if(CThostFtdcCombActionField_ActionLocalID_length >= (Py_ssize_t)sizeof(data->ActionLocalID)) {
            PyErr_Format(PyExc_ValueError, "ActionLocalID too long: length=%zd (max allowed is 12)", CThostFtdcCombActionField_ActionLocalID_length);
            return -1;
        }
        // memset(data->ActionLocalID, 0, sizeof(data->ActionLocalID));
        // memcpy(data->ActionLocalID, CThostFtdcCombActionField_ActionLocalID, CThostFtdcCombActionField_ActionLocalID_length);
        strncpy(data->ActionLocalID, CThostFtdcCombActionField_ActionLocalID, sizeof(data->ActionLocalID));
        CThostFtdcCombActionField_ActionLocalID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcCombActionField_ExchangeID != NULL ) {
        if(CThostFtdcCombActionField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcCombActionField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcCombActionField_ExchangeID, CThostFtdcCombActionField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcCombActionField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcCombActionField_ExchangeID = NULL;
    }

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcCombActionField_ParticipantID != NULL ) {
        if(CThostFtdcCombActionField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcCombActionField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcCombActionField_ParticipantID, CThostFtdcCombActionField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcCombActionField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcCombActionField_ParticipantID = NULL;
    }

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    if( CThostFtdcCombActionField_ClientID != NULL ) {
        if(CThostFtdcCombActionField_ClientID_length >= (Py_ssize_t)sizeof(data->ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is 10)", CThostFtdcCombActionField_ClientID_length);
            return -1;
        }
        // memset(data->ClientID, 0, sizeof(data->ClientID));
        // memcpy(data->ClientID, CThostFtdcCombActionField_ClientID, CThostFtdcCombActionField_ClientID_length);
        strncpy(data->ClientID, CThostFtdcCombActionField_ClientID, sizeof(data->ClientID));
        CThostFtdcCombActionField_ClientID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    if( CThostFtdcCombActionField_reserve2 != NULL ) {
        if(CThostFtdcCombActionField_reserve2_length >= (Py_ssize_t)sizeof(data->reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is 30)", CThostFtdcCombActionField_reserve2_length);
            return -1;
        }
        // memset(data->reserve2, 0, sizeof(data->reserve2));
        // memcpy(data->reserve2, CThostFtdcCombActionField_reserve2, CThostFtdcCombActionField_reserve2_length);
        strncpy(data->reserve2, CThostFtdcCombActionField_reserve2, sizeof(data->reserve2));
        CThostFtdcCombActionField_reserve2 = NULL;
    }

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    if( CThostFtdcCombActionField_TraderID != NULL ) {
        if(CThostFtdcCombActionField_TraderID_length >= (Py_ssize_t)sizeof(data->TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is 20)", CThostFtdcCombActionField_TraderID_length);
            return -1;
        }
        // memset(data->TraderID, 0, sizeof(data->TraderID));
        // memcpy(data->TraderID, CThostFtdcCombActionField_TraderID, CThostFtdcCombActionField_TraderID_length);
        strncpy(data->TraderID, CThostFtdcCombActionField_TraderID, sizeof(data->TraderID));
        CThostFtdcCombActionField_TraderID = NULL;
    }

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcCombActionField_InstallID;

    /// 组合状态
    /// typedef char TThostFtdcOrderActionStatusType
    data->ActionStatus = CThostFtdcCombActionField_ActionStatus;

    /// 报单提示序号
    /// typedef int TThostFtdcSequenceNoType
    data->NotifySequence = CThostFtdcCombActionField_NotifySequence;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcCombActionField_TradingDay != NULL ) {
        if(CThostFtdcCombActionField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcCombActionField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcCombActionField_TradingDay, CThostFtdcCombActionField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcCombActionField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcCombActionField_TradingDay = NULL;
    }

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    data->SettlementID = CThostFtdcCombActionField_SettlementID;

    /// 序号
    /// typedef int TThostFtdcSequenceNoType
    data->SequenceNo = CThostFtdcCombActionField_SequenceNo;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    data->FrontID = CThostFtdcCombActionField_FrontID;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcCombActionField_SessionID;

    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    if( CThostFtdcCombActionField_UserProductInfo != NULL ) {
        if(CThostFtdcCombActionField_UserProductInfo_length >= (Py_ssize_t)sizeof(data->UserProductInfo)) {
            PyErr_Format(PyExc_ValueError, "UserProductInfo too long: length=%zd (max allowed is 10)", CThostFtdcCombActionField_UserProductInfo_length);
            return -1;
        }
        // memset(data->UserProductInfo, 0, sizeof(data->UserProductInfo));
        // memcpy(data->UserProductInfo, CThostFtdcCombActionField_UserProductInfo, CThostFtdcCombActionField_UserProductInfo_length);
        strncpy(data->UserProductInfo, CThostFtdcCombActionField_UserProductInfo, sizeof(data->UserProductInfo));
        CThostFtdcCombActionField_UserProductInfo = NULL;
    }

    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    if( CThostFtdcCombActionField_StatusMsg != NULL ) {
        if(CThostFtdcCombActionField_StatusMsg_length >= (Py_ssize_t)sizeof(data->StatusMsg)) {
            PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is 80)", CThostFtdcCombActionField_StatusMsg_length);
            return -1;
        }
        // memset(data->StatusMsg, 0, sizeof(data->StatusMsg));
        // memcpy(data->StatusMsg, CThostFtdcCombActionField_StatusMsg, CThostFtdcCombActionField_StatusMsg_length);
        strncpy(data->StatusMsg, CThostFtdcCombActionField_StatusMsg, sizeof(data->StatusMsg));
        CThostFtdcCombActionField_StatusMsg = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcCombActionField_reserve3 != NULL ) {
        if(CThostFtdcCombActionField_reserve3_length >= (Py_ssize_t)sizeof(data->reserve3)) {
            PyErr_Format(PyExc_ValueError, "reserve3 too long: length=%zd (max allowed is 15)", CThostFtdcCombActionField_reserve3_length);
            return -1;
        }
        // memset(data->reserve3, 0, sizeof(data->reserve3));
        // memcpy(data->reserve3, CThostFtdcCombActionField_reserve3, CThostFtdcCombActionField_reserve3_length);
        strncpy(data->reserve3, CThostFtdcCombActionField_reserve3, sizeof(data->reserve3));
        CThostFtdcCombActionField_reserve3 = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcCombActionField_MacAddress != NULL ) {
        if(CThostFtdcCombActionField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcCombActionField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcCombActionField_MacAddress, CThostFtdcCombActionField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcCombActionField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcCombActionField_MacAddress = NULL;
    }

    /// 组合编号
    /// typedef char TThostFtdcTradeIDType[21]
    if( CThostFtdcCombActionField_ComTradeID != NULL ) {
        if(CThostFtdcCombActionField_ComTradeID_length >= (Py_ssize_t)sizeof(data->ComTradeID)) {
            PyErr_Format(PyExc_ValueError, "ComTradeID too long: length=%zd (max allowed is 20)", CThostFtdcCombActionField_ComTradeID_length);
            return -1;
        }
        // memset(data->ComTradeID, 0, sizeof(data->ComTradeID));
        // memcpy(data->ComTradeID, CThostFtdcCombActionField_ComTradeID, CThostFtdcCombActionField_ComTradeID_length);
        strncpy(data->ComTradeID, CThostFtdcCombActionField_ComTradeID, sizeof(data->ComTradeID));
        CThostFtdcCombActionField_ComTradeID = NULL;
    }

    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    if( CThostFtdcCombActionField_BranchID != NULL ) {
        if(CThostFtdcCombActionField_BranchID_length >= (Py_ssize_t)sizeof(data->BranchID)) {
            PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is 8)", CThostFtdcCombActionField_BranchID_length);
            return -1;
        }
        // memset(data->BranchID, 0, sizeof(data->BranchID));
        // memcpy(data->BranchID, CThostFtdcCombActionField_BranchID, CThostFtdcCombActionField_BranchID_length);
        strncpy(data->BranchID, CThostFtdcCombActionField_BranchID, sizeof(data->BranchID));
        CThostFtdcCombActionField_BranchID = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcCombActionField_InvestUnitID != NULL ) {
        if(CThostFtdcCombActionField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcCombActionField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcCombActionField_InvestUnitID, CThostFtdcCombActionField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcCombActionField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcCombActionField_InvestUnitID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcCombActionField_InstrumentID != NULL ) {
        if(CThostFtdcCombActionField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcCombActionField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcCombActionField_InstrumentID, CThostFtdcCombActionField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcCombActionField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcCombActionField_InstrumentID = NULL;
    }

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    if( CThostFtdcCombActionField_ExchangeInstID != NULL ) {
        if(CThostFtdcCombActionField_ExchangeInstID_length >= (Py_ssize_t)sizeof(data->ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is 80)", CThostFtdcCombActionField_ExchangeInstID_length);
            return -1;
        }
        // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
        // memcpy(data->ExchangeInstID, CThostFtdcCombActionField_ExchangeInstID, CThostFtdcCombActionField_ExchangeInstID_length);
        strncpy(data->ExchangeInstID, CThostFtdcCombActionField_ExchangeInstID, sizeof(data->ExchangeInstID));
        CThostFtdcCombActionField_ExchangeInstID = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcCombActionField_IPAddress != NULL ) {
        if(CThostFtdcCombActionField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcCombActionField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcCombActionField_IPAddress, CThostFtdcCombActionField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcCombActionField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcCombActionField_IPAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcCombActionFieldType_repr(PyObject *self) {

    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:c,s:i,s:c,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:i,s:i,s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "CombActionRef", data->CombActionRef//, (Py_ssize_t)sizeof(data->CombActionRef)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "Direction", data->Direction
        , "Volume", data->Volume
        , "CombDirection", data->CombDirection
        , "HedgeFlag", data->HedgeFlag
        , "ActionLocalID", data->ActionLocalID//, (Py_ssize_t)sizeof(data->ActionLocalID)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ParticipantID", data->ParticipantID//, (Py_ssize_t)sizeof(data->ParticipantID)
        , "ClientID", data->ClientID//, (Py_ssize_t)sizeof(data->ClientID)
        , "reserve2", data->reserve2//, (Py_ssize_t)sizeof(data->reserve2)
        , "TraderID", data->TraderID//, (Py_ssize_t)sizeof(data->TraderID)
        , "InstallID", data->InstallID
        , "ActionStatus", data->ActionStatus
        , "NotifySequence", data->NotifySequence
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "SettlementID", data->SettlementID
        , "SequenceNo", data->SequenceNo
        , "FrontID", data->FrontID
        , "SessionID", data->SessionID
        , "UserProductInfo", data->UserProductInfo//, (Py_ssize_t)sizeof(data->UserProductInfo)
        , "StatusMsg", data->StatusMsg//, (Py_ssize_t)sizeof(data->StatusMsg)
        , "reserve3", data->reserve3//, (Py_ssize_t)sizeof(data->reserve3)
        , "MacAddress", data->MacAddress//, (Py_ssize_t)sizeof(data->MacAddress)
        , "ComTradeID", data->ComTradeID//, (Py_ssize_t)sizeof(data->ComTradeID)
        , "BranchID", data->BranchID//, (Py_ssize_t)sizeof(data->BranchID)
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "ExchangeInstID", data->ExchangeInstID//, (Py_ssize_t)sizeof(data->ExchangeInstID)
        , "IPAddress", data->IPAddress//, (Py_ssize_t)sizeof(data->IPAddress)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCombActionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCombActionField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcCombActionFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcCombActionFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCombActionField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcCombActionFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcCombActionFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCombActionField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcCombActionFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcCombActionFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCombActionField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 组合引用
/// typedef char TThostFtdcOrderRefType[13]
static PyObject *PyCThostFtdcCombActionFieldType_get_CombActionRef(PyObject *self, void *closure) {
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CombActionRef, (Py_ssize_t)sizeof(data->CombActionRef));
    return PyBytes_FromString(data->CombActionRef);
}

static int PyCThostFtdcCombActionFieldType_set_CombActionRef(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CombActionRef Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCombActionField::CombActionRef)) {
        PyErr_SetString(PyExc_ValueError, "CombActionRef must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    // memset(data->CombActionRef, 0, sizeof(data->CombActionRef));
    // memcpy(data->CombActionRef, buf, len);
    strncpy(data->CombActionRef, buf, sizeof(data->CombActionRef));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcCombActionFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcCombActionFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCombActionField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 买卖方向
/// typedef char TThostFtdcDirectionType
static PyObject *PyCThostFtdcCombActionFieldType_get_Direction(PyObject *self, void *closure) {
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->Direction), 1);
}

static int PyCThostFtdcCombActionFieldType_set_Direction(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Direction Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcCombActionField::Direction)) {
        PyErr_SetString(PyExc_ValueError, "Direction must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    data->Direction = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 组合指令方向
/// typedef char TThostFtdcCombDirectionType
static PyObject *PyCThostFtdcCombActionFieldType_get_CombDirection(PyObject *self, void *closure) {
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->CombDirection), 1);
}

static int PyCThostFtdcCombActionFieldType_set_CombDirection(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CombDirection Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcCombActionField::CombDirection)) {
        PyErr_SetString(PyExc_ValueError, "CombDirection must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    data->CombDirection = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投机套保标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcCombActionFieldType_get_HedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->HedgeFlag), 1);
}

static int PyCThostFtdcCombActionFieldType_set_HedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcCombActionField::HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    data->HedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 本地申请组合编号
/// typedef char TThostFtdcOrderLocalIDType[13]
static PyObject *PyCThostFtdcCombActionFieldType_get_ActionLocalID(PyObject *self, void *closure) {
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionLocalID, (Py_ssize_t)sizeof(data->ActionLocalID));
    return PyBytes_FromString(data->ActionLocalID);
}

static int PyCThostFtdcCombActionFieldType_set_ActionLocalID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionLocalID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCombActionField::ActionLocalID)) {
        PyErr_SetString(PyExc_ValueError, "ActionLocalID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    // memset(data->ActionLocalID, 0, sizeof(data->ActionLocalID));
    // memcpy(data->ActionLocalID, buf, len);
    strncpy(data->ActionLocalID, buf, sizeof(data->ActionLocalID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcCombActionFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcCombActionFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCombActionField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 会员代码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcCombActionFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcCombActionFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCombActionField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户代码
/// typedef char TThostFtdcClientIDType[11]
static PyObject *PyCThostFtdcCombActionFieldType_get_ClientID(PyObject *self, void *closure) {
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientID, (Py_ssize_t)sizeof(data->ClientID));
    return PyBytes_FromString(data->ClientID);
}

static int PyCThostFtdcCombActionFieldType_set_ClientID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCombActionField::ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    // memset(data->ClientID, 0, sizeof(data->ClientID));
    // memcpy(data->ClientID, buf, len);
    strncpy(data->ClientID, buf, sizeof(data->ClientID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldExchangeInstIDType[31]
static PyObject *PyCThostFtdcCombActionFieldType_get_reserve2(PyObject *self, void *closure) {
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve2, (Py_ssize_t)sizeof(data->reserve2));
    return PyBytes_FromString(data->reserve2);
}

static int PyCThostFtdcCombActionFieldType_set_reserve2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCombActionField::reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    // memset(data->reserve2, 0, sizeof(data->reserve2));
    // memcpy(data->reserve2, buf, len);
    strncpy(data->reserve2, buf, sizeof(data->reserve2));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所交易员代码
/// typedef char TThostFtdcTraderIDType[21]
static PyObject *PyCThostFtdcCombActionFieldType_get_TraderID(PyObject *self, void *closure) {
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TraderID, (Py_ssize_t)sizeof(data->TraderID));
    return PyBytes_FromString(data->TraderID);
}

static int PyCThostFtdcCombActionFieldType_set_TraderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCombActionField::TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    // memset(data->TraderID, 0, sizeof(data->TraderID));
    // memcpy(data->TraderID, buf, len);
    strncpy(data->TraderID, buf, sizeof(data->TraderID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 组合状态
/// typedef char TThostFtdcOrderActionStatusType
static PyObject *PyCThostFtdcCombActionFieldType_get_ActionStatus(PyObject *self, void *closure) {
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionStatus), 1);
}

static int PyCThostFtdcCombActionFieldType_set_ActionStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcCombActionField::ActionStatus)) {
        PyErr_SetString(PyExc_ValueError, "ActionStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    data->ActionStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcCombActionFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcCombActionFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCombActionField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户端产品信息
/// typedef char TThostFtdcProductInfoType[11]
static PyObject *PyCThostFtdcCombActionFieldType_get_UserProductInfo(PyObject *self, void *closure) {
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserProductInfo, (Py_ssize_t)sizeof(data->UserProductInfo));
    return PyBytes_FromString(data->UserProductInfo);
}

static int PyCThostFtdcCombActionFieldType_set_UserProductInfo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserProductInfo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCombActionField::UserProductInfo)) {
        PyErr_SetString(PyExc_ValueError, "UserProductInfo must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    // memset(data->UserProductInfo, 0, sizeof(data->UserProductInfo));
    // memcpy(data->UserProductInfo, buf, len);
    strncpy(data->UserProductInfo, buf, sizeof(data->UserProductInfo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 状态信息
/// typedef char TThostFtdcErrorMsgType[81]
static PyObject *PyCThostFtdcCombActionFieldType_get_StatusMsg(PyObject *self, void *closure) {
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->StatusMsg, (Py_ssize_t)sizeof(data->StatusMsg));
    return PyBytes_FromString(data->StatusMsg);
}

static int PyCThostFtdcCombActionFieldType_set_StatusMsg(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "StatusMsg Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCombActionField::StatusMsg)) {
        PyErr_SetString(PyExc_ValueError, "StatusMsg must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    // memset(data->StatusMsg, 0, sizeof(data->StatusMsg));
    // memcpy(data->StatusMsg, buf, len);
    strncpy(data->StatusMsg, buf, sizeof(data->StatusMsg));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcCombActionFieldType_get_reserve3(PyObject *self, void *closure) {
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve3, (Py_ssize_t)sizeof(data->reserve3));
    return PyBytes_FromString(data->reserve3);
}

static int PyCThostFtdcCombActionFieldType_set_reserve3(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve3 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCombActionField::reserve3)) {
        PyErr_SetString(PyExc_ValueError, "reserve3 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    // memset(data->reserve3, 0, sizeof(data->reserve3));
    // memcpy(data->reserve3, buf, len);
    strncpy(data->reserve3, buf, sizeof(data->reserve3));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcCombActionFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcCombActionFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCombActionField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 组合编号
/// typedef char TThostFtdcTradeIDType[21]
static PyObject *PyCThostFtdcCombActionFieldType_get_ComTradeID(PyObject *self, void *closure) {
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ComTradeID, (Py_ssize_t)sizeof(data->ComTradeID));
    return PyBytes_FromString(data->ComTradeID);
}

static int PyCThostFtdcCombActionFieldType_set_ComTradeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ComTradeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCombActionField::ComTradeID)) {
        PyErr_SetString(PyExc_ValueError, "ComTradeID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    // memset(data->ComTradeID, 0, sizeof(data->ComTradeID));
    // memcpy(data->ComTradeID, buf, len);
    strncpy(data->ComTradeID, buf, sizeof(data->ComTradeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 营业部编号
/// typedef char TThostFtdcBranchIDType[9]
static PyObject *PyCThostFtdcCombActionFieldType_get_BranchID(PyObject *self, void *closure) {
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BranchID, (Py_ssize_t)sizeof(data->BranchID));
    return PyBytes_FromString(data->BranchID);
}

static int PyCThostFtdcCombActionFieldType_set_BranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCombActionField::BranchID)) {
        PyErr_SetString(PyExc_ValueError, "BranchID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    // memset(data->BranchID, 0, sizeof(data->BranchID));
    // memcpy(data->BranchID, buf, len);
    strncpy(data->BranchID, buf, sizeof(data->BranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcCombActionFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcCombActionFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCombActionField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcCombActionFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcCombActionFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCombActionField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约在交易所的代码
/// typedef char TThostFtdcExchangeInstIDType[81]
static PyObject *PyCThostFtdcCombActionFieldType_get_ExchangeInstID(PyObject *self, void *closure) {
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeInstID, (Py_ssize_t)sizeof(data->ExchangeInstID));
    return PyBytes_FromString(data->ExchangeInstID);
}

static int PyCThostFtdcCombActionFieldType_set_ExchangeInstID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCombActionField::ExchangeInstID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
    // memcpy(data->ExchangeInstID, buf, len);
    strncpy(data->ExchangeInstID, buf, sizeof(data->ExchangeInstID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcCombActionFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcCombActionFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCombActionField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(self);
    CThostFtdcCombActionField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcCombActionFieldType_members[] = {
    /// 数量
    /// typedef int TThostFtdcVolumeType
    {
        .name = "Volume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcCombActionFieldData, data.Volume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("数量")
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
        .offset = offsetof(PyCThostFtdcCombActionFieldData, data.InstallID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("安装编号")
    },
    /// 报单提示序号
    /// typedef int TThostFtdcSequenceNoType
    {
        .name = "NotifySequence",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcCombActionFieldData, data.NotifySequence),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("报单提示序号")
    },
    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    {
        .name = "SettlementID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcCombActionFieldData, data.SettlementID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("结算编号")
    },
    /// 序号
    /// typedef int TThostFtdcSequenceNoType
    {
        .name = "SequenceNo",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcCombActionFieldData, data.SequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("序号")
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
        .offset = offsetof(PyCThostFtdcCombActionFieldData, data.FrontID),
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
        .offset = offsetof(PyCThostFtdcCombActionFieldData, data.SessionID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("会话编号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcCombActionFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcCombActionFieldType_get_BrokerID,
    .set = PyCThostFtdcCombActionFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcCombActionFieldType_get_InvestorID,
    .set = PyCThostFtdcCombActionFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcCombActionFieldType_get_reserve1,
    .set = PyCThostFtdcCombActionFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 组合引用
    /// typedef char TThostFtdcOrderRefType[13]
    {
    .name = "CombActionRef",
    .get = PyCThostFtdcCombActionFieldType_get_CombActionRef,
    .set = PyCThostFtdcCombActionFieldType_set_CombActionRef,
    .doc = PyDoc_STR("组合引用"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcCombActionFieldType_get_UserID,
    .set = PyCThostFtdcCombActionFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    {
    .name = "Direction",
    .get = PyCThostFtdcCombActionFieldType_get_Direction,
    .set = PyCThostFtdcCombActionFieldType_set_Direction,
    .doc = PyDoc_STR("买卖方向"),
    },
    /// 组合指令方向
    /// typedef char TThostFtdcCombDirectionType
    {
    .name = "CombDirection",
    .get = PyCThostFtdcCombActionFieldType_get_CombDirection,
    .set = PyCThostFtdcCombActionFieldType_set_CombDirection,
    .doc = PyDoc_STR("组合指令方向"),
    },
    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "HedgeFlag",
    .get = PyCThostFtdcCombActionFieldType_get_HedgeFlag,
    .set = PyCThostFtdcCombActionFieldType_set_HedgeFlag,
    .doc = PyDoc_STR("投机套保标志"),
    },
    /// 本地申请组合编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    {
    .name = "ActionLocalID",
    .get = PyCThostFtdcCombActionFieldType_get_ActionLocalID,
    .set = PyCThostFtdcCombActionFieldType_set_ActionLocalID,
    .doc = PyDoc_STR("本地申请组合编号"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcCombActionFieldType_get_ExchangeID,
    .set = PyCThostFtdcCombActionFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcCombActionFieldType_get_ParticipantID,
    .set = PyCThostFtdcCombActionFieldType_set_ParticipantID,
    .doc = PyDoc_STR("会员代码"),
    },
    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    {
    .name = "ClientID",
    .get = PyCThostFtdcCombActionFieldType_get_ClientID,
    .set = PyCThostFtdcCombActionFieldType_set_ClientID,
    .doc = PyDoc_STR("客户代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    {
    .name = "reserve2",
    .get = PyCThostFtdcCombActionFieldType_get_reserve2,
    .set = PyCThostFtdcCombActionFieldType_set_reserve2,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    {
    .name = "TraderID",
    .get = PyCThostFtdcCombActionFieldType_get_TraderID,
    .set = PyCThostFtdcCombActionFieldType_set_TraderID,
    .doc = PyDoc_STR("交易所交易员代码"),
    },
    /// 组合状态
    /// typedef char TThostFtdcOrderActionStatusType
    {
    .name = "ActionStatus",
    .get = PyCThostFtdcCombActionFieldType_get_ActionStatus,
    .set = PyCThostFtdcCombActionFieldType_set_ActionStatus,
    .doc = PyDoc_STR("组合状态"),
    },
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcCombActionFieldType_get_TradingDay,
    .set = PyCThostFtdcCombActionFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    {
    .name = "UserProductInfo",
    .get = PyCThostFtdcCombActionFieldType_get_UserProductInfo,
    .set = PyCThostFtdcCombActionFieldType_set_UserProductInfo,
    .doc = PyDoc_STR("用户端产品信息"),
    },
    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    {
    .name = "StatusMsg",
    .get = PyCThostFtdcCombActionFieldType_get_StatusMsg,
    .set = PyCThostFtdcCombActionFieldType_set_StatusMsg,
    .doc = PyDoc_STR("状态信息"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve3",
    .get = PyCThostFtdcCombActionFieldType_get_reserve3,
    .set = PyCThostFtdcCombActionFieldType_set_reserve3,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcCombActionFieldType_get_MacAddress,
    .set = PyCThostFtdcCombActionFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// 组合编号
    /// typedef char TThostFtdcTradeIDType[21]
    {
    .name = "ComTradeID",
    .get = PyCThostFtdcCombActionFieldType_get_ComTradeID,
    .set = PyCThostFtdcCombActionFieldType_set_ComTradeID,
    .doc = PyDoc_STR("组合编号"),
    },
    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    {
    .name = "BranchID",
    .get = PyCThostFtdcCombActionFieldType_get_BranchID,
    .set = PyCThostFtdcCombActionFieldType_set_BranchID,
    .doc = PyDoc_STR("营业部编号"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcCombActionFieldType_get_InvestUnitID,
    .set = PyCThostFtdcCombActionFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcCombActionFieldType_get_InstrumentID,
    .set = PyCThostFtdcCombActionFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    {
    .name = "ExchangeInstID",
    .get = PyCThostFtdcCombActionFieldType_get_ExchangeInstID,
    .set = PyCThostFtdcCombActionFieldType_set_ExchangeInstID,
    .doc = PyDoc_STR("合约在交易所的代码"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcCombActionFieldType_get_IPAddress,
    .set = PyCThostFtdcCombActionFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcCombActionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcCombActionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("申请组合")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcCombActionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcCombActionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcCombActionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcCombActionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcCombActionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcCombActionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("申请组合")},
    {Py_tp_members, PyCThostFtdcCombActionFieldType_members},
    {Py_tp_getset, PyCThostFtdcCombActionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcCombActionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcCombActionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcCombActionFieldType_spec = {
    .name = "PyCTP.CThostFtdcCombActionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcCombActionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcCombActionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcCombActionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcCombActionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcCombActionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcCombActionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcCombActionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcCombActionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcCombActionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcCombActionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}