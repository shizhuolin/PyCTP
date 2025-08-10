
#include "PyCThostFtdcParkedOrderActionField.h"

///输入预埋单操作

static PyObject *PyCThostFtdcParkedOrderActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcParkedOrderActionField *self = (PyCThostFtdcParkedOrderActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcParkedOrderActionField_init(PyCThostFtdcParkedOrderActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "OrderActionRef", "OrderRef", "RequestID", "FrontID", "SessionID", "ExchangeID", "OrderSysID", "ActionFlag", "LimitPrice", "VolumeChange", "UserID", "reserve1", "ParkedOrderActionID", "UserType", "Status", "ErrorID", "ErrorMsg", "InvestUnitID", "reserve2", "MacAddress", "InstrumentID", "IPAddress",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *ParkedOrderActionField_BrokerID = NULL;
    Py_ssize_t ParkedOrderActionField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *ParkedOrderActionField_InvestorID = NULL;
    Py_ssize_t ParkedOrderActionField_InvestorID_len = 0;
            
    ///报单操作引用
    // TThostFtdcOrderActionRefType int
    int ParkedOrderActionField_OrderActionRef = 0;
        
    ///报单引用
    // TThostFtdcOrderRefType char[13]
    const char *ParkedOrderActionField_OrderRef = NULL;
    Py_ssize_t ParkedOrderActionField_OrderRef_len = 0;
            
    ///请求编号
    // TThostFtdcRequestIDType int
    int ParkedOrderActionField_RequestID = 0;
        
    ///前置编号
    // TThostFtdcFrontIDType int
    int ParkedOrderActionField_FrontID = 0;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    int ParkedOrderActionField_SessionID = 0;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *ParkedOrderActionField_ExchangeID = NULL;
    Py_ssize_t ParkedOrderActionField_ExchangeID_len = 0;
            
    ///报单编号
    // TThostFtdcOrderSysIDType char[21]
    const char *ParkedOrderActionField_OrderSysID = NULL;
    Py_ssize_t ParkedOrderActionField_OrderSysID_len = 0;
            
    ///操作标志
    // TThostFtdcActionFlagType char
    char ParkedOrderActionField_ActionFlag = 0;
            
    ///价格
    // TThostFtdcPriceType double
    double ParkedOrderActionField_LimitPrice = 0.0;
        
    ///数量变化
    // TThostFtdcVolumeType int
    int ParkedOrderActionField_VolumeChange = 0;
        
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *ParkedOrderActionField_UserID = NULL;
    Py_ssize_t ParkedOrderActionField_UserID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *ParkedOrderActionField_reserve1 = NULL;
    Py_ssize_t ParkedOrderActionField_reserve1_len = 0;
            
    ///预埋撤单单编号
    // TThostFtdcParkedOrderActionIDType char[13]
    const char *ParkedOrderActionField_ParkedOrderActionID = NULL;
    Py_ssize_t ParkedOrderActionField_ParkedOrderActionID_len = 0;
            
    ///用户类型
    // TThostFtdcUserTypeType char
    char ParkedOrderActionField_UserType = 0;
            
    ///预埋撤单状态
    // TThostFtdcParkedOrderStatusType char
    char ParkedOrderActionField_Status = 0;
            
    ///错误代码
    // TThostFtdcErrorIDType int
    int ParkedOrderActionField_ErrorID = 0;
        
    ///错误信息
    // TThostFtdcErrorMsgType char[81]
    const char *ParkedOrderActionField_ErrorMsg = NULL;
    Py_ssize_t ParkedOrderActionField_ErrorMsg_len = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *ParkedOrderActionField_InvestUnitID = NULL;
    Py_ssize_t ParkedOrderActionField_InvestUnitID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    const char *ParkedOrderActionField_reserve2 = NULL;
    Py_ssize_t ParkedOrderActionField_reserve2_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *ParkedOrderActionField_MacAddress = NULL;
    Py_ssize_t ParkedOrderActionField_MacAddress_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *ParkedOrderActionField_InstrumentID = NULL;
    Py_ssize_t ParkedOrderActionField_InstrumentID_len = 0;
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *ParkedOrderActionField_IPAddress = NULL;
    Py_ssize_t ParkedOrderActionField_IPAddress_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iy#iiiy#y#cdiy#y#y#cciy#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#is#iiis#s#cdis#s#s#ccis#s#s#s#s#s#", (char **)kwlist
#endif

        , &ParkedOrderActionField_BrokerID, &ParkedOrderActionField_BrokerID_len 
        , &ParkedOrderActionField_InvestorID, &ParkedOrderActionField_InvestorID_len 
        , &ParkedOrderActionField_OrderActionRef 
        , &ParkedOrderActionField_OrderRef, &ParkedOrderActionField_OrderRef_len 
        , &ParkedOrderActionField_RequestID 
        , &ParkedOrderActionField_FrontID 
        , &ParkedOrderActionField_SessionID 
        , &ParkedOrderActionField_ExchangeID, &ParkedOrderActionField_ExchangeID_len 
        , &ParkedOrderActionField_OrderSysID, &ParkedOrderActionField_OrderSysID_len 
        , &ParkedOrderActionField_ActionFlag 
        , &ParkedOrderActionField_LimitPrice 
        , &ParkedOrderActionField_VolumeChange 
        , &ParkedOrderActionField_UserID, &ParkedOrderActionField_UserID_len 
        , &ParkedOrderActionField_reserve1, &ParkedOrderActionField_reserve1_len 
        , &ParkedOrderActionField_ParkedOrderActionID, &ParkedOrderActionField_ParkedOrderActionID_len 
        , &ParkedOrderActionField_UserType 
        , &ParkedOrderActionField_Status 
        , &ParkedOrderActionField_ErrorID 
        , &ParkedOrderActionField_ErrorMsg, &ParkedOrderActionField_ErrorMsg_len 
        , &ParkedOrderActionField_InvestUnitID, &ParkedOrderActionField_InvestUnitID_len 
        , &ParkedOrderActionField_reserve2, &ParkedOrderActionField_reserve2_len 
        , &ParkedOrderActionField_MacAddress, &ParkedOrderActionField_MacAddress_len 
        , &ParkedOrderActionField_InstrumentID, &ParkedOrderActionField_InstrumentID_len 
        , &ParkedOrderActionField_IPAddress, &ParkedOrderActionField_IPAddress_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( ParkedOrderActionField_BrokerID != NULL ) {
        if(ParkedOrderActionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", ParkedOrderActionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, ParkedOrderActionField_BrokerID, ParkedOrderActionField_BrokerID_len);        
        strncpy(self->data.BrokerID, ParkedOrderActionField_BrokerID, sizeof(self->data.BrokerID) );
        ParkedOrderActionField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( ParkedOrderActionField_InvestorID != NULL ) {
        if(ParkedOrderActionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", ParkedOrderActionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, ParkedOrderActionField_InvestorID, ParkedOrderActionField_InvestorID_len);        
        strncpy(self->data.InvestorID, ParkedOrderActionField_InvestorID, sizeof(self->data.InvestorID) );
        ParkedOrderActionField_InvestorID = NULL;
    }
            
    ///报单操作引用
    // TThostFtdcOrderActionRefType int
    self->data.OrderActionRef = ParkedOrderActionField_OrderActionRef;
        
    ///报单引用
    // TThostFtdcOrderRefType char[13]
    if( ParkedOrderActionField_OrderRef != NULL ) {
        if(ParkedOrderActionField_OrderRef_len > (Py_ssize_t)sizeof(self->data.OrderRef)) {
            PyErr_Format(PyExc_ValueError, "OrderRef too long: length=%zd (max allowed is %zd)", ParkedOrderActionField_OrderRef_len, (Py_ssize_t)sizeof(self->data.OrderRef));
            return -1;
        }
        // memset(self->data.OrderRef, 0, sizeof(self->data.OrderRef));
        // memcpy(self->data.OrderRef, ParkedOrderActionField_OrderRef, ParkedOrderActionField_OrderRef_len);        
        strncpy(self->data.OrderRef, ParkedOrderActionField_OrderRef, sizeof(self->data.OrderRef) );
        ParkedOrderActionField_OrderRef = NULL;
    }
            
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = ParkedOrderActionField_RequestID;
        
    ///前置编号
    // TThostFtdcFrontIDType int
    self->data.FrontID = ParkedOrderActionField_FrontID;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    self->data.SessionID = ParkedOrderActionField_SessionID;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( ParkedOrderActionField_ExchangeID != NULL ) {
        if(ParkedOrderActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", ParkedOrderActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, ParkedOrderActionField_ExchangeID, ParkedOrderActionField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, ParkedOrderActionField_ExchangeID, sizeof(self->data.ExchangeID) );
        ParkedOrderActionField_ExchangeID = NULL;
    }
            
    ///报单编号
    // TThostFtdcOrderSysIDType char[21]
    if( ParkedOrderActionField_OrderSysID != NULL ) {
        if(ParkedOrderActionField_OrderSysID_len > (Py_ssize_t)sizeof(self->data.OrderSysID)) {
            PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is %zd)", ParkedOrderActionField_OrderSysID_len, (Py_ssize_t)sizeof(self->data.OrderSysID));
            return -1;
        }
        // memset(self->data.OrderSysID, 0, sizeof(self->data.OrderSysID));
        // memcpy(self->data.OrderSysID, ParkedOrderActionField_OrderSysID, ParkedOrderActionField_OrderSysID_len);        
        strncpy(self->data.OrderSysID, ParkedOrderActionField_OrderSysID, sizeof(self->data.OrderSysID) );
        ParkedOrderActionField_OrderSysID = NULL;
    }
            
    ///操作标志
    // TThostFtdcActionFlagType char
    self->data.ActionFlag = ParkedOrderActionField_ActionFlag;
            
    ///价格
    // TThostFtdcPriceType double
    self->data.LimitPrice = ParkedOrderActionField_LimitPrice;
        
    ///数量变化
    // TThostFtdcVolumeType int
    self->data.VolumeChange = ParkedOrderActionField_VolumeChange;
        
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( ParkedOrderActionField_UserID != NULL ) {
        if(ParkedOrderActionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", ParkedOrderActionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, ParkedOrderActionField_UserID, ParkedOrderActionField_UserID_len);        
        strncpy(self->data.UserID, ParkedOrderActionField_UserID, sizeof(self->data.UserID) );
        ParkedOrderActionField_UserID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( ParkedOrderActionField_reserve1 != NULL ) {
        if(ParkedOrderActionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", ParkedOrderActionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, ParkedOrderActionField_reserve1, ParkedOrderActionField_reserve1_len);        
        strncpy(self->data.reserve1, ParkedOrderActionField_reserve1, sizeof(self->data.reserve1) );
        ParkedOrderActionField_reserve1 = NULL;
    }
            
    ///预埋撤单单编号
    // TThostFtdcParkedOrderActionIDType char[13]
    if( ParkedOrderActionField_ParkedOrderActionID != NULL ) {
        if(ParkedOrderActionField_ParkedOrderActionID_len > (Py_ssize_t)sizeof(self->data.ParkedOrderActionID)) {
            PyErr_Format(PyExc_ValueError, "ParkedOrderActionID too long: length=%zd (max allowed is %zd)", ParkedOrderActionField_ParkedOrderActionID_len, (Py_ssize_t)sizeof(self->data.ParkedOrderActionID));
            return -1;
        }
        // memset(self->data.ParkedOrderActionID, 0, sizeof(self->data.ParkedOrderActionID));
        // memcpy(self->data.ParkedOrderActionID, ParkedOrderActionField_ParkedOrderActionID, ParkedOrderActionField_ParkedOrderActionID_len);        
        strncpy(self->data.ParkedOrderActionID, ParkedOrderActionField_ParkedOrderActionID, sizeof(self->data.ParkedOrderActionID) );
        ParkedOrderActionField_ParkedOrderActionID = NULL;
    }
            
    ///用户类型
    // TThostFtdcUserTypeType char
    self->data.UserType = ParkedOrderActionField_UserType;
            
    ///预埋撤单状态
    // TThostFtdcParkedOrderStatusType char
    self->data.Status = ParkedOrderActionField_Status;
            
    ///错误代码
    // TThostFtdcErrorIDType int
    self->data.ErrorID = ParkedOrderActionField_ErrorID;
        
    ///错误信息
    // TThostFtdcErrorMsgType char[81]
    if( ParkedOrderActionField_ErrorMsg != NULL ) {
        if(ParkedOrderActionField_ErrorMsg_len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
            PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is %zd)", ParkedOrderActionField_ErrorMsg_len, (Py_ssize_t)sizeof(self->data.ErrorMsg));
            return -1;
        }
        // memset(self->data.ErrorMsg, 0, sizeof(self->data.ErrorMsg));
        // memcpy(self->data.ErrorMsg, ParkedOrderActionField_ErrorMsg, ParkedOrderActionField_ErrorMsg_len);        
        strncpy(self->data.ErrorMsg, ParkedOrderActionField_ErrorMsg, sizeof(self->data.ErrorMsg) );
        ParkedOrderActionField_ErrorMsg = NULL;
    }
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( ParkedOrderActionField_InvestUnitID != NULL ) {
        if(ParkedOrderActionField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", ParkedOrderActionField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, ParkedOrderActionField_InvestUnitID, ParkedOrderActionField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, ParkedOrderActionField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        ParkedOrderActionField_InvestUnitID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    if( ParkedOrderActionField_reserve2 != NULL ) {
        if(ParkedOrderActionField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", ParkedOrderActionField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
            return -1;
        }
        // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
        // memcpy(self->data.reserve2, ParkedOrderActionField_reserve2, ParkedOrderActionField_reserve2_len);        
        strncpy(self->data.reserve2, ParkedOrderActionField_reserve2, sizeof(self->data.reserve2) );
        ParkedOrderActionField_reserve2 = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( ParkedOrderActionField_MacAddress != NULL ) {
        if(ParkedOrderActionField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", ParkedOrderActionField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, ParkedOrderActionField_MacAddress, ParkedOrderActionField_MacAddress_len);        
        strncpy(self->data.MacAddress, ParkedOrderActionField_MacAddress, sizeof(self->data.MacAddress) );
        ParkedOrderActionField_MacAddress = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( ParkedOrderActionField_InstrumentID != NULL ) {
        if(ParkedOrderActionField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", ParkedOrderActionField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, ParkedOrderActionField_InstrumentID, ParkedOrderActionField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, ParkedOrderActionField_InstrumentID, sizeof(self->data.InstrumentID) );
        ParkedOrderActionField_InstrumentID = NULL;
    }
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( ParkedOrderActionField_IPAddress != NULL ) {
        if(ParkedOrderActionField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", ParkedOrderActionField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, ParkedOrderActionField_IPAddress, ParkedOrderActionField_IPAddress_len);        
        strncpy(self->data.IPAddress, ParkedOrderActionField_IPAddress, sizeof(self->data.IPAddress) );
        ParkedOrderActionField_IPAddress = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcParkedOrderActionField_dealloc(PyCThostFtdcParkedOrderActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcParkedOrderActionField_repr(PyCThostFtdcParkedOrderActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i,s:y,s:i,s:i,s:i,s:y,s:y,s:c,s:d,s:i,s:y,s:y,s:y,s:c,s:c,s:i,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i,s:s,s:i,s:i,s:i,s:s,s:s,s:c,s:d,s:i,s:s,s:s,s:s,s:c,s:c,s:i,s:s,s:s,s:s,s:s,s:s,s:s}"
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
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"ParkedOrderActionID", self->data.ParkedOrderActionID//, (Py_ssize_t)sizeof(self->data.ParkedOrderActionID) 
        ,"UserType", self->data.UserType 
        ,"Status", self->data.Status 
        ,"ErrorID", self->data.ErrorID 
        ,"ErrorMsg", self->data.ErrorMsg//, (Py_ssize_t)sizeof(self->data.ErrorMsg) 
        ,"InvestUnitID", self->data.InvestUnitID//, (Py_ssize_t)sizeof(self->data.InvestUnitID) 
        ,"reserve2", self->data.reserve2//, (Py_ssize_t)sizeof(self->data.reserve2) 
        ,"MacAddress", self->data.MacAddress//, (Py_ssize_t)sizeof(self->data.MacAddress) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"IPAddress", self->data.IPAddress//, (Py_ssize_t)sizeof(self->data.IPAddress) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcParkedOrderActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcParkedOrderActionField_get_BrokerID(PyCThostFtdcParkedOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcParkedOrderActionField_set_BrokerID(PyCThostFtdcParkedOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcParkedOrderActionField_get_InvestorID(PyCThostFtdcParkedOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcParkedOrderActionField_set_InvestorID(PyCThostFtdcParkedOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcParkedOrderActionField_get_OrderActionRef(PyCThostFtdcParkedOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.OrderActionRef);
#else
    return PyInt_FromLong(self->data.OrderActionRef);
#endif
}

///报单操作引用
// TThostFtdcOrderActionRefType int
static int PyCThostFtdcParkedOrderActionField_set_OrderActionRef(PyCThostFtdcParkedOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcParkedOrderActionField_get_OrderRef(PyCThostFtdcParkedOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderRef, (Py_ssize_t)sizeof(self->data.OrderRef));
    return PyBytes_FromString(self->data.OrderRef);
}

///报单引用
// TThostFtdcOrderRefType char[13]
static int PyCThostFtdcParkedOrderActionField_set_OrderRef(PyCThostFtdcParkedOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcParkedOrderActionField_get_RequestID(PyCThostFtdcParkedOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcParkedOrderActionField_set_RequestID(PyCThostFtdcParkedOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcParkedOrderActionField_get_FrontID(PyCThostFtdcParkedOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FrontID);
#else
    return PyInt_FromLong(self->data.FrontID);
#endif
}

///前置编号
// TThostFtdcFrontIDType int
static int PyCThostFtdcParkedOrderActionField_set_FrontID(PyCThostFtdcParkedOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcParkedOrderActionField_get_SessionID(PyCThostFtdcParkedOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话编号
// TThostFtdcSessionIDType int
static int PyCThostFtdcParkedOrderActionField_set_SessionID(PyCThostFtdcParkedOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcParkedOrderActionField_get_ExchangeID(PyCThostFtdcParkedOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcParkedOrderActionField_set_ExchangeID(PyCThostFtdcParkedOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcParkedOrderActionField_get_OrderSysID(PyCThostFtdcParkedOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderSysID, (Py_ssize_t)sizeof(self->data.OrderSysID));
    return PyBytes_FromString(self->data.OrderSysID);
}

///报单编号
// TThostFtdcOrderSysIDType char[21]
static int PyCThostFtdcParkedOrderActionField_set_OrderSysID(PyCThostFtdcParkedOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcParkedOrderActionField_get_ActionFlag(PyCThostFtdcParkedOrderActionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionFlag), 1);
}

///操作标志
// TThostFtdcActionFlagType char
static int PyCThostFtdcParkedOrderActionField_set_ActionFlag(PyCThostFtdcParkedOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcParkedOrderActionField_get_LimitPrice(PyCThostFtdcParkedOrderActionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LimitPrice);
}

///价格
// TThostFtdcPriceType double
static int PyCThostFtdcParkedOrderActionField_set_LimitPrice(PyCThostFtdcParkedOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcParkedOrderActionField_get_VolumeChange(PyCThostFtdcParkedOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.VolumeChange);
#else
    return PyInt_FromLong(self->data.VolumeChange);
#endif
}

///数量变化
// TThostFtdcVolumeType int
static int PyCThostFtdcParkedOrderActionField_set_VolumeChange(PyCThostFtdcParkedOrderActionField *self, PyObject* val, void *closure) {
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
        
///用户代码
// TThostFtdcUserIDType char[16]
static PyObject *PyCThostFtdcParkedOrderActionField_get_UserID(PyCThostFtdcParkedOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcParkedOrderActionField_set_UserID(PyCThostFtdcParkedOrderActionField *self, PyObject* val, void *closure) {
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
            
///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcParkedOrderActionField_get_reserve1(PyCThostFtdcParkedOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcParkedOrderActionField_set_reserve1(PyCThostFtdcParkedOrderActionField *self, PyObject* val, void *closure) {
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
            
///预埋撤单单编号
// TThostFtdcParkedOrderActionIDType char[13]
static PyObject *PyCThostFtdcParkedOrderActionField_get_ParkedOrderActionID(PyCThostFtdcParkedOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParkedOrderActionID, (Py_ssize_t)sizeof(self->data.ParkedOrderActionID));
    return PyBytes_FromString(self->data.ParkedOrderActionID);
}

///预埋撤单单编号
// TThostFtdcParkedOrderActionIDType char[13]
static int PyCThostFtdcParkedOrderActionField_set_ParkedOrderActionID(PyCThostFtdcParkedOrderActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ParkedOrderActionID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ParkedOrderActionID)) {
        PyErr_SetString(PyExc_ValueError, "ParkedOrderActionID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.ParkedOrderActionID, 0, sizeof(self->data.ParkedOrderActionID));
    // memcpy(self->data.ParkedOrderActionID, buf, len);
    strncpy(self->data.ParkedOrderActionID, buf, sizeof(self->data.ParkedOrderActionID));
    return 0;
}
            
///用户类型
// TThostFtdcUserTypeType char
static PyObject *PyCThostFtdcParkedOrderActionField_get_UserType(PyCThostFtdcParkedOrderActionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.UserType), 1);
}

///用户类型
// TThostFtdcUserTypeType char
static int PyCThostFtdcParkedOrderActionField_set_UserType(PyCThostFtdcParkedOrderActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UserType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.UserType)) {
        PyErr_SetString(PyExc_ValueError, "UserType must be equal 1 bytes");
        return -1;
    }
    self->data.UserType = *buf;
    return 0;
}
            
///预埋撤单状态
// TThostFtdcParkedOrderStatusType char
static PyObject *PyCThostFtdcParkedOrderActionField_get_Status(PyCThostFtdcParkedOrderActionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.Status), 1);
}

///预埋撤单状态
// TThostFtdcParkedOrderStatusType char
static int PyCThostFtdcParkedOrderActionField_set_Status(PyCThostFtdcParkedOrderActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Status Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Status)) {
        PyErr_SetString(PyExc_ValueError, "Status must be equal 1 bytes");
        return -1;
    }
    self->data.Status = *buf;
    return 0;
}
            
///错误代码
// TThostFtdcErrorIDType int
static PyObject *PyCThostFtdcParkedOrderActionField_get_ErrorID(PyCThostFtdcParkedOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.ErrorID);
#else
    return PyInt_FromLong(self->data.ErrorID);
#endif
}

///错误代码
// TThostFtdcErrorIDType int
static int PyCThostFtdcParkedOrderActionField_set_ErrorID(PyCThostFtdcParkedOrderActionField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ErrorID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ErrorID Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the ErrorID value out of range for C int");
        return -1;
    }
    self->data.ErrorID = (int)buf;
    return 0;
}
        
///错误信息
// TThostFtdcErrorMsgType char[81]
static PyObject *PyCThostFtdcParkedOrderActionField_get_ErrorMsg(PyCThostFtdcParkedOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ErrorMsg, (Py_ssize_t)sizeof(self->data.ErrorMsg));
    return PyBytes_FromString(self->data.ErrorMsg);
}

///错误信息
// TThostFtdcErrorMsgType char[81]
static int PyCThostFtdcParkedOrderActionField_set_ErrorMsg(PyCThostFtdcParkedOrderActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ErrorMsg Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
        PyErr_SetString(PyExc_ValueError, "ErrorMsg must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.ErrorMsg, 0, sizeof(self->data.ErrorMsg));
    // memcpy(self->data.ErrorMsg, buf, len);
    strncpy(self->data.ErrorMsg, buf, sizeof(self->data.ErrorMsg));
    return 0;
}
            
///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static PyObject *PyCThostFtdcParkedOrderActionField_get_InvestUnitID(PyCThostFtdcParkedOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcParkedOrderActionField_set_InvestUnitID(PyCThostFtdcParkedOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcParkedOrderActionField_get_reserve2(PyCThostFtdcParkedOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve2, (Py_ssize_t)sizeof(self->data.reserve2));
    return PyBytes_FromString(self->data.reserve2);
}

///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static int PyCThostFtdcParkedOrderActionField_set_reserve2(PyCThostFtdcParkedOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcParkedOrderActionField_get_MacAddress(PyCThostFtdcParkedOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcParkedOrderActionField_set_MacAddress(PyCThostFtdcParkedOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcParkedOrderActionField_get_InstrumentID(PyCThostFtdcParkedOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcParkedOrderActionField_set_InstrumentID(PyCThostFtdcParkedOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcParkedOrderActionField_get_IPAddress(PyCThostFtdcParkedOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcParkedOrderActionField_set_IPAddress(PyCThostFtdcParkedOrderActionField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcParkedOrderActionField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcParkedOrderActionField_get_BrokerID, (setter)PyCThostFtdcParkedOrderActionField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcParkedOrderActionField_get_InvestorID, (setter)PyCThostFtdcParkedOrderActionField_set_InvestorID, (char *)"InvestorID", NULL},
    ///报单操作引用 
    {(char *)"OrderActionRef", (getter)PyCThostFtdcParkedOrderActionField_get_OrderActionRef, (setter)PyCThostFtdcParkedOrderActionField_set_OrderActionRef, (char *)"OrderActionRef", NULL},
    ///报单引用 
    {(char *)"OrderRef", (getter)PyCThostFtdcParkedOrderActionField_get_OrderRef, (setter)PyCThostFtdcParkedOrderActionField_set_OrderRef, (char *)"OrderRef", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcParkedOrderActionField_get_RequestID, (setter)PyCThostFtdcParkedOrderActionField_set_RequestID, (char *)"RequestID", NULL},
    ///前置编号 
    {(char *)"FrontID", (getter)PyCThostFtdcParkedOrderActionField_get_FrontID, (setter)PyCThostFtdcParkedOrderActionField_set_FrontID, (char *)"FrontID", NULL},
    ///会话编号 
    {(char *)"SessionID", (getter)PyCThostFtdcParkedOrderActionField_get_SessionID, (setter)PyCThostFtdcParkedOrderActionField_set_SessionID, (char *)"SessionID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcParkedOrderActionField_get_ExchangeID, (setter)PyCThostFtdcParkedOrderActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///报单编号 
    {(char *)"OrderSysID", (getter)PyCThostFtdcParkedOrderActionField_get_OrderSysID, (setter)PyCThostFtdcParkedOrderActionField_set_OrderSysID, (char *)"OrderSysID", NULL},
    ///操作标志 
    {(char *)"ActionFlag", (getter)PyCThostFtdcParkedOrderActionField_get_ActionFlag, (setter)PyCThostFtdcParkedOrderActionField_set_ActionFlag, (char *)"ActionFlag", NULL},
    ///价格 
    {(char *)"LimitPrice", (getter)PyCThostFtdcParkedOrderActionField_get_LimitPrice, (setter)PyCThostFtdcParkedOrderActionField_set_LimitPrice, (char *)"LimitPrice", NULL},
    ///数量变化 
    {(char *)"VolumeChange", (getter)PyCThostFtdcParkedOrderActionField_get_VolumeChange, (setter)PyCThostFtdcParkedOrderActionField_set_VolumeChange, (char *)"VolumeChange", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcParkedOrderActionField_get_UserID, (setter)PyCThostFtdcParkedOrderActionField_set_UserID, (char *)"UserID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcParkedOrderActionField_get_reserve1, (setter)PyCThostFtdcParkedOrderActionField_set_reserve1, (char *)"reserve1", NULL},
    ///预埋撤单单编号 
    {(char *)"ParkedOrderActionID", (getter)PyCThostFtdcParkedOrderActionField_get_ParkedOrderActionID, (setter)PyCThostFtdcParkedOrderActionField_set_ParkedOrderActionID, (char *)"ParkedOrderActionID", NULL},
    ///用户类型 
    {(char *)"UserType", (getter)PyCThostFtdcParkedOrderActionField_get_UserType, (setter)PyCThostFtdcParkedOrderActionField_set_UserType, (char *)"UserType", NULL},
    ///预埋撤单状态 
    {(char *)"Status", (getter)PyCThostFtdcParkedOrderActionField_get_Status, (setter)PyCThostFtdcParkedOrderActionField_set_Status, (char *)"Status", NULL},
    ///错误代码 
    {(char *)"ErrorID", (getter)PyCThostFtdcParkedOrderActionField_get_ErrorID, (setter)PyCThostFtdcParkedOrderActionField_set_ErrorID, (char *)"ErrorID", NULL},
    ///错误信息 
    {(char *)"ErrorMsg", (getter)PyCThostFtdcParkedOrderActionField_get_ErrorMsg, (setter)PyCThostFtdcParkedOrderActionField_set_ErrorMsg, (char *)"ErrorMsg", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcParkedOrderActionField_get_InvestUnitID, (setter)PyCThostFtdcParkedOrderActionField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///保留的无效字段 
    {(char *)"reserve2", (getter)PyCThostFtdcParkedOrderActionField_get_reserve2, (setter)PyCThostFtdcParkedOrderActionField_set_reserve2, (char *)"reserve2", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcParkedOrderActionField_get_MacAddress, (setter)PyCThostFtdcParkedOrderActionField_set_MacAddress, (char *)"MacAddress", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcParkedOrderActionField_get_InstrumentID, (setter)PyCThostFtdcParkedOrderActionField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcParkedOrderActionField_get_IPAddress, (setter)PyCThostFtdcParkedOrderActionField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcParkedOrderActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcParkedOrderActionField",	/* tp_name */
	sizeof(PyCThostFtdcParkedOrderActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcParkedOrderActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcParkedOrderActionField_repr,   /* tp_repr */
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
	"CThostFtdcParkedOrderActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcParkedOrderActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcParkedOrderActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcParkedOrderActionField_new,       /* tp_new */
};

int PyCThostFtdcParkedOrderActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcParkedOrderActionField  */
	if (PyType_Ready(&PyCThostFtdcParkedOrderActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcParkedOrderActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcParkedOrderActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcParkedOrderActionField", (PyObject *)&PyCThostFtdcParkedOrderActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcParkedOrderActionField to module");
        Py_DECREF(&PyCThostFtdcParkedOrderActionFieldType);
		return -1;
    }

    return 0;
}
