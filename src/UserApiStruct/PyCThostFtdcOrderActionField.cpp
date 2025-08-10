
#include "PyCThostFtdcOrderActionField.h"

///报单操作

static PyObject *PyCThostFtdcOrderActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcOrderActionField *self = (PyCThostFtdcOrderActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcOrderActionField_init(PyCThostFtdcOrderActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "OrderActionRef", "OrderRef", "RequestID", "FrontID", "SessionID", "ExchangeID", "OrderSysID", "ActionFlag", "LimitPrice", "VolumeChange", "ActionDate", "ActionTime", "TraderID", "InstallID", "OrderLocalID", "ActionLocalID", "ParticipantID", "ClientID", "BusinessUnit", "OrderActionStatus", "UserID", "StatusMsg", "reserve1", "BranchID", "InvestUnitID", "reserve2", "MacAddress", "InstrumentID", "IPAddress", "OrderMemo", "SessionReqSeq",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *OrderActionField_BrokerID = NULL;
    Py_ssize_t OrderActionField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *OrderActionField_InvestorID = NULL;
    Py_ssize_t OrderActionField_InvestorID_len = 0;
            
    ///报单操作引用
    // TThostFtdcOrderActionRefType int
    int OrderActionField_OrderActionRef = 0;
        
    ///报单引用
    // TThostFtdcOrderRefType char[13]
    const char *OrderActionField_OrderRef = NULL;
    Py_ssize_t OrderActionField_OrderRef_len = 0;
            
    ///请求编号
    // TThostFtdcRequestIDType int
    int OrderActionField_RequestID = 0;
        
    ///前置编号
    // TThostFtdcFrontIDType int
    int OrderActionField_FrontID = 0;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    int OrderActionField_SessionID = 0;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *OrderActionField_ExchangeID = NULL;
    Py_ssize_t OrderActionField_ExchangeID_len = 0;
            
    ///报单编号
    // TThostFtdcOrderSysIDType char[21]
    const char *OrderActionField_OrderSysID = NULL;
    Py_ssize_t OrderActionField_OrderSysID_len = 0;
            
    ///操作标志
    // TThostFtdcActionFlagType char
    char OrderActionField_ActionFlag = 0;
            
    ///价格
    // TThostFtdcPriceType double
    double OrderActionField_LimitPrice = 0.0;
        
    ///数量变化
    // TThostFtdcVolumeType int
    int OrderActionField_VolumeChange = 0;
        
    ///操作日期
    // TThostFtdcDateType char[9]
    const char *OrderActionField_ActionDate = NULL;
    Py_ssize_t OrderActionField_ActionDate_len = 0;
            
    ///操作时间
    // TThostFtdcTimeType char[9]
    const char *OrderActionField_ActionTime = NULL;
    Py_ssize_t OrderActionField_ActionTime_len = 0;
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    const char *OrderActionField_TraderID = NULL;
    Py_ssize_t OrderActionField_TraderID_len = 0;
            
    ///安装编号
    // TThostFtdcInstallIDType int
    int OrderActionField_InstallID = 0;
        
    ///本地报单编号
    // TThostFtdcOrderLocalIDType char[13]
    const char *OrderActionField_OrderLocalID = NULL;
    Py_ssize_t OrderActionField_OrderLocalID_len = 0;
            
    ///操作本地编号
    // TThostFtdcOrderLocalIDType char[13]
    const char *OrderActionField_ActionLocalID = NULL;
    Py_ssize_t OrderActionField_ActionLocalID_len = 0;
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    const char *OrderActionField_ParticipantID = NULL;
    Py_ssize_t OrderActionField_ParticipantID_len = 0;
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    const char *OrderActionField_ClientID = NULL;
    Py_ssize_t OrderActionField_ClientID_len = 0;
            
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    const char *OrderActionField_BusinessUnit = NULL;
    Py_ssize_t OrderActionField_BusinessUnit_len = 0;
            
    ///报单操作状态
    // TThostFtdcOrderActionStatusType char
    char OrderActionField_OrderActionStatus = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *OrderActionField_UserID = NULL;
    Py_ssize_t OrderActionField_UserID_len = 0;
            
    ///状态信息
    // TThostFtdcErrorMsgType char[81]
    const char *OrderActionField_StatusMsg = NULL;
    Py_ssize_t OrderActionField_StatusMsg_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *OrderActionField_reserve1 = NULL;
    Py_ssize_t OrderActionField_reserve1_len = 0;
            
    ///营业部编号
    // TThostFtdcBranchIDType char[9]
    const char *OrderActionField_BranchID = NULL;
    Py_ssize_t OrderActionField_BranchID_len = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *OrderActionField_InvestUnitID = NULL;
    Py_ssize_t OrderActionField_InvestUnitID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    const char *OrderActionField_reserve2 = NULL;
    Py_ssize_t OrderActionField_reserve2_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *OrderActionField_MacAddress = NULL;
    Py_ssize_t OrderActionField_MacAddress_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *OrderActionField_InstrumentID = NULL;
    Py_ssize_t OrderActionField_InstrumentID_len = 0;
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *OrderActionField_IPAddress = NULL;
    Py_ssize_t OrderActionField_IPAddress_len = 0;
            
    ///报单回显字段
    // TThostFtdcOrderMemoType char[13]
    const char *OrderActionField_OrderMemo = NULL;
    Py_ssize_t OrderActionField_OrderMemo_len = 0;
            
    ///session上请求计数 api自动维护
    // TThostFtdcSequenceNo12Type int
    int OrderActionField_SessionReqSeq = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iy#iiiy#y#cdiy#y#y#iy#y#y#y#y#cy#y#y#y#y#y#y#y#y#y#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#is#iiis#s#cdis#s#s#is#s#s#s#s#cs#s#s#s#s#s#s#s#s#s#i", (char **)kwlist
#endif

        , &OrderActionField_BrokerID, &OrderActionField_BrokerID_len 
        , &OrderActionField_InvestorID, &OrderActionField_InvestorID_len 
        , &OrderActionField_OrderActionRef 
        , &OrderActionField_OrderRef, &OrderActionField_OrderRef_len 
        , &OrderActionField_RequestID 
        , &OrderActionField_FrontID 
        , &OrderActionField_SessionID 
        , &OrderActionField_ExchangeID, &OrderActionField_ExchangeID_len 
        , &OrderActionField_OrderSysID, &OrderActionField_OrderSysID_len 
        , &OrderActionField_ActionFlag 
        , &OrderActionField_LimitPrice 
        , &OrderActionField_VolumeChange 
        , &OrderActionField_ActionDate, &OrderActionField_ActionDate_len 
        , &OrderActionField_ActionTime, &OrderActionField_ActionTime_len 
        , &OrderActionField_TraderID, &OrderActionField_TraderID_len 
        , &OrderActionField_InstallID 
        , &OrderActionField_OrderLocalID, &OrderActionField_OrderLocalID_len 
        , &OrderActionField_ActionLocalID, &OrderActionField_ActionLocalID_len 
        , &OrderActionField_ParticipantID, &OrderActionField_ParticipantID_len 
        , &OrderActionField_ClientID, &OrderActionField_ClientID_len 
        , &OrderActionField_BusinessUnit, &OrderActionField_BusinessUnit_len 
        , &OrderActionField_OrderActionStatus 
        , &OrderActionField_UserID, &OrderActionField_UserID_len 
        , &OrderActionField_StatusMsg, &OrderActionField_StatusMsg_len 
        , &OrderActionField_reserve1, &OrderActionField_reserve1_len 
        , &OrderActionField_BranchID, &OrderActionField_BranchID_len 
        , &OrderActionField_InvestUnitID, &OrderActionField_InvestUnitID_len 
        , &OrderActionField_reserve2, &OrderActionField_reserve2_len 
        , &OrderActionField_MacAddress, &OrderActionField_MacAddress_len 
        , &OrderActionField_InstrumentID, &OrderActionField_InstrumentID_len 
        , &OrderActionField_IPAddress, &OrderActionField_IPAddress_len 
        , &OrderActionField_OrderMemo, &OrderActionField_OrderMemo_len 
        , &OrderActionField_SessionReqSeq 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( OrderActionField_BrokerID != NULL ) {
        if(OrderActionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", OrderActionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, OrderActionField_BrokerID, OrderActionField_BrokerID_len);        
        strncpy(self->data.BrokerID, OrderActionField_BrokerID, sizeof(self->data.BrokerID) );
        OrderActionField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( OrderActionField_InvestorID != NULL ) {
        if(OrderActionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", OrderActionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, OrderActionField_InvestorID, OrderActionField_InvestorID_len);        
        strncpy(self->data.InvestorID, OrderActionField_InvestorID, sizeof(self->data.InvestorID) );
        OrderActionField_InvestorID = NULL;
    }
            
    ///报单操作引用
    // TThostFtdcOrderActionRefType int
    self->data.OrderActionRef = OrderActionField_OrderActionRef;
        
    ///报单引用
    // TThostFtdcOrderRefType char[13]
    if( OrderActionField_OrderRef != NULL ) {
        if(OrderActionField_OrderRef_len > (Py_ssize_t)sizeof(self->data.OrderRef)) {
            PyErr_Format(PyExc_ValueError, "OrderRef too long: length=%zd (max allowed is %zd)", OrderActionField_OrderRef_len, (Py_ssize_t)sizeof(self->data.OrderRef));
            return -1;
        }
        // memset(self->data.OrderRef, 0, sizeof(self->data.OrderRef));
        // memcpy(self->data.OrderRef, OrderActionField_OrderRef, OrderActionField_OrderRef_len);        
        strncpy(self->data.OrderRef, OrderActionField_OrderRef, sizeof(self->data.OrderRef) );
        OrderActionField_OrderRef = NULL;
    }
            
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = OrderActionField_RequestID;
        
    ///前置编号
    // TThostFtdcFrontIDType int
    self->data.FrontID = OrderActionField_FrontID;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    self->data.SessionID = OrderActionField_SessionID;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( OrderActionField_ExchangeID != NULL ) {
        if(OrderActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", OrderActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, OrderActionField_ExchangeID, OrderActionField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, OrderActionField_ExchangeID, sizeof(self->data.ExchangeID) );
        OrderActionField_ExchangeID = NULL;
    }
            
    ///报单编号
    // TThostFtdcOrderSysIDType char[21]
    if( OrderActionField_OrderSysID != NULL ) {
        if(OrderActionField_OrderSysID_len > (Py_ssize_t)sizeof(self->data.OrderSysID)) {
            PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is %zd)", OrderActionField_OrderSysID_len, (Py_ssize_t)sizeof(self->data.OrderSysID));
            return -1;
        }
        // memset(self->data.OrderSysID, 0, sizeof(self->data.OrderSysID));
        // memcpy(self->data.OrderSysID, OrderActionField_OrderSysID, OrderActionField_OrderSysID_len);        
        strncpy(self->data.OrderSysID, OrderActionField_OrderSysID, sizeof(self->data.OrderSysID) );
        OrderActionField_OrderSysID = NULL;
    }
            
    ///操作标志
    // TThostFtdcActionFlagType char
    self->data.ActionFlag = OrderActionField_ActionFlag;
            
    ///价格
    // TThostFtdcPriceType double
    self->data.LimitPrice = OrderActionField_LimitPrice;
        
    ///数量变化
    // TThostFtdcVolumeType int
    self->data.VolumeChange = OrderActionField_VolumeChange;
        
    ///操作日期
    // TThostFtdcDateType char[9]
    if( OrderActionField_ActionDate != NULL ) {
        if(OrderActionField_ActionDate_len > (Py_ssize_t)sizeof(self->data.ActionDate)) {
            PyErr_Format(PyExc_ValueError, "ActionDate too long: length=%zd (max allowed is %zd)", OrderActionField_ActionDate_len, (Py_ssize_t)sizeof(self->data.ActionDate));
            return -1;
        }
        // memset(self->data.ActionDate, 0, sizeof(self->data.ActionDate));
        // memcpy(self->data.ActionDate, OrderActionField_ActionDate, OrderActionField_ActionDate_len);        
        strncpy(self->data.ActionDate, OrderActionField_ActionDate, sizeof(self->data.ActionDate) );
        OrderActionField_ActionDate = NULL;
    }
            
    ///操作时间
    // TThostFtdcTimeType char[9]
    if( OrderActionField_ActionTime != NULL ) {
        if(OrderActionField_ActionTime_len > (Py_ssize_t)sizeof(self->data.ActionTime)) {
            PyErr_Format(PyExc_ValueError, "ActionTime too long: length=%zd (max allowed is %zd)", OrderActionField_ActionTime_len, (Py_ssize_t)sizeof(self->data.ActionTime));
            return -1;
        }
        // memset(self->data.ActionTime, 0, sizeof(self->data.ActionTime));
        // memcpy(self->data.ActionTime, OrderActionField_ActionTime, OrderActionField_ActionTime_len);        
        strncpy(self->data.ActionTime, OrderActionField_ActionTime, sizeof(self->data.ActionTime) );
        OrderActionField_ActionTime = NULL;
    }
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    if( OrderActionField_TraderID != NULL ) {
        if(OrderActionField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", OrderActionField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
            return -1;
        }
        // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
        // memcpy(self->data.TraderID, OrderActionField_TraderID, OrderActionField_TraderID_len);        
        strncpy(self->data.TraderID, OrderActionField_TraderID, sizeof(self->data.TraderID) );
        OrderActionField_TraderID = NULL;
    }
            
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = OrderActionField_InstallID;
        
    ///本地报单编号
    // TThostFtdcOrderLocalIDType char[13]
    if( OrderActionField_OrderLocalID != NULL ) {
        if(OrderActionField_OrderLocalID_len > (Py_ssize_t)sizeof(self->data.OrderLocalID)) {
            PyErr_Format(PyExc_ValueError, "OrderLocalID too long: length=%zd (max allowed is %zd)", OrderActionField_OrderLocalID_len, (Py_ssize_t)sizeof(self->data.OrderLocalID));
            return -1;
        }
        // memset(self->data.OrderLocalID, 0, sizeof(self->data.OrderLocalID));
        // memcpy(self->data.OrderLocalID, OrderActionField_OrderLocalID, OrderActionField_OrderLocalID_len);        
        strncpy(self->data.OrderLocalID, OrderActionField_OrderLocalID, sizeof(self->data.OrderLocalID) );
        OrderActionField_OrderLocalID = NULL;
    }
            
    ///操作本地编号
    // TThostFtdcOrderLocalIDType char[13]
    if( OrderActionField_ActionLocalID != NULL ) {
        if(OrderActionField_ActionLocalID_len > (Py_ssize_t)sizeof(self->data.ActionLocalID)) {
            PyErr_Format(PyExc_ValueError, "ActionLocalID too long: length=%zd (max allowed is %zd)", OrderActionField_ActionLocalID_len, (Py_ssize_t)sizeof(self->data.ActionLocalID));
            return -1;
        }
        // memset(self->data.ActionLocalID, 0, sizeof(self->data.ActionLocalID));
        // memcpy(self->data.ActionLocalID, OrderActionField_ActionLocalID, OrderActionField_ActionLocalID_len);        
        strncpy(self->data.ActionLocalID, OrderActionField_ActionLocalID, sizeof(self->data.ActionLocalID) );
        OrderActionField_ActionLocalID = NULL;
    }
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    if( OrderActionField_ParticipantID != NULL ) {
        if(OrderActionField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", OrderActionField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
            return -1;
        }
        // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
        // memcpy(self->data.ParticipantID, OrderActionField_ParticipantID, OrderActionField_ParticipantID_len);        
        strncpy(self->data.ParticipantID, OrderActionField_ParticipantID, sizeof(self->data.ParticipantID) );
        OrderActionField_ParticipantID = NULL;
    }
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    if( OrderActionField_ClientID != NULL ) {
        if(OrderActionField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", OrderActionField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
            return -1;
        }
        // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
        // memcpy(self->data.ClientID, OrderActionField_ClientID, OrderActionField_ClientID_len);        
        strncpy(self->data.ClientID, OrderActionField_ClientID, sizeof(self->data.ClientID) );
        OrderActionField_ClientID = NULL;
    }
            
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    if( OrderActionField_BusinessUnit != NULL ) {
        if(OrderActionField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", OrderActionField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
            return -1;
        }
        // memset(self->data.BusinessUnit, 0, sizeof(self->data.BusinessUnit));
        // memcpy(self->data.BusinessUnit, OrderActionField_BusinessUnit, OrderActionField_BusinessUnit_len);        
        strncpy(self->data.BusinessUnit, OrderActionField_BusinessUnit, sizeof(self->data.BusinessUnit) );
        OrderActionField_BusinessUnit = NULL;
    }
            
    ///报单操作状态
    // TThostFtdcOrderActionStatusType char
    self->data.OrderActionStatus = OrderActionField_OrderActionStatus;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( OrderActionField_UserID != NULL ) {
        if(OrderActionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", OrderActionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, OrderActionField_UserID, OrderActionField_UserID_len);        
        strncpy(self->data.UserID, OrderActionField_UserID, sizeof(self->data.UserID) );
        OrderActionField_UserID = NULL;
    }
            
    ///状态信息
    // TThostFtdcErrorMsgType char[81]
    if( OrderActionField_StatusMsg != NULL ) {
        if(OrderActionField_StatusMsg_len > (Py_ssize_t)sizeof(self->data.StatusMsg)) {
            PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is %zd)", OrderActionField_StatusMsg_len, (Py_ssize_t)sizeof(self->data.StatusMsg));
            return -1;
        }
        // memset(self->data.StatusMsg, 0, sizeof(self->data.StatusMsg));
        // memcpy(self->data.StatusMsg, OrderActionField_StatusMsg, OrderActionField_StatusMsg_len);        
        strncpy(self->data.StatusMsg, OrderActionField_StatusMsg, sizeof(self->data.StatusMsg) );
        OrderActionField_StatusMsg = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( OrderActionField_reserve1 != NULL ) {
        if(OrderActionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", OrderActionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, OrderActionField_reserve1, OrderActionField_reserve1_len);        
        strncpy(self->data.reserve1, OrderActionField_reserve1, sizeof(self->data.reserve1) );
        OrderActionField_reserve1 = NULL;
    }
            
    ///营业部编号
    // TThostFtdcBranchIDType char[9]
    if( OrderActionField_BranchID != NULL ) {
        if(OrderActionField_BranchID_len > (Py_ssize_t)sizeof(self->data.BranchID)) {
            PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is %zd)", OrderActionField_BranchID_len, (Py_ssize_t)sizeof(self->data.BranchID));
            return -1;
        }
        // memset(self->data.BranchID, 0, sizeof(self->data.BranchID));
        // memcpy(self->data.BranchID, OrderActionField_BranchID, OrderActionField_BranchID_len);        
        strncpy(self->data.BranchID, OrderActionField_BranchID, sizeof(self->data.BranchID) );
        OrderActionField_BranchID = NULL;
    }
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( OrderActionField_InvestUnitID != NULL ) {
        if(OrderActionField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", OrderActionField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, OrderActionField_InvestUnitID, OrderActionField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, OrderActionField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        OrderActionField_InvestUnitID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    if( OrderActionField_reserve2 != NULL ) {
        if(OrderActionField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", OrderActionField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
            return -1;
        }
        // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
        // memcpy(self->data.reserve2, OrderActionField_reserve2, OrderActionField_reserve2_len);        
        strncpy(self->data.reserve2, OrderActionField_reserve2, sizeof(self->data.reserve2) );
        OrderActionField_reserve2 = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( OrderActionField_MacAddress != NULL ) {
        if(OrderActionField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", OrderActionField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, OrderActionField_MacAddress, OrderActionField_MacAddress_len);        
        strncpy(self->data.MacAddress, OrderActionField_MacAddress, sizeof(self->data.MacAddress) );
        OrderActionField_MacAddress = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( OrderActionField_InstrumentID != NULL ) {
        if(OrderActionField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", OrderActionField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, OrderActionField_InstrumentID, OrderActionField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, OrderActionField_InstrumentID, sizeof(self->data.InstrumentID) );
        OrderActionField_InstrumentID = NULL;
    }
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( OrderActionField_IPAddress != NULL ) {
        if(OrderActionField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", OrderActionField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, OrderActionField_IPAddress, OrderActionField_IPAddress_len);        
        strncpy(self->data.IPAddress, OrderActionField_IPAddress, sizeof(self->data.IPAddress) );
        OrderActionField_IPAddress = NULL;
    }
            
    ///报单回显字段
    // TThostFtdcOrderMemoType char[13]
    if( OrderActionField_OrderMemo != NULL ) {
        if(OrderActionField_OrderMemo_len > (Py_ssize_t)sizeof(self->data.OrderMemo)) {
            PyErr_Format(PyExc_ValueError, "OrderMemo too long: length=%zd (max allowed is %zd)", OrderActionField_OrderMemo_len, (Py_ssize_t)sizeof(self->data.OrderMemo));
            return -1;
        }
        // memset(self->data.OrderMemo, 0, sizeof(self->data.OrderMemo));
        // memcpy(self->data.OrderMemo, OrderActionField_OrderMemo, OrderActionField_OrderMemo_len);        
        strncpy(self->data.OrderMemo, OrderActionField_OrderMemo, sizeof(self->data.OrderMemo) );
        OrderActionField_OrderMemo = NULL;
    }
            
    ///session上请求计数 api自动维护
    // TThostFtdcSequenceNo12Type int
    self->data.SessionReqSeq = OrderActionField_SessionReqSeq;
        

    return 0;
}

static void PyCThostFtdcOrderActionField_dealloc(PyCThostFtdcOrderActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcOrderActionField_repr(PyCThostFtdcOrderActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i,s:y,s:i,s:i,s:i,s:y,s:y,s:c,s:d,s:i,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i,s:s,s:i,s:i,s:i,s:s,s:s,s:c,s:d,s:i,s:s,s:s,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"OrderActionRef", self->data.OrderActionRef 
        ,"OrderRef", self->data.OrderRef//, (Py_ssize_t)sizeof(self->data.OrderRef) 
        ,"RequestID", self->data.RequestID 
        ,"FrontID", self->data.FrontID 
        ,"SessionID", self->data.SessionID 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"OrderSysID", self->data.OrderSysID//, (Py_ssize_t)sizeof(self->data.OrderSysID) 
        ,"ActionFlag", self->data.ActionFlag 
        ,"LimitPrice", self->data.LimitPrice 
        ,"VolumeChange", self->data.VolumeChange 
        ,"ActionDate", self->data.ActionDate//, (Py_ssize_t)sizeof(self->data.ActionDate) 
        ,"ActionTime", self->data.ActionTime//, (Py_ssize_t)sizeof(self->data.ActionTime) 
        ,"TraderID", self->data.TraderID//, (Py_ssize_t)sizeof(self->data.TraderID) 
        ,"InstallID", self->data.InstallID 
        ,"OrderLocalID", self->data.OrderLocalID//, (Py_ssize_t)sizeof(self->data.OrderLocalID) 
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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcOrderActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcOrderActionField_get_BrokerID(PyCThostFtdcOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcOrderActionField_set_BrokerID(PyCThostFtdcOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOrderActionField_get_InvestorID(PyCThostFtdcOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcOrderActionField_set_InvestorID(PyCThostFtdcOrderActionField *self, PyObject* val, void *closure) {
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
            
///报单操作引用
// TThostFtdcOrderActionRefType int
static PyObject *PyCThostFtdcOrderActionField_get_OrderActionRef(PyCThostFtdcOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.OrderActionRef);
#else
    return PyInt_FromLong(self->data.OrderActionRef);
#endif
}

///报单操作引用
// TThostFtdcOrderActionRefType int
static int PyCThostFtdcOrderActionField_set_OrderActionRef(PyCThostFtdcOrderActionField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderActionRef Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderActionRef Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the OrderActionRef value out of range for C int");
        return -1;
    }
    self->data.OrderActionRef = (int)buf;
    return 0;
}
        
///报单引用
// TThostFtdcOrderRefType char[13]
static PyObject *PyCThostFtdcOrderActionField_get_OrderRef(PyCThostFtdcOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderRef, (Py_ssize_t)sizeof(self->data.OrderRef));
    return PyBytes_FromString(self->data.OrderRef);
}

///报单引用
// TThostFtdcOrderRefType char[13]
static int PyCThostFtdcOrderActionField_set_OrderRef(PyCThostFtdcOrderActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderRef Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OrderRef)) {
        PyErr_SetString(PyExc_ValueError, "OrderRef must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.OrderRef, 0, sizeof(self->data.OrderRef));
    // memcpy(self->data.OrderRef, buf, len);
    strncpy(self->data.OrderRef, buf, sizeof(self->data.OrderRef));
    return 0;
}
            
///请求编号
// TThostFtdcRequestIDType int
static PyObject *PyCThostFtdcOrderActionField_get_RequestID(PyCThostFtdcOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcOrderActionField_set_RequestID(PyCThostFtdcOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOrderActionField_get_FrontID(PyCThostFtdcOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FrontID);
#else
    return PyInt_FromLong(self->data.FrontID);
#endif
}

///前置编号
// TThostFtdcFrontIDType int
static int PyCThostFtdcOrderActionField_set_FrontID(PyCThostFtdcOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOrderActionField_get_SessionID(PyCThostFtdcOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话编号
// TThostFtdcSessionIDType int
static int PyCThostFtdcOrderActionField_set_SessionID(PyCThostFtdcOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOrderActionField_get_ExchangeID(PyCThostFtdcOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcOrderActionField_set_ExchangeID(PyCThostFtdcOrderActionField *self, PyObject* val, void *closure) {
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
            
///报单编号
// TThostFtdcOrderSysIDType char[21]
static PyObject *PyCThostFtdcOrderActionField_get_OrderSysID(PyCThostFtdcOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderSysID, (Py_ssize_t)sizeof(self->data.OrderSysID));
    return PyBytes_FromString(self->data.OrderSysID);
}

///报单编号
// TThostFtdcOrderSysIDType char[21]
static int PyCThostFtdcOrderActionField_set_OrderSysID(PyCThostFtdcOrderActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderSysID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OrderSysID)) {
        PyErr_SetString(PyExc_ValueError, "OrderSysID must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.OrderSysID, 0, sizeof(self->data.OrderSysID));
    // memcpy(self->data.OrderSysID, buf, len);
    strncpy(self->data.OrderSysID, buf, sizeof(self->data.OrderSysID));
    return 0;
}
            
///操作标志
// TThostFtdcActionFlagType char
static PyObject *PyCThostFtdcOrderActionField_get_ActionFlag(PyCThostFtdcOrderActionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionFlag), 1);
}

///操作标志
// TThostFtdcActionFlagType char
static int PyCThostFtdcOrderActionField_set_ActionFlag(PyCThostFtdcOrderActionField *self, PyObject* val, void *closure) {
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
            
///价格
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcOrderActionField_get_LimitPrice(PyCThostFtdcOrderActionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LimitPrice);
}

///价格
// TThostFtdcPriceType double
static int PyCThostFtdcOrderActionField_set_LimitPrice(PyCThostFtdcOrderActionField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LimitPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LimitPrice = buf;
    return 0;
}
        
///数量变化
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcOrderActionField_get_VolumeChange(PyCThostFtdcOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.VolumeChange);
#else
    return PyInt_FromLong(self->data.VolumeChange);
#endif
}

///数量变化
// TThostFtdcVolumeType int
static int PyCThostFtdcOrderActionField_set_VolumeChange(PyCThostFtdcOrderActionField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "VolumeChange Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "VolumeChange Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the VolumeChange value out of range for C int");
        return -1;
    }
    self->data.VolumeChange = (int)buf;
    return 0;
}
        
///操作日期
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcOrderActionField_get_ActionDate(PyCThostFtdcOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActionDate, (Py_ssize_t)sizeof(self->data.ActionDate));
    return PyBytes_FromString(self->data.ActionDate);
}

///操作日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcOrderActionField_set_ActionDate(PyCThostFtdcOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOrderActionField_get_ActionTime(PyCThostFtdcOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActionTime, (Py_ssize_t)sizeof(self->data.ActionTime));
    return PyBytes_FromString(self->data.ActionTime);
}

///操作时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcOrderActionField_set_ActionTime(PyCThostFtdcOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOrderActionField_get_TraderID(PyCThostFtdcOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TraderID, (Py_ssize_t)sizeof(self->data.TraderID));
    return PyBytes_FromString(self->data.TraderID);
}

///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static int PyCThostFtdcOrderActionField_set_TraderID(PyCThostFtdcOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOrderActionField_get_InstallID(PyCThostFtdcOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcOrderActionField_set_InstallID(PyCThostFtdcOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOrderActionField_get_OrderLocalID(PyCThostFtdcOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderLocalID, (Py_ssize_t)sizeof(self->data.OrderLocalID));
    return PyBytes_FromString(self->data.OrderLocalID);
}

///本地报单编号
// TThostFtdcOrderLocalIDType char[13]
static int PyCThostFtdcOrderActionField_set_OrderLocalID(PyCThostFtdcOrderActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderLocalID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OrderLocalID)) {
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
static PyObject *PyCThostFtdcOrderActionField_get_ActionLocalID(PyCThostFtdcOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActionLocalID, (Py_ssize_t)sizeof(self->data.ActionLocalID));
    return PyBytes_FromString(self->data.ActionLocalID);
}

///操作本地编号
// TThostFtdcOrderLocalIDType char[13]
static int PyCThostFtdcOrderActionField_set_ActionLocalID(PyCThostFtdcOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOrderActionField_get_ParticipantID(PyCThostFtdcOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParticipantID, (Py_ssize_t)sizeof(self->data.ParticipantID));
    return PyBytes_FromString(self->data.ParticipantID);
}

///会员代码
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcOrderActionField_set_ParticipantID(PyCThostFtdcOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOrderActionField_get_ClientID(PyCThostFtdcOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientID, (Py_ssize_t)sizeof(self->data.ClientID));
    return PyBytes_FromString(self->data.ClientID);
}

///客户代码
// TThostFtdcClientIDType char[11]
static int PyCThostFtdcOrderActionField_set_ClientID(PyCThostFtdcOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOrderActionField_get_BusinessUnit(PyCThostFtdcOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BusinessUnit, (Py_ssize_t)sizeof(self->data.BusinessUnit));
    return PyBytes_FromString(self->data.BusinessUnit);
}

///业务单元
// TThostFtdcBusinessUnitType char[21]
static int PyCThostFtdcOrderActionField_set_BusinessUnit(PyCThostFtdcOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOrderActionField_get_OrderActionStatus(PyCThostFtdcOrderActionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OrderActionStatus), 1);
}

///报单操作状态
// TThostFtdcOrderActionStatusType char
static int PyCThostFtdcOrderActionField_set_OrderActionStatus(PyCThostFtdcOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOrderActionField_get_UserID(PyCThostFtdcOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcOrderActionField_set_UserID(PyCThostFtdcOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOrderActionField_get_StatusMsg(PyCThostFtdcOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.StatusMsg, (Py_ssize_t)sizeof(self->data.StatusMsg));
    return PyBytes_FromString(self->data.StatusMsg);
}

///状态信息
// TThostFtdcErrorMsgType char[81]
static int PyCThostFtdcOrderActionField_set_StatusMsg(PyCThostFtdcOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOrderActionField_get_reserve1(PyCThostFtdcOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcOrderActionField_set_reserve1(PyCThostFtdcOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOrderActionField_get_BranchID(PyCThostFtdcOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BranchID, (Py_ssize_t)sizeof(self->data.BranchID));
    return PyBytes_FromString(self->data.BranchID);
}

///营业部编号
// TThostFtdcBranchIDType char[9]
static int PyCThostFtdcOrderActionField_set_BranchID(PyCThostFtdcOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOrderActionField_get_InvestUnitID(PyCThostFtdcOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcOrderActionField_set_InvestUnitID(PyCThostFtdcOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOrderActionField_get_reserve2(PyCThostFtdcOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve2, (Py_ssize_t)sizeof(self->data.reserve2));
    return PyBytes_FromString(self->data.reserve2);
}

///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static int PyCThostFtdcOrderActionField_set_reserve2(PyCThostFtdcOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOrderActionField_get_MacAddress(PyCThostFtdcOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcOrderActionField_set_MacAddress(PyCThostFtdcOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOrderActionField_get_InstrumentID(PyCThostFtdcOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcOrderActionField_set_InstrumentID(PyCThostFtdcOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOrderActionField_get_IPAddress(PyCThostFtdcOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcOrderActionField_set_IPAddress(PyCThostFtdcOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOrderActionField_get_OrderMemo(PyCThostFtdcOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderMemo, (Py_ssize_t)sizeof(self->data.OrderMemo));
    return PyBytes_FromString(self->data.OrderMemo);
}

///报单回显字段
// TThostFtdcOrderMemoType char[13]
static int PyCThostFtdcOrderActionField_set_OrderMemo(PyCThostFtdcOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOrderActionField_get_SessionReqSeq(PyCThostFtdcOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionReqSeq);
#else
    return PyInt_FromLong(self->data.SessionReqSeq);
#endif
}

///session上请求计数 api自动维护
// TThostFtdcSequenceNo12Type int
static int PyCThostFtdcOrderActionField_set_SessionReqSeq(PyCThostFtdcOrderActionField *self, PyObject* val, void *closure) {
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
        

static PyGetSetDef PyCThostFtdcOrderActionField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcOrderActionField_get_BrokerID, (setter)PyCThostFtdcOrderActionField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcOrderActionField_get_InvestorID, (setter)PyCThostFtdcOrderActionField_set_InvestorID, (char *)"InvestorID", NULL},
    ///报单操作引用 
    {(char *)"OrderActionRef", (getter)PyCThostFtdcOrderActionField_get_OrderActionRef, (setter)PyCThostFtdcOrderActionField_set_OrderActionRef, (char *)"OrderActionRef", NULL},
    ///报单引用 
    {(char *)"OrderRef", (getter)PyCThostFtdcOrderActionField_get_OrderRef, (setter)PyCThostFtdcOrderActionField_set_OrderRef, (char *)"OrderRef", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcOrderActionField_get_RequestID, (setter)PyCThostFtdcOrderActionField_set_RequestID, (char *)"RequestID", NULL},
    ///前置编号 
    {(char *)"FrontID", (getter)PyCThostFtdcOrderActionField_get_FrontID, (setter)PyCThostFtdcOrderActionField_set_FrontID, (char *)"FrontID", NULL},
    ///会话编号 
    {(char *)"SessionID", (getter)PyCThostFtdcOrderActionField_get_SessionID, (setter)PyCThostFtdcOrderActionField_set_SessionID, (char *)"SessionID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcOrderActionField_get_ExchangeID, (setter)PyCThostFtdcOrderActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///报单编号 
    {(char *)"OrderSysID", (getter)PyCThostFtdcOrderActionField_get_OrderSysID, (setter)PyCThostFtdcOrderActionField_set_OrderSysID, (char *)"OrderSysID", NULL},
    ///操作标志 
    {(char *)"ActionFlag", (getter)PyCThostFtdcOrderActionField_get_ActionFlag, (setter)PyCThostFtdcOrderActionField_set_ActionFlag, (char *)"ActionFlag", NULL},
    ///价格 
    {(char *)"LimitPrice", (getter)PyCThostFtdcOrderActionField_get_LimitPrice, (setter)PyCThostFtdcOrderActionField_set_LimitPrice, (char *)"LimitPrice", NULL},
    ///数量变化 
    {(char *)"VolumeChange", (getter)PyCThostFtdcOrderActionField_get_VolumeChange, (setter)PyCThostFtdcOrderActionField_set_VolumeChange, (char *)"VolumeChange", NULL},
    ///操作日期 
    {(char *)"ActionDate", (getter)PyCThostFtdcOrderActionField_get_ActionDate, (setter)PyCThostFtdcOrderActionField_set_ActionDate, (char *)"ActionDate", NULL},
    ///操作时间 
    {(char *)"ActionTime", (getter)PyCThostFtdcOrderActionField_get_ActionTime, (setter)PyCThostFtdcOrderActionField_set_ActionTime, (char *)"ActionTime", NULL},
    ///交易所交易员代码 
    {(char *)"TraderID", (getter)PyCThostFtdcOrderActionField_get_TraderID, (setter)PyCThostFtdcOrderActionField_set_TraderID, (char *)"TraderID", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcOrderActionField_get_InstallID, (setter)PyCThostFtdcOrderActionField_set_InstallID, (char *)"InstallID", NULL},
    ///本地报单编号 
    {(char *)"OrderLocalID", (getter)PyCThostFtdcOrderActionField_get_OrderLocalID, (setter)PyCThostFtdcOrderActionField_set_OrderLocalID, (char *)"OrderLocalID", NULL},
    ///操作本地编号 
    {(char *)"ActionLocalID", (getter)PyCThostFtdcOrderActionField_get_ActionLocalID, (setter)PyCThostFtdcOrderActionField_set_ActionLocalID, (char *)"ActionLocalID", NULL},
    ///会员代码 
    {(char *)"ParticipantID", (getter)PyCThostFtdcOrderActionField_get_ParticipantID, (setter)PyCThostFtdcOrderActionField_set_ParticipantID, (char *)"ParticipantID", NULL},
    ///客户代码 
    {(char *)"ClientID", (getter)PyCThostFtdcOrderActionField_get_ClientID, (setter)PyCThostFtdcOrderActionField_set_ClientID, (char *)"ClientID", NULL},
    ///业务单元 
    {(char *)"BusinessUnit", (getter)PyCThostFtdcOrderActionField_get_BusinessUnit, (setter)PyCThostFtdcOrderActionField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
    ///报单操作状态 
    {(char *)"OrderActionStatus", (getter)PyCThostFtdcOrderActionField_get_OrderActionStatus, (setter)PyCThostFtdcOrderActionField_set_OrderActionStatus, (char *)"OrderActionStatus", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcOrderActionField_get_UserID, (setter)PyCThostFtdcOrderActionField_set_UserID, (char *)"UserID", NULL},
    ///状态信息 
    {(char *)"StatusMsg", (getter)PyCThostFtdcOrderActionField_get_StatusMsg, (setter)PyCThostFtdcOrderActionField_set_StatusMsg, (char *)"StatusMsg", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcOrderActionField_get_reserve1, (setter)PyCThostFtdcOrderActionField_set_reserve1, (char *)"reserve1", NULL},
    ///营业部编号 
    {(char *)"BranchID", (getter)PyCThostFtdcOrderActionField_get_BranchID, (setter)PyCThostFtdcOrderActionField_set_BranchID, (char *)"BranchID", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcOrderActionField_get_InvestUnitID, (setter)PyCThostFtdcOrderActionField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///保留的无效字段 
    {(char *)"reserve2", (getter)PyCThostFtdcOrderActionField_get_reserve2, (setter)PyCThostFtdcOrderActionField_set_reserve2, (char *)"reserve2", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcOrderActionField_get_MacAddress, (setter)PyCThostFtdcOrderActionField_set_MacAddress, (char *)"MacAddress", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcOrderActionField_get_InstrumentID, (setter)PyCThostFtdcOrderActionField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcOrderActionField_get_IPAddress, (setter)PyCThostFtdcOrderActionField_set_IPAddress, (char *)"IPAddress", NULL},
    ///报单回显字段 
    {(char *)"OrderMemo", (getter)PyCThostFtdcOrderActionField_get_OrderMemo, (setter)PyCThostFtdcOrderActionField_set_OrderMemo, (char *)"OrderMemo", NULL},
    ///session上请求计数 api自动维护 
    {(char *)"SessionReqSeq", (getter)PyCThostFtdcOrderActionField_get_SessionReqSeq, (setter)PyCThostFtdcOrderActionField_set_SessionReqSeq, (char *)"SessionReqSeq", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcOrderActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcOrderActionField",	/* tp_name */
	sizeof(PyCThostFtdcOrderActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcOrderActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcOrderActionField_repr,   /* tp_repr */
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
	"CThostFtdcOrderActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcOrderActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcOrderActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcOrderActionField_new,       /* tp_new */
};

int PyCThostFtdcOrderActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcOrderActionField  */
	if (PyType_Ready(&PyCThostFtdcOrderActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcOrderActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcOrderActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcOrderActionField", (PyObject *)&PyCThostFtdcOrderActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcOrderActionField to module");
        Py_DECREF(&PyCThostFtdcOrderActionFieldType);
		return -1;
    }

    return 0;
}
