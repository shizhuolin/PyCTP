
#include "PyCThostFtdcExecOrderActionField.h"

///执行宣告操作

static PyObject *PyCThostFtdcExecOrderActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcExecOrderActionField *self = (PyCThostFtdcExecOrderActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcExecOrderActionField_init(PyCThostFtdcExecOrderActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "ExecOrderActionRef", "ExecOrderRef", "RequestID", "FrontID", "SessionID", "ExchangeID", "ExecOrderSysID", "ActionFlag", "ActionDate", "ActionTime", "TraderID", "InstallID", "ExecOrderLocalID", "ActionLocalID", "ParticipantID", "ClientID", "BusinessUnit", "OrderActionStatus", "UserID", "ActionType", "StatusMsg", "reserve1", "BranchID", "InvestUnitID", "reserve2", "MacAddress", "InstrumentID", "IPAddress",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *ExecOrderActionField_BrokerID = NULL;
    Py_ssize_t ExecOrderActionField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *ExecOrderActionField_InvestorID = NULL;
    Py_ssize_t ExecOrderActionField_InvestorID_len = 0;
            
    ///执行宣告操作引用
    // TThostFtdcOrderActionRefType int
    int ExecOrderActionField_ExecOrderActionRef = 0;
        
    ///执行宣告引用
    // TThostFtdcOrderRefType char[13]
    const char *ExecOrderActionField_ExecOrderRef = NULL;
    Py_ssize_t ExecOrderActionField_ExecOrderRef_len = 0;
            
    ///请求编号
    // TThostFtdcRequestIDType int
    int ExecOrderActionField_RequestID = 0;
        
    ///前置编号
    // TThostFtdcFrontIDType int
    int ExecOrderActionField_FrontID = 0;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    int ExecOrderActionField_SessionID = 0;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *ExecOrderActionField_ExchangeID = NULL;
    Py_ssize_t ExecOrderActionField_ExchangeID_len = 0;
            
    ///执行宣告操作编号
    // TThostFtdcExecOrderSysIDType char[21]
    const char *ExecOrderActionField_ExecOrderSysID = NULL;
    Py_ssize_t ExecOrderActionField_ExecOrderSysID_len = 0;
            
    ///操作标志
    // TThostFtdcActionFlagType char
    char ExecOrderActionField_ActionFlag = 0;
            
    ///操作日期
    // TThostFtdcDateType char[9]
    const char *ExecOrderActionField_ActionDate = NULL;
    Py_ssize_t ExecOrderActionField_ActionDate_len = 0;
            
    ///操作时间
    // TThostFtdcTimeType char[9]
    const char *ExecOrderActionField_ActionTime = NULL;
    Py_ssize_t ExecOrderActionField_ActionTime_len = 0;
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    const char *ExecOrderActionField_TraderID = NULL;
    Py_ssize_t ExecOrderActionField_TraderID_len = 0;
            
    ///安装编号
    // TThostFtdcInstallIDType int
    int ExecOrderActionField_InstallID = 0;
        
    ///本地执行宣告编号
    // TThostFtdcOrderLocalIDType char[13]
    const char *ExecOrderActionField_ExecOrderLocalID = NULL;
    Py_ssize_t ExecOrderActionField_ExecOrderLocalID_len = 0;
            
    ///操作本地编号
    // TThostFtdcOrderLocalIDType char[13]
    const char *ExecOrderActionField_ActionLocalID = NULL;
    Py_ssize_t ExecOrderActionField_ActionLocalID_len = 0;
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    const char *ExecOrderActionField_ParticipantID = NULL;
    Py_ssize_t ExecOrderActionField_ParticipantID_len = 0;
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    const char *ExecOrderActionField_ClientID = NULL;
    Py_ssize_t ExecOrderActionField_ClientID_len = 0;
            
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    const char *ExecOrderActionField_BusinessUnit = NULL;
    Py_ssize_t ExecOrderActionField_BusinessUnit_len = 0;
            
    ///报单操作状态
    // TThostFtdcOrderActionStatusType char
    char ExecOrderActionField_OrderActionStatus = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *ExecOrderActionField_UserID = NULL;
    Py_ssize_t ExecOrderActionField_UserID_len = 0;
            
    ///执行类型
    // TThostFtdcActionTypeType char
    char ExecOrderActionField_ActionType = 0;
            
    ///状态信息
    // TThostFtdcErrorMsgType char[81]
    const char *ExecOrderActionField_StatusMsg = NULL;
    Py_ssize_t ExecOrderActionField_StatusMsg_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *ExecOrderActionField_reserve1 = NULL;
    Py_ssize_t ExecOrderActionField_reserve1_len = 0;
            
    ///营业部编号
    // TThostFtdcBranchIDType char[9]
    const char *ExecOrderActionField_BranchID = NULL;
    Py_ssize_t ExecOrderActionField_BranchID_len = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *ExecOrderActionField_InvestUnitID = NULL;
    Py_ssize_t ExecOrderActionField_InvestUnitID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    const char *ExecOrderActionField_reserve2 = NULL;
    Py_ssize_t ExecOrderActionField_reserve2_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *ExecOrderActionField_MacAddress = NULL;
    Py_ssize_t ExecOrderActionField_MacAddress_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *ExecOrderActionField_InstrumentID = NULL;
    Py_ssize_t ExecOrderActionField_InstrumentID_len = 0;
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *ExecOrderActionField_IPAddress = NULL;
    Py_ssize_t ExecOrderActionField_IPAddress_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iy#iiiy#y#cy#y#y#iy#y#y#y#y#cy#cy#y#y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#is#iiis#s#cs#s#s#is#s#s#s#s#cs#cs#s#s#s#s#s#s#s#", (char **)kwlist
#endif

        , &ExecOrderActionField_BrokerID, &ExecOrderActionField_BrokerID_len 
        , &ExecOrderActionField_InvestorID, &ExecOrderActionField_InvestorID_len 
        , &ExecOrderActionField_ExecOrderActionRef 
        , &ExecOrderActionField_ExecOrderRef, &ExecOrderActionField_ExecOrderRef_len 
        , &ExecOrderActionField_RequestID 
        , &ExecOrderActionField_FrontID 
        , &ExecOrderActionField_SessionID 
        , &ExecOrderActionField_ExchangeID, &ExecOrderActionField_ExchangeID_len 
        , &ExecOrderActionField_ExecOrderSysID, &ExecOrderActionField_ExecOrderSysID_len 
        , &ExecOrderActionField_ActionFlag 
        , &ExecOrderActionField_ActionDate, &ExecOrderActionField_ActionDate_len 
        , &ExecOrderActionField_ActionTime, &ExecOrderActionField_ActionTime_len 
        , &ExecOrderActionField_TraderID, &ExecOrderActionField_TraderID_len 
        , &ExecOrderActionField_InstallID 
        , &ExecOrderActionField_ExecOrderLocalID, &ExecOrderActionField_ExecOrderLocalID_len 
        , &ExecOrderActionField_ActionLocalID, &ExecOrderActionField_ActionLocalID_len 
        , &ExecOrderActionField_ParticipantID, &ExecOrderActionField_ParticipantID_len 
        , &ExecOrderActionField_ClientID, &ExecOrderActionField_ClientID_len 
        , &ExecOrderActionField_BusinessUnit, &ExecOrderActionField_BusinessUnit_len 
        , &ExecOrderActionField_OrderActionStatus 
        , &ExecOrderActionField_UserID, &ExecOrderActionField_UserID_len 
        , &ExecOrderActionField_ActionType 
        , &ExecOrderActionField_StatusMsg, &ExecOrderActionField_StatusMsg_len 
        , &ExecOrderActionField_reserve1, &ExecOrderActionField_reserve1_len 
        , &ExecOrderActionField_BranchID, &ExecOrderActionField_BranchID_len 
        , &ExecOrderActionField_InvestUnitID, &ExecOrderActionField_InvestUnitID_len 
        , &ExecOrderActionField_reserve2, &ExecOrderActionField_reserve2_len 
        , &ExecOrderActionField_MacAddress, &ExecOrderActionField_MacAddress_len 
        , &ExecOrderActionField_InstrumentID, &ExecOrderActionField_InstrumentID_len 
        , &ExecOrderActionField_IPAddress, &ExecOrderActionField_IPAddress_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( ExecOrderActionField_BrokerID != NULL ) {
        if(ExecOrderActionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", ExecOrderActionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, ExecOrderActionField_BrokerID, ExecOrderActionField_BrokerID_len);        
        strncpy(self->data.BrokerID, ExecOrderActionField_BrokerID, sizeof(self->data.BrokerID) );
        ExecOrderActionField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( ExecOrderActionField_InvestorID != NULL ) {
        if(ExecOrderActionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", ExecOrderActionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, ExecOrderActionField_InvestorID, ExecOrderActionField_InvestorID_len);        
        strncpy(self->data.InvestorID, ExecOrderActionField_InvestorID, sizeof(self->data.InvestorID) );
        ExecOrderActionField_InvestorID = NULL;
    }
            
    ///执行宣告操作引用
    // TThostFtdcOrderActionRefType int
    self->data.ExecOrderActionRef = ExecOrderActionField_ExecOrderActionRef;
        
    ///执行宣告引用
    // TThostFtdcOrderRefType char[13]
    if( ExecOrderActionField_ExecOrderRef != NULL ) {
        if(ExecOrderActionField_ExecOrderRef_len > (Py_ssize_t)sizeof(self->data.ExecOrderRef)) {
            PyErr_Format(PyExc_ValueError, "ExecOrderRef too long: length=%zd (max allowed is %zd)", ExecOrderActionField_ExecOrderRef_len, (Py_ssize_t)sizeof(self->data.ExecOrderRef));
            return -1;
        }
        // memset(self->data.ExecOrderRef, 0, sizeof(self->data.ExecOrderRef));
        // memcpy(self->data.ExecOrderRef, ExecOrderActionField_ExecOrderRef, ExecOrderActionField_ExecOrderRef_len);        
        strncpy(self->data.ExecOrderRef, ExecOrderActionField_ExecOrderRef, sizeof(self->data.ExecOrderRef) );
        ExecOrderActionField_ExecOrderRef = NULL;
    }
            
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = ExecOrderActionField_RequestID;
        
    ///前置编号
    // TThostFtdcFrontIDType int
    self->data.FrontID = ExecOrderActionField_FrontID;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    self->data.SessionID = ExecOrderActionField_SessionID;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( ExecOrderActionField_ExchangeID != NULL ) {
        if(ExecOrderActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", ExecOrderActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, ExecOrderActionField_ExchangeID, ExecOrderActionField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, ExecOrderActionField_ExchangeID, sizeof(self->data.ExchangeID) );
        ExecOrderActionField_ExchangeID = NULL;
    }
            
    ///执行宣告操作编号
    // TThostFtdcExecOrderSysIDType char[21]
    if( ExecOrderActionField_ExecOrderSysID != NULL ) {
        if(ExecOrderActionField_ExecOrderSysID_len > (Py_ssize_t)sizeof(self->data.ExecOrderSysID)) {
            PyErr_Format(PyExc_ValueError, "ExecOrderSysID too long: length=%zd (max allowed is %zd)", ExecOrderActionField_ExecOrderSysID_len, (Py_ssize_t)sizeof(self->data.ExecOrderSysID));
            return -1;
        }
        // memset(self->data.ExecOrderSysID, 0, sizeof(self->data.ExecOrderSysID));
        // memcpy(self->data.ExecOrderSysID, ExecOrderActionField_ExecOrderSysID, ExecOrderActionField_ExecOrderSysID_len);        
        strncpy(self->data.ExecOrderSysID, ExecOrderActionField_ExecOrderSysID, sizeof(self->data.ExecOrderSysID) );
        ExecOrderActionField_ExecOrderSysID = NULL;
    }
            
    ///操作标志
    // TThostFtdcActionFlagType char
    self->data.ActionFlag = ExecOrderActionField_ActionFlag;
            
    ///操作日期
    // TThostFtdcDateType char[9]
    if( ExecOrderActionField_ActionDate != NULL ) {
        if(ExecOrderActionField_ActionDate_len > (Py_ssize_t)sizeof(self->data.ActionDate)) {
            PyErr_Format(PyExc_ValueError, "ActionDate too long: length=%zd (max allowed is %zd)", ExecOrderActionField_ActionDate_len, (Py_ssize_t)sizeof(self->data.ActionDate));
            return -1;
        }
        // memset(self->data.ActionDate, 0, sizeof(self->data.ActionDate));
        // memcpy(self->data.ActionDate, ExecOrderActionField_ActionDate, ExecOrderActionField_ActionDate_len);        
        strncpy(self->data.ActionDate, ExecOrderActionField_ActionDate, sizeof(self->data.ActionDate) );
        ExecOrderActionField_ActionDate = NULL;
    }
            
    ///操作时间
    // TThostFtdcTimeType char[9]
    if( ExecOrderActionField_ActionTime != NULL ) {
        if(ExecOrderActionField_ActionTime_len > (Py_ssize_t)sizeof(self->data.ActionTime)) {
            PyErr_Format(PyExc_ValueError, "ActionTime too long: length=%zd (max allowed is %zd)", ExecOrderActionField_ActionTime_len, (Py_ssize_t)sizeof(self->data.ActionTime));
            return -1;
        }
        // memset(self->data.ActionTime, 0, sizeof(self->data.ActionTime));
        // memcpy(self->data.ActionTime, ExecOrderActionField_ActionTime, ExecOrderActionField_ActionTime_len);        
        strncpy(self->data.ActionTime, ExecOrderActionField_ActionTime, sizeof(self->data.ActionTime) );
        ExecOrderActionField_ActionTime = NULL;
    }
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    if( ExecOrderActionField_TraderID != NULL ) {
        if(ExecOrderActionField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", ExecOrderActionField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
            return -1;
        }
        // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
        // memcpy(self->data.TraderID, ExecOrderActionField_TraderID, ExecOrderActionField_TraderID_len);        
        strncpy(self->data.TraderID, ExecOrderActionField_TraderID, sizeof(self->data.TraderID) );
        ExecOrderActionField_TraderID = NULL;
    }
            
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = ExecOrderActionField_InstallID;
        
    ///本地执行宣告编号
    // TThostFtdcOrderLocalIDType char[13]
    if( ExecOrderActionField_ExecOrderLocalID != NULL ) {
        if(ExecOrderActionField_ExecOrderLocalID_len > (Py_ssize_t)sizeof(self->data.ExecOrderLocalID)) {
            PyErr_Format(PyExc_ValueError, "ExecOrderLocalID too long: length=%zd (max allowed is %zd)", ExecOrderActionField_ExecOrderLocalID_len, (Py_ssize_t)sizeof(self->data.ExecOrderLocalID));
            return -1;
        }
        // memset(self->data.ExecOrderLocalID, 0, sizeof(self->data.ExecOrderLocalID));
        // memcpy(self->data.ExecOrderLocalID, ExecOrderActionField_ExecOrderLocalID, ExecOrderActionField_ExecOrderLocalID_len);        
        strncpy(self->data.ExecOrderLocalID, ExecOrderActionField_ExecOrderLocalID, sizeof(self->data.ExecOrderLocalID) );
        ExecOrderActionField_ExecOrderLocalID = NULL;
    }
            
    ///操作本地编号
    // TThostFtdcOrderLocalIDType char[13]
    if( ExecOrderActionField_ActionLocalID != NULL ) {
        if(ExecOrderActionField_ActionLocalID_len > (Py_ssize_t)sizeof(self->data.ActionLocalID)) {
            PyErr_Format(PyExc_ValueError, "ActionLocalID too long: length=%zd (max allowed is %zd)", ExecOrderActionField_ActionLocalID_len, (Py_ssize_t)sizeof(self->data.ActionLocalID));
            return -1;
        }
        // memset(self->data.ActionLocalID, 0, sizeof(self->data.ActionLocalID));
        // memcpy(self->data.ActionLocalID, ExecOrderActionField_ActionLocalID, ExecOrderActionField_ActionLocalID_len);        
        strncpy(self->data.ActionLocalID, ExecOrderActionField_ActionLocalID, sizeof(self->data.ActionLocalID) );
        ExecOrderActionField_ActionLocalID = NULL;
    }
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    if( ExecOrderActionField_ParticipantID != NULL ) {
        if(ExecOrderActionField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", ExecOrderActionField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
            return -1;
        }
        // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
        // memcpy(self->data.ParticipantID, ExecOrderActionField_ParticipantID, ExecOrderActionField_ParticipantID_len);        
        strncpy(self->data.ParticipantID, ExecOrderActionField_ParticipantID, sizeof(self->data.ParticipantID) );
        ExecOrderActionField_ParticipantID = NULL;
    }
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    if( ExecOrderActionField_ClientID != NULL ) {
        if(ExecOrderActionField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", ExecOrderActionField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
            return -1;
        }
        // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
        // memcpy(self->data.ClientID, ExecOrderActionField_ClientID, ExecOrderActionField_ClientID_len);        
        strncpy(self->data.ClientID, ExecOrderActionField_ClientID, sizeof(self->data.ClientID) );
        ExecOrderActionField_ClientID = NULL;
    }
            
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    if( ExecOrderActionField_BusinessUnit != NULL ) {
        if(ExecOrderActionField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", ExecOrderActionField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
            return -1;
        }
        // memset(self->data.BusinessUnit, 0, sizeof(self->data.BusinessUnit));
        // memcpy(self->data.BusinessUnit, ExecOrderActionField_BusinessUnit, ExecOrderActionField_BusinessUnit_len);        
        strncpy(self->data.BusinessUnit, ExecOrderActionField_BusinessUnit, sizeof(self->data.BusinessUnit) );
        ExecOrderActionField_BusinessUnit = NULL;
    }
            
    ///报单操作状态
    // TThostFtdcOrderActionStatusType char
    self->data.OrderActionStatus = ExecOrderActionField_OrderActionStatus;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( ExecOrderActionField_UserID != NULL ) {
        if(ExecOrderActionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", ExecOrderActionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, ExecOrderActionField_UserID, ExecOrderActionField_UserID_len);        
        strncpy(self->data.UserID, ExecOrderActionField_UserID, sizeof(self->data.UserID) );
        ExecOrderActionField_UserID = NULL;
    }
            
    ///执行类型
    // TThostFtdcActionTypeType char
    self->data.ActionType = ExecOrderActionField_ActionType;
            
    ///状态信息
    // TThostFtdcErrorMsgType char[81]
    if( ExecOrderActionField_StatusMsg != NULL ) {
        if(ExecOrderActionField_StatusMsg_len > (Py_ssize_t)sizeof(self->data.StatusMsg)) {
            PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is %zd)", ExecOrderActionField_StatusMsg_len, (Py_ssize_t)sizeof(self->data.StatusMsg));
            return -1;
        }
        // memset(self->data.StatusMsg, 0, sizeof(self->data.StatusMsg));
        // memcpy(self->data.StatusMsg, ExecOrderActionField_StatusMsg, ExecOrderActionField_StatusMsg_len);        
        strncpy(self->data.StatusMsg, ExecOrderActionField_StatusMsg, sizeof(self->data.StatusMsg) );
        ExecOrderActionField_StatusMsg = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( ExecOrderActionField_reserve1 != NULL ) {
        if(ExecOrderActionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", ExecOrderActionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, ExecOrderActionField_reserve1, ExecOrderActionField_reserve1_len);        
        strncpy(self->data.reserve1, ExecOrderActionField_reserve1, sizeof(self->data.reserve1) );
        ExecOrderActionField_reserve1 = NULL;
    }
            
    ///营业部编号
    // TThostFtdcBranchIDType char[9]
    if( ExecOrderActionField_BranchID != NULL ) {
        if(ExecOrderActionField_BranchID_len > (Py_ssize_t)sizeof(self->data.BranchID)) {
            PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is %zd)", ExecOrderActionField_BranchID_len, (Py_ssize_t)sizeof(self->data.BranchID));
            return -1;
        }
        // memset(self->data.BranchID, 0, sizeof(self->data.BranchID));
        // memcpy(self->data.BranchID, ExecOrderActionField_BranchID, ExecOrderActionField_BranchID_len);        
        strncpy(self->data.BranchID, ExecOrderActionField_BranchID, sizeof(self->data.BranchID) );
        ExecOrderActionField_BranchID = NULL;
    }
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( ExecOrderActionField_InvestUnitID != NULL ) {
        if(ExecOrderActionField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", ExecOrderActionField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, ExecOrderActionField_InvestUnitID, ExecOrderActionField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, ExecOrderActionField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        ExecOrderActionField_InvestUnitID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    if( ExecOrderActionField_reserve2 != NULL ) {
        if(ExecOrderActionField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", ExecOrderActionField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
            return -1;
        }
        // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
        // memcpy(self->data.reserve2, ExecOrderActionField_reserve2, ExecOrderActionField_reserve2_len);        
        strncpy(self->data.reserve2, ExecOrderActionField_reserve2, sizeof(self->data.reserve2) );
        ExecOrderActionField_reserve2 = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( ExecOrderActionField_MacAddress != NULL ) {
        if(ExecOrderActionField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", ExecOrderActionField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, ExecOrderActionField_MacAddress, ExecOrderActionField_MacAddress_len);        
        strncpy(self->data.MacAddress, ExecOrderActionField_MacAddress, sizeof(self->data.MacAddress) );
        ExecOrderActionField_MacAddress = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( ExecOrderActionField_InstrumentID != NULL ) {
        if(ExecOrderActionField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", ExecOrderActionField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, ExecOrderActionField_InstrumentID, ExecOrderActionField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, ExecOrderActionField_InstrumentID, sizeof(self->data.InstrumentID) );
        ExecOrderActionField_InstrumentID = NULL;
    }
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( ExecOrderActionField_IPAddress != NULL ) {
        if(ExecOrderActionField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", ExecOrderActionField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, ExecOrderActionField_IPAddress, ExecOrderActionField_IPAddress_len);        
        strncpy(self->data.IPAddress, ExecOrderActionField_IPAddress, sizeof(self->data.IPAddress) );
        ExecOrderActionField_IPAddress = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcExecOrderActionField_dealloc(PyCThostFtdcExecOrderActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcExecOrderActionField_repr(PyCThostFtdcExecOrderActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i,s:y,s:i,s:i,s:i,s:y,s:y,s:c,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i,s:s,s:i,s:i,s:i,s:s,s:s,s:c,s:s,s:s,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:c,s:s,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"ExecOrderActionRef", self->data.ExecOrderActionRef 
        ,"ExecOrderRef", self->data.ExecOrderRef//, (Py_ssize_t)sizeof(self->data.ExecOrderRef) 
        ,"RequestID", self->data.RequestID 
        ,"FrontID", self->data.FrontID 
        ,"SessionID", self->data.SessionID 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"ExecOrderSysID", self->data.ExecOrderSysID//, (Py_ssize_t)sizeof(self->data.ExecOrderSysID) 
        ,"ActionFlag", self->data.ActionFlag 
        ,"ActionDate", self->data.ActionDate//, (Py_ssize_t)sizeof(self->data.ActionDate) 
        ,"ActionTime", self->data.ActionTime//, (Py_ssize_t)sizeof(self->data.ActionTime) 
        ,"TraderID", self->data.TraderID//, (Py_ssize_t)sizeof(self->data.TraderID) 
        ,"InstallID", self->data.InstallID 
        ,"ExecOrderLocalID", self->data.ExecOrderLocalID//, (Py_ssize_t)sizeof(self->data.ExecOrderLocalID) 
        ,"ActionLocalID", self->data.ActionLocalID//, (Py_ssize_t)sizeof(self->data.ActionLocalID) 
        ,"ParticipantID", self->data.ParticipantID//, (Py_ssize_t)sizeof(self->data.ParticipantID) 
        ,"ClientID", self->data.ClientID//, (Py_ssize_t)sizeof(self->data.ClientID) 
        ,"BusinessUnit", self->data.BusinessUnit//, (Py_ssize_t)sizeof(self->data.BusinessUnit) 
        ,"OrderActionStatus", self->data.OrderActionStatus 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"ActionType", self->data.ActionType 
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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExecOrderActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcExecOrderActionField_get_BrokerID(PyCThostFtdcExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcExecOrderActionField_set_BrokerID(PyCThostFtdcExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderActionField_get_InvestorID(PyCThostFtdcExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcExecOrderActionField_set_InvestorID(PyCThostFtdcExecOrderActionField *self, PyObject* val, void *closure) {
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
            
///执行宣告操作引用
// TThostFtdcOrderActionRefType int
static PyObject *PyCThostFtdcExecOrderActionField_get_ExecOrderActionRef(PyCThostFtdcExecOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.ExecOrderActionRef);
#else
    return PyInt_FromLong(self->data.ExecOrderActionRef);
#endif
}

///执行宣告操作引用
// TThostFtdcOrderActionRefType int
static int PyCThostFtdcExecOrderActionField_set_ExecOrderActionRef(PyCThostFtdcExecOrderActionField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExecOrderActionRef Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExecOrderActionRef Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the ExecOrderActionRef value out of range for C int");
        return -1;
    }
    self->data.ExecOrderActionRef = (int)buf;
    return 0;
}
        
///执行宣告引用
// TThostFtdcOrderRefType char[13]
static PyObject *PyCThostFtdcExecOrderActionField_get_ExecOrderRef(PyCThostFtdcExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExecOrderRef, (Py_ssize_t)sizeof(self->data.ExecOrderRef));
    return PyBytes_FromString(self->data.ExecOrderRef);
}

///执行宣告引用
// TThostFtdcOrderRefType char[13]
static int PyCThostFtdcExecOrderActionField_set_ExecOrderRef(PyCThostFtdcExecOrderActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExecOrderRef Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ExecOrderRef)) {
        PyErr_SetString(PyExc_ValueError, "ExecOrderRef must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.ExecOrderRef, 0, sizeof(self->data.ExecOrderRef));
    // memcpy(self->data.ExecOrderRef, buf, len);
    strncpy(self->data.ExecOrderRef, buf, sizeof(self->data.ExecOrderRef));
    return 0;
}
            
///请求编号
// TThostFtdcRequestIDType int
static PyObject *PyCThostFtdcExecOrderActionField_get_RequestID(PyCThostFtdcExecOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcExecOrderActionField_set_RequestID(PyCThostFtdcExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderActionField_get_FrontID(PyCThostFtdcExecOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FrontID);
#else
    return PyInt_FromLong(self->data.FrontID);
#endif
}

///前置编号
// TThostFtdcFrontIDType int
static int PyCThostFtdcExecOrderActionField_set_FrontID(PyCThostFtdcExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderActionField_get_SessionID(PyCThostFtdcExecOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话编号
// TThostFtdcSessionIDType int
static int PyCThostFtdcExecOrderActionField_set_SessionID(PyCThostFtdcExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderActionField_get_ExchangeID(PyCThostFtdcExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcExecOrderActionField_set_ExchangeID(PyCThostFtdcExecOrderActionField *self, PyObject* val, void *closure) {
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
            
///执行宣告操作编号
// TThostFtdcExecOrderSysIDType char[21]
static PyObject *PyCThostFtdcExecOrderActionField_get_ExecOrderSysID(PyCThostFtdcExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExecOrderSysID, (Py_ssize_t)sizeof(self->data.ExecOrderSysID));
    return PyBytes_FromString(self->data.ExecOrderSysID);
}

///执行宣告操作编号
// TThostFtdcExecOrderSysIDType char[21]
static int PyCThostFtdcExecOrderActionField_set_ExecOrderSysID(PyCThostFtdcExecOrderActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExecOrderSysID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ExecOrderSysID)) {
        PyErr_SetString(PyExc_ValueError, "ExecOrderSysID must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.ExecOrderSysID, 0, sizeof(self->data.ExecOrderSysID));
    // memcpy(self->data.ExecOrderSysID, buf, len);
    strncpy(self->data.ExecOrderSysID, buf, sizeof(self->data.ExecOrderSysID));
    return 0;
}
            
///操作标志
// TThostFtdcActionFlagType char
static PyObject *PyCThostFtdcExecOrderActionField_get_ActionFlag(PyCThostFtdcExecOrderActionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionFlag), 1);
}

///操作标志
// TThostFtdcActionFlagType char
static int PyCThostFtdcExecOrderActionField_set_ActionFlag(PyCThostFtdcExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderActionField_get_ActionDate(PyCThostFtdcExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActionDate, (Py_ssize_t)sizeof(self->data.ActionDate));
    return PyBytes_FromString(self->data.ActionDate);
}

///操作日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcExecOrderActionField_set_ActionDate(PyCThostFtdcExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderActionField_get_ActionTime(PyCThostFtdcExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActionTime, (Py_ssize_t)sizeof(self->data.ActionTime));
    return PyBytes_FromString(self->data.ActionTime);
}

///操作时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcExecOrderActionField_set_ActionTime(PyCThostFtdcExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderActionField_get_TraderID(PyCThostFtdcExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TraderID, (Py_ssize_t)sizeof(self->data.TraderID));
    return PyBytes_FromString(self->data.TraderID);
}

///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static int PyCThostFtdcExecOrderActionField_set_TraderID(PyCThostFtdcExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderActionField_get_InstallID(PyCThostFtdcExecOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcExecOrderActionField_set_InstallID(PyCThostFtdcExecOrderActionField *self, PyObject* val, void *closure) {
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
        
///本地执行宣告编号
// TThostFtdcOrderLocalIDType char[13]
static PyObject *PyCThostFtdcExecOrderActionField_get_ExecOrderLocalID(PyCThostFtdcExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExecOrderLocalID, (Py_ssize_t)sizeof(self->data.ExecOrderLocalID));
    return PyBytes_FromString(self->data.ExecOrderLocalID);
}

///本地执行宣告编号
// TThostFtdcOrderLocalIDType char[13]
static int PyCThostFtdcExecOrderActionField_set_ExecOrderLocalID(PyCThostFtdcExecOrderActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExecOrderLocalID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ExecOrderLocalID)) {
        PyErr_SetString(PyExc_ValueError, "ExecOrderLocalID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.ExecOrderLocalID, 0, sizeof(self->data.ExecOrderLocalID));
    // memcpy(self->data.ExecOrderLocalID, buf, len);
    strncpy(self->data.ExecOrderLocalID, buf, sizeof(self->data.ExecOrderLocalID));
    return 0;
}
            
///操作本地编号
// TThostFtdcOrderLocalIDType char[13]
static PyObject *PyCThostFtdcExecOrderActionField_get_ActionLocalID(PyCThostFtdcExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActionLocalID, (Py_ssize_t)sizeof(self->data.ActionLocalID));
    return PyBytes_FromString(self->data.ActionLocalID);
}

///操作本地编号
// TThostFtdcOrderLocalIDType char[13]
static int PyCThostFtdcExecOrderActionField_set_ActionLocalID(PyCThostFtdcExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderActionField_get_ParticipantID(PyCThostFtdcExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParticipantID, (Py_ssize_t)sizeof(self->data.ParticipantID));
    return PyBytes_FromString(self->data.ParticipantID);
}

///会员代码
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcExecOrderActionField_set_ParticipantID(PyCThostFtdcExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderActionField_get_ClientID(PyCThostFtdcExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientID, (Py_ssize_t)sizeof(self->data.ClientID));
    return PyBytes_FromString(self->data.ClientID);
}

///客户代码
// TThostFtdcClientIDType char[11]
static int PyCThostFtdcExecOrderActionField_set_ClientID(PyCThostFtdcExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderActionField_get_BusinessUnit(PyCThostFtdcExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BusinessUnit, (Py_ssize_t)sizeof(self->data.BusinessUnit));
    return PyBytes_FromString(self->data.BusinessUnit);
}

///业务单元
// TThostFtdcBusinessUnitType char[21]
static int PyCThostFtdcExecOrderActionField_set_BusinessUnit(PyCThostFtdcExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderActionField_get_OrderActionStatus(PyCThostFtdcExecOrderActionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OrderActionStatus), 1);
}

///报单操作状态
// TThostFtdcOrderActionStatusType char
static int PyCThostFtdcExecOrderActionField_set_OrderActionStatus(PyCThostFtdcExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderActionField_get_UserID(PyCThostFtdcExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcExecOrderActionField_set_UserID(PyCThostFtdcExecOrderActionField *self, PyObject* val, void *closure) {
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
            
///执行类型
// TThostFtdcActionTypeType char
static PyObject *PyCThostFtdcExecOrderActionField_get_ActionType(PyCThostFtdcExecOrderActionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionType), 1);
}

///执行类型
// TThostFtdcActionTypeType char
static int PyCThostFtdcExecOrderActionField_set_ActionType(PyCThostFtdcExecOrderActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ActionType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ActionType)) {
        PyErr_SetString(PyExc_ValueError, "ActionType must be equal 1 bytes");
        return -1;
    }
    self->data.ActionType = *buf;
    return 0;
}
            
///状态信息
// TThostFtdcErrorMsgType char[81]
static PyObject *PyCThostFtdcExecOrderActionField_get_StatusMsg(PyCThostFtdcExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.StatusMsg, (Py_ssize_t)sizeof(self->data.StatusMsg));
    return PyBytes_FromString(self->data.StatusMsg);
}

///状态信息
// TThostFtdcErrorMsgType char[81]
static int PyCThostFtdcExecOrderActionField_set_StatusMsg(PyCThostFtdcExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderActionField_get_reserve1(PyCThostFtdcExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcExecOrderActionField_set_reserve1(PyCThostFtdcExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderActionField_get_BranchID(PyCThostFtdcExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BranchID, (Py_ssize_t)sizeof(self->data.BranchID));
    return PyBytes_FromString(self->data.BranchID);
}

///营业部编号
// TThostFtdcBranchIDType char[9]
static int PyCThostFtdcExecOrderActionField_set_BranchID(PyCThostFtdcExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderActionField_get_InvestUnitID(PyCThostFtdcExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcExecOrderActionField_set_InvestUnitID(PyCThostFtdcExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderActionField_get_reserve2(PyCThostFtdcExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve2, (Py_ssize_t)sizeof(self->data.reserve2));
    return PyBytes_FromString(self->data.reserve2);
}

///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static int PyCThostFtdcExecOrderActionField_set_reserve2(PyCThostFtdcExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderActionField_get_MacAddress(PyCThostFtdcExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcExecOrderActionField_set_MacAddress(PyCThostFtdcExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderActionField_get_InstrumentID(PyCThostFtdcExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcExecOrderActionField_set_InstrumentID(PyCThostFtdcExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderActionField_get_IPAddress(PyCThostFtdcExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcExecOrderActionField_set_IPAddress(PyCThostFtdcExecOrderActionField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcExecOrderActionField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcExecOrderActionField_get_BrokerID, (setter)PyCThostFtdcExecOrderActionField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcExecOrderActionField_get_InvestorID, (setter)PyCThostFtdcExecOrderActionField_set_InvestorID, (char *)"InvestorID", NULL},
    ///执行宣告操作引用 
    {(char *)"ExecOrderActionRef", (getter)PyCThostFtdcExecOrderActionField_get_ExecOrderActionRef, (setter)PyCThostFtdcExecOrderActionField_set_ExecOrderActionRef, (char *)"ExecOrderActionRef", NULL},
    ///执行宣告引用 
    {(char *)"ExecOrderRef", (getter)PyCThostFtdcExecOrderActionField_get_ExecOrderRef, (setter)PyCThostFtdcExecOrderActionField_set_ExecOrderRef, (char *)"ExecOrderRef", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcExecOrderActionField_get_RequestID, (setter)PyCThostFtdcExecOrderActionField_set_RequestID, (char *)"RequestID", NULL},
    ///前置编号 
    {(char *)"FrontID", (getter)PyCThostFtdcExecOrderActionField_get_FrontID, (setter)PyCThostFtdcExecOrderActionField_set_FrontID, (char *)"FrontID", NULL},
    ///会话编号 
    {(char *)"SessionID", (getter)PyCThostFtdcExecOrderActionField_get_SessionID, (setter)PyCThostFtdcExecOrderActionField_set_SessionID, (char *)"SessionID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcExecOrderActionField_get_ExchangeID, (setter)PyCThostFtdcExecOrderActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///执行宣告操作编号 
    {(char *)"ExecOrderSysID", (getter)PyCThostFtdcExecOrderActionField_get_ExecOrderSysID, (setter)PyCThostFtdcExecOrderActionField_set_ExecOrderSysID, (char *)"ExecOrderSysID", NULL},
    ///操作标志 
    {(char *)"ActionFlag", (getter)PyCThostFtdcExecOrderActionField_get_ActionFlag, (setter)PyCThostFtdcExecOrderActionField_set_ActionFlag, (char *)"ActionFlag", NULL},
    ///操作日期 
    {(char *)"ActionDate", (getter)PyCThostFtdcExecOrderActionField_get_ActionDate, (setter)PyCThostFtdcExecOrderActionField_set_ActionDate, (char *)"ActionDate", NULL},
    ///操作时间 
    {(char *)"ActionTime", (getter)PyCThostFtdcExecOrderActionField_get_ActionTime, (setter)PyCThostFtdcExecOrderActionField_set_ActionTime, (char *)"ActionTime", NULL},
    ///交易所交易员代码 
    {(char *)"TraderID", (getter)PyCThostFtdcExecOrderActionField_get_TraderID, (setter)PyCThostFtdcExecOrderActionField_set_TraderID, (char *)"TraderID", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcExecOrderActionField_get_InstallID, (setter)PyCThostFtdcExecOrderActionField_set_InstallID, (char *)"InstallID", NULL},
    ///本地执行宣告编号 
    {(char *)"ExecOrderLocalID", (getter)PyCThostFtdcExecOrderActionField_get_ExecOrderLocalID, (setter)PyCThostFtdcExecOrderActionField_set_ExecOrderLocalID, (char *)"ExecOrderLocalID", NULL},
    ///操作本地编号 
    {(char *)"ActionLocalID", (getter)PyCThostFtdcExecOrderActionField_get_ActionLocalID, (setter)PyCThostFtdcExecOrderActionField_set_ActionLocalID, (char *)"ActionLocalID", NULL},
    ///会员代码 
    {(char *)"ParticipantID", (getter)PyCThostFtdcExecOrderActionField_get_ParticipantID, (setter)PyCThostFtdcExecOrderActionField_set_ParticipantID, (char *)"ParticipantID", NULL},
    ///客户代码 
    {(char *)"ClientID", (getter)PyCThostFtdcExecOrderActionField_get_ClientID, (setter)PyCThostFtdcExecOrderActionField_set_ClientID, (char *)"ClientID", NULL},
    ///业务单元 
    {(char *)"BusinessUnit", (getter)PyCThostFtdcExecOrderActionField_get_BusinessUnit, (setter)PyCThostFtdcExecOrderActionField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
    ///报单操作状态 
    {(char *)"OrderActionStatus", (getter)PyCThostFtdcExecOrderActionField_get_OrderActionStatus, (setter)PyCThostFtdcExecOrderActionField_set_OrderActionStatus, (char *)"OrderActionStatus", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcExecOrderActionField_get_UserID, (setter)PyCThostFtdcExecOrderActionField_set_UserID, (char *)"UserID", NULL},
    ///执行类型 
    {(char *)"ActionType", (getter)PyCThostFtdcExecOrderActionField_get_ActionType, (setter)PyCThostFtdcExecOrderActionField_set_ActionType, (char *)"ActionType", NULL},
    ///状态信息 
    {(char *)"StatusMsg", (getter)PyCThostFtdcExecOrderActionField_get_StatusMsg, (setter)PyCThostFtdcExecOrderActionField_set_StatusMsg, (char *)"StatusMsg", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcExecOrderActionField_get_reserve1, (setter)PyCThostFtdcExecOrderActionField_set_reserve1, (char *)"reserve1", NULL},
    ///营业部编号 
    {(char *)"BranchID", (getter)PyCThostFtdcExecOrderActionField_get_BranchID, (setter)PyCThostFtdcExecOrderActionField_set_BranchID, (char *)"BranchID", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcExecOrderActionField_get_InvestUnitID, (setter)PyCThostFtdcExecOrderActionField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///保留的无效字段 
    {(char *)"reserve2", (getter)PyCThostFtdcExecOrderActionField_get_reserve2, (setter)PyCThostFtdcExecOrderActionField_set_reserve2, (char *)"reserve2", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcExecOrderActionField_get_MacAddress, (setter)PyCThostFtdcExecOrderActionField_set_MacAddress, (char *)"MacAddress", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcExecOrderActionField_get_InstrumentID, (setter)PyCThostFtdcExecOrderActionField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcExecOrderActionField_get_IPAddress, (setter)PyCThostFtdcExecOrderActionField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcExecOrderActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcExecOrderActionField",	/* tp_name */
	sizeof(PyCThostFtdcExecOrderActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcExecOrderActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcExecOrderActionField_repr,   /* tp_repr */
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
	"CThostFtdcExecOrderActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcExecOrderActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcExecOrderActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcExecOrderActionField_new,       /* tp_new */
};

int PyCThostFtdcExecOrderActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcExecOrderActionField  */
	if (PyType_Ready(&PyCThostFtdcExecOrderActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcExecOrderActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcExecOrderActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcExecOrderActionField", (PyObject *)&PyCThostFtdcExecOrderActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExecOrderActionField to module");
        Py_DECREF(&PyCThostFtdcExecOrderActionFieldType);
		return -1;
    }

    return 0;
}
