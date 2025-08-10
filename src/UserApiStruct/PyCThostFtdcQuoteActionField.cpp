
#include "PyCThostFtdcQuoteActionField.h"

///报价操作

static PyObject *PyCThostFtdcQuoteActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQuoteActionField *self = (PyCThostFtdcQuoteActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQuoteActionField_init(PyCThostFtdcQuoteActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "QuoteActionRef", "QuoteRef", "RequestID", "FrontID", "SessionID", "ExchangeID", "QuoteSysID", "ActionFlag", "ActionDate", "ActionTime", "TraderID", "InstallID", "QuoteLocalID", "ActionLocalID", "ParticipantID", "ClientID", "BusinessUnit", "OrderActionStatus", "UserID", "StatusMsg", "reserve1", "BranchID", "InvestUnitID", "reserve2", "MacAddress", "InstrumentID", "IPAddress", "OrderMemo", "SessionReqSeq",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QuoteActionField_BrokerID = NULL;
    Py_ssize_t QuoteActionField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *QuoteActionField_InvestorID = NULL;
    Py_ssize_t QuoteActionField_InvestorID_len = 0;
            
    ///报价操作引用
    // TThostFtdcOrderActionRefType int
    int QuoteActionField_QuoteActionRef = 0;
        
    ///报价引用
    // TThostFtdcOrderRefType char[13]
    const char *QuoteActionField_QuoteRef = NULL;
    Py_ssize_t QuoteActionField_QuoteRef_len = 0;
            
    ///请求编号
    // TThostFtdcRequestIDType int
    int QuoteActionField_RequestID = 0;
        
    ///前置编号
    // TThostFtdcFrontIDType int
    int QuoteActionField_FrontID = 0;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    int QuoteActionField_SessionID = 0;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *QuoteActionField_ExchangeID = NULL;
    Py_ssize_t QuoteActionField_ExchangeID_len = 0;
            
    ///报价操作编号
    // TThostFtdcOrderSysIDType char[21]
    const char *QuoteActionField_QuoteSysID = NULL;
    Py_ssize_t QuoteActionField_QuoteSysID_len = 0;
            
    ///操作标志
    // TThostFtdcActionFlagType char
    char QuoteActionField_ActionFlag = 0;
            
    ///操作日期
    // TThostFtdcDateType char[9]
    const char *QuoteActionField_ActionDate = NULL;
    Py_ssize_t QuoteActionField_ActionDate_len = 0;
            
    ///操作时间
    // TThostFtdcTimeType char[9]
    const char *QuoteActionField_ActionTime = NULL;
    Py_ssize_t QuoteActionField_ActionTime_len = 0;
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    const char *QuoteActionField_TraderID = NULL;
    Py_ssize_t QuoteActionField_TraderID_len = 0;
            
    ///安装编号
    // TThostFtdcInstallIDType int
    int QuoteActionField_InstallID = 0;
        
    ///本地报价编号
    // TThostFtdcOrderLocalIDType char[13]
    const char *QuoteActionField_QuoteLocalID = NULL;
    Py_ssize_t QuoteActionField_QuoteLocalID_len = 0;
            
    ///操作本地编号
    // TThostFtdcOrderLocalIDType char[13]
    const char *QuoteActionField_ActionLocalID = NULL;
    Py_ssize_t QuoteActionField_ActionLocalID_len = 0;
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    const char *QuoteActionField_ParticipantID = NULL;
    Py_ssize_t QuoteActionField_ParticipantID_len = 0;
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    const char *QuoteActionField_ClientID = NULL;
    Py_ssize_t QuoteActionField_ClientID_len = 0;
            
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    const char *QuoteActionField_BusinessUnit = NULL;
    Py_ssize_t QuoteActionField_BusinessUnit_len = 0;
            
    ///报单操作状态
    // TThostFtdcOrderActionStatusType char
    char QuoteActionField_OrderActionStatus = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *QuoteActionField_UserID = NULL;
    Py_ssize_t QuoteActionField_UserID_len = 0;
            
    ///状态信息
    // TThostFtdcErrorMsgType char[81]
    const char *QuoteActionField_StatusMsg = NULL;
    Py_ssize_t QuoteActionField_StatusMsg_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *QuoteActionField_reserve1 = NULL;
    Py_ssize_t QuoteActionField_reserve1_len = 0;
            
    ///营业部编号
    // TThostFtdcBranchIDType char[9]
    const char *QuoteActionField_BranchID = NULL;
    Py_ssize_t QuoteActionField_BranchID_len = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *QuoteActionField_InvestUnitID = NULL;
    Py_ssize_t QuoteActionField_InvestUnitID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    const char *QuoteActionField_reserve2 = NULL;
    Py_ssize_t QuoteActionField_reserve2_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *QuoteActionField_MacAddress = NULL;
    Py_ssize_t QuoteActionField_MacAddress_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *QuoteActionField_InstrumentID = NULL;
    Py_ssize_t QuoteActionField_InstrumentID_len = 0;
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *QuoteActionField_IPAddress = NULL;
    Py_ssize_t QuoteActionField_IPAddress_len = 0;
            
    ///报单回显字段
    // TThostFtdcOrderMemoType char[13]
    const char *QuoteActionField_OrderMemo = NULL;
    Py_ssize_t QuoteActionField_OrderMemo_len = 0;
            
    ///session上请求计数 api自动维护
    // TThostFtdcSequenceNo12Type int
    int QuoteActionField_SessionReqSeq = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iy#iiiy#y#cy#y#y#iy#y#y#y#y#cy#y#y#y#y#y#y#y#y#y#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#is#iiis#s#cs#s#s#is#s#s#s#s#cs#s#s#s#s#s#s#s#s#s#i", (char **)kwlist
#endif

        , &QuoteActionField_BrokerID, &QuoteActionField_BrokerID_len 
        , &QuoteActionField_InvestorID, &QuoteActionField_InvestorID_len 
        , &QuoteActionField_QuoteActionRef 
        , &QuoteActionField_QuoteRef, &QuoteActionField_QuoteRef_len 
        , &QuoteActionField_RequestID 
        , &QuoteActionField_FrontID 
        , &QuoteActionField_SessionID 
        , &QuoteActionField_ExchangeID, &QuoteActionField_ExchangeID_len 
        , &QuoteActionField_QuoteSysID, &QuoteActionField_QuoteSysID_len 
        , &QuoteActionField_ActionFlag 
        , &QuoteActionField_ActionDate, &QuoteActionField_ActionDate_len 
        , &QuoteActionField_ActionTime, &QuoteActionField_ActionTime_len 
        , &QuoteActionField_TraderID, &QuoteActionField_TraderID_len 
        , &QuoteActionField_InstallID 
        , &QuoteActionField_QuoteLocalID, &QuoteActionField_QuoteLocalID_len 
        , &QuoteActionField_ActionLocalID, &QuoteActionField_ActionLocalID_len 
        , &QuoteActionField_ParticipantID, &QuoteActionField_ParticipantID_len 
        , &QuoteActionField_ClientID, &QuoteActionField_ClientID_len 
        , &QuoteActionField_BusinessUnit, &QuoteActionField_BusinessUnit_len 
        , &QuoteActionField_OrderActionStatus 
        , &QuoteActionField_UserID, &QuoteActionField_UserID_len 
        , &QuoteActionField_StatusMsg, &QuoteActionField_StatusMsg_len 
        , &QuoteActionField_reserve1, &QuoteActionField_reserve1_len 
        , &QuoteActionField_BranchID, &QuoteActionField_BranchID_len 
        , &QuoteActionField_InvestUnitID, &QuoteActionField_InvestUnitID_len 
        , &QuoteActionField_reserve2, &QuoteActionField_reserve2_len 
        , &QuoteActionField_MacAddress, &QuoteActionField_MacAddress_len 
        , &QuoteActionField_InstrumentID, &QuoteActionField_InstrumentID_len 
        , &QuoteActionField_IPAddress, &QuoteActionField_IPAddress_len 
        , &QuoteActionField_OrderMemo, &QuoteActionField_OrderMemo_len 
        , &QuoteActionField_SessionReqSeq 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QuoteActionField_BrokerID != NULL ) {
        if(QuoteActionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QuoteActionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QuoteActionField_BrokerID, QuoteActionField_BrokerID_len);        
        strncpy(self->data.BrokerID, QuoteActionField_BrokerID, sizeof(self->data.BrokerID) );
        QuoteActionField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( QuoteActionField_InvestorID != NULL ) {
        if(QuoteActionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", QuoteActionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, QuoteActionField_InvestorID, QuoteActionField_InvestorID_len);        
        strncpy(self->data.InvestorID, QuoteActionField_InvestorID, sizeof(self->data.InvestorID) );
        QuoteActionField_InvestorID = NULL;
    }
            
    ///报价操作引用
    // TThostFtdcOrderActionRefType int
    self->data.QuoteActionRef = QuoteActionField_QuoteActionRef;
        
    ///报价引用
    // TThostFtdcOrderRefType char[13]
    if( QuoteActionField_QuoteRef != NULL ) {
        if(QuoteActionField_QuoteRef_len > (Py_ssize_t)sizeof(self->data.QuoteRef)) {
            PyErr_Format(PyExc_ValueError, "QuoteRef too long: length=%zd (max allowed is %zd)", QuoteActionField_QuoteRef_len, (Py_ssize_t)sizeof(self->data.QuoteRef));
            return -1;
        }
        // memset(self->data.QuoteRef, 0, sizeof(self->data.QuoteRef));
        // memcpy(self->data.QuoteRef, QuoteActionField_QuoteRef, QuoteActionField_QuoteRef_len);        
        strncpy(self->data.QuoteRef, QuoteActionField_QuoteRef, sizeof(self->data.QuoteRef) );
        QuoteActionField_QuoteRef = NULL;
    }
            
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = QuoteActionField_RequestID;
        
    ///前置编号
    // TThostFtdcFrontIDType int
    self->data.FrontID = QuoteActionField_FrontID;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    self->data.SessionID = QuoteActionField_SessionID;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( QuoteActionField_ExchangeID != NULL ) {
        if(QuoteActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", QuoteActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, QuoteActionField_ExchangeID, QuoteActionField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, QuoteActionField_ExchangeID, sizeof(self->data.ExchangeID) );
        QuoteActionField_ExchangeID = NULL;
    }
            
    ///报价操作编号
    // TThostFtdcOrderSysIDType char[21]
    if( QuoteActionField_QuoteSysID != NULL ) {
        if(QuoteActionField_QuoteSysID_len > (Py_ssize_t)sizeof(self->data.QuoteSysID)) {
            PyErr_Format(PyExc_ValueError, "QuoteSysID too long: length=%zd (max allowed is %zd)", QuoteActionField_QuoteSysID_len, (Py_ssize_t)sizeof(self->data.QuoteSysID));
            return -1;
        }
        // memset(self->data.QuoteSysID, 0, sizeof(self->data.QuoteSysID));
        // memcpy(self->data.QuoteSysID, QuoteActionField_QuoteSysID, QuoteActionField_QuoteSysID_len);        
        strncpy(self->data.QuoteSysID, QuoteActionField_QuoteSysID, sizeof(self->data.QuoteSysID) );
        QuoteActionField_QuoteSysID = NULL;
    }
            
    ///操作标志
    // TThostFtdcActionFlagType char
    self->data.ActionFlag = QuoteActionField_ActionFlag;
            
    ///操作日期
    // TThostFtdcDateType char[9]
    if( QuoteActionField_ActionDate != NULL ) {
        if(QuoteActionField_ActionDate_len > (Py_ssize_t)sizeof(self->data.ActionDate)) {
            PyErr_Format(PyExc_ValueError, "ActionDate too long: length=%zd (max allowed is %zd)", QuoteActionField_ActionDate_len, (Py_ssize_t)sizeof(self->data.ActionDate));
            return -1;
        }
        // memset(self->data.ActionDate, 0, sizeof(self->data.ActionDate));
        // memcpy(self->data.ActionDate, QuoteActionField_ActionDate, QuoteActionField_ActionDate_len);        
        strncpy(self->data.ActionDate, QuoteActionField_ActionDate, sizeof(self->data.ActionDate) );
        QuoteActionField_ActionDate = NULL;
    }
            
    ///操作时间
    // TThostFtdcTimeType char[9]
    if( QuoteActionField_ActionTime != NULL ) {
        if(QuoteActionField_ActionTime_len > (Py_ssize_t)sizeof(self->data.ActionTime)) {
            PyErr_Format(PyExc_ValueError, "ActionTime too long: length=%zd (max allowed is %zd)", QuoteActionField_ActionTime_len, (Py_ssize_t)sizeof(self->data.ActionTime));
            return -1;
        }
        // memset(self->data.ActionTime, 0, sizeof(self->data.ActionTime));
        // memcpy(self->data.ActionTime, QuoteActionField_ActionTime, QuoteActionField_ActionTime_len);        
        strncpy(self->data.ActionTime, QuoteActionField_ActionTime, sizeof(self->data.ActionTime) );
        QuoteActionField_ActionTime = NULL;
    }
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    if( QuoteActionField_TraderID != NULL ) {
        if(QuoteActionField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", QuoteActionField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
            return -1;
        }
        // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
        // memcpy(self->data.TraderID, QuoteActionField_TraderID, QuoteActionField_TraderID_len);        
        strncpy(self->data.TraderID, QuoteActionField_TraderID, sizeof(self->data.TraderID) );
        QuoteActionField_TraderID = NULL;
    }
            
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = QuoteActionField_InstallID;
        
    ///本地报价编号
    // TThostFtdcOrderLocalIDType char[13]
    if( QuoteActionField_QuoteLocalID != NULL ) {
        if(QuoteActionField_QuoteLocalID_len > (Py_ssize_t)sizeof(self->data.QuoteLocalID)) {
            PyErr_Format(PyExc_ValueError, "QuoteLocalID too long: length=%zd (max allowed is %zd)", QuoteActionField_QuoteLocalID_len, (Py_ssize_t)sizeof(self->data.QuoteLocalID));
            return -1;
        }
        // memset(self->data.QuoteLocalID, 0, sizeof(self->data.QuoteLocalID));
        // memcpy(self->data.QuoteLocalID, QuoteActionField_QuoteLocalID, QuoteActionField_QuoteLocalID_len);        
        strncpy(self->data.QuoteLocalID, QuoteActionField_QuoteLocalID, sizeof(self->data.QuoteLocalID) );
        QuoteActionField_QuoteLocalID = NULL;
    }
            
    ///操作本地编号
    // TThostFtdcOrderLocalIDType char[13]
    if( QuoteActionField_ActionLocalID != NULL ) {
        if(QuoteActionField_ActionLocalID_len > (Py_ssize_t)sizeof(self->data.ActionLocalID)) {
            PyErr_Format(PyExc_ValueError, "ActionLocalID too long: length=%zd (max allowed is %zd)", QuoteActionField_ActionLocalID_len, (Py_ssize_t)sizeof(self->data.ActionLocalID));
            return -1;
        }
        // memset(self->data.ActionLocalID, 0, sizeof(self->data.ActionLocalID));
        // memcpy(self->data.ActionLocalID, QuoteActionField_ActionLocalID, QuoteActionField_ActionLocalID_len);        
        strncpy(self->data.ActionLocalID, QuoteActionField_ActionLocalID, sizeof(self->data.ActionLocalID) );
        QuoteActionField_ActionLocalID = NULL;
    }
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    if( QuoteActionField_ParticipantID != NULL ) {
        if(QuoteActionField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", QuoteActionField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
            return -1;
        }
        // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
        // memcpy(self->data.ParticipantID, QuoteActionField_ParticipantID, QuoteActionField_ParticipantID_len);        
        strncpy(self->data.ParticipantID, QuoteActionField_ParticipantID, sizeof(self->data.ParticipantID) );
        QuoteActionField_ParticipantID = NULL;
    }
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    if( QuoteActionField_ClientID != NULL ) {
        if(QuoteActionField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", QuoteActionField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
            return -1;
        }
        // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
        // memcpy(self->data.ClientID, QuoteActionField_ClientID, QuoteActionField_ClientID_len);        
        strncpy(self->data.ClientID, QuoteActionField_ClientID, sizeof(self->data.ClientID) );
        QuoteActionField_ClientID = NULL;
    }
            
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    if( QuoteActionField_BusinessUnit != NULL ) {
        if(QuoteActionField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", QuoteActionField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
            return -1;
        }
        // memset(self->data.BusinessUnit, 0, sizeof(self->data.BusinessUnit));
        // memcpy(self->data.BusinessUnit, QuoteActionField_BusinessUnit, QuoteActionField_BusinessUnit_len);        
        strncpy(self->data.BusinessUnit, QuoteActionField_BusinessUnit, sizeof(self->data.BusinessUnit) );
        QuoteActionField_BusinessUnit = NULL;
    }
            
    ///报单操作状态
    // TThostFtdcOrderActionStatusType char
    self->data.OrderActionStatus = QuoteActionField_OrderActionStatus;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( QuoteActionField_UserID != NULL ) {
        if(QuoteActionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", QuoteActionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, QuoteActionField_UserID, QuoteActionField_UserID_len);        
        strncpy(self->data.UserID, QuoteActionField_UserID, sizeof(self->data.UserID) );
        QuoteActionField_UserID = NULL;
    }
            
    ///状态信息
    // TThostFtdcErrorMsgType char[81]
    if( QuoteActionField_StatusMsg != NULL ) {
        if(QuoteActionField_StatusMsg_len > (Py_ssize_t)sizeof(self->data.StatusMsg)) {
            PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is %zd)", QuoteActionField_StatusMsg_len, (Py_ssize_t)sizeof(self->data.StatusMsg));
            return -1;
        }
        // memset(self->data.StatusMsg, 0, sizeof(self->data.StatusMsg));
        // memcpy(self->data.StatusMsg, QuoteActionField_StatusMsg, QuoteActionField_StatusMsg_len);        
        strncpy(self->data.StatusMsg, QuoteActionField_StatusMsg, sizeof(self->data.StatusMsg) );
        QuoteActionField_StatusMsg = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( QuoteActionField_reserve1 != NULL ) {
        if(QuoteActionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", QuoteActionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, QuoteActionField_reserve1, QuoteActionField_reserve1_len);        
        strncpy(self->data.reserve1, QuoteActionField_reserve1, sizeof(self->data.reserve1) );
        QuoteActionField_reserve1 = NULL;
    }
            
    ///营业部编号
    // TThostFtdcBranchIDType char[9]
    if( QuoteActionField_BranchID != NULL ) {
        if(QuoteActionField_BranchID_len > (Py_ssize_t)sizeof(self->data.BranchID)) {
            PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is %zd)", QuoteActionField_BranchID_len, (Py_ssize_t)sizeof(self->data.BranchID));
            return -1;
        }
        // memset(self->data.BranchID, 0, sizeof(self->data.BranchID));
        // memcpy(self->data.BranchID, QuoteActionField_BranchID, QuoteActionField_BranchID_len);        
        strncpy(self->data.BranchID, QuoteActionField_BranchID, sizeof(self->data.BranchID) );
        QuoteActionField_BranchID = NULL;
    }
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( QuoteActionField_InvestUnitID != NULL ) {
        if(QuoteActionField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", QuoteActionField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, QuoteActionField_InvestUnitID, QuoteActionField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, QuoteActionField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        QuoteActionField_InvestUnitID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    if( QuoteActionField_reserve2 != NULL ) {
        if(QuoteActionField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", QuoteActionField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
            return -1;
        }
        // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
        // memcpy(self->data.reserve2, QuoteActionField_reserve2, QuoteActionField_reserve2_len);        
        strncpy(self->data.reserve2, QuoteActionField_reserve2, sizeof(self->data.reserve2) );
        QuoteActionField_reserve2 = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( QuoteActionField_MacAddress != NULL ) {
        if(QuoteActionField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", QuoteActionField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, QuoteActionField_MacAddress, QuoteActionField_MacAddress_len);        
        strncpy(self->data.MacAddress, QuoteActionField_MacAddress, sizeof(self->data.MacAddress) );
        QuoteActionField_MacAddress = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( QuoteActionField_InstrumentID != NULL ) {
        if(QuoteActionField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", QuoteActionField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, QuoteActionField_InstrumentID, QuoteActionField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, QuoteActionField_InstrumentID, sizeof(self->data.InstrumentID) );
        QuoteActionField_InstrumentID = NULL;
    }
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( QuoteActionField_IPAddress != NULL ) {
        if(QuoteActionField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", QuoteActionField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, QuoteActionField_IPAddress, QuoteActionField_IPAddress_len);        
        strncpy(self->data.IPAddress, QuoteActionField_IPAddress, sizeof(self->data.IPAddress) );
        QuoteActionField_IPAddress = NULL;
    }
            
    ///报单回显字段
    // TThostFtdcOrderMemoType char[13]
    if( QuoteActionField_OrderMemo != NULL ) {
        if(QuoteActionField_OrderMemo_len > (Py_ssize_t)sizeof(self->data.OrderMemo)) {
            PyErr_Format(PyExc_ValueError, "OrderMemo too long: length=%zd (max allowed is %zd)", QuoteActionField_OrderMemo_len, (Py_ssize_t)sizeof(self->data.OrderMemo));
            return -1;
        }
        // memset(self->data.OrderMemo, 0, sizeof(self->data.OrderMemo));
        // memcpy(self->data.OrderMemo, QuoteActionField_OrderMemo, QuoteActionField_OrderMemo_len);        
        strncpy(self->data.OrderMemo, QuoteActionField_OrderMemo, sizeof(self->data.OrderMemo) );
        QuoteActionField_OrderMemo = NULL;
    }
            
    ///session上请求计数 api自动维护
    // TThostFtdcSequenceNo12Type int
    self->data.SessionReqSeq = QuoteActionField_SessionReqSeq;
        

    return 0;
}

static void PyCThostFtdcQuoteActionField_dealloc(PyCThostFtdcQuoteActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQuoteActionField_repr(PyCThostFtdcQuoteActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i,s:y,s:i,s:i,s:i,s:y,s:y,s:c,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i,s:s,s:i,s:i,s:i,s:s,s:s,s:c,s:s,s:s,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"QuoteActionRef", self->data.QuoteActionRef 
        ,"QuoteRef", self->data.QuoteRef//, (Py_ssize_t)sizeof(self->data.QuoteRef) 
        ,"RequestID", self->data.RequestID 
        ,"FrontID", self->data.FrontID 
        ,"SessionID", self->data.SessionID 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"QuoteSysID", self->data.QuoteSysID//, (Py_ssize_t)sizeof(self->data.QuoteSysID) 
        ,"ActionFlag", self->data.ActionFlag 
        ,"ActionDate", self->data.ActionDate//, (Py_ssize_t)sizeof(self->data.ActionDate) 
        ,"ActionTime", self->data.ActionTime//, (Py_ssize_t)sizeof(self->data.ActionTime) 
        ,"TraderID", self->data.TraderID//, (Py_ssize_t)sizeof(self->data.TraderID) 
        ,"InstallID", self->data.InstallID 
        ,"QuoteLocalID", self->data.QuoteLocalID//, (Py_ssize_t)sizeof(self->data.QuoteLocalID) 
        ,"ActionLocalID", self->data.ActionLocalID//, (Py_ssize_t)sizeof(self->data.ActionLocalID) 
        ,"ParticipantID", self->data.ParticipantID//, (Py_ssize_t)sizeof(self->data.ParticipantID) 
        ,"ClientID", self->data.ClientID//, (Py_ssize_t)sizeof(self->data.ClientID) 
        ,"BusinessUnit", self->data.BusinessUnit//, (Py_ssize_t)sizeof(self->data.BusinessUnit) 
        ,"OrderActionStatus", self->data.OrderActionStatus 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"StatusMsg", self->data.StatusMsg//, (Py_ssize_t)sizeof(self->data.StatusMsg) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"BranchID", self->data.BranchID//, (Py_ssize_t)sizeof(self->data.BranchID) 
        ,"InvestUnitID", self->data.InvestUnitID//, (Py_ssize_t)sizeof(self->data.InvestUnitID) 
        ,"reserve2", self->data.reserve2//, (Py_ssize_t)sizeof(self->data.reserve2) 
        ,"MacAddress", self->data.MacAddress//, (Py_ssize_t)sizeof(self->data.MacAddress) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"IPAddress", self->data.IPAddress//, (Py_ssize_t)sizeof(self->data.IPAddress) 
        ,"OrderMemo", self->data.OrderMemo//, (Py_ssize_t)sizeof(self->data.OrderMemo) 
        ,"SessionReqSeq", self->data.SessionReqSeq 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQuoteActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQuoteActionField_get_BrokerID(PyCThostFtdcQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQuoteActionField_set_BrokerID(PyCThostFtdcQuoteActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQuoteActionField_get_InvestorID(PyCThostFtdcQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcQuoteActionField_set_InvestorID(PyCThostFtdcQuoteActionField *self, PyObject* val, void *closure) {
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
            
///报价操作引用
// TThostFtdcOrderActionRefType int
static PyObject *PyCThostFtdcQuoteActionField_get_QuoteActionRef(PyCThostFtdcQuoteActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.QuoteActionRef);
#else
    return PyInt_FromLong(self->data.QuoteActionRef);
#endif
}

///报价操作引用
// TThostFtdcOrderActionRefType int
static int PyCThostFtdcQuoteActionField_set_QuoteActionRef(PyCThostFtdcQuoteActionField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "QuoteActionRef Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "QuoteActionRef Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the QuoteActionRef value out of range for C int");
        return -1;
    }
    self->data.QuoteActionRef = (int)buf;
    return 0;
}
        
///报价引用
// TThostFtdcOrderRefType char[13]
static PyObject *PyCThostFtdcQuoteActionField_get_QuoteRef(PyCThostFtdcQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.QuoteRef, (Py_ssize_t)sizeof(self->data.QuoteRef));
    return PyBytes_FromString(self->data.QuoteRef);
}

///报价引用
// TThostFtdcOrderRefType char[13]
static int PyCThostFtdcQuoteActionField_set_QuoteRef(PyCThostFtdcQuoteActionField *self, PyObject* val, void *closure) {
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
            
///请求编号
// TThostFtdcRequestIDType int
static PyObject *PyCThostFtdcQuoteActionField_get_RequestID(PyCThostFtdcQuoteActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcQuoteActionField_set_RequestID(PyCThostFtdcQuoteActionField *self, PyObject* val, void *closure) {
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
        
///前置编号
// TThostFtdcFrontIDType int
static PyObject *PyCThostFtdcQuoteActionField_get_FrontID(PyCThostFtdcQuoteActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FrontID);
#else
    return PyInt_FromLong(self->data.FrontID);
#endif
}

///前置编号
// TThostFtdcFrontIDType int
static int PyCThostFtdcQuoteActionField_set_FrontID(PyCThostFtdcQuoteActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQuoteActionField_get_SessionID(PyCThostFtdcQuoteActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话编号
// TThostFtdcSessionIDType int
static int PyCThostFtdcQuoteActionField_set_SessionID(PyCThostFtdcQuoteActionField *self, PyObject* val, void *closure) {
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
        
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcQuoteActionField_get_ExchangeID(PyCThostFtdcQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcQuoteActionField_set_ExchangeID(PyCThostFtdcQuoteActionField *self, PyObject* val, void *closure) {
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
            
///报价操作编号
// TThostFtdcOrderSysIDType char[21]
static PyObject *PyCThostFtdcQuoteActionField_get_QuoteSysID(PyCThostFtdcQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.QuoteSysID, (Py_ssize_t)sizeof(self->data.QuoteSysID));
    return PyBytes_FromString(self->data.QuoteSysID);
}

///报价操作编号
// TThostFtdcOrderSysIDType char[21]
static int PyCThostFtdcQuoteActionField_set_QuoteSysID(PyCThostFtdcQuoteActionField *self, PyObject* val, void *closure) {
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
            
///操作标志
// TThostFtdcActionFlagType char
static PyObject *PyCThostFtdcQuoteActionField_get_ActionFlag(PyCThostFtdcQuoteActionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionFlag), 1);
}

///操作标志
// TThostFtdcActionFlagType char
static int PyCThostFtdcQuoteActionField_set_ActionFlag(PyCThostFtdcQuoteActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ActionFlag Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ActionFlag)) {
        PyErr_SetString(PyExc_ValueError, "ActionFlag must be equal 1 bytes");
        return -1;
    }
    self->data.ActionFlag = *buf;
    return 0;
}
            
///操作日期
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcQuoteActionField_get_ActionDate(PyCThostFtdcQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActionDate, (Py_ssize_t)sizeof(self->data.ActionDate));
    return PyBytes_FromString(self->data.ActionDate);
}

///操作日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcQuoteActionField_set_ActionDate(PyCThostFtdcQuoteActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ActionDate Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ActionDate)) {
        PyErr_SetString(PyExc_ValueError, "ActionDate must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.ActionDate, 0, sizeof(self->data.ActionDate));
    // memcpy(self->data.ActionDate, buf, len);
    strncpy(self->data.ActionDate, buf, sizeof(self->data.ActionDate));
    return 0;
}
            
///操作时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcQuoteActionField_get_ActionTime(PyCThostFtdcQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActionTime, (Py_ssize_t)sizeof(self->data.ActionTime));
    return PyBytes_FromString(self->data.ActionTime);
}

///操作时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcQuoteActionField_set_ActionTime(PyCThostFtdcQuoteActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ActionTime Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ActionTime)) {
        PyErr_SetString(PyExc_ValueError, "ActionTime must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.ActionTime, 0, sizeof(self->data.ActionTime));
    // memcpy(self->data.ActionTime, buf, len);
    strncpy(self->data.ActionTime, buf, sizeof(self->data.ActionTime));
    return 0;
}
            
///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static PyObject *PyCThostFtdcQuoteActionField_get_TraderID(PyCThostFtdcQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TraderID, (Py_ssize_t)sizeof(self->data.TraderID));
    return PyBytes_FromString(self->data.TraderID);
}

///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static int PyCThostFtdcQuoteActionField_set_TraderID(PyCThostFtdcQuoteActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQuoteActionField_get_InstallID(PyCThostFtdcQuoteActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcQuoteActionField_set_InstallID(PyCThostFtdcQuoteActionField *self, PyObject* val, void *closure) {
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
        
///本地报价编号
// TThostFtdcOrderLocalIDType char[13]
static PyObject *PyCThostFtdcQuoteActionField_get_QuoteLocalID(PyCThostFtdcQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.QuoteLocalID, (Py_ssize_t)sizeof(self->data.QuoteLocalID));
    return PyBytes_FromString(self->data.QuoteLocalID);
}

///本地报价编号
// TThostFtdcOrderLocalIDType char[13]
static int PyCThostFtdcQuoteActionField_set_QuoteLocalID(PyCThostFtdcQuoteActionField *self, PyObject* val, void *closure) {
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
            
///操作本地编号
// TThostFtdcOrderLocalIDType char[13]
static PyObject *PyCThostFtdcQuoteActionField_get_ActionLocalID(PyCThostFtdcQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActionLocalID, (Py_ssize_t)sizeof(self->data.ActionLocalID));
    return PyBytes_FromString(self->data.ActionLocalID);
}

///操作本地编号
// TThostFtdcOrderLocalIDType char[13]
static int PyCThostFtdcQuoteActionField_set_ActionLocalID(PyCThostFtdcQuoteActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ActionLocalID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ActionLocalID)) {
        PyErr_SetString(PyExc_ValueError, "ActionLocalID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.ActionLocalID, 0, sizeof(self->data.ActionLocalID));
    // memcpy(self->data.ActionLocalID, buf, len);
    strncpy(self->data.ActionLocalID, buf, sizeof(self->data.ActionLocalID));
    return 0;
}
            
///会员代码
// TThostFtdcParticipantIDType char[11]
static PyObject *PyCThostFtdcQuoteActionField_get_ParticipantID(PyCThostFtdcQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParticipantID, (Py_ssize_t)sizeof(self->data.ParticipantID));
    return PyBytes_FromString(self->data.ParticipantID);
}

///会员代码
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcQuoteActionField_set_ParticipantID(PyCThostFtdcQuoteActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQuoteActionField_get_ClientID(PyCThostFtdcQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientID, (Py_ssize_t)sizeof(self->data.ClientID));
    return PyBytes_FromString(self->data.ClientID);
}

///客户代码
// TThostFtdcClientIDType char[11]
static int PyCThostFtdcQuoteActionField_set_ClientID(PyCThostFtdcQuoteActionField *self, PyObject* val, void *closure) {
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
            
///业务单元
// TThostFtdcBusinessUnitType char[21]
static PyObject *PyCThostFtdcQuoteActionField_get_BusinessUnit(PyCThostFtdcQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BusinessUnit, (Py_ssize_t)sizeof(self->data.BusinessUnit));
    return PyBytes_FromString(self->data.BusinessUnit);
}

///业务单元
// TThostFtdcBusinessUnitType char[21]
static int PyCThostFtdcQuoteActionField_set_BusinessUnit(PyCThostFtdcQuoteActionField *self, PyObject* val, void *closure) {
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
            
///报单操作状态
// TThostFtdcOrderActionStatusType char
static PyObject *PyCThostFtdcQuoteActionField_get_OrderActionStatus(PyCThostFtdcQuoteActionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OrderActionStatus), 1);
}

///报单操作状态
// TThostFtdcOrderActionStatusType char
static int PyCThostFtdcQuoteActionField_set_OrderActionStatus(PyCThostFtdcQuoteActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderActionStatus Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OrderActionStatus)) {
        PyErr_SetString(PyExc_ValueError, "OrderActionStatus must be equal 1 bytes");
        return -1;
    }
    self->data.OrderActionStatus = *buf;
    return 0;
}
            
///用户代码
// TThostFtdcUserIDType char[16]
static PyObject *PyCThostFtdcQuoteActionField_get_UserID(PyCThostFtdcQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcQuoteActionField_set_UserID(PyCThostFtdcQuoteActionField *self, PyObject* val, void *closure) {
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
            
///状态信息
// TThostFtdcErrorMsgType char[81]
static PyObject *PyCThostFtdcQuoteActionField_get_StatusMsg(PyCThostFtdcQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.StatusMsg, (Py_ssize_t)sizeof(self->data.StatusMsg));
    return PyBytes_FromString(self->data.StatusMsg);
}

///状态信息
// TThostFtdcErrorMsgType char[81]
static int PyCThostFtdcQuoteActionField_set_StatusMsg(PyCThostFtdcQuoteActionField *self, PyObject* val, void *closure) {
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
            
///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcQuoteActionField_get_reserve1(PyCThostFtdcQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcQuoteActionField_set_reserve1(PyCThostFtdcQuoteActionField *self, PyObject* val, void *closure) {
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
            
///营业部编号
// TThostFtdcBranchIDType char[9]
static PyObject *PyCThostFtdcQuoteActionField_get_BranchID(PyCThostFtdcQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BranchID, (Py_ssize_t)sizeof(self->data.BranchID));
    return PyBytes_FromString(self->data.BranchID);
}

///营业部编号
// TThostFtdcBranchIDType char[9]
static int PyCThostFtdcQuoteActionField_set_BranchID(PyCThostFtdcQuoteActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQuoteActionField_get_InvestUnitID(PyCThostFtdcQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcQuoteActionField_set_InvestUnitID(PyCThostFtdcQuoteActionField *self, PyObject* val, void *closure) {
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
            
///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static PyObject *PyCThostFtdcQuoteActionField_get_reserve2(PyCThostFtdcQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve2, (Py_ssize_t)sizeof(self->data.reserve2));
    return PyBytes_FromString(self->data.reserve2);
}

///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static int PyCThostFtdcQuoteActionField_set_reserve2(PyCThostFtdcQuoteActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQuoteActionField_get_MacAddress(PyCThostFtdcQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcQuoteActionField_set_MacAddress(PyCThostFtdcQuoteActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQuoteActionField_get_InstrumentID(PyCThostFtdcQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcQuoteActionField_set_InstrumentID(PyCThostFtdcQuoteActionField *self, PyObject* val, void *closure) {
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
            
///IP地址
// TThostFtdcIPAddressType char[33]
static PyObject *PyCThostFtdcQuoteActionField_get_IPAddress(PyCThostFtdcQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcQuoteActionField_set_IPAddress(PyCThostFtdcQuoteActionField *self, PyObject* val, void *closure) {
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
            
///报单回显字段
// TThostFtdcOrderMemoType char[13]
static PyObject *PyCThostFtdcQuoteActionField_get_OrderMemo(PyCThostFtdcQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderMemo, (Py_ssize_t)sizeof(self->data.OrderMemo));
    return PyBytes_FromString(self->data.OrderMemo);
}

///报单回显字段
// TThostFtdcOrderMemoType char[13]
static int PyCThostFtdcQuoteActionField_set_OrderMemo(PyCThostFtdcQuoteActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQuoteActionField_get_SessionReqSeq(PyCThostFtdcQuoteActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionReqSeq);
#else
    return PyInt_FromLong(self->data.SessionReqSeq);
#endif
}

///session上请求计数 api自动维护
// TThostFtdcSequenceNo12Type int
static int PyCThostFtdcQuoteActionField_set_SessionReqSeq(PyCThostFtdcQuoteActionField *self, PyObject* val, void *closure) {
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
        

static PyGetSetDef PyCThostFtdcQuoteActionField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQuoteActionField_get_BrokerID, (setter)PyCThostFtdcQuoteActionField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcQuoteActionField_get_InvestorID, (setter)PyCThostFtdcQuoteActionField_set_InvestorID, (char *)"InvestorID", NULL},
    ///报价操作引用 
    {(char *)"QuoteActionRef", (getter)PyCThostFtdcQuoteActionField_get_QuoteActionRef, (setter)PyCThostFtdcQuoteActionField_set_QuoteActionRef, (char *)"QuoteActionRef", NULL},
    ///报价引用 
    {(char *)"QuoteRef", (getter)PyCThostFtdcQuoteActionField_get_QuoteRef, (setter)PyCThostFtdcQuoteActionField_set_QuoteRef, (char *)"QuoteRef", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcQuoteActionField_get_RequestID, (setter)PyCThostFtdcQuoteActionField_set_RequestID, (char *)"RequestID", NULL},
    ///前置编号 
    {(char *)"FrontID", (getter)PyCThostFtdcQuoteActionField_get_FrontID, (setter)PyCThostFtdcQuoteActionField_set_FrontID, (char *)"FrontID", NULL},
    ///会话编号 
    {(char *)"SessionID", (getter)PyCThostFtdcQuoteActionField_get_SessionID, (setter)PyCThostFtdcQuoteActionField_set_SessionID, (char *)"SessionID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcQuoteActionField_get_ExchangeID, (setter)PyCThostFtdcQuoteActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///报价操作编号 
    {(char *)"QuoteSysID", (getter)PyCThostFtdcQuoteActionField_get_QuoteSysID, (setter)PyCThostFtdcQuoteActionField_set_QuoteSysID, (char *)"QuoteSysID", NULL},
    ///操作标志 
    {(char *)"ActionFlag", (getter)PyCThostFtdcQuoteActionField_get_ActionFlag, (setter)PyCThostFtdcQuoteActionField_set_ActionFlag, (char *)"ActionFlag", NULL},
    ///操作日期 
    {(char *)"ActionDate", (getter)PyCThostFtdcQuoteActionField_get_ActionDate, (setter)PyCThostFtdcQuoteActionField_set_ActionDate, (char *)"ActionDate", NULL},
    ///操作时间 
    {(char *)"ActionTime", (getter)PyCThostFtdcQuoteActionField_get_ActionTime, (setter)PyCThostFtdcQuoteActionField_set_ActionTime, (char *)"ActionTime", NULL},
    ///交易所交易员代码 
    {(char *)"TraderID", (getter)PyCThostFtdcQuoteActionField_get_TraderID, (setter)PyCThostFtdcQuoteActionField_set_TraderID, (char *)"TraderID", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcQuoteActionField_get_InstallID, (setter)PyCThostFtdcQuoteActionField_set_InstallID, (char *)"InstallID", NULL},
    ///本地报价编号 
    {(char *)"QuoteLocalID", (getter)PyCThostFtdcQuoteActionField_get_QuoteLocalID, (setter)PyCThostFtdcQuoteActionField_set_QuoteLocalID, (char *)"QuoteLocalID", NULL},
    ///操作本地编号 
    {(char *)"ActionLocalID", (getter)PyCThostFtdcQuoteActionField_get_ActionLocalID, (setter)PyCThostFtdcQuoteActionField_set_ActionLocalID, (char *)"ActionLocalID", NULL},
    ///会员代码 
    {(char *)"ParticipantID", (getter)PyCThostFtdcQuoteActionField_get_ParticipantID, (setter)PyCThostFtdcQuoteActionField_set_ParticipantID, (char *)"ParticipantID", NULL},
    ///客户代码 
    {(char *)"ClientID", (getter)PyCThostFtdcQuoteActionField_get_ClientID, (setter)PyCThostFtdcQuoteActionField_set_ClientID, (char *)"ClientID", NULL},
    ///业务单元 
    {(char *)"BusinessUnit", (getter)PyCThostFtdcQuoteActionField_get_BusinessUnit, (setter)PyCThostFtdcQuoteActionField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
    ///报单操作状态 
    {(char *)"OrderActionStatus", (getter)PyCThostFtdcQuoteActionField_get_OrderActionStatus, (setter)PyCThostFtdcQuoteActionField_set_OrderActionStatus, (char *)"OrderActionStatus", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcQuoteActionField_get_UserID, (setter)PyCThostFtdcQuoteActionField_set_UserID, (char *)"UserID", NULL},
    ///状态信息 
    {(char *)"StatusMsg", (getter)PyCThostFtdcQuoteActionField_get_StatusMsg, (setter)PyCThostFtdcQuoteActionField_set_StatusMsg, (char *)"StatusMsg", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcQuoteActionField_get_reserve1, (setter)PyCThostFtdcQuoteActionField_set_reserve1, (char *)"reserve1", NULL},
    ///营业部编号 
    {(char *)"BranchID", (getter)PyCThostFtdcQuoteActionField_get_BranchID, (setter)PyCThostFtdcQuoteActionField_set_BranchID, (char *)"BranchID", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcQuoteActionField_get_InvestUnitID, (setter)PyCThostFtdcQuoteActionField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///保留的无效字段 
    {(char *)"reserve2", (getter)PyCThostFtdcQuoteActionField_get_reserve2, (setter)PyCThostFtdcQuoteActionField_set_reserve2, (char *)"reserve2", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcQuoteActionField_get_MacAddress, (setter)PyCThostFtdcQuoteActionField_set_MacAddress, (char *)"MacAddress", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcQuoteActionField_get_InstrumentID, (setter)PyCThostFtdcQuoteActionField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcQuoteActionField_get_IPAddress, (setter)PyCThostFtdcQuoteActionField_set_IPAddress, (char *)"IPAddress", NULL},
    ///报单回显字段 
    {(char *)"OrderMemo", (getter)PyCThostFtdcQuoteActionField_get_OrderMemo, (setter)PyCThostFtdcQuoteActionField_set_OrderMemo, (char *)"OrderMemo", NULL},
    ///session上请求计数 api自动维护 
    {(char *)"SessionReqSeq", (getter)PyCThostFtdcQuoteActionField_get_SessionReqSeq, (setter)PyCThostFtdcQuoteActionField_set_SessionReqSeq, (char *)"SessionReqSeq", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQuoteActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQuoteActionField",	/* tp_name */
	sizeof(PyCThostFtdcQuoteActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQuoteActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQuoteActionField_repr,   /* tp_repr */
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
	"CThostFtdcQuoteActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQuoteActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQuoteActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQuoteActionField_new,       /* tp_new */
};

int PyCThostFtdcQuoteActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQuoteActionField  */
	if (PyType_Ready(&PyCThostFtdcQuoteActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQuoteActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQuoteActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQuoteActionField", (PyObject *)&PyCThostFtdcQuoteActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQuoteActionField to module");
        Py_DECREF(&PyCThostFtdcQuoteActionFieldType);
		return -1;
    }

    return 0;
}
