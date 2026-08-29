
#include "PyCThostFtdcSpdApplyActionField.h"

///套利申请撤销回报

static PyObject *PyCThostFtdcSpdApplyActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSpdApplyActionField *self = (PyCThostFtdcSpdApplyActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSpdApplyActionField_init(PyCThostFtdcSpdApplyActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "ActionDate", "ActionTime", "TraderID", "InstallID", "OrderLocalID", "ActionLocalID", "ParticipantID", "ClientID", "OrderActionStatus", "UserID", "ExchangeID", "OrderSysID", "RequestID", "StatusMsg", "OrderRef", "FrontID", "SessionID", "IPAddress", "MacAddress",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *SpdApplyActionField_BrokerID = NULL;
    Py_ssize_t SpdApplyActionField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *SpdApplyActionField_InvestorID = NULL;
    Py_ssize_t SpdApplyActionField_InvestorID_len = 0;
            
    ///操作日期
    // TThostFtdcDateType char[9]
    const char *SpdApplyActionField_ActionDate = NULL;
    Py_ssize_t SpdApplyActionField_ActionDate_len = 0;
            
    ///操作时间
    // TThostFtdcTimeType char[9]
    const char *SpdApplyActionField_ActionTime = NULL;
    Py_ssize_t SpdApplyActionField_ActionTime_len = 0;
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    const char *SpdApplyActionField_TraderID = NULL;
    Py_ssize_t SpdApplyActionField_TraderID_len = 0;
            
    ///安装编号
    // TThostFtdcInstallIDType int
    int SpdApplyActionField_InstallID = 0;
        
    ///本地报单编号
    // TThostFtdcOrderLocalIDType char[13]
    const char *SpdApplyActionField_OrderLocalID = NULL;
    Py_ssize_t SpdApplyActionField_OrderLocalID_len = 0;
            
    ///操作本地编号
    // TThostFtdcOrderLocalIDType char[13]
    const char *SpdApplyActionField_ActionLocalID = NULL;
    Py_ssize_t SpdApplyActionField_ActionLocalID_len = 0;
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    const char *SpdApplyActionField_ParticipantID = NULL;
    Py_ssize_t SpdApplyActionField_ParticipantID_len = 0;
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    const char *SpdApplyActionField_ClientID = NULL;
    Py_ssize_t SpdApplyActionField_ClientID_len = 0;
            
    ///报单操作状态
    // TThostFtdcOrderActionStatusType char
    char SpdApplyActionField_OrderActionStatus = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *SpdApplyActionField_UserID = NULL;
    Py_ssize_t SpdApplyActionField_UserID_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *SpdApplyActionField_ExchangeID = NULL;
    Py_ssize_t SpdApplyActionField_ExchangeID_len = 0;
            
    ///合同编号
    // TThostFtdcOrderSysIDType char[21]
    const char *SpdApplyActionField_OrderSysID = NULL;
    Py_ssize_t SpdApplyActionField_OrderSysID_len = 0;
            
    ///请求编号
    // TThostFtdcRequestIDType int
    int SpdApplyActionField_RequestID = 0;
        
    ///状态信息
    // TThostFtdcErrorMsgType char[81]
    const char *SpdApplyActionField_StatusMsg = NULL;
    Py_ssize_t SpdApplyActionField_StatusMsg_len = 0;
            
    ///报单引用
    // TThostFtdcOrderRefType char[13]
    const char *SpdApplyActionField_OrderRef = NULL;
    Py_ssize_t SpdApplyActionField_OrderRef_len = 0;
            
    ///前置编号
    // TThostFtdcFrontIDType int
    int SpdApplyActionField_FrontID = 0;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    int SpdApplyActionField_SessionID = 0;
        
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *SpdApplyActionField_IPAddress = NULL;
    Py_ssize_t SpdApplyActionField_IPAddress_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *SpdApplyActionField_MacAddress = NULL;
    Py_ssize_t SpdApplyActionField_MacAddress_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#iy#y#y#y#cy#y#y#iy#y#iiy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#is#s#s#s#cs#s#s#is#s#iis#s#", (char **)kwlist
#endif

        , &SpdApplyActionField_BrokerID, &SpdApplyActionField_BrokerID_len 
        , &SpdApplyActionField_InvestorID, &SpdApplyActionField_InvestorID_len 
        , &SpdApplyActionField_ActionDate, &SpdApplyActionField_ActionDate_len 
        , &SpdApplyActionField_ActionTime, &SpdApplyActionField_ActionTime_len 
        , &SpdApplyActionField_TraderID, &SpdApplyActionField_TraderID_len 
        , &SpdApplyActionField_InstallID 
        , &SpdApplyActionField_OrderLocalID, &SpdApplyActionField_OrderLocalID_len 
        , &SpdApplyActionField_ActionLocalID, &SpdApplyActionField_ActionLocalID_len 
        , &SpdApplyActionField_ParticipantID, &SpdApplyActionField_ParticipantID_len 
        , &SpdApplyActionField_ClientID, &SpdApplyActionField_ClientID_len 
        , &SpdApplyActionField_OrderActionStatus 
        , &SpdApplyActionField_UserID, &SpdApplyActionField_UserID_len 
        , &SpdApplyActionField_ExchangeID, &SpdApplyActionField_ExchangeID_len 
        , &SpdApplyActionField_OrderSysID, &SpdApplyActionField_OrderSysID_len 
        , &SpdApplyActionField_RequestID 
        , &SpdApplyActionField_StatusMsg, &SpdApplyActionField_StatusMsg_len 
        , &SpdApplyActionField_OrderRef, &SpdApplyActionField_OrderRef_len 
        , &SpdApplyActionField_FrontID 
        , &SpdApplyActionField_SessionID 
        , &SpdApplyActionField_IPAddress, &SpdApplyActionField_IPAddress_len 
        , &SpdApplyActionField_MacAddress, &SpdApplyActionField_MacAddress_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( SpdApplyActionField_BrokerID != NULL ) {
        if(SpdApplyActionField_BrokerID_len >= (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", SpdApplyActionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, SpdApplyActionField_BrokerID, SpdApplyActionField_BrokerID_len);        
        strncpy(self->data.BrokerID, SpdApplyActionField_BrokerID, sizeof(self->data.BrokerID) );
        SpdApplyActionField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( SpdApplyActionField_InvestorID != NULL ) {
        if(SpdApplyActionField_InvestorID_len >= (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", SpdApplyActionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, SpdApplyActionField_InvestorID, SpdApplyActionField_InvestorID_len);        
        strncpy(self->data.InvestorID, SpdApplyActionField_InvestorID, sizeof(self->data.InvestorID) );
        SpdApplyActionField_InvestorID = NULL;
    }
            
    ///操作日期
    // TThostFtdcDateType char[9]
    if( SpdApplyActionField_ActionDate != NULL ) {
        if(SpdApplyActionField_ActionDate_len >= (Py_ssize_t)sizeof(self->data.ActionDate)) {
            PyErr_Format(PyExc_ValueError, "ActionDate too long: length=%zd (max allowed is %zd)", SpdApplyActionField_ActionDate_len, (Py_ssize_t)sizeof(self->data.ActionDate));
            return -1;
        }
        // memset(self->data.ActionDate, 0, sizeof(self->data.ActionDate));
        // memcpy(self->data.ActionDate, SpdApplyActionField_ActionDate, SpdApplyActionField_ActionDate_len);        
        strncpy(self->data.ActionDate, SpdApplyActionField_ActionDate, sizeof(self->data.ActionDate) );
        SpdApplyActionField_ActionDate = NULL;
    }
            
    ///操作时间
    // TThostFtdcTimeType char[9]
    if( SpdApplyActionField_ActionTime != NULL ) {
        if(SpdApplyActionField_ActionTime_len >= (Py_ssize_t)sizeof(self->data.ActionTime)) {
            PyErr_Format(PyExc_ValueError, "ActionTime too long: length=%zd (max allowed is %zd)", SpdApplyActionField_ActionTime_len, (Py_ssize_t)sizeof(self->data.ActionTime));
            return -1;
        }
        // memset(self->data.ActionTime, 0, sizeof(self->data.ActionTime));
        // memcpy(self->data.ActionTime, SpdApplyActionField_ActionTime, SpdApplyActionField_ActionTime_len);        
        strncpy(self->data.ActionTime, SpdApplyActionField_ActionTime, sizeof(self->data.ActionTime) );
        SpdApplyActionField_ActionTime = NULL;
    }
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    if( SpdApplyActionField_TraderID != NULL ) {
        if(SpdApplyActionField_TraderID_len >= (Py_ssize_t)sizeof(self->data.TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", SpdApplyActionField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
            return -1;
        }
        // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
        // memcpy(self->data.TraderID, SpdApplyActionField_TraderID, SpdApplyActionField_TraderID_len);        
        strncpy(self->data.TraderID, SpdApplyActionField_TraderID, sizeof(self->data.TraderID) );
        SpdApplyActionField_TraderID = NULL;
    }
            
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = SpdApplyActionField_InstallID;
        
    ///本地报单编号
    // TThostFtdcOrderLocalIDType char[13]
    if( SpdApplyActionField_OrderLocalID != NULL ) {
        if(SpdApplyActionField_OrderLocalID_len >= (Py_ssize_t)sizeof(self->data.OrderLocalID)) {
            PyErr_Format(PyExc_ValueError, "OrderLocalID too long: length=%zd (max allowed is %zd)", SpdApplyActionField_OrderLocalID_len, (Py_ssize_t)sizeof(self->data.OrderLocalID));
            return -1;
        }
        // memset(self->data.OrderLocalID, 0, sizeof(self->data.OrderLocalID));
        // memcpy(self->data.OrderLocalID, SpdApplyActionField_OrderLocalID, SpdApplyActionField_OrderLocalID_len);        
        strncpy(self->data.OrderLocalID, SpdApplyActionField_OrderLocalID, sizeof(self->data.OrderLocalID) );
        SpdApplyActionField_OrderLocalID = NULL;
    }
            
    ///操作本地编号
    // TThostFtdcOrderLocalIDType char[13]
    if( SpdApplyActionField_ActionLocalID != NULL ) {
        if(SpdApplyActionField_ActionLocalID_len >= (Py_ssize_t)sizeof(self->data.ActionLocalID)) {
            PyErr_Format(PyExc_ValueError, "ActionLocalID too long: length=%zd (max allowed is %zd)", SpdApplyActionField_ActionLocalID_len, (Py_ssize_t)sizeof(self->data.ActionLocalID));
            return -1;
        }
        // memset(self->data.ActionLocalID, 0, sizeof(self->data.ActionLocalID));
        // memcpy(self->data.ActionLocalID, SpdApplyActionField_ActionLocalID, SpdApplyActionField_ActionLocalID_len);        
        strncpy(self->data.ActionLocalID, SpdApplyActionField_ActionLocalID, sizeof(self->data.ActionLocalID) );
        SpdApplyActionField_ActionLocalID = NULL;
    }
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    if( SpdApplyActionField_ParticipantID != NULL ) {
        if(SpdApplyActionField_ParticipantID_len >= (Py_ssize_t)sizeof(self->data.ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", SpdApplyActionField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
            return -1;
        }
        // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
        // memcpy(self->data.ParticipantID, SpdApplyActionField_ParticipantID, SpdApplyActionField_ParticipantID_len);        
        strncpy(self->data.ParticipantID, SpdApplyActionField_ParticipantID, sizeof(self->data.ParticipantID) );
        SpdApplyActionField_ParticipantID = NULL;
    }
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    if( SpdApplyActionField_ClientID != NULL ) {
        if(SpdApplyActionField_ClientID_len >= (Py_ssize_t)sizeof(self->data.ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", SpdApplyActionField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
            return -1;
        }
        // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
        // memcpy(self->data.ClientID, SpdApplyActionField_ClientID, SpdApplyActionField_ClientID_len);        
        strncpy(self->data.ClientID, SpdApplyActionField_ClientID, sizeof(self->data.ClientID) );
        SpdApplyActionField_ClientID = NULL;
    }
            
    ///报单操作状态
    // TThostFtdcOrderActionStatusType char
    self->data.OrderActionStatus = SpdApplyActionField_OrderActionStatus;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( SpdApplyActionField_UserID != NULL ) {
        if(SpdApplyActionField_UserID_len >= (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", SpdApplyActionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, SpdApplyActionField_UserID, SpdApplyActionField_UserID_len);        
        strncpy(self->data.UserID, SpdApplyActionField_UserID, sizeof(self->data.UserID) );
        SpdApplyActionField_UserID = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( SpdApplyActionField_ExchangeID != NULL ) {
        if(SpdApplyActionField_ExchangeID_len >= (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", SpdApplyActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, SpdApplyActionField_ExchangeID, SpdApplyActionField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, SpdApplyActionField_ExchangeID, sizeof(self->data.ExchangeID) );
        SpdApplyActionField_ExchangeID = NULL;
    }
            
    ///合同编号
    // TThostFtdcOrderSysIDType char[21]
    if( SpdApplyActionField_OrderSysID != NULL ) {
        if(SpdApplyActionField_OrderSysID_len >= (Py_ssize_t)sizeof(self->data.OrderSysID)) {
            PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is %zd)", SpdApplyActionField_OrderSysID_len, (Py_ssize_t)sizeof(self->data.OrderSysID));
            return -1;
        }
        // memset(self->data.OrderSysID, 0, sizeof(self->data.OrderSysID));
        // memcpy(self->data.OrderSysID, SpdApplyActionField_OrderSysID, SpdApplyActionField_OrderSysID_len);        
        strncpy(self->data.OrderSysID, SpdApplyActionField_OrderSysID, sizeof(self->data.OrderSysID) );
        SpdApplyActionField_OrderSysID = NULL;
    }
            
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = SpdApplyActionField_RequestID;
        
    ///状态信息
    // TThostFtdcErrorMsgType char[81]
    if( SpdApplyActionField_StatusMsg != NULL ) {
        if(SpdApplyActionField_StatusMsg_len >= (Py_ssize_t)sizeof(self->data.StatusMsg)) {
            PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is %zd)", SpdApplyActionField_StatusMsg_len, (Py_ssize_t)sizeof(self->data.StatusMsg));
            return -1;
        }
        // memset(self->data.StatusMsg, 0, sizeof(self->data.StatusMsg));
        // memcpy(self->data.StatusMsg, SpdApplyActionField_StatusMsg, SpdApplyActionField_StatusMsg_len);        
        strncpy(self->data.StatusMsg, SpdApplyActionField_StatusMsg, sizeof(self->data.StatusMsg) );
        SpdApplyActionField_StatusMsg = NULL;
    }
            
    ///报单引用
    // TThostFtdcOrderRefType char[13]
    if( SpdApplyActionField_OrderRef != NULL ) {
        if(SpdApplyActionField_OrderRef_len >= (Py_ssize_t)sizeof(self->data.OrderRef)) {
            PyErr_Format(PyExc_ValueError, "OrderRef too long: length=%zd (max allowed is %zd)", SpdApplyActionField_OrderRef_len, (Py_ssize_t)sizeof(self->data.OrderRef));
            return -1;
        }
        // memset(self->data.OrderRef, 0, sizeof(self->data.OrderRef));
        // memcpy(self->data.OrderRef, SpdApplyActionField_OrderRef, SpdApplyActionField_OrderRef_len);        
        strncpy(self->data.OrderRef, SpdApplyActionField_OrderRef, sizeof(self->data.OrderRef) );
        SpdApplyActionField_OrderRef = NULL;
    }
            
    ///前置编号
    // TThostFtdcFrontIDType int
    self->data.FrontID = SpdApplyActionField_FrontID;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    self->data.SessionID = SpdApplyActionField_SessionID;
        
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( SpdApplyActionField_IPAddress != NULL ) {
        if(SpdApplyActionField_IPAddress_len >= (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", SpdApplyActionField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, SpdApplyActionField_IPAddress, SpdApplyActionField_IPAddress_len);        
        strncpy(self->data.IPAddress, SpdApplyActionField_IPAddress, sizeof(self->data.IPAddress) );
        SpdApplyActionField_IPAddress = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( SpdApplyActionField_MacAddress != NULL ) {
        if(SpdApplyActionField_MacAddress_len >= (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", SpdApplyActionField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, SpdApplyActionField_MacAddress, SpdApplyActionField_MacAddress_len);        
        strncpy(self->data.MacAddress, SpdApplyActionField_MacAddress, sizeof(self->data.MacAddress) );
        SpdApplyActionField_MacAddress = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcSpdApplyActionField_dealloc(PyCThostFtdcSpdApplyActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSpdApplyActionField_repr(PyCThostFtdcSpdApplyActionField *self) {

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSpdApplyActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcSpdApplyActionField_get_BrokerID(PyCThostFtdcSpdApplyActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcSpdApplyActionField_set_BrokerID(PyCThostFtdcSpdApplyActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSpdApplyActionField_get_InvestorID(PyCThostFtdcSpdApplyActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcSpdApplyActionField_set_InvestorID(PyCThostFtdcSpdApplyActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSpdApplyActionField_get_ActionDate(PyCThostFtdcSpdApplyActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActionDate, (Py_ssize_t)sizeof(self->data.ActionDate));
    return PyBytes_FromString(self->data.ActionDate);
}

///操作日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcSpdApplyActionField_set_ActionDate(PyCThostFtdcSpdApplyActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSpdApplyActionField_get_ActionTime(PyCThostFtdcSpdApplyActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActionTime, (Py_ssize_t)sizeof(self->data.ActionTime));
    return PyBytes_FromString(self->data.ActionTime);
}

///操作时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcSpdApplyActionField_set_ActionTime(PyCThostFtdcSpdApplyActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSpdApplyActionField_get_TraderID(PyCThostFtdcSpdApplyActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TraderID, (Py_ssize_t)sizeof(self->data.TraderID));
    return PyBytes_FromString(self->data.TraderID);
}

///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static int PyCThostFtdcSpdApplyActionField_set_TraderID(PyCThostFtdcSpdApplyActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSpdApplyActionField_get_InstallID(PyCThostFtdcSpdApplyActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcSpdApplyActionField_set_InstallID(PyCThostFtdcSpdApplyActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSpdApplyActionField_get_OrderLocalID(PyCThostFtdcSpdApplyActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderLocalID, (Py_ssize_t)sizeof(self->data.OrderLocalID));
    return PyBytes_FromString(self->data.OrderLocalID);
}

///本地报单编号
// TThostFtdcOrderLocalIDType char[13]
static int PyCThostFtdcSpdApplyActionField_set_OrderLocalID(PyCThostFtdcSpdApplyActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSpdApplyActionField_get_ActionLocalID(PyCThostFtdcSpdApplyActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActionLocalID, (Py_ssize_t)sizeof(self->data.ActionLocalID));
    return PyBytes_FromString(self->data.ActionLocalID);
}

///操作本地编号
// TThostFtdcOrderLocalIDType char[13]
static int PyCThostFtdcSpdApplyActionField_set_ActionLocalID(PyCThostFtdcSpdApplyActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSpdApplyActionField_get_ParticipantID(PyCThostFtdcSpdApplyActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParticipantID, (Py_ssize_t)sizeof(self->data.ParticipantID));
    return PyBytes_FromString(self->data.ParticipantID);
}

///会员代码
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcSpdApplyActionField_set_ParticipantID(PyCThostFtdcSpdApplyActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSpdApplyActionField_get_ClientID(PyCThostFtdcSpdApplyActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientID, (Py_ssize_t)sizeof(self->data.ClientID));
    return PyBytes_FromString(self->data.ClientID);
}

///客户代码
// TThostFtdcClientIDType char[11]
static int PyCThostFtdcSpdApplyActionField_set_ClientID(PyCThostFtdcSpdApplyActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSpdApplyActionField_get_OrderActionStatus(PyCThostFtdcSpdApplyActionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OrderActionStatus), 1);
}

///报单操作状态
// TThostFtdcOrderActionStatusType char
static int PyCThostFtdcSpdApplyActionField_set_OrderActionStatus(PyCThostFtdcSpdApplyActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSpdApplyActionField_get_UserID(PyCThostFtdcSpdApplyActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcSpdApplyActionField_set_UserID(PyCThostFtdcSpdApplyActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSpdApplyActionField_get_ExchangeID(PyCThostFtdcSpdApplyActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcSpdApplyActionField_set_ExchangeID(PyCThostFtdcSpdApplyActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSpdApplyActionField_get_OrderSysID(PyCThostFtdcSpdApplyActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderSysID, (Py_ssize_t)sizeof(self->data.OrderSysID));
    return PyBytes_FromString(self->data.OrderSysID);
}

///合同编号
// TThostFtdcOrderSysIDType char[21]
static int PyCThostFtdcSpdApplyActionField_set_OrderSysID(PyCThostFtdcSpdApplyActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSpdApplyActionField_get_RequestID(PyCThostFtdcSpdApplyActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcSpdApplyActionField_set_RequestID(PyCThostFtdcSpdApplyActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSpdApplyActionField_get_StatusMsg(PyCThostFtdcSpdApplyActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.StatusMsg, (Py_ssize_t)sizeof(self->data.StatusMsg));
    return PyBytes_FromString(self->data.StatusMsg);
}

///状态信息
// TThostFtdcErrorMsgType char[81]
static int PyCThostFtdcSpdApplyActionField_set_StatusMsg(PyCThostFtdcSpdApplyActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSpdApplyActionField_get_OrderRef(PyCThostFtdcSpdApplyActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderRef, (Py_ssize_t)sizeof(self->data.OrderRef));
    return PyBytes_FromString(self->data.OrderRef);
}

///报单引用
// TThostFtdcOrderRefType char[13]
static int PyCThostFtdcSpdApplyActionField_set_OrderRef(PyCThostFtdcSpdApplyActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSpdApplyActionField_get_FrontID(PyCThostFtdcSpdApplyActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FrontID);
#else
    return PyInt_FromLong(self->data.FrontID);
#endif
}

///前置编号
// TThostFtdcFrontIDType int
static int PyCThostFtdcSpdApplyActionField_set_FrontID(PyCThostFtdcSpdApplyActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSpdApplyActionField_get_SessionID(PyCThostFtdcSpdApplyActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话编号
// TThostFtdcSessionIDType int
static int PyCThostFtdcSpdApplyActionField_set_SessionID(PyCThostFtdcSpdApplyActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSpdApplyActionField_get_IPAddress(PyCThostFtdcSpdApplyActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcSpdApplyActionField_set_IPAddress(PyCThostFtdcSpdApplyActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSpdApplyActionField_get_MacAddress(PyCThostFtdcSpdApplyActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcSpdApplyActionField_set_MacAddress(PyCThostFtdcSpdApplyActionField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcSpdApplyActionField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcSpdApplyActionField_get_BrokerID, (setter)PyCThostFtdcSpdApplyActionField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcSpdApplyActionField_get_InvestorID, (setter)PyCThostFtdcSpdApplyActionField_set_InvestorID, (char *)"InvestorID", NULL},
    ///操作日期 
    {(char *)"ActionDate", (getter)PyCThostFtdcSpdApplyActionField_get_ActionDate, (setter)PyCThostFtdcSpdApplyActionField_set_ActionDate, (char *)"ActionDate", NULL},
    ///操作时间 
    {(char *)"ActionTime", (getter)PyCThostFtdcSpdApplyActionField_get_ActionTime, (setter)PyCThostFtdcSpdApplyActionField_set_ActionTime, (char *)"ActionTime", NULL},
    ///交易所交易员代码 
    {(char *)"TraderID", (getter)PyCThostFtdcSpdApplyActionField_get_TraderID, (setter)PyCThostFtdcSpdApplyActionField_set_TraderID, (char *)"TraderID", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcSpdApplyActionField_get_InstallID, (setter)PyCThostFtdcSpdApplyActionField_set_InstallID, (char *)"InstallID", NULL},
    ///本地报单编号 
    {(char *)"OrderLocalID", (getter)PyCThostFtdcSpdApplyActionField_get_OrderLocalID, (setter)PyCThostFtdcSpdApplyActionField_set_OrderLocalID, (char *)"OrderLocalID", NULL},
    ///操作本地编号 
    {(char *)"ActionLocalID", (getter)PyCThostFtdcSpdApplyActionField_get_ActionLocalID, (setter)PyCThostFtdcSpdApplyActionField_set_ActionLocalID, (char *)"ActionLocalID", NULL},
    ///会员代码 
    {(char *)"ParticipantID", (getter)PyCThostFtdcSpdApplyActionField_get_ParticipantID, (setter)PyCThostFtdcSpdApplyActionField_set_ParticipantID, (char *)"ParticipantID", NULL},
    ///客户代码 
    {(char *)"ClientID", (getter)PyCThostFtdcSpdApplyActionField_get_ClientID, (setter)PyCThostFtdcSpdApplyActionField_set_ClientID, (char *)"ClientID", NULL},
    ///报单操作状态 
    {(char *)"OrderActionStatus", (getter)PyCThostFtdcSpdApplyActionField_get_OrderActionStatus, (setter)PyCThostFtdcSpdApplyActionField_set_OrderActionStatus, (char *)"OrderActionStatus", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcSpdApplyActionField_get_UserID, (setter)PyCThostFtdcSpdApplyActionField_set_UserID, (char *)"UserID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcSpdApplyActionField_get_ExchangeID, (setter)PyCThostFtdcSpdApplyActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///合同编号 
    {(char *)"OrderSysID", (getter)PyCThostFtdcSpdApplyActionField_get_OrderSysID, (setter)PyCThostFtdcSpdApplyActionField_set_OrderSysID, (char *)"OrderSysID", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcSpdApplyActionField_get_RequestID, (setter)PyCThostFtdcSpdApplyActionField_set_RequestID, (char *)"RequestID", NULL},
    ///状态信息 
    {(char *)"StatusMsg", (getter)PyCThostFtdcSpdApplyActionField_get_StatusMsg, (setter)PyCThostFtdcSpdApplyActionField_set_StatusMsg, (char *)"StatusMsg", NULL},
    ///报单引用 
    {(char *)"OrderRef", (getter)PyCThostFtdcSpdApplyActionField_get_OrderRef, (setter)PyCThostFtdcSpdApplyActionField_set_OrderRef, (char *)"OrderRef", NULL},
    ///前置编号 
    {(char *)"FrontID", (getter)PyCThostFtdcSpdApplyActionField_get_FrontID, (setter)PyCThostFtdcSpdApplyActionField_set_FrontID, (char *)"FrontID", NULL},
    ///会话编号 
    {(char *)"SessionID", (getter)PyCThostFtdcSpdApplyActionField_get_SessionID, (setter)PyCThostFtdcSpdApplyActionField_set_SessionID, (char *)"SessionID", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcSpdApplyActionField_get_IPAddress, (setter)PyCThostFtdcSpdApplyActionField_set_IPAddress, (char *)"IPAddress", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcSpdApplyActionField_get_MacAddress, (setter)PyCThostFtdcSpdApplyActionField_set_MacAddress, (char *)"MacAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSpdApplyActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSpdApplyActionField",	/* tp_name */
	sizeof(PyCThostFtdcSpdApplyActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSpdApplyActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSpdApplyActionField_repr,   /* tp_repr */
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
	"CThostFtdcSpdApplyActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSpdApplyActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSpdApplyActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSpdApplyActionField_new,       /* tp_new */
};

int PyCThostFtdcSpdApplyActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSpdApplyActionField  */
	if (PyType_Ready(&PyCThostFtdcSpdApplyActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSpdApplyActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSpdApplyActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSpdApplyActionField", (PyObject *)&PyCThostFtdcSpdApplyActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSpdApplyActionField to module");
        Py_DECREF(&PyCThostFtdcSpdApplyActionFieldType);
		return -1;
    }

    return 0;
}
