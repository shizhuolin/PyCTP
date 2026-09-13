
#include "PyCThostFtdcHedgeCfmField.h"

///套保申请回报

static int PyCThostFtdcHedgeCfmFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "InstrumentID", "UserID", "Volume", "Direction", "RequestID", "FrontID", "SessionID", "OrderRef", "ActiveUserID", "BrokerOrderSeq", "OrderSysID", "ApplyStatus", "SequenceNo", "DealVolume", "InsertDate", "InsertTime", "CancelTime", "ReqDate", "OrderLocalID", "ExchangeID", "ParticipantID", "ClientID", "ExchangeInstID", "TraderID", "InstallID", "OrderSubmitStatus", "NotifySequence", "TradingDay", "SettlementID", "StatusMsg", "IPAddress", "MacAddress", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcHedgeCfmField_BrokerID = NULL;
    Py_ssize_t CThostFtdcHedgeCfmField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcHedgeCfmField_InvestorID = NULL;
    Py_ssize_t CThostFtdcHedgeCfmField_InvestorID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcHedgeCfmField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcHedgeCfmField_InstrumentID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcHedgeCfmField_UserID = NULL;
    Py_ssize_t CThostFtdcHedgeCfmField_UserID_length = 0;

    /// 数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcHedgeCfmField_Volume = 0;

    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    char CThostFtdcHedgeCfmField_Direction = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcHedgeCfmField_RequestID = 0;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    int CThostFtdcHedgeCfmField_FrontID = 0;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcHedgeCfmField_SessionID = 0;

    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    char *CThostFtdcHedgeCfmField_OrderRef = NULL;
    Py_ssize_t CThostFtdcHedgeCfmField_OrderRef_length = 0;

    /// 操作用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcHedgeCfmField_ActiveUserID = NULL;
    Py_ssize_t CThostFtdcHedgeCfmField_ActiveUserID_length = 0;

    /// 经纪公司报单编号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcHedgeCfmField_BrokerOrderSeq = 0;

    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    char *CThostFtdcHedgeCfmField_OrderSysID = NULL;
    Py_ssize_t CThostFtdcHedgeCfmField_OrderSysID_length = 0;

    /// 申请状态
    /// typedef char TThostFtdcApplyStatusType
    char CThostFtdcHedgeCfmField_ApplyStatus = 0;

    /// 序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcHedgeCfmField_SequenceNo = 0;

    /// 成功处理数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcHedgeCfmField_DealVolume = 0;

    /// 报单日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcHedgeCfmField_InsertDate = NULL;
    Py_ssize_t CThostFtdcHedgeCfmField_InsertDate_length = 0;

    /// 委托时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcHedgeCfmField_InsertTime = NULL;
    Py_ssize_t CThostFtdcHedgeCfmField_InsertTime_length = 0;

    /// 撤销时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcHedgeCfmField_CancelTime = NULL;
    Py_ssize_t CThostFtdcHedgeCfmField_CancelTime_length = 0;

    /// 日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcHedgeCfmField_ReqDate = NULL;
    Py_ssize_t CThostFtdcHedgeCfmField_ReqDate_length = 0;

    /// 本地报单编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    char *CThostFtdcHedgeCfmField_OrderLocalID = NULL;
    Py_ssize_t CThostFtdcHedgeCfmField_OrderLocalID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcHedgeCfmField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcHedgeCfmField_ExchangeID_length = 0;

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcHedgeCfmField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcHedgeCfmField_ParticipantID_length = 0;

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    char *CThostFtdcHedgeCfmField_ClientID = NULL;
    Py_ssize_t CThostFtdcHedgeCfmField_ClientID_length = 0;

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    char *CThostFtdcHedgeCfmField_ExchangeInstID = NULL;
    Py_ssize_t CThostFtdcHedgeCfmField_ExchangeInstID_length = 0;

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    char *CThostFtdcHedgeCfmField_TraderID = NULL;
    Py_ssize_t CThostFtdcHedgeCfmField_TraderID_length = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcHedgeCfmField_InstallID = 0;

    /// 报单提交状态
    /// typedef char TThostFtdcOrderSubmitStatusType
    char CThostFtdcHedgeCfmField_OrderSubmitStatus = 0;

    /// 报单提示序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcHedgeCfmField_NotifySequence = 0;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcHedgeCfmField_TradingDay = NULL;
    Py_ssize_t CThostFtdcHedgeCfmField_TradingDay_length = 0;

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    int CThostFtdcHedgeCfmField_SettlementID = 0;

    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    char *CThostFtdcHedgeCfmField_StatusMsg = NULL;
    Py_ssize_t CThostFtdcHedgeCfmField_StatusMsg_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcHedgeCfmField_IPAddress = NULL;
    Py_ssize_t CThostFtdcHedgeCfmField_IPAddress_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcHedgeCfmField_MacAddress = NULL;
    Py_ssize_t CThostFtdcHedgeCfmField_MacAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#iciiiy#y#iy#ciiy#y#y#y#y#y#y#y#y#y#iciy#iy#y#y#", (char **)kwlist
        , &CThostFtdcHedgeCfmField_BrokerID, &CThostFtdcHedgeCfmField_BrokerID_length
        , &CThostFtdcHedgeCfmField_InvestorID, &CThostFtdcHedgeCfmField_InvestorID_length
        , &CThostFtdcHedgeCfmField_InstrumentID, &CThostFtdcHedgeCfmField_InstrumentID_length
        , &CThostFtdcHedgeCfmField_UserID, &CThostFtdcHedgeCfmField_UserID_length
        , &CThostFtdcHedgeCfmField_Volume
        , &CThostFtdcHedgeCfmField_Direction
        , &CThostFtdcHedgeCfmField_RequestID
        , &CThostFtdcHedgeCfmField_FrontID
        , &CThostFtdcHedgeCfmField_SessionID
        , &CThostFtdcHedgeCfmField_OrderRef, &CThostFtdcHedgeCfmField_OrderRef_length
        , &CThostFtdcHedgeCfmField_ActiveUserID, &CThostFtdcHedgeCfmField_ActiveUserID_length
        , &CThostFtdcHedgeCfmField_BrokerOrderSeq
        , &CThostFtdcHedgeCfmField_OrderSysID, &CThostFtdcHedgeCfmField_OrderSysID_length
        , &CThostFtdcHedgeCfmField_ApplyStatus
        , &CThostFtdcHedgeCfmField_SequenceNo
        , &CThostFtdcHedgeCfmField_DealVolume
        , &CThostFtdcHedgeCfmField_InsertDate, &CThostFtdcHedgeCfmField_InsertDate_length
        , &CThostFtdcHedgeCfmField_InsertTime, &CThostFtdcHedgeCfmField_InsertTime_length
        , &CThostFtdcHedgeCfmField_CancelTime, &CThostFtdcHedgeCfmField_CancelTime_length
        , &CThostFtdcHedgeCfmField_ReqDate, &CThostFtdcHedgeCfmField_ReqDate_length
        , &CThostFtdcHedgeCfmField_OrderLocalID, &CThostFtdcHedgeCfmField_OrderLocalID_length
        , &CThostFtdcHedgeCfmField_ExchangeID, &CThostFtdcHedgeCfmField_ExchangeID_length
        , &CThostFtdcHedgeCfmField_ParticipantID, &CThostFtdcHedgeCfmField_ParticipantID_length
        , &CThostFtdcHedgeCfmField_ClientID, &CThostFtdcHedgeCfmField_ClientID_length
        , &CThostFtdcHedgeCfmField_ExchangeInstID, &CThostFtdcHedgeCfmField_ExchangeInstID_length
        , &CThostFtdcHedgeCfmField_TraderID, &CThostFtdcHedgeCfmField_TraderID_length
        , &CThostFtdcHedgeCfmField_InstallID
        , &CThostFtdcHedgeCfmField_OrderSubmitStatus
        , &CThostFtdcHedgeCfmField_NotifySequence
        , &CThostFtdcHedgeCfmField_TradingDay, &CThostFtdcHedgeCfmField_TradingDay_length
        , &CThostFtdcHedgeCfmField_SettlementID
        , &CThostFtdcHedgeCfmField_StatusMsg, &CThostFtdcHedgeCfmField_StatusMsg_length
        , &CThostFtdcHedgeCfmField_IPAddress, &CThostFtdcHedgeCfmField_IPAddress_length
        , &CThostFtdcHedgeCfmField_MacAddress, &CThostFtdcHedgeCfmField_MacAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcHedgeCfmField_BrokerID != NULL ) {
        if(CThostFtdcHedgeCfmField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcHedgeCfmField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcHedgeCfmField_BrokerID, CThostFtdcHedgeCfmField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcHedgeCfmField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcHedgeCfmField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcHedgeCfmField_InvestorID != NULL ) {
        if(CThostFtdcHedgeCfmField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcHedgeCfmField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcHedgeCfmField_InvestorID, CThostFtdcHedgeCfmField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcHedgeCfmField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcHedgeCfmField_InvestorID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcHedgeCfmField_InstrumentID != NULL ) {
        if(CThostFtdcHedgeCfmField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcHedgeCfmField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcHedgeCfmField_InstrumentID, CThostFtdcHedgeCfmField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcHedgeCfmField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcHedgeCfmField_InstrumentID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcHedgeCfmField_UserID != NULL ) {
        if(CThostFtdcHedgeCfmField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcHedgeCfmField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcHedgeCfmField_UserID, CThostFtdcHedgeCfmField_UserID_length);
        strncpy(data->UserID, CThostFtdcHedgeCfmField_UserID, sizeof(data->UserID));
        CThostFtdcHedgeCfmField_UserID = NULL;
    }

    /// 数量
    /// typedef int TThostFtdcVolumeType
    data->Volume = CThostFtdcHedgeCfmField_Volume;

    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    data->Direction = CThostFtdcHedgeCfmField_Direction;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcHedgeCfmField_RequestID;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    data->FrontID = CThostFtdcHedgeCfmField_FrontID;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcHedgeCfmField_SessionID;

    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    if( CThostFtdcHedgeCfmField_OrderRef != NULL ) {
        if(CThostFtdcHedgeCfmField_OrderRef_length >= (Py_ssize_t)sizeof(data->OrderRef)) {
            PyErr_Format(PyExc_ValueError, "OrderRef too long: length=%zd (max allowed is 12)", CThostFtdcHedgeCfmField_OrderRef_length);
            return -1;
        }
        // memset(data->OrderRef, 0, sizeof(data->OrderRef));
        // memcpy(data->OrderRef, CThostFtdcHedgeCfmField_OrderRef, CThostFtdcHedgeCfmField_OrderRef_length);
        strncpy(data->OrderRef, CThostFtdcHedgeCfmField_OrderRef, sizeof(data->OrderRef));
        CThostFtdcHedgeCfmField_OrderRef = NULL;
    }

    /// 操作用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcHedgeCfmField_ActiveUserID != NULL ) {
        if(CThostFtdcHedgeCfmField_ActiveUserID_length >= (Py_ssize_t)sizeof(data->ActiveUserID)) {
            PyErr_Format(PyExc_ValueError, "ActiveUserID too long: length=%zd (max allowed is 15)", CThostFtdcHedgeCfmField_ActiveUserID_length);
            return -1;
        }
        // memset(data->ActiveUserID, 0, sizeof(data->ActiveUserID));
        // memcpy(data->ActiveUserID, CThostFtdcHedgeCfmField_ActiveUserID, CThostFtdcHedgeCfmField_ActiveUserID_length);
        strncpy(data->ActiveUserID, CThostFtdcHedgeCfmField_ActiveUserID, sizeof(data->ActiveUserID));
        CThostFtdcHedgeCfmField_ActiveUserID = NULL;
    }

    /// 经纪公司报单编号
    /// typedef int TThostFtdcSequenceNoType
    data->BrokerOrderSeq = CThostFtdcHedgeCfmField_BrokerOrderSeq;

    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    if( CThostFtdcHedgeCfmField_OrderSysID != NULL ) {
        if(CThostFtdcHedgeCfmField_OrderSysID_length >= (Py_ssize_t)sizeof(data->OrderSysID)) {
            PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is 20)", CThostFtdcHedgeCfmField_OrderSysID_length);
            return -1;
        }
        // memset(data->OrderSysID, 0, sizeof(data->OrderSysID));
        // memcpy(data->OrderSysID, CThostFtdcHedgeCfmField_OrderSysID, CThostFtdcHedgeCfmField_OrderSysID_length);
        strncpy(data->OrderSysID, CThostFtdcHedgeCfmField_OrderSysID, sizeof(data->OrderSysID));
        CThostFtdcHedgeCfmField_OrderSysID = NULL;
    }

    /// 申请状态
    /// typedef char TThostFtdcApplyStatusType
    data->ApplyStatus = CThostFtdcHedgeCfmField_ApplyStatus;

    /// 序号
    /// typedef int TThostFtdcSequenceNoType
    data->SequenceNo = CThostFtdcHedgeCfmField_SequenceNo;

    /// 成功处理数量
    /// typedef int TThostFtdcVolumeType
    data->DealVolume = CThostFtdcHedgeCfmField_DealVolume;

    /// 报单日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcHedgeCfmField_InsertDate != NULL ) {
        if(CThostFtdcHedgeCfmField_InsertDate_length >= (Py_ssize_t)sizeof(data->InsertDate)) {
            PyErr_Format(PyExc_ValueError, "InsertDate too long: length=%zd (max allowed is 8)", CThostFtdcHedgeCfmField_InsertDate_length);
            return -1;
        }
        // memset(data->InsertDate, 0, sizeof(data->InsertDate));
        // memcpy(data->InsertDate, CThostFtdcHedgeCfmField_InsertDate, CThostFtdcHedgeCfmField_InsertDate_length);
        strncpy(data->InsertDate, CThostFtdcHedgeCfmField_InsertDate, sizeof(data->InsertDate));
        CThostFtdcHedgeCfmField_InsertDate = NULL;
    }

    /// 委托时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcHedgeCfmField_InsertTime != NULL ) {
        if(CThostFtdcHedgeCfmField_InsertTime_length >= (Py_ssize_t)sizeof(data->InsertTime)) {
            PyErr_Format(PyExc_ValueError, "InsertTime too long: length=%zd (max allowed is 8)", CThostFtdcHedgeCfmField_InsertTime_length);
            return -1;
        }
        // memset(data->InsertTime, 0, sizeof(data->InsertTime));
        // memcpy(data->InsertTime, CThostFtdcHedgeCfmField_InsertTime, CThostFtdcHedgeCfmField_InsertTime_length);
        strncpy(data->InsertTime, CThostFtdcHedgeCfmField_InsertTime, sizeof(data->InsertTime));
        CThostFtdcHedgeCfmField_InsertTime = NULL;
    }

    /// 撤销时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcHedgeCfmField_CancelTime != NULL ) {
        if(CThostFtdcHedgeCfmField_CancelTime_length >= (Py_ssize_t)sizeof(data->CancelTime)) {
            PyErr_Format(PyExc_ValueError, "CancelTime too long: length=%zd (max allowed is 8)", CThostFtdcHedgeCfmField_CancelTime_length);
            return -1;
        }
        // memset(data->CancelTime, 0, sizeof(data->CancelTime));
        // memcpy(data->CancelTime, CThostFtdcHedgeCfmField_CancelTime, CThostFtdcHedgeCfmField_CancelTime_length);
        strncpy(data->CancelTime, CThostFtdcHedgeCfmField_CancelTime, sizeof(data->CancelTime));
        CThostFtdcHedgeCfmField_CancelTime = NULL;
    }

    /// 日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcHedgeCfmField_ReqDate != NULL ) {
        if(CThostFtdcHedgeCfmField_ReqDate_length >= (Py_ssize_t)sizeof(data->ReqDate)) {
            PyErr_Format(PyExc_ValueError, "ReqDate too long: length=%zd (max allowed is 8)", CThostFtdcHedgeCfmField_ReqDate_length);
            return -1;
        }
        // memset(data->ReqDate, 0, sizeof(data->ReqDate));
        // memcpy(data->ReqDate, CThostFtdcHedgeCfmField_ReqDate, CThostFtdcHedgeCfmField_ReqDate_length);
        strncpy(data->ReqDate, CThostFtdcHedgeCfmField_ReqDate, sizeof(data->ReqDate));
        CThostFtdcHedgeCfmField_ReqDate = NULL;
    }

    /// 本地报单编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    if( CThostFtdcHedgeCfmField_OrderLocalID != NULL ) {
        if(CThostFtdcHedgeCfmField_OrderLocalID_length >= (Py_ssize_t)sizeof(data->OrderLocalID)) {
            PyErr_Format(PyExc_ValueError, "OrderLocalID too long: length=%zd (max allowed is 12)", CThostFtdcHedgeCfmField_OrderLocalID_length);
            return -1;
        }
        // memset(data->OrderLocalID, 0, sizeof(data->OrderLocalID));
        // memcpy(data->OrderLocalID, CThostFtdcHedgeCfmField_OrderLocalID, CThostFtdcHedgeCfmField_OrderLocalID_length);
        strncpy(data->OrderLocalID, CThostFtdcHedgeCfmField_OrderLocalID, sizeof(data->OrderLocalID));
        CThostFtdcHedgeCfmField_OrderLocalID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcHedgeCfmField_ExchangeID != NULL ) {
        if(CThostFtdcHedgeCfmField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcHedgeCfmField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcHedgeCfmField_ExchangeID, CThostFtdcHedgeCfmField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcHedgeCfmField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcHedgeCfmField_ExchangeID = NULL;
    }

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcHedgeCfmField_ParticipantID != NULL ) {
        if(CThostFtdcHedgeCfmField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcHedgeCfmField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcHedgeCfmField_ParticipantID, CThostFtdcHedgeCfmField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcHedgeCfmField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcHedgeCfmField_ParticipantID = NULL;
    }

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    if( CThostFtdcHedgeCfmField_ClientID != NULL ) {
        if(CThostFtdcHedgeCfmField_ClientID_length >= (Py_ssize_t)sizeof(data->ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is 10)", CThostFtdcHedgeCfmField_ClientID_length);
            return -1;
        }
        // memset(data->ClientID, 0, sizeof(data->ClientID));
        // memcpy(data->ClientID, CThostFtdcHedgeCfmField_ClientID, CThostFtdcHedgeCfmField_ClientID_length);
        strncpy(data->ClientID, CThostFtdcHedgeCfmField_ClientID, sizeof(data->ClientID));
        CThostFtdcHedgeCfmField_ClientID = NULL;
    }

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    if( CThostFtdcHedgeCfmField_ExchangeInstID != NULL ) {
        if(CThostFtdcHedgeCfmField_ExchangeInstID_length >= (Py_ssize_t)sizeof(data->ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is 80)", CThostFtdcHedgeCfmField_ExchangeInstID_length);
            return -1;
        }
        // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
        // memcpy(data->ExchangeInstID, CThostFtdcHedgeCfmField_ExchangeInstID, CThostFtdcHedgeCfmField_ExchangeInstID_length);
        strncpy(data->ExchangeInstID, CThostFtdcHedgeCfmField_ExchangeInstID, sizeof(data->ExchangeInstID));
        CThostFtdcHedgeCfmField_ExchangeInstID = NULL;
    }

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    if( CThostFtdcHedgeCfmField_TraderID != NULL ) {
        if(CThostFtdcHedgeCfmField_TraderID_length >= (Py_ssize_t)sizeof(data->TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is 20)", CThostFtdcHedgeCfmField_TraderID_length);
            return -1;
        }
        // memset(data->TraderID, 0, sizeof(data->TraderID));
        // memcpy(data->TraderID, CThostFtdcHedgeCfmField_TraderID, CThostFtdcHedgeCfmField_TraderID_length);
        strncpy(data->TraderID, CThostFtdcHedgeCfmField_TraderID, sizeof(data->TraderID));
        CThostFtdcHedgeCfmField_TraderID = NULL;
    }

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcHedgeCfmField_InstallID;

    /// 报单提交状态
    /// typedef char TThostFtdcOrderSubmitStatusType
    data->OrderSubmitStatus = CThostFtdcHedgeCfmField_OrderSubmitStatus;

    /// 报单提示序号
    /// typedef int TThostFtdcSequenceNoType
    data->NotifySequence = CThostFtdcHedgeCfmField_NotifySequence;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcHedgeCfmField_TradingDay != NULL ) {
        if(CThostFtdcHedgeCfmField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcHedgeCfmField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcHedgeCfmField_TradingDay, CThostFtdcHedgeCfmField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcHedgeCfmField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcHedgeCfmField_TradingDay = NULL;
    }

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    data->SettlementID = CThostFtdcHedgeCfmField_SettlementID;

    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    if( CThostFtdcHedgeCfmField_StatusMsg != NULL ) {
        if(CThostFtdcHedgeCfmField_StatusMsg_length >= (Py_ssize_t)sizeof(data->StatusMsg)) {
            PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is 80)", CThostFtdcHedgeCfmField_StatusMsg_length);
            return -1;
        }
        // memset(data->StatusMsg, 0, sizeof(data->StatusMsg));
        // memcpy(data->StatusMsg, CThostFtdcHedgeCfmField_StatusMsg, CThostFtdcHedgeCfmField_StatusMsg_length);
        strncpy(data->StatusMsg, CThostFtdcHedgeCfmField_StatusMsg, sizeof(data->StatusMsg));
        CThostFtdcHedgeCfmField_StatusMsg = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcHedgeCfmField_IPAddress != NULL ) {
        if(CThostFtdcHedgeCfmField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcHedgeCfmField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcHedgeCfmField_IPAddress, CThostFtdcHedgeCfmField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcHedgeCfmField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcHedgeCfmField_IPAddress = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcHedgeCfmField_MacAddress != NULL ) {
        if(CThostFtdcHedgeCfmField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcHedgeCfmField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcHedgeCfmField_MacAddress, CThostFtdcHedgeCfmField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcHedgeCfmField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcHedgeCfmField_MacAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcHedgeCfmFieldType_repr(PyObject *self) {

    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:i,s:i,s:y,s:y,s:i,s:y,s:c,s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:i,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "Volume", data->Volume
        , "Direction", data->Direction
        , "RequestID", data->RequestID
        , "FrontID", data->FrontID
        , "SessionID", data->SessionID
        , "OrderRef", data->OrderRef//, (Py_ssize_t)sizeof(data->OrderRef)
        , "ActiveUserID", data->ActiveUserID//, (Py_ssize_t)sizeof(data->ActiveUserID)
        , "BrokerOrderSeq", data->BrokerOrderSeq
        , "OrderSysID", data->OrderSysID//, (Py_ssize_t)sizeof(data->OrderSysID)
        , "ApplyStatus", data->ApplyStatus
        , "SequenceNo", data->SequenceNo
        , "DealVolume", data->DealVolume
        , "InsertDate", data->InsertDate//, (Py_ssize_t)sizeof(data->InsertDate)
        , "InsertTime", data->InsertTime//, (Py_ssize_t)sizeof(data->InsertTime)
        , "CancelTime", data->CancelTime//, (Py_ssize_t)sizeof(data->CancelTime)
        , "ReqDate", data->ReqDate//, (Py_ssize_t)sizeof(data->ReqDate)
        , "OrderLocalID", data->OrderLocalID//, (Py_ssize_t)sizeof(data->OrderLocalID)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ParticipantID", data->ParticipantID//, (Py_ssize_t)sizeof(data->ParticipantID)
        , "ClientID", data->ClientID//, (Py_ssize_t)sizeof(data->ClientID)
        , "ExchangeInstID", data->ExchangeInstID//, (Py_ssize_t)sizeof(data->ExchangeInstID)
        , "TraderID", data->TraderID//, (Py_ssize_t)sizeof(data->TraderID)
        , "InstallID", data->InstallID
        , "OrderSubmitStatus", data->OrderSubmitStatus
        , "NotifySequence", data->NotifySequence
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "SettlementID", data->SettlementID
        , "StatusMsg", data->StatusMsg//, (Py_ssize_t)sizeof(data->StatusMsg)
        , "IPAddress", data->IPAddress//, (Py_ssize_t)sizeof(data->IPAddress)
        , "MacAddress", data->MacAddress//, (Py_ssize_t)sizeof(data->MacAddress)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcHedgeCfmField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcHedgeCfmField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcHedgeCfmFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcHedgeCfmFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcHedgeCfmField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcHedgeCfmFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcHedgeCfmFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcHedgeCfmField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcHedgeCfmFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcHedgeCfmFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcHedgeCfmField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcHedgeCfmFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcHedgeCfmFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcHedgeCfmField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 买卖方向
/// typedef char TThostFtdcDirectionType
static PyObject *PyCThostFtdcHedgeCfmFieldType_get_Direction(PyObject *self, void *closure) {
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->Direction), 1);
}

static int PyCThostFtdcHedgeCfmFieldType_set_Direction(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Direction Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcHedgeCfmField::Direction)) {
        PyErr_SetString(PyExc_ValueError, "Direction must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    data->Direction = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单引用
/// typedef char TThostFtdcOrderRefType[13]
static PyObject *PyCThostFtdcHedgeCfmFieldType_get_OrderRef(PyObject *self, void *closure) {
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderRef, (Py_ssize_t)sizeof(data->OrderRef));
    return PyBytes_FromString(data->OrderRef);
}

static int PyCThostFtdcHedgeCfmFieldType_set_OrderRef(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderRef Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcHedgeCfmField::OrderRef)) {
        PyErr_SetString(PyExc_ValueError, "OrderRef must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    // memset(data->OrderRef, 0, sizeof(data->OrderRef));
    // memcpy(data->OrderRef, buf, len);
    strncpy(data->OrderRef, buf, sizeof(data->OrderRef));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcHedgeCfmFieldType_get_ActiveUserID(PyObject *self, void *closure) {
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActiveUserID, (Py_ssize_t)sizeof(data->ActiveUserID));
    return PyBytes_FromString(data->ActiveUserID);
}

static int PyCThostFtdcHedgeCfmFieldType_set_ActiveUserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActiveUserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcHedgeCfmField::ActiveUserID)) {
        PyErr_SetString(PyExc_ValueError, "ActiveUserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    // memset(data->ActiveUserID, 0, sizeof(data->ActiveUserID));
    // memcpy(data->ActiveUserID, buf, len);
    strncpy(data->ActiveUserID, buf, sizeof(data->ActiveUserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单编号
/// typedef char TThostFtdcOrderSysIDType[21]
static PyObject *PyCThostFtdcHedgeCfmFieldType_get_OrderSysID(PyObject *self, void *closure) {
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderSysID, (Py_ssize_t)sizeof(data->OrderSysID));
    return PyBytes_FromString(data->OrderSysID);
}

static int PyCThostFtdcHedgeCfmFieldType_set_OrderSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcHedgeCfmField::OrderSysID)) {
        PyErr_SetString(PyExc_ValueError, "OrderSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    // memset(data->OrderSysID, 0, sizeof(data->OrderSysID));
    // memcpy(data->OrderSysID, buf, len);
    strncpy(data->OrderSysID, buf, sizeof(data->OrderSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 申请状态
/// typedef char TThostFtdcApplyStatusType
static PyObject *PyCThostFtdcHedgeCfmFieldType_get_ApplyStatus(PyObject *self, void *closure) {
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ApplyStatus), 1);
}

static int PyCThostFtdcHedgeCfmFieldType_set_ApplyStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ApplyStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcHedgeCfmField::ApplyStatus)) {
        PyErr_SetString(PyExc_ValueError, "ApplyStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    data->ApplyStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcHedgeCfmFieldType_get_InsertDate(PyObject *self, void *closure) {
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InsertDate, (Py_ssize_t)sizeof(data->InsertDate));
    return PyBytes_FromString(data->InsertDate);
}

static int PyCThostFtdcHedgeCfmFieldType_set_InsertDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InsertDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcHedgeCfmField::InsertDate)) {
        PyErr_SetString(PyExc_ValueError, "InsertDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    // memset(data->InsertDate, 0, sizeof(data->InsertDate));
    // memcpy(data->InsertDate, buf, len);
    strncpy(data->InsertDate, buf, sizeof(data->InsertDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 委托时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcHedgeCfmFieldType_get_InsertTime(PyObject *self, void *closure) {
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InsertTime, (Py_ssize_t)sizeof(data->InsertTime));
    return PyBytes_FromString(data->InsertTime);
}

static int PyCThostFtdcHedgeCfmFieldType_set_InsertTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InsertTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcHedgeCfmField::InsertTime)) {
        PyErr_SetString(PyExc_ValueError, "InsertTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    // memset(data->InsertTime, 0, sizeof(data->InsertTime));
    // memcpy(data->InsertTime, buf, len);
    strncpy(data->InsertTime, buf, sizeof(data->InsertTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 撤销时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcHedgeCfmFieldType_get_CancelTime(PyObject *self, void *closure) {
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CancelTime, (Py_ssize_t)sizeof(data->CancelTime));
    return PyBytes_FromString(data->CancelTime);
}

static int PyCThostFtdcHedgeCfmFieldType_set_CancelTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CancelTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcHedgeCfmField::CancelTime)) {
        PyErr_SetString(PyExc_ValueError, "CancelTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    // memset(data->CancelTime, 0, sizeof(data->CancelTime));
    // memcpy(data->CancelTime, buf, len);
    strncpy(data->CancelTime, buf, sizeof(data->CancelTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcHedgeCfmFieldType_get_ReqDate(PyObject *self, void *closure) {
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ReqDate, (Py_ssize_t)sizeof(data->ReqDate));
    return PyBytes_FromString(data->ReqDate);
}

static int PyCThostFtdcHedgeCfmFieldType_set_ReqDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ReqDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcHedgeCfmField::ReqDate)) {
        PyErr_SetString(PyExc_ValueError, "ReqDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    // memset(data->ReqDate, 0, sizeof(data->ReqDate));
    // memcpy(data->ReqDate, buf, len);
    strncpy(data->ReqDate, buf, sizeof(data->ReqDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 本地报单编号
/// typedef char TThostFtdcOrderLocalIDType[13]
static PyObject *PyCThostFtdcHedgeCfmFieldType_get_OrderLocalID(PyObject *self, void *closure) {
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderLocalID, (Py_ssize_t)sizeof(data->OrderLocalID));
    return PyBytes_FromString(data->OrderLocalID);
}

static int PyCThostFtdcHedgeCfmFieldType_set_OrderLocalID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderLocalID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcHedgeCfmField::OrderLocalID)) {
        PyErr_SetString(PyExc_ValueError, "OrderLocalID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    // memset(data->OrderLocalID, 0, sizeof(data->OrderLocalID));
    // memcpy(data->OrderLocalID, buf, len);
    strncpy(data->OrderLocalID, buf, sizeof(data->OrderLocalID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcHedgeCfmFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcHedgeCfmFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcHedgeCfmField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 会员代码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcHedgeCfmFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcHedgeCfmFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcHedgeCfmField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户代码
/// typedef char TThostFtdcClientIDType[11]
static PyObject *PyCThostFtdcHedgeCfmFieldType_get_ClientID(PyObject *self, void *closure) {
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientID, (Py_ssize_t)sizeof(data->ClientID));
    return PyBytes_FromString(data->ClientID);
}

static int PyCThostFtdcHedgeCfmFieldType_set_ClientID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcHedgeCfmField::ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    // memset(data->ClientID, 0, sizeof(data->ClientID));
    // memcpy(data->ClientID, buf, len);
    strncpy(data->ClientID, buf, sizeof(data->ClientID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约在交易所的代码
/// typedef char TThostFtdcExchangeInstIDType[81]
static PyObject *PyCThostFtdcHedgeCfmFieldType_get_ExchangeInstID(PyObject *self, void *closure) {
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeInstID, (Py_ssize_t)sizeof(data->ExchangeInstID));
    return PyBytes_FromString(data->ExchangeInstID);
}

static int PyCThostFtdcHedgeCfmFieldType_set_ExchangeInstID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcHedgeCfmField::ExchangeInstID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
    // memcpy(data->ExchangeInstID, buf, len);
    strncpy(data->ExchangeInstID, buf, sizeof(data->ExchangeInstID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所交易员代码
/// typedef char TThostFtdcTraderIDType[21]
static PyObject *PyCThostFtdcHedgeCfmFieldType_get_TraderID(PyObject *self, void *closure) {
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TraderID, (Py_ssize_t)sizeof(data->TraderID));
    return PyBytes_FromString(data->TraderID);
}

static int PyCThostFtdcHedgeCfmFieldType_set_TraderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcHedgeCfmField::TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    // memset(data->TraderID, 0, sizeof(data->TraderID));
    // memcpy(data->TraderID, buf, len);
    strncpy(data->TraderID, buf, sizeof(data->TraderID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单提交状态
/// typedef char TThostFtdcOrderSubmitStatusType
static PyObject *PyCThostFtdcHedgeCfmFieldType_get_OrderSubmitStatus(PyObject *self, void *closure) {
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OrderSubmitStatus), 1);
}

static int PyCThostFtdcHedgeCfmFieldType_set_OrderSubmitStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderSubmitStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcHedgeCfmField::OrderSubmitStatus)) {
        PyErr_SetString(PyExc_ValueError, "OrderSubmitStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    data->OrderSubmitStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcHedgeCfmFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcHedgeCfmFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcHedgeCfmField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 状态信息
/// typedef char TThostFtdcErrorMsgType[81]
static PyObject *PyCThostFtdcHedgeCfmFieldType_get_StatusMsg(PyObject *self, void *closure) {
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->StatusMsg, (Py_ssize_t)sizeof(data->StatusMsg));
    return PyBytes_FromString(data->StatusMsg);
}

static int PyCThostFtdcHedgeCfmFieldType_set_StatusMsg(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "StatusMsg Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcHedgeCfmField::StatusMsg)) {
        PyErr_SetString(PyExc_ValueError, "StatusMsg must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    // memset(data->StatusMsg, 0, sizeof(data->StatusMsg));
    // memcpy(data->StatusMsg, buf, len);
    strncpy(data->StatusMsg, buf, sizeof(data->StatusMsg));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcHedgeCfmFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcHedgeCfmFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcHedgeCfmField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcHedgeCfmFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcHedgeCfmFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcHedgeCfmField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(self);
    CThostFtdcHedgeCfmField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcHedgeCfmFieldType_members[] = {
    /// 数量
    /// typedef int TThostFtdcVolumeType
    {
        .name = "Volume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcHedgeCfmFieldData, data.Volume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("数量")
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
        .offset = offsetof(PyCThostFtdcHedgeCfmFieldData, data.RequestID),
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
        .offset = offsetof(PyCThostFtdcHedgeCfmFieldData, data.FrontID),
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
        .offset = offsetof(PyCThostFtdcHedgeCfmFieldData, data.SessionID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("会话编号")
    },
    /// 经纪公司报单编号
    /// typedef int TThostFtdcSequenceNoType
    {
        .name = "BrokerOrderSeq",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcHedgeCfmFieldData, data.BrokerOrderSeq),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("经纪公司报单编号")
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
        .offset = offsetof(PyCThostFtdcHedgeCfmFieldData, data.SequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("序号")
    },
    /// 成功处理数量
    /// typedef int TThostFtdcVolumeType
    {
        .name = "DealVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcHedgeCfmFieldData, data.DealVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("成功处理数量")
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
        .offset = offsetof(PyCThostFtdcHedgeCfmFieldData, data.InstallID),
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
        .offset = offsetof(PyCThostFtdcHedgeCfmFieldData, data.NotifySequence),
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
        .offset = offsetof(PyCThostFtdcHedgeCfmFieldData, data.SettlementID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("结算编号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcHedgeCfmFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcHedgeCfmFieldType_get_BrokerID,
    .set = PyCThostFtdcHedgeCfmFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcHedgeCfmFieldType_get_InvestorID,
    .set = PyCThostFtdcHedgeCfmFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcHedgeCfmFieldType_get_InstrumentID,
    .set = PyCThostFtdcHedgeCfmFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcHedgeCfmFieldType_get_UserID,
    .set = PyCThostFtdcHedgeCfmFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    {
    .name = "Direction",
    .get = PyCThostFtdcHedgeCfmFieldType_get_Direction,
    .set = PyCThostFtdcHedgeCfmFieldType_set_Direction,
    .doc = PyDoc_STR("买卖方向"),
    },
    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    {
    .name = "OrderRef",
    .get = PyCThostFtdcHedgeCfmFieldType_get_OrderRef,
    .set = PyCThostFtdcHedgeCfmFieldType_set_OrderRef,
    .doc = PyDoc_STR("报单引用"),
    },
    /// 操作用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "ActiveUserID",
    .get = PyCThostFtdcHedgeCfmFieldType_get_ActiveUserID,
    .set = PyCThostFtdcHedgeCfmFieldType_set_ActiveUserID,
    .doc = PyDoc_STR("操作用户代码"),
    },
    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    {
    .name = "OrderSysID",
    .get = PyCThostFtdcHedgeCfmFieldType_get_OrderSysID,
    .set = PyCThostFtdcHedgeCfmFieldType_set_OrderSysID,
    .doc = PyDoc_STR("报单编号"),
    },
    /// 申请状态
    /// typedef char TThostFtdcApplyStatusType
    {
    .name = "ApplyStatus",
    .get = PyCThostFtdcHedgeCfmFieldType_get_ApplyStatus,
    .set = PyCThostFtdcHedgeCfmFieldType_set_ApplyStatus,
    .doc = PyDoc_STR("申请状态"),
    },
    /// 报单日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "InsertDate",
    .get = PyCThostFtdcHedgeCfmFieldType_get_InsertDate,
    .set = PyCThostFtdcHedgeCfmFieldType_set_InsertDate,
    .doc = PyDoc_STR("报单日期"),
    },
    /// 委托时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "InsertTime",
    .get = PyCThostFtdcHedgeCfmFieldType_get_InsertTime,
    .set = PyCThostFtdcHedgeCfmFieldType_set_InsertTime,
    .doc = PyDoc_STR("委托时间"),
    },
    /// 撤销时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "CancelTime",
    .get = PyCThostFtdcHedgeCfmFieldType_get_CancelTime,
    .set = PyCThostFtdcHedgeCfmFieldType_set_CancelTime,
    .doc = PyDoc_STR("撤销时间"),
    },
    /// 日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "ReqDate",
    .get = PyCThostFtdcHedgeCfmFieldType_get_ReqDate,
    .set = PyCThostFtdcHedgeCfmFieldType_set_ReqDate,
    .doc = PyDoc_STR("日期"),
    },
    /// 本地报单编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    {
    .name = "OrderLocalID",
    .get = PyCThostFtdcHedgeCfmFieldType_get_OrderLocalID,
    .set = PyCThostFtdcHedgeCfmFieldType_set_OrderLocalID,
    .doc = PyDoc_STR("本地报单编号"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcHedgeCfmFieldType_get_ExchangeID,
    .set = PyCThostFtdcHedgeCfmFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcHedgeCfmFieldType_get_ParticipantID,
    .set = PyCThostFtdcHedgeCfmFieldType_set_ParticipantID,
    .doc = PyDoc_STR("会员代码"),
    },
    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    {
    .name = "ClientID",
    .get = PyCThostFtdcHedgeCfmFieldType_get_ClientID,
    .set = PyCThostFtdcHedgeCfmFieldType_set_ClientID,
    .doc = PyDoc_STR("客户代码"),
    },
    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    {
    .name = "ExchangeInstID",
    .get = PyCThostFtdcHedgeCfmFieldType_get_ExchangeInstID,
    .set = PyCThostFtdcHedgeCfmFieldType_set_ExchangeInstID,
    .doc = PyDoc_STR("合约在交易所的代码"),
    },
    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    {
    .name = "TraderID",
    .get = PyCThostFtdcHedgeCfmFieldType_get_TraderID,
    .set = PyCThostFtdcHedgeCfmFieldType_set_TraderID,
    .doc = PyDoc_STR("交易所交易员代码"),
    },
    /// 报单提交状态
    /// typedef char TThostFtdcOrderSubmitStatusType
    {
    .name = "OrderSubmitStatus",
    .get = PyCThostFtdcHedgeCfmFieldType_get_OrderSubmitStatus,
    .set = PyCThostFtdcHedgeCfmFieldType_set_OrderSubmitStatus,
    .doc = PyDoc_STR("报单提交状态"),
    },
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcHedgeCfmFieldType_get_TradingDay,
    .set = PyCThostFtdcHedgeCfmFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    {
    .name = "StatusMsg",
    .get = PyCThostFtdcHedgeCfmFieldType_get_StatusMsg,
    .set = PyCThostFtdcHedgeCfmFieldType_set_StatusMsg,
    .doc = PyDoc_STR("状态信息"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcHedgeCfmFieldType_get_IPAddress,
    .set = PyCThostFtdcHedgeCfmFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcHedgeCfmFieldType_get_MacAddress,
    .set = PyCThostFtdcHedgeCfmFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcHedgeCfmFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcHedgeCfmField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("套保申请回报")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcHedgeCfmFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcHedgeCfmFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcHedgeCfmFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcHedgeCfmFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcHedgeCfmFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcHedgeCfmFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("套保申请回报")},
    {Py_tp_members, PyCThostFtdcHedgeCfmFieldType_members},
    {Py_tp_getset, PyCThostFtdcHedgeCfmFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcHedgeCfmFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcHedgeCfmFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcHedgeCfmFieldType_spec = {
    .name = "PyCTP.CThostFtdcHedgeCfmField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcHedgeCfmFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcHedgeCfmFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcHedgeCfmFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcHedgeCfmFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcHedgeCfmFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcHedgeCfmFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcHedgeCfmFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcHedgeCfmFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcHedgeCfmField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcHedgeCfmField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}