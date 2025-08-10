
#include "PyCThostFtdcForQuoteField.h"

///询价

static PyObject *PyCThostFtdcForQuoteField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcForQuoteField *self = (PyCThostFtdcForQuoteField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcForQuoteField_init(PyCThostFtdcForQuoteField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "ForQuoteRef", "UserID", "ForQuoteLocalID", "ExchangeID", "ParticipantID", "ClientID", "reserve2", "TraderID", "InstallID", "InsertDate", "InsertTime", "ForQuoteStatus", "FrontID", "SessionID", "StatusMsg", "ActiveUserID", "BrokerForQutoSeq", "InvestUnitID", "reserve3", "MacAddress", "InstrumentID", "ExchangeInstID", "IPAddress",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *ForQuoteField_BrokerID = NULL;
    Py_ssize_t ForQuoteField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *ForQuoteField_InvestorID = NULL;
    Py_ssize_t ForQuoteField_InvestorID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *ForQuoteField_reserve1 = NULL;
    Py_ssize_t ForQuoteField_reserve1_len = 0;
            
    ///询价引用
    // TThostFtdcOrderRefType char[13]
    const char *ForQuoteField_ForQuoteRef = NULL;
    Py_ssize_t ForQuoteField_ForQuoteRef_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *ForQuoteField_UserID = NULL;
    Py_ssize_t ForQuoteField_UserID_len = 0;
            
    ///本地询价编号
    // TThostFtdcOrderLocalIDType char[13]
    const char *ForQuoteField_ForQuoteLocalID = NULL;
    Py_ssize_t ForQuoteField_ForQuoteLocalID_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *ForQuoteField_ExchangeID = NULL;
    Py_ssize_t ForQuoteField_ExchangeID_len = 0;
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    const char *ForQuoteField_ParticipantID = NULL;
    Py_ssize_t ForQuoteField_ParticipantID_len = 0;
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    const char *ForQuoteField_ClientID = NULL;
    Py_ssize_t ForQuoteField_ClientID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    const char *ForQuoteField_reserve2 = NULL;
    Py_ssize_t ForQuoteField_reserve2_len = 0;
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    const char *ForQuoteField_TraderID = NULL;
    Py_ssize_t ForQuoteField_TraderID_len = 0;
            
    ///安装编号
    // TThostFtdcInstallIDType int
    int ForQuoteField_InstallID = 0;
        
    ///报单日期
    // TThostFtdcDateType char[9]
    const char *ForQuoteField_InsertDate = NULL;
    Py_ssize_t ForQuoteField_InsertDate_len = 0;
            
    ///插入时间
    // TThostFtdcTimeType char[9]
    const char *ForQuoteField_InsertTime = NULL;
    Py_ssize_t ForQuoteField_InsertTime_len = 0;
            
    ///询价状态
    // TThostFtdcForQuoteStatusType char
    char ForQuoteField_ForQuoteStatus = 0;
            
    ///前置编号
    // TThostFtdcFrontIDType int
    int ForQuoteField_FrontID = 0;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    int ForQuoteField_SessionID = 0;
        
    ///状态信息
    // TThostFtdcErrorMsgType char[81]
    const char *ForQuoteField_StatusMsg = NULL;
    Py_ssize_t ForQuoteField_StatusMsg_len = 0;
            
    ///操作用户代码
    // TThostFtdcUserIDType char[16]
    const char *ForQuoteField_ActiveUserID = NULL;
    Py_ssize_t ForQuoteField_ActiveUserID_len = 0;
            
    ///经纪公司询价编号
    // TThostFtdcSequenceNoType int
    int ForQuoteField_BrokerForQutoSeq = 0;
        
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *ForQuoteField_InvestUnitID = NULL;
    Py_ssize_t ForQuoteField_InvestUnitID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    const char *ForQuoteField_reserve3 = NULL;
    Py_ssize_t ForQuoteField_reserve3_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *ForQuoteField_MacAddress = NULL;
    Py_ssize_t ForQuoteField_MacAddress_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *ForQuoteField_InstrumentID = NULL;
    Py_ssize_t ForQuoteField_InstrumentID_len = 0;
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    const char *ForQuoteField_ExchangeInstID = NULL;
    Py_ssize_t ForQuoteField_ExchangeInstID_len = 0;
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *ForQuoteField_IPAddress = NULL;
    Py_ssize_t ForQuoteField_IPAddress_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#y#y#iy#y#ciiy#y#iy#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#s#s#is#s#ciis#s#is#s#s#s#s#s#", (char **)kwlist
#endif

        , &ForQuoteField_BrokerID, &ForQuoteField_BrokerID_len 
        , &ForQuoteField_InvestorID, &ForQuoteField_InvestorID_len 
        , &ForQuoteField_reserve1, &ForQuoteField_reserve1_len 
        , &ForQuoteField_ForQuoteRef, &ForQuoteField_ForQuoteRef_len 
        , &ForQuoteField_UserID, &ForQuoteField_UserID_len 
        , &ForQuoteField_ForQuoteLocalID, &ForQuoteField_ForQuoteLocalID_len 
        , &ForQuoteField_ExchangeID, &ForQuoteField_ExchangeID_len 
        , &ForQuoteField_ParticipantID, &ForQuoteField_ParticipantID_len 
        , &ForQuoteField_ClientID, &ForQuoteField_ClientID_len 
        , &ForQuoteField_reserve2, &ForQuoteField_reserve2_len 
        , &ForQuoteField_TraderID, &ForQuoteField_TraderID_len 
        , &ForQuoteField_InstallID 
        , &ForQuoteField_InsertDate, &ForQuoteField_InsertDate_len 
        , &ForQuoteField_InsertTime, &ForQuoteField_InsertTime_len 
        , &ForQuoteField_ForQuoteStatus 
        , &ForQuoteField_FrontID 
        , &ForQuoteField_SessionID 
        , &ForQuoteField_StatusMsg, &ForQuoteField_StatusMsg_len 
        , &ForQuoteField_ActiveUserID, &ForQuoteField_ActiveUserID_len 
        , &ForQuoteField_BrokerForQutoSeq 
        , &ForQuoteField_InvestUnitID, &ForQuoteField_InvestUnitID_len 
        , &ForQuoteField_reserve3, &ForQuoteField_reserve3_len 
        , &ForQuoteField_MacAddress, &ForQuoteField_MacAddress_len 
        , &ForQuoteField_InstrumentID, &ForQuoteField_InstrumentID_len 
        , &ForQuoteField_ExchangeInstID, &ForQuoteField_ExchangeInstID_len 
        , &ForQuoteField_IPAddress, &ForQuoteField_IPAddress_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( ForQuoteField_BrokerID != NULL ) {
        if(ForQuoteField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", ForQuoteField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, ForQuoteField_BrokerID, ForQuoteField_BrokerID_len);        
        strncpy(self->data.BrokerID, ForQuoteField_BrokerID, sizeof(self->data.BrokerID) );
        ForQuoteField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( ForQuoteField_InvestorID != NULL ) {
        if(ForQuoteField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", ForQuoteField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, ForQuoteField_InvestorID, ForQuoteField_InvestorID_len);        
        strncpy(self->data.InvestorID, ForQuoteField_InvestorID, sizeof(self->data.InvestorID) );
        ForQuoteField_InvestorID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( ForQuoteField_reserve1 != NULL ) {
        if(ForQuoteField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", ForQuoteField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, ForQuoteField_reserve1, ForQuoteField_reserve1_len);        
        strncpy(self->data.reserve1, ForQuoteField_reserve1, sizeof(self->data.reserve1) );
        ForQuoteField_reserve1 = NULL;
    }
            
    ///询价引用
    // TThostFtdcOrderRefType char[13]
    if( ForQuoteField_ForQuoteRef != NULL ) {
        if(ForQuoteField_ForQuoteRef_len > (Py_ssize_t)sizeof(self->data.ForQuoteRef)) {
            PyErr_Format(PyExc_ValueError, "ForQuoteRef too long: length=%zd (max allowed is %zd)", ForQuoteField_ForQuoteRef_len, (Py_ssize_t)sizeof(self->data.ForQuoteRef));
            return -1;
        }
        // memset(self->data.ForQuoteRef, 0, sizeof(self->data.ForQuoteRef));
        // memcpy(self->data.ForQuoteRef, ForQuoteField_ForQuoteRef, ForQuoteField_ForQuoteRef_len);        
        strncpy(self->data.ForQuoteRef, ForQuoteField_ForQuoteRef, sizeof(self->data.ForQuoteRef) );
        ForQuoteField_ForQuoteRef = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( ForQuoteField_UserID != NULL ) {
        if(ForQuoteField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", ForQuoteField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, ForQuoteField_UserID, ForQuoteField_UserID_len);        
        strncpy(self->data.UserID, ForQuoteField_UserID, sizeof(self->data.UserID) );
        ForQuoteField_UserID = NULL;
    }
            
    ///本地询价编号
    // TThostFtdcOrderLocalIDType char[13]
    if( ForQuoteField_ForQuoteLocalID != NULL ) {
        if(ForQuoteField_ForQuoteLocalID_len > (Py_ssize_t)sizeof(self->data.ForQuoteLocalID)) {
            PyErr_Format(PyExc_ValueError, "ForQuoteLocalID too long: length=%zd (max allowed is %zd)", ForQuoteField_ForQuoteLocalID_len, (Py_ssize_t)sizeof(self->data.ForQuoteLocalID));
            return -1;
        }
        // memset(self->data.ForQuoteLocalID, 0, sizeof(self->data.ForQuoteLocalID));
        // memcpy(self->data.ForQuoteLocalID, ForQuoteField_ForQuoteLocalID, ForQuoteField_ForQuoteLocalID_len);        
        strncpy(self->data.ForQuoteLocalID, ForQuoteField_ForQuoteLocalID, sizeof(self->data.ForQuoteLocalID) );
        ForQuoteField_ForQuoteLocalID = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( ForQuoteField_ExchangeID != NULL ) {
        if(ForQuoteField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", ForQuoteField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, ForQuoteField_ExchangeID, ForQuoteField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, ForQuoteField_ExchangeID, sizeof(self->data.ExchangeID) );
        ForQuoteField_ExchangeID = NULL;
    }
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    if( ForQuoteField_ParticipantID != NULL ) {
        if(ForQuoteField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", ForQuoteField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
            return -1;
        }
        // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
        // memcpy(self->data.ParticipantID, ForQuoteField_ParticipantID, ForQuoteField_ParticipantID_len);        
        strncpy(self->data.ParticipantID, ForQuoteField_ParticipantID, sizeof(self->data.ParticipantID) );
        ForQuoteField_ParticipantID = NULL;
    }
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    if( ForQuoteField_ClientID != NULL ) {
        if(ForQuoteField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", ForQuoteField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
            return -1;
        }
        // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
        // memcpy(self->data.ClientID, ForQuoteField_ClientID, ForQuoteField_ClientID_len);        
        strncpy(self->data.ClientID, ForQuoteField_ClientID, sizeof(self->data.ClientID) );
        ForQuoteField_ClientID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    if( ForQuoteField_reserve2 != NULL ) {
        if(ForQuoteField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", ForQuoteField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
            return -1;
        }
        // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
        // memcpy(self->data.reserve2, ForQuoteField_reserve2, ForQuoteField_reserve2_len);        
        strncpy(self->data.reserve2, ForQuoteField_reserve2, sizeof(self->data.reserve2) );
        ForQuoteField_reserve2 = NULL;
    }
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    if( ForQuoteField_TraderID != NULL ) {
        if(ForQuoteField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", ForQuoteField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
            return -1;
        }
        // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
        // memcpy(self->data.TraderID, ForQuoteField_TraderID, ForQuoteField_TraderID_len);        
        strncpy(self->data.TraderID, ForQuoteField_TraderID, sizeof(self->data.TraderID) );
        ForQuoteField_TraderID = NULL;
    }
            
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = ForQuoteField_InstallID;
        
    ///报单日期
    // TThostFtdcDateType char[9]
    if( ForQuoteField_InsertDate != NULL ) {
        if(ForQuoteField_InsertDate_len > (Py_ssize_t)sizeof(self->data.InsertDate)) {
            PyErr_Format(PyExc_ValueError, "InsertDate too long: length=%zd (max allowed is %zd)", ForQuoteField_InsertDate_len, (Py_ssize_t)sizeof(self->data.InsertDate));
            return -1;
        }
        // memset(self->data.InsertDate, 0, sizeof(self->data.InsertDate));
        // memcpy(self->data.InsertDate, ForQuoteField_InsertDate, ForQuoteField_InsertDate_len);        
        strncpy(self->data.InsertDate, ForQuoteField_InsertDate, sizeof(self->data.InsertDate) );
        ForQuoteField_InsertDate = NULL;
    }
            
    ///插入时间
    // TThostFtdcTimeType char[9]
    if( ForQuoteField_InsertTime != NULL ) {
        if(ForQuoteField_InsertTime_len > (Py_ssize_t)sizeof(self->data.InsertTime)) {
            PyErr_Format(PyExc_ValueError, "InsertTime too long: length=%zd (max allowed is %zd)", ForQuoteField_InsertTime_len, (Py_ssize_t)sizeof(self->data.InsertTime));
            return -1;
        }
        // memset(self->data.InsertTime, 0, sizeof(self->data.InsertTime));
        // memcpy(self->data.InsertTime, ForQuoteField_InsertTime, ForQuoteField_InsertTime_len);        
        strncpy(self->data.InsertTime, ForQuoteField_InsertTime, sizeof(self->data.InsertTime) );
        ForQuoteField_InsertTime = NULL;
    }
            
    ///询价状态
    // TThostFtdcForQuoteStatusType char
    self->data.ForQuoteStatus = ForQuoteField_ForQuoteStatus;
            
    ///前置编号
    // TThostFtdcFrontIDType int
    self->data.FrontID = ForQuoteField_FrontID;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    self->data.SessionID = ForQuoteField_SessionID;
        
    ///状态信息
    // TThostFtdcErrorMsgType char[81]
    if( ForQuoteField_StatusMsg != NULL ) {
        if(ForQuoteField_StatusMsg_len > (Py_ssize_t)sizeof(self->data.StatusMsg)) {
            PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is %zd)", ForQuoteField_StatusMsg_len, (Py_ssize_t)sizeof(self->data.StatusMsg));
            return -1;
        }
        // memset(self->data.StatusMsg, 0, sizeof(self->data.StatusMsg));
        // memcpy(self->data.StatusMsg, ForQuoteField_StatusMsg, ForQuoteField_StatusMsg_len);        
        strncpy(self->data.StatusMsg, ForQuoteField_StatusMsg, sizeof(self->data.StatusMsg) );
        ForQuoteField_StatusMsg = NULL;
    }
            
    ///操作用户代码
    // TThostFtdcUserIDType char[16]
    if( ForQuoteField_ActiveUserID != NULL ) {
        if(ForQuoteField_ActiveUserID_len > (Py_ssize_t)sizeof(self->data.ActiveUserID)) {
            PyErr_Format(PyExc_ValueError, "ActiveUserID too long: length=%zd (max allowed is %zd)", ForQuoteField_ActiveUserID_len, (Py_ssize_t)sizeof(self->data.ActiveUserID));
            return -1;
        }
        // memset(self->data.ActiveUserID, 0, sizeof(self->data.ActiveUserID));
        // memcpy(self->data.ActiveUserID, ForQuoteField_ActiveUserID, ForQuoteField_ActiveUserID_len);        
        strncpy(self->data.ActiveUserID, ForQuoteField_ActiveUserID, sizeof(self->data.ActiveUserID) );
        ForQuoteField_ActiveUserID = NULL;
    }
            
    ///经纪公司询价编号
    // TThostFtdcSequenceNoType int
    self->data.BrokerForQutoSeq = ForQuoteField_BrokerForQutoSeq;
        
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( ForQuoteField_InvestUnitID != NULL ) {
        if(ForQuoteField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", ForQuoteField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, ForQuoteField_InvestUnitID, ForQuoteField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, ForQuoteField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        ForQuoteField_InvestUnitID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    if( ForQuoteField_reserve3 != NULL ) {
        if(ForQuoteField_reserve3_len > (Py_ssize_t)sizeof(self->data.reserve3)) {
            PyErr_Format(PyExc_ValueError, "reserve3 too long: length=%zd (max allowed is %zd)", ForQuoteField_reserve3_len, (Py_ssize_t)sizeof(self->data.reserve3));
            return -1;
        }
        // memset(self->data.reserve3, 0, sizeof(self->data.reserve3));
        // memcpy(self->data.reserve3, ForQuoteField_reserve3, ForQuoteField_reserve3_len);        
        strncpy(self->data.reserve3, ForQuoteField_reserve3, sizeof(self->data.reserve3) );
        ForQuoteField_reserve3 = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( ForQuoteField_MacAddress != NULL ) {
        if(ForQuoteField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", ForQuoteField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, ForQuoteField_MacAddress, ForQuoteField_MacAddress_len);        
        strncpy(self->data.MacAddress, ForQuoteField_MacAddress, sizeof(self->data.MacAddress) );
        ForQuoteField_MacAddress = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( ForQuoteField_InstrumentID != NULL ) {
        if(ForQuoteField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", ForQuoteField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, ForQuoteField_InstrumentID, ForQuoteField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, ForQuoteField_InstrumentID, sizeof(self->data.InstrumentID) );
        ForQuoteField_InstrumentID = NULL;
    }
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    if( ForQuoteField_ExchangeInstID != NULL ) {
        if(ForQuoteField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", ForQuoteField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
            return -1;
        }
        // memset(self->data.ExchangeInstID, 0, sizeof(self->data.ExchangeInstID));
        // memcpy(self->data.ExchangeInstID, ForQuoteField_ExchangeInstID, ForQuoteField_ExchangeInstID_len);        
        strncpy(self->data.ExchangeInstID, ForQuoteField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
        ForQuoteField_ExchangeInstID = NULL;
    }
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( ForQuoteField_IPAddress != NULL ) {
        if(ForQuoteField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", ForQuoteField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, ForQuoteField_IPAddress, ForQuoteField_IPAddress_len);        
        strncpy(self->data.IPAddress, ForQuoteField_IPAddress, sizeof(self->data.IPAddress) );
        ForQuoteField_IPAddress = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcForQuoteField_dealloc(PyCThostFtdcForQuoteField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcForQuoteField_repr(PyCThostFtdcForQuoteField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:y,s:y,s:c,s:i,s:i,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:s,s:s,s:c,s:i,s:i,s:s,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"ForQuoteRef", self->data.ForQuoteRef//, (Py_ssize_t)sizeof(self->data.ForQuoteRef) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"ForQuoteLocalID", self->data.ForQuoteLocalID//, (Py_ssize_t)sizeof(self->data.ForQuoteLocalID) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"ParticipantID", self->data.ParticipantID//, (Py_ssize_t)sizeof(self->data.ParticipantID) 
        ,"ClientID", self->data.ClientID//, (Py_ssize_t)sizeof(self->data.ClientID) 
        ,"reserve2", self->data.reserve2//, (Py_ssize_t)sizeof(self->data.reserve2) 
        ,"TraderID", self->data.TraderID//, (Py_ssize_t)sizeof(self->data.TraderID) 
        ,"InstallID", self->data.InstallID 
        ,"InsertDate", self->data.InsertDate//, (Py_ssize_t)sizeof(self->data.InsertDate) 
        ,"InsertTime", self->data.InsertTime//, (Py_ssize_t)sizeof(self->data.InsertTime) 
        ,"ForQuoteStatus", self->data.ForQuoteStatus 
        ,"FrontID", self->data.FrontID 
        ,"SessionID", self->data.SessionID 
        ,"StatusMsg", self->data.StatusMsg//, (Py_ssize_t)sizeof(self->data.StatusMsg) 
        ,"ActiveUserID", self->data.ActiveUserID//, (Py_ssize_t)sizeof(self->data.ActiveUserID) 
        ,"BrokerForQutoSeq", self->data.BrokerForQutoSeq 
        ,"InvestUnitID", self->data.InvestUnitID//, (Py_ssize_t)sizeof(self->data.InvestUnitID) 
        ,"reserve3", self->data.reserve3//, (Py_ssize_t)sizeof(self->data.reserve3) 
        ,"MacAddress", self->data.MacAddress//, (Py_ssize_t)sizeof(self->data.MacAddress) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"ExchangeInstID", self->data.ExchangeInstID//, (Py_ssize_t)sizeof(self->data.ExchangeInstID) 
        ,"IPAddress", self->data.IPAddress//, (Py_ssize_t)sizeof(self->data.IPAddress) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcForQuoteField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcForQuoteField_get_BrokerID(PyCThostFtdcForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcForQuoteField_set_BrokerID(PyCThostFtdcForQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcForQuoteField_get_InvestorID(PyCThostFtdcForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcForQuoteField_set_InvestorID(PyCThostFtdcForQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcForQuoteField_get_reserve1(PyCThostFtdcForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcForQuoteField_set_reserve1(PyCThostFtdcForQuoteField *self, PyObject* val, void *closure) {
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
            
///询价引用
// TThostFtdcOrderRefType char[13]
static PyObject *PyCThostFtdcForQuoteField_get_ForQuoteRef(PyCThostFtdcForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ForQuoteRef, (Py_ssize_t)sizeof(self->data.ForQuoteRef));
    return PyBytes_FromString(self->data.ForQuoteRef);
}

///询价引用
// TThostFtdcOrderRefType char[13]
static int PyCThostFtdcForQuoteField_set_ForQuoteRef(PyCThostFtdcForQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ForQuoteRef Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ForQuoteRef)) {
        PyErr_SetString(PyExc_ValueError, "ForQuoteRef must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.ForQuoteRef, 0, sizeof(self->data.ForQuoteRef));
    // memcpy(self->data.ForQuoteRef, buf, len);
    strncpy(self->data.ForQuoteRef, buf, sizeof(self->data.ForQuoteRef));
    return 0;
}
            
///用户代码
// TThostFtdcUserIDType char[16]
static PyObject *PyCThostFtdcForQuoteField_get_UserID(PyCThostFtdcForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcForQuoteField_set_UserID(PyCThostFtdcForQuoteField *self, PyObject* val, void *closure) {
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
            
///本地询价编号
// TThostFtdcOrderLocalIDType char[13]
static PyObject *PyCThostFtdcForQuoteField_get_ForQuoteLocalID(PyCThostFtdcForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ForQuoteLocalID, (Py_ssize_t)sizeof(self->data.ForQuoteLocalID));
    return PyBytes_FromString(self->data.ForQuoteLocalID);
}

///本地询价编号
// TThostFtdcOrderLocalIDType char[13]
static int PyCThostFtdcForQuoteField_set_ForQuoteLocalID(PyCThostFtdcForQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ForQuoteLocalID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ForQuoteLocalID)) {
        PyErr_SetString(PyExc_ValueError, "ForQuoteLocalID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.ForQuoteLocalID, 0, sizeof(self->data.ForQuoteLocalID));
    // memcpy(self->data.ForQuoteLocalID, buf, len);
    strncpy(self->data.ForQuoteLocalID, buf, sizeof(self->data.ForQuoteLocalID));
    return 0;
}
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcForQuoteField_get_ExchangeID(PyCThostFtdcForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcForQuoteField_set_ExchangeID(PyCThostFtdcForQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcForQuoteField_get_ParticipantID(PyCThostFtdcForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParticipantID, (Py_ssize_t)sizeof(self->data.ParticipantID));
    return PyBytes_FromString(self->data.ParticipantID);
}

///会员代码
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcForQuoteField_set_ParticipantID(PyCThostFtdcForQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcForQuoteField_get_ClientID(PyCThostFtdcForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientID, (Py_ssize_t)sizeof(self->data.ClientID));
    return PyBytes_FromString(self->data.ClientID);
}

///客户代码
// TThostFtdcClientIDType char[11]
static int PyCThostFtdcForQuoteField_set_ClientID(PyCThostFtdcForQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcForQuoteField_get_reserve2(PyCThostFtdcForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve2, (Py_ssize_t)sizeof(self->data.reserve2));
    return PyBytes_FromString(self->data.reserve2);
}

///保留的无效字段
// TThostFtdcOldExchangeInstIDType char[31]
static int PyCThostFtdcForQuoteField_set_reserve2(PyCThostFtdcForQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcForQuoteField_get_TraderID(PyCThostFtdcForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TraderID, (Py_ssize_t)sizeof(self->data.TraderID));
    return PyBytes_FromString(self->data.TraderID);
}

///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static int PyCThostFtdcForQuoteField_set_TraderID(PyCThostFtdcForQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcForQuoteField_get_InstallID(PyCThostFtdcForQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcForQuoteField_set_InstallID(PyCThostFtdcForQuoteField *self, PyObject* val, void *closure) {
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
        
///报单日期
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcForQuoteField_get_InsertDate(PyCThostFtdcForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InsertDate, (Py_ssize_t)sizeof(self->data.InsertDate));
    return PyBytes_FromString(self->data.InsertDate);
}

///报单日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcForQuoteField_set_InsertDate(PyCThostFtdcForQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcForQuoteField_get_InsertTime(PyCThostFtdcForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InsertTime, (Py_ssize_t)sizeof(self->data.InsertTime));
    return PyBytes_FromString(self->data.InsertTime);
}

///插入时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcForQuoteField_set_InsertTime(PyCThostFtdcForQuoteField *self, PyObject* val, void *closure) {
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
            
///询价状态
// TThostFtdcForQuoteStatusType char
static PyObject *PyCThostFtdcForQuoteField_get_ForQuoteStatus(PyCThostFtdcForQuoteField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ForQuoteStatus), 1);
}

///询价状态
// TThostFtdcForQuoteStatusType char
static int PyCThostFtdcForQuoteField_set_ForQuoteStatus(PyCThostFtdcForQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ForQuoteStatus Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ForQuoteStatus)) {
        PyErr_SetString(PyExc_ValueError, "ForQuoteStatus must be equal 1 bytes");
        return -1;
    }
    self->data.ForQuoteStatus = *buf;
    return 0;
}
            
///前置编号
// TThostFtdcFrontIDType int
static PyObject *PyCThostFtdcForQuoteField_get_FrontID(PyCThostFtdcForQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FrontID);
#else
    return PyInt_FromLong(self->data.FrontID);
#endif
}

///前置编号
// TThostFtdcFrontIDType int
static int PyCThostFtdcForQuoteField_set_FrontID(PyCThostFtdcForQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcForQuoteField_get_SessionID(PyCThostFtdcForQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话编号
// TThostFtdcSessionIDType int
static int PyCThostFtdcForQuoteField_set_SessionID(PyCThostFtdcForQuoteField *self, PyObject* val, void *closure) {
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
        
///状态信息
// TThostFtdcErrorMsgType char[81]
static PyObject *PyCThostFtdcForQuoteField_get_StatusMsg(PyCThostFtdcForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.StatusMsg, (Py_ssize_t)sizeof(self->data.StatusMsg));
    return PyBytes_FromString(self->data.StatusMsg);
}

///状态信息
// TThostFtdcErrorMsgType char[81]
static int PyCThostFtdcForQuoteField_set_StatusMsg(PyCThostFtdcForQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcForQuoteField_get_ActiveUserID(PyCThostFtdcForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActiveUserID, (Py_ssize_t)sizeof(self->data.ActiveUserID));
    return PyBytes_FromString(self->data.ActiveUserID);
}

///操作用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcForQuoteField_set_ActiveUserID(PyCThostFtdcForQuoteField *self, PyObject* val, void *closure) {
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
            
///经纪公司询价编号
// TThostFtdcSequenceNoType int
static PyObject *PyCThostFtdcForQuoteField_get_BrokerForQutoSeq(PyCThostFtdcForQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.BrokerForQutoSeq);
#else
    return PyInt_FromLong(self->data.BrokerForQutoSeq);
#endif
}

///经纪公司询价编号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcForQuoteField_set_BrokerForQutoSeq(PyCThostFtdcForQuoteField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BrokerForQutoSeq Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BrokerForQutoSeq Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the BrokerForQutoSeq value out of range for C int");
        return -1;
    }
    self->data.BrokerForQutoSeq = (int)buf;
    return 0;
}
        
///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static PyObject *PyCThostFtdcForQuoteField_get_InvestUnitID(PyCThostFtdcForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcForQuoteField_set_InvestUnitID(PyCThostFtdcForQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcForQuoteField_get_reserve3(PyCThostFtdcForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve3, (Py_ssize_t)sizeof(self->data.reserve3));
    return PyBytes_FromString(self->data.reserve3);
}

///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static int PyCThostFtdcForQuoteField_set_reserve3(PyCThostFtdcForQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcForQuoteField_get_MacAddress(PyCThostFtdcForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcForQuoteField_set_MacAddress(PyCThostFtdcForQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcForQuoteField_get_InstrumentID(PyCThostFtdcForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcForQuoteField_set_InstrumentID(PyCThostFtdcForQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcForQuoteField_get_ExchangeInstID(PyCThostFtdcForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeInstID, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
    return PyBytes_FromString(self->data.ExchangeInstID);
}

///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static int PyCThostFtdcForQuoteField_set_ExchangeInstID(PyCThostFtdcForQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcForQuoteField_get_IPAddress(PyCThostFtdcForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcForQuoteField_set_IPAddress(PyCThostFtdcForQuoteField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcForQuoteField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcForQuoteField_get_BrokerID, (setter)PyCThostFtdcForQuoteField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcForQuoteField_get_InvestorID, (setter)PyCThostFtdcForQuoteField_set_InvestorID, (char *)"InvestorID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcForQuoteField_get_reserve1, (setter)PyCThostFtdcForQuoteField_set_reserve1, (char *)"reserve1", NULL},
    ///询价引用 
    {(char *)"ForQuoteRef", (getter)PyCThostFtdcForQuoteField_get_ForQuoteRef, (setter)PyCThostFtdcForQuoteField_set_ForQuoteRef, (char *)"ForQuoteRef", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcForQuoteField_get_UserID, (setter)PyCThostFtdcForQuoteField_set_UserID, (char *)"UserID", NULL},
    ///本地询价编号 
    {(char *)"ForQuoteLocalID", (getter)PyCThostFtdcForQuoteField_get_ForQuoteLocalID, (setter)PyCThostFtdcForQuoteField_set_ForQuoteLocalID, (char *)"ForQuoteLocalID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcForQuoteField_get_ExchangeID, (setter)PyCThostFtdcForQuoteField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///会员代码 
    {(char *)"ParticipantID", (getter)PyCThostFtdcForQuoteField_get_ParticipantID, (setter)PyCThostFtdcForQuoteField_set_ParticipantID, (char *)"ParticipantID", NULL},
    ///客户代码 
    {(char *)"ClientID", (getter)PyCThostFtdcForQuoteField_get_ClientID, (setter)PyCThostFtdcForQuoteField_set_ClientID, (char *)"ClientID", NULL},
    ///保留的无效字段 
    {(char *)"reserve2", (getter)PyCThostFtdcForQuoteField_get_reserve2, (setter)PyCThostFtdcForQuoteField_set_reserve2, (char *)"reserve2", NULL},
    ///交易所交易员代码 
    {(char *)"TraderID", (getter)PyCThostFtdcForQuoteField_get_TraderID, (setter)PyCThostFtdcForQuoteField_set_TraderID, (char *)"TraderID", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcForQuoteField_get_InstallID, (setter)PyCThostFtdcForQuoteField_set_InstallID, (char *)"InstallID", NULL},
    ///报单日期 
    {(char *)"InsertDate", (getter)PyCThostFtdcForQuoteField_get_InsertDate, (setter)PyCThostFtdcForQuoteField_set_InsertDate, (char *)"InsertDate", NULL},
    ///插入时间 
    {(char *)"InsertTime", (getter)PyCThostFtdcForQuoteField_get_InsertTime, (setter)PyCThostFtdcForQuoteField_set_InsertTime, (char *)"InsertTime", NULL},
    ///询价状态 
    {(char *)"ForQuoteStatus", (getter)PyCThostFtdcForQuoteField_get_ForQuoteStatus, (setter)PyCThostFtdcForQuoteField_set_ForQuoteStatus, (char *)"ForQuoteStatus", NULL},
    ///前置编号 
    {(char *)"FrontID", (getter)PyCThostFtdcForQuoteField_get_FrontID, (setter)PyCThostFtdcForQuoteField_set_FrontID, (char *)"FrontID", NULL},
    ///会话编号 
    {(char *)"SessionID", (getter)PyCThostFtdcForQuoteField_get_SessionID, (setter)PyCThostFtdcForQuoteField_set_SessionID, (char *)"SessionID", NULL},
    ///状态信息 
    {(char *)"StatusMsg", (getter)PyCThostFtdcForQuoteField_get_StatusMsg, (setter)PyCThostFtdcForQuoteField_set_StatusMsg, (char *)"StatusMsg", NULL},
    ///操作用户代码 
    {(char *)"ActiveUserID", (getter)PyCThostFtdcForQuoteField_get_ActiveUserID, (setter)PyCThostFtdcForQuoteField_set_ActiveUserID, (char *)"ActiveUserID", NULL},
    ///经纪公司询价编号 
    {(char *)"BrokerForQutoSeq", (getter)PyCThostFtdcForQuoteField_get_BrokerForQutoSeq, (setter)PyCThostFtdcForQuoteField_set_BrokerForQutoSeq, (char *)"BrokerForQutoSeq", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcForQuoteField_get_InvestUnitID, (setter)PyCThostFtdcForQuoteField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///保留的无效字段 
    {(char *)"reserve3", (getter)PyCThostFtdcForQuoteField_get_reserve3, (setter)PyCThostFtdcForQuoteField_set_reserve3, (char *)"reserve3", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcForQuoteField_get_MacAddress, (setter)PyCThostFtdcForQuoteField_set_MacAddress, (char *)"MacAddress", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcForQuoteField_get_InstrumentID, (setter)PyCThostFtdcForQuoteField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///合约在交易所的代码 
    {(char *)"ExchangeInstID", (getter)PyCThostFtdcForQuoteField_get_ExchangeInstID, (setter)PyCThostFtdcForQuoteField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcForQuoteField_get_IPAddress, (setter)PyCThostFtdcForQuoteField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcForQuoteFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcForQuoteField",	/* tp_name */
	sizeof(PyCThostFtdcForQuoteField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcForQuoteField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcForQuoteField_repr,   /* tp_repr */
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
	"CThostFtdcForQuoteField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcForQuoteField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcForQuoteField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcForQuoteField_new,       /* tp_new */
};

int PyCThostFtdcForQuoteFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcForQuoteField  */
	if (PyType_Ready(&PyCThostFtdcForQuoteFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcForQuoteField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcForQuoteFieldType);
    if( PyModule_AddObject(module, "CThostFtdcForQuoteField", (PyObject *)&PyCThostFtdcForQuoteFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcForQuoteField to module");
        Py_DECREF(&PyCThostFtdcForQuoteFieldType);
		return -1;
    }

    return 0;
}
