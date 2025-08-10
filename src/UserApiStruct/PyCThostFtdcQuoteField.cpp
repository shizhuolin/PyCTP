
#include "PyCThostFtdcQuoteField.h"

///报价

static PyObject *PyCThostFtdcQuoteField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQuoteField *self = (PyCThostFtdcQuoteField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQuoteField_init(PyCThostFtdcQuoteField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "QuoteRef", "UserID", "AskPrice", "BidPrice", "AskVolume", "BidVolume", "RequestID", "BusinessUnit", "AskOffsetFlag", "BidOffsetFlag", "AskHedgeFlag", "BidHedgeFlag", "QuoteLocalID", "ExchangeID", "ParticipantID", "ClientID", "reserve2", "TraderID", "InstallID", "NotifySequence", "OrderSubmitStatus", "TradingDay", "SettlementID", "QuoteSysID", "InsertDate", "InsertTime", "CancelTime", "QuoteStatus", "ClearingPartID", "SequenceNo", "AskOrderSysID", "BidOrderSysID", "FrontID", "SessionID", "UserProductInfo", "StatusMsg", "ActiveUserID", "BrokerQuoteSeq", "AskOrderRef", "BidOrderRef", "ForQuoteSysID", "BranchID", "InvestUnitID", "AccountID", "CurrencyID", "reserve3", "MacAddress", "InstrumentID", "ExchangeInstID", "IPAddress", "ReplaceSysID", "TimeCondition", "OrderMemo", "SessionReqSeq",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QuoteField_BrokerID = NULL;
    Py_ssize_t QuoteField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *QuoteField_InvestorID = NULL;
    Py_ssize_t QuoteField_InvestorID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *QuoteField_reserve1 = NULL;
    Py_ssize_t QuoteField_reserve1_len = 0;
            
    ///报价引用
    // TThostFtdcOrderRefType char[13]
    const char *QuoteField_QuoteRef = NULL;
    Py_ssize_t QuoteField_QuoteRef_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *QuoteField_UserID = NULL;
    Py_ssize_t QuoteField_UserID_len = 0;
            
    ///卖价格
    // TThostFtdcPriceType double
    double QuoteField_AskPrice = 0.0;
        
    ///买价格
    // TThostFtdcPriceType double
    double QuoteField_BidPrice = 0.0;
        
    ///卖数量
    // TThostFtdcVolumeType int
    int QuoteField_AskVolume = 0;
        
    ///买数量
    // TThostFtdcVolumeType int
    int QuoteField_BidVolume = 0;
        
    ///请求编号
    // TThostFtdcRequestIDType int
    int QuoteField_RequestID = 0;
        
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    const char *QuoteField_BusinessUnit = NULL;
    Py_ssize_t QuoteField_BusinessUnit_len = 0;
            
    ///卖开平标志
    // TThostFtdcOffsetFlagType char
    char QuoteField_AskOffsetFlag = 0;
            
    ///买开平标志
    // TThostFtdcOffsetFlagType char
    char QuoteField_BidOffsetFlag = 0;
            
    ///卖投机套保标志
    // TThostFtdcHedgeFlagType char
    char QuoteField_AskHedgeFlag = 0;
            
    ///买投机套保标志
    // TThostFtdcHedgeFlagType char
    char QuoteField_BidHedgeFlag = 0;
            
    ///本地报价编号
    // TThostFtdcOrderLocalIDType char[13]
    const char *QuoteField_QuoteLocalID = NULL;
    Py_ssize_t QuoteField_QuoteLocalID_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *QuoteField_ExchangeID = NULL;
    Py_ssize_t QuoteField_ExchangeID_len = 0;
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    const char *QuoteField_ParticipantID = NULL;
    Py_ssize_t QuoteField_ParticipantID_len = 0;
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    const char *QuoteField_ClientID = NULL;
    Py_ssize_t QuoteField_ClientID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    const char *QuoteField_reserve2 = NULL;
    Py_ssize_t QuoteField_reserve2_len = 0;
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    const char *QuoteField_TraderID = NULL;
    Py_ssize_t QuoteField_TraderID_len = 0;
            
    ///安装编号
    // TThostFtdcInstallIDType int
    int QuoteField_InstallID = 0;
        
    ///报价提示序号
    // TThostFtdcSequenceNoType int
    int QuoteField_NotifySequence = 0;
        
    ///报价提交状态
    // TThostFtdcOrderSubmitStatusType char
    char QuoteField_OrderSubmitStatus = 0;
            
    ///交易日
    // TThostFtdcDateType char[9]
    const char *QuoteField_TradingDay = NULL;
    Py_ssize_t QuoteField_TradingDay_len = 0;
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    int QuoteField_SettlementID = 0;
        
    ///报价编号
    // TThostFtdcOrderSysIDType char[21]
    const char *QuoteField_QuoteSysID = NULL;
    Py_ssize_t QuoteField_QuoteSysID_len = 0;
            
    ///报单日期
    // TThostFtdcDateType char[9]
    const char *QuoteField_InsertDate = NULL;
    Py_ssize_t QuoteField_InsertDate_len = 0;
            
    ///插入时间
    // TThostFtdcTimeType char[9]
    const char *QuoteField_InsertTime = NULL;
    Py_ssize_t QuoteField_InsertTime_len = 0;
            
    ///撤销时间
    // TThostFtdcTimeType char[9]
    const char *QuoteField_CancelTime = NULL;
    Py_ssize_t QuoteField_CancelTime_len = 0;
            
    ///报价状态
    // TThostFtdcOrderStatusType char
    char QuoteField_QuoteStatus = 0;
            
    ///结算会员编号
    // TThostFtdcParticipantIDType char[11]
    const char *QuoteField_ClearingPartID = NULL;
    Py_ssize_t QuoteField_ClearingPartID_len = 0;
            
    ///序号
    // TThostFtdcSequenceNoType int
    int QuoteField_SequenceNo = 0;
        
    ///卖方报单编号
    // TThostFtdcOrderSysIDType char[21]
    const char *QuoteField_AskOrderSysID = NULL;
    Py_ssize_t QuoteField_AskOrderSysID_len = 0;
            
    ///买方报单编号
    // TThostFtdcOrderSysIDType char[21]
    const char *QuoteField_BidOrderSysID = NULL;
    Py_ssize_t QuoteField_BidOrderSysID_len = 0;
            
    ///前置编号
    // TThostFtdcFrontIDType int
    int QuoteField_FrontID = 0;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    int QuoteField_SessionID = 0;
        
    ///用户端产品信息
    // TThostFtdcProductInfoType char[11]
    const char *QuoteField_UserProductInfo = NULL;
    Py_ssize_t QuoteField_UserProductInfo_len = 0;
            
    ///状态信息
    // TThostFtdcErrorMsgType char[81]
    const char *QuoteField_StatusMsg = NULL;
    Py_ssize_t QuoteField_StatusMsg_len = 0;
            
    ///操作用户代码
    // TThostFtdcUserIDType char[16]
    const char *QuoteField_ActiveUserID = NULL;
    Py_ssize_t QuoteField_ActiveUserID_len = 0;
            
    ///经纪公司报价编号
    // TThostFtdcSequenceNoType int
    int QuoteField_BrokerQuoteSeq = 0;
        
    ///衍生卖报单引用
    // TThostFtdcOrderRefType char[13]
    const char *QuoteField_AskOrderRef = NULL;
    Py_ssize_t QuoteField_AskOrderRef_len = 0;
            
    ///衍生买报单引用
    // TThostFtdcOrderRefType char[13]
    const char *QuoteField_BidOrderRef = NULL;
    Py_ssize_t QuoteField_BidOrderRef_len = 0;
            
    ///应价编号
    // TThostFtdcOrderSysIDType char[21]
    const char *QuoteField_ForQuoteSysID = NULL;
    Py_ssize_t QuoteField_ForQuoteSysID_len = 0;
            
    ///营业部编号
    // TThostFtdcBranchIDType char[9]
    const char *QuoteField_BranchID = NULL;
    Py_ssize_t QuoteField_BranchID_len = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *QuoteField_InvestUnitID = NULL;
    Py_ssize_t QuoteField_InvestUnitID_len = 0;
            
    ///资金账号
    // TThostFtdcAccountIDType char[13]
    const char *QuoteField_AccountID = NULL;
    Py_ssize_t QuoteField_AccountID_len = 0;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *QuoteField_CurrencyID = NULL;
    Py_ssize_t QuoteField_CurrencyID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    const char *QuoteField_reserve3 = NULL;
    Py_ssize_t QuoteField_reserve3_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *QuoteField_MacAddress = NULL;
    Py_ssize_t QuoteField_MacAddress_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *QuoteField_InstrumentID = NULL;
    Py_ssize_t QuoteField_InstrumentID_len = 0;
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    const char *QuoteField_ExchangeInstID = NULL;
    Py_ssize_t QuoteField_ExchangeInstID_len = 0;
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *QuoteField_IPAddress = NULL;
    Py_ssize_t QuoteField_IPAddress_len = 0;
            
    ///被顶单编号
    // TThostFtdcOrderSysIDType char[21]
    const char *QuoteField_ReplaceSysID = NULL;
    Py_ssize_t QuoteField_ReplaceSysID_len = 0;
            
    ///有效期类型
    // TThostFtdcTimeConditionType char
    char QuoteField_TimeCondition = 0;
            
    ///报单回显字段
    // TThostFtdcOrderMemoType char[13]
    const char *QuoteField_OrderMemo = NULL;
    Py_ssize_t QuoteField_OrderMemo_len = 0;
            
    ///session上请求计数 api自动维护
    // TThostFtdcSequenceNo12Type int
    int QuoteField_SessionReqSeq = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#ddiiiy#ccccy#y#y#y#y#y#iicy#iy#y#y#y#cy#iy#y#iiy#y#y#iy#y#y#y#y#y#y#y#y#y#y#y#y#cy#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#ddiiis#ccccs#s#s#s#s#s#iics#is#s#s#s#cs#is#s#iis#s#s#is#s#s#s#s#s#s#s#s#s#s#s#s#cs#i", (char **)kwlist
#endif

        , &QuoteField_BrokerID, &QuoteField_BrokerID_len 
        , &QuoteField_InvestorID, &QuoteField_InvestorID_len 
        , &QuoteField_reserve1, &QuoteField_reserve1_len 
        , &QuoteField_QuoteRef, &QuoteField_QuoteRef_len 
        , &QuoteField_UserID, &QuoteField_UserID_len 
        , &QuoteField_AskPrice 
        , &QuoteField_BidPrice 
        , &QuoteField_AskVolume 
        , &QuoteField_BidVolume 
        , &QuoteField_RequestID 
        , &QuoteField_BusinessUnit, &QuoteField_BusinessUnit_len 
        , &QuoteField_AskOffsetFlag 
        , &QuoteField_BidOffsetFlag 
        , &QuoteField_AskHedgeFlag 
        , &QuoteField_BidHedgeFlag 
        , &QuoteField_QuoteLocalID, &QuoteField_QuoteLocalID_len 
        , &QuoteField_ExchangeID, &QuoteField_ExchangeID_len 
        , &QuoteField_ParticipantID, &QuoteField_ParticipantID_len 
        , &QuoteField_ClientID, &QuoteField_ClientID_len 
        , &QuoteField_reserve2, &QuoteField_reserve2_len 
        , &QuoteField_TraderID, &QuoteField_TraderID_len 
        , &QuoteField_InstallID 
        , &QuoteField_NotifySequence 
        , &QuoteField_OrderSubmitStatus 
        , &QuoteField_TradingDay, &QuoteField_TradingDay_len 
        , &QuoteField_SettlementID 
        , &QuoteField_QuoteSysID, &QuoteField_QuoteSysID_len 
        , &QuoteField_InsertDate, &QuoteField_InsertDate_len 
        , &QuoteField_InsertTime, &QuoteField_InsertTime_len 
        , &QuoteField_CancelTime, &QuoteField_CancelTime_len 
        , &QuoteField_QuoteStatus 
        , &QuoteField_ClearingPartID, &QuoteField_ClearingPartID_len 
        , &QuoteField_SequenceNo 
        , &QuoteField_AskOrderSysID, &QuoteField_AskOrderSysID_len 
        , &QuoteField_BidOrderSysID, &QuoteField_BidOrderSysID_len 
        , &QuoteField_FrontID 
        , &QuoteField_SessionID 
        , &QuoteField_UserProductInfo, &QuoteField_UserProductInfo_len 
        , &QuoteField_StatusMsg, &QuoteField_StatusMsg_len 
        , &QuoteField_ActiveUserID, &QuoteField_ActiveUserID_len 
        , &QuoteField_BrokerQuoteSeq 
        , &QuoteField_AskOrderRef, &QuoteField_AskOrderRef_len 
        , &QuoteField_BidOrderRef, &QuoteField_BidOrderRef_len 
        , &QuoteField_ForQuoteSysID, &QuoteField_ForQuoteSysID_len 
        , &QuoteField_BranchID, &QuoteField_BranchID_len 
        , &QuoteField_InvestUnitID, &QuoteField_InvestUnitID_len 
        , &QuoteField_AccountID, &QuoteField_AccountID_len 
        , &QuoteField_CurrencyID, &QuoteField_CurrencyID_len 
        , &QuoteField_reserve3, &QuoteField_reserve3_len 
        , &QuoteField_MacAddress, &QuoteField_MacAddress_len 
        , &QuoteField_InstrumentID, &QuoteField_InstrumentID_len 
        , &QuoteField_ExchangeInstID, &QuoteField_ExchangeInstID_len 
        , &QuoteField_IPAddress, &QuoteField_IPAddress_len 
        , &QuoteField_ReplaceSysID, &QuoteField_ReplaceSysID_len 
        , &QuoteField_TimeCondition 
        , &QuoteField_OrderMemo, &QuoteField_OrderMemo_len 
        , &QuoteField_SessionReqSeq 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QuoteField_BrokerID != NULL ) {
        if(QuoteField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QuoteField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QuoteField_BrokerID, QuoteField_BrokerID_len);        
        strncpy(self->data.BrokerID, QuoteField_BrokerID, sizeof(self->data.BrokerID) );
        QuoteField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( QuoteField_InvestorID != NULL ) {
        if(QuoteField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", QuoteField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, QuoteField_InvestorID, QuoteField_InvestorID_len);        
        strncpy(self->data.InvestorID, QuoteField_InvestorID, sizeof(self->data.InvestorID) );
        QuoteField_InvestorID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( QuoteField_reserve1 != NULL ) {
        if(QuoteField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", QuoteField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, QuoteField_reserve1, QuoteField_reserve1_len);        
        strncpy(self->data.reserve1, QuoteField_reserve1, sizeof(self->data.reserve1) );
        QuoteField_reserve1 = NULL;
    }
            
    ///报价引用
    // TThostFtdcOrderRefType char[13]
    if( QuoteField_QuoteRef != NULL ) {
        if(QuoteField_QuoteRef_len > (Py_ssize_t)sizeof(self->data.QuoteRef)) {
            PyErr_Format(PyExc_ValueError, "QuoteRef too long: length=%zd (max allowed is %zd)", QuoteField_QuoteRef_len, (Py_ssize_t)sizeof(self->data.QuoteRef));
            return -1;
        }
        // memset(self->data.QuoteRef, 0, sizeof(self->data.QuoteRef));
        // memcpy(self->data.QuoteRef, QuoteField_QuoteRef, QuoteField_QuoteRef_len);        
        strncpy(self->data.QuoteRef, QuoteField_QuoteRef, sizeof(self->data.QuoteRef) );
        QuoteField_QuoteRef = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( QuoteField_UserID != NULL ) {
        if(QuoteField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", QuoteField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, QuoteField_UserID, QuoteField_UserID_len);        
        strncpy(self->data.UserID, QuoteField_UserID, sizeof(self->data.UserID) );
        QuoteField_UserID = NULL;
    }
            
    ///卖价格
    // TThostFtdcPriceType double
    self->data.AskPrice = QuoteField_AskPrice;
        
    ///买价格
    // TThostFtdcPriceType double
    self->data.BidPrice = QuoteField_BidPrice;
        
    ///卖数量
    // TThostFtdcVolumeType int
    self->data.AskVolume = QuoteField_AskVolume;
        
    ///买数量
    // TThostFtdcVolumeType int
    self->data.BidVolume = QuoteField_BidVolume;
        
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = QuoteField_RequestID;
        
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    if( QuoteField_BusinessUnit != NULL ) {
        if(QuoteField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", QuoteField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
            return -1;
        }
        // memset(self->data.BusinessUnit, 0, sizeof(self->data.BusinessUnit));
        // memcpy(self->data.BusinessUnit, QuoteField_BusinessUnit, QuoteField_BusinessUnit_len);        
        strncpy(self->data.BusinessUnit, QuoteField_BusinessUnit, sizeof(self->data.BusinessUnit) );
        QuoteField_BusinessUnit = NULL;
    }
            
    ///卖开平标志
    // TThostFtdcOffsetFlagType char
    self->data.AskOffsetFlag = QuoteField_AskOffsetFlag;
            
    ///买开平标志
    // TThostFtdcOffsetFlagType char
    self->data.BidOffsetFlag = QuoteField_BidOffsetFlag;
            
    ///卖投机套保标志
    // TThostFtdcHedgeFlagType char
    self->data.AskHedgeFlag = QuoteField_AskHedgeFlag;
            
    ///买投机套保标志
    // TThostFtdcHedgeFlagType char
    self->data.BidHedgeFlag = QuoteField_BidHedgeFlag;
            
    ///本地报价编号
    // TThostFtdcOrderLocalIDType char[13]
    if( QuoteField_QuoteLocalID != NULL ) {
        if(QuoteField_QuoteLocalID_len > (Py_ssize_t)sizeof(self->data.QuoteLocalID)) {
            PyErr_Format(PyExc_ValueError, "QuoteLocalID too long: length=%zd (max allowed is %zd)", QuoteField_QuoteLocalID_len, (Py_ssize_t)sizeof(self->data.QuoteLocalID));
            return -1;
        }
        // memset(self->data.QuoteLocalID, 0, sizeof(self->data.QuoteLocalID));
        // memcpy(self->data.QuoteLocalID, QuoteField_QuoteLocalID, QuoteField_QuoteLocalID_len);        
        strncpy(self->data.QuoteLocalID, QuoteField_QuoteLocalID, sizeof(self->data.QuoteLocalID) );
        QuoteField_QuoteLocalID = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( QuoteField_ExchangeID != NULL ) {
        if(QuoteField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", QuoteField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, QuoteField_ExchangeID, QuoteField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, QuoteField_ExchangeID, sizeof(self->data.ExchangeID) );
        QuoteField_ExchangeID = NULL;
    }
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    if( QuoteField_ParticipantID != NULL ) {
        if(QuoteField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", QuoteField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
            return -1;
        }
        // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
        // memcpy(self->data.ParticipantID, QuoteField_ParticipantID, QuoteField_ParticipantID_len);        
        strncpy(self->data.ParticipantID, QuoteField_ParticipantID, sizeof(self->data.ParticipantID) );
        QuoteField_ParticipantID = NULL;
    }
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    if( QuoteField_ClientID != NULL ) {
        if(QuoteField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", QuoteField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
            return -1;
        }
        // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
        // memcpy(self->data.ClientID, QuoteField_ClientID, QuoteField_ClientID_len);        
        strncpy(self->data.ClientID, QuoteField_ClientID, sizeof(self->data.ClientID) );
        QuoteField_ClientID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    if( QuoteField_reserve2 != NULL ) {
        if(QuoteField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", QuoteField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
            return -1;
        }
        // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
        // memcpy(self->data.reserve2, QuoteField_reserve2, QuoteField_reserve2_len);        
        strncpy(self->data.reserve2, QuoteField_reserve2, sizeof(self->data.reserve2) );
        QuoteField_reserve2 = NULL;
    }
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    if( QuoteField_TraderID != NULL ) {
        if(QuoteField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", QuoteField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
            return -1;
        }
        // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
        // memcpy(self->data.TraderID, QuoteField_TraderID, QuoteField_TraderID_len);        
        strncpy(self->data.TraderID, QuoteField_TraderID, sizeof(self->data.TraderID) );
        QuoteField_TraderID = NULL;
    }
            
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = QuoteField_InstallID;
        
    ///报价提示序号
    // TThostFtdcSequenceNoType int
    self->data.NotifySequence = QuoteField_NotifySequence;
        
    ///报价提交状态
    // TThostFtdcOrderSubmitStatusType char
    self->data.OrderSubmitStatus = QuoteField_OrderSubmitStatus;
            
    ///交易日
    // TThostFtdcDateType char[9]
    if( QuoteField_TradingDay != NULL ) {
        if(QuoteField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", QuoteField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, QuoteField_TradingDay, QuoteField_TradingDay_len);        
        strncpy(self->data.TradingDay, QuoteField_TradingDay, sizeof(self->data.TradingDay) );
        QuoteField_TradingDay = NULL;
    }
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    self->data.SettlementID = QuoteField_SettlementID;
        
    ///报价编号
    // TThostFtdcOrderSysIDType char[21]
    if( QuoteField_QuoteSysID != NULL ) {
        if(QuoteField_QuoteSysID_len > (Py_ssize_t)sizeof(self->data.QuoteSysID)) {
            PyErr_Format(PyExc_ValueError, "QuoteSysID too long: length=%zd (max allowed is %zd)", QuoteField_QuoteSysID_len, (Py_ssize_t)sizeof(self->data.QuoteSysID));
            return -1;
        }
        // memset(self->data.QuoteSysID, 0, sizeof(self->data.QuoteSysID));
        // memcpy(self->data.QuoteSysID, QuoteField_QuoteSysID, QuoteField_QuoteSysID_len);        
        strncpy(self->data.QuoteSysID, QuoteField_QuoteSysID, sizeof(self->data.QuoteSysID) );
        QuoteField_QuoteSysID = NULL;
    }
            
    ///报单日期
    // TThostFtdcDateType char[9]
    if( QuoteField_InsertDate != NULL ) {
        if(QuoteField_InsertDate_len > (Py_ssize_t)sizeof(self->data.InsertDate)) {
            PyErr_Format(PyExc_ValueError, "InsertDate too long: length=%zd (max allowed is %zd)", QuoteField_InsertDate_len, (Py_ssize_t)sizeof(self->data.InsertDate));
            return -1;
        }
        // memset(self->data.InsertDate, 0, sizeof(self->data.InsertDate));
        // memcpy(self->data.InsertDate, QuoteField_InsertDate, QuoteField_InsertDate_len);        
        strncpy(self->data.InsertDate, QuoteField_InsertDate, sizeof(self->data.InsertDate) );
        QuoteField_InsertDate = NULL;
    }
            
    ///插入时间
    // TThostFtdcTimeType char[9]
    if( QuoteField_InsertTime != NULL ) {
        if(QuoteField_InsertTime_len > (Py_ssize_t)sizeof(self->data.InsertTime)) {
            PyErr_Format(PyExc_ValueError, "InsertTime too long: length=%zd (max allowed is %zd)", QuoteField_InsertTime_len, (Py_ssize_t)sizeof(self->data.InsertTime));
            return -1;
        }
        // memset(self->data.InsertTime, 0, sizeof(self->data.InsertTime));
        // memcpy(self->data.InsertTime, QuoteField_InsertTime, QuoteField_InsertTime_len);        
        strncpy(self->data.InsertTime, QuoteField_InsertTime, sizeof(self->data.InsertTime) );
        QuoteField_InsertTime = NULL;
    }
            
    ///撤销时间
    // TThostFtdcTimeType char[9]
    if( QuoteField_CancelTime != NULL ) {
        if(QuoteField_CancelTime_len > (Py_ssize_t)sizeof(self->data.CancelTime)) {
            PyErr_Format(PyExc_ValueError, "CancelTime too long: length=%zd (max allowed is %zd)", QuoteField_CancelTime_len, (Py_ssize_t)sizeof(self->data.CancelTime));
            return -1;
        }
        // memset(self->data.CancelTime, 0, sizeof(self->data.CancelTime));
        // memcpy(self->data.CancelTime, QuoteField_CancelTime, QuoteField_CancelTime_len);        
        strncpy(self->data.CancelTime, QuoteField_CancelTime, sizeof(self->data.CancelTime) );
        QuoteField_CancelTime = NULL;
    }
            
    ///报价状态
    // TThostFtdcOrderStatusType char
    self->data.QuoteStatus = QuoteField_QuoteStatus;
            
    ///结算会员编号
    // TThostFtdcParticipantIDType char[11]
    if( QuoteField_ClearingPartID != NULL ) {
        if(QuoteField_ClearingPartID_len > (Py_ssize_t)sizeof(self->data.ClearingPartID)) {
            PyErr_Format(PyExc_ValueError, "ClearingPartID too long: length=%zd (max allowed is %zd)", QuoteField_ClearingPartID_len, (Py_ssize_t)sizeof(self->data.ClearingPartID));
            return -1;
        }
        // memset(self->data.ClearingPartID, 0, sizeof(self->data.ClearingPartID));
        // memcpy(self->data.ClearingPartID, QuoteField_ClearingPartID, QuoteField_ClearingPartID_len);        
        strncpy(self->data.ClearingPartID, QuoteField_ClearingPartID, sizeof(self->data.ClearingPartID) );
        QuoteField_ClearingPartID = NULL;
    }
            
    ///序号
    // TThostFtdcSequenceNoType int
    self->data.SequenceNo = QuoteField_SequenceNo;
        
    ///卖方报单编号
    // TThostFtdcOrderSysIDType char[21]
    if( QuoteField_AskOrderSysID != NULL ) {
        if(QuoteField_AskOrderSysID_len > (Py_ssize_t)sizeof(self->data.AskOrderSysID)) {
            PyErr_Format(PyExc_ValueError, "AskOrderSysID too long: length=%zd (max allowed is %zd)", QuoteField_AskOrderSysID_len, (Py_ssize_t)sizeof(self->data.AskOrderSysID));
            return -1;
        }
        // memset(self->data.AskOrderSysID, 0, sizeof(self->data.AskOrderSysID));
        // memcpy(self->data.AskOrderSysID, QuoteField_AskOrderSysID, QuoteField_AskOrderSysID_len);        
        strncpy(self->data.AskOrderSysID, QuoteField_AskOrderSysID, sizeof(self->data.AskOrderSysID) );
        QuoteField_AskOrderSysID = NULL;
    }
            
    ///买方报单编号
    // TThostFtdcOrderSysIDType char[21]
    if( QuoteField_BidOrderSysID != NULL ) {
        if(QuoteField_BidOrderSysID_len > (Py_ssize_t)sizeof(self->data.BidOrderSysID)) {
            PyErr_Format(PyExc_ValueError, "BidOrderSysID too long: length=%zd (max allowed is %zd)", QuoteField_BidOrderSysID_len, (Py_ssize_t)sizeof(self->data.BidOrderSysID));
            return -1;
        }
        // memset(self->data.BidOrderSysID, 0, sizeof(self->data.BidOrderSysID));
        // memcpy(self->data.BidOrderSysID, QuoteField_BidOrderSysID, QuoteField_BidOrderSysID_len);        
        strncpy(self->data.BidOrderSysID, QuoteField_BidOrderSysID, sizeof(self->data.BidOrderSysID) );
        QuoteField_BidOrderSysID = NULL;
    }
            
    ///前置编号
    // TThostFtdcFrontIDType int
    self->data.FrontID = QuoteField_FrontID;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    self->data.SessionID = QuoteField_SessionID;
        
    ///用户端产品信息
    // TThostFtdcProductInfoType char[11]
    if( QuoteField_UserProductInfo != NULL ) {
        if(QuoteField_UserProductInfo_len > (Py_ssize_t)sizeof(self->data.UserProductInfo)) {
            PyErr_Format(PyExc_ValueError, "UserProductInfo too long: length=%zd (max allowed is %zd)", QuoteField_UserProductInfo_len, (Py_ssize_t)sizeof(self->data.UserProductInfo));
            return -1;
        }
        // memset(self->data.UserProductInfo, 0, sizeof(self->data.UserProductInfo));
        // memcpy(self->data.UserProductInfo, QuoteField_UserProductInfo, QuoteField_UserProductInfo_len);        
        strncpy(self->data.UserProductInfo, QuoteField_UserProductInfo, sizeof(self->data.UserProductInfo) );
        QuoteField_UserProductInfo = NULL;
    }
            
    ///状态信息
    // TThostFtdcErrorMsgType char[81]
    if( QuoteField_StatusMsg != NULL ) {
        if(QuoteField_StatusMsg_len > (Py_ssize_t)sizeof(self->data.StatusMsg)) {
            PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is %zd)", QuoteField_StatusMsg_len, (Py_ssize_t)sizeof(self->data.StatusMsg));
            return -1;
        }
        // memset(self->data.StatusMsg, 0, sizeof(self->data.StatusMsg));
        // memcpy(self->data.StatusMsg, QuoteField_StatusMsg, QuoteField_StatusMsg_len);        
        strncpy(self->data.StatusMsg, QuoteField_StatusMsg, sizeof(self->data.StatusMsg) );
        QuoteField_StatusMsg = NULL;
    }
            
    ///操作用户代码
    // TThostFtdcUserIDType char[16]
    if( QuoteField_ActiveUserID != NULL ) {
        if(QuoteField_ActiveUserID_len > (Py_ssize_t)sizeof(self->data.ActiveUserID)) {
            PyErr_Format(PyExc_ValueError, "ActiveUserID too long: length=%zd (max allowed is %zd)", QuoteField_ActiveUserID_len, (Py_ssize_t)sizeof(self->data.ActiveUserID));
            return -1;
        }
        // memset(self->data.ActiveUserID, 0, sizeof(self->data.ActiveUserID));
        // memcpy(self->data.ActiveUserID, QuoteField_ActiveUserID, QuoteField_ActiveUserID_len);        
        strncpy(self->data.ActiveUserID, QuoteField_ActiveUserID, sizeof(self->data.ActiveUserID) );
        QuoteField_ActiveUserID = NULL;
    }
            
    ///经纪公司报价编号
    // TThostFtdcSequenceNoType int
    self->data.BrokerQuoteSeq = QuoteField_BrokerQuoteSeq;
        
    ///衍生卖报单引用
    // TThostFtdcOrderRefType char[13]
    if( QuoteField_AskOrderRef != NULL ) {
        if(QuoteField_AskOrderRef_len > (Py_ssize_t)sizeof(self->data.AskOrderRef)) {
            PyErr_Format(PyExc_ValueError, "AskOrderRef too long: length=%zd (max allowed is %zd)", QuoteField_AskOrderRef_len, (Py_ssize_t)sizeof(self->data.AskOrderRef));
            return -1;
        }
        // memset(self->data.AskOrderRef, 0, sizeof(self->data.AskOrderRef));
        // memcpy(self->data.AskOrderRef, QuoteField_AskOrderRef, QuoteField_AskOrderRef_len);        
        strncpy(self->data.AskOrderRef, QuoteField_AskOrderRef, sizeof(self->data.AskOrderRef) );
        QuoteField_AskOrderRef = NULL;
    }
            
    ///衍生买报单引用
    // TThostFtdcOrderRefType char[13]
    if( QuoteField_BidOrderRef != NULL ) {
        if(QuoteField_BidOrderRef_len > (Py_ssize_t)sizeof(self->data.BidOrderRef)) {
            PyErr_Format(PyExc_ValueError, "BidOrderRef too long: length=%zd (max allowed is %zd)", QuoteField_BidOrderRef_len, (Py_ssize_t)sizeof(self->data.BidOrderRef));
            return -1;
        }
        // memset(self->data.BidOrderRef, 0, sizeof(self->data.BidOrderRef));
        // memcpy(self->data.BidOrderRef, QuoteField_BidOrderRef, QuoteField_BidOrderRef_len);        
        strncpy(self->data.BidOrderRef, QuoteField_BidOrderRef, sizeof(self->data.BidOrderRef) );
        QuoteField_BidOrderRef = NULL;
    }
            
    ///应价编号
    // TThostFtdcOrderSysIDType char[21]
    if( QuoteField_ForQuoteSysID != NULL ) {
        if(QuoteField_ForQuoteSysID_len > (Py_ssize_t)sizeof(self->data.ForQuoteSysID)) {
            PyErr_Format(PyExc_ValueError, "ForQuoteSysID too long: length=%zd (max allowed is %zd)", QuoteField_ForQuoteSysID_len, (Py_ssize_t)sizeof(self->data.ForQuoteSysID));
            return -1;
        }
        // memset(self->data.ForQuoteSysID, 0, sizeof(self->data.ForQuoteSysID));
        // memcpy(self->data.ForQuoteSysID, QuoteField_ForQuoteSysID, QuoteField_ForQuoteSysID_len);        
        strncpy(self->data.ForQuoteSysID, QuoteField_ForQuoteSysID, sizeof(self->data.ForQuoteSysID) );
        QuoteField_ForQuoteSysID = NULL;
    }
            
    ///营业部编号
    // TThostFtdcBranchIDType char[9]
    if( QuoteField_BranchID != NULL ) {
        if(QuoteField_BranchID_len > (Py_ssize_t)sizeof(self->data.BranchID)) {
            PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is %zd)", QuoteField_BranchID_len, (Py_ssize_t)sizeof(self->data.BranchID));
            return -1;
        }
        // memset(self->data.BranchID, 0, sizeof(self->data.BranchID));
        // memcpy(self->data.BranchID, QuoteField_BranchID, QuoteField_BranchID_len);        
        strncpy(self->data.BranchID, QuoteField_BranchID, sizeof(self->data.BranchID) );
        QuoteField_BranchID = NULL;
    }
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( QuoteField_InvestUnitID != NULL ) {
        if(QuoteField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", QuoteField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, QuoteField_InvestUnitID, QuoteField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, QuoteField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        QuoteField_InvestUnitID = NULL;
    }
            
    ///资金账号
    // TThostFtdcAccountIDType char[13]
    if( QuoteField_AccountID != NULL ) {
        if(QuoteField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", QuoteField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
            return -1;
        }
        // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
        // memcpy(self->data.AccountID, QuoteField_AccountID, QuoteField_AccountID_len);        
        strncpy(self->data.AccountID, QuoteField_AccountID, sizeof(self->data.AccountID) );
        QuoteField_AccountID = NULL;
    }
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( QuoteField_CurrencyID != NULL ) {
        if(QuoteField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", QuoteField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, QuoteField_CurrencyID, QuoteField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, QuoteField_CurrencyID, sizeof(self->data.CurrencyID) );
        QuoteField_CurrencyID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    if( QuoteField_reserve3 != NULL ) {
        if(QuoteField_reserve3_len > (Py_ssize_t)sizeof(self->data.reserve3)) {
            PyErr_Format(PyExc_ValueError, "reserve3 too long: length=%zd (max allowed is %zd)", QuoteField_reserve3_len, (Py_ssize_t)sizeof(self->data.reserve3));
            return -1;
        }
        // memset(self->data.reserve3, 0, sizeof(self->data.reserve3));
        // memcpy(self->data.reserve3, QuoteField_reserve3, QuoteField_reserve3_len);        
        strncpy(self->data.reserve3, QuoteField_reserve3, sizeof(self->data.reserve3) );
        QuoteField_reserve3 = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( QuoteField_MacAddress != NULL ) {
        if(QuoteField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", QuoteField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, QuoteField_MacAddress, QuoteField_MacAddress_len);        
        strncpy(self->data.MacAddress, QuoteField_MacAddress, sizeof(self->data.MacAddress) );
        QuoteField_MacAddress = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( QuoteField_InstrumentID != NULL ) {
        if(QuoteField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", QuoteField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, QuoteField_InstrumentID, QuoteField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, QuoteField_InstrumentID, sizeof(self->data.InstrumentID) );
        QuoteField_InstrumentID = NULL;
    }
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    if( QuoteField_ExchangeInstID != NULL ) {
        if(QuoteField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", QuoteField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
            return -1;
        }
        // memset(self->data.ExchangeInstID, 0, sizeof(self->data.ExchangeInstID));
        // memcpy(self->data.ExchangeInstID, QuoteField_ExchangeInstID, QuoteField_ExchangeInstID_len);        
        strncpy(self->data.ExchangeInstID, QuoteField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
        QuoteField_ExchangeInstID = NULL;
    }
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( QuoteField_IPAddress != NULL ) {
        if(QuoteField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", QuoteField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, QuoteField_IPAddress, QuoteField_IPAddress_len);        
        strncpy(self->data.IPAddress, QuoteField_IPAddress, sizeof(self->data.IPAddress) );
        QuoteField_IPAddress = NULL;
    }
            
    ///被顶单编号
    // TThostFtdcOrderSysIDType char[21]
    if( QuoteField_ReplaceSysID != NULL ) {
        if(QuoteField_ReplaceSysID_len > (Py_ssize_t)sizeof(self->data.ReplaceSysID)) {
            PyErr_Format(PyExc_ValueError, "ReplaceSysID too long: length=%zd (max allowed is %zd)", QuoteField_ReplaceSysID_len, (Py_ssize_t)sizeof(self->data.ReplaceSysID));
            return -1;
        }
        // memset(self->data.ReplaceSysID, 0, sizeof(self->data.ReplaceSysID));
        // memcpy(self->data.ReplaceSysID, QuoteField_ReplaceSysID, QuoteField_ReplaceSysID_len);        
        strncpy(self->data.ReplaceSysID, QuoteField_ReplaceSysID, sizeof(self->data.ReplaceSysID) );
        QuoteField_ReplaceSysID = NULL;
    }
            
    ///有效期类型
    // TThostFtdcTimeConditionType char
    self->data.TimeCondition = QuoteField_TimeCondition;
            
    ///报单回显字段
    // TThostFtdcOrderMemoType char[13]
    if( QuoteField_OrderMemo != NULL ) {
        if(QuoteField_OrderMemo_len > (Py_ssize_t)sizeof(self->data.OrderMemo)) {
            PyErr_Format(PyExc_ValueError, "OrderMemo too long: length=%zd (max allowed is %zd)", QuoteField_OrderMemo_len, (Py_ssize_t)sizeof(self->data.OrderMemo));
            return -1;
        }
        // memset(self->data.OrderMemo, 0, sizeof(self->data.OrderMemo));
        // memcpy(self->data.OrderMemo, QuoteField_OrderMemo, QuoteField_OrderMemo_len);        
        strncpy(self->data.OrderMemo, QuoteField_OrderMemo, sizeof(self->data.OrderMemo) );
        QuoteField_OrderMemo = NULL;
    }
            
    ///session上请求计数 api自动维护
    // TThostFtdcSequenceNo12Type int
    self->data.SessionReqSeq = QuoteField_SessionReqSeq;
        

    return 0;
}

static void PyCThostFtdcQuoteField_dealloc(PyCThostFtdcQuoteField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQuoteField_repr(PyCThostFtdcQuoteField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:d,s:d,s:i,s:i,s:i,s:y,s:c,s:c,s:c,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:i,s:c,s:y,s:i,s:y,s:y,s:y,s:y,s:c,s:y,s:i,s:y,s:y,s:i,s:i,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:d,s:d,s:i,s:i,s:i,s:s,s:c,s:c,s:c,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:i,s:c,s:s,s:i,s:s,s:s,s:s,s:s,s:c,s:s,s:i,s:s,s:s,s:i,s:i,s:s,s:s,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:c,s:s,s:i}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"QuoteRef", self->data.QuoteRef//, (Py_ssize_t)sizeof(self->data.QuoteRef) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"AskPrice", self->data.AskPrice 
        ,"BidPrice", self->data.BidPrice 
        ,"AskVolume", self->data.AskVolume 
        ,"BidVolume", self->data.BidVolume 
        ,"RequestID", self->data.RequestID 
        ,"BusinessUnit", self->data.BusinessUnit//, (Py_ssize_t)sizeof(self->data.BusinessUnit) 
        ,"AskOffsetFlag", self->data.AskOffsetFlag 
        ,"BidOffsetFlag", self->data.BidOffsetFlag 
        ,"AskHedgeFlag", self->data.AskHedgeFlag 
        ,"BidHedgeFlag", self->data.BidHedgeFlag 
        ,"QuoteLocalID", self->data.QuoteLocalID//, (Py_ssize_t)sizeof(self->data.QuoteLocalID) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"ParticipantID", self->data.ParticipantID//, (Py_ssize_t)sizeof(self->data.ParticipantID) 
        ,"ClientID", self->data.ClientID//, (Py_ssize_t)sizeof(self->data.ClientID) 
        ,"reserve2", self->data.reserve2//, (Py_ssize_t)sizeof(self->data.reserve2) 
        ,"TraderID", self->data.TraderID//, (Py_ssize_t)sizeof(self->data.TraderID) 
        ,"InstallID", self->data.InstallID 
        ,"NotifySequence", self->data.NotifySequence 
        ,"OrderSubmitStatus", self->data.OrderSubmitStatus 
        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"SettlementID", self->data.SettlementID 
        ,"QuoteSysID", self->data.QuoteSysID//, (Py_ssize_t)sizeof(self->data.QuoteSysID) 
        ,"InsertDate", self->data.InsertDate//, (Py_ssize_t)sizeof(self->data.InsertDate) 
        ,"InsertTime", self->data.InsertTime//, (Py_ssize_t)sizeof(self->data.InsertTime) 
        ,"CancelTime", self->data.CancelTime//, (Py_ssize_t)sizeof(self->data.CancelTime) 
        ,"QuoteStatus", self->data.QuoteStatus 
        ,"ClearingPartID", self->data.ClearingPartID//, (Py_ssize_t)sizeof(self->data.ClearingPartID) 
        ,"SequenceNo", self->data.SequenceNo 
        ,"AskOrderSysID", self->data.AskOrderSysID//, (Py_ssize_t)sizeof(self->data.AskOrderSysID) 
        ,"BidOrderSysID", self->data.BidOrderSysID//, (Py_ssize_t)sizeof(self->data.BidOrderSysID) 
        ,"FrontID", self->data.FrontID 
        ,"SessionID", self->data.SessionID 
        ,"UserProductInfo", self->data.UserProductInfo//, (Py_ssize_t)sizeof(self->data.UserProductInfo) 
        ,"StatusMsg", self->data.StatusMsg//, (Py_ssize_t)sizeof(self->data.StatusMsg) 
        ,"ActiveUserID", self->data.ActiveUserID//, (Py_ssize_t)sizeof(self->data.ActiveUserID) 
        ,"BrokerQuoteSeq", self->data.BrokerQuoteSeq 
        ,"AskOrderRef", self->data.AskOrderRef//, (Py_ssize_t)sizeof(self->data.AskOrderRef) 
        ,"BidOrderRef", self->data.BidOrderRef//, (Py_ssize_t)sizeof(self->data.BidOrderRef) 
        ,"ForQuoteSysID", self->data.ForQuoteSysID//, (Py_ssize_t)sizeof(self->data.ForQuoteSysID) 
        ,"BranchID", self->data.BranchID//, (Py_ssize_t)sizeof(self->data.BranchID) 
        ,"InvestUnitID", self->data.InvestUnitID//, (Py_ssize_t)sizeof(self->data.InvestUnitID) 
        ,"AccountID", self->data.AccountID//, (Py_ssize_t)sizeof(self->data.AccountID) 
        ,"CurrencyID", self->data.CurrencyID//, (Py_ssize_t)sizeof(self->data.CurrencyID) 
        ,"reserve3", self->data.reserve3//, (Py_ssize_t)sizeof(self->data.reserve3) 
        ,"MacAddress", self->data.MacAddress//, (Py_ssize_t)sizeof(self->data.MacAddress) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"ExchangeInstID", self->data.ExchangeInstID//, (Py_ssize_t)sizeof(self->data.ExchangeInstID) 
        ,"IPAddress", self->data.IPAddress//, (Py_ssize_t)sizeof(self->data.IPAddress) 
        ,"ReplaceSysID", self->data.ReplaceSysID//, (Py_ssize_t)sizeof(self->data.ReplaceSysID) 
        ,"TimeCondition", self->data.TimeCondition 
        ,"OrderMemo", self->data.OrderMemo//, (Py_ssize_t)sizeof(self->data.OrderMemo) 
        ,"SessionReqSeq", self->data.SessionReqSeq 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQuoteField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQuoteField_get_BrokerID(PyCThostFtdcQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQuoteField_set_BrokerID(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 11 bytes");
        return -1;
    }
    // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
    // memcpy(self->data.BrokerID, buf, len);
    strncpy(self->data.BrokerID, buf, sizeof(self->data.BrokerID));
    return 0;
}
            
///投资者代码
// TThostFtdcInvestorIDType char[13]
static PyObject *PyCThostFtdcQuoteField_get_InvestorID(PyCThostFtdcQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcQuoteField_set_InvestorID(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
    // memcpy(self->data.InvestorID, buf, len);
    strncpy(self->data.InvestorID, buf, sizeof(self->data.InvestorID));
    return 0;
}
            
///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcQuoteField_get_reserve1(PyCThostFtdcQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcQuoteField_set_reserve1(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 31 bytes");
        return -1;
    }
    // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
    // memcpy(self->data.reserve1, buf, len);
    strncpy(self->data.reserve1, buf, sizeof(self->data.reserve1));
    return 0;
}
            
///报价引用
// TThostFtdcOrderRefType char[13]
static PyObject *PyCThostFtdcQuoteField_get_QuoteRef(PyCThostFtdcQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.QuoteRef, (Py_ssize_t)sizeof(self->data.QuoteRef));
    return PyBytes_FromString(self->data.QuoteRef);
}

///报价引用
// TThostFtdcOrderRefType char[13]
static int PyCThostFtdcQuoteField_set_QuoteRef(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "QuoteRef Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.QuoteRef)) {
        PyErr_SetString(PyExc_ValueError, "QuoteRef must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.QuoteRef, 0, sizeof(self->data.QuoteRef));
    // memcpy(self->data.QuoteRef, buf, len);
    strncpy(self->data.QuoteRef, buf, sizeof(self->data.QuoteRef));
    return 0;
}
            
///用户代码
// TThostFtdcUserIDType char[16]
static PyObject *PyCThostFtdcQuoteField_get_UserID(PyCThostFtdcQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcQuoteField_set_UserID(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 16 bytes");
        return -1;
    }
    // memset(self->data.UserID, 0, sizeof(self->data.UserID));
    // memcpy(self->data.UserID, buf, len);
    strncpy(self->data.UserID, buf, sizeof(self->data.UserID));
    return 0;
}
            
///卖价格
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcQuoteField_get_AskPrice(PyCThostFtdcQuoteField *self, void *closure) {
    return PyFloat_FromDouble(self->data.AskPrice);
}

///卖价格
// TThostFtdcPriceType double
static int PyCThostFtdcQuoteField_set_AskPrice(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AskPrice = buf;
    return 0;
}
        
///买价格
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcQuoteField_get_BidPrice(PyCThostFtdcQuoteField *self, void *closure) {
    return PyFloat_FromDouble(self->data.BidPrice);
}

///买价格
// TThostFtdcPriceType double
static int PyCThostFtdcQuoteField_set_BidPrice(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BidPrice = buf;
    return 0;
}
        
///卖数量
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcQuoteField_get_AskVolume(PyCThostFtdcQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.AskVolume);
#else
    return PyInt_FromLong(self->data.AskVolume);
#endif
}

///卖数量
// TThostFtdcVolumeType int
static int PyCThostFtdcQuoteField_set_AskVolume(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskVolume Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskVolume Expected int");
#endif
        return -1;
    }
#if PY_MAJOR_VERSION >= 3
    const long buf = PyLong_AsLong(val);
#else
    const long buf = PyInt_AsLong(val);
#endif
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    if (buf < INT_MIN || buf > INT_MAX) {
        PyErr_SetString(PyExc_OverflowError, "the AskVolume value out of range for C int");
        return -1;
    }
    self->data.AskVolume = (int)buf;
    return 0;
}
        
///买数量
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcQuoteField_get_BidVolume(PyCThostFtdcQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.BidVolume);
#else
    return PyInt_FromLong(self->data.BidVolume);
#endif
}

///买数量
// TThostFtdcVolumeType int
static int PyCThostFtdcQuoteField_set_BidVolume(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidVolume Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidVolume Expected int");
#endif
        return -1;
    }
#if PY_MAJOR_VERSION >= 3
    const long buf = PyLong_AsLong(val);
#else
    const long buf = PyInt_AsLong(val);
#endif
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    if (buf < INT_MIN || buf > INT_MAX) {
        PyErr_SetString(PyExc_OverflowError, "the BidVolume value out of range for C int");
        return -1;
    }
    self->data.BidVolume = (int)buf;
    return 0;
}
        
///请求编号
// TThostFtdcRequestIDType int
static PyObject *PyCThostFtdcQuoteField_get_RequestID(PyCThostFtdcQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcQuoteField_set_RequestID(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "RequestID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "RequestID Expected int");
#endif
        return -1;
    }
#if PY_MAJOR_VERSION >= 3
    const long buf = PyLong_AsLong(val);
#else
    const long buf = PyInt_AsLong(val);
#endif
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    if (buf < INT_MIN || buf > INT_MAX) {
        PyErr_SetString(PyExc_OverflowError, "the RequestID value out of range for C int");
        return -1;
    }
    self->data.RequestID = (int)buf;
    return 0;
}
        
///业务单元
// TThostFtdcBusinessUnitType char[21]
static PyObject *PyCThostFtdcQuoteField_get_BusinessUnit(PyCThostFtdcQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BusinessUnit, (Py_ssize_t)sizeof(self->data.BusinessUnit));
    return PyBytes_FromString(self->data.BusinessUnit);
}

///业务单元
// TThostFtdcBusinessUnitType char[21]
static int PyCThostFtdcQuoteField_set_BusinessUnit(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BusinessUnit Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
        PyErr_SetString(PyExc_ValueError, "BusinessUnit must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.BusinessUnit, 0, sizeof(self->data.BusinessUnit));
    // memcpy(self->data.BusinessUnit, buf, len);
    strncpy(self->data.BusinessUnit, buf, sizeof(self->data.BusinessUnit));
    return 0;
}
            
///卖开平标志
// TThostFtdcOffsetFlagType char
static PyObject *PyCThostFtdcQuoteField_get_AskOffsetFlag(PyCThostFtdcQuoteField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.AskOffsetFlag), 1);
}

///卖开平标志
// TThostFtdcOffsetFlagType char
static int PyCThostFtdcQuoteField_set_AskOffsetFlag(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskOffsetFlag Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.AskOffsetFlag)) {
        PyErr_SetString(PyExc_ValueError, "AskOffsetFlag must be equal 1 bytes");
        return -1;
    }
    self->data.AskOffsetFlag = *buf;
    return 0;
}
            
///买开平标志
// TThostFtdcOffsetFlagType char
static PyObject *PyCThostFtdcQuoteField_get_BidOffsetFlag(PyCThostFtdcQuoteField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BidOffsetFlag), 1);
}

///买开平标志
// TThostFtdcOffsetFlagType char
static int PyCThostFtdcQuoteField_set_BidOffsetFlag(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidOffsetFlag Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BidOffsetFlag)) {
        PyErr_SetString(PyExc_ValueError, "BidOffsetFlag must be equal 1 bytes");
        return -1;
    }
    self->data.BidOffsetFlag = *buf;
    return 0;
}
            
///卖投机套保标志
// TThostFtdcHedgeFlagType char
static PyObject *PyCThostFtdcQuoteField_get_AskHedgeFlag(PyCThostFtdcQuoteField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.AskHedgeFlag), 1);
}

///卖投机套保标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcQuoteField_set_AskHedgeFlag(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskHedgeFlag Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.AskHedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "AskHedgeFlag must be equal 1 bytes");
        return -1;
    }
    self->data.AskHedgeFlag = *buf;
    return 0;
}
            
///买投机套保标志
// TThostFtdcHedgeFlagType char
static PyObject *PyCThostFtdcQuoteField_get_BidHedgeFlag(PyCThostFtdcQuoteField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BidHedgeFlag), 1);
}

///买投机套保标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcQuoteField_set_BidHedgeFlag(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidHedgeFlag Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BidHedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "BidHedgeFlag must be equal 1 bytes");
        return -1;
    }
    self->data.BidHedgeFlag = *buf;
    return 0;
}
            
///本地报价编号
// TThostFtdcOrderLocalIDType char[13]
static PyObject *PyCThostFtdcQuoteField_get_QuoteLocalID(PyCThostFtdcQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.QuoteLocalID, (Py_ssize_t)sizeof(self->data.QuoteLocalID));
    return PyBytes_FromString(self->data.QuoteLocalID);
}

///本地报价编号
// TThostFtdcOrderLocalIDType char[13]
static int PyCThostFtdcQuoteField_set_QuoteLocalID(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "QuoteLocalID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.QuoteLocalID)) {
        PyErr_SetString(PyExc_ValueError, "QuoteLocalID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.QuoteLocalID, 0, sizeof(self->data.QuoteLocalID));
    // memcpy(self->data.QuoteLocalID, buf, len);
    strncpy(self->data.QuoteLocalID, buf, sizeof(self->data.QuoteLocalID));
    return 0;
}
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcQuoteField_get_ExchangeID(PyCThostFtdcQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcQuoteField_set_ExchangeID(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
    // memcpy(self->data.ExchangeID, buf, len);
    strncpy(self->data.ExchangeID, buf, sizeof(self->data.ExchangeID));
    return 0;
}
            
///会员代码
// TThostFtdcParticipantIDType char[11]
static PyObject *PyCThostFtdcQuoteField_get_ParticipantID(PyCThostFtdcQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParticipantID, (Py_ssize_t)sizeof(self->data.ParticipantID));
    return PyBytes_FromString(self->data.ParticipantID);
}

///会员代码
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcQuoteField_set_ParticipantID(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 11 bytes");
        return -1;
    }
    // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
    // memcpy(self->data.ParticipantID, buf, len);
    strncpy(self->data.ParticipantID, buf, sizeof(self->data.ParticipantID));
    return 0;
}
            
///客户代码
// TThostFtdcClientIDType char[11]
static PyObject *PyCThostFtdcQuoteField_get_ClientID(PyCThostFtdcQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientID, (Py_ssize_t)sizeof(self->data.ClientID));
    return PyBytes_FromString(self->data.ClientID);
}

///客户代码
// TThostFtdcClientIDType char[11]
static int PyCThostFtdcQuoteField_set_ClientID(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 11 bytes");
        return -1;
    }
    // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
    // memcpy(self->data.ClientID, buf, len);
    strncpy(self->data.ClientID, buf, sizeof(self->data.ClientID));
    return 0;
}
            
///保留的无效字段
// TThostFtdcOldExchangeInstIDType char[31]
static PyObject *PyCThostFtdcQuoteField_get_reserve2(PyCThostFtdcQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve2, (Py_ssize_t)sizeof(self->data.reserve2));
    return PyBytes_FromString(self->data.reserve2);
}

///保留的无效字段
// TThostFtdcOldExchangeInstIDType char[31]
static int PyCThostFtdcQuoteField_set_reserve2(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 31 bytes");
        return -1;
    }
    // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
    // memcpy(self->data.reserve2, buf, len);
    strncpy(self->data.reserve2, buf, sizeof(self->data.reserve2));
    return 0;
}
            
///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static PyObject *PyCThostFtdcQuoteField_get_TraderID(PyCThostFtdcQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TraderID, (Py_ssize_t)sizeof(self->data.TraderID));
    return PyBytes_FromString(self->data.TraderID);
}

///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static int PyCThostFtdcQuoteField_set_TraderID(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
    // memcpy(self->data.TraderID, buf, len);
    strncpy(self->data.TraderID, buf, sizeof(self->data.TraderID));
    return 0;
}
            
///安装编号
// TThostFtdcInstallIDType int
static PyObject *PyCThostFtdcQuoteField_get_InstallID(PyCThostFtdcQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcQuoteField_set_InstallID(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InstallID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InstallID Expected int");
#endif
        return -1;
    }
#if PY_MAJOR_VERSION >= 3
    const long buf = PyLong_AsLong(val);
#else
    const long buf = PyInt_AsLong(val);
#endif
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    if (buf < INT_MIN || buf > INT_MAX) {
        PyErr_SetString(PyExc_OverflowError, "the InstallID value out of range for C int");
        return -1;
    }
    self->data.InstallID = (int)buf;
    return 0;
}
        
///报价提示序号
// TThostFtdcSequenceNoType int
static PyObject *PyCThostFtdcQuoteField_get_NotifySequence(PyCThostFtdcQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.NotifySequence);
#else
    return PyInt_FromLong(self->data.NotifySequence);
#endif
}

///报价提示序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcQuoteField_set_NotifySequence(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "NotifySequence Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "NotifySequence Expected int");
#endif
        return -1;
    }
#if PY_MAJOR_VERSION >= 3
    const long buf = PyLong_AsLong(val);
#else
    const long buf = PyInt_AsLong(val);
#endif
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    if (buf < INT_MIN || buf > INT_MAX) {
        PyErr_SetString(PyExc_OverflowError, "the NotifySequence value out of range for C int");
        return -1;
    }
    self->data.NotifySequence = (int)buf;
    return 0;
}
        
///报价提交状态
// TThostFtdcOrderSubmitStatusType char
static PyObject *PyCThostFtdcQuoteField_get_OrderSubmitStatus(PyCThostFtdcQuoteField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OrderSubmitStatus), 1);
}

///报价提交状态
// TThostFtdcOrderSubmitStatusType char
static int PyCThostFtdcQuoteField_set_OrderSubmitStatus(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderSubmitStatus Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OrderSubmitStatus)) {
        PyErr_SetString(PyExc_ValueError, "OrderSubmitStatus must be equal 1 bytes");
        return -1;
    }
    self->data.OrderSubmitStatus = *buf;
    return 0;
}
            
///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcQuoteField_get_TradingDay(PyCThostFtdcQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcQuoteField_set_TradingDay(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
    // memcpy(self->data.TradingDay, buf, len);
    strncpy(self->data.TradingDay, buf, sizeof(self->data.TradingDay));
    return 0;
}
            
///结算编号
// TThostFtdcSettlementIDType int
static PyObject *PyCThostFtdcQuoteField_get_SettlementID(PyCThostFtdcQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SettlementID);
#else
    return PyInt_FromLong(self->data.SettlementID);
#endif
}

///结算编号
// TThostFtdcSettlementIDType int
static int PyCThostFtdcQuoteField_set_SettlementID(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SettlementID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SettlementID Expected int");
#endif
        return -1;
    }
#if PY_MAJOR_VERSION >= 3
    const long buf = PyLong_AsLong(val);
#else
    const long buf = PyInt_AsLong(val);
#endif
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    if (buf < INT_MIN || buf > INT_MAX) {
        PyErr_SetString(PyExc_OverflowError, "the SettlementID value out of range for C int");
        return -1;
    }
    self->data.SettlementID = (int)buf;
    return 0;
}
        
///报价编号
// TThostFtdcOrderSysIDType char[21]
static PyObject *PyCThostFtdcQuoteField_get_QuoteSysID(PyCThostFtdcQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.QuoteSysID, (Py_ssize_t)sizeof(self->data.QuoteSysID));
    return PyBytes_FromString(self->data.QuoteSysID);
}

///报价编号
// TThostFtdcOrderSysIDType char[21]
static int PyCThostFtdcQuoteField_set_QuoteSysID(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "QuoteSysID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.QuoteSysID)) {
        PyErr_SetString(PyExc_ValueError, "QuoteSysID must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.QuoteSysID, 0, sizeof(self->data.QuoteSysID));
    // memcpy(self->data.QuoteSysID, buf, len);
    strncpy(self->data.QuoteSysID, buf, sizeof(self->data.QuoteSysID));
    return 0;
}
            
///报单日期
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcQuoteField_get_InsertDate(PyCThostFtdcQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InsertDate, (Py_ssize_t)sizeof(self->data.InsertDate));
    return PyBytes_FromString(self->data.InsertDate);
}

///报单日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcQuoteField_set_InsertDate(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InsertDate Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InsertDate)) {
        PyErr_SetString(PyExc_ValueError, "InsertDate must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.InsertDate, 0, sizeof(self->data.InsertDate));
    // memcpy(self->data.InsertDate, buf, len);
    strncpy(self->data.InsertDate, buf, sizeof(self->data.InsertDate));
    return 0;
}
            
///插入时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcQuoteField_get_InsertTime(PyCThostFtdcQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InsertTime, (Py_ssize_t)sizeof(self->data.InsertTime));
    return PyBytes_FromString(self->data.InsertTime);
}

///插入时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcQuoteField_set_InsertTime(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InsertTime Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InsertTime)) {
        PyErr_SetString(PyExc_ValueError, "InsertTime must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.InsertTime, 0, sizeof(self->data.InsertTime));
    // memcpy(self->data.InsertTime, buf, len);
    strncpy(self->data.InsertTime, buf, sizeof(self->data.InsertTime));
    return 0;
}
            
///撤销时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcQuoteField_get_CancelTime(PyCThostFtdcQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CancelTime, (Py_ssize_t)sizeof(self->data.CancelTime));
    return PyBytes_FromString(self->data.CancelTime);
}

///撤销时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcQuoteField_set_CancelTime(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CancelTime Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CancelTime)) {
        PyErr_SetString(PyExc_ValueError, "CancelTime must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.CancelTime, 0, sizeof(self->data.CancelTime));
    // memcpy(self->data.CancelTime, buf, len);
    strncpy(self->data.CancelTime, buf, sizeof(self->data.CancelTime));
    return 0;
}
            
///报价状态
// TThostFtdcOrderStatusType char
static PyObject *PyCThostFtdcQuoteField_get_QuoteStatus(PyCThostFtdcQuoteField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.QuoteStatus), 1);
}

///报价状态
// TThostFtdcOrderStatusType char
static int PyCThostFtdcQuoteField_set_QuoteStatus(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "QuoteStatus Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.QuoteStatus)) {
        PyErr_SetString(PyExc_ValueError, "QuoteStatus must be equal 1 bytes");
        return -1;
    }
    self->data.QuoteStatus = *buf;
    return 0;
}
            
///结算会员编号
// TThostFtdcParticipantIDType char[11]
static PyObject *PyCThostFtdcQuoteField_get_ClearingPartID(PyCThostFtdcQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClearingPartID, (Py_ssize_t)sizeof(self->data.ClearingPartID));
    return PyBytes_FromString(self->data.ClearingPartID);
}

///结算会员编号
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcQuoteField_set_ClearingPartID(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ClearingPartID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ClearingPartID)) {
        PyErr_SetString(PyExc_ValueError, "ClearingPartID must be less than 11 bytes");
        return -1;
    }
    // memset(self->data.ClearingPartID, 0, sizeof(self->data.ClearingPartID));
    // memcpy(self->data.ClearingPartID, buf, len);
    strncpy(self->data.ClearingPartID, buf, sizeof(self->data.ClearingPartID));
    return 0;
}
            
///序号
// TThostFtdcSequenceNoType int
static PyObject *PyCThostFtdcQuoteField_get_SequenceNo(PyCThostFtdcQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SequenceNo);
#else
    return PyInt_FromLong(self->data.SequenceNo);
#endif
}

///序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcQuoteField_set_SequenceNo(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SequenceNo Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SequenceNo Expected int");
#endif
        return -1;
    }
#if PY_MAJOR_VERSION >= 3
    const long buf = PyLong_AsLong(val);
#else
    const long buf = PyInt_AsLong(val);
#endif
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    if (buf < INT_MIN || buf > INT_MAX) {
        PyErr_SetString(PyExc_OverflowError, "the SequenceNo value out of range for C int");
        return -1;
    }
    self->data.SequenceNo = (int)buf;
    return 0;
}
        
///卖方报单编号
// TThostFtdcOrderSysIDType char[21]
static PyObject *PyCThostFtdcQuoteField_get_AskOrderSysID(PyCThostFtdcQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AskOrderSysID, (Py_ssize_t)sizeof(self->data.AskOrderSysID));
    return PyBytes_FromString(self->data.AskOrderSysID);
}

///卖方报单编号
// TThostFtdcOrderSysIDType char[21]
static int PyCThostFtdcQuoteField_set_AskOrderSysID(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskOrderSysID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.AskOrderSysID)) {
        PyErr_SetString(PyExc_ValueError, "AskOrderSysID must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.AskOrderSysID, 0, sizeof(self->data.AskOrderSysID));
    // memcpy(self->data.AskOrderSysID, buf, len);
    strncpy(self->data.AskOrderSysID, buf, sizeof(self->data.AskOrderSysID));
    return 0;
}
            
///买方报单编号
// TThostFtdcOrderSysIDType char[21]
static PyObject *PyCThostFtdcQuoteField_get_BidOrderSysID(PyCThostFtdcQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BidOrderSysID, (Py_ssize_t)sizeof(self->data.BidOrderSysID));
    return PyBytes_FromString(self->data.BidOrderSysID);
}

///买方报单编号
// TThostFtdcOrderSysIDType char[21]
static int PyCThostFtdcQuoteField_set_BidOrderSysID(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidOrderSysID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BidOrderSysID)) {
        PyErr_SetString(PyExc_ValueError, "BidOrderSysID must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.BidOrderSysID, 0, sizeof(self->data.BidOrderSysID));
    // memcpy(self->data.BidOrderSysID, buf, len);
    strncpy(self->data.BidOrderSysID, buf, sizeof(self->data.BidOrderSysID));
    return 0;
}
            
///前置编号
// TThostFtdcFrontIDType int
static PyObject *PyCThostFtdcQuoteField_get_FrontID(PyCThostFtdcQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FrontID);
#else
    return PyInt_FromLong(self->data.FrontID);
#endif
}

///前置编号
// TThostFtdcFrontIDType int
static int PyCThostFtdcQuoteField_set_FrontID(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FrontID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FrontID Expected int");
#endif
        return -1;
    }
#if PY_MAJOR_VERSION >= 3
    const long buf = PyLong_AsLong(val);
#else
    const long buf = PyInt_AsLong(val);
#endif
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    if (buf < INT_MIN || buf > INT_MAX) {
        PyErr_SetString(PyExc_OverflowError, "the FrontID value out of range for C int");
        return -1;
    }
    self->data.FrontID = (int)buf;
    return 0;
}
        
///会话编号
// TThostFtdcSessionIDType int
static PyObject *PyCThostFtdcQuoteField_get_SessionID(PyCThostFtdcQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话编号
// TThostFtdcSessionIDType int
static int PyCThostFtdcQuoteField_set_SessionID(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SessionID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SessionID Expected int");
#endif
        return -1;
    }
#if PY_MAJOR_VERSION >= 3
    const long buf = PyLong_AsLong(val);
#else
    const long buf = PyInt_AsLong(val);
#endif
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    if (buf < INT_MIN || buf > INT_MAX) {
        PyErr_SetString(PyExc_OverflowError, "the SessionID value out of range for C int");
        return -1;
    }
    self->data.SessionID = (int)buf;
    return 0;
}
        
///用户端产品信息
// TThostFtdcProductInfoType char[11]
static PyObject *PyCThostFtdcQuoteField_get_UserProductInfo(PyCThostFtdcQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserProductInfo, (Py_ssize_t)sizeof(self->data.UserProductInfo));
    return PyBytes_FromString(self->data.UserProductInfo);
}

///用户端产品信息
// TThostFtdcProductInfoType char[11]
static int PyCThostFtdcQuoteField_set_UserProductInfo(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UserProductInfo Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.UserProductInfo)) {
        PyErr_SetString(PyExc_ValueError, "UserProductInfo must be less than 11 bytes");
        return -1;
    }
    // memset(self->data.UserProductInfo, 0, sizeof(self->data.UserProductInfo));
    // memcpy(self->data.UserProductInfo, buf, len);
    strncpy(self->data.UserProductInfo, buf, sizeof(self->data.UserProductInfo));
    return 0;
}
            
///状态信息
// TThostFtdcErrorMsgType char[81]
static PyObject *PyCThostFtdcQuoteField_get_StatusMsg(PyCThostFtdcQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.StatusMsg, (Py_ssize_t)sizeof(self->data.StatusMsg));
    return PyBytes_FromString(self->data.StatusMsg);
}

///状态信息
// TThostFtdcErrorMsgType char[81]
static int PyCThostFtdcQuoteField_set_StatusMsg(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "StatusMsg Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.StatusMsg)) {
        PyErr_SetString(PyExc_ValueError, "StatusMsg must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.StatusMsg, 0, sizeof(self->data.StatusMsg));
    // memcpy(self->data.StatusMsg, buf, len);
    strncpy(self->data.StatusMsg, buf, sizeof(self->data.StatusMsg));
    return 0;
}
            
///操作用户代码
// TThostFtdcUserIDType char[16]
static PyObject *PyCThostFtdcQuoteField_get_ActiveUserID(PyCThostFtdcQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActiveUserID, (Py_ssize_t)sizeof(self->data.ActiveUserID));
    return PyBytes_FromString(self->data.ActiveUserID);
}

///操作用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcQuoteField_set_ActiveUserID(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ActiveUserID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ActiveUserID)) {
        PyErr_SetString(PyExc_ValueError, "ActiveUserID must be less than 16 bytes");
        return -1;
    }
    // memset(self->data.ActiveUserID, 0, sizeof(self->data.ActiveUserID));
    // memcpy(self->data.ActiveUserID, buf, len);
    strncpy(self->data.ActiveUserID, buf, sizeof(self->data.ActiveUserID));
    return 0;
}
            
///经纪公司报价编号
// TThostFtdcSequenceNoType int
static PyObject *PyCThostFtdcQuoteField_get_BrokerQuoteSeq(PyCThostFtdcQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.BrokerQuoteSeq);
#else
    return PyInt_FromLong(self->data.BrokerQuoteSeq);
#endif
}

///经纪公司报价编号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcQuoteField_set_BrokerQuoteSeq(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BrokerQuoteSeq Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BrokerQuoteSeq Expected int");
#endif
        return -1;
    }
#if PY_MAJOR_VERSION >= 3
    const long buf = PyLong_AsLong(val);
#else
    const long buf = PyInt_AsLong(val);
#endif
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    if (buf < INT_MIN || buf > INT_MAX) {
        PyErr_SetString(PyExc_OverflowError, "the BrokerQuoteSeq value out of range for C int");
        return -1;
    }
    self->data.BrokerQuoteSeq = (int)buf;
    return 0;
}
        
///衍生卖报单引用
// TThostFtdcOrderRefType char[13]
static PyObject *PyCThostFtdcQuoteField_get_AskOrderRef(PyCThostFtdcQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AskOrderRef, (Py_ssize_t)sizeof(self->data.AskOrderRef));
    return PyBytes_FromString(self->data.AskOrderRef);
}

///衍生卖报单引用
// TThostFtdcOrderRefType char[13]
static int PyCThostFtdcQuoteField_set_AskOrderRef(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskOrderRef Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.AskOrderRef)) {
        PyErr_SetString(PyExc_ValueError, "AskOrderRef must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.AskOrderRef, 0, sizeof(self->data.AskOrderRef));
    // memcpy(self->data.AskOrderRef, buf, len);
    strncpy(self->data.AskOrderRef, buf, sizeof(self->data.AskOrderRef));
    return 0;
}
            
///衍生买报单引用
// TThostFtdcOrderRefType char[13]
static PyObject *PyCThostFtdcQuoteField_get_BidOrderRef(PyCThostFtdcQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BidOrderRef, (Py_ssize_t)sizeof(self->data.BidOrderRef));
    return PyBytes_FromString(self->data.BidOrderRef);
}

///衍生买报单引用
// TThostFtdcOrderRefType char[13]
static int PyCThostFtdcQuoteField_set_BidOrderRef(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidOrderRef Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BidOrderRef)) {
        PyErr_SetString(PyExc_ValueError, "BidOrderRef must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.BidOrderRef, 0, sizeof(self->data.BidOrderRef));
    // memcpy(self->data.BidOrderRef, buf, len);
    strncpy(self->data.BidOrderRef, buf, sizeof(self->data.BidOrderRef));
    return 0;
}
            
///应价编号
// TThostFtdcOrderSysIDType char[21]
static PyObject *PyCThostFtdcQuoteField_get_ForQuoteSysID(PyCThostFtdcQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ForQuoteSysID, (Py_ssize_t)sizeof(self->data.ForQuoteSysID));
    return PyBytes_FromString(self->data.ForQuoteSysID);
}

///应价编号
// TThostFtdcOrderSysIDType char[21]
static int PyCThostFtdcQuoteField_set_ForQuoteSysID(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ForQuoteSysID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ForQuoteSysID)) {
        PyErr_SetString(PyExc_ValueError, "ForQuoteSysID must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.ForQuoteSysID, 0, sizeof(self->data.ForQuoteSysID));
    // memcpy(self->data.ForQuoteSysID, buf, len);
    strncpy(self->data.ForQuoteSysID, buf, sizeof(self->data.ForQuoteSysID));
    return 0;
}
            
///营业部编号
// TThostFtdcBranchIDType char[9]
static PyObject *PyCThostFtdcQuoteField_get_BranchID(PyCThostFtdcQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BranchID, (Py_ssize_t)sizeof(self->data.BranchID));
    return PyBytes_FromString(self->data.BranchID);
}

///营业部编号
// TThostFtdcBranchIDType char[9]
static int PyCThostFtdcQuoteField_set_BranchID(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BranchID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BranchID)) {
        PyErr_SetString(PyExc_ValueError, "BranchID must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.BranchID, 0, sizeof(self->data.BranchID));
    // memcpy(self->data.BranchID, buf, len);
    strncpy(self->data.BranchID, buf, sizeof(self->data.BranchID));
    return 0;
}
            
///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static PyObject *PyCThostFtdcQuoteField_get_InvestUnitID(PyCThostFtdcQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcQuoteField_set_InvestUnitID(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 17 bytes");
        return -1;
    }
    // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
    // memcpy(self->data.InvestUnitID, buf, len);
    strncpy(self->data.InvestUnitID, buf, sizeof(self->data.InvestUnitID));
    return 0;
}
            
///资金账号
// TThostFtdcAccountIDType char[13]
static PyObject *PyCThostFtdcQuoteField_get_AccountID(PyCThostFtdcQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AccountID, (Py_ssize_t)sizeof(self->data.AccountID));
    return PyBytes_FromString(self->data.AccountID);
}

///资金账号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcQuoteField_set_AccountID(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
    // memcpy(self->data.AccountID, buf, len);
    strncpy(self->data.AccountID, buf, sizeof(self->data.AccountID));
    return 0;
}
            
///币种代码
// TThostFtdcCurrencyIDType char[4]
static PyObject *PyCThostFtdcQuoteField_get_CurrencyID(PyCThostFtdcQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcQuoteField_set_CurrencyID(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 4 bytes");
        return -1;
    }
    // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
    // memcpy(self->data.CurrencyID, buf, len);
    strncpy(self->data.CurrencyID, buf, sizeof(self->data.CurrencyID));
    return 0;
}
            
///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static PyObject *PyCThostFtdcQuoteField_get_reserve3(PyCThostFtdcQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve3, (Py_ssize_t)sizeof(self->data.reserve3));
    return PyBytes_FromString(self->data.reserve3);
}

///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static int PyCThostFtdcQuoteField_set_reserve3(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "reserve3 Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.reserve3)) {
        PyErr_SetString(PyExc_ValueError, "reserve3 must be less than 16 bytes");
        return -1;
    }
    // memset(self->data.reserve3, 0, sizeof(self->data.reserve3));
    // memcpy(self->data.reserve3, buf, len);
    strncpy(self->data.reserve3, buf, sizeof(self->data.reserve3));
    return 0;
}
            
///Mac地址
// TThostFtdcMacAddressType char[21]
static PyObject *PyCThostFtdcQuoteField_get_MacAddress(PyCThostFtdcQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcQuoteField_set_MacAddress(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
    // memcpy(self->data.MacAddress, buf, len);
    strncpy(self->data.MacAddress, buf, sizeof(self->data.MacAddress));
    return 0;
}
            
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcQuoteField_get_InstrumentID(PyCThostFtdcQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcQuoteField_set_InstrumentID(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
    // memcpy(self->data.InstrumentID, buf, len);
    strncpy(self->data.InstrumentID, buf, sizeof(self->data.InstrumentID));
    return 0;
}
            
///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static PyObject *PyCThostFtdcQuoteField_get_ExchangeInstID(PyCThostFtdcQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeInstID, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
    return PyBytes_FromString(self->data.ExchangeInstID);
}

///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static int PyCThostFtdcQuoteField_set_ExchangeInstID(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.ExchangeInstID, 0, sizeof(self->data.ExchangeInstID));
    // memcpy(self->data.ExchangeInstID, buf, len);
    strncpy(self->data.ExchangeInstID, buf, sizeof(self->data.ExchangeInstID));
    return 0;
}
            
///IP地址
// TThostFtdcIPAddressType char[33]
static PyObject *PyCThostFtdcQuoteField_get_IPAddress(PyCThostFtdcQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcQuoteField_set_IPAddress(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 33 bytes");
        return -1;
    }
    // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
    // memcpy(self->data.IPAddress, buf, len);
    strncpy(self->data.IPAddress, buf, sizeof(self->data.IPAddress));
    return 0;
}
            
///被顶单编号
// TThostFtdcOrderSysIDType char[21]
static PyObject *PyCThostFtdcQuoteField_get_ReplaceSysID(PyCThostFtdcQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ReplaceSysID, (Py_ssize_t)sizeof(self->data.ReplaceSysID));
    return PyBytes_FromString(self->data.ReplaceSysID);
}

///被顶单编号
// TThostFtdcOrderSysIDType char[21]
static int PyCThostFtdcQuoteField_set_ReplaceSysID(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ReplaceSysID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ReplaceSysID)) {
        PyErr_SetString(PyExc_ValueError, "ReplaceSysID must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.ReplaceSysID, 0, sizeof(self->data.ReplaceSysID));
    // memcpy(self->data.ReplaceSysID, buf, len);
    strncpy(self->data.ReplaceSysID, buf, sizeof(self->data.ReplaceSysID));
    return 0;
}
            
///有效期类型
// TThostFtdcTimeConditionType char
static PyObject *PyCThostFtdcQuoteField_get_TimeCondition(PyCThostFtdcQuoteField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.TimeCondition), 1);
}

///有效期类型
// TThostFtdcTimeConditionType char
static int PyCThostFtdcQuoteField_set_TimeCondition(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TimeCondition Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TimeCondition)) {
        PyErr_SetString(PyExc_ValueError, "TimeCondition must be equal 1 bytes");
        return -1;
    }
    self->data.TimeCondition = *buf;
    return 0;
}
            
///报单回显字段
// TThostFtdcOrderMemoType char[13]
static PyObject *PyCThostFtdcQuoteField_get_OrderMemo(PyCThostFtdcQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderMemo, (Py_ssize_t)sizeof(self->data.OrderMemo));
    return PyBytes_FromString(self->data.OrderMemo);
}

///报单回显字段
// TThostFtdcOrderMemoType char[13]
static int PyCThostFtdcQuoteField_set_OrderMemo(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderMemo Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OrderMemo)) {
        PyErr_SetString(PyExc_ValueError, "OrderMemo must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.OrderMemo, 0, sizeof(self->data.OrderMemo));
    // memcpy(self->data.OrderMemo, buf, len);
    strncpy(self->data.OrderMemo, buf, sizeof(self->data.OrderMemo));
    return 0;
}
            
///session上请求计数 api自动维护
// TThostFtdcSequenceNo12Type int
static PyObject *PyCThostFtdcQuoteField_get_SessionReqSeq(PyCThostFtdcQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionReqSeq);
#else
    return PyInt_FromLong(self->data.SessionReqSeq);
#endif
}

///session上请求计数 api自动维护
// TThostFtdcSequenceNo12Type int
static int PyCThostFtdcQuoteField_set_SessionReqSeq(PyCThostFtdcQuoteField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SessionReqSeq Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SessionReqSeq Expected int");
#endif
        return -1;
    }
#if PY_MAJOR_VERSION >= 3
    const long buf = PyLong_AsLong(val);
#else
    const long buf = PyInt_AsLong(val);
#endif
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    if (buf < INT_MIN || buf > INT_MAX) {
        PyErr_SetString(PyExc_OverflowError, "the SessionReqSeq value out of range for C int");
        return -1;
    }
    self->data.SessionReqSeq = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcQuoteField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQuoteField_get_BrokerID, (setter)PyCThostFtdcQuoteField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcQuoteField_get_InvestorID, (setter)PyCThostFtdcQuoteField_set_InvestorID, (char *)"InvestorID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcQuoteField_get_reserve1, (setter)PyCThostFtdcQuoteField_set_reserve1, (char *)"reserve1", NULL},
    ///报价引用 
    {(char *)"QuoteRef", (getter)PyCThostFtdcQuoteField_get_QuoteRef, (setter)PyCThostFtdcQuoteField_set_QuoteRef, (char *)"QuoteRef", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcQuoteField_get_UserID, (setter)PyCThostFtdcQuoteField_set_UserID, (char *)"UserID", NULL},
    ///卖价格 
    {(char *)"AskPrice", (getter)PyCThostFtdcQuoteField_get_AskPrice, (setter)PyCThostFtdcQuoteField_set_AskPrice, (char *)"AskPrice", NULL},
    ///买价格 
    {(char *)"BidPrice", (getter)PyCThostFtdcQuoteField_get_BidPrice, (setter)PyCThostFtdcQuoteField_set_BidPrice, (char *)"BidPrice", NULL},
    ///卖数量 
    {(char *)"AskVolume", (getter)PyCThostFtdcQuoteField_get_AskVolume, (setter)PyCThostFtdcQuoteField_set_AskVolume, (char *)"AskVolume", NULL},
    ///买数量 
    {(char *)"BidVolume", (getter)PyCThostFtdcQuoteField_get_BidVolume, (setter)PyCThostFtdcQuoteField_set_BidVolume, (char *)"BidVolume", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcQuoteField_get_RequestID, (setter)PyCThostFtdcQuoteField_set_RequestID, (char *)"RequestID", NULL},
    ///业务单元 
    {(char *)"BusinessUnit", (getter)PyCThostFtdcQuoteField_get_BusinessUnit, (setter)PyCThostFtdcQuoteField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
    ///卖开平标志 
    {(char *)"AskOffsetFlag", (getter)PyCThostFtdcQuoteField_get_AskOffsetFlag, (setter)PyCThostFtdcQuoteField_set_AskOffsetFlag, (char *)"AskOffsetFlag", NULL},
    ///买开平标志 
    {(char *)"BidOffsetFlag", (getter)PyCThostFtdcQuoteField_get_BidOffsetFlag, (setter)PyCThostFtdcQuoteField_set_BidOffsetFlag, (char *)"BidOffsetFlag", NULL},
    ///卖投机套保标志 
    {(char *)"AskHedgeFlag", (getter)PyCThostFtdcQuoteField_get_AskHedgeFlag, (setter)PyCThostFtdcQuoteField_set_AskHedgeFlag, (char *)"AskHedgeFlag", NULL},
    ///买投机套保标志 
    {(char *)"BidHedgeFlag", (getter)PyCThostFtdcQuoteField_get_BidHedgeFlag, (setter)PyCThostFtdcQuoteField_set_BidHedgeFlag, (char *)"BidHedgeFlag", NULL},
    ///本地报价编号 
    {(char *)"QuoteLocalID", (getter)PyCThostFtdcQuoteField_get_QuoteLocalID, (setter)PyCThostFtdcQuoteField_set_QuoteLocalID, (char *)"QuoteLocalID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcQuoteField_get_ExchangeID, (setter)PyCThostFtdcQuoteField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///会员代码 
    {(char *)"ParticipantID", (getter)PyCThostFtdcQuoteField_get_ParticipantID, (setter)PyCThostFtdcQuoteField_set_ParticipantID, (char *)"ParticipantID", NULL},
    ///客户代码 
    {(char *)"ClientID", (getter)PyCThostFtdcQuoteField_get_ClientID, (setter)PyCThostFtdcQuoteField_set_ClientID, (char *)"ClientID", NULL},
    ///保留的无效字段 
    {(char *)"reserve2", (getter)PyCThostFtdcQuoteField_get_reserve2, (setter)PyCThostFtdcQuoteField_set_reserve2, (char *)"reserve2", NULL},
    ///交易所交易员代码 
    {(char *)"TraderID", (getter)PyCThostFtdcQuoteField_get_TraderID, (setter)PyCThostFtdcQuoteField_set_TraderID, (char *)"TraderID", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcQuoteField_get_InstallID, (setter)PyCThostFtdcQuoteField_set_InstallID, (char *)"InstallID", NULL},
    ///报价提示序号 
    {(char *)"NotifySequence", (getter)PyCThostFtdcQuoteField_get_NotifySequence, (setter)PyCThostFtdcQuoteField_set_NotifySequence, (char *)"NotifySequence", NULL},
    ///报价提交状态 
    {(char *)"OrderSubmitStatus", (getter)PyCThostFtdcQuoteField_get_OrderSubmitStatus, (setter)PyCThostFtdcQuoteField_set_OrderSubmitStatus, (char *)"OrderSubmitStatus", NULL},
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcQuoteField_get_TradingDay, (setter)PyCThostFtdcQuoteField_set_TradingDay, (char *)"TradingDay", NULL},
    ///结算编号 
    {(char *)"SettlementID", (getter)PyCThostFtdcQuoteField_get_SettlementID, (setter)PyCThostFtdcQuoteField_set_SettlementID, (char *)"SettlementID", NULL},
    ///报价编号 
    {(char *)"QuoteSysID", (getter)PyCThostFtdcQuoteField_get_QuoteSysID, (setter)PyCThostFtdcQuoteField_set_QuoteSysID, (char *)"QuoteSysID", NULL},
    ///报单日期 
    {(char *)"InsertDate", (getter)PyCThostFtdcQuoteField_get_InsertDate, (setter)PyCThostFtdcQuoteField_set_InsertDate, (char *)"InsertDate", NULL},
    ///插入时间 
    {(char *)"InsertTime", (getter)PyCThostFtdcQuoteField_get_InsertTime, (setter)PyCThostFtdcQuoteField_set_InsertTime, (char *)"InsertTime", NULL},
    ///撤销时间 
    {(char *)"CancelTime", (getter)PyCThostFtdcQuoteField_get_CancelTime, (setter)PyCThostFtdcQuoteField_set_CancelTime, (char *)"CancelTime", NULL},
    ///报价状态 
    {(char *)"QuoteStatus", (getter)PyCThostFtdcQuoteField_get_QuoteStatus, (setter)PyCThostFtdcQuoteField_set_QuoteStatus, (char *)"QuoteStatus", NULL},
    ///结算会员编号 
    {(char *)"ClearingPartID", (getter)PyCThostFtdcQuoteField_get_ClearingPartID, (setter)PyCThostFtdcQuoteField_set_ClearingPartID, (char *)"ClearingPartID", NULL},
    ///序号 
    {(char *)"SequenceNo", (getter)PyCThostFtdcQuoteField_get_SequenceNo, (setter)PyCThostFtdcQuoteField_set_SequenceNo, (char *)"SequenceNo", NULL},
    ///卖方报单编号 
    {(char *)"AskOrderSysID", (getter)PyCThostFtdcQuoteField_get_AskOrderSysID, (setter)PyCThostFtdcQuoteField_set_AskOrderSysID, (char *)"AskOrderSysID", NULL},
    ///买方报单编号 
    {(char *)"BidOrderSysID", (getter)PyCThostFtdcQuoteField_get_BidOrderSysID, (setter)PyCThostFtdcQuoteField_set_BidOrderSysID, (char *)"BidOrderSysID", NULL},
    ///前置编号 
    {(char *)"FrontID", (getter)PyCThostFtdcQuoteField_get_FrontID, (setter)PyCThostFtdcQuoteField_set_FrontID, (char *)"FrontID", NULL},
    ///会话编号 
    {(char *)"SessionID", (getter)PyCThostFtdcQuoteField_get_SessionID, (setter)PyCThostFtdcQuoteField_set_SessionID, (char *)"SessionID", NULL},
    ///用户端产品信息 
    {(char *)"UserProductInfo", (getter)PyCThostFtdcQuoteField_get_UserProductInfo, (setter)PyCThostFtdcQuoteField_set_UserProductInfo, (char *)"UserProductInfo", NULL},
    ///状态信息 
    {(char *)"StatusMsg", (getter)PyCThostFtdcQuoteField_get_StatusMsg, (setter)PyCThostFtdcQuoteField_set_StatusMsg, (char *)"StatusMsg", NULL},
    ///操作用户代码 
    {(char *)"ActiveUserID", (getter)PyCThostFtdcQuoteField_get_ActiveUserID, (setter)PyCThostFtdcQuoteField_set_ActiveUserID, (char *)"ActiveUserID", NULL},
    ///经纪公司报价编号 
    {(char *)"BrokerQuoteSeq", (getter)PyCThostFtdcQuoteField_get_BrokerQuoteSeq, (setter)PyCThostFtdcQuoteField_set_BrokerQuoteSeq, (char *)"BrokerQuoteSeq", NULL},
    ///衍生卖报单引用 
    {(char *)"AskOrderRef", (getter)PyCThostFtdcQuoteField_get_AskOrderRef, (setter)PyCThostFtdcQuoteField_set_AskOrderRef, (char *)"AskOrderRef", NULL},
    ///衍生买报单引用 
    {(char *)"BidOrderRef", (getter)PyCThostFtdcQuoteField_get_BidOrderRef, (setter)PyCThostFtdcQuoteField_set_BidOrderRef, (char *)"BidOrderRef", NULL},
    ///应价编号 
    {(char *)"ForQuoteSysID", (getter)PyCThostFtdcQuoteField_get_ForQuoteSysID, (setter)PyCThostFtdcQuoteField_set_ForQuoteSysID, (char *)"ForQuoteSysID", NULL},
    ///营业部编号 
    {(char *)"BranchID", (getter)PyCThostFtdcQuoteField_get_BranchID, (setter)PyCThostFtdcQuoteField_set_BranchID, (char *)"BranchID", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcQuoteField_get_InvestUnitID, (setter)PyCThostFtdcQuoteField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///资金账号 
    {(char *)"AccountID", (getter)PyCThostFtdcQuoteField_get_AccountID, (setter)PyCThostFtdcQuoteField_set_AccountID, (char *)"AccountID", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcQuoteField_get_CurrencyID, (setter)PyCThostFtdcQuoteField_set_CurrencyID, (char *)"CurrencyID", NULL},
    ///保留的无效字段 
    {(char *)"reserve3", (getter)PyCThostFtdcQuoteField_get_reserve3, (setter)PyCThostFtdcQuoteField_set_reserve3, (char *)"reserve3", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcQuoteField_get_MacAddress, (setter)PyCThostFtdcQuoteField_set_MacAddress, (char *)"MacAddress", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcQuoteField_get_InstrumentID, (setter)PyCThostFtdcQuoteField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///合约在交易所的代码 
    {(char *)"ExchangeInstID", (getter)PyCThostFtdcQuoteField_get_ExchangeInstID, (setter)PyCThostFtdcQuoteField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcQuoteField_get_IPAddress, (setter)PyCThostFtdcQuoteField_set_IPAddress, (char *)"IPAddress", NULL},
    ///被顶单编号 
    {(char *)"ReplaceSysID", (getter)PyCThostFtdcQuoteField_get_ReplaceSysID, (setter)PyCThostFtdcQuoteField_set_ReplaceSysID, (char *)"ReplaceSysID", NULL},
    ///有效期类型 
    {(char *)"TimeCondition", (getter)PyCThostFtdcQuoteField_get_TimeCondition, (setter)PyCThostFtdcQuoteField_set_TimeCondition, (char *)"TimeCondition", NULL},
    ///报单回显字段 
    {(char *)"OrderMemo", (getter)PyCThostFtdcQuoteField_get_OrderMemo, (setter)PyCThostFtdcQuoteField_set_OrderMemo, (char *)"OrderMemo", NULL},
    ///session上请求计数 api自动维护 
    {(char *)"SessionReqSeq", (getter)PyCThostFtdcQuoteField_get_SessionReqSeq, (setter)PyCThostFtdcQuoteField_set_SessionReqSeq, (char *)"SessionReqSeq", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQuoteFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQuoteField",	/* tp_name */
	sizeof(PyCThostFtdcQuoteField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQuoteField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQuoteField_repr,   /* tp_repr */
	0,                          /* tp_as_number */
	0,                          /* tp_as_sequence */
	0,                          /* tp_as_mapping */
	0,                          /* tp_hash  */
	0,                          /* tp_call */
	0,                          /* tp_str */
	0,                          /* tp_getattro */
	0,                          /* tp_setattro */
	0,                          /* tp_as_buffer */
	Py_TPFLAGS_DEFAULT,         /* tp_flags */
	"CThostFtdcQuoteField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQuoteField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQuoteField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQuoteField_new,       /* tp_new */
};

int PyCThostFtdcQuoteFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQuoteField  */
	if (PyType_Ready(&PyCThostFtdcQuoteFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQuoteField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQuoteFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQuoteField", (PyObject *)&PyCThostFtdcQuoteFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQuoteField to module");
        Py_DECREF(&PyCThostFtdcQuoteFieldType);
		return -1;
    }

    return 0;
}
