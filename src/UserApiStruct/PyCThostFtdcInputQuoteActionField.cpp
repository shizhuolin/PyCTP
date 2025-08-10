
#include "PyCThostFtdcInputQuoteActionField.h"

///输入报价操作

static PyObject *PyCThostFtdcInputQuoteActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInputQuoteActionField *self = (PyCThostFtdcInputQuoteActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcInputQuoteActionField_init(PyCThostFtdcInputQuoteActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "QuoteActionRef", "QuoteRef", "RequestID", "FrontID", "SessionID", "ExchangeID", "QuoteSysID", "ActionFlag", "UserID", "reserve1", "InvestUnitID", "ClientID", "reserve2", "MacAddress", "InstrumentID", "IPAddress", "OrderMemo", "SessionReqSeq",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *InputQuoteActionField_BrokerID = NULL;
    Py_ssize_t InputQuoteActionField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *InputQuoteActionField_InvestorID = NULL;
    Py_ssize_t InputQuoteActionField_InvestorID_len = 0;
            
    ///报价操作引用
    // TThostFtdcOrderActionRefType int
    int InputQuoteActionField_QuoteActionRef = 0;
        
    ///报价引用
    // TThostFtdcOrderRefType char[13]
    const char *InputQuoteActionField_QuoteRef = NULL;
    Py_ssize_t InputQuoteActionField_QuoteRef_len = 0;
            
    ///请求编号
    // TThostFtdcRequestIDType int
    int InputQuoteActionField_RequestID = 0;
        
    ///前置编号
    // TThostFtdcFrontIDType int
    int InputQuoteActionField_FrontID = 0;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    int InputQuoteActionField_SessionID = 0;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *InputQuoteActionField_ExchangeID = NULL;
    Py_ssize_t InputQuoteActionField_ExchangeID_len = 0;
            
    ///报价操作编号
    // TThostFtdcOrderSysIDType char[21]
    const char *InputQuoteActionField_QuoteSysID = NULL;
    Py_ssize_t InputQuoteActionField_QuoteSysID_len = 0;
            
    ///操作标志
    // TThostFtdcActionFlagType char
    char InputQuoteActionField_ActionFlag = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *InputQuoteActionField_UserID = NULL;
    Py_ssize_t InputQuoteActionField_UserID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *InputQuoteActionField_reserve1 = NULL;
    Py_ssize_t InputQuoteActionField_reserve1_len = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *InputQuoteActionField_InvestUnitID = NULL;
    Py_ssize_t InputQuoteActionField_InvestUnitID_len = 0;
            
    ///交易编码
    // TThostFtdcClientIDType char[11]
    const char *InputQuoteActionField_ClientID = NULL;
    Py_ssize_t InputQuoteActionField_ClientID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    const char *InputQuoteActionField_reserve2 = NULL;
    Py_ssize_t InputQuoteActionField_reserve2_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *InputQuoteActionField_MacAddress = NULL;
    Py_ssize_t InputQuoteActionField_MacAddress_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *InputQuoteActionField_InstrumentID = NULL;
    Py_ssize_t InputQuoteActionField_InstrumentID_len = 0;
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *InputQuoteActionField_IPAddress = NULL;
    Py_ssize_t InputQuoteActionField_IPAddress_len = 0;
            
    ///报单回显字段
    // TThostFtdcOrderMemoType char[13]
    const char *InputQuoteActionField_OrderMemo = NULL;
    Py_ssize_t InputQuoteActionField_OrderMemo_len = 0;
            
    ///session上请求计数 api自动维护
    // TThostFtdcSequenceNo12Type int
    int InputQuoteActionField_SessionReqSeq = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iy#iiiy#y#cy#y#y#y#y#y#y#y#y#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#is#iiis#s#cs#s#s#s#s#s#s#s#s#i", (char **)kwlist
#endif

        , &InputQuoteActionField_BrokerID, &InputQuoteActionField_BrokerID_len 
        , &InputQuoteActionField_InvestorID, &InputQuoteActionField_InvestorID_len 
        , &InputQuoteActionField_QuoteActionRef 
        , &InputQuoteActionField_QuoteRef, &InputQuoteActionField_QuoteRef_len 
        , &InputQuoteActionField_RequestID 
        , &InputQuoteActionField_FrontID 
        , &InputQuoteActionField_SessionID 
        , &InputQuoteActionField_ExchangeID, &InputQuoteActionField_ExchangeID_len 
        , &InputQuoteActionField_QuoteSysID, &InputQuoteActionField_QuoteSysID_len 
        , &InputQuoteActionField_ActionFlag 
        , &InputQuoteActionField_UserID, &InputQuoteActionField_UserID_len 
        , &InputQuoteActionField_reserve1, &InputQuoteActionField_reserve1_len 
        , &InputQuoteActionField_InvestUnitID, &InputQuoteActionField_InvestUnitID_len 
        , &InputQuoteActionField_ClientID, &InputQuoteActionField_ClientID_len 
        , &InputQuoteActionField_reserve2, &InputQuoteActionField_reserve2_len 
        , &InputQuoteActionField_MacAddress, &InputQuoteActionField_MacAddress_len 
        , &InputQuoteActionField_InstrumentID, &InputQuoteActionField_InstrumentID_len 
        , &InputQuoteActionField_IPAddress, &InputQuoteActionField_IPAddress_len 
        , &InputQuoteActionField_OrderMemo, &InputQuoteActionField_OrderMemo_len 
        , &InputQuoteActionField_SessionReqSeq 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( InputQuoteActionField_BrokerID != NULL ) {
        if(InputQuoteActionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", InputQuoteActionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, InputQuoteActionField_BrokerID, InputQuoteActionField_BrokerID_len);        
        strncpy(self->data.BrokerID, InputQuoteActionField_BrokerID, sizeof(self->data.BrokerID) );
        InputQuoteActionField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( InputQuoteActionField_InvestorID != NULL ) {
        if(InputQuoteActionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", InputQuoteActionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, InputQuoteActionField_InvestorID, InputQuoteActionField_InvestorID_len);        
        strncpy(self->data.InvestorID, InputQuoteActionField_InvestorID, sizeof(self->data.InvestorID) );
        InputQuoteActionField_InvestorID = NULL;
    }
            
    ///报价操作引用
    // TThostFtdcOrderActionRefType int
    self->data.QuoteActionRef = InputQuoteActionField_QuoteActionRef;
        
    ///报价引用
    // TThostFtdcOrderRefType char[13]
    if( InputQuoteActionField_QuoteRef != NULL ) {
        if(InputQuoteActionField_QuoteRef_len > (Py_ssize_t)sizeof(self->data.QuoteRef)) {
            PyErr_Format(PyExc_ValueError, "QuoteRef too long: length=%zd (max allowed is %zd)", InputQuoteActionField_QuoteRef_len, (Py_ssize_t)sizeof(self->data.QuoteRef));
            return -1;
        }
        // memset(self->data.QuoteRef, 0, sizeof(self->data.QuoteRef));
        // memcpy(self->data.QuoteRef, InputQuoteActionField_QuoteRef, InputQuoteActionField_QuoteRef_len);        
        strncpy(self->data.QuoteRef, InputQuoteActionField_QuoteRef, sizeof(self->data.QuoteRef) );
        InputQuoteActionField_QuoteRef = NULL;
    }
            
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = InputQuoteActionField_RequestID;
        
    ///前置编号
    // TThostFtdcFrontIDType int
    self->data.FrontID = InputQuoteActionField_FrontID;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    self->data.SessionID = InputQuoteActionField_SessionID;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( InputQuoteActionField_ExchangeID != NULL ) {
        if(InputQuoteActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", InputQuoteActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, InputQuoteActionField_ExchangeID, InputQuoteActionField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, InputQuoteActionField_ExchangeID, sizeof(self->data.ExchangeID) );
        InputQuoteActionField_ExchangeID = NULL;
    }
            
    ///报价操作编号
    // TThostFtdcOrderSysIDType char[21]
    if( InputQuoteActionField_QuoteSysID != NULL ) {
        if(InputQuoteActionField_QuoteSysID_len > (Py_ssize_t)sizeof(self->data.QuoteSysID)) {
            PyErr_Format(PyExc_ValueError, "QuoteSysID too long: length=%zd (max allowed is %zd)", InputQuoteActionField_QuoteSysID_len, (Py_ssize_t)sizeof(self->data.QuoteSysID));
            return -1;
        }
        // memset(self->data.QuoteSysID, 0, sizeof(self->data.QuoteSysID));
        // memcpy(self->data.QuoteSysID, InputQuoteActionField_QuoteSysID, InputQuoteActionField_QuoteSysID_len);        
        strncpy(self->data.QuoteSysID, InputQuoteActionField_QuoteSysID, sizeof(self->data.QuoteSysID) );
        InputQuoteActionField_QuoteSysID = NULL;
    }
            
    ///操作标志
    // TThostFtdcActionFlagType char
    self->data.ActionFlag = InputQuoteActionField_ActionFlag;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( InputQuoteActionField_UserID != NULL ) {
        if(InputQuoteActionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", InputQuoteActionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, InputQuoteActionField_UserID, InputQuoteActionField_UserID_len);        
        strncpy(self->data.UserID, InputQuoteActionField_UserID, sizeof(self->data.UserID) );
        InputQuoteActionField_UserID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( InputQuoteActionField_reserve1 != NULL ) {
        if(InputQuoteActionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", InputQuoteActionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, InputQuoteActionField_reserve1, InputQuoteActionField_reserve1_len);        
        strncpy(self->data.reserve1, InputQuoteActionField_reserve1, sizeof(self->data.reserve1) );
        InputQuoteActionField_reserve1 = NULL;
    }
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( InputQuoteActionField_InvestUnitID != NULL ) {
        if(InputQuoteActionField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", InputQuoteActionField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, InputQuoteActionField_InvestUnitID, InputQuoteActionField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, InputQuoteActionField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        InputQuoteActionField_InvestUnitID = NULL;
    }
            
    ///交易编码
    // TThostFtdcClientIDType char[11]
    if( InputQuoteActionField_ClientID != NULL ) {
        if(InputQuoteActionField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", InputQuoteActionField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
            return -1;
        }
        // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
        // memcpy(self->data.ClientID, InputQuoteActionField_ClientID, InputQuoteActionField_ClientID_len);        
        strncpy(self->data.ClientID, InputQuoteActionField_ClientID, sizeof(self->data.ClientID) );
        InputQuoteActionField_ClientID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    if( InputQuoteActionField_reserve2 != NULL ) {
        if(InputQuoteActionField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", InputQuoteActionField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
            return -1;
        }
        // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
        // memcpy(self->data.reserve2, InputQuoteActionField_reserve2, InputQuoteActionField_reserve2_len);        
        strncpy(self->data.reserve2, InputQuoteActionField_reserve2, sizeof(self->data.reserve2) );
        InputQuoteActionField_reserve2 = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( InputQuoteActionField_MacAddress != NULL ) {
        if(InputQuoteActionField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", InputQuoteActionField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, InputQuoteActionField_MacAddress, InputQuoteActionField_MacAddress_len);        
        strncpy(self->data.MacAddress, InputQuoteActionField_MacAddress, sizeof(self->data.MacAddress) );
        InputQuoteActionField_MacAddress = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( InputQuoteActionField_InstrumentID != NULL ) {
        if(InputQuoteActionField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", InputQuoteActionField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, InputQuoteActionField_InstrumentID, InputQuoteActionField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, InputQuoteActionField_InstrumentID, sizeof(self->data.InstrumentID) );
        InputQuoteActionField_InstrumentID = NULL;
    }
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( InputQuoteActionField_IPAddress != NULL ) {
        if(InputQuoteActionField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", InputQuoteActionField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, InputQuoteActionField_IPAddress, InputQuoteActionField_IPAddress_len);        
        strncpy(self->data.IPAddress, InputQuoteActionField_IPAddress, sizeof(self->data.IPAddress) );
        InputQuoteActionField_IPAddress = NULL;
    }
            
    ///报单回显字段
    // TThostFtdcOrderMemoType char[13]
    if( InputQuoteActionField_OrderMemo != NULL ) {
        if(InputQuoteActionField_OrderMemo_len > (Py_ssize_t)sizeof(self->data.OrderMemo)) {
            PyErr_Format(PyExc_ValueError, "OrderMemo too long: length=%zd (max allowed is %zd)", InputQuoteActionField_OrderMemo_len, (Py_ssize_t)sizeof(self->data.OrderMemo));
            return -1;
        }
        // memset(self->data.OrderMemo, 0, sizeof(self->data.OrderMemo));
        // memcpy(self->data.OrderMemo, InputQuoteActionField_OrderMemo, InputQuoteActionField_OrderMemo_len);        
        strncpy(self->data.OrderMemo, InputQuoteActionField_OrderMemo, sizeof(self->data.OrderMemo) );
        InputQuoteActionField_OrderMemo = NULL;
    }
            
    ///session上请求计数 api自动维护
    // TThostFtdcSequenceNo12Type int
    self->data.SessionReqSeq = InputQuoteActionField_SessionReqSeq;
        

    return 0;
}

static void PyCThostFtdcInputQuoteActionField_dealloc(PyCThostFtdcInputQuoteActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInputQuoteActionField_repr(PyCThostFtdcInputQuoteActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i,s:y,s:i,s:i,s:i,s:y,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i,s:s,s:i,s:i,s:i,s:s,s:s,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i}"
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
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"InvestUnitID", self->data.InvestUnitID//, (Py_ssize_t)sizeof(self->data.InvestUnitID) 
        ,"ClientID", self->data.ClientID//, (Py_ssize_t)sizeof(self->data.ClientID) 
        ,"reserve2", self->data.reserve2//, (Py_ssize_t)sizeof(self->data.reserve2) 
        ,"MacAddress", self->data.MacAddress//, (Py_ssize_t)sizeof(self->data.MacAddress) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"IPAddress", self->data.IPAddress//, (Py_ssize_t)sizeof(self->data.IPAddress) 
        ,"OrderMemo", self->data.OrderMemo//, (Py_ssize_t)sizeof(self->data.OrderMemo) 
        ,"SessionReqSeq", self->data.SessionReqSeq 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputQuoteActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcInputQuoteActionField_get_BrokerID(PyCThostFtdcInputQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcInputQuoteActionField_set_BrokerID(PyCThostFtdcInputQuoteActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputQuoteActionField_get_InvestorID(PyCThostFtdcInputQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcInputQuoteActionField_set_InvestorID(PyCThostFtdcInputQuoteActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputQuoteActionField_get_QuoteActionRef(PyCThostFtdcInputQuoteActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.QuoteActionRef);
#else
    return PyInt_FromLong(self->data.QuoteActionRef);
#endif
}

///报价操作引用
// TThostFtdcOrderActionRefType int
static int PyCThostFtdcInputQuoteActionField_set_QuoteActionRef(PyCThostFtdcInputQuoteActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputQuoteActionField_get_QuoteRef(PyCThostFtdcInputQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.QuoteRef, (Py_ssize_t)sizeof(self->data.QuoteRef));
    return PyBytes_FromString(self->data.QuoteRef);
}

///报价引用
// TThostFtdcOrderRefType char[13]
static int PyCThostFtdcInputQuoteActionField_set_QuoteRef(PyCThostFtdcInputQuoteActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputQuoteActionField_get_RequestID(PyCThostFtdcInputQuoteActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcInputQuoteActionField_set_RequestID(PyCThostFtdcInputQuoteActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputQuoteActionField_get_FrontID(PyCThostFtdcInputQuoteActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FrontID);
#else
    return PyInt_FromLong(self->data.FrontID);
#endif
}

///前置编号
// TThostFtdcFrontIDType int
static int PyCThostFtdcInputQuoteActionField_set_FrontID(PyCThostFtdcInputQuoteActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputQuoteActionField_get_SessionID(PyCThostFtdcInputQuoteActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话编号
// TThostFtdcSessionIDType int
static int PyCThostFtdcInputQuoteActionField_set_SessionID(PyCThostFtdcInputQuoteActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputQuoteActionField_get_ExchangeID(PyCThostFtdcInputQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcInputQuoteActionField_set_ExchangeID(PyCThostFtdcInputQuoteActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputQuoteActionField_get_QuoteSysID(PyCThostFtdcInputQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.QuoteSysID, (Py_ssize_t)sizeof(self->data.QuoteSysID));
    return PyBytes_FromString(self->data.QuoteSysID);
}

///报价操作编号
// TThostFtdcOrderSysIDType char[21]
static int PyCThostFtdcInputQuoteActionField_set_QuoteSysID(PyCThostFtdcInputQuoteActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputQuoteActionField_get_ActionFlag(PyCThostFtdcInputQuoteActionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionFlag), 1);
}

///操作标志
// TThostFtdcActionFlagType char
static int PyCThostFtdcInputQuoteActionField_set_ActionFlag(PyCThostFtdcInputQuoteActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputQuoteActionField_get_UserID(PyCThostFtdcInputQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcInputQuoteActionField_set_UserID(PyCThostFtdcInputQuoteActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputQuoteActionField_get_reserve1(PyCThostFtdcInputQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcInputQuoteActionField_set_reserve1(PyCThostFtdcInputQuoteActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputQuoteActionField_get_InvestUnitID(PyCThostFtdcInputQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcInputQuoteActionField_set_InvestUnitID(PyCThostFtdcInputQuoteActionField *self, PyObject* val, void *closure) {
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
            
///交易编码
// TThostFtdcClientIDType char[11]
static PyObject *PyCThostFtdcInputQuoteActionField_get_ClientID(PyCThostFtdcInputQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientID, (Py_ssize_t)sizeof(self->data.ClientID));
    return PyBytes_FromString(self->data.ClientID);
}

///交易编码
// TThostFtdcClientIDType char[11]
static int PyCThostFtdcInputQuoteActionField_set_ClientID(PyCThostFtdcInputQuoteActionField *self, PyObject* val, void *closure) {
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
// TThostFtdcOldIPAddressType char[16]
static PyObject *PyCThostFtdcInputQuoteActionField_get_reserve2(PyCThostFtdcInputQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve2, (Py_ssize_t)sizeof(self->data.reserve2));
    return PyBytes_FromString(self->data.reserve2);
}

///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static int PyCThostFtdcInputQuoteActionField_set_reserve2(PyCThostFtdcInputQuoteActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputQuoteActionField_get_MacAddress(PyCThostFtdcInputQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcInputQuoteActionField_set_MacAddress(PyCThostFtdcInputQuoteActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputQuoteActionField_get_InstrumentID(PyCThostFtdcInputQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcInputQuoteActionField_set_InstrumentID(PyCThostFtdcInputQuoteActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputQuoteActionField_get_IPAddress(PyCThostFtdcInputQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcInputQuoteActionField_set_IPAddress(PyCThostFtdcInputQuoteActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputQuoteActionField_get_OrderMemo(PyCThostFtdcInputQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderMemo, (Py_ssize_t)sizeof(self->data.OrderMemo));
    return PyBytes_FromString(self->data.OrderMemo);
}

///报单回显字段
// TThostFtdcOrderMemoType char[13]
static int PyCThostFtdcInputQuoteActionField_set_OrderMemo(PyCThostFtdcInputQuoteActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputQuoteActionField_get_SessionReqSeq(PyCThostFtdcInputQuoteActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionReqSeq);
#else
    return PyInt_FromLong(self->data.SessionReqSeq);
#endif
}

///session上请求计数 api自动维护
// TThostFtdcSequenceNo12Type int
static int PyCThostFtdcInputQuoteActionField_set_SessionReqSeq(PyCThostFtdcInputQuoteActionField *self, PyObject* val, void *closure) {
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
        

static PyGetSetDef PyCThostFtdcInputQuoteActionField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcInputQuoteActionField_get_BrokerID, (setter)PyCThostFtdcInputQuoteActionField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcInputQuoteActionField_get_InvestorID, (setter)PyCThostFtdcInputQuoteActionField_set_InvestorID, (char *)"InvestorID", NULL},
    ///报价操作引用 
    {(char *)"QuoteActionRef", (getter)PyCThostFtdcInputQuoteActionField_get_QuoteActionRef, (setter)PyCThostFtdcInputQuoteActionField_set_QuoteActionRef, (char *)"QuoteActionRef", NULL},
    ///报价引用 
    {(char *)"QuoteRef", (getter)PyCThostFtdcInputQuoteActionField_get_QuoteRef, (setter)PyCThostFtdcInputQuoteActionField_set_QuoteRef, (char *)"QuoteRef", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcInputQuoteActionField_get_RequestID, (setter)PyCThostFtdcInputQuoteActionField_set_RequestID, (char *)"RequestID", NULL},
    ///前置编号 
    {(char *)"FrontID", (getter)PyCThostFtdcInputQuoteActionField_get_FrontID, (setter)PyCThostFtdcInputQuoteActionField_set_FrontID, (char *)"FrontID", NULL},
    ///会话编号 
    {(char *)"SessionID", (getter)PyCThostFtdcInputQuoteActionField_get_SessionID, (setter)PyCThostFtdcInputQuoteActionField_set_SessionID, (char *)"SessionID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcInputQuoteActionField_get_ExchangeID, (setter)PyCThostFtdcInputQuoteActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///报价操作编号 
    {(char *)"QuoteSysID", (getter)PyCThostFtdcInputQuoteActionField_get_QuoteSysID, (setter)PyCThostFtdcInputQuoteActionField_set_QuoteSysID, (char *)"QuoteSysID", NULL},
    ///操作标志 
    {(char *)"ActionFlag", (getter)PyCThostFtdcInputQuoteActionField_get_ActionFlag, (setter)PyCThostFtdcInputQuoteActionField_set_ActionFlag, (char *)"ActionFlag", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcInputQuoteActionField_get_UserID, (setter)PyCThostFtdcInputQuoteActionField_set_UserID, (char *)"UserID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcInputQuoteActionField_get_reserve1, (setter)PyCThostFtdcInputQuoteActionField_set_reserve1, (char *)"reserve1", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcInputQuoteActionField_get_InvestUnitID, (setter)PyCThostFtdcInputQuoteActionField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///交易编码 
    {(char *)"ClientID", (getter)PyCThostFtdcInputQuoteActionField_get_ClientID, (setter)PyCThostFtdcInputQuoteActionField_set_ClientID, (char *)"ClientID", NULL},
    ///保留的无效字段 
    {(char *)"reserve2", (getter)PyCThostFtdcInputQuoteActionField_get_reserve2, (setter)PyCThostFtdcInputQuoteActionField_set_reserve2, (char *)"reserve2", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcInputQuoteActionField_get_MacAddress, (setter)PyCThostFtdcInputQuoteActionField_set_MacAddress, (char *)"MacAddress", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcInputQuoteActionField_get_InstrumentID, (setter)PyCThostFtdcInputQuoteActionField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcInputQuoteActionField_get_IPAddress, (setter)PyCThostFtdcInputQuoteActionField_set_IPAddress, (char *)"IPAddress", NULL},
    ///报单回显字段 
    {(char *)"OrderMemo", (getter)PyCThostFtdcInputQuoteActionField_get_OrderMemo, (setter)PyCThostFtdcInputQuoteActionField_set_OrderMemo, (char *)"OrderMemo", NULL},
    ///session上请求计数 api自动维护 
    {(char *)"SessionReqSeq", (getter)PyCThostFtdcInputQuoteActionField_get_SessionReqSeq, (setter)PyCThostFtdcInputQuoteActionField_set_SessionReqSeq, (char *)"SessionReqSeq", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInputQuoteActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInputQuoteActionField",	/* tp_name */
	sizeof(PyCThostFtdcInputQuoteActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInputQuoteActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInputQuoteActionField_repr,   /* tp_repr */
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
	"CThostFtdcInputQuoteActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInputQuoteActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInputQuoteActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInputQuoteActionField_new,       /* tp_new */
};

int PyCThostFtdcInputQuoteActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInputQuoteActionField  */
	if (PyType_Ready(&PyCThostFtdcInputQuoteActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInputQuoteActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInputQuoteActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInputQuoteActionField", (PyObject *)&PyCThostFtdcInputQuoteActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInputQuoteActionField to module");
        Py_DECREF(&PyCThostFtdcInputQuoteActionFieldType);
		return -1;
    }

    return 0;
}
