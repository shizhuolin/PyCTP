
#include "PyCThostFtdcExchangeQuoteField.h"

///交易所报价信息

static PyObject *PyCThostFtdcExchangeQuoteField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcExchangeQuoteField *self = (PyCThostFtdcExchangeQuoteField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcExchangeQuoteField_init(PyCThostFtdcExchangeQuoteField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"AskPrice", "BidPrice", "AskVolume", "BidVolume", "RequestID", "BusinessUnit", "AskOffsetFlag", "BidOffsetFlag", "AskHedgeFlag", "BidHedgeFlag", "QuoteLocalID", "ExchangeID", "ParticipantID", "ClientID", "reserve1", "TraderID", "InstallID", "NotifySequence", "OrderSubmitStatus", "TradingDay", "SettlementID", "QuoteSysID", "InsertDate", "InsertTime", "CancelTime", "QuoteStatus", "ClearingPartID", "SequenceNo", "AskOrderSysID", "BidOrderSysID", "ForQuoteSysID", "BranchID", "reserve2", "MacAddress", "ExchangeInstID", "IPAddress", "TimeCondition",  NULL};


    ///卖价格
    // TThostFtdcPriceType double
    double ExchangeQuoteField_AskPrice = 0.0;
        
    ///买价格
    // TThostFtdcPriceType double
    double ExchangeQuoteField_BidPrice = 0.0;
        
    ///卖数量
    // TThostFtdcVolumeType int
    int ExchangeQuoteField_AskVolume = 0;
        
    ///买数量
    // TThostFtdcVolumeType int
    int ExchangeQuoteField_BidVolume = 0;
        
    ///请求编号
    // TThostFtdcRequestIDType int
    int ExchangeQuoteField_RequestID = 0;
        
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    const char *ExchangeQuoteField_BusinessUnit = NULL;
    Py_ssize_t ExchangeQuoteField_BusinessUnit_len = 0;
            
    ///卖开平标志
    // TThostFtdcOffsetFlagType char
    char ExchangeQuoteField_AskOffsetFlag = 0;
            
    ///买开平标志
    // TThostFtdcOffsetFlagType char
    char ExchangeQuoteField_BidOffsetFlag = 0;
            
    ///卖投机套保标志
    // TThostFtdcHedgeFlagType char
    char ExchangeQuoteField_AskHedgeFlag = 0;
            
    ///买投机套保标志
    // TThostFtdcHedgeFlagType char
    char ExchangeQuoteField_BidHedgeFlag = 0;
            
    ///本地报价编号
    // TThostFtdcOrderLocalIDType char[13]
    const char *ExchangeQuoteField_QuoteLocalID = NULL;
    Py_ssize_t ExchangeQuoteField_QuoteLocalID_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *ExchangeQuoteField_ExchangeID = NULL;
    Py_ssize_t ExchangeQuoteField_ExchangeID_len = 0;
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    const char *ExchangeQuoteField_ParticipantID = NULL;
    Py_ssize_t ExchangeQuoteField_ParticipantID_len = 0;
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    const char *ExchangeQuoteField_ClientID = NULL;
    Py_ssize_t ExchangeQuoteField_ClientID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    const char *ExchangeQuoteField_reserve1 = NULL;
    Py_ssize_t ExchangeQuoteField_reserve1_len = 0;
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    const char *ExchangeQuoteField_TraderID = NULL;
    Py_ssize_t ExchangeQuoteField_TraderID_len = 0;
            
    ///安装编号
    // TThostFtdcInstallIDType int
    int ExchangeQuoteField_InstallID = 0;
        
    ///报价提示序号
    // TThostFtdcSequenceNoType int
    int ExchangeQuoteField_NotifySequence = 0;
        
    ///报价提交状态
    // TThostFtdcOrderSubmitStatusType char
    char ExchangeQuoteField_OrderSubmitStatus = 0;
            
    ///交易日
    // TThostFtdcDateType char[9]
    const char *ExchangeQuoteField_TradingDay = NULL;
    Py_ssize_t ExchangeQuoteField_TradingDay_len = 0;
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    int ExchangeQuoteField_SettlementID = 0;
        
    ///报价编号
    // TThostFtdcOrderSysIDType char[21]
    const char *ExchangeQuoteField_QuoteSysID = NULL;
    Py_ssize_t ExchangeQuoteField_QuoteSysID_len = 0;
            
    ///报单日期
    // TThostFtdcDateType char[9]
    const char *ExchangeQuoteField_InsertDate = NULL;
    Py_ssize_t ExchangeQuoteField_InsertDate_len = 0;
            
    ///插入时间
    // TThostFtdcTimeType char[9]
    const char *ExchangeQuoteField_InsertTime = NULL;
    Py_ssize_t ExchangeQuoteField_InsertTime_len = 0;
            
    ///撤销时间
    // TThostFtdcTimeType char[9]
    const char *ExchangeQuoteField_CancelTime = NULL;
    Py_ssize_t ExchangeQuoteField_CancelTime_len = 0;
            
    ///报价状态
    // TThostFtdcOrderStatusType char
    char ExchangeQuoteField_QuoteStatus = 0;
            
    ///结算会员编号
    // TThostFtdcParticipantIDType char[11]
    const char *ExchangeQuoteField_ClearingPartID = NULL;
    Py_ssize_t ExchangeQuoteField_ClearingPartID_len = 0;
            
    ///序号
    // TThostFtdcSequenceNoType int
    int ExchangeQuoteField_SequenceNo = 0;
        
    ///卖方报单编号
    // TThostFtdcOrderSysIDType char[21]
    const char *ExchangeQuoteField_AskOrderSysID = NULL;
    Py_ssize_t ExchangeQuoteField_AskOrderSysID_len = 0;
            
    ///买方报单编号
    // TThostFtdcOrderSysIDType char[21]
    const char *ExchangeQuoteField_BidOrderSysID = NULL;
    Py_ssize_t ExchangeQuoteField_BidOrderSysID_len = 0;
            
    ///应价编号
    // TThostFtdcOrderSysIDType char[21]
    const char *ExchangeQuoteField_ForQuoteSysID = NULL;
    Py_ssize_t ExchangeQuoteField_ForQuoteSysID_len = 0;
            
    ///营业部编号
    // TThostFtdcBranchIDType char[9]
    const char *ExchangeQuoteField_BranchID = NULL;
    Py_ssize_t ExchangeQuoteField_BranchID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    const char *ExchangeQuoteField_reserve2 = NULL;
    Py_ssize_t ExchangeQuoteField_reserve2_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *ExchangeQuoteField_MacAddress = NULL;
    Py_ssize_t ExchangeQuoteField_MacAddress_len = 0;
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    const char *ExchangeQuoteField_ExchangeInstID = NULL;
    Py_ssize_t ExchangeQuoteField_ExchangeInstID_len = 0;
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *ExchangeQuoteField_IPAddress = NULL;
    Py_ssize_t ExchangeQuoteField_IPAddress_len = 0;
            
    ///有效期类型
    // TThostFtdcTimeConditionType char
    char ExchangeQuoteField_TimeCondition = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|ddiiiy#ccccy#y#y#y#y#y#iicy#iy#y#y#y#cy#iy#y#y#y#y#y#y#y#c", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|ddiiis#ccccs#s#s#s#s#s#iics#is#s#s#s#cs#is#s#s#s#s#s#s#s#c", (char **)kwlist
#endif

        , &ExchangeQuoteField_AskPrice 
        , &ExchangeQuoteField_BidPrice 
        , &ExchangeQuoteField_AskVolume 
        , &ExchangeQuoteField_BidVolume 
        , &ExchangeQuoteField_RequestID 
        , &ExchangeQuoteField_BusinessUnit, &ExchangeQuoteField_BusinessUnit_len 
        , &ExchangeQuoteField_AskOffsetFlag 
        , &ExchangeQuoteField_BidOffsetFlag 
        , &ExchangeQuoteField_AskHedgeFlag 
        , &ExchangeQuoteField_BidHedgeFlag 
        , &ExchangeQuoteField_QuoteLocalID, &ExchangeQuoteField_QuoteLocalID_len 
        , &ExchangeQuoteField_ExchangeID, &ExchangeQuoteField_ExchangeID_len 
        , &ExchangeQuoteField_ParticipantID, &ExchangeQuoteField_ParticipantID_len 
        , &ExchangeQuoteField_ClientID, &ExchangeQuoteField_ClientID_len 
        , &ExchangeQuoteField_reserve1, &ExchangeQuoteField_reserve1_len 
        , &ExchangeQuoteField_TraderID, &ExchangeQuoteField_TraderID_len 
        , &ExchangeQuoteField_InstallID 
        , &ExchangeQuoteField_NotifySequence 
        , &ExchangeQuoteField_OrderSubmitStatus 
        , &ExchangeQuoteField_TradingDay, &ExchangeQuoteField_TradingDay_len 
        , &ExchangeQuoteField_SettlementID 
        , &ExchangeQuoteField_QuoteSysID, &ExchangeQuoteField_QuoteSysID_len 
        , &ExchangeQuoteField_InsertDate, &ExchangeQuoteField_InsertDate_len 
        , &ExchangeQuoteField_InsertTime, &ExchangeQuoteField_InsertTime_len 
        , &ExchangeQuoteField_CancelTime, &ExchangeQuoteField_CancelTime_len 
        , &ExchangeQuoteField_QuoteStatus 
        , &ExchangeQuoteField_ClearingPartID, &ExchangeQuoteField_ClearingPartID_len 
        , &ExchangeQuoteField_SequenceNo 
        , &ExchangeQuoteField_AskOrderSysID, &ExchangeQuoteField_AskOrderSysID_len 
        , &ExchangeQuoteField_BidOrderSysID, &ExchangeQuoteField_BidOrderSysID_len 
        , &ExchangeQuoteField_ForQuoteSysID, &ExchangeQuoteField_ForQuoteSysID_len 
        , &ExchangeQuoteField_BranchID, &ExchangeQuoteField_BranchID_len 
        , &ExchangeQuoteField_reserve2, &ExchangeQuoteField_reserve2_len 
        , &ExchangeQuoteField_MacAddress, &ExchangeQuoteField_MacAddress_len 
        , &ExchangeQuoteField_ExchangeInstID, &ExchangeQuoteField_ExchangeInstID_len 
        , &ExchangeQuoteField_IPAddress, &ExchangeQuoteField_IPAddress_len 
        , &ExchangeQuoteField_TimeCondition 


    )) {
        return -1;
    }


    ///卖价格
    // TThostFtdcPriceType double
    self->data.AskPrice = ExchangeQuoteField_AskPrice;
        
    ///买价格
    // TThostFtdcPriceType double
    self->data.BidPrice = ExchangeQuoteField_BidPrice;
        
    ///卖数量
    // TThostFtdcVolumeType int
    self->data.AskVolume = ExchangeQuoteField_AskVolume;
        
    ///买数量
    // TThostFtdcVolumeType int
    self->data.BidVolume = ExchangeQuoteField_BidVolume;
        
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = ExchangeQuoteField_RequestID;
        
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    if( ExchangeQuoteField_BusinessUnit != NULL ) {
        if(ExchangeQuoteField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", ExchangeQuoteField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
            return -1;
        }
        // memset(self->data.BusinessUnit, 0, sizeof(self->data.BusinessUnit));
        // memcpy(self->data.BusinessUnit, ExchangeQuoteField_BusinessUnit, ExchangeQuoteField_BusinessUnit_len);        
        strncpy(self->data.BusinessUnit, ExchangeQuoteField_BusinessUnit, sizeof(self->data.BusinessUnit) );
        ExchangeQuoteField_BusinessUnit = NULL;
    }
            
    ///卖开平标志
    // TThostFtdcOffsetFlagType char
    self->data.AskOffsetFlag = ExchangeQuoteField_AskOffsetFlag;
            
    ///买开平标志
    // TThostFtdcOffsetFlagType char
    self->data.BidOffsetFlag = ExchangeQuoteField_BidOffsetFlag;
            
    ///卖投机套保标志
    // TThostFtdcHedgeFlagType char
    self->data.AskHedgeFlag = ExchangeQuoteField_AskHedgeFlag;
            
    ///买投机套保标志
    // TThostFtdcHedgeFlagType char
    self->data.BidHedgeFlag = ExchangeQuoteField_BidHedgeFlag;
            
    ///本地报价编号
    // TThostFtdcOrderLocalIDType char[13]
    if( ExchangeQuoteField_QuoteLocalID != NULL ) {
        if(ExchangeQuoteField_QuoteLocalID_len > (Py_ssize_t)sizeof(self->data.QuoteLocalID)) {
            PyErr_Format(PyExc_ValueError, "QuoteLocalID too long: length=%zd (max allowed is %zd)", ExchangeQuoteField_QuoteLocalID_len, (Py_ssize_t)sizeof(self->data.QuoteLocalID));
            return -1;
        }
        // memset(self->data.QuoteLocalID, 0, sizeof(self->data.QuoteLocalID));
        // memcpy(self->data.QuoteLocalID, ExchangeQuoteField_QuoteLocalID, ExchangeQuoteField_QuoteLocalID_len);        
        strncpy(self->data.QuoteLocalID, ExchangeQuoteField_QuoteLocalID, sizeof(self->data.QuoteLocalID) );
        ExchangeQuoteField_QuoteLocalID = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( ExchangeQuoteField_ExchangeID != NULL ) {
        if(ExchangeQuoteField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", ExchangeQuoteField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, ExchangeQuoteField_ExchangeID, ExchangeQuoteField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, ExchangeQuoteField_ExchangeID, sizeof(self->data.ExchangeID) );
        ExchangeQuoteField_ExchangeID = NULL;
    }
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    if( ExchangeQuoteField_ParticipantID != NULL ) {
        if(ExchangeQuoteField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", ExchangeQuoteField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
            return -1;
        }
        // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
        // memcpy(self->data.ParticipantID, ExchangeQuoteField_ParticipantID, ExchangeQuoteField_ParticipantID_len);        
        strncpy(self->data.ParticipantID, ExchangeQuoteField_ParticipantID, sizeof(self->data.ParticipantID) );
        ExchangeQuoteField_ParticipantID = NULL;
    }
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    if( ExchangeQuoteField_ClientID != NULL ) {
        if(ExchangeQuoteField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", ExchangeQuoteField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
            return -1;
        }
        // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
        // memcpy(self->data.ClientID, ExchangeQuoteField_ClientID, ExchangeQuoteField_ClientID_len);        
        strncpy(self->data.ClientID, ExchangeQuoteField_ClientID, sizeof(self->data.ClientID) );
        ExchangeQuoteField_ClientID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    if( ExchangeQuoteField_reserve1 != NULL ) {
        if(ExchangeQuoteField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", ExchangeQuoteField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, ExchangeQuoteField_reserve1, ExchangeQuoteField_reserve1_len);        
        strncpy(self->data.reserve1, ExchangeQuoteField_reserve1, sizeof(self->data.reserve1) );
        ExchangeQuoteField_reserve1 = NULL;
    }
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    if( ExchangeQuoteField_TraderID != NULL ) {
        if(ExchangeQuoteField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", ExchangeQuoteField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
            return -1;
        }
        // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
        // memcpy(self->data.TraderID, ExchangeQuoteField_TraderID, ExchangeQuoteField_TraderID_len);        
        strncpy(self->data.TraderID, ExchangeQuoteField_TraderID, sizeof(self->data.TraderID) );
        ExchangeQuoteField_TraderID = NULL;
    }
            
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = ExchangeQuoteField_InstallID;
        
    ///报价提示序号
    // TThostFtdcSequenceNoType int
    self->data.NotifySequence = ExchangeQuoteField_NotifySequence;
        
    ///报价提交状态
    // TThostFtdcOrderSubmitStatusType char
    self->data.OrderSubmitStatus = ExchangeQuoteField_OrderSubmitStatus;
            
    ///交易日
    // TThostFtdcDateType char[9]
    if( ExchangeQuoteField_TradingDay != NULL ) {
        if(ExchangeQuoteField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", ExchangeQuoteField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, ExchangeQuoteField_TradingDay, ExchangeQuoteField_TradingDay_len);        
        strncpy(self->data.TradingDay, ExchangeQuoteField_TradingDay, sizeof(self->data.TradingDay) );
        ExchangeQuoteField_TradingDay = NULL;
    }
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    self->data.SettlementID = ExchangeQuoteField_SettlementID;
        
    ///报价编号
    // TThostFtdcOrderSysIDType char[21]
    if( ExchangeQuoteField_QuoteSysID != NULL ) {
        if(ExchangeQuoteField_QuoteSysID_len > (Py_ssize_t)sizeof(self->data.QuoteSysID)) {
            PyErr_Format(PyExc_ValueError, "QuoteSysID too long: length=%zd (max allowed is %zd)", ExchangeQuoteField_QuoteSysID_len, (Py_ssize_t)sizeof(self->data.QuoteSysID));
            return -1;
        }
        // memset(self->data.QuoteSysID, 0, sizeof(self->data.QuoteSysID));
        // memcpy(self->data.QuoteSysID, ExchangeQuoteField_QuoteSysID, ExchangeQuoteField_QuoteSysID_len);        
        strncpy(self->data.QuoteSysID, ExchangeQuoteField_QuoteSysID, sizeof(self->data.QuoteSysID) );
        ExchangeQuoteField_QuoteSysID = NULL;
    }
            
    ///报单日期
    // TThostFtdcDateType char[9]
    if( ExchangeQuoteField_InsertDate != NULL ) {
        if(ExchangeQuoteField_InsertDate_len > (Py_ssize_t)sizeof(self->data.InsertDate)) {
            PyErr_Format(PyExc_ValueError, "InsertDate too long: length=%zd (max allowed is %zd)", ExchangeQuoteField_InsertDate_len, (Py_ssize_t)sizeof(self->data.InsertDate));
            return -1;
        }
        // memset(self->data.InsertDate, 0, sizeof(self->data.InsertDate));
        // memcpy(self->data.InsertDate, ExchangeQuoteField_InsertDate, ExchangeQuoteField_InsertDate_len);        
        strncpy(self->data.InsertDate, ExchangeQuoteField_InsertDate, sizeof(self->data.InsertDate) );
        ExchangeQuoteField_InsertDate = NULL;
    }
            
    ///插入时间
    // TThostFtdcTimeType char[9]
    if( ExchangeQuoteField_InsertTime != NULL ) {
        if(ExchangeQuoteField_InsertTime_len > (Py_ssize_t)sizeof(self->data.InsertTime)) {
            PyErr_Format(PyExc_ValueError, "InsertTime too long: length=%zd (max allowed is %zd)", ExchangeQuoteField_InsertTime_len, (Py_ssize_t)sizeof(self->data.InsertTime));
            return -1;
        }
        // memset(self->data.InsertTime, 0, sizeof(self->data.InsertTime));
        // memcpy(self->data.InsertTime, ExchangeQuoteField_InsertTime, ExchangeQuoteField_InsertTime_len);        
        strncpy(self->data.InsertTime, ExchangeQuoteField_InsertTime, sizeof(self->data.InsertTime) );
        ExchangeQuoteField_InsertTime = NULL;
    }
            
    ///撤销时间
    // TThostFtdcTimeType char[9]
    if( ExchangeQuoteField_CancelTime != NULL ) {
        if(ExchangeQuoteField_CancelTime_len > (Py_ssize_t)sizeof(self->data.CancelTime)) {
            PyErr_Format(PyExc_ValueError, "CancelTime too long: length=%zd (max allowed is %zd)", ExchangeQuoteField_CancelTime_len, (Py_ssize_t)sizeof(self->data.CancelTime));
            return -1;
        }
        // memset(self->data.CancelTime, 0, sizeof(self->data.CancelTime));
        // memcpy(self->data.CancelTime, ExchangeQuoteField_CancelTime, ExchangeQuoteField_CancelTime_len);        
        strncpy(self->data.CancelTime, ExchangeQuoteField_CancelTime, sizeof(self->data.CancelTime) );
        ExchangeQuoteField_CancelTime = NULL;
    }
            
    ///报价状态
    // TThostFtdcOrderStatusType char
    self->data.QuoteStatus = ExchangeQuoteField_QuoteStatus;
            
    ///结算会员编号
    // TThostFtdcParticipantIDType char[11]
    if( ExchangeQuoteField_ClearingPartID != NULL ) {
        if(ExchangeQuoteField_ClearingPartID_len > (Py_ssize_t)sizeof(self->data.ClearingPartID)) {
            PyErr_Format(PyExc_ValueError, "ClearingPartID too long: length=%zd (max allowed is %zd)", ExchangeQuoteField_ClearingPartID_len, (Py_ssize_t)sizeof(self->data.ClearingPartID));
            return -1;
        }
        // memset(self->data.ClearingPartID, 0, sizeof(self->data.ClearingPartID));
        // memcpy(self->data.ClearingPartID, ExchangeQuoteField_ClearingPartID, ExchangeQuoteField_ClearingPartID_len);        
        strncpy(self->data.ClearingPartID, ExchangeQuoteField_ClearingPartID, sizeof(self->data.ClearingPartID) );
        ExchangeQuoteField_ClearingPartID = NULL;
    }
            
    ///序号
    // TThostFtdcSequenceNoType int
    self->data.SequenceNo = ExchangeQuoteField_SequenceNo;
        
    ///卖方报单编号
    // TThostFtdcOrderSysIDType char[21]
    if( ExchangeQuoteField_AskOrderSysID != NULL ) {
        if(ExchangeQuoteField_AskOrderSysID_len > (Py_ssize_t)sizeof(self->data.AskOrderSysID)) {
            PyErr_Format(PyExc_ValueError, "AskOrderSysID too long: length=%zd (max allowed is %zd)", ExchangeQuoteField_AskOrderSysID_len, (Py_ssize_t)sizeof(self->data.AskOrderSysID));
            return -1;
        }
        // memset(self->data.AskOrderSysID, 0, sizeof(self->data.AskOrderSysID));
        // memcpy(self->data.AskOrderSysID, ExchangeQuoteField_AskOrderSysID, ExchangeQuoteField_AskOrderSysID_len);        
        strncpy(self->data.AskOrderSysID, ExchangeQuoteField_AskOrderSysID, sizeof(self->data.AskOrderSysID) );
        ExchangeQuoteField_AskOrderSysID = NULL;
    }
            
    ///买方报单编号
    // TThostFtdcOrderSysIDType char[21]
    if( ExchangeQuoteField_BidOrderSysID != NULL ) {
        if(ExchangeQuoteField_BidOrderSysID_len > (Py_ssize_t)sizeof(self->data.BidOrderSysID)) {
            PyErr_Format(PyExc_ValueError, "BidOrderSysID too long: length=%zd (max allowed is %zd)", ExchangeQuoteField_BidOrderSysID_len, (Py_ssize_t)sizeof(self->data.BidOrderSysID));
            return -1;
        }
        // memset(self->data.BidOrderSysID, 0, sizeof(self->data.BidOrderSysID));
        // memcpy(self->data.BidOrderSysID, ExchangeQuoteField_BidOrderSysID, ExchangeQuoteField_BidOrderSysID_len);        
        strncpy(self->data.BidOrderSysID, ExchangeQuoteField_BidOrderSysID, sizeof(self->data.BidOrderSysID) );
        ExchangeQuoteField_BidOrderSysID = NULL;
    }
            
    ///应价编号
    // TThostFtdcOrderSysIDType char[21]
    if( ExchangeQuoteField_ForQuoteSysID != NULL ) {
        if(ExchangeQuoteField_ForQuoteSysID_len > (Py_ssize_t)sizeof(self->data.ForQuoteSysID)) {
            PyErr_Format(PyExc_ValueError, "ForQuoteSysID too long: length=%zd (max allowed is %zd)", ExchangeQuoteField_ForQuoteSysID_len, (Py_ssize_t)sizeof(self->data.ForQuoteSysID));
            return -1;
        }
        // memset(self->data.ForQuoteSysID, 0, sizeof(self->data.ForQuoteSysID));
        // memcpy(self->data.ForQuoteSysID, ExchangeQuoteField_ForQuoteSysID, ExchangeQuoteField_ForQuoteSysID_len);        
        strncpy(self->data.ForQuoteSysID, ExchangeQuoteField_ForQuoteSysID, sizeof(self->data.ForQuoteSysID) );
        ExchangeQuoteField_ForQuoteSysID = NULL;
    }
            
    ///营业部编号
    // TThostFtdcBranchIDType char[9]
    if( ExchangeQuoteField_BranchID != NULL ) {
        if(ExchangeQuoteField_BranchID_len > (Py_ssize_t)sizeof(self->data.BranchID)) {
            PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is %zd)", ExchangeQuoteField_BranchID_len, (Py_ssize_t)sizeof(self->data.BranchID));
            return -1;
        }
        // memset(self->data.BranchID, 0, sizeof(self->data.BranchID));
        // memcpy(self->data.BranchID, ExchangeQuoteField_BranchID, ExchangeQuoteField_BranchID_len);        
        strncpy(self->data.BranchID, ExchangeQuoteField_BranchID, sizeof(self->data.BranchID) );
        ExchangeQuoteField_BranchID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    if( ExchangeQuoteField_reserve2 != NULL ) {
        if(ExchangeQuoteField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", ExchangeQuoteField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
            return -1;
        }
        // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
        // memcpy(self->data.reserve2, ExchangeQuoteField_reserve2, ExchangeQuoteField_reserve2_len);        
        strncpy(self->data.reserve2, ExchangeQuoteField_reserve2, sizeof(self->data.reserve2) );
        ExchangeQuoteField_reserve2 = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( ExchangeQuoteField_MacAddress != NULL ) {
        if(ExchangeQuoteField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", ExchangeQuoteField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, ExchangeQuoteField_MacAddress, ExchangeQuoteField_MacAddress_len);        
        strncpy(self->data.MacAddress, ExchangeQuoteField_MacAddress, sizeof(self->data.MacAddress) );
        ExchangeQuoteField_MacAddress = NULL;
    }
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    if( ExchangeQuoteField_ExchangeInstID != NULL ) {
        if(ExchangeQuoteField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", ExchangeQuoteField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
            return -1;
        }
        // memset(self->data.ExchangeInstID, 0, sizeof(self->data.ExchangeInstID));
        // memcpy(self->data.ExchangeInstID, ExchangeQuoteField_ExchangeInstID, ExchangeQuoteField_ExchangeInstID_len);        
        strncpy(self->data.ExchangeInstID, ExchangeQuoteField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
        ExchangeQuoteField_ExchangeInstID = NULL;
    }
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( ExchangeQuoteField_IPAddress != NULL ) {
        if(ExchangeQuoteField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", ExchangeQuoteField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, ExchangeQuoteField_IPAddress, ExchangeQuoteField_IPAddress_len);        
        strncpy(self->data.IPAddress, ExchangeQuoteField_IPAddress, sizeof(self->data.IPAddress) );
        ExchangeQuoteField_IPAddress = NULL;
    }
            
    ///有效期类型
    // TThostFtdcTimeConditionType char
    self->data.TimeCondition = ExchangeQuoteField_TimeCondition;
            

    return 0;
}

static void PyCThostFtdcExchangeQuoteField_dealloc(PyCThostFtdcExchangeQuoteField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcExchangeQuoteField_repr(PyCThostFtdcExchangeQuoteField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:d,s:d,s:i,s:i,s:i,s:y,s:c,s:c,s:c,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:i,s:c,s:y,s:i,s:y,s:y,s:y,s:y,s:c,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:c}"
#else
    PyObject *obj = Py_BuildValue("{s:d,s:d,s:i,s:i,s:i,s:s,s:c,s:c,s:c,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:i,s:c,s:s,s:i,s:s,s:s,s:s,s:s,s:c,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:c}"
#endif

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
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
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
        ,"ForQuoteSysID", self->data.ForQuoteSysID//, (Py_ssize_t)sizeof(self->data.ForQuoteSysID) 
        ,"BranchID", self->data.BranchID//, (Py_ssize_t)sizeof(self->data.BranchID) 
        ,"reserve2", self->data.reserve2//, (Py_ssize_t)sizeof(self->data.reserve2) 
        ,"MacAddress", self->data.MacAddress//, (Py_ssize_t)sizeof(self->data.MacAddress) 
        ,"ExchangeInstID", self->data.ExchangeInstID//, (Py_ssize_t)sizeof(self->data.ExchangeInstID) 
        ,"IPAddress", self->data.IPAddress//, (Py_ssize_t)sizeof(self->data.IPAddress) 
        ,"TimeCondition", self->data.TimeCondition 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeQuoteField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///卖价格
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcExchangeQuoteField_get_AskPrice(PyCThostFtdcExchangeQuoteField *self, void *closure) {
    return PyFloat_FromDouble(self->data.AskPrice);
}

///卖价格
// TThostFtdcPriceType double
static int PyCThostFtdcExchangeQuoteField_set_AskPrice(PyCThostFtdcExchangeQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeQuoteField_get_BidPrice(PyCThostFtdcExchangeQuoteField *self, void *closure) {
    return PyFloat_FromDouble(self->data.BidPrice);
}

///买价格
// TThostFtdcPriceType double
static int PyCThostFtdcExchangeQuoteField_set_BidPrice(PyCThostFtdcExchangeQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeQuoteField_get_AskVolume(PyCThostFtdcExchangeQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.AskVolume);
#else
    return PyInt_FromLong(self->data.AskVolume);
#endif
}

///卖数量
// TThostFtdcVolumeType int
static int PyCThostFtdcExchangeQuoteField_set_AskVolume(PyCThostFtdcExchangeQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeQuoteField_get_BidVolume(PyCThostFtdcExchangeQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.BidVolume);
#else
    return PyInt_FromLong(self->data.BidVolume);
#endif
}

///买数量
// TThostFtdcVolumeType int
static int PyCThostFtdcExchangeQuoteField_set_BidVolume(PyCThostFtdcExchangeQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeQuoteField_get_RequestID(PyCThostFtdcExchangeQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcExchangeQuoteField_set_RequestID(PyCThostFtdcExchangeQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeQuoteField_get_BusinessUnit(PyCThostFtdcExchangeQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BusinessUnit, (Py_ssize_t)sizeof(self->data.BusinessUnit));
    return PyBytes_FromString(self->data.BusinessUnit);
}

///业务单元
// TThostFtdcBusinessUnitType char[21]
static int PyCThostFtdcExchangeQuoteField_set_BusinessUnit(PyCThostFtdcExchangeQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeQuoteField_get_AskOffsetFlag(PyCThostFtdcExchangeQuoteField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.AskOffsetFlag), 1);
}

///卖开平标志
// TThostFtdcOffsetFlagType char
static int PyCThostFtdcExchangeQuoteField_set_AskOffsetFlag(PyCThostFtdcExchangeQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeQuoteField_get_BidOffsetFlag(PyCThostFtdcExchangeQuoteField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BidOffsetFlag), 1);
}

///买开平标志
// TThostFtdcOffsetFlagType char
static int PyCThostFtdcExchangeQuoteField_set_BidOffsetFlag(PyCThostFtdcExchangeQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeQuoteField_get_AskHedgeFlag(PyCThostFtdcExchangeQuoteField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.AskHedgeFlag), 1);
}

///卖投机套保标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcExchangeQuoteField_set_AskHedgeFlag(PyCThostFtdcExchangeQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeQuoteField_get_BidHedgeFlag(PyCThostFtdcExchangeQuoteField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BidHedgeFlag), 1);
}

///买投机套保标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcExchangeQuoteField_set_BidHedgeFlag(PyCThostFtdcExchangeQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeQuoteField_get_QuoteLocalID(PyCThostFtdcExchangeQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.QuoteLocalID, (Py_ssize_t)sizeof(self->data.QuoteLocalID));
    return PyBytes_FromString(self->data.QuoteLocalID);
}

///本地报价编号
// TThostFtdcOrderLocalIDType char[13]
static int PyCThostFtdcExchangeQuoteField_set_QuoteLocalID(PyCThostFtdcExchangeQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeQuoteField_get_ExchangeID(PyCThostFtdcExchangeQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcExchangeQuoteField_set_ExchangeID(PyCThostFtdcExchangeQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeQuoteField_get_ParticipantID(PyCThostFtdcExchangeQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParticipantID, (Py_ssize_t)sizeof(self->data.ParticipantID));
    return PyBytes_FromString(self->data.ParticipantID);
}

///会员代码
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcExchangeQuoteField_set_ParticipantID(PyCThostFtdcExchangeQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeQuoteField_get_ClientID(PyCThostFtdcExchangeQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientID, (Py_ssize_t)sizeof(self->data.ClientID));
    return PyBytes_FromString(self->data.ClientID);
}

///客户代码
// TThostFtdcClientIDType char[11]
static int PyCThostFtdcExchangeQuoteField_set_ClientID(PyCThostFtdcExchangeQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeQuoteField_get_reserve1(PyCThostFtdcExchangeQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldExchangeInstIDType char[31]
static int PyCThostFtdcExchangeQuoteField_set_reserve1(PyCThostFtdcExchangeQuoteField *self, PyObject* val, void *closure) {
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
            
///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static PyObject *PyCThostFtdcExchangeQuoteField_get_TraderID(PyCThostFtdcExchangeQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TraderID, (Py_ssize_t)sizeof(self->data.TraderID));
    return PyBytes_FromString(self->data.TraderID);
}

///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static int PyCThostFtdcExchangeQuoteField_set_TraderID(PyCThostFtdcExchangeQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeQuoteField_get_InstallID(PyCThostFtdcExchangeQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcExchangeQuoteField_set_InstallID(PyCThostFtdcExchangeQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeQuoteField_get_NotifySequence(PyCThostFtdcExchangeQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.NotifySequence);
#else
    return PyInt_FromLong(self->data.NotifySequence);
#endif
}

///报价提示序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcExchangeQuoteField_set_NotifySequence(PyCThostFtdcExchangeQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeQuoteField_get_OrderSubmitStatus(PyCThostFtdcExchangeQuoteField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OrderSubmitStatus), 1);
}

///报价提交状态
// TThostFtdcOrderSubmitStatusType char
static int PyCThostFtdcExchangeQuoteField_set_OrderSubmitStatus(PyCThostFtdcExchangeQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeQuoteField_get_TradingDay(PyCThostFtdcExchangeQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcExchangeQuoteField_set_TradingDay(PyCThostFtdcExchangeQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeQuoteField_get_SettlementID(PyCThostFtdcExchangeQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SettlementID);
#else
    return PyInt_FromLong(self->data.SettlementID);
#endif
}

///结算编号
// TThostFtdcSettlementIDType int
static int PyCThostFtdcExchangeQuoteField_set_SettlementID(PyCThostFtdcExchangeQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeQuoteField_get_QuoteSysID(PyCThostFtdcExchangeQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.QuoteSysID, (Py_ssize_t)sizeof(self->data.QuoteSysID));
    return PyBytes_FromString(self->data.QuoteSysID);
}

///报价编号
// TThostFtdcOrderSysIDType char[21]
static int PyCThostFtdcExchangeQuoteField_set_QuoteSysID(PyCThostFtdcExchangeQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeQuoteField_get_InsertDate(PyCThostFtdcExchangeQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InsertDate, (Py_ssize_t)sizeof(self->data.InsertDate));
    return PyBytes_FromString(self->data.InsertDate);
}

///报单日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcExchangeQuoteField_set_InsertDate(PyCThostFtdcExchangeQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeQuoteField_get_InsertTime(PyCThostFtdcExchangeQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InsertTime, (Py_ssize_t)sizeof(self->data.InsertTime));
    return PyBytes_FromString(self->data.InsertTime);
}

///插入时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcExchangeQuoteField_set_InsertTime(PyCThostFtdcExchangeQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeQuoteField_get_CancelTime(PyCThostFtdcExchangeQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CancelTime, (Py_ssize_t)sizeof(self->data.CancelTime));
    return PyBytes_FromString(self->data.CancelTime);
}

///撤销时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcExchangeQuoteField_set_CancelTime(PyCThostFtdcExchangeQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeQuoteField_get_QuoteStatus(PyCThostFtdcExchangeQuoteField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.QuoteStatus), 1);
}

///报价状态
// TThostFtdcOrderStatusType char
static int PyCThostFtdcExchangeQuoteField_set_QuoteStatus(PyCThostFtdcExchangeQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeQuoteField_get_ClearingPartID(PyCThostFtdcExchangeQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClearingPartID, (Py_ssize_t)sizeof(self->data.ClearingPartID));
    return PyBytes_FromString(self->data.ClearingPartID);
}

///结算会员编号
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcExchangeQuoteField_set_ClearingPartID(PyCThostFtdcExchangeQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeQuoteField_get_SequenceNo(PyCThostFtdcExchangeQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SequenceNo);
#else
    return PyInt_FromLong(self->data.SequenceNo);
#endif
}

///序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcExchangeQuoteField_set_SequenceNo(PyCThostFtdcExchangeQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeQuoteField_get_AskOrderSysID(PyCThostFtdcExchangeQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AskOrderSysID, (Py_ssize_t)sizeof(self->data.AskOrderSysID));
    return PyBytes_FromString(self->data.AskOrderSysID);
}

///卖方报单编号
// TThostFtdcOrderSysIDType char[21]
static int PyCThostFtdcExchangeQuoteField_set_AskOrderSysID(PyCThostFtdcExchangeQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeQuoteField_get_BidOrderSysID(PyCThostFtdcExchangeQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BidOrderSysID, (Py_ssize_t)sizeof(self->data.BidOrderSysID));
    return PyBytes_FromString(self->data.BidOrderSysID);
}

///买方报单编号
// TThostFtdcOrderSysIDType char[21]
static int PyCThostFtdcExchangeQuoteField_set_BidOrderSysID(PyCThostFtdcExchangeQuoteField *self, PyObject* val, void *closure) {
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
            
///应价编号
// TThostFtdcOrderSysIDType char[21]
static PyObject *PyCThostFtdcExchangeQuoteField_get_ForQuoteSysID(PyCThostFtdcExchangeQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ForQuoteSysID, (Py_ssize_t)sizeof(self->data.ForQuoteSysID));
    return PyBytes_FromString(self->data.ForQuoteSysID);
}

///应价编号
// TThostFtdcOrderSysIDType char[21]
static int PyCThostFtdcExchangeQuoteField_set_ForQuoteSysID(PyCThostFtdcExchangeQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeQuoteField_get_BranchID(PyCThostFtdcExchangeQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BranchID, (Py_ssize_t)sizeof(self->data.BranchID));
    return PyBytes_FromString(self->data.BranchID);
}

///营业部编号
// TThostFtdcBranchIDType char[9]
static int PyCThostFtdcExchangeQuoteField_set_BranchID(PyCThostFtdcExchangeQuoteField *self, PyObject* val, void *closure) {
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
            
///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static PyObject *PyCThostFtdcExchangeQuoteField_get_reserve2(PyCThostFtdcExchangeQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve2, (Py_ssize_t)sizeof(self->data.reserve2));
    return PyBytes_FromString(self->data.reserve2);
}

///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static int PyCThostFtdcExchangeQuoteField_set_reserve2(PyCThostFtdcExchangeQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 16 bytes");
        return -1;
    }
    // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
    // memcpy(self->data.reserve2, buf, len);
    strncpy(self->data.reserve2, buf, sizeof(self->data.reserve2));
    return 0;
}
            
///Mac地址
// TThostFtdcMacAddressType char[21]
static PyObject *PyCThostFtdcExchangeQuoteField_get_MacAddress(PyCThostFtdcExchangeQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcExchangeQuoteField_set_MacAddress(PyCThostFtdcExchangeQuoteField *self, PyObject* val, void *closure) {
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
            
///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static PyObject *PyCThostFtdcExchangeQuoteField_get_ExchangeInstID(PyCThostFtdcExchangeQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeInstID, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
    return PyBytes_FromString(self->data.ExchangeInstID);
}

///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static int PyCThostFtdcExchangeQuoteField_set_ExchangeInstID(PyCThostFtdcExchangeQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeQuoteField_get_IPAddress(PyCThostFtdcExchangeQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcExchangeQuoteField_set_IPAddress(PyCThostFtdcExchangeQuoteField *self, PyObject* val, void *closure) {
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
            
///有效期类型
// TThostFtdcTimeConditionType char
static PyObject *PyCThostFtdcExchangeQuoteField_get_TimeCondition(PyCThostFtdcExchangeQuoteField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.TimeCondition), 1);
}

///有效期类型
// TThostFtdcTimeConditionType char
static int PyCThostFtdcExchangeQuoteField_set_TimeCondition(PyCThostFtdcExchangeQuoteField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcExchangeQuoteField_getset[] = {
    ///卖价格 
    {(char *)"AskPrice", (getter)PyCThostFtdcExchangeQuoteField_get_AskPrice, (setter)PyCThostFtdcExchangeQuoteField_set_AskPrice, (char *)"AskPrice", NULL},
    ///买价格 
    {(char *)"BidPrice", (getter)PyCThostFtdcExchangeQuoteField_get_BidPrice, (setter)PyCThostFtdcExchangeQuoteField_set_BidPrice, (char *)"BidPrice", NULL},
    ///卖数量 
    {(char *)"AskVolume", (getter)PyCThostFtdcExchangeQuoteField_get_AskVolume, (setter)PyCThostFtdcExchangeQuoteField_set_AskVolume, (char *)"AskVolume", NULL},
    ///买数量 
    {(char *)"BidVolume", (getter)PyCThostFtdcExchangeQuoteField_get_BidVolume, (setter)PyCThostFtdcExchangeQuoteField_set_BidVolume, (char *)"BidVolume", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcExchangeQuoteField_get_RequestID, (setter)PyCThostFtdcExchangeQuoteField_set_RequestID, (char *)"RequestID", NULL},
    ///业务单元 
    {(char *)"BusinessUnit", (getter)PyCThostFtdcExchangeQuoteField_get_BusinessUnit, (setter)PyCThostFtdcExchangeQuoteField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
    ///卖开平标志 
    {(char *)"AskOffsetFlag", (getter)PyCThostFtdcExchangeQuoteField_get_AskOffsetFlag, (setter)PyCThostFtdcExchangeQuoteField_set_AskOffsetFlag, (char *)"AskOffsetFlag", NULL},
    ///买开平标志 
    {(char *)"BidOffsetFlag", (getter)PyCThostFtdcExchangeQuoteField_get_BidOffsetFlag, (setter)PyCThostFtdcExchangeQuoteField_set_BidOffsetFlag, (char *)"BidOffsetFlag", NULL},
    ///卖投机套保标志 
    {(char *)"AskHedgeFlag", (getter)PyCThostFtdcExchangeQuoteField_get_AskHedgeFlag, (setter)PyCThostFtdcExchangeQuoteField_set_AskHedgeFlag, (char *)"AskHedgeFlag", NULL},
    ///买投机套保标志 
    {(char *)"BidHedgeFlag", (getter)PyCThostFtdcExchangeQuoteField_get_BidHedgeFlag, (setter)PyCThostFtdcExchangeQuoteField_set_BidHedgeFlag, (char *)"BidHedgeFlag", NULL},
    ///本地报价编号 
    {(char *)"QuoteLocalID", (getter)PyCThostFtdcExchangeQuoteField_get_QuoteLocalID, (setter)PyCThostFtdcExchangeQuoteField_set_QuoteLocalID, (char *)"QuoteLocalID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcExchangeQuoteField_get_ExchangeID, (setter)PyCThostFtdcExchangeQuoteField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///会员代码 
    {(char *)"ParticipantID", (getter)PyCThostFtdcExchangeQuoteField_get_ParticipantID, (setter)PyCThostFtdcExchangeQuoteField_set_ParticipantID, (char *)"ParticipantID", NULL},
    ///客户代码 
    {(char *)"ClientID", (getter)PyCThostFtdcExchangeQuoteField_get_ClientID, (setter)PyCThostFtdcExchangeQuoteField_set_ClientID, (char *)"ClientID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcExchangeQuoteField_get_reserve1, (setter)PyCThostFtdcExchangeQuoteField_set_reserve1, (char *)"reserve1", NULL},
    ///交易所交易员代码 
    {(char *)"TraderID", (getter)PyCThostFtdcExchangeQuoteField_get_TraderID, (setter)PyCThostFtdcExchangeQuoteField_set_TraderID, (char *)"TraderID", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcExchangeQuoteField_get_InstallID, (setter)PyCThostFtdcExchangeQuoteField_set_InstallID, (char *)"InstallID", NULL},
    ///报价提示序号 
    {(char *)"NotifySequence", (getter)PyCThostFtdcExchangeQuoteField_get_NotifySequence, (setter)PyCThostFtdcExchangeQuoteField_set_NotifySequence, (char *)"NotifySequence", NULL},
    ///报价提交状态 
    {(char *)"OrderSubmitStatus", (getter)PyCThostFtdcExchangeQuoteField_get_OrderSubmitStatus, (setter)PyCThostFtdcExchangeQuoteField_set_OrderSubmitStatus, (char *)"OrderSubmitStatus", NULL},
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcExchangeQuoteField_get_TradingDay, (setter)PyCThostFtdcExchangeQuoteField_set_TradingDay, (char *)"TradingDay", NULL},
    ///结算编号 
    {(char *)"SettlementID", (getter)PyCThostFtdcExchangeQuoteField_get_SettlementID, (setter)PyCThostFtdcExchangeQuoteField_set_SettlementID, (char *)"SettlementID", NULL},
    ///报价编号 
    {(char *)"QuoteSysID", (getter)PyCThostFtdcExchangeQuoteField_get_QuoteSysID, (setter)PyCThostFtdcExchangeQuoteField_set_QuoteSysID, (char *)"QuoteSysID", NULL},
    ///报单日期 
    {(char *)"InsertDate", (getter)PyCThostFtdcExchangeQuoteField_get_InsertDate, (setter)PyCThostFtdcExchangeQuoteField_set_InsertDate, (char *)"InsertDate", NULL},
    ///插入时间 
    {(char *)"InsertTime", (getter)PyCThostFtdcExchangeQuoteField_get_InsertTime, (setter)PyCThostFtdcExchangeQuoteField_set_InsertTime, (char *)"InsertTime", NULL},
    ///撤销时间 
    {(char *)"CancelTime", (getter)PyCThostFtdcExchangeQuoteField_get_CancelTime, (setter)PyCThostFtdcExchangeQuoteField_set_CancelTime, (char *)"CancelTime", NULL},
    ///报价状态 
    {(char *)"QuoteStatus", (getter)PyCThostFtdcExchangeQuoteField_get_QuoteStatus, (setter)PyCThostFtdcExchangeQuoteField_set_QuoteStatus, (char *)"QuoteStatus", NULL},
    ///结算会员编号 
    {(char *)"ClearingPartID", (getter)PyCThostFtdcExchangeQuoteField_get_ClearingPartID, (setter)PyCThostFtdcExchangeQuoteField_set_ClearingPartID, (char *)"ClearingPartID", NULL},
    ///序号 
    {(char *)"SequenceNo", (getter)PyCThostFtdcExchangeQuoteField_get_SequenceNo, (setter)PyCThostFtdcExchangeQuoteField_set_SequenceNo, (char *)"SequenceNo", NULL},
    ///卖方报单编号 
    {(char *)"AskOrderSysID", (getter)PyCThostFtdcExchangeQuoteField_get_AskOrderSysID, (setter)PyCThostFtdcExchangeQuoteField_set_AskOrderSysID, (char *)"AskOrderSysID", NULL},
    ///买方报单编号 
    {(char *)"BidOrderSysID", (getter)PyCThostFtdcExchangeQuoteField_get_BidOrderSysID, (setter)PyCThostFtdcExchangeQuoteField_set_BidOrderSysID, (char *)"BidOrderSysID", NULL},
    ///应价编号 
    {(char *)"ForQuoteSysID", (getter)PyCThostFtdcExchangeQuoteField_get_ForQuoteSysID, (setter)PyCThostFtdcExchangeQuoteField_set_ForQuoteSysID, (char *)"ForQuoteSysID", NULL},
    ///营业部编号 
    {(char *)"BranchID", (getter)PyCThostFtdcExchangeQuoteField_get_BranchID, (setter)PyCThostFtdcExchangeQuoteField_set_BranchID, (char *)"BranchID", NULL},
    ///保留的无效字段 
    {(char *)"reserve2", (getter)PyCThostFtdcExchangeQuoteField_get_reserve2, (setter)PyCThostFtdcExchangeQuoteField_set_reserve2, (char *)"reserve2", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcExchangeQuoteField_get_MacAddress, (setter)PyCThostFtdcExchangeQuoteField_set_MacAddress, (char *)"MacAddress", NULL},
    ///合约在交易所的代码 
    {(char *)"ExchangeInstID", (getter)PyCThostFtdcExchangeQuoteField_get_ExchangeInstID, (setter)PyCThostFtdcExchangeQuoteField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcExchangeQuoteField_get_IPAddress, (setter)PyCThostFtdcExchangeQuoteField_set_IPAddress, (char *)"IPAddress", NULL},
    ///有效期类型 
    {(char *)"TimeCondition", (getter)PyCThostFtdcExchangeQuoteField_get_TimeCondition, (setter)PyCThostFtdcExchangeQuoteField_set_TimeCondition, (char *)"TimeCondition", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcExchangeQuoteFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcExchangeQuoteField",	/* tp_name */
	sizeof(PyCThostFtdcExchangeQuoteField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcExchangeQuoteField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcExchangeQuoteField_repr,   /* tp_repr */
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
	"CThostFtdcExchangeQuoteField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcExchangeQuoteField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcExchangeQuoteField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcExchangeQuoteField_new,       /* tp_new */
};

int PyCThostFtdcExchangeQuoteFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcExchangeQuoteField  */
	if (PyType_Ready(&PyCThostFtdcExchangeQuoteFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcExchangeQuoteField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcExchangeQuoteFieldType);
    if( PyModule_AddObject(module, "CThostFtdcExchangeQuoteField", (PyObject *)&PyCThostFtdcExchangeQuoteFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeQuoteField to module");
        Py_DECREF(&PyCThostFtdcExchangeQuoteFieldType);
		return -1;
    }

    return 0;
}
