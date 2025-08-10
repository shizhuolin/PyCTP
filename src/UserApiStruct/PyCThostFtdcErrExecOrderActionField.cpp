
#include "PyCThostFtdcErrExecOrderActionField.h"

///错误执行宣告操作

static PyObject *PyCThostFtdcErrExecOrderActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcErrExecOrderActionField *self = (PyCThostFtdcErrExecOrderActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcErrExecOrderActionField_init(PyCThostFtdcErrExecOrderActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "ExecOrderActionRef", "ExecOrderRef", "RequestID", "FrontID", "SessionID", "ExchangeID", "ExecOrderSysID", "ActionFlag", "UserID", "reserve1", "InvestUnitID", "reserve2", "MacAddress", "ErrorID", "ErrorMsg", "InstrumentID", "IPAddress",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *ErrExecOrderActionField_BrokerID = NULL;
    Py_ssize_t ErrExecOrderActionField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *ErrExecOrderActionField_InvestorID = NULL;
    Py_ssize_t ErrExecOrderActionField_InvestorID_len = 0;
            
    ///执行宣告操作引用
    // TThostFtdcOrderActionRefType int
    int ErrExecOrderActionField_ExecOrderActionRef = 0;
        
    ///执行宣告引用
    // TThostFtdcOrderRefType char[13]
    const char *ErrExecOrderActionField_ExecOrderRef = NULL;
    Py_ssize_t ErrExecOrderActionField_ExecOrderRef_len = 0;
            
    ///请求编号
    // TThostFtdcRequestIDType int
    int ErrExecOrderActionField_RequestID = 0;
        
    ///前置编号
    // TThostFtdcFrontIDType int
    int ErrExecOrderActionField_FrontID = 0;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    int ErrExecOrderActionField_SessionID = 0;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *ErrExecOrderActionField_ExchangeID = NULL;
    Py_ssize_t ErrExecOrderActionField_ExchangeID_len = 0;
            
    ///执行宣告操作编号
    // TThostFtdcExecOrderSysIDType char[21]
    const char *ErrExecOrderActionField_ExecOrderSysID = NULL;
    Py_ssize_t ErrExecOrderActionField_ExecOrderSysID_len = 0;
            
    ///操作标志
    // TThostFtdcActionFlagType char
    char ErrExecOrderActionField_ActionFlag = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *ErrExecOrderActionField_UserID = NULL;
    Py_ssize_t ErrExecOrderActionField_UserID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *ErrExecOrderActionField_reserve1 = NULL;
    Py_ssize_t ErrExecOrderActionField_reserve1_len = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *ErrExecOrderActionField_InvestUnitID = NULL;
    Py_ssize_t ErrExecOrderActionField_InvestUnitID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    const char *ErrExecOrderActionField_reserve2 = NULL;
    Py_ssize_t ErrExecOrderActionField_reserve2_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *ErrExecOrderActionField_MacAddress = NULL;
    Py_ssize_t ErrExecOrderActionField_MacAddress_len = 0;
            
    ///错误代码
    // TThostFtdcErrorIDType int
    int ErrExecOrderActionField_ErrorID = 0;
        
    ///错误信息
    // TThostFtdcErrorMsgType char[81]
    const char *ErrExecOrderActionField_ErrorMsg = NULL;
    Py_ssize_t ErrExecOrderActionField_ErrorMsg_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *ErrExecOrderActionField_InstrumentID = NULL;
    Py_ssize_t ErrExecOrderActionField_InstrumentID_len = 0;
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *ErrExecOrderActionField_IPAddress = NULL;
    Py_ssize_t ErrExecOrderActionField_IPAddress_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iy#iiiy#y#cy#y#y#y#y#iy#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#is#iiis#s#cs#s#s#s#s#is#s#s#", (char **)kwlist
#endif

        , &ErrExecOrderActionField_BrokerID, &ErrExecOrderActionField_BrokerID_len 
        , &ErrExecOrderActionField_InvestorID, &ErrExecOrderActionField_InvestorID_len 
        , &ErrExecOrderActionField_ExecOrderActionRef 
        , &ErrExecOrderActionField_ExecOrderRef, &ErrExecOrderActionField_ExecOrderRef_len 
        , &ErrExecOrderActionField_RequestID 
        , &ErrExecOrderActionField_FrontID 
        , &ErrExecOrderActionField_SessionID 
        , &ErrExecOrderActionField_ExchangeID, &ErrExecOrderActionField_ExchangeID_len 
        , &ErrExecOrderActionField_ExecOrderSysID, &ErrExecOrderActionField_ExecOrderSysID_len 
        , &ErrExecOrderActionField_ActionFlag 
        , &ErrExecOrderActionField_UserID, &ErrExecOrderActionField_UserID_len 
        , &ErrExecOrderActionField_reserve1, &ErrExecOrderActionField_reserve1_len 
        , &ErrExecOrderActionField_InvestUnitID, &ErrExecOrderActionField_InvestUnitID_len 
        , &ErrExecOrderActionField_reserve2, &ErrExecOrderActionField_reserve2_len 
        , &ErrExecOrderActionField_MacAddress, &ErrExecOrderActionField_MacAddress_len 
        , &ErrExecOrderActionField_ErrorID 
        , &ErrExecOrderActionField_ErrorMsg, &ErrExecOrderActionField_ErrorMsg_len 
        , &ErrExecOrderActionField_InstrumentID, &ErrExecOrderActionField_InstrumentID_len 
        , &ErrExecOrderActionField_IPAddress, &ErrExecOrderActionField_IPAddress_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( ErrExecOrderActionField_BrokerID != NULL ) {
        if(ErrExecOrderActionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", ErrExecOrderActionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, ErrExecOrderActionField_BrokerID, ErrExecOrderActionField_BrokerID_len);        
        strncpy(self->data.BrokerID, ErrExecOrderActionField_BrokerID, sizeof(self->data.BrokerID) );
        ErrExecOrderActionField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( ErrExecOrderActionField_InvestorID != NULL ) {
        if(ErrExecOrderActionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", ErrExecOrderActionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, ErrExecOrderActionField_InvestorID, ErrExecOrderActionField_InvestorID_len);        
        strncpy(self->data.InvestorID, ErrExecOrderActionField_InvestorID, sizeof(self->data.InvestorID) );
        ErrExecOrderActionField_InvestorID = NULL;
    }
            
    ///执行宣告操作引用
    // TThostFtdcOrderActionRefType int
    self->data.ExecOrderActionRef = ErrExecOrderActionField_ExecOrderActionRef;
        
    ///执行宣告引用
    // TThostFtdcOrderRefType char[13]
    if( ErrExecOrderActionField_ExecOrderRef != NULL ) {
        if(ErrExecOrderActionField_ExecOrderRef_len > (Py_ssize_t)sizeof(self->data.ExecOrderRef)) {
            PyErr_Format(PyExc_ValueError, "ExecOrderRef too long: length=%zd (max allowed is %zd)", ErrExecOrderActionField_ExecOrderRef_len, (Py_ssize_t)sizeof(self->data.ExecOrderRef));
            return -1;
        }
        // memset(self->data.ExecOrderRef, 0, sizeof(self->data.ExecOrderRef));
        // memcpy(self->data.ExecOrderRef, ErrExecOrderActionField_ExecOrderRef, ErrExecOrderActionField_ExecOrderRef_len);        
        strncpy(self->data.ExecOrderRef, ErrExecOrderActionField_ExecOrderRef, sizeof(self->data.ExecOrderRef) );
        ErrExecOrderActionField_ExecOrderRef = NULL;
    }
            
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = ErrExecOrderActionField_RequestID;
        
    ///前置编号
    // TThostFtdcFrontIDType int
    self->data.FrontID = ErrExecOrderActionField_FrontID;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    self->data.SessionID = ErrExecOrderActionField_SessionID;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( ErrExecOrderActionField_ExchangeID != NULL ) {
        if(ErrExecOrderActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", ErrExecOrderActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, ErrExecOrderActionField_ExchangeID, ErrExecOrderActionField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, ErrExecOrderActionField_ExchangeID, sizeof(self->data.ExchangeID) );
        ErrExecOrderActionField_ExchangeID = NULL;
    }
            
    ///执行宣告操作编号
    // TThostFtdcExecOrderSysIDType char[21]
    if( ErrExecOrderActionField_ExecOrderSysID != NULL ) {
        if(ErrExecOrderActionField_ExecOrderSysID_len > (Py_ssize_t)sizeof(self->data.ExecOrderSysID)) {
            PyErr_Format(PyExc_ValueError, "ExecOrderSysID too long: length=%zd (max allowed is %zd)", ErrExecOrderActionField_ExecOrderSysID_len, (Py_ssize_t)sizeof(self->data.ExecOrderSysID));
            return -1;
        }
        // memset(self->data.ExecOrderSysID, 0, sizeof(self->data.ExecOrderSysID));
        // memcpy(self->data.ExecOrderSysID, ErrExecOrderActionField_ExecOrderSysID, ErrExecOrderActionField_ExecOrderSysID_len);        
        strncpy(self->data.ExecOrderSysID, ErrExecOrderActionField_ExecOrderSysID, sizeof(self->data.ExecOrderSysID) );
        ErrExecOrderActionField_ExecOrderSysID = NULL;
    }
            
    ///操作标志
    // TThostFtdcActionFlagType char
    self->data.ActionFlag = ErrExecOrderActionField_ActionFlag;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( ErrExecOrderActionField_UserID != NULL ) {
        if(ErrExecOrderActionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", ErrExecOrderActionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, ErrExecOrderActionField_UserID, ErrExecOrderActionField_UserID_len);        
        strncpy(self->data.UserID, ErrExecOrderActionField_UserID, sizeof(self->data.UserID) );
        ErrExecOrderActionField_UserID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( ErrExecOrderActionField_reserve1 != NULL ) {
        if(ErrExecOrderActionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", ErrExecOrderActionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, ErrExecOrderActionField_reserve1, ErrExecOrderActionField_reserve1_len);        
        strncpy(self->data.reserve1, ErrExecOrderActionField_reserve1, sizeof(self->data.reserve1) );
        ErrExecOrderActionField_reserve1 = NULL;
    }
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( ErrExecOrderActionField_InvestUnitID != NULL ) {
        if(ErrExecOrderActionField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", ErrExecOrderActionField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, ErrExecOrderActionField_InvestUnitID, ErrExecOrderActionField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, ErrExecOrderActionField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        ErrExecOrderActionField_InvestUnitID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    if( ErrExecOrderActionField_reserve2 != NULL ) {
        if(ErrExecOrderActionField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", ErrExecOrderActionField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
            return -1;
        }
        // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
        // memcpy(self->data.reserve2, ErrExecOrderActionField_reserve2, ErrExecOrderActionField_reserve2_len);        
        strncpy(self->data.reserve2, ErrExecOrderActionField_reserve2, sizeof(self->data.reserve2) );
        ErrExecOrderActionField_reserve2 = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( ErrExecOrderActionField_MacAddress != NULL ) {
        if(ErrExecOrderActionField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", ErrExecOrderActionField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, ErrExecOrderActionField_MacAddress, ErrExecOrderActionField_MacAddress_len);        
        strncpy(self->data.MacAddress, ErrExecOrderActionField_MacAddress, sizeof(self->data.MacAddress) );
        ErrExecOrderActionField_MacAddress = NULL;
    }
            
    ///错误代码
    // TThostFtdcErrorIDType int
    self->data.ErrorID = ErrExecOrderActionField_ErrorID;
        
    ///错误信息
    // TThostFtdcErrorMsgType char[81]
    if( ErrExecOrderActionField_ErrorMsg != NULL ) {
        if(ErrExecOrderActionField_ErrorMsg_len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
            PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is %zd)", ErrExecOrderActionField_ErrorMsg_len, (Py_ssize_t)sizeof(self->data.ErrorMsg));
            return -1;
        }
        // memset(self->data.ErrorMsg, 0, sizeof(self->data.ErrorMsg));
        // memcpy(self->data.ErrorMsg, ErrExecOrderActionField_ErrorMsg, ErrExecOrderActionField_ErrorMsg_len);        
        strncpy(self->data.ErrorMsg, ErrExecOrderActionField_ErrorMsg, sizeof(self->data.ErrorMsg) );
        ErrExecOrderActionField_ErrorMsg = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( ErrExecOrderActionField_InstrumentID != NULL ) {
        if(ErrExecOrderActionField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", ErrExecOrderActionField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, ErrExecOrderActionField_InstrumentID, ErrExecOrderActionField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, ErrExecOrderActionField_InstrumentID, sizeof(self->data.InstrumentID) );
        ErrExecOrderActionField_InstrumentID = NULL;
    }
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( ErrExecOrderActionField_IPAddress != NULL ) {
        if(ErrExecOrderActionField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", ErrExecOrderActionField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, ErrExecOrderActionField_IPAddress, ErrExecOrderActionField_IPAddress_len);        
        strncpy(self->data.IPAddress, ErrExecOrderActionField_IPAddress, sizeof(self->data.IPAddress) );
        ErrExecOrderActionField_IPAddress = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcErrExecOrderActionField_dealloc(PyCThostFtdcErrExecOrderActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcErrExecOrderActionField_repr(PyCThostFtdcErrExecOrderActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i,s:y,s:i,s:i,s:i,s:y,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:i,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i,s:s,s:i,s:i,s:i,s:s,s:s,s:c,s:s,s:s,s:s,s:s,s:s,s:i,s:s,s:s,s:s}"
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
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"InvestUnitID", self->data.InvestUnitID//, (Py_ssize_t)sizeof(self->data.InvestUnitID) 
        ,"reserve2", self->data.reserve2//, (Py_ssize_t)sizeof(self->data.reserve2) 
        ,"MacAddress", self->data.MacAddress//, (Py_ssize_t)sizeof(self->data.MacAddress) 
        ,"ErrorID", self->data.ErrorID 
        ,"ErrorMsg", self->data.ErrorMsg//, (Py_ssize_t)sizeof(self->data.ErrorMsg) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"IPAddress", self->data.IPAddress//, (Py_ssize_t)sizeof(self->data.IPAddress) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcErrExecOrderActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcErrExecOrderActionField_get_BrokerID(PyCThostFtdcErrExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcErrExecOrderActionField_set_BrokerID(PyCThostFtdcErrExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcErrExecOrderActionField_get_InvestorID(PyCThostFtdcErrExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcErrExecOrderActionField_set_InvestorID(PyCThostFtdcErrExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcErrExecOrderActionField_get_ExecOrderActionRef(PyCThostFtdcErrExecOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.ExecOrderActionRef);
#else
    return PyInt_FromLong(self->data.ExecOrderActionRef);
#endif
}

///执行宣告操作引用
// TThostFtdcOrderActionRefType int
static int PyCThostFtdcErrExecOrderActionField_set_ExecOrderActionRef(PyCThostFtdcErrExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcErrExecOrderActionField_get_ExecOrderRef(PyCThostFtdcErrExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExecOrderRef, (Py_ssize_t)sizeof(self->data.ExecOrderRef));
    return PyBytes_FromString(self->data.ExecOrderRef);
}

///执行宣告引用
// TThostFtdcOrderRefType char[13]
static int PyCThostFtdcErrExecOrderActionField_set_ExecOrderRef(PyCThostFtdcErrExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcErrExecOrderActionField_get_RequestID(PyCThostFtdcErrExecOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcErrExecOrderActionField_set_RequestID(PyCThostFtdcErrExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcErrExecOrderActionField_get_FrontID(PyCThostFtdcErrExecOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FrontID);
#else
    return PyInt_FromLong(self->data.FrontID);
#endif
}

///前置编号
// TThostFtdcFrontIDType int
static int PyCThostFtdcErrExecOrderActionField_set_FrontID(PyCThostFtdcErrExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcErrExecOrderActionField_get_SessionID(PyCThostFtdcErrExecOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话编号
// TThostFtdcSessionIDType int
static int PyCThostFtdcErrExecOrderActionField_set_SessionID(PyCThostFtdcErrExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcErrExecOrderActionField_get_ExchangeID(PyCThostFtdcErrExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcErrExecOrderActionField_set_ExchangeID(PyCThostFtdcErrExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcErrExecOrderActionField_get_ExecOrderSysID(PyCThostFtdcErrExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExecOrderSysID, (Py_ssize_t)sizeof(self->data.ExecOrderSysID));
    return PyBytes_FromString(self->data.ExecOrderSysID);
}

///执行宣告操作编号
// TThostFtdcExecOrderSysIDType char[21]
static int PyCThostFtdcErrExecOrderActionField_set_ExecOrderSysID(PyCThostFtdcErrExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcErrExecOrderActionField_get_ActionFlag(PyCThostFtdcErrExecOrderActionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionFlag), 1);
}

///操作标志
// TThostFtdcActionFlagType char
static int PyCThostFtdcErrExecOrderActionField_set_ActionFlag(PyCThostFtdcErrExecOrderActionField *self, PyObject* val, void *closure) {
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
            
///用户代码
// TThostFtdcUserIDType char[16]
static PyObject *PyCThostFtdcErrExecOrderActionField_get_UserID(PyCThostFtdcErrExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcErrExecOrderActionField_set_UserID(PyCThostFtdcErrExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcErrExecOrderActionField_get_reserve1(PyCThostFtdcErrExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcErrExecOrderActionField_set_reserve1(PyCThostFtdcErrExecOrderActionField *self, PyObject* val, void *closure) {
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
            
///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static PyObject *PyCThostFtdcErrExecOrderActionField_get_InvestUnitID(PyCThostFtdcErrExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcErrExecOrderActionField_set_InvestUnitID(PyCThostFtdcErrExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcErrExecOrderActionField_get_reserve2(PyCThostFtdcErrExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve2, (Py_ssize_t)sizeof(self->data.reserve2));
    return PyBytes_FromString(self->data.reserve2);
}

///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static int PyCThostFtdcErrExecOrderActionField_set_reserve2(PyCThostFtdcErrExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcErrExecOrderActionField_get_MacAddress(PyCThostFtdcErrExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcErrExecOrderActionField_set_MacAddress(PyCThostFtdcErrExecOrderActionField *self, PyObject* val, void *closure) {
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
            
///错误代码
// TThostFtdcErrorIDType int
static PyObject *PyCThostFtdcErrExecOrderActionField_get_ErrorID(PyCThostFtdcErrExecOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.ErrorID);
#else
    return PyInt_FromLong(self->data.ErrorID);
#endif
}

///错误代码
// TThostFtdcErrorIDType int
static int PyCThostFtdcErrExecOrderActionField_set_ErrorID(PyCThostFtdcErrExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcErrExecOrderActionField_get_ErrorMsg(PyCThostFtdcErrExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ErrorMsg, (Py_ssize_t)sizeof(self->data.ErrorMsg));
    return PyBytes_FromString(self->data.ErrorMsg);
}

///错误信息
// TThostFtdcErrorMsgType char[81]
static int PyCThostFtdcErrExecOrderActionField_set_ErrorMsg(PyCThostFtdcErrExecOrderActionField *self, PyObject* val, void *closure) {
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
            
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcErrExecOrderActionField_get_InstrumentID(PyCThostFtdcErrExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcErrExecOrderActionField_set_InstrumentID(PyCThostFtdcErrExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcErrExecOrderActionField_get_IPAddress(PyCThostFtdcErrExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcErrExecOrderActionField_set_IPAddress(PyCThostFtdcErrExecOrderActionField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcErrExecOrderActionField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcErrExecOrderActionField_get_BrokerID, (setter)PyCThostFtdcErrExecOrderActionField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcErrExecOrderActionField_get_InvestorID, (setter)PyCThostFtdcErrExecOrderActionField_set_InvestorID, (char *)"InvestorID", NULL},
    ///执行宣告操作引用 
    {(char *)"ExecOrderActionRef", (getter)PyCThostFtdcErrExecOrderActionField_get_ExecOrderActionRef, (setter)PyCThostFtdcErrExecOrderActionField_set_ExecOrderActionRef, (char *)"ExecOrderActionRef", NULL},
    ///执行宣告引用 
    {(char *)"ExecOrderRef", (getter)PyCThostFtdcErrExecOrderActionField_get_ExecOrderRef, (setter)PyCThostFtdcErrExecOrderActionField_set_ExecOrderRef, (char *)"ExecOrderRef", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcErrExecOrderActionField_get_RequestID, (setter)PyCThostFtdcErrExecOrderActionField_set_RequestID, (char *)"RequestID", NULL},
    ///前置编号 
    {(char *)"FrontID", (getter)PyCThostFtdcErrExecOrderActionField_get_FrontID, (setter)PyCThostFtdcErrExecOrderActionField_set_FrontID, (char *)"FrontID", NULL},
    ///会话编号 
    {(char *)"SessionID", (getter)PyCThostFtdcErrExecOrderActionField_get_SessionID, (setter)PyCThostFtdcErrExecOrderActionField_set_SessionID, (char *)"SessionID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcErrExecOrderActionField_get_ExchangeID, (setter)PyCThostFtdcErrExecOrderActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///执行宣告操作编号 
    {(char *)"ExecOrderSysID", (getter)PyCThostFtdcErrExecOrderActionField_get_ExecOrderSysID, (setter)PyCThostFtdcErrExecOrderActionField_set_ExecOrderSysID, (char *)"ExecOrderSysID", NULL},
    ///操作标志 
    {(char *)"ActionFlag", (getter)PyCThostFtdcErrExecOrderActionField_get_ActionFlag, (setter)PyCThostFtdcErrExecOrderActionField_set_ActionFlag, (char *)"ActionFlag", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcErrExecOrderActionField_get_UserID, (setter)PyCThostFtdcErrExecOrderActionField_set_UserID, (char *)"UserID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcErrExecOrderActionField_get_reserve1, (setter)PyCThostFtdcErrExecOrderActionField_set_reserve1, (char *)"reserve1", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcErrExecOrderActionField_get_InvestUnitID, (setter)PyCThostFtdcErrExecOrderActionField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///保留的无效字段 
    {(char *)"reserve2", (getter)PyCThostFtdcErrExecOrderActionField_get_reserve2, (setter)PyCThostFtdcErrExecOrderActionField_set_reserve2, (char *)"reserve2", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcErrExecOrderActionField_get_MacAddress, (setter)PyCThostFtdcErrExecOrderActionField_set_MacAddress, (char *)"MacAddress", NULL},
    ///错误代码 
    {(char *)"ErrorID", (getter)PyCThostFtdcErrExecOrderActionField_get_ErrorID, (setter)PyCThostFtdcErrExecOrderActionField_set_ErrorID, (char *)"ErrorID", NULL},
    ///错误信息 
    {(char *)"ErrorMsg", (getter)PyCThostFtdcErrExecOrderActionField_get_ErrorMsg, (setter)PyCThostFtdcErrExecOrderActionField_set_ErrorMsg, (char *)"ErrorMsg", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcErrExecOrderActionField_get_InstrumentID, (setter)PyCThostFtdcErrExecOrderActionField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcErrExecOrderActionField_get_IPAddress, (setter)PyCThostFtdcErrExecOrderActionField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcErrExecOrderActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcErrExecOrderActionField",	/* tp_name */
	sizeof(PyCThostFtdcErrExecOrderActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcErrExecOrderActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcErrExecOrderActionField_repr,   /* tp_repr */
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
	"CThostFtdcErrExecOrderActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcErrExecOrderActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcErrExecOrderActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcErrExecOrderActionField_new,       /* tp_new */
};

int PyCThostFtdcErrExecOrderActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcErrExecOrderActionField  */
	if (PyType_Ready(&PyCThostFtdcErrExecOrderActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcErrExecOrderActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcErrExecOrderActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcErrExecOrderActionField", (PyObject *)&PyCThostFtdcErrExecOrderActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcErrExecOrderActionField to module");
        Py_DECREF(&PyCThostFtdcErrExecOrderActionFieldType);
		return -1;
    }

    return 0;
}
