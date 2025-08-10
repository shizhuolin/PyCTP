
#include "PyCThostFtdcOptionSelfCloseActionField.h"

///期权自对冲操作

static PyObject *PyCThostFtdcOptionSelfCloseActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcOptionSelfCloseActionField *self = (PyCThostFtdcOptionSelfCloseActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcOptionSelfCloseActionField_init(PyCThostFtdcOptionSelfCloseActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "OptionSelfCloseActionRef", "OptionSelfCloseRef", "RequestID", "FrontID", "SessionID", "ExchangeID", "OptionSelfCloseSysID", "ActionFlag", "ActionDate", "ActionTime", "TraderID", "InstallID", "OptionSelfCloseLocalID", "ActionLocalID", "ParticipantID", "ClientID", "BusinessUnit", "OrderActionStatus", "UserID", "StatusMsg", "reserve1", "BranchID", "InvestUnitID", "reserve2", "MacAddress", "InstrumentID", "IPAddress",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *OptionSelfCloseActionField_BrokerID = NULL;
    Py_ssize_t OptionSelfCloseActionField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *OptionSelfCloseActionField_InvestorID = NULL;
    Py_ssize_t OptionSelfCloseActionField_InvestorID_len = 0;
            
    ///期权自对冲操作引用
    // TThostFtdcOrderActionRefType int
    int OptionSelfCloseActionField_OptionSelfCloseActionRef = 0;
        
    ///期权自对冲引用
    // TThostFtdcOrderRefType char[13]
    const char *OptionSelfCloseActionField_OptionSelfCloseRef = NULL;
    Py_ssize_t OptionSelfCloseActionField_OptionSelfCloseRef_len = 0;
            
    ///请求编号
    // TThostFtdcRequestIDType int
    int OptionSelfCloseActionField_RequestID = 0;
        
    ///前置编号
    // TThostFtdcFrontIDType int
    int OptionSelfCloseActionField_FrontID = 0;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    int OptionSelfCloseActionField_SessionID = 0;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *OptionSelfCloseActionField_ExchangeID = NULL;
    Py_ssize_t OptionSelfCloseActionField_ExchangeID_len = 0;
            
    ///期权自对冲操作编号
    // TThostFtdcOrderSysIDType char[21]
    const char *OptionSelfCloseActionField_OptionSelfCloseSysID = NULL;
    Py_ssize_t OptionSelfCloseActionField_OptionSelfCloseSysID_len = 0;
            
    ///操作标志
    // TThostFtdcActionFlagType char
    char OptionSelfCloseActionField_ActionFlag = 0;
            
    ///操作日期
    // TThostFtdcDateType char[9]
    const char *OptionSelfCloseActionField_ActionDate = NULL;
    Py_ssize_t OptionSelfCloseActionField_ActionDate_len = 0;
            
    ///操作时间
    // TThostFtdcTimeType char[9]
    const char *OptionSelfCloseActionField_ActionTime = NULL;
    Py_ssize_t OptionSelfCloseActionField_ActionTime_len = 0;
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    const char *OptionSelfCloseActionField_TraderID = NULL;
    Py_ssize_t OptionSelfCloseActionField_TraderID_len = 0;
            
    ///安装编号
    // TThostFtdcInstallIDType int
    int OptionSelfCloseActionField_InstallID = 0;
        
    ///本地期权自对冲编号
    // TThostFtdcOrderLocalIDType char[13]
    const char *OptionSelfCloseActionField_OptionSelfCloseLocalID = NULL;
    Py_ssize_t OptionSelfCloseActionField_OptionSelfCloseLocalID_len = 0;
            
    ///操作本地编号
    // TThostFtdcOrderLocalIDType char[13]
    const char *OptionSelfCloseActionField_ActionLocalID = NULL;
    Py_ssize_t OptionSelfCloseActionField_ActionLocalID_len = 0;
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    const char *OptionSelfCloseActionField_ParticipantID = NULL;
    Py_ssize_t OptionSelfCloseActionField_ParticipantID_len = 0;
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    const char *OptionSelfCloseActionField_ClientID = NULL;
    Py_ssize_t OptionSelfCloseActionField_ClientID_len = 0;
            
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    const char *OptionSelfCloseActionField_BusinessUnit = NULL;
    Py_ssize_t OptionSelfCloseActionField_BusinessUnit_len = 0;
            
    ///报单操作状态
    // TThostFtdcOrderActionStatusType char
    char OptionSelfCloseActionField_OrderActionStatus = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *OptionSelfCloseActionField_UserID = NULL;
    Py_ssize_t OptionSelfCloseActionField_UserID_len = 0;
            
    ///状态信息
    // TThostFtdcErrorMsgType char[81]
    const char *OptionSelfCloseActionField_StatusMsg = NULL;
    Py_ssize_t OptionSelfCloseActionField_StatusMsg_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *OptionSelfCloseActionField_reserve1 = NULL;
    Py_ssize_t OptionSelfCloseActionField_reserve1_len = 0;
            
    ///营业部编号
    // TThostFtdcBranchIDType char[9]
    const char *OptionSelfCloseActionField_BranchID = NULL;
    Py_ssize_t OptionSelfCloseActionField_BranchID_len = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *OptionSelfCloseActionField_InvestUnitID = NULL;
    Py_ssize_t OptionSelfCloseActionField_InvestUnitID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    const char *OptionSelfCloseActionField_reserve2 = NULL;
    Py_ssize_t OptionSelfCloseActionField_reserve2_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *OptionSelfCloseActionField_MacAddress = NULL;
    Py_ssize_t OptionSelfCloseActionField_MacAddress_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *OptionSelfCloseActionField_InstrumentID = NULL;
    Py_ssize_t OptionSelfCloseActionField_InstrumentID_len = 0;
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *OptionSelfCloseActionField_IPAddress = NULL;
    Py_ssize_t OptionSelfCloseActionField_IPAddress_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iy#iiiy#y#cy#y#y#iy#y#y#y#y#cy#y#y#y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#is#iiis#s#cs#s#s#is#s#s#s#s#cs#s#s#s#s#s#s#s#s#", (char **)kwlist
#endif

        , &OptionSelfCloseActionField_BrokerID, &OptionSelfCloseActionField_BrokerID_len 
        , &OptionSelfCloseActionField_InvestorID, &OptionSelfCloseActionField_InvestorID_len 
        , &OptionSelfCloseActionField_OptionSelfCloseActionRef 
        , &OptionSelfCloseActionField_OptionSelfCloseRef, &OptionSelfCloseActionField_OptionSelfCloseRef_len 
        , &OptionSelfCloseActionField_RequestID 
        , &OptionSelfCloseActionField_FrontID 
        , &OptionSelfCloseActionField_SessionID 
        , &OptionSelfCloseActionField_ExchangeID, &OptionSelfCloseActionField_ExchangeID_len 
        , &OptionSelfCloseActionField_OptionSelfCloseSysID, &OptionSelfCloseActionField_OptionSelfCloseSysID_len 
        , &OptionSelfCloseActionField_ActionFlag 
        , &OptionSelfCloseActionField_ActionDate, &OptionSelfCloseActionField_ActionDate_len 
        , &OptionSelfCloseActionField_ActionTime, &OptionSelfCloseActionField_ActionTime_len 
        , &OptionSelfCloseActionField_TraderID, &OptionSelfCloseActionField_TraderID_len 
        , &OptionSelfCloseActionField_InstallID 
        , &OptionSelfCloseActionField_OptionSelfCloseLocalID, &OptionSelfCloseActionField_OptionSelfCloseLocalID_len 
        , &OptionSelfCloseActionField_ActionLocalID, &OptionSelfCloseActionField_ActionLocalID_len 
        , &OptionSelfCloseActionField_ParticipantID, &OptionSelfCloseActionField_ParticipantID_len 
        , &OptionSelfCloseActionField_ClientID, &OptionSelfCloseActionField_ClientID_len 
        , &OptionSelfCloseActionField_BusinessUnit, &OptionSelfCloseActionField_BusinessUnit_len 
        , &OptionSelfCloseActionField_OrderActionStatus 
        , &OptionSelfCloseActionField_UserID, &OptionSelfCloseActionField_UserID_len 
        , &OptionSelfCloseActionField_StatusMsg, &OptionSelfCloseActionField_StatusMsg_len 
        , &OptionSelfCloseActionField_reserve1, &OptionSelfCloseActionField_reserve1_len 
        , &OptionSelfCloseActionField_BranchID, &OptionSelfCloseActionField_BranchID_len 
        , &OptionSelfCloseActionField_InvestUnitID, &OptionSelfCloseActionField_InvestUnitID_len 
        , &OptionSelfCloseActionField_reserve2, &OptionSelfCloseActionField_reserve2_len 
        , &OptionSelfCloseActionField_MacAddress, &OptionSelfCloseActionField_MacAddress_len 
        , &OptionSelfCloseActionField_InstrumentID, &OptionSelfCloseActionField_InstrumentID_len 
        , &OptionSelfCloseActionField_IPAddress, &OptionSelfCloseActionField_IPAddress_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( OptionSelfCloseActionField_BrokerID != NULL ) {
        if(OptionSelfCloseActionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", OptionSelfCloseActionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, OptionSelfCloseActionField_BrokerID, OptionSelfCloseActionField_BrokerID_len);        
        strncpy(self->data.BrokerID, OptionSelfCloseActionField_BrokerID, sizeof(self->data.BrokerID) );
        OptionSelfCloseActionField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( OptionSelfCloseActionField_InvestorID != NULL ) {
        if(OptionSelfCloseActionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", OptionSelfCloseActionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, OptionSelfCloseActionField_InvestorID, OptionSelfCloseActionField_InvestorID_len);        
        strncpy(self->data.InvestorID, OptionSelfCloseActionField_InvestorID, sizeof(self->data.InvestorID) );
        OptionSelfCloseActionField_InvestorID = NULL;
    }
            
    ///期权自对冲操作引用
    // TThostFtdcOrderActionRefType int
    self->data.OptionSelfCloseActionRef = OptionSelfCloseActionField_OptionSelfCloseActionRef;
        
    ///期权自对冲引用
    // TThostFtdcOrderRefType char[13]
    if( OptionSelfCloseActionField_OptionSelfCloseRef != NULL ) {
        if(OptionSelfCloseActionField_OptionSelfCloseRef_len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseRef)) {
            PyErr_Format(PyExc_ValueError, "OptionSelfCloseRef too long: length=%zd (max allowed is %zd)", OptionSelfCloseActionField_OptionSelfCloseRef_len, (Py_ssize_t)sizeof(self->data.OptionSelfCloseRef));
            return -1;
        }
        // memset(self->data.OptionSelfCloseRef, 0, sizeof(self->data.OptionSelfCloseRef));
        // memcpy(self->data.OptionSelfCloseRef, OptionSelfCloseActionField_OptionSelfCloseRef, OptionSelfCloseActionField_OptionSelfCloseRef_len);        
        strncpy(self->data.OptionSelfCloseRef, OptionSelfCloseActionField_OptionSelfCloseRef, sizeof(self->data.OptionSelfCloseRef) );
        OptionSelfCloseActionField_OptionSelfCloseRef = NULL;
    }
            
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = OptionSelfCloseActionField_RequestID;
        
    ///前置编号
    // TThostFtdcFrontIDType int
    self->data.FrontID = OptionSelfCloseActionField_FrontID;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    self->data.SessionID = OptionSelfCloseActionField_SessionID;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( OptionSelfCloseActionField_ExchangeID != NULL ) {
        if(OptionSelfCloseActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", OptionSelfCloseActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, OptionSelfCloseActionField_ExchangeID, OptionSelfCloseActionField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, OptionSelfCloseActionField_ExchangeID, sizeof(self->data.ExchangeID) );
        OptionSelfCloseActionField_ExchangeID = NULL;
    }
            
    ///期权自对冲操作编号
    // TThostFtdcOrderSysIDType char[21]
    if( OptionSelfCloseActionField_OptionSelfCloseSysID != NULL ) {
        if(OptionSelfCloseActionField_OptionSelfCloseSysID_len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseSysID)) {
            PyErr_Format(PyExc_ValueError, "OptionSelfCloseSysID too long: length=%zd (max allowed is %zd)", OptionSelfCloseActionField_OptionSelfCloseSysID_len, (Py_ssize_t)sizeof(self->data.OptionSelfCloseSysID));
            return -1;
        }
        // memset(self->data.OptionSelfCloseSysID, 0, sizeof(self->data.OptionSelfCloseSysID));
        // memcpy(self->data.OptionSelfCloseSysID, OptionSelfCloseActionField_OptionSelfCloseSysID, OptionSelfCloseActionField_OptionSelfCloseSysID_len);        
        strncpy(self->data.OptionSelfCloseSysID, OptionSelfCloseActionField_OptionSelfCloseSysID, sizeof(self->data.OptionSelfCloseSysID) );
        OptionSelfCloseActionField_OptionSelfCloseSysID = NULL;
    }
            
    ///操作标志
    // TThostFtdcActionFlagType char
    self->data.ActionFlag = OptionSelfCloseActionField_ActionFlag;
            
    ///操作日期
    // TThostFtdcDateType char[9]
    if( OptionSelfCloseActionField_ActionDate != NULL ) {
        if(OptionSelfCloseActionField_ActionDate_len > (Py_ssize_t)sizeof(self->data.ActionDate)) {
            PyErr_Format(PyExc_ValueError, "ActionDate too long: length=%zd (max allowed is %zd)", OptionSelfCloseActionField_ActionDate_len, (Py_ssize_t)sizeof(self->data.ActionDate));
            return -1;
        }
        // memset(self->data.ActionDate, 0, sizeof(self->data.ActionDate));
        // memcpy(self->data.ActionDate, OptionSelfCloseActionField_ActionDate, OptionSelfCloseActionField_ActionDate_len);        
        strncpy(self->data.ActionDate, OptionSelfCloseActionField_ActionDate, sizeof(self->data.ActionDate) );
        OptionSelfCloseActionField_ActionDate = NULL;
    }
            
    ///操作时间
    // TThostFtdcTimeType char[9]
    if( OptionSelfCloseActionField_ActionTime != NULL ) {
        if(OptionSelfCloseActionField_ActionTime_len > (Py_ssize_t)sizeof(self->data.ActionTime)) {
            PyErr_Format(PyExc_ValueError, "ActionTime too long: length=%zd (max allowed is %zd)", OptionSelfCloseActionField_ActionTime_len, (Py_ssize_t)sizeof(self->data.ActionTime));
            return -1;
        }
        // memset(self->data.ActionTime, 0, sizeof(self->data.ActionTime));
        // memcpy(self->data.ActionTime, OptionSelfCloseActionField_ActionTime, OptionSelfCloseActionField_ActionTime_len);        
        strncpy(self->data.ActionTime, OptionSelfCloseActionField_ActionTime, sizeof(self->data.ActionTime) );
        OptionSelfCloseActionField_ActionTime = NULL;
    }
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    if( OptionSelfCloseActionField_TraderID != NULL ) {
        if(OptionSelfCloseActionField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", OptionSelfCloseActionField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
            return -1;
        }
        // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
        // memcpy(self->data.TraderID, OptionSelfCloseActionField_TraderID, OptionSelfCloseActionField_TraderID_len);        
        strncpy(self->data.TraderID, OptionSelfCloseActionField_TraderID, sizeof(self->data.TraderID) );
        OptionSelfCloseActionField_TraderID = NULL;
    }
            
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = OptionSelfCloseActionField_InstallID;
        
    ///本地期权自对冲编号
    // TThostFtdcOrderLocalIDType char[13]
    if( OptionSelfCloseActionField_OptionSelfCloseLocalID != NULL ) {
        if(OptionSelfCloseActionField_OptionSelfCloseLocalID_len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseLocalID)) {
            PyErr_Format(PyExc_ValueError, "OptionSelfCloseLocalID too long: length=%zd (max allowed is %zd)", OptionSelfCloseActionField_OptionSelfCloseLocalID_len, (Py_ssize_t)sizeof(self->data.OptionSelfCloseLocalID));
            return -1;
        }
        // memset(self->data.OptionSelfCloseLocalID, 0, sizeof(self->data.OptionSelfCloseLocalID));
        // memcpy(self->data.OptionSelfCloseLocalID, OptionSelfCloseActionField_OptionSelfCloseLocalID, OptionSelfCloseActionField_OptionSelfCloseLocalID_len);        
        strncpy(self->data.OptionSelfCloseLocalID, OptionSelfCloseActionField_OptionSelfCloseLocalID, sizeof(self->data.OptionSelfCloseLocalID) );
        OptionSelfCloseActionField_OptionSelfCloseLocalID = NULL;
    }
            
    ///操作本地编号
    // TThostFtdcOrderLocalIDType char[13]
    if( OptionSelfCloseActionField_ActionLocalID != NULL ) {
        if(OptionSelfCloseActionField_ActionLocalID_len > (Py_ssize_t)sizeof(self->data.ActionLocalID)) {
            PyErr_Format(PyExc_ValueError, "ActionLocalID too long: length=%zd (max allowed is %zd)", OptionSelfCloseActionField_ActionLocalID_len, (Py_ssize_t)sizeof(self->data.ActionLocalID));
            return -1;
        }
        // memset(self->data.ActionLocalID, 0, sizeof(self->data.ActionLocalID));
        // memcpy(self->data.ActionLocalID, OptionSelfCloseActionField_ActionLocalID, OptionSelfCloseActionField_ActionLocalID_len);        
        strncpy(self->data.ActionLocalID, OptionSelfCloseActionField_ActionLocalID, sizeof(self->data.ActionLocalID) );
        OptionSelfCloseActionField_ActionLocalID = NULL;
    }
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    if( OptionSelfCloseActionField_ParticipantID != NULL ) {
        if(OptionSelfCloseActionField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", OptionSelfCloseActionField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
            return -1;
        }
        // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
        // memcpy(self->data.ParticipantID, OptionSelfCloseActionField_ParticipantID, OptionSelfCloseActionField_ParticipantID_len);        
        strncpy(self->data.ParticipantID, OptionSelfCloseActionField_ParticipantID, sizeof(self->data.ParticipantID) );
        OptionSelfCloseActionField_ParticipantID = NULL;
    }
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    if( OptionSelfCloseActionField_ClientID != NULL ) {
        if(OptionSelfCloseActionField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", OptionSelfCloseActionField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
            return -1;
        }
        // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
        // memcpy(self->data.ClientID, OptionSelfCloseActionField_ClientID, OptionSelfCloseActionField_ClientID_len);        
        strncpy(self->data.ClientID, OptionSelfCloseActionField_ClientID, sizeof(self->data.ClientID) );
        OptionSelfCloseActionField_ClientID = NULL;
    }
            
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    if( OptionSelfCloseActionField_BusinessUnit != NULL ) {
        if(OptionSelfCloseActionField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", OptionSelfCloseActionField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
            return -1;
        }
        // memset(self->data.BusinessUnit, 0, sizeof(self->data.BusinessUnit));
        // memcpy(self->data.BusinessUnit, OptionSelfCloseActionField_BusinessUnit, OptionSelfCloseActionField_BusinessUnit_len);        
        strncpy(self->data.BusinessUnit, OptionSelfCloseActionField_BusinessUnit, sizeof(self->data.BusinessUnit) );
        OptionSelfCloseActionField_BusinessUnit = NULL;
    }
            
    ///报单操作状态
    // TThostFtdcOrderActionStatusType char
    self->data.OrderActionStatus = OptionSelfCloseActionField_OrderActionStatus;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( OptionSelfCloseActionField_UserID != NULL ) {
        if(OptionSelfCloseActionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", OptionSelfCloseActionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, OptionSelfCloseActionField_UserID, OptionSelfCloseActionField_UserID_len);        
        strncpy(self->data.UserID, OptionSelfCloseActionField_UserID, sizeof(self->data.UserID) );
        OptionSelfCloseActionField_UserID = NULL;
    }
            
    ///状态信息
    // TThostFtdcErrorMsgType char[81]
    if( OptionSelfCloseActionField_StatusMsg != NULL ) {
        if(OptionSelfCloseActionField_StatusMsg_len > (Py_ssize_t)sizeof(self->data.StatusMsg)) {
            PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is %zd)", OptionSelfCloseActionField_StatusMsg_len, (Py_ssize_t)sizeof(self->data.StatusMsg));
            return -1;
        }
        // memset(self->data.StatusMsg, 0, sizeof(self->data.StatusMsg));
        // memcpy(self->data.StatusMsg, OptionSelfCloseActionField_StatusMsg, OptionSelfCloseActionField_StatusMsg_len);        
        strncpy(self->data.StatusMsg, OptionSelfCloseActionField_StatusMsg, sizeof(self->data.StatusMsg) );
        OptionSelfCloseActionField_StatusMsg = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( OptionSelfCloseActionField_reserve1 != NULL ) {
        if(OptionSelfCloseActionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", OptionSelfCloseActionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, OptionSelfCloseActionField_reserve1, OptionSelfCloseActionField_reserve1_len);        
        strncpy(self->data.reserve1, OptionSelfCloseActionField_reserve1, sizeof(self->data.reserve1) );
        OptionSelfCloseActionField_reserve1 = NULL;
    }
            
    ///营业部编号
    // TThostFtdcBranchIDType char[9]
    if( OptionSelfCloseActionField_BranchID != NULL ) {
        if(OptionSelfCloseActionField_BranchID_len > (Py_ssize_t)sizeof(self->data.BranchID)) {
            PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is %zd)", OptionSelfCloseActionField_BranchID_len, (Py_ssize_t)sizeof(self->data.BranchID));
            return -1;
        }
        // memset(self->data.BranchID, 0, sizeof(self->data.BranchID));
        // memcpy(self->data.BranchID, OptionSelfCloseActionField_BranchID, OptionSelfCloseActionField_BranchID_len);        
        strncpy(self->data.BranchID, OptionSelfCloseActionField_BranchID, sizeof(self->data.BranchID) );
        OptionSelfCloseActionField_BranchID = NULL;
    }
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( OptionSelfCloseActionField_InvestUnitID != NULL ) {
        if(OptionSelfCloseActionField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", OptionSelfCloseActionField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, OptionSelfCloseActionField_InvestUnitID, OptionSelfCloseActionField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, OptionSelfCloseActionField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        OptionSelfCloseActionField_InvestUnitID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    if( OptionSelfCloseActionField_reserve2 != NULL ) {
        if(OptionSelfCloseActionField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", OptionSelfCloseActionField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
            return -1;
        }
        // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
        // memcpy(self->data.reserve2, OptionSelfCloseActionField_reserve2, OptionSelfCloseActionField_reserve2_len);        
        strncpy(self->data.reserve2, OptionSelfCloseActionField_reserve2, sizeof(self->data.reserve2) );
        OptionSelfCloseActionField_reserve2 = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( OptionSelfCloseActionField_MacAddress != NULL ) {
        if(OptionSelfCloseActionField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", OptionSelfCloseActionField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, OptionSelfCloseActionField_MacAddress, OptionSelfCloseActionField_MacAddress_len);        
        strncpy(self->data.MacAddress, OptionSelfCloseActionField_MacAddress, sizeof(self->data.MacAddress) );
        OptionSelfCloseActionField_MacAddress = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( OptionSelfCloseActionField_InstrumentID != NULL ) {
        if(OptionSelfCloseActionField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", OptionSelfCloseActionField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, OptionSelfCloseActionField_InstrumentID, OptionSelfCloseActionField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, OptionSelfCloseActionField_InstrumentID, sizeof(self->data.InstrumentID) );
        OptionSelfCloseActionField_InstrumentID = NULL;
    }
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( OptionSelfCloseActionField_IPAddress != NULL ) {
        if(OptionSelfCloseActionField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", OptionSelfCloseActionField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, OptionSelfCloseActionField_IPAddress, OptionSelfCloseActionField_IPAddress_len);        
        strncpy(self->data.IPAddress, OptionSelfCloseActionField_IPAddress, sizeof(self->data.IPAddress) );
        OptionSelfCloseActionField_IPAddress = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcOptionSelfCloseActionField_dealloc(PyCThostFtdcOptionSelfCloseActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcOptionSelfCloseActionField_repr(PyCThostFtdcOptionSelfCloseActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i,s:y,s:i,s:i,s:i,s:y,s:y,s:c,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i,s:s,s:i,s:i,s:i,s:s,s:s,s:c,s:s,s:s,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"OptionSelfCloseActionRef", self->data.OptionSelfCloseActionRef 
        ,"OptionSelfCloseRef", self->data.OptionSelfCloseRef//, (Py_ssize_t)sizeof(self->data.OptionSelfCloseRef) 
        ,"RequestID", self->data.RequestID 
        ,"FrontID", self->data.FrontID 
        ,"SessionID", self->data.SessionID 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"OptionSelfCloseSysID", self->data.OptionSelfCloseSysID//, (Py_ssize_t)sizeof(self->data.OptionSelfCloseSysID) 
        ,"ActionFlag", self->data.ActionFlag 
        ,"ActionDate", self->data.ActionDate//, (Py_ssize_t)sizeof(self->data.ActionDate) 
        ,"ActionTime", self->data.ActionTime//, (Py_ssize_t)sizeof(self->data.ActionTime) 
        ,"TraderID", self->data.TraderID//, (Py_ssize_t)sizeof(self->data.TraderID) 
        ,"InstallID", self->data.InstallID 
        ,"OptionSelfCloseLocalID", self->data.OptionSelfCloseLocalID//, (Py_ssize_t)sizeof(self->data.OptionSelfCloseLocalID) 
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


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcOptionSelfCloseActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_BrokerID(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcOptionSelfCloseActionField_set_BrokerID(PyCThostFtdcOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_InvestorID(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcOptionSelfCloseActionField_set_InvestorID(PyCThostFtdcOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
            
///期权自对冲操作引用
// TThostFtdcOrderActionRefType int
static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_OptionSelfCloseActionRef(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.OptionSelfCloseActionRef);
#else
    return PyInt_FromLong(self->data.OptionSelfCloseActionRef);
#endif
}

///期权自对冲操作引用
// TThostFtdcOrderActionRefType int
static int PyCThostFtdcOptionSelfCloseActionField_set_OptionSelfCloseActionRef(PyCThostFtdcOptionSelfCloseActionField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OptionSelfCloseActionRef Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OptionSelfCloseActionRef Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the OptionSelfCloseActionRef value out of range for C int");
        return -1;
    }
    self->data.OptionSelfCloseActionRef = (int)buf;
    return 0;
}
        
///期权自对冲引用
// TThostFtdcOrderRefType char[13]
static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_OptionSelfCloseRef(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OptionSelfCloseRef, (Py_ssize_t)sizeof(self->data.OptionSelfCloseRef));
    return PyBytes_FromString(self->data.OptionSelfCloseRef);
}

///期权自对冲引用
// TThostFtdcOrderRefType char[13]
static int PyCThostFtdcOptionSelfCloseActionField_set_OptionSelfCloseRef(PyCThostFtdcOptionSelfCloseActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OptionSelfCloseRef Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseRef)) {
        PyErr_SetString(PyExc_ValueError, "OptionSelfCloseRef must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.OptionSelfCloseRef, 0, sizeof(self->data.OptionSelfCloseRef));
    // memcpy(self->data.OptionSelfCloseRef, buf, len);
    strncpy(self->data.OptionSelfCloseRef, buf, sizeof(self->data.OptionSelfCloseRef));
    return 0;
}
            
///请求编号
// TThostFtdcRequestIDType int
static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_RequestID(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcOptionSelfCloseActionField_set_RequestID(PyCThostFtdcOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_FrontID(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FrontID);
#else
    return PyInt_FromLong(self->data.FrontID);
#endif
}

///前置编号
// TThostFtdcFrontIDType int
static int PyCThostFtdcOptionSelfCloseActionField_set_FrontID(PyCThostFtdcOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_SessionID(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话编号
// TThostFtdcSessionIDType int
static int PyCThostFtdcOptionSelfCloseActionField_set_SessionID(PyCThostFtdcOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_ExchangeID(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcOptionSelfCloseActionField_set_ExchangeID(PyCThostFtdcOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
            
///期权自对冲操作编号
// TThostFtdcOrderSysIDType char[21]
static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_OptionSelfCloseSysID(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OptionSelfCloseSysID, (Py_ssize_t)sizeof(self->data.OptionSelfCloseSysID));
    return PyBytes_FromString(self->data.OptionSelfCloseSysID);
}

///期权自对冲操作编号
// TThostFtdcOrderSysIDType char[21]
static int PyCThostFtdcOptionSelfCloseActionField_set_OptionSelfCloseSysID(PyCThostFtdcOptionSelfCloseActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OptionSelfCloseSysID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseSysID)) {
        PyErr_SetString(PyExc_ValueError, "OptionSelfCloseSysID must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.OptionSelfCloseSysID, 0, sizeof(self->data.OptionSelfCloseSysID));
    // memcpy(self->data.OptionSelfCloseSysID, buf, len);
    strncpy(self->data.OptionSelfCloseSysID, buf, sizeof(self->data.OptionSelfCloseSysID));
    return 0;
}
            
///操作标志
// TThostFtdcActionFlagType char
static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_ActionFlag(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionFlag), 1);
}

///操作标志
// TThostFtdcActionFlagType char
static int PyCThostFtdcOptionSelfCloseActionField_set_ActionFlag(PyCThostFtdcOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_ActionDate(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActionDate, (Py_ssize_t)sizeof(self->data.ActionDate));
    return PyBytes_FromString(self->data.ActionDate);
}

///操作日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcOptionSelfCloseActionField_set_ActionDate(PyCThostFtdcOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_ActionTime(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActionTime, (Py_ssize_t)sizeof(self->data.ActionTime));
    return PyBytes_FromString(self->data.ActionTime);
}

///操作时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcOptionSelfCloseActionField_set_ActionTime(PyCThostFtdcOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_TraderID(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TraderID, (Py_ssize_t)sizeof(self->data.TraderID));
    return PyBytes_FromString(self->data.TraderID);
}

///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static int PyCThostFtdcOptionSelfCloseActionField_set_TraderID(PyCThostFtdcOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_InstallID(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcOptionSelfCloseActionField_set_InstallID(PyCThostFtdcOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
        
///本地期权自对冲编号
// TThostFtdcOrderLocalIDType char[13]
static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_OptionSelfCloseLocalID(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OptionSelfCloseLocalID, (Py_ssize_t)sizeof(self->data.OptionSelfCloseLocalID));
    return PyBytes_FromString(self->data.OptionSelfCloseLocalID);
}

///本地期权自对冲编号
// TThostFtdcOrderLocalIDType char[13]
static int PyCThostFtdcOptionSelfCloseActionField_set_OptionSelfCloseLocalID(PyCThostFtdcOptionSelfCloseActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OptionSelfCloseLocalID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseLocalID)) {
        PyErr_SetString(PyExc_ValueError, "OptionSelfCloseLocalID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.OptionSelfCloseLocalID, 0, sizeof(self->data.OptionSelfCloseLocalID));
    // memcpy(self->data.OptionSelfCloseLocalID, buf, len);
    strncpy(self->data.OptionSelfCloseLocalID, buf, sizeof(self->data.OptionSelfCloseLocalID));
    return 0;
}
            
///操作本地编号
// TThostFtdcOrderLocalIDType char[13]
static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_ActionLocalID(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActionLocalID, (Py_ssize_t)sizeof(self->data.ActionLocalID));
    return PyBytes_FromString(self->data.ActionLocalID);
}

///操作本地编号
// TThostFtdcOrderLocalIDType char[13]
static int PyCThostFtdcOptionSelfCloseActionField_set_ActionLocalID(PyCThostFtdcOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_ParticipantID(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParticipantID, (Py_ssize_t)sizeof(self->data.ParticipantID));
    return PyBytes_FromString(self->data.ParticipantID);
}

///会员代码
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcOptionSelfCloseActionField_set_ParticipantID(PyCThostFtdcOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_ClientID(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientID, (Py_ssize_t)sizeof(self->data.ClientID));
    return PyBytes_FromString(self->data.ClientID);
}

///客户代码
// TThostFtdcClientIDType char[11]
static int PyCThostFtdcOptionSelfCloseActionField_set_ClientID(PyCThostFtdcOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_BusinessUnit(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BusinessUnit, (Py_ssize_t)sizeof(self->data.BusinessUnit));
    return PyBytes_FromString(self->data.BusinessUnit);
}

///业务单元
// TThostFtdcBusinessUnitType char[21]
static int PyCThostFtdcOptionSelfCloseActionField_set_BusinessUnit(PyCThostFtdcOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_OrderActionStatus(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OrderActionStatus), 1);
}

///报单操作状态
// TThostFtdcOrderActionStatusType char
static int PyCThostFtdcOptionSelfCloseActionField_set_OrderActionStatus(PyCThostFtdcOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_UserID(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcOptionSelfCloseActionField_set_UserID(PyCThostFtdcOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_StatusMsg(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.StatusMsg, (Py_ssize_t)sizeof(self->data.StatusMsg));
    return PyBytes_FromString(self->data.StatusMsg);
}

///状态信息
// TThostFtdcErrorMsgType char[81]
static int PyCThostFtdcOptionSelfCloseActionField_set_StatusMsg(PyCThostFtdcOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_reserve1(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcOptionSelfCloseActionField_set_reserve1(PyCThostFtdcOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_BranchID(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BranchID, (Py_ssize_t)sizeof(self->data.BranchID));
    return PyBytes_FromString(self->data.BranchID);
}

///营业部编号
// TThostFtdcBranchIDType char[9]
static int PyCThostFtdcOptionSelfCloseActionField_set_BranchID(PyCThostFtdcOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_InvestUnitID(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcOptionSelfCloseActionField_set_InvestUnitID(PyCThostFtdcOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_reserve2(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve2, (Py_ssize_t)sizeof(self->data.reserve2));
    return PyBytes_FromString(self->data.reserve2);
}

///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static int PyCThostFtdcOptionSelfCloseActionField_set_reserve2(PyCThostFtdcOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_MacAddress(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcOptionSelfCloseActionField_set_MacAddress(PyCThostFtdcOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_InstrumentID(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcOptionSelfCloseActionField_set_InstrumentID(PyCThostFtdcOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_IPAddress(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcOptionSelfCloseActionField_set_IPAddress(PyCThostFtdcOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcOptionSelfCloseActionField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcOptionSelfCloseActionField_get_BrokerID, (setter)PyCThostFtdcOptionSelfCloseActionField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcOptionSelfCloseActionField_get_InvestorID, (setter)PyCThostFtdcOptionSelfCloseActionField_set_InvestorID, (char *)"InvestorID", NULL},
    ///期权自对冲操作引用 
    {(char *)"OptionSelfCloseActionRef", (getter)PyCThostFtdcOptionSelfCloseActionField_get_OptionSelfCloseActionRef, (setter)PyCThostFtdcOptionSelfCloseActionField_set_OptionSelfCloseActionRef, (char *)"OptionSelfCloseActionRef", NULL},
    ///期权自对冲引用 
    {(char *)"OptionSelfCloseRef", (getter)PyCThostFtdcOptionSelfCloseActionField_get_OptionSelfCloseRef, (setter)PyCThostFtdcOptionSelfCloseActionField_set_OptionSelfCloseRef, (char *)"OptionSelfCloseRef", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcOptionSelfCloseActionField_get_RequestID, (setter)PyCThostFtdcOptionSelfCloseActionField_set_RequestID, (char *)"RequestID", NULL},
    ///前置编号 
    {(char *)"FrontID", (getter)PyCThostFtdcOptionSelfCloseActionField_get_FrontID, (setter)PyCThostFtdcOptionSelfCloseActionField_set_FrontID, (char *)"FrontID", NULL},
    ///会话编号 
    {(char *)"SessionID", (getter)PyCThostFtdcOptionSelfCloseActionField_get_SessionID, (setter)PyCThostFtdcOptionSelfCloseActionField_set_SessionID, (char *)"SessionID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcOptionSelfCloseActionField_get_ExchangeID, (setter)PyCThostFtdcOptionSelfCloseActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///期权自对冲操作编号 
    {(char *)"OptionSelfCloseSysID", (getter)PyCThostFtdcOptionSelfCloseActionField_get_OptionSelfCloseSysID, (setter)PyCThostFtdcOptionSelfCloseActionField_set_OptionSelfCloseSysID, (char *)"OptionSelfCloseSysID", NULL},
    ///操作标志 
    {(char *)"ActionFlag", (getter)PyCThostFtdcOptionSelfCloseActionField_get_ActionFlag, (setter)PyCThostFtdcOptionSelfCloseActionField_set_ActionFlag, (char *)"ActionFlag", NULL},
    ///操作日期 
    {(char *)"ActionDate", (getter)PyCThostFtdcOptionSelfCloseActionField_get_ActionDate, (setter)PyCThostFtdcOptionSelfCloseActionField_set_ActionDate, (char *)"ActionDate", NULL},
    ///操作时间 
    {(char *)"ActionTime", (getter)PyCThostFtdcOptionSelfCloseActionField_get_ActionTime, (setter)PyCThostFtdcOptionSelfCloseActionField_set_ActionTime, (char *)"ActionTime", NULL},
    ///交易所交易员代码 
    {(char *)"TraderID", (getter)PyCThostFtdcOptionSelfCloseActionField_get_TraderID, (setter)PyCThostFtdcOptionSelfCloseActionField_set_TraderID, (char *)"TraderID", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcOptionSelfCloseActionField_get_InstallID, (setter)PyCThostFtdcOptionSelfCloseActionField_set_InstallID, (char *)"InstallID", NULL},
    ///本地期权自对冲编号 
    {(char *)"OptionSelfCloseLocalID", (getter)PyCThostFtdcOptionSelfCloseActionField_get_OptionSelfCloseLocalID, (setter)PyCThostFtdcOptionSelfCloseActionField_set_OptionSelfCloseLocalID, (char *)"OptionSelfCloseLocalID", NULL},
    ///操作本地编号 
    {(char *)"ActionLocalID", (getter)PyCThostFtdcOptionSelfCloseActionField_get_ActionLocalID, (setter)PyCThostFtdcOptionSelfCloseActionField_set_ActionLocalID, (char *)"ActionLocalID", NULL},
    ///会员代码 
    {(char *)"ParticipantID", (getter)PyCThostFtdcOptionSelfCloseActionField_get_ParticipantID, (setter)PyCThostFtdcOptionSelfCloseActionField_set_ParticipantID, (char *)"ParticipantID", NULL},
    ///客户代码 
    {(char *)"ClientID", (getter)PyCThostFtdcOptionSelfCloseActionField_get_ClientID, (setter)PyCThostFtdcOptionSelfCloseActionField_set_ClientID, (char *)"ClientID", NULL},
    ///业务单元 
    {(char *)"BusinessUnit", (getter)PyCThostFtdcOptionSelfCloseActionField_get_BusinessUnit, (setter)PyCThostFtdcOptionSelfCloseActionField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
    ///报单操作状态 
    {(char *)"OrderActionStatus", (getter)PyCThostFtdcOptionSelfCloseActionField_get_OrderActionStatus, (setter)PyCThostFtdcOptionSelfCloseActionField_set_OrderActionStatus, (char *)"OrderActionStatus", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcOptionSelfCloseActionField_get_UserID, (setter)PyCThostFtdcOptionSelfCloseActionField_set_UserID, (char *)"UserID", NULL},
    ///状态信息 
    {(char *)"StatusMsg", (getter)PyCThostFtdcOptionSelfCloseActionField_get_StatusMsg, (setter)PyCThostFtdcOptionSelfCloseActionField_set_StatusMsg, (char *)"StatusMsg", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcOptionSelfCloseActionField_get_reserve1, (setter)PyCThostFtdcOptionSelfCloseActionField_set_reserve1, (char *)"reserve1", NULL},
    ///营业部编号 
    {(char *)"BranchID", (getter)PyCThostFtdcOptionSelfCloseActionField_get_BranchID, (setter)PyCThostFtdcOptionSelfCloseActionField_set_BranchID, (char *)"BranchID", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcOptionSelfCloseActionField_get_InvestUnitID, (setter)PyCThostFtdcOptionSelfCloseActionField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///保留的无效字段 
    {(char *)"reserve2", (getter)PyCThostFtdcOptionSelfCloseActionField_get_reserve2, (setter)PyCThostFtdcOptionSelfCloseActionField_set_reserve2, (char *)"reserve2", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcOptionSelfCloseActionField_get_MacAddress, (setter)PyCThostFtdcOptionSelfCloseActionField_set_MacAddress, (char *)"MacAddress", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcOptionSelfCloseActionField_get_InstrumentID, (setter)PyCThostFtdcOptionSelfCloseActionField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcOptionSelfCloseActionField_get_IPAddress, (setter)PyCThostFtdcOptionSelfCloseActionField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcOptionSelfCloseActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcOptionSelfCloseActionField",	/* tp_name */
	sizeof(PyCThostFtdcOptionSelfCloseActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcOptionSelfCloseActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcOptionSelfCloseActionField_repr,   /* tp_repr */
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
	"CThostFtdcOptionSelfCloseActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcOptionSelfCloseActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcOptionSelfCloseActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcOptionSelfCloseActionField_new,       /* tp_new */
};

int PyCThostFtdcOptionSelfCloseActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcOptionSelfCloseActionField  */
	if (PyType_Ready(&PyCThostFtdcOptionSelfCloseActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcOptionSelfCloseActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcOptionSelfCloseActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcOptionSelfCloseActionField", (PyObject *)&PyCThostFtdcOptionSelfCloseActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcOptionSelfCloseActionField to module");
        Py_DECREF(&PyCThostFtdcOptionSelfCloseActionFieldType);
		return -1;
    }

    return 0;
}
