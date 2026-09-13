
#include "PyCThostFtdcSpdApplyField.h"

///套利申请回报

static int PyCThostFtdcSpdApplyFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "FirstLegInstrumentID", "SecondLegInstrumentID", "UserID", "Volume", "Direction", "RequestID", "FrontID", "SessionID", "OrderRef", "ActiveUserID", "BrokerOrderSeq", "OrderSysID", "ApplyStatus", "SequenceNo", "InsertDate", "InsertTime", "CancelTime", "OrderLocalID", "ExchangeID", "ParticipantID", "ClientID", "ExchangeInstID", "TraderID", "InstallID", "OrderSubmitStatus", "NotifySequence", "TradingDay", "SettlementID", "IPAddress", "MacAddress", "CmbType", "StatusMsg", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcSpdApplyField_BrokerID = NULL;
    Py_ssize_t CThostFtdcSpdApplyField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcSpdApplyField_InvestorID = NULL;
    Py_ssize_t CThostFtdcSpdApplyField_InvestorID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSpdApplyField_FirstLegInstrumentID = NULL;
    Py_ssize_t CThostFtdcSpdApplyField_FirstLegInstrumentID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSpdApplyField_SecondLegInstrumentID = NULL;
    Py_ssize_t CThostFtdcSpdApplyField_SecondLegInstrumentID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcSpdApplyField_UserID = NULL;
    Py_ssize_t CThostFtdcSpdApplyField_UserID_length = 0;

    /// 数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcSpdApplyField_Volume = 0;

    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    char CThostFtdcSpdApplyField_Direction = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcSpdApplyField_RequestID = 0;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    int CThostFtdcSpdApplyField_FrontID = 0;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcSpdApplyField_SessionID = 0;

    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    char *CThostFtdcSpdApplyField_OrderRef = NULL;
    Py_ssize_t CThostFtdcSpdApplyField_OrderRef_length = 0;

    /// 操作用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcSpdApplyField_ActiveUserID = NULL;
    Py_ssize_t CThostFtdcSpdApplyField_ActiveUserID_length = 0;

    /// 经纪公司报单编号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcSpdApplyField_BrokerOrderSeq = 0;

    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    char *CThostFtdcSpdApplyField_OrderSysID = NULL;
    Py_ssize_t CThostFtdcSpdApplyField_OrderSysID_length = 0;

    /// 申请状态
    /// typedef char TThostFtdcApplyStatusType
    char CThostFtdcSpdApplyField_ApplyStatus = 0;

    /// 序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcSpdApplyField_SequenceNo = 0;

    /// 报单日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcSpdApplyField_InsertDate = NULL;
    Py_ssize_t CThostFtdcSpdApplyField_InsertDate_length = 0;

    /// 委托时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcSpdApplyField_InsertTime = NULL;
    Py_ssize_t CThostFtdcSpdApplyField_InsertTime_length = 0;

    /// 撤销时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcSpdApplyField_CancelTime = NULL;
    Py_ssize_t CThostFtdcSpdApplyField_CancelTime_length = 0;

    /// 本地报单编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    char *CThostFtdcSpdApplyField_OrderLocalID = NULL;
    Py_ssize_t CThostFtdcSpdApplyField_OrderLocalID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcSpdApplyField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcSpdApplyField_ExchangeID_length = 0;

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcSpdApplyField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcSpdApplyField_ParticipantID_length = 0;

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    char *CThostFtdcSpdApplyField_ClientID = NULL;
    Py_ssize_t CThostFtdcSpdApplyField_ClientID_length = 0;

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    char *CThostFtdcSpdApplyField_ExchangeInstID = NULL;
    Py_ssize_t CThostFtdcSpdApplyField_ExchangeInstID_length = 0;

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    char *CThostFtdcSpdApplyField_TraderID = NULL;
    Py_ssize_t CThostFtdcSpdApplyField_TraderID_length = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcSpdApplyField_InstallID = 0;

    /// 报单提交状态
    /// typedef char TThostFtdcOrderSubmitStatusType
    char CThostFtdcSpdApplyField_OrderSubmitStatus = 0;

    /// 报单提示序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcSpdApplyField_NotifySequence = 0;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcSpdApplyField_TradingDay = NULL;
    Py_ssize_t CThostFtdcSpdApplyField_TradingDay_length = 0;

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    int CThostFtdcSpdApplyField_SettlementID = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcSpdApplyField_IPAddress = NULL;
    Py_ssize_t CThostFtdcSpdApplyField_IPAddress_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcSpdApplyField_MacAddress = NULL;
    Py_ssize_t CThostFtdcSpdApplyField_MacAddress_length = 0;

    /// 组合定单类型
    /// typedef char TThostFtdcCmbTypeType
    char CThostFtdcSpdApplyField_CmbType = 0;

    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    char *CThostFtdcSpdApplyField_StatusMsg = NULL;
    Py_ssize_t CThostFtdcSpdApplyField_StatusMsg_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#iciiiy#y#iy#ciy#y#y#y#y#y#y#y#y#iciy#iy#y#cy#", (char **)kwlist
        , &CThostFtdcSpdApplyField_BrokerID, &CThostFtdcSpdApplyField_BrokerID_length
        , &CThostFtdcSpdApplyField_InvestorID, &CThostFtdcSpdApplyField_InvestorID_length
        , &CThostFtdcSpdApplyField_FirstLegInstrumentID, &CThostFtdcSpdApplyField_FirstLegInstrumentID_length
        , &CThostFtdcSpdApplyField_SecondLegInstrumentID, &CThostFtdcSpdApplyField_SecondLegInstrumentID_length
        , &CThostFtdcSpdApplyField_UserID, &CThostFtdcSpdApplyField_UserID_length
        , &CThostFtdcSpdApplyField_Volume
        , &CThostFtdcSpdApplyField_Direction
        , &CThostFtdcSpdApplyField_RequestID
        , &CThostFtdcSpdApplyField_FrontID
        , &CThostFtdcSpdApplyField_SessionID
        , &CThostFtdcSpdApplyField_OrderRef, &CThostFtdcSpdApplyField_OrderRef_length
        , &CThostFtdcSpdApplyField_ActiveUserID, &CThostFtdcSpdApplyField_ActiveUserID_length
        , &CThostFtdcSpdApplyField_BrokerOrderSeq
        , &CThostFtdcSpdApplyField_OrderSysID, &CThostFtdcSpdApplyField_OrderSysID_length
        , &CThostFtdcSpdApplyField_ApplyStatus
        , &CThostFtdcSpdApplyField_SequenceNo
        , &CThostFtdcSpdApplyField_InsertDate, &CThostFtdcSpdApplyField_InsertDate_length
        , &CThostFtdcSpdApplyField_InsertTime, &CThostFtdcSpdApplyField_InsertTime_length
        , &CThostFtdcSpdApplyField_CancelTime, &CThostFtdcSpdApplyField_CancelTime_length
        , &CThostFtdcSpdApplyField_OrderLocalID, &CThostFtdcSpdApplyField_OrderLocalID_length
        , &CThostFtdcSpdApplyField_ExchangeID, &CThostFtdcSpdApplyField_ExchangeID_length
        , &CThostFtdcSpdApplyField_ParticipantID, &CThostFtdcSpdApplyField_ParticipantID_length
        , &CThostFtdcSpdApplyField_ClientID, &CThostFtdcSpdApplyField_ClientID_length
        , &CThostFtdcSpdApplyField_ExchangeInstID, &CThostFtdcSpdApplyField_ExchangeInstID_length
        , &CThostFtdcSpdApplyField_TraderID, &CThostFtdcSpdApplyField_TraderID_length
        , &CThostFtdcSpdApplyField_InstallID
        , &CThostFtdcSpdApplyField_OrderSubmitStatus
        , &CThostFtdcSpdApplyField_NotifySequence
        , &CThostFtdcSpdApplyField_TradingDay, &CThostFtdcSpdApplyField_TradingDay_length
        , &CThostFtdcSpdApplyField_SettlementID
        , &CThostFtdcSpdApplyField_IPAddress, &CThostFtdcSpdApplyField_IPAddress_length
        , &CThostFtdcSpdApplyField_MacAddress, &CThostFtdcSpdApplyField_MacAddress_length
        , &CThostFtdcSpdApplyField_CmbType
        , &CThostFtdcSpdApplyField_StatusMsg, &CThostFtdcSpdApplyField_StatusMsg_length
    )) {
        return -1;
    }

    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcSpdApplyField_BrokerID != NULL ) {
        if(CThostFtdcSpdApplyField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcSpdApplyField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcSpdApplyField_BrokerID, CThostFtdcSpdApplyField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcSpdApplyField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcSpdApplyField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcSpdApplyField_InvestorID != NULL ) {
        if(CThostFtdcSpdApplyField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcSpdApplyField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcSpdApplyField_InvestorID, CThostFtdcSpdApplyField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcSpdApplyField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcSpdApplyField_InvestorID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSpdApplyField_FirstLegInstrumentID != NULL ) {
        if(CThostFtdcSpdApplyField_FirstLegInstrumentID_length >= (Py_ssize_t)sizeof(data->FirstLegInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "FirstLegInstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcSpdApplyField_FirstLegInstrumentID_length);
            return -1;
        }
        // memset(data->FirstLegInstrumentID, 0, sizeof(data->FirstLegInstrumentID));
        // memcpy(data->FirstLegInstrumentID, CThostFtdcSpdApplyField_FirstLegInstrumentID, CThostFtdcSpdApplyField_FirstLegInstrumentID_length);
        strncpy(data->FirstLegInstrumentID, CThostFtdcSpdApplyField_FirstLegInstrumentID, sizeof(data->FirstLegInstrumentID));
        CThostFtdcSpdApplyField_FirstLegInstrumentID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSpdApplyField_SecondLegInstrumentID != NULL ) {
        if(CThostFtdcSpdApplyField_SecondLegInstrumentID_length >= (Py_ssize_t)sizeof(data->SecondLegInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "SecondLegInstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcSpdApplyField_SecondLegInstrumentID_length);
            return -1;
        }
        // memset(data->SecondLegInstrumentID, 0, sizeof(data->SecondLegInstrumentID));
        // memcpy(data->SecondLegInstrumentID, CThostFtdcSpdApplyField_SecondLegInstrumentID, CThostFtdcSpdApplyField_SecondLegInstrumentID_length);
        strncpy(data->SecondLegInstrumentID, CThostFtdcSpdApplyField_SecondLegInstrumentID, sizeof(data->SecondLegInstrumentID));
        CThostFtdcSpdApplyField_SecondLegInstrumentID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcSpdApplyField_UserID != NULL ) {
        if(CThostFtdcSpdApplyField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcSpdApplyField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcSpdApplyField_UserID, CThostFtdcSpdApplyField_UserID_length);
        strncpy(data->UserID, CThostFtdcSpdApplyField_UserID, sizeof(data->UserID));
        CThostFtdcSpdApplyField_UserID = NULL;
    }

    /// 数量
    /// typedef int TThostFtdcVolumeType
    data->Volume = CThostFtdcSpdApplyField_Volume;

    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    data->Direction = CThostFtdcSpdApplyField_Direction;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcSpdApplyField_RequestID;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    data->FrontID = CThostFtdcSpdApplyField_FrontID;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcSpdApplyField_SessionID;

    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    if( CThostFtdcSpdApplyField_OrderRef != NULL ) {
        if(CThostFtdcSpdApplyField_OrderRef_length >= (Py_ssize_t)sizeof(data->OrderRef)) {
            PyErr_Format(PyExc_ValueError, "OrderRef too long: length=%zd (max allowed is 12)", CThostFtdcSpdApplyField_OrderRef_length);
            return -1;
        }
        // memset(data->OrderRef, 0, sizeof(data->OrderRef));
        // memcpy(data->OrderRef, CThostFtdcSpdApplyField_OrderRef, CThostFtdcSpdApplyField_OrderRef_length);
        strncpy(data->OrderRef, CThostFtdcSpdApplyField_OrderRef, sizeof(data->OrderRef));
        CThostFtdcSpdApplyField_OrderRef = NULL;
    }

    /// 操作用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcSpdApplyField_ActiveUserID != NULL ) {
        if(CThostFtdcSpdApplyField_ActiveUserID_length >= (Py_ssize_t)sizeof(data->ActiveUserID)) {
            PyErr_Format(PyExc_ValueError, "ActiveUserID too long: length=%zd (max allowed is 15)", CThostFtdcSpdApplyField_ActiveUserID_length);
            return -1;
        }
        // memset(data->ActiveUserID, 0, sizeof(data->ActiveUserID));
        // memcpy(data->ActiveUserID, CThostFtdcSpdApplyField_ActiveUserID, CThostFtdcSpdApplyField_ActiveUserID_length);
        strncpy(data->ActiveUserID, CThostFtdcSpdApplyField_ActiveUserID, sizeof(data->ActiveUserID));
        CThostFtdcSpdApplyField_ActiveUserID = NULL;
    }

    /// 经纪公司报单编号
    /// typedef int TThostFtdcSequenceNoType
    data->BrokerOrderSeq = CThostFtdcSpdApplyField_BrokerOrderSeq;

    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    if( CThostFtdcSpdApplyField_OrderSysID != NULL ) {
        if(CThostFtdcSpdApplyField_OrderSysID_length >= (Py_ssize_t)sizeof(data->OrderSysID)) {
            PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is 20)", CThostFtdcSpdApplyField_OrderSysID_length);
            return -1;
        }
        // memset(data->OrderSysID, 0, sizeof(data->OrderSysID));
        // memcpy(data->OrderSysID, CThostFtdcSpdApplyField_OrderSysID, CThostFtdcSpdApplyField_OrderSysID_length);
        strncpy(data->OrderSysID, CThostFtdcSpdApplyField_OrderSysID, sizeof(data->OrderSysID));
        CThostFtdcSpdApplyField_OrderSysID = NULL;
    }

    /// 申请状态
    /// typedef char TThostFtdcApplyStatusType
    data->ApplyStatus = CThostFtdcSpdApplyField_ApplyStatus;

    /// 序号
    /// typedef int TThostFtdcSequenceNoType
    data->SequenceNo = CThostFtdcSpdApplyField_SequenceNo;

    /// 报单日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcSpdApplyField_InsertDate != NULL ) {
        if(CThostFtdcSpdApplyField_InsertDate_length >= (Py_ssize_t)sizeof(data->InsertDate)) {
            PyErr_Format(PyExc_ValueError, "InsertDate too long: length=%zd (max allowed is 8)", CThostFtdcSpdApplyField_InsertDate_length);
            return -1;
        }
        // memset(data->InsertDate, 0, sizeof(data->InsertDate));
        // memcpy(data->InsertDate, CThostFtdcSpdApplyField_InsertDate, CThostFtdcSpdApplyField_InsertDate_length);
        strncpy(data->InsertDate, CThostFtdcSpdApplyField_InsertDate, sizeof(data->InsertDate));
        CThostFtdcSpdApplyField_InsertDate = NULL;
    }

    /// 委托时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcSpdApplyField_InsertTime != NULL ) {
        if(CThostFtdcSpdApplyField_InsertTime_length >= (Py_ssize_t)sizeof(data->InsertTime)) {
            PyErr_Format(PyExc_ValueError, "InsertTime too long: length=%zd (max allowed is 8)", CThostFtdcSpdApplyField_InsertTime_length);
            return -1;
        }
        // memset(data->InsertTime, 0, sizeof(data->InsertTime));
        // memcpy(data->InsertTime, CThostFtdcSpdApplyField_InsertTime, CThostFtdcSpdApplyField_InsertTime_length);
        strncpy(data->InsertTime, CThostFtdcSpdApplyField_InsertTime, sizeof(data->InsertTime));
        CThostFtdcSpdApplyField_InsertTime = NULL;
    }

    /// 撤销时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcSpdApplyField_CancelTime != NULL ) {
        if(CThostFtdcSpdApplyField_CancelTime_length >= (Py_ssize_t)sizeof(data->CancelTime)) {
            PyErr_Format(PyExc_ValueError, "CancelTime too long: length=%zd (max allowed is 8)", CThostFtdcSpdApplyField_CancelTime_length);
            return -1;
        }
        // memset(data->CancelTime, 0, sizeof(data->CancelTime));
        // memcpy(data->CancelTime, CThostFtdcSpdApplyField_CancelTime, CThostFtdcSpdApplyField_CancelTime_length);
        strncpy(data->CancelTime, CThostFtdcSpdApplyField_CancelTime, sizeof(data->CancelTime));
        CThostFtdcSpdApplyField_CancelTime = NULL;
    }

    /// 本地报单编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    if( CThostFtdcSpdApplyField_OrderLocalID != NULL ) {
        if(CThostFtdcSpdApplyField_OrderLocalID_length >= (Py_ssize_t)sizeof(data->OrderLocalID)) {
            PyErr_Format(PyExc_ValueError, "OrderLocalID too long: length=%zd (max allowed is 12)", CThostFtdcSpdApplyField_OrderLocalID_length);
            return -1;
        }
        // memset(data->OrderLocalID, 0, sizeof(data->OrderLocalID));
        // memcpy(data->OrderLocalID, CThostFtdcSpdApplyField_OrderLocalID, CThostFtdcSpdApplyField_OrderLocalID_length);
        strncpy(data->OrderLocalID, CThostFtdcSpdApplyField_OrderLocalID, sizeof(data->OrderLocalID));
        CThostFtdcSpdApplyField_OrderLocalID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcSpdApplyField_ExchangeID != NULL ) {
        if(CThostFtdcSpdApplyField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcSpdApplyField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcSpdApplyField_ExchangeID, CThostFtdcSpdApplyField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcSpdApplyField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcSpdApplyField_ExchangeID = NULL;
    }

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcSpdApplyField_ParticipantID != NULL ) {
        if(CThostFtdcSpdApplyField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcSpdApplyField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcSpdApplyField_ParticipantID, CThostFtdcSpdApplyField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcSpdApplyField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcSpdApplyField_ParticipantID = NULL;
    }

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    if( CThostFtdcSpdApplyField_ClientID != NULL ) {
        if(CThostFtdcSpdApplyField_ClientID_length >= (Py_ssize_t)sizeof(data->ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is 10)", CThostFtdcSpdApplyField_ClientID_length);
            return -1;
        }
        // memset(data->ClientID, 0, sizeof(data->ClientID));
        // memcpy(data->ClientID, CThostFtdcSpdApplyField_ClientID, CThostFtdcSpdApplyField_ClientID_length);
        strncpy(data->ClientID, CThostFtdcSpdApplyField_ClientID, sizeof(data->ClientID));
        CThostFtdcSpdApplyField_ClientID = NULL;
    }

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    if( CThostFtdcSpdApplyField_ExchangeInstID != NULL ) {
        if(CThostFtdcSpdApplyField_ExchangeInstID_length >= (Py_ssize_t)sizeof(data->ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is 80)", CThostFtdcSpdApplyField_ExchangeInstID_length);
            return -1;
        }
        // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
        // memcpy(data->ExchangeInstID, CThostFtdcSpdApplyField_ExchangeInstID, CThostFtdcSpdApplyField_ExchangeInstID_length);
        strncpy(data->ExchangeInstID, CThostFtdcSpdApplyField_ExchangeInstID, sizeof(data->ExchangeInstID));
        CThostFtdcSpdApplyField_ExchangeInstID = NULL;
    }

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    if( CThostFtdcSpdApplyField_TraderID != NULL ) {
        if(CThostFtdcSpdApplyField_TraderID_length >= (Py_ssize_t)sizeof(data->TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is 20)", CThostFtdcSpdApplyField_TraderID_length);
            return -1;
        }
        // memset(data->TraderID, 0, sizeof(data->TraderID));
        // memcpy(data->TraderID, CThostFtdcSpdApplyField_TraderID, CThostFtdcSpdApplyField_TraderID_length);
        strncpy(data->TraderID, CThostFtdcSpdApplyField_TraderID, sizeof(data->TraderID));
        CThostFtdcSpdApplyField_TraderID = NULL;
    }

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcSpdApplyField_InstallID;

    /// 报单提交状态
    /// typedef char TThostFtdcOrderSubmitStatusType
    data->OrderSubmitStatus = CThostFtdcSpdApplyField_OrderSubmitStatus;

    /// 报单提示序号
    /// typedef int TThostFtdcSequenceNoType
    data->NotifySequence = CThostFtdcSpdApplyField_NotifySequence;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcSpdApplyField_TradingDay != NULL ) {
        if(CThostFtdcSpdApplyField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcSpdApplyField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcSpdApplyField_TradingDay, CThostFtdcSpdApplyField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcSpdApplyField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcSpdApplyField_TradingDay = NULL;
    }

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    data->SettlementID = CThostFtdcSpdApplyField_SettlementID;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcSpdApplyField_IPAddress != NULL ) {
        if(CThostFtdcSpdApplyField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcSpdApplyField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcSpdApplyField_IPAddress, CThostFtdcSpdApplyField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcSpdApplyField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcSpdApplyField_IPAddress = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcSpdApplyField_MacAddress != NULL ) {
        if(CThostFtdcSpdApplyField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcSpdApplyField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcSpdApplyField_MacAddress, CThostFtdcSpdApplyField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcSpdApplyField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcSpdApplyField_MacAddress = NULL;
    }

    /// 组合定单类型
    /// typedef char TThostFtdcCmbTypeType
    data->CmbType = CThostFtdcSpdApplyField_CmbType;

    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    if( CThostFtdcSpdApplyField_StatusMsg != NULL ) {
        if(CThostFtdcSpdApplyField_StatusMsg_length >= (Py_ssize_t)sizeof(data->StatusMsg)) {
            PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is 80)", CThostFtdcSpdApplyField_StatusMsg_length);
            return -1;
        }
        // memset(data->StatusMsg, 0, sizeof(data->StatusMsg));
        // memcpy(data->StatusMsg, CThostFtdcSpdApplyField_StatusMsg, CThostFtdcSpdApplyField_StatusMsg_length);
        strncpy(data->StatusMsg, CThostFtdcSpdApplyField_StatusMsg, sizeof(data->StatusMsg));
        CThostFtdcSpdApplyField_StatusMsg = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSpdApplyFieldType_repr(PyObject *self) {

    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:i,s:i,s:y,s:y,s:i,s:y,s:c,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:i,s:y,s:y,s:c,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "FirstLegInstrumentID", data->FirstLegInstrumentID//, (Py_ssize_t)sizeof(data->FirstLegInstrumentID)
        , "SecondLegInstrumentID", data->SecondLegInstrumentID//, (Py_ssize_t)sizeof(data->SecondLegInstrumentID)
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
        , "InsertDate", data->InsertDate//, (Py_ssize_t)sizeof(data->InsertDate)
        , "InsertTime", data->InsertTime//, (Py_ssize_t)sizeof(data->InsertTime)
        , "CancelTime", data->CancelTime//, (Py_ssize_t)sizeof(data->CancelTime)
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
        , "IPAddress", data->IPAddress//, (Py_ssize_t)sizeof(data->IPAddress)
        , "MacAddress", data->MacAddress//, (Py_ssize_t)sizeof(data->MacAddress)
        , "CmbType", data->CmbType
        , "StatusMsg", data->StatusMsg//, (Py_ssize_t)sizeof(data->StatusMsg)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSpdApplyField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSpdApplyField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcSpdApplyFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcSpdApplyFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSpdApplyField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcSpdApplyFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcSpdApplyFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSpdApplyField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSpdApplyFieldType_get_FirstLegInstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->FirstLegInstrumentID, (Py_ssize_t)sizeof(data->FirstLegInstrumentID));
    return PyBytes_FromString(data->FirstLegInstrumentID);
}

static int PyCThostFtdcSpdApplyFieldType_set_FirstLegInstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "FirstLegInstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSpdApplyField::FirstLegInstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "FirstLegInstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    // memset(data->FirstLegInstrumentID, 0, sizeof(data->FirstLegInstrumentID));
    // memcpy(data->FirstLegInstrumentID, buf, len);
    strncpy(data->FirstLegInstrumentID, buf, sizeof(data->FirstLegInstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSpdApplyFieldType_get_SecondLegInstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->SecondLegInstrumentID, (Py_ssize_t)sizeof(data->SecondLegInstrumentID));
    return PyBytes_FromString(data->SecondLegInstrumentID);
}

static int PyCThostFtdcSpdApplyFieldType_set_SecondLegInstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SecondLegInstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSpdApplyField::SecondLegInstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "SecondLegInstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    // memset(data->SecondLegInstrumentID, 0, sizeof(data->SecondLegInstrumentID));
    // memcpy(data->SecondLegInstrumentID, buf, len);
    strncpy(data->SecondLegInstrumentID, buf, sizeof(data->SecondLegInstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcSpdApplyFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcSpdApplyFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSpdApplyField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 买卖方向
/// typedef char TThostFtdcDirectionType
static PyObject *PyCThostFtdcSpdApplyFieldType_get_Direction(PyObject *self, void *closure) {
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->Direction), 1);
}

static int PyCThostFtdcSpdApplyFieldType_set_Direction(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Direction Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSpdApplyField::Direction)) {
        PyErr_SetString(PyExc_ValueError, "Direction must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    data->Direction = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单引用
/// typedef char TThostFtdcOrderRefType[13]
static PyObject *PyCThostFtdcSpdApplyFieldType_get_OrderRef(PyObject *self, void *closure) {
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderRef, (Py_ssize_t)sizeof(data->OrderRef));
    return PyBytes_FromString(data->OrderRef);
}

static int PyCThostFtdcSpdApplyFieldType_set_OrderRef(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderRef Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSpdApplyField::OrderRef)) {
        PyErr_SetString(PyExc_ValueError, "OrderRef must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    // memset(data->OrderRef, 0, sizeof(data->OrderRef));
    // memcpy(data->OrderRef, buf, len);
    strncpy(data->OrderRef, buf, sizeof(data->OrderRef));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcSpdApplyFieldType_get_ActiveUserID(PyObject *self, void *closure) {
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActiveUserID, (Py_ssize_t)sizeof(data->ActiveUserID));
    return PyBytes_FromString(data->ActiveUserID);
}

static int PyCThostFtdcSpdApplyFieldType_set_ActiveUserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActiveUserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSpdApplyField::ActiveUserID)) {
        PyErr_SetString(PyExc_ValueError, "ActiveUserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    // memset(data->ActiveUserID, 0, sizeof(data->ActiveUserID));
    // memcpy(data->ActiveUserID, buf, len);
    strncpy(data->ActiveUserID, buf, sizeof(data->ActiveUserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单编号
/// typedef char TThostFtdcOrderSysIDType[21]
static PyObject *PyCThostFtdcSpdApplyFieldType_get_OrderSysID(PyObject *self, void *closure) {
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderSysID, (Py_ssize_t)sizeof(data->OrderSysID));
    return PyBytes_FromString(data->OrderSysID);
}

static int PyCThostFtdcSpdApplyFieldType_set_OrderSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSpdApplyField::OrderSysID)) {
        PyErr_SetString(PyExc_ValueError, "OrderSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    // memset(data->OrderSysID, 0, sizeof(data->OrderSysID));
    // memcpy(data->OrderSysID, buf, len);
    strncpy(data->OrderSysID, buf, sizeof(data->OrderSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 申请状态
/// typedef char TThostFtdcApplyStatusType
static PyObject *PyCThostFtdcSpdApplyFieldType_get_ApplyStatus(PyObject *self, void *closure) {
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ApplyStatus), 1);
}

static int PyCThostFtdcSpdApplyFieldType_set_ApplyStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ApplyStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSpdApplyField::ApplyStatus)) {
        PyErr_SetString(PyExc_ValueError, "ApplyStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    data->ApplyStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcSpdApplyFieldType_get_InsertDate(PyObject *self, void *closure) {
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InsertDate, (Py_ssize_t)sizeof(data->InsertDate));
    return PyBytes_FromString(data->InsertDate);
}

static int PyCThostFtdcSpdApplyFieldType_set_InsertDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InsertDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSpdApplyField::InsertDate)) {
        PyErr_SetString(PyExc_ValueError, "InsertDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    // memset(data->InsertDate, 0, sizeof(data->InsertDate));
    // memcpy(data->InsertDate, buf, len);
    strncpy(data->InsertDate, buf, sizeof(data->InsertDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 委托时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcSpdApplyFieldType_get_InsertTime(PyObject *self, void *closure) {
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InsertTime, (Py_ssize_t)sizeof(data->InsertTime));
    return PyBytes_FromString(data->InsertTime);
}

static int PyCThostFtdcSpdApplyFieldType_set_InsertTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InsertTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSpdApplyField::InsertTime)) {
        PyErr_SetString(PyExc_ValueError, "InsertTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    // memset(data->InsertTime, 0, sizeof(data->InsertTime));
    // memcpy(data->InsertTime, buf, len);
    strncpy(data->InsertTime, buf, sizeof(data->InsertTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 撤销时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcSpdApplyFieldType_get_CancelTime(PyObject *self, void *closure) {
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CancelTime, (Py_ssize_t)sizeof(data->CancelTime));
    return PyBytes_FromString(data->CancelTime);
}

static int PyCThostFtdcSpdApplyFieldType_set_CancelTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CancelTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSpdApplyField::CancelTime)) {
        PyErr_SetString(PyExc_ValueError, "CancelTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    // memset(data->CancelTime, 0, sizeof(data->CancelTime));
    // memcpy(data->CancelTime, buf, len);
    strncpy(data->CancelTime, buf, sizeof(data->CancelTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 本地报单编号
/// typedef char TThostFtdcOrderLocalIDType[13]
static PyObject *PyCThostFtdcSpdApplyFieldType_get_OrderLocalID(PyObject *self, void *closure) {
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderLocalID, (Py_ssize_t)sizeof(data->OrderLocalID));
    return PyBytes_FromString(data->OrderLocalID);
}

static int PyCThostFtdcSpdApplyFieldType_set_OrderLocalID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderLocalID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSpdApplyField::OrderLocalID)) {
        PyErr_SetString(PyExc_ValueError, "OrderLocalID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    // memset(data->OrderLocalID, 0, sizeof(data->OrderLocalID));
    // memcpy(data->OrderLocalID, buf, len);
    strncpy(data->OrderLocalID, buf, sizeof(data->OrderLocalID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcSpdApplyFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcSpdApplyFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSpdApplyField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 会员代码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcSpdApplyFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcSpdApplyFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSpdApplyField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户代码
/// typedef char TThostFtdcClientIDType[11]
static PyObject *PyCThostFtdcSpdApplyFieldType_get_ClientID(PyObject *self, void *closure) {
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientID, (Py_ssize_t)sizeof(data->ClientID));
    return PyBytes_FromString(data->ClientID);
}

static int PyCThostFtdcSpdApplyFieldType_set_ClientID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSpdApplyField::ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    // memset(data->ClientID, 0, sizeof(data->ClientID));
    // memcpy(data->ClientID, buf, len);
    strncpy(data->ClientID, buf, sizeof(data->ClientID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约在交易所的代码
/// typedef char TThostFtdcExchangeInstIDType[81]
static PyObject *PyCThostFtdcSpdApplyFieldType_get_ExchangeInstID(PyObject *self, void *closure) {
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeInstID, (Py_ssize_t)sizeof(data->ExchangeInstID));
    return PyBytes_FromString(data->ExchangeInstID);
}

static int PyCThostFtdcSpdApplyFieldType_set_ExchangeInstID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSpdApplyField::ExchangeInstID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
    // memcpy(data->ExchangeInstID, buf, len);
    strncpy(data->ExchangeInstID, buf, sizeof(data->ExchangeInstID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所交易员代码
/// typedef char TThostFtdcTraderIDType[21]
static PyObject *PyCThostFtdcSpdApplyFieldType_get_TraderID(PyObject *self, void *closure) {
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TraderID, (Py_ssize_t)sizeof(data->TraderID));
    return PyBytes_FromString(data->TraderID);
}

static int PyCThostFtdcSpdApplyFieldType_set_TraderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSpdApplyField::TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    // memset(data->TraderID, 0, sizeof(data->TraderID));
    // memcpy(data->TraderID, buf, len);
    strncpy(data->TraderID, buf, sizeof(data->TraderID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单提交状态
/// typedef char TThostFtdcOrderSubmitStatusType
static PyObject *PyCThostFtdcSpdApplyFieldType_get_OrderSubmitStatus(PyObject *self, void *closure) {
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OrderSubmitStatus), 1);
}

static int PyCThostFtdcSpdApplyFieldType_set_OrderSubmitStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderSubmitStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSpdApplyField::OrderSubmitStatus)) {
        PyErr_SetString(PyExc_ValueError, "OrderSubmitStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    data->OrderSubmitStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcSpdApplyFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcSpdApplyFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSpdApplyField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcSpdApplyFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcSpdApplyFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSpdApplyField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcSpdApplyFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcSpdApplyFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSpdApplyField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 组合定单类型
/// typedef char TThostFtdcCmbTypeType
static PyObject *PyCThostFtdcSpdApplyFieldType_get_CmbType(PyObject *self, void *closure) {
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->CmbType), 1);
}

static int PyCThostFtdcSpdApplyFieldType_set_CmbType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CmbType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSpdApplyField::CmbType)) {
        PyErr_SetString(PyExc_ValueError, "CmbType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    data->CmbType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 状态信息
/// typedef char TThostFtdcErrorMsgType[81]
static PyObject *PyCThostFtdcSpdApplyFieldType_get_StatusMsg(PyObject *self, void *closure) {
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->StatusMsg, (Py_ssize_t)sizeof(data->StatusMsg));
    return PyBytes_FromString(data->StatusMsg);
}

static int PyCThostFtdcSpdApplyFieldType_set_StatusMsg(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "StatusMsg Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSpdApplyField::StatusMsg)) {
        PyErr_SetString(PyExc_ValueError, "StatusMsg must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(self);
    CThostFtdcSpdApplyField *data = &(extra->data);
    // memset(data->StatusMsg, 0, sizeof(data->StatusMsg));
    // memcpy(data->StatusMsg, buf, len);
    strncpy(data->StatusMsg, buf, sizeof(data->StatusMsg));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSpdApplyFieldType_members[] = {
    /// 数量
    /// typedef int TThostFtdcVolumeType
    {
        .name = "Volume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSpdApplyFieldData, data.Volume),
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
        .offset = offsetof(PyCThostFtdcSpdApplyFieldData, data.RequestID),
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
        .offset = offsetof(PyCThostFtdcSpdApplyFieldData, data.FrontID),
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
        .offset = offsetof(PyCThostFtdcSpdApplyFieldData, data.SessionID),
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
        .offset = offsetof(PyCThostFtdcSpdApplyFieldData, data.BrokerOrderSeq),
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
        .offset = offsetof(PyCThostFtdcSpdApplyFieldData, data.SequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("序号")
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
        .offset = offsetof(PyCThostFtdcSpdApplyFieldData, data.InstallID),
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
        .offset = offsetof(PyCThostFtdcSpdApplyFieldData, data.NotifySequence),
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
        .offset = offsetof(PyCThostFtdcSpdApplyFieldData, data.SettlementID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("结算编号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSpdApplyFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcSpdApplyFieldType_get_BrokerID,
    .set = PyCThostFtdcSpdApplyFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcSpdApplyFieldType_get_InvestorID,
    .set = PyCThostFtdcSpdApplyFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "FirstLegInstrumentID",
    .get = PyCThostFtdcSpdApplyFieldType_get_FirstLegInstrumentID,
    .set = PyCThostFtdcSpdApplyFieldType_set_FirstLegInstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "SecondLegInstrumentID",
    .get = PyCThostFtdcSpdApplyFieldType_get_SecondLegInstrumentID,
    .set = PyCThostFtdcSpdApplyFieldType_set_SecondLegInstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcSpdApplyFieldType_get_UserID,
    .set = PyCThostFtdcSpdApplyFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    {
    .name = "Direction",
    .get = PyCThostFtdcSpdApplyFieldType_get_Direction,
    .set = PyCThostFtdcSpdApplyFieldType_set_Direction,
    .doc = PyDoc_STR("买卖方向"),
    },
    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    {
    .name = "OrderRef",
    .get = PyCThostFtdcSpdApplyFieldType_get_OrderRef,
    .set = PyCThostFtdcSpdApplyFieldType_set_OrderRef,
    .doc = PyDoc_STR("报单引用"),
    },
    /// 操作用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "ActiveUserID",
    .get = PyCThostFtdcSpdApplyFieldType_get_ActiveUserID,
    .set = PyCThostFtdcSpdApplyFieldType_set_ActiveUserID,
    .doc = PyDoc_STR("操作用户代码"),
    },
    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    {
    .name = "OrderSysID",
    .get = PyCThostFtdcSpdApplyFieldType_get_OrderSysID,
    .set = PyCThostFtdcSpdApplyFieldType_set_OrderSysID,
    .doc = PyDoc_STR("报单编号"),
    },
    /// 申请状态
    /// typedef char TThostFtdcApplyStatusType
    {
    .name = "ApplyStatus",
    .get = PyCThostFtdcSpdApplyFieldType_get_ApplyStatus,
    .set = PyCThostFtdcSpdApplyFieldType_set_ApplyStatus,
    .doc = PyDoc_STR("申请状态"),
    },
    /// 报单日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "InsertDate",
    .get = PyCThostFtdcSpdApplyFieldType_get_InsertDate,
    .set = PyCThostFtdcSpdApplyFieldType_set_InsertDate,
    .doc = PyDoc_STR("报单日期"),
    },
    /// 委托时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "InsertTime",
    .get = PyCThostFtdcSpdApplyFieldType_get_InsertTime,
    .set = PyCThostFtdcSpdApplyFieldType_set_InsertTime,
    .doc = PyDoc_STR("委托时间"),
    },
    /// 撤销时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "CancelTime",
    .get = PyCThostFtdcSpdApplyFieldType_get_CancelTime,
    .set = PyCThostFtdcSpdApplyFieldType_set_CancelTime,
    .doc = PyDoc_STR("撤销时间"),
    },
    /// 本地报单编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    {
    .name = "OrderLocalID",
    .get = PyCThostFtdcSpdApplyFieldType_get_OrderLocalID,
    .set = PyCThostFtdcSpdApplyFieldType_set_OrderLocalID,
    .doc = PyDoc_STR("本地报单编号"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcSpdApplyFieldType_get_ExchangeID,
    .set = PyCThostFtdcSpdApplyFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcSpdApplyFieldType_get_ParticipantID,
    .set = PyCThostFtdcSpdApplyFieldType_set_ParticipantID,
    .doc = PyDoc_STR("会员代码"),
    },
    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    {
    .name = "ClientID",
    .get = PyCThostFtdcSpdApplyFieldType_get_ClientID,
    .set = PyCThostFtdcSpdApplyFieldType_set_ClientID,
    .doc = PyDoc_STR("客户代码"),
    },
    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    {
    .name = "ExchangeInstID",
    .get = PyCThostFtdcSpdApplyFieldType_get_ExchangeInstID,
    .set = PyCThostFtdcSpdApplyFieldType_set_ExchangeInstID,
    .doc = PyDoc_STR("合约在交易所的代码"),
    },
    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    {
    .name = "TraderID",
    .get = PyCThostFtdcSpdApplyFieldType_get_TraderID,
    .set = PyCThostFtdcSpdApplyFieldType_set_TraderID,
    .doc = PyDoc_STR("交易所交易员代码"),
    },
    /// 报单提交状态
    /// typedef char TThostFtdcOrderSubmitStatusType
    {
    .name = "OrderSubmitStatus",
    .get = PyCThostFtdcSpdApplyFieldType_get_OrderSubmitStatus,
    .set = PyCThostFtdcSpdApplyFieldType_set_OrderSubmitStatus,
    .doc = PyDoc_STR("报单提交状态"),
    },
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcSpdApplyFieldType_get_TradingDay,
    .set = PyCThostFtdcSpdApplyFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcSpdApplyFieldType_get_IPAddress,
    .set = PyCThostFtdcSpdApplyFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcSpdApplyFieldType_get_MacAddress,
    .set = PyCThostFtdcSpdApplyFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// 组合定单类型
    /// typedef char TThostFtdcCmbTypeType
    {
    .name = "CmbType",
    .get = PyCThostFtdcSpdApplyFieldType_get_CmbType,
    .set = PyCThostFtdcSpdApplyFieldType_set_CmbType,
    .doc = PyDoc_STR("组合定单类型"),
    },
    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    {
    .name = "StatusMsg",
    .get = PyCThostFtdcSpdApplyFieldType_get_StatusMsg,
    .set = PyCThostFtdcSpdApplyFieldType_set_StatusMsg,
    .doc = PyDoc_STR("状态信息"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSpdApplyFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSpdApplyField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("套利申请回报")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSpdApplyFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSpdApplyFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSpdApplyFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSpdApplyFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSpdApplyFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSpdApplyFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("套利申请回报")},
    {Py_tp_members, PyCThostFtdcSpdApplyFieldType_members},
    {Py_tp_getset, PyCThostFtdcSpdApplyFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSpdApplyFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSpdApplyFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSpdApplyFieldType_spec = {
    .name = "PyCTP.CThostFtdcSpdApplyField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSpdApplyFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSpdApplyFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSpdApplyFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSpdApplyFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSpdApplyFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSpdApplyFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSpdApplyFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSpdApplyFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSpdApplyField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSpdApplyField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}