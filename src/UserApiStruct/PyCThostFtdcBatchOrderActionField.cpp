
#include "PyCThostFtdcBatchOrderActionField.h"

///批量报单操作

static PyObject *PyCThostFtdcBatchOrderActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcBatchOrderActionField *self = (PyCThostFtdcBatchOrderActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcBatchOrderActionField_init(PyCThostFtdcBatchOrderActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "OrderActionRef", "RequestID", "FrontID", "SessionID", "ExchangeID", "ActionDate", "ActionTime", "TraderID", "InstallID", "ActionLocalID", "ParticipantID", "ClientID", "BusinessUnit", "OrderActionStatus", "UserID", "StatusMsg", "InvestUnitID", "reserve1", "MacAddress", "IPAddress",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *BatchOrderActionField_BrokerID = NULL;
    Py_ssize_t BatchOrderActionField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *BatchOrderActionField_InvestorID = NULL;
    Py_ssize_t BatchOrderActionField_InvestorID_len = 0;
            
    ///报单操作引用
    // TThostFtdcOrderActionRefType int
    int BatchOrderActionField_OrderActionRef = 0;
        
    ///请求编号
    // TThostFtdcRequestIDType int
    int BatchOrderActionField_RequestID = 0;
        
    ///前置编号
    // TThostFtdcFrontIDType int
    int BatchOrderActionField_FrontID = 0;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    int BatchOrderActionField_SessionID = 0;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *BatchOrderActionField_ExchangeID = NULL;
    Py_ssize_t BatchOrderActionField_ExchangeID_len = 0;
            
    ///操作日期
    // TThostFtdcDateType char[9]
    const char *BatchOrderActionField_ActionDate = NULL;
    Py_ssize_t BatchOrderActionField_ActionDate_len = 0;
            
    ///操作时间
    // TThostFtdcTimeType char[9]
    const char *BatchOrderActionField_ActionTime = NULL;
    Py_ssize_t BatchOrderActionField_ActionTime_len = 0;
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    const char *BatchOrderActionField_TraderID = NULL;
    Py_ssize_t BatchOrderActionField_TraderID_len = 0;
            
    ///安装编号
    // TThostFtdcInstallIDType int
    int BatchOrderActionField_InstallID = 0;
        
    ///操作本地编号
    // TThostFtdcOrderLocalIDType char[13]
    const char *BatchOrderActionField_ActionLocalID = NULL;
    Py_ssize_t BatchOrderActionField_ActionLocalID_len = 0;
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    const char *BatchOrderActionField_ParticipantID = NULL;
    Py_ssize_t BatchOrderActionField_ParticipantID_len = 0;
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    const char *BatchOrderActionField_ClientID = NULL;
    Py_ssize_t BatchOrderActionField_ClientID_len = 0;
            
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    const char *BatchOrderActionField_BusinessUnit = NULL;
    Py_ssize_t BatchOrderActionField_BusinessUnit_len = 0;
            
    ///报单操作状态
    // TThostFtdcOrderActionStatusType char
    char BatchOrderActionField_OrderActionStatus = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *BatchOrderActionField_UserID = NULL;
    Py_ssize_t BatchOrderActionField_UserID_len = 0;
            
    ///状态信息
    // TThostFtdcErrorMsgType char[81]
    const char *BatchOrderActionField_StatusMsg = NULL;
    Py_ssize_t BatchOrderActionField_StatusMsg_len = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *BatchOrderActionField_InvestUnitID = NULL;
    Py_ssize_t BatchOrderActionField_InvestUnitID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    const char *BatchOrderActionField_reserve1 = NULL;
    Py_ssize_t BatchOrderActionField_reserve1_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *BatchOrderActionField_MacAddress = NULL;
    Py_ssize_t BatchOrderActionField_MacAddress_len = 0;
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *BatchOrderActionField_IPAddress = NULL;
    Py_ssize_t BatchOrderActionField_IPAddress_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iiiiy#y#y#y#iy#y#y#y#cy#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#iiiis#s#s#s#is#s#s#s#cs#s#s#s#s#s#", (char **)kwlist
#endif

        , &BatchOrderActionField_BrokerID, &BatchOrderActionField_BrokerID_len 
        , &BatchOrderActionField_InvestorID, &BatchOrderActionField_InvestorID_len 
        , &BatchOrderActionField_OrderActionRef 
        , &BatchOrderActionField_RequestID 
        , &BatchOrderActionField_FrontID 
        , &BatchOrderActionField_SessionID 
        , &BatchOrderActionField_ExchangeID, &BatchOrderActionField_ExchangeID_len 
        , &BatchOrderActionField_ActionDate, &BatchOrderActionField_ActionDate_len 
        , &BatchOrderActionField_ActionTime, &BatchOrderActionField_ActionTime_len 
        , &BatchOrderActionField_TraderID, &BatchOrderActionField_TraderID_len 
        , &BatchOrderActionField_InstallID 
        , &BatchOrderActionField_ActionLocalID, &BatchOrderActionField_ActionLocalID_len 
        , &BatchOrderActionField_ParticipantID, &BatchOrderActionField_ParticipantID_len 
        , &BatchOrderActionField_ClientID, &BatchOrderActionField_ClientID_len 
        , &BatchOrderActionField_BusinessUnit, &BatchOrderActionField_BusinessUnit_len 
        , &BatchOrderActionField_OrderActionStatus 
        , &BatchOrderActionField_UserID, &BatchOrderActionField_UserID_len 
        , &BatchOrderActionField_StatusMsg, &BatchOrderActionField_StatusMsg_len 
        , &BatchOrderActionField_InvestUnitID, &BatchOrderActionField_InvestUnitID_len 
        , &BatchOrderActionField_reserve1, &BatchOrderActionField_reserve1_len 
        , &BatchOrderActionField_MacAddress, &BatchOrderActionField_MacAddress_len 
        , &BatchOrderActionField_IPAddress, &BatchOrderActionField_IPAddress_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( BatchOrderActionField_BrokerID != NULL ) {
        if(BatchOrderActionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", BatchOrderActionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, BatchOrderActionField_BrokerID, BatchOrderActionField_BrokerID_len);        
        strncpy(self->data.BrokerID, BatchOrderActionField_BrokerID, sizeof(self->data.BrokerID) );
        BatchOrderActionField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( BatchOrderActionField_InvestorID != NULL ) {
        if(BatchOrderActionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", BatchOrderActionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, BatchOrderActionField_InvestorID, BatchOrderActionField_InvestorID_len);        
        strncpy(self->data.InvestorID, BatchOrderActionField_InvestorID, sizeof(self->data.InvestorID) );
        BatchOrderActionField_InvestorID = NULL;
    }
            
    ///报单操作引用
    // TThostFtdcOrderActionRefType int
    self->data.OrderActionRef = BatchOrderActionField_OrderActionRef;
        
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = BatchOrderActionField_RequestID;
        
    ///前置编号
    // TThostFtdcFrontIDType int
    self->data.FrontID = BatchOrderActionField_FrontID;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    self->data.SessionID = BatchOrderActionField_SessionID;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( BatchOrderActionField_ExchangeID != NULL ) {
        if(BatchOrderActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", BatchOrderActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, BatchOrderActionField_ExchangeID, BatchOrderActionField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, BatchOrderActionField_ExchangeID, sizeof(self->data.ExchangeID) );
        BatchOrderActionField_ExchangeID = NULL;
    }
            
    ///操作日期
    // TThostFtdcDateType char[9]
    if( BatchOrderActionField_ActionDate != NULL ) {
        if(BatchOrderActionField_ActionDate_len > (Py_ssize_t)sizeof(self->data.ActionDate)) {
            PyErr_Format(PyExc_ValueError, "ActionDate too long: length=%zd (max allowed is %zd)", BatchOrderActionField_ActionDate_len, (Py_ssize_t)sizeof(self->data.ActionDate));
            return -1;
        }
        // memset(self->data.ActionDate, 0, sizeof(self->data.ActionDate));
        // memcpy(self->data.ActionDate, BatchOrderActionField_ActionDate, BatchOrderActionField_ActionDate_len);        
        strncpy(self->data.ActionDate, BatchOrderActionField_ActionDate, sizeof(self->data.ActionDate) );
        BatchOrderActionField_ActionDate = NULL;
    }
            
    ///操作时间
    // TThostFtdcTimeType char[9]
    if( BatchOrderActionField_ActionTime != NULL ) {
        if(BatchOrderActionField_ActionTime_len > (Py_ssize_t)sizeof(self->data.ActionTime)) {
            PyErr_Format(PyExc_ValueError, "ActionTime too long: length=%zd (max allowed is %zd)", BatchOrderActionField_ActionTime_len, (Py_ssize_t)sizeof(self->data.ActionTime));
            return -1;
        }
        // memset(self->data.ActionTime, 0, sizeof(self->data.ActionTime));
        // memcpy(self->data.ActionTime, BatchOrderActionField_ActionTime, BatchOrderActionField_ActionTime_len);        
        strncpy(self->data.ActionTime, BatchOrderActionField_ActionTime, sizeof(self->data.ActionTime) );
        BatchOrderActionField_ActionTime = NULL;
    }
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    if( BatchOrderActionField_TraderID != NULL ) {
        if(BatchOrderActionField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", BatchOrderActionField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
            return -1;
        }
        // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
        // memcpy(self->data.TraderID, BatchOrderActionField_TraderID, BatchOrderActionField_TraderID_len);        
        strncpy(self->data.TraderID, BatchOrderActionField_TraderID, sizeof(self->data.TraderID) );
        BatchOrderActionField_TraderID = NULL;
    }
            
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = BatchOrderActionField_InstallID;
        
    ///操作本地编号
    // TThostFtdcOrderLocalIDType char[13]
    if( BatchOrderActionField_ActionLocalID != NULL ) {
        if(BatchOrderActionField_ActionLocalID_len > (Py_ssize_t)sizeof(self->data.ActionLocalID)) {
            PyErr_Format(PyExc_ValueError, "ActionLocalID too long: length=%zd (max allowed is %zd)", BatchOrderActionField_ActionLocalID_len, (Py_ssize_t)sizeof(self->data.ActionLocalID));
            return -1;
        }
        // memset(self->data.ActionLocalID, 0, sizeof(self->data.ActionLocalID));
        // memcpy(self->data.ActionLocalID, BatchOrderActionField_ActionLocalID, BatchOrderActionField_ActionLocalID_len);        
        strncpy(self->data.ActionLocalID, BatchOrderActionField_ActionLocalID, sizeof(self->data.ActionLocalID) );
        BatchOrderActionField_ActionLocalID = NULL;
    }
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    if( BatchOrderActionField_ParticipantID != NULL ) {
        if(BatchOrderActionField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", BatchOrderActionField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
            return -1;
        }
        // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
        // memcpy(self->data.ParticipantID, BatchOrderActionField_ParticipantID, BatchOrderActionField_ParticipantID_len);        
        strncpy(self->data.ParticipantID, BatchOrderActionField_ParticipantID, sizeof(self->data.ParticipantID) );
        BatchOrderActionField_ParticipantID = NULL;
    }
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    if( BatchOrderActionField_ClientID != NULL ) {
        if(BatchOrderActionField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", BatchOrderActionField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
            return -1;
        }
        // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
        // memcpy(self->data.ClientID, BatchOrderActionField_ClientID, BatchOrderActionField_ClientID_len);        
        strncpy(self->data.ClientID, BatchOrderActionField_ClientID, sizeof(self->data.ClientID) );
        BatchOrderActionField_ClientID = NULL;
    }
            
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    if( BatchOrderActionField_BusinessUnit != NULL ) {
        if(BatchOrderActionField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", BatchOrderActionField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
            return -1;
        }
        // memset(self->data.BusinessUnit, 0, sizeof(self->data.BusinessUnit));
        // memcpy(self->data.BusinessUnit, BatchOrderActionField_BusinessUnit, BatchOrderActionField_BusinessUnit_len);        
        strncpy(self->data.BusinessUnit, BatchOrderActionField_BusinessUnit, sizeof(self->data.BusinessUnit) );
        BatchOrderActionField_BusinessUnit = NULL;
    }
            
    ///报单操作状态
    // TThostFtdcOrderActionStatusType char
    self->data.OrderActionStatus = BatchOrderActionField_OrderActionStatus;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( BatchOrderActionField_UserID != NULL ) {
        if(BatchOrderActionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", BatchOrderActionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, BatchOrderActionField_UserID, BatchOrderActionField_UserID_len);        
        strncpy(self->data.UserID, BatchOrderActionField_UserID, sizeof(self->data.UserID) );
        BatchOrderActionField_UserID = NULL;
    }
            
    ///状态信息
    // TThostFtdcErrorMsgType char[81]
    if( BatchOrderActionField_StatusMsg != NULL ) {
        if(BatchOrderActionField_StatusMsg_len > (Py_ssize_t)sizeof(self->data.StatusMsg)) {
            PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is %zd)", BatchOrderActionField_StatusMsg_len, (Py_ssize_t)sizeof(self->data.StatusMsg));
            return -1;
        }
        // memset(self->data.StatusMsg, 0, sizeof(self->data.StatusMsg));
        // memcpy(self->data.StatusMsg, BatchOrderActionField_StatusMsg, BatchOrderActionField_StatusMsg_len);        
        strncpy(self->data.StatusMsg, BatchOrderActionField_StatusMsg, sizeof(self->data.StatusMsg) );
        BatchOrderActionField_StatusMsg = NULL;
    }
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( BatchOrderActionField_InvestUnitID != NULL ) {
        if(BatchOrderActionField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", BatchOrderActionField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, BatchOrderActionField_InvestUnitID, BatchOrderActionField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, BatchOrderActionField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        BatchOrderActionField_InvestUnitID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    if( BatchOrderActionField_reserve1 != NULL ) {
        if(BatchOrderActionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", BatchOrderActionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, BatchOrderActionField_reserve1, BatchOrderActionField_reserve1_len);        
        strncpy(self->data.reserve1, BatchOrderActionField_reserve1, sizeof(self->data.reserve1) );
        BatchOrderActionField_reserve1 = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( BatchOrderActionField_MacAddress != NULL ) {
        if(BatchOrderActionField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", BatchOrderActionField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, BatchOrderActionField_MacAddress, BatchOrderActionField_MacAddress_len);        
        strncpy(self->data.MacAddress, BatchOrderActionField_MacAddress, sizeof(self->data.MacAddress) );
        BatchOrderActionField_MacAddress = NULL;
    }
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( BatchOrderActionField_IPAddress != NULL ) {
        if(BatchOrderActionField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", BatchOrderActionField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, BatchOrderActionField_IPAddress, BatchOrderActionField_IPAddress_len);        
        strncpy(self->data.IPAddress, BatchOrderActionField_IPAddress, sizeof(self->data.IPAddress) );
        BatchOrderActionField_IPAddress = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcBatchOrderActionField_dealloc(PyCThostFtdcBatchOrderActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcBatchOrderActionField_repr(PyCThostFtdcBatchOrderActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i,s:i,s:i,s:i,s:y,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i,s:i,s:i,s:i,s:s,s:s,s:s,s:s,s:i,s:s,s:s,s:s,s:s,s:c,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"OrderActionRef", self->data.OrderActionRef 
        ,"RequestID", self->data.RequestID 
        ,"FrontID", self->data.FrontID 
        ,"SessionID", self->data.SessionID 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"ActionDate", self->data.ActionDate//, (Py_ssize_t)sizeof(self->data.ActionDate) 
        ,"ActionTime", self->data.ActionTime//, (Py_ssize_t)sizeof(self->data.ActionTime) 
        ,"TraderID", self->data.TraderID//, (Py_ssize_t)sizeof(self->data.TraderID) 
        ,"InstallID", self->data.InstallID 
        ,"ActionLocalID", self->data.ActionLocalID//, (Py_ssize_t)sizeof(self->data.ActionLocalID) 
        ,"ParticipantID", self->data.ParticipantID//, (Py_ssize_t)sizeof(self->data.ParticipantID) 
        ,"ClientID", self->data.ClientID//, (Py_ssize_t)sizeof(self->data.ClientID) 
        ,"BusinessUnit", self->data.BusinessUnit//, (Py_ssize_t)sizeof(self->data.BusinessUnit) 
        ,"OrderActionStatus", self->data.OrderActionStatus 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"StatusMsg", self->data.StatusMsg//, (Py_ssize_t)sizeof(self->data.StatusMsg) 
        ,"InvestUnitID", self->data.InvestUnitID//, (Py_ssize_t)sizeof(self->data.InvestUnitID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"MacAddress", self->data.MacAddress//, (Py_ssize_t)sizeof(self->data.MacAddress) 
        ,"IPAddress", self->data.IPAddress//, (Py_ssize_t)sizeof(self->data.IPAddress) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBatchOrderActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcBatchOrderActionField_get_BrokerID(PyCThostFtdcBatchOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcBatchOrderActionField_set_BrokerID(PyCThostFtdcBatchOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcBatchOrderActionField_get_InvestorID(PyCThostFtdcBatchOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcBatchOrderActionField_set_InvestorID(PyCThostFtdcBatchOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcBatchOrderActionField_get_OrderActionRef(PyCThostFtdcBatchOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.OrderActionRef);
#else
    return PyInt_FromLong(self->data.OrderActionRef);
#endif
}

///报单操作引用
// TThostFtdcOrderActionRefType int
static int PyCThostFtdcBatchOrderActionField_set_OrderActionRef(PyCThostFtdcBatchOrderActionField *self, PyObject* val, void *closure) {
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
        
///请求编号
// TThostFtdcRequestIDType int
static PyObject *PyCThostFtdcBatchOrderActionField_get_RequestID(PyCThostFtdcBatchOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcBatchOrderActionField_set_RequestID(PyCThostFtdcBatchOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcBatchOrderActionField_get_FrontID(PyCThostFtdcBatchOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FrontID);
#else
    return PyInt_FromLong(self->data.FrontID);
#endif
}

///前置编号
// TThostFtdcFrontIDType int
static int PyCThostFtdcBatchOrderActionField_set_FrontID(PyCThostFtdcBatchOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcBatchOrderActionField_get_SessionID(PyCThostFtdcBatchOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话编号
// TThostFtdcSessionIDType int
static int PyCThostFtdcBatchOrderActionField_set_SessionID(PyCThostFtdcBatchOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcBatchOrderActionField_get_ExchangeID(PyCThostFtdcBatchOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcBatchOrderActionField_set_ExchangeID(PyCThostFtdcBatchOrderActionField *self, PyObject* val, void *closure) {
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
            
///操作日期
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcBatchOrderActionField_get_ActionDate(PyCThostFtdcBatchOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActionDate, (Py_ssize_t)sizeof(self->data.ActionDate));
    return PyBytes_FromString(self->data.ActionDate);
}

///操作日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcBatchOrderActionField_set_ActionDate(PyCThostFtdcBatchOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcBatchOrderActionField_get_ActionTime(PyCThostFtdcBatchOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActionTime, (Py_ssize_t)sizeof(self->data.ActionTime));
    return PyBytes_FromString(self->data.ActionTime);
}

///操作时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcBatchOrderActionField_set_ActionTime(PyCThostFtdcBatchOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcBatchOrderActionField_get_TraderID(PyCThostFtdcBatchOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TraderID, (Py_ssize_t)sizeof(self->data.TraderID));
    return PyBytes_FromString(self->data.TraderID);
}

///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static int PyCThostFtdcBatchOrderActionField_set_TraderID(PyCThostFtdcBatchOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcBatchOrderActionField_get_InstallID(PyCThostFtdcBatchOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcBatchOrderActionField_set_InstallID(PyCThostFtdcBatchOrderActionField *self, PyObject* val, void *closure) {
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
        
///操作本地编号
// TThostFtdcOrderLocalIDType char[13]
static PyObject *PyCThostFtdcBatchOrderActionField_get_ActionLocalID(PyCThostFtdcBatchOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActionLocalID, (Py_ssize_t)sizeof(self->data.ActionLocalID));
    return PyBytes_FromString(self->data.ActionLocalID);
}

///操作本地编号
// TThostFtdcOrderLocalIDType char[13]
static int PyCThostFtdcBatchOrderActionField_set_ActionLocalID(PyCThostFtdcBatchOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcBatchOrderActionField_get_ParticipantID(PyCThostFtdcBatchOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParticipantID, (Py_ssize_t)sizeof(self->data.ParticipantID));
    return PyBytes_FromString(self->data.ParticipantID);
}

///会员代码
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcBatchOrderActionField_set_ParticipantID(PyCThostFtdcBatchOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcBatchOrderActionField_get_ClientID(PyCThostFtdcBatchOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientID, (Py_ssize_t)sizeof(self->data.ClientID));
    return PyBytes_FromString(self->data.ClientID);
}

///客户代码
// TThostFtdcClientIDType char[11]
static int PyCThostFtdcBatchOrderActionField_set_ClientID(PyCThostFtdcBatchOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcBatchOrderActionField_get_BusinessUnit(PyCThostFtdcBatchOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BusinessUnit, (Py_ssize_t)sizeof(self->data.BusinessUnit));
    return PyBytes_FromString(self->data.BusinessUnit);
}

///业务单元
// TThostFtdcBusinessUnitType char[21]
static int PyCThostFtdcBatchOrderActionField_set_BusinessUnit(PyCThostFtdcBatchOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcBatchOrderActionField_get_OrderActionStatus(PyCThostFtdcBatchOrderActionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OrderActionStatus), 1);
}

///报单操作状态
// TThostFtdcOrderActionStatusType char
static int PyCThostFtdcBatchOrderActionField_set_OrderActionStatus(PyCThostFtdcBatchOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcBatchOrderActionField_get_UserID(PyCThostFtdcBatchOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcBatchOrderActionField_set_UserID(PyCThostFtdcBatchOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcBatchOrderActionField_get_StatusMsg(PyCThostFtdcBatchOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.StatusMsg, (Py_ssize_t)sizeof(self->data.StatusMsg));
    return PyBytes_FromString(self->data.StatusMsg);
}

///状态信息
// TThostFtdcErrorMsgType char[81]
static int PyCThostFtdcBatchOrderActionField_set_StatusMsg(PyCThostFtdcBatchOrderActionField *self, PyObject* val, void *closure) {
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
            
///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static PyObject *PyCThostFtdcBatchOrderActionField_get_InvestUnitID(PyCThostFtdcBatchOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcBatchOrderActionField_set_InvestUnitID(PyCThostFtdcBatchOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcBatchOrderActionField_get_reserve1(PyCThostFtdcBatchOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static int PyCThostFtdcBatchOrderActionField_set_reserve1(PyCThostFtdcBatchOrderActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 16 bytes");
        return -1;
    }
    // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
    // memcpy(self->data.reserve1, buf, len);
    strncpy(self->data.reserve1, buf, sizeof(self->data.reserve1));
    return 0;
}
            
///Mac地址
// TThostFtdcMacAddressType char[21]
static PyObject *PyCThostFtdcBatchOrderActionField_get_MacAddress(PyCThostFtdcBatchOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcBatchOrderActionField_set_MacAddress(PyCThostFtdcBatchOrderActionField *self, PyObject* val, void *closure) {
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
            
///IP地址
// TThostFtdcIPAddressType char[33]
static PyObject *PyCThostFtdcBatchOrderActionField_get_IPAddress(PyCThostFtdcBatchOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcBatchOrderActionField_set_IPAddress(PyCThostFtdcBatchOrderActionField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcBatchOrderActionField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcBatchOrderActionField_get_BrokerID, (setter)PyCThostFtdcBatchOrderActionField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcBatchOrderActionField_get_InvestorID, (setter)PyCThostFtdcBatchOrderActionField_set_InvestorID, (char *)"InvestorID", NULL},
    ///报单操作引用 
    {(char *)"OrderActionRef", (getter)PyCThostFtdcBatchOrderActionField_get_OrderActionRef, (setter)PyCThostFtdcBatchOrderActionField_set_OrderActionRef, (char *)"OrderActionRef", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcBatchOrderActionField_get_RequestID, (setter)PyCThostFtdcBatchOrderActionField_set_RequestID, (char *)"RequestID", NULL},
    ///前置编号 
    {(char *)"FrontID", (getter)PyCThostFtdcBatchOrderActionField_get_FrontID, (setter)PyCThostFtdcBatchOrderActionField_set_FrontID, (char *)"FrontID", NULL},
    ///会话编号 
    {(char *)"SessionID", (getter)PyCThostFtdcBatchOrderActionField_get_SessionID, (setter)PyCThostFtdcBatchOrderActionField_set_SessionID, (char *)"SessionID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcBatchOrderActionField_get_ExchangeID, (setter)PyCThostFtdcBatchOrderActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///操作日期 
    {(char *)"ActionDate", (getter)PyCThostFtdcBatchOrderActionField_get_ActionDate, (setter)PyCThostFtdcBatchOrderActionField_set_ActionDate, (char *)"ActionDate", NULL},
    ///操作时间 
    {(char *)"ActionTime", (getter)PyCThostFtdcBatchOrderActionField_get_ActionTime, (setter)PyCThostFtdcBatchOrderActionField_set_ActionTime, (char *)"ActionTime", NULL},
    ///交易所交易员代码 
    {(char *)"TraderID", (getter)PyCThostFtdcBatchOrderActionField_get_TraderID, (setter)PyCThostFtdcBatchOrderActionField_set_TraderID, (char *)"TraderID", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcBatchOrderActionField_get_InstallID, (setter)PyCThostFtdcBatchOrderActionField_set_InstallID, (char *)"InstallID", NULL},
    ///操作本地编号 
    {(char *)"ActionLocalID", (getter)PyCThostFtdcBatchOrderActionField_get_ActionLocalID, (setter)PyCThostFtdcBatchOrderActionField_set_ActionLocalID, (char *)"ActionLocalID", NULL},
    ///会员代码 
    {(char *)"ParticipantID", (getter)PyCThostFtdcBatchOrderActionField_get_ParticipantID, (setter)PyCThostFtdcBatchOrderActionField_set_ParticipantID, (char *)"ParticipantID", NULL},
    ///客户代码 
    {(char *)"ClientID", (getter)PyCThostFtdcBatchOrderActionField_get_ClientID, (setter)PyCThostFtdcBatchOrderActionField_set_ClientID, (char *)"ClientID", NULL},
    ///业务单元 
    {(char *)"BusinessUnit", (getter)PyCThostFtdcBatchOrderActionField_get_BusinessUnit, (setter)PyCThostFtdcBatchOrderActionField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
    ///报单操作状态 
    {(char *)"OrderActionStatus", (getter)PyCThostFtdcBatchOrderActionField_get_OrderActionStatus, (setter)PyCThostFtdcBatchOrderActionField_set_OrderActionStatus, (char *)"OrderActionStatus", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcBatchOrderActionField_get_UserID, (setter)PyCThostFtdcBatchOrderActionField_set_UserID, (char *)"UserID", NULL},
    ///状态信息 
    {(char *)"StatusMsg", (getter)PyCThostFtdcBatchOrderActionField_get_StatusMsg, (setter)PyCThostFtdcBatchOrderActionField_set_StatusMsg, (char *)"StatusMsg", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcBatchOrderActionField_get_InvestUnitID, (setter)PyCThostFtdcBatchOrderActionField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcBatchOrderActionField_get_reserve1, (setter)PyCThostFtdcBatchOrderActionField_set_reserve1, (char *)"reserve1", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcBatchOrderActionField_get_MacAddress, (setter)PyCThostFtdcBatchOrderActionField_set_MacAddress, (char *)"MacAddress", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcBatchOrderActionField_get_IPAddress, (setter)PyCThostFtdcBatchOrderActionField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcBatchOrderActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcBatchOrderActionField",	/* tp_name */
	sizeof(PyCThostFtdcBatchOrderActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcBatchOrderActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcBatchOrderActionField_repr,   /* tp_repr */
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
	"CThostFtdcBatchOrderActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcBatchOrderActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcBatchOrderActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcBatchOrderActionField_new,       /* tp_new */
};

int PyCThostFtdcBatchOrderActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcBatchOrderActionField  */
	if (PyType_Ready(&PyCThostFtdcBatchOrderActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcBatchOrderActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcBatchOrderActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcBatchOrderActionField", (PyObject *)&PyCThostFtdcBatchOrderActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcBatchOrderActionField to module");
        Py_DECREF(&PyCThostFtdcBatchOrderActionFieldType);
		return -1;
    }

    return 0;
}
