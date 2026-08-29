
#include "PyCThostFtdcHedgeCfmActionField.h"

///套保申请撤销回报

static PyObject *PyCThostFtdcHedgeCfmActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcHedgeCfmActionField *self = (PyCThostFtdcHedgeCfmActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcHedgeCfmActionField_init(PyCThostFtdcHedgeCfmActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "ActionDate", "ActionTime", "TraderID", "InstallID", "OrderLocalID", "ActionLocalID", "ParticipantID", "ClientID", "OrderActionStatus", "UserID", "ExchangeID", "OrderSysID", "RequestID", "StatusMsg", "OrderRef", "FrontID", "SessionID", "IPAddress", "MacAddress",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *HedgeCfmActionField_BrokerID = NULL;
    Py_ssize_t HedgeCfmActionField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *HedgeCfmActionField_InvestorID = NULL;
    Py_ssize_t HedgeCfmActionField_InvestorID_len = 0;
            
    ///操作日期
    // TThostFtdcDateType char[9]
    const char *HedgeCfmActionField_ActionDate = NULL;
    Py_ssize_t HedgeCfmActionField_ActionDate_len = 0;
            
    ///操作时间
    // TThostFtdcTimeType char[9]
    const char *HedgeCfmActionField_ActionTime = NULL;
    Py_ssize_t HedgeCfmActionField_ActionTime_len = 0;
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    const char *HedgeCfmActionField_TraderID = NULL;
    Py_ssize_t HedgeCfmActionField_TraderID_len = 0;
            
    ///安装编号
    // TThostFtdcInstallIDType int
    int HedgeCfmActionField_InstallID = 0;
        
    ///本地报单编号
    // TThostFtdcOrderLocalIDType char[13]
    const char *HedgeCfmActionField_OrderLocalID = NULL;
    Py_ssize_t HedgeCfmActionField_OrderLocalID_len = 0;
            
    ///操作本地编号
    // TThostFtdcOrderLocalIDType char[13]
    const char *HedgeCfmActionField_ActionLocalID = NULL;
    Py_ssize_t HedgeCfmActionField_ActionLocalID_len = 0;
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    const char *HedgeCfmActionField_ParticipantID = NULL;
    Py_ssize_t HedgeCfmActionField_ParticipantID_len = 0;
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    const char *HedgeCfmActionField_ClientID = NULL;
    Py_ssize_t HedgeCfmActionField_ClientID_len = 0;
            
    ///报单操作状态
    // TThostFtdcOrderActionStatusType char
    char HedgeCfmActionField_OrderActionStatus = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *HedgeCfmActionField_UserID = NULL;
    Py_ssize_t HedgeCfmActionField_UserID_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *HedgeCfmActionField_ExchangeID = NULL;
    Py_ssize_t HedgeCfmActionField_ExchangeID_len = 0;
            
    ///合同编号
    // TThostFtdcOrderSysIDType char[21]
    const char *HedgeCfmActionField_OrderSysID = NULL;
    Py_ssize_t HedgeCfmActionField_OrderSysID_len = 0;
            
    ///请求编号
    // TThostFtdcRequestIDType int
    int HedgeCfmActionField_RequestID = 0;
        
    ///状态信息
    // TThostFtdcErrorMsgType char[81]
    const char *HedgeCfmActionField_StatusMsg = NULL;
    Py_ssize_t HedgeCfmActionField_StatusMsg_len = 0;
            
    ///报单引用
    // TThostFtdcOrderRefType char[13]
    const char *HedgeCfmActionField_OrderRef = NULL;
    Py_ssize_t HedgeCfmActionField_OrderRef_len = 0;
            
    ///前置编号
    // TThostFtdcFrontIDType int
    int HedgeCfmActionField_FrontID = 0;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    int HedgeCfmActionField_SessionID = 0;
        
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *HedgeCfmActionField_IPAddress = NULL;
    Py_ssize_t HedgeCfmActionField_IPAddress_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *HedgeCfmActionField_MacAddress = NULL;
    Py_ssize_t HedgeCfmActionField_MacAddress_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#iy#y#y#y#cy#y#y#iy#y#iiy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#is#s#s#s#cs#s#s#is#s#iis#s#", (char **)kwlist
#endif

        , &HedgeCfmActionField_BrokerID, &HedgeCfmActionField_BrokerID_len 
        , &HedgeCfmActionField_InvestorID, &HedgeCfmActionField_InvestorID_len 
        , &HedgeCfmActionField_ActionDate, &HedgeCfmActionField_ActionDate_len 
        , &HedgeCfmActionField_ActionTime, &HedgeCfmActionField_ActionTime_len 
        , &HedgeCfmActionField_TraderID, &HedgeCfmActionField_TraderID_len 
        , &HedgeCfmActionField_InstallID 
        , &HedgeCfmActionField_OrderLocalID, &HedgeCfmActionField_OrderLocalID_len 
        , &HedgeCfmActionField_ActionLocalID, &HedgeCfmActionField_ActionLocalID_len 
        , &HedgeCfmActionField_ParticipantID, &HedgeCfmActionField_ParticipantID_len 
        , &HedgeCfmActionField_ClientID, &HedgeCfmActionField_ClientID_len 
        , &HedgeCfmActionField_OrderActionStatus 
        , &HedgeCfmActionField_UserID, &HedgeCfmActionField_UserID_len 
        , &HedgeCfmActionField_ExchangeID, &HedgeCfmActionField_ExchangeID_len 
        , &HedgeCfmActionField_OrderSysID, &HedgeCfmActionField_OrderSysID_len 
        , &HedgeCfmActionField_RequestID 
        , &HedgeCfmActionField_StatusMsg, &HedgeCfmActionField_StatusMsg_len 
        , &HedgeCfmActionField_OrderRef, &HedgeCfmActionField_OrderRef_len 
        , &HedgeCfmActionField_FrontID 
        , &HedgeCfmActionField_SessionID 
        , &HedgeCfmActionField_IPAddress, &HedgeCfmActionField_IPAddress_len 
        , &HedgeCfmActionField_MacAddress, &HedgeCfmActionField_MacAddress_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( HedgeCfmActionField_BrokerID != NULL ) {
        if(HedgeCfmActionField_BrokerID_len >= (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", HedgeCfmActionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, HedgeCfmActionField_BrokerID, HedgeCfmActionField_BrokerID_len);        
        strncpy(self->data.BrokerID, HedgeCfmActionField_BrokerID, sizeof(self->data.BrokerID) );
        HedgeCfmActionField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( HedgeCfmActionField_InvestorID != NULL ) {
        if(HedgeCfmActionField_InvestorID_len >= (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", HedgeCfmActionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, HedgeCfmActionField_InvestorID, HedgeCfmActionField_InvestorID_len);        
        strncpy(self->data.InvestorID, HedgeCfmActionField_InvestorID, sizeof(self->data.InvestorID) );
        HedgeCfmActionField_InvestorID = NULL;
    }
            
    ///操作日期
    // TThostFtdcDateType char[9]
    if( HedgeCfmActionField_ActionDate != NULL ) {
        if(HedgeCfmActionField_ActionDate_len >= (Py_ssize_t)sizeof(self->data.ActionDate)) {
            PyErr_Format(PyExc_ValueError, "ActionDate too long: length=%zd (max allowed is %zd)", HedgeCfmActionField_ActionDate_len, (Py_ssize_t)sizeof(self->data.ActionDate));
            return -1;
        }
        // memset(self->data.ActionDate, 0, sizeof(self->data.ActionDate));
        // memcpy(self->data.ActionDate, HedgeCfmActionField_ActionDate, HedgeCfmActionField_ActionDate_len);        
        strncpy(self->data.ActionDate, HedgeCfmActionField_ActionDate, sizeof(self->data.ActionDate) );
        HedgeCfmActionField_ActionDate = NULL;
    }
            
    ///操作时间
    // TThostFtdcTimeType char[9]
    if( HedgeCfmActionField_ActionTime != NULL ) {
        if(HedgeCfmActionField_ActionTime_len >= (Py_ssize_t)sizeof(self->data.ActionTime)) {
            PyErr_Format(PyExc_ValueError, "ActionTime too long: length=%zd (max allowed is %zd)", HedgeCfmActionField_ActionTime_len, (Py_ssize_t)sizeof(self->data.ActionTime));
            return -1;
        }
        // memset(self->data.ActionTime, 0, sizeof(self->data.ActionTime));
        // memcpy(self->data.ActionTime, HedgeCfmActionField_ActionTime, HedgeCfmActionField_ActionTime_len);        
        strncpy(self->data.ActionTime, HedgeCfmActionField_ActionTime, sizeof(self->data.ActionTime) );
        HedgeCfmActionField_ActionTime = NULL;
    }
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    if( HedgeCfmActionField_TraderID != NULL ) {
        if(HedgeCfmActionField_TraderID_len >= (Py_ssize_t)sizeof(self->data.TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", HedgeCfmActionField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
            return -1;
        }
        // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
        // memcpy(self->data.TraderID, HedgeCfmActionField_TraderID, HedgeCfmActionField_TraderID_len);        
        strncpy(self->data.TraderID, HedgeCfmActionField_TraderID, sizeof(self->data.TraderID) );
        HedgeCfmActionField_TraderID = NULL;
    }
            
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = HedgeCfmActionField_InstallID;
        
    ///本地报单编号
    // TThostFtdcOrderLocalIDType char[13]
    if( HedgeCfmActionField_OrderLocalID != NULL ) {
        if(HedgeCfmActionField_OrderLocalID_len >= (Py_ssize_t)sizeof(self->data.OrderLocalID)) {
            PyErr_Format(PyExc_ValueError, "OrderLocalID too long: length=%zd (max allowed is %zd)", HedgeCfmActionField_OrderLocalID_len, (Py_ssize_t)sizeof(self->data.OrderLocalID));
            return -1;
        }
        // memset(self->data.OrderLocalID, 0, sizeof(self->data.OrderLocalID));
        // memcpy(self->data.OrderLocalID, HedgeCfmActionField_OrderLocalID, HedgeCfmActionField_OrderLocalID_len);        
        strncpy(self->data.OrderLocalID, HedgeCfmActionField_OrderLocalID, sizeof(self->data.OrderLocalID) );
        HedgeCfmActionField_OrderLocalID = NULL;
    }
            
    ///操作本地编号
    // TThostFtdcOrderLocalIDType char[13]
    if( HedgeCfmActionField_ActionLocalID != NULL ) {
        if(HedgeCfmActionField_ActionLocalID_len >= (Py_ssize_t)sizeof(self->data.ActionLocalID)) {
            PyErr_Format(PyExc_ValueError, "ActionLocalID too long: length=%zd (max allowed is %zd)", HedgeCfmActionField_ActionLocalID_len, (Py_ssize_t)sizeof(self->data.ActionLocalID));
            return -1;
        }
        // memset(self->data.ActionLocalID, 0, sizeof(self->data.ActionLocalID));
        // memcpy(self->data.ActionLocalID, HedgeCfmActionField_ActionLocalID, HedgeCfmActionField_ActionLocalID_len);        
        strncpy(self->data.ActionLocalID, HedgeCfmActionField_ActionLocalID, sizeof(self->data.ActionLocalID) );
        HedgeCfmActionField_ActionLocalID = NULL;
    }
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    if( HedgeCfmActionField_ParticipantID != NULL ) {
        if(HedgeCfmActionField_ParticipantID_len >= (Py_ssize_t)sizeof(self->data.ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", HedgeCfmActionField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
            return -1;
        }
        // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
        // memcpy(self->data.ParticipantID, HedgeCfmActionField_ParticipantID, HedgeCfmActionField_ParticipantID_len);        
        strncpy(self->data.ParticipantID, HedgeCfmActionField_ParticipantID, sizeof(self->data.ParticipantID) );
        HedgeCfmActionField_ParticipantID = NULL;
    }
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    if( HedgeCfmActionField_ClientID != NULL ) {
        if(HedgeCfmActionField_ClientID_len >= (Py_ssize_t)sizeof(self->data.ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", HedgeCfmActionField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
            return -1;
        }
        // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
        // memcpy(self->data.ClientID, HedgeCfmActionField_ClientID, HedgeCfmActionField_ClientID_len);        
        strncpy(self->data.ClientID, HedgeCfmActionField_ClientID, sizeof(self->data.ClientID) );
        HedgeCfmActionField_ClientID = NULL;
    }
            
    ///报单操作状态
    // TThostFtdcOrderActionStatusType char
    self->data.OrderActionStatus = HedgeCfmActionField_OrderActionStatus;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( HedgeCfmActionField_UserID != NULL ) {
        if(HedgeCfmActionField_UserID_len >= (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", HedgeCfmActionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, HedgeCfmActionField_UserID, HedgeCfmActionField_UserID_len);        
        strncpy(self->data.UserID, HedgeCfmActionField_UserID, sizeof(self->data.UserID) );
        HedgeCfmActionField_UserID = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( HedgeCfmActionField_ExchangeID != NULL ) {
        if(HedgeCfmActionField_ExchangeID_len >= (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", HedgeCfmActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, HedgeCfmActionField_ExchangeID, HedgeCfmActionField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, HedgeCfmActionField_ExchangeID, sizeof(self->data.ExchangeID) );
        HedgeCfmActionField_ExchangeID = NULL;
    }
            
    ///合同编号
    // TThostFtdcOrderSysIDType char[21]
    if( HedgeCfmActionField_OrderSysID != NULL ) {
        if(HedgeCfmActionField_OrderSysID_len >= (Py_ssize_t)sizeof(self->data.OrderSysID)) {
            PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is %zd)", HedgeCfmActionField_OrderSysID_len, (Py_ssize_t)sizeof(self->data.OrderSysID));
            return -1;
        }
        // memset(self->data.OrderSysID, 0, sizeof(self->data.OrderSysID));
        // memcpy(self->data.OrderSysID, HedgeCfmActionField_OrderSysID, HedgeCfmActionField_OrderSysID_len);        
        strncpy(self->data.OrderSysID, HedgeCfmActionField_OrderSysID, sizeof(self->data.OrderSysID) );
        HedgeCfmActionField_OrderSysID = NULL;
    }
            
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = HedgeCfmActionField_RequestID;
        
    ///状态信息
    // TThostFtdcErrorMsgType char[81]
    if( HedgeCfmActionField_StatusMsg != NULL ) {
        if(HedgeCfmActionField_StatusMsg_len >= (Py_ssize_t)sizeof(self->data.StatusMsg)) {
            PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is %zd)", HedgeCfmActionField_StatusMsg_len, (Py_ssize_t)sizeof(self->data.StatusMsg));
            return -1;
        }
        // memset(self->data.StatusMsg, 0, sizeof(self->data.StatusMsg));
        // memcpy(self->data.StatusMsg, HedgeCfmActionField_StatusMsg, HedgeCfmActionField_StatusMsg_len);        
        strncpy(self->data.StatusMsg, HedgeCfmActionField_StatusMsg, sizeof(self->data.StatusMsg) );
        HedgeCfmActionField_StatusMsg = NULL;
    }
            
    ///报单引用
    // TThostFtdcOrderRefType char[13]
    if( HedgeCfmActionField_OrderRef != NULL ) {
        if(HedgeCfmActionField_OrderRef_len >= (Py_ssize_t)sizeof(self->data.OrderRef)) {
            PyErr_Format(PyExc_ValueError, "OrderRef too long: length=%zd (max allowed is %zd)", HedgeCfmActionField_OrderRef_len, (Py_ssize_t)sizeof(self->data.OrderRef));
            return -1;
        }
        // memset(self->data.OrderRef, 0, sizeof(self->data.OrderRef));
        // memcpy(self->data.OrderRef, HedgeCfmActionField_OrderRef, HedgeCfmActionField_OrderRef_len);        
        strncpy(self->data.OrderRef, HedgeCfmActionField_OrderRef, sizeof(self->data.OrderRef) );
        HedgeCfmActionField_OrderRef = NULL;
    }
            
    ///前置编号
    // TThostFtdcFrontIDType int
    self->data.FrontID = HedgeCfmActionField_FrontID;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    self->data.SessionID = HedgeCfmActionField_SessionID;
        
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( HedgeCfmActionField_IPAddress != NULL ) {
        if(HedgeCfmActionField_IPAddress_len >= (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", HedgeCfmActionField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, HedgeCfmActionField_IPAddress, HedgeCfmActionField_IPAddress_len);        
        strncpy(self->data.IPAddress, HedgeCfmActionField_IPAddress, sizeof(self->data.IPAddress) );
        HedgeCfmActionField_IPAddress = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( HedgeCfmActionField_MacAddress != NULL ) {
        if(HedgeCfmActionField_MacAddress_len >= (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", HedgeCfmActionField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, HedgeCfmActionField_MacAddress, HedgeCfmActionField_MacAddress_len);        
        strncpy(self->data.MacAddress, HedgeCfmActionField_MacAddress, sizeof(self->data.MacAddress) );
        HedgeCfmActionField_MacAddress = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcHedgeCfmActionField_dealloc(PyCThostFtdcHedgeCfmActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcHedgeCfmActionField_repr(PyCThostFtdcHedgeCfmActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:y,s:i,s:y,s:y,s:i,s:i,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:i,s:s,s:s,s:s,s:s,s:c,s:s,s:s,s:s,s:i,s:s,s:s,s:i,s:i,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"ActionDate", self->data.ActionDate//, (Py_ssize_t)sizeof(self->data.ActionDate) 
        ,"ActionTime", self->data.ActionTime//, (Py_ssize_t)sizeof(self->data.ActionTime) 
        ,"TraderID", self->data.TraderID//, (Py_ssize_t)sizeof(self->data.TraderID) 
        ,"InstallID", self->data.InstallID 
        ,"OrderLocalID", self->data.OrderLocalID//, (Py_ssize_t)sizeof(self->data.OrderLocalID) 
        ,"ActionLocalID", self->data.ActionLocalID//, (Py_ssize_t)sizeof(self->data.ActionLocalID) 
        ,"ParticipantID", self->data.ParticipantID//, (Py_ssize_t)sizeof(self->data.ParticipantID) 
        ,"ClientID", self->data.ClientID//, (Py_ssize_t)sizeof(self->data.ClientID) 
        ,"OrderActionStatus", self->data.OrderActionStatus 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"OrderSysID", self->data.OrderSysID//, (Py_ssize_t)sizeof(self->data.OrderSysID) 
        ,"RequestID", self->data.RequestID 
        ,"StatusMsg", self->data.StatusMsg//, (Py_ssize_t)sizeof(self->data.StatusMsg) 
        ,"OrderRef", self->data.OrderRef//, (Py_ssize_t)sizeof(self->data.OrderRef) 
        ,"FrontID", self->data.FrontID 
        ,"SessionID", self->data.SessionID 
        ,"IPAddress", self->data.IPAddress//, (Py_ssize_t)sizeof(self->data.IPAddress) 
        ,"MacAddress", self->data.MacAddress//, (Py_ssize_t)sizeof(self->data.MacAddress) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcHedgeCfmActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcHedgeCfmActionField_get_BrokerID(PyCThostFtdcHedgeCfmActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcHedgeCfmActionField_set_BrokerID(PyCThostFtdcHedgeCfmActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.BrokerID)) {
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
static PyObject *PyCThostFtdcHedgeCfmActionField_get_InvestorID(PyCThostFtdcHedgeCfmActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcHedgeCfmActionField_set_InvestorID(PyCThostFtdcHedgeCfmActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
    // memcpy(self->data.InvestorID, buf, len);
    strncpy(self->data.InvestorID, buf, sizeof(self->data.InvestorID));
    return 0;
}
            
///操作日期
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcHedgeCfmActionField_get_ActionDate(PyCThostFtdcHedgeCfmActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActionDate, (Py_ssize_t)sizeof(self->data.ActionDate));
    return PyBytes_FromString(self->data.ActionDate);
}

///操作日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcHedgeCfmActionField_set_ActionDate(PyCThostFtdcHedgeCfmActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ActionDate Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.ActionDate)) {
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
static PyObject *PyCThostFtdcHedgeCfmActionField_get_ActionTime(PyCThostFtdcHedgeCfmActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActionTime, (Py_ssize_t)sizeof(self->data.ActionTime));
    return PyBytes_FromString(self->data.ActionTime);
}

///操作时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcHedgeCfmActionField_set_ActionTime(PyCThostFtdcHedgeCfmActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ActionTime Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.ActionTime)) {
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
static PyObject *PyCThostFtdcHedgeCfmActionField_get_TraderID(PyCThostFtdcHedgeCfmActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TraderID, (Py_ssize_t)sizeof(self->data.TraderID));
    return PyBytes_FromString(self->data.TraderID);
}

///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static int PyCThostFtdcHedgeCfmActionField_set_TraderID(PyCThostFtdcHedgeCfmActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.TraderID)) {
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
static PyObject *PyCThostFtdcHedgeCfmActionField_get_InstallID(PyCThostFtdcHedgeCfmActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcHedgeCfmActionField_set_InstallID(PyCThostFtdcHedgeCfmActionField *self, PyObject* val, void *closure) {
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
        
///本地报单编号
// TThostFtdcOrderLocalIDType char[13]
static PyObject *PyCThostFtdcHedgeCfmActionField_get_OrderLocalID(PyCThostFtdcHedgeCfmActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderLocalID, (Py_ssize_t)sizeof(self->data.OrderLocalID));
    return PyBytes_FromString(self->data.OrderLocalID);
}

///本地报单编号
// TThostFtdcOrderLocalIDType char[13]
static int PyCThostFtdcHedgeCfmActionField_set_OrderLocalID(PyCThostFtdcHedgeCfmActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderLocalID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.OrderLocalID)) {
        PyErr_SetString(PyExc_ValueError, "OrderLocalID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.OrderLocalID, 0, sizeof(self->data.OrderLocalID));
    // memcpy(self->data.OrderLocalID, buf, len);
    strncpy(self->data.OrderLocalID, buf, sizeof(self->data.OrderLocalID));
    return 0;
}
            
///操作本地编号
// TThostFtdcOrderLocalIDType char[13]
static PyObject *PyCThostFtdcHedgeCfmActionField_get_ActionLocalID(PyCThostFtdcHedgeCfmActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActionLocalID, (Py_ssize_t)sizeof(self->data.ActionLocalID));
    return PyBytes_FromString(self->data.ActionLocalID);
}

///操作本地编号
// TThostFtdcOrderLocalIDType char[13]
static int PyCThostFtdcHedgeCfmActionField_set_ActionLocalID(PyCThostFtdcHedgeCfmActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ActionLocalID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.ActionLocalID)) {
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
static PyObject *PyCThostFtdcHedgeCfmActionField_get_ParticipantID(PyCThostFtdcHedgeCfmActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParticipantID, (Py_ssize_t)sizeof(self->data.ParticipantID));
    return PyBytes_FromString(self->data.ParticipantID);
}

///会员代码
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcHedgeCfmActionField_set_ParticipantID(PyCThostFtdcHedgeCfmActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.ParticipantID)) {
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
static PyObject *PyCThostFtdcHedgeCfmActionField_get_ClientID(PyCThostFtdcHedgeCfmActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientID, (Py_ssize_t)sizeof(self->data.ClientID));
    return PyBytes_FromString(self->data.ClientID);
}

///客户代码
// TThostFtdcClientIDType char[11]
static int PyCThostFtdcHedgeCfmActionField_set_ClientID(PyCThostFtdcHedgeCfmActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 11 bytes");
        return -1;
    }
    // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
    // memcpy(self->data.ClientID, buf, len);
    strncpy(self->data.ClientID, buf, sizeof(self->data.ClientID));
    return 0;
}
            
///报单操作状态
// TThostFtdcOrderActionStatusType char
static PyObject *PyCThostFtdcHedgeCfmActionField_get_OrderActionStatus(PyCThostFtdcHedgeCfmActionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OrderActionStatus), 1);
}

///报单操作状态
// TThostFtdcOrderActionStatusType char
static int PyCThostFtdcHedgeCfmActionField_set_OrderActionStatus(PyCThostFtdcHedgeCfmActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcHedgeCfmActionField_get_UserID(PyCThostFtdcHedgeCfmActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcHedgeCfmActionField_set_UserID(PyCThostFtdcHedgeCfmActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 16 bytes");
        return -1;
    }
    // memset(self->data.UserID, 0, sizeof(self->data.UserID));
    // memcpy(self->data.UserID, buf, len);
    strncpy(self->data.UserID, buf, sizeof(self->data.UserID));
    return 0;
}
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcHedgeCfmActionField_get_ExchangeID(PyCThostFtdcHedgeCfmActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcHedgeCfmActionField_set_ExchangeID(PyCThostFtdcHedgeCfmActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
    // memcpy(self->data.ExchangeID, buf, len);
    strncpy(self->data.ExchangeID, buf, sizeof(self->data.ExchangeID));
    return 0;
}
            
///合同编号
// TThostFtdcOrderSysIDType char[21]
static PyObject *PyCThostFtdcHedgeCfmActionField_get_OrderSysID(PyCThostFtdcHedgeCfmActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderSysID, (Py_ssize_t)sizeof(self->data.OrderSysID));
    return PyBytes_FromString(self->data.OrderSysID);
}

///合同编号
// TThostFtdcOrderSysIDType char[21]
static int PyCThostFtdcHedgeCfmActionField_set_OrderSysID(PyCThostFtdcHedgeCfmActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderSysID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.OrderSysID)) {
        PyErr_SetString(PyExc_ValueError, "OrderSysID must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.OrderSysID, 0, sizeof(self->data.OrderSysID));
    // memcpy(self->data.OrderSysID, buf, len);
    strncpy(self->data.OrderSysID, buf, sizeof(self->data.OrderSysID));
    return 0;
}
            
///请求编号
// TThostFtdcRequestIDType int
static PyObject *PyCThostFtdcHedgeCfmActionField_get_RequestID(PyCThostFtdcHedgeCfmActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcHedgeCfmActionField_set_RequestID(PyCThostFtdcHedgeCfmActionField *self, PyObject* val, void *closure) {
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
        
///状态信息
// TThostFtdcErrorMsgType char[81]
static PyObject *PyCThostFtdcHedgeCfmActionField_get_StatusMsg(PyCThostFtdcHedgeCfmActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.StatusMsg, (Py_ssize_t)sizeof(self->data.StatusMsg));
    return PyBytes_FromString(self->data.StatusMsg);
}

///状态信息
// TThostFtdcErrorMsgType char[81]
static int PyCThostFtdcHedgeCfmActionField_set_StatusMsg(PyCThostFtdcHedgeCfmActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "StatusMsg Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.StatusMsg)) {
        PyErr_SetString(PyExc_ValueError, "StatusMsg must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.StatusMsg, 0, sizeof(self->data.StatusMsg));
    // memcpy(self->data.StatusMsg, buf, len);
    strncpy(self->data.StatusMsg, buf, sizeof(self->data.StatusMsg));
    return 0;
}
            
///报单引用
// TThostFtdcOrderRefType char[13]
static PyObject *PyCThostFtdcHedgeCfmActionField_get_OrderRef(PyCThostFtdcHedgeCfmActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderRef, (Py_ssize_t)sizeof(self->data.OrderRef));
    return PyBytes_FromString(self->data.OrderRef);
}

///报单引用
// TThostFtdcOrderRefType char[13]
static int PyCThostFtdcHedgeCfmActionField_set_OrderRef(PyCThostFtdcHedgeCfmActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderRef Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.OrderRef)) {
        PyErr_SetString(PyExc_ValueError, "OrderRef must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.OrderRef, 0, sizeof(self->data.OrderRef));
    // memcpy(self->data.OrderRef, buf, len);
    strncpy(self->data.OrderRef, buf, sizeof(self->data.OrderRef));
    return 0;
}
            
///前置编号
// TThostFtdcFrontIDType int
static PyObject *PyCThostFtdcHedgeCfmActionField_get_FrontID(PyCThostFtdcHedgeCfmActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FrontID);
#else
    return PyInt_FromLong(self->data.FrontID);
#endif
}

///前置编号
// TThostFtdcFrontIDType int
static int PyCThostFtdcHedgeCfmActionField_set_FrontID(PyCThostFtdcHedgeCfmActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcHedgeCfmActionField_get_SessionID(PyCThostFtdcHedgeCfmActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话编号
// TThostFtdcSessionIDType int
static int PyCThostFtdcHedgeCfmActionField_set_SessionID(PyCThostFtdcHedgeCfmActionField *self, PyObject* val, void *closure) {
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
        
///IP地址
// TThostFtdcIPAddressType char[33]
static PyObject *PyCThostFtdcHedgeCfmActionField_get_IPAddress(PyCThostFtdcHedgeCfmActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcHedgeCfmActionField_set_IPAddress(PyCThostFtdcHedgeCfmActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 33 bytes");
        return -1;
    }
    // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
    // memcpy(self->data.IPAddress, buf, len);
    strncpy(self->data.IPAddress, buf, sizeof(self->data.IPAddress));
    return 0;
}
            
///Mac地址
// TThostFtdcMacAddressType char[21]
static PyObject *PyCThostFtdcHedgeCfmActionField_get_MacAddress(PyCThostFtdcHedgeCfmActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcHedgeCfmActionField_set_MacAddress(PyCThostFtdcHedgeCfmActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
    // memcpy(self->data.MacAddress, buf, len);
    strncpy(self->data.MacAddress, buf, sizeof(self->data.MacAddress));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcHedgeCfmActionField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcHedgeCfmActionField_get_BrokerID, (setter)PyCThostFtdcHedgeCfmActionField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcHedgeCfmActionField_get_InvestorID, (setter)PyCThostFtdcHedgeCfmActionField_set_InvestorID, (char *)"InvestorID", NULL},
    ///操作日期 
    {(char *)"ActionDate", (getter)PyCThostFtdcHedgeCfmActionField_get_ActionDate, (setter)PyCThostFtdcHedgeCfmActionField_set_ActionDate, (char *)"ActionDate", NULL},
    ///操作时间 
    {(char *)"ActionTime", (getter)PyCThostFtdcHedgeCfmActionField_get_ActionTime, (setter)PyCThostFtdcHedgeCfmActionField_set_ActionTime, (char *)"ActionTime", NULL},
    ///交易所交易员代码 
    {(char *)"TraderID", (getter)PyCThostFtdcHedgeCfmActionField_get_TraderID, (setter)PyCThostFtdcHedgeCfmActionField_set_TraderID, (char *)"TraderID", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcHedgeCfmActionField_get_InstallID, (setter)PyCThostFtdcHedgeCfmActionField_set_InstallID, (char *)"InstallID", NULL},
    ///本地报单编号 
    {(char *)"OrderLocalID", (getter)PyCThostFtdcHedgeCfmActionField_get_OrderLocalID, (setter)PyCThostFtdcHedgeCfmActionField_set_OrderLocalID, (char *)"OrderLocalID", NULL},
    ///操作本地编号 
    {(char *)"ActionLocalID", (getter)PyCThostFtdcHedgeCfmActionField_get_ActionLocalID, (setter)PyCThostFtdcHedgeCfmActionField_set_ActionLocalID, (char *)"ActionLocalID", NULL},
    ///会员代码 
    {(char *)"ParticipantID", (getter)PyCThostFtdcHedgeCfmActionField_get_ParticipantID, (setter)PyCThostFtdcHedgeCfmActionField_set_ParticipantID, (char *)"ParticipantID", NULL},
    ///客户代码 
    {(char *)"ClientID", (getter)PyCThostFtdcHedgeCfmActionField_get_ClientID, (setter)PyCThostFtdcHedgeCfmActionField_set_ClientID, (char *)"ClientID", NULL},
    ///报单操作状态 
    {(char *)"OrderActionStatus", (getter)PyCThostFtdcHedgeCfmActionField_get_OrderActionStatus, (setter)PyCThostFtdcHedgeCfmActionField_set_OrderActionStatus, (char *)"OrderActionStatus", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcHedgeCfmActionField_get_UserID, (setter)PyCThostFtdcHedgeCfmActionField_set_UserID, (char *)"UserID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcHedgeCfmActionField_get_ExchangeID, (setter)PyCThostFtdcHedgeCfmActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///合同编号 
    {(char *)"OrderSysID", (getter)PyCThostFtdcHedgeCfmActionField_get_OrderSysID, (setter)PyCThostFtdcHedgeCfmActionField_set_OrderSysID, (char *)"OrderSysID", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcHedgeCfmActionField_get_RequestID, (setter)PyCThostFtdcHedgeCfmActionField_set_RequestID, (char *)"RequestID", NULL},
    ///状态信息 
    {(char *)"StatusMsg", (getter)PyCThostFtdcHedgeCfmActionField_get_StatusMsg, (setter)PyCThostFtdcHedgeCfmActionField_set_StatusMsg, (char *)"StatusMsg", NULL},
    ///报单引用 
    {(char *)"OrderRef", (getter)PyCThostFtdcHedgeCfmActionField_get_OrderRef, (setter)PyCThostFtdcHedgeCfmActionField_set_OrderRef, (char *)"OrderRef", NULL},
    ///前置编号 
    {(char *)"FrontID", (getter)PyCThostFtdcHedgeCfmActionField_get_FrontID, (setter)PyCThostFtdcHedgeCfmActionField_set_FrontID, (char *)"FrontID", NULL},
    ///会话编号 
    {(char *)"SessionID", (getter)PyCThostFtdcHedgeCfmActionField_get_SessionID, (setter)PyCThostFtdcHedgeCfmActionField_set_SessionID, (char *)"SessionID", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcHedgeCfmActionField_get_IPAddress, (setter)PyCThostFtdcHedgeCfmActionField_set_IPAddress, (char *)"IPAddress", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcHedgeCfmActionField_get_MacAddress, (setter)PyCThostFtdcHedgeCfmActionField_set_MacAddress, (char *)"MacAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcHedgeCfmActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcHedgeCfmActionField",	/* tp_name */
	sizeof(PyCThostFtdcHedgeCfmActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcHedgeCfmActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcHedgeCfmActionField_repr,   /* tp_repr */
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
	"CThostFtdcHedgeCfmActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcHedgeCfmActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcHedgeCfmActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcHedgeCfmActionField_new,       /* tp_new */
};

int PyCThostFtdcHedgeCfmActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcHedgeCfmActionField  */
	if (PyType_Ready(&PyCThostFtdcHedgeCfmActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcHedgeCfmActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcHedgeCfmActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcHedgeCfmActionField", (PyObject *)&PyCThostFtdcHedgeCfmActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcHedgeCfmActionField to module");
        Py_DECREF(&PyCThostFtdcHedgeCfmActionFieldType);
		return -1;
    }

    return 0;
}
