
#include "PyCThostFtdcInputQuoteField.h"

///输入的报价

static PyObject *PyCThostFtdcInputQuoteField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInputQuoteField *self = (PyCThostFtdcInputQuoteField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcInputQuoteField_init(PyCThostFtdcInputQuoteField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "QuoteRef", "UserID", "AskPrice", "BidPrice", "AskVolume", "BidVolume", "RequestID", "BusinessUnit", "AskOffsetFlag", "BidOffsetFlag", "AskHedgeFlag", "BidHedgeFlag", "AskOrderRef", "BidOrderRef", "ForQuoteSysID", "ExchangeID", "InvestUnitID", "ClientID", "reserve2", "MacAddress", "InstrumentID", "IPAddress", "ReplaceSysID", "TimeCondition", "OrderMemo", "SessionReqSeq",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *InputQuoteField_BrokerID = NULL;
    Py_ssize_t InputQuoteField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *InputQuoteField_InvestorID = NULL;
    Py_ssize_t InputQuoteField_InvestorID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *InputQuoteField_reserve1 = NULL;
    Py_ssize_t InputQuoteField_reserve1_len = 0;
            
    ///报价引用
    // TThostFtdcOrderRefType char[13]
    const char *InputQuoteField_QuoteRef = NULL;
    Py_ssize_t InputQuoteField_QuoteRef_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *InputQuoteField_UserID = NULL;
    Py_ssize_t InputQuoteField_UserID_len = 0;
            
    ///卖价格
    // TThostFtdcPriceType double
    double InputQuoteField_AskPrice = 0.0;
        
    ///买价格
    // TThostFtdcPriceType double
    double InputQuoteField_BidPrice = 0.0;
        
    ///卖数量
    // TThostFtdcVolumeType int
    int InputQuoteField_AskVolume = 0;
        
    ///买数量
    // TThostFtdcVolumeType int
    int InputQuoteField_BidVolume = 0;
        
    ///请求编号
    // TThostFtdcRequestIDType int
    int InputQuoteField_RequestID = 0;
        
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    const char *InputQuoteField_BusinessUnit = NULL;
    Py_ssize_t InputQuoteField_BusinessUnit_len = 0;
            
    ///卖开平标志
    // TThostFtdcOffsetFlagType char
    char InputQuoteField_AskOffsetFlag = 0;
            
    ///买开平标志
    // TThostFtdcOffsetFlagType char
    char InputQuoteField_BidOffsetFlag = 0;
            
    ///卖投机套保标志
    // TThostFtdcHedgeFlagType char
    char InputQuoteField_AskHedgeFlag = 0;
            
    ///买投机套保标志
    // TThostFtdcHedgeFlagType char
    char InputQuoteField_BidHedgeFlag = 0;
            
    ///衍生卖报单引用
    // TThostFtdcOrderRefType char[13]
    const char *InputQuoteField_AskOrderRef = NULL;
    Py_ssize_t InputQuoteField_AskOrderRef_len = 0;
            
    ///衍生买报单引用
    // TThostFtdcOrderRefType char[13]
    const char *InputQuoteField_BidOrderRef = NULL;
    Py_ssize_t InputQuoteField_BidOrderRef_len = 0;
            
    ///应价编号
    // TThostFtdcOrderSysIDType char[21]
    const char *InputQuoteField_ForQuoteSysID = NULL;
    Py_ssize_t InputQuoteField_ForQuoteSysID_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *InputQuoteField_ExchangeID = NULL;
    Py_ssize_t InputQuoteField_ExchangeID_len = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *InputQuoteField_InvestUnitID = NULL;
    Py_ssize_t InputQuoteField_InvestUnitID_len = 0;
            
    ///交易编码
    // TThostFtdcClientIDType char[11]
    const char *InputQuoteField_ClientID = NULL;
    Py_ssize_t InputQuoteField_ClientID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    const char *InputQuoteField_reserve2 = NULL;
    Py_ssize_t InputQuoteField_reserve2_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *InputQuoteField_MacAddress = NULL;
    Py_ssize_t InputQuoteField_MacAddress_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *InputQuoteField_InstrumentID = NULL;
    Py_ssize_t InputQuoteField_InstrumentID_len = 0;
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *InputQuoteField_IPAddress = NULL;
    Py_ssize_t InputQuoteField_IPAddress_len = 0;
            
    ///被顶单编号
    // TThostFtdcOrderSysIDType char[21]
    const char *InputQuoteField_ReplaceSysID = NULL;
    Py_ssize_t InputQuoteField_ReplaceSysID_len = 0;
            
    ///有效期类型
    // TThostFtdcTimeConditionType char
    char InputQuoteField_TimeCondition = 0;
            
    ///报单回显字段
    // TThostFtdcOrderMemoType char[13]
    const char *InputQuoteField_OrderMemo = NULL;
    Py_ssize_t InputQuoteField_OrderMemo_len = 0;
            
    ///session上请求计数 api自动维护
    // TThostFtdcSequenceNo12Type int
    int InputQuoteField_SessionReqSeq = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#ddiiiy#ccccy#y#y#y#y#y#y#y#y#y#y#cy#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#ddiiis#ccccs#s#s#s#s#s#s#s#s#s#s#cs#i", (char **)kwlist
#endif

        , &InputQuoteField_BrokerID, &InputQuoteField_BrokerID_len 
        , &InputQuoteField_InvestorID, &InputQuoteField_InvestorID_len 
        , &InputQuoteField_reserve1, &InputQuoteField_reserve1_len 
        , &InputQuoteField_QuoteRef, &InputQuoteField_QuoteRef_len 
        , &InputQuoteField_UserID, &InputQuoteField_UserID_len 
        , &InputQuoteField_AskPrice 
        , &InputQuoteField_BidPrice 
        , &InputQuoteField_AskVolume 
        , &InputQuoteField_BidVolume 
        , &InputQuoteField_RequestID 
        , &InputQuoteField_BusinessUnit, &InputQuoteField_BusinessUnit_len 
        , &InputQuoteField_AskOffsetFlag 
        , &InputQuoteField_BidOffsetFlag 
        , &InputQuoteField_AskHedgeFlag 
        , &InputQuoteField_BidHedgeFlag 
        , &InputQuoteField_AskOrderRef, &InputQuoteField_AskOrderRef_len 
        , &InputQuoteField_BidOrderRef, &InputQuoteField_BidOrderRef_len 
        , &InputQuoteField_ForQuoteSysID, &InputQuoteField_ForQuoteSysID_len 
        , &InputQuoteField_ExchangeID, &InputQuoteField_ExchangeID_len 
        , &InputQuoteField_InvestUnitID, &InputQuoteField_InvestUnitID_len 
        , &InputQuoteField_ClientID, &InputQuoteField_ClientID_len 
        , &InputQuoteField_reserve2, &InputQuoteField_reserve2_len 
        , &InputQuoteField_MacAddress, &InputQuoteField_MacAddress_len 
        , &InputQuoteField_InstrumentID, &InputQuoteField_InstrumentID_len 
        , &InputQuoteField_IPAddress, &InputQuoteField_IPAddress_len 
        , &InputQuoteField_ReplaceSysID, &InputQuoteField_ReplaceSysID_len 
        , &InputQuoteField_TimeCondition 
        , &InputQuoteField_OrderMemo, &InputQuoteField_OrderMemo_len 
        , &InputQuoteField_SessionReqSeq 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( InputQuoteField_BrokerID != NULL ) {
        if(InputQuoteField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", InputQuoteField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, InputQuoteField_BrokerID, InputQuoteField_BrokerID_len);        
        strncpy(self->data.BrokerID, InputQuoteField_BrokerID, sizeof(self->data.BrokerID) );
        InputQuoteField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( InputQuoteField_InvestorID != NULL ) {
        if(InputQuoteField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", InputQuoteField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, InputQuoteField_InvestorID, InputQuoteField_InvestorID_len);        
        strncpy(self->data.InvestorID, InputQuoteField_InvestorID, sizeof(self->data.InvestorID) );
        InputQuoteField_InvestorID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( InputQuoteField_reserve1 != NULL ) {
        if(InputQuoteField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", InputQuoteField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, InputQuoteField_reserve1, InputQuoteField_reserve1_len);        
        strncpy(self->data.reserve1, InputQuoteField_reserve1, sizeof(self->data.reserve1) );
        InputQuoteField_reserve1 = NULL;
    }
            
    ///报价引用
    // TThostFtdcOrderRefType char[13]
    if( InputQuoteField_QuoteRef != NULL ) {
        if(InputQuoteField_QuoteRef_len > (Py_ssize_t)sizeof(self->data.QuoteRef)) {
            PyErr_Format(PyExc_ValueError, "QuoteRef too long: length=%zd (max allowed is %zd)", InputQuoteField_QuoteRef_len, (Py_ssize_t)sizeof(self->data.QuoteRef));
            return -1;
        }
        // memset(self->data.QuoteRef, 0, sizeof(self->data.QuoteRef));
        // memcpy(self->data.QuoteRef, InputQuoteField_QuoteRef, InputQuoteField_QuoteRef_len);        
        strncpy(self->data.QuoteRef, InputQuoteField_QuoteRef, sizeof(self->data.QuoteRef) );
        InputQuoteField_QuoteRef = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( InputQuoteField_UserID != NULL ) {
        if(InputQuoteField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", InputQuoteField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, InputQuoteField_UserID, InputQuoteField_UserID_len);        
        strncpy(self->data.UserID, InputQuoteField_UserID, sizeof(self->data.UserID) );
        InputQuoteField_UserID = NULL;
    }
            
    ///卖价格
    // TThostFtdcPriceType double
    self->data.AskPrice = InputQuoteField_AskPrice;
        
    ///买价格
    // TThostFtdcPriceType double
    self->data.BidPrice = InputQuoteField_BidPrice;
        
    ///卖数量
    // TThostFtdcVolumeType int
    self->data.AskVolume = InputQuoteField_AskVolume;
        
    ///买数量
    // TThostFtdcVolumeType int
    self->data.BidVolume = InputQuoteField_BidVolume;
        
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = InputQuoteField_RequestID;
        
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    if( InputQuoteField_BusinessUnit != NULL ) {
        if(InputQuoteField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", InputQuoteField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
            return -1;
        }
        // memset(self->data.BusinessUnit, 0, sizeof(self->data.BusinessUnit));
        // memcpy(self->data.BusinessUnit, InputQuoteField_BusinessUnit, InputQuoteField_BusinessUnit_len);        
        strncpy(self->data.BusinessUnit, InputQuoteField_BusinessUnit, sizeof(self->data.BusinessUnit) );
        InputQuoteField_BusinessUnit = NULL;
    }
            
    ///卖开平标志
    // TThostFtdcOffsetFlagType char
    self->data.AskOffsetFlag = InputQuoteField_AskOffsetFlag;
            
    ///买开平标志
    // TThostFtdcOffsetFlagType char
    self->data.BidOffsetFlag = InputQuoteField_BidOffsetFlag;
            
    ///卖投机套保标志
    // TThostFtdcHedgeFlagType char
    self->data.AskHedgeFlag = InputQuoteField_AskHedgeFlag;
            
    ///买投机套保标志
    // TThostFtdcHedgeFlagType char
    self->data.BidHedgeFlag = InputQuoteField_BidHedgeFlag;
            
    ///衍生卖报单引用
    // TThostFtdcOrderRefType char[13]
    if( InputQuoteField_AskOrderRef != NULL ) {
        if(InputQuoteField_AskOrderRef_len > (Py_ssize_t)sizeof(self->data.AskOrderRef)) {
            PyErr_Format(PyExc_ValueError, "AskOrderRef too long: length=%zd (max allowed is %zd)", InputQuoteField_AskOrderRef_len, (Py_ssize_t)sizeof(self->data.AskOrderRef));
            return -1;
        }
        // memset(self->data.AskOrderRef, 0, sizeof(self->data.AskOrderRef));
        // memcpy(self->data.AskOrderRef, InputQuoteField_AskOrderRef, InputQuoteField_AskOrderRef_len);        
        strncpy(self->data.AskOrderRef, InputQuoteField_AskOrderRef, sizeof(self->data.AskOrderRef) );
        InputQuoteField_AskOrderRef = NULL;
    }
            
    ///衍生买报单引用
    // TThostFtdcOrderRefType char[13]
    if( InputQuoteField_BidOrderRef != NULL ) {
        if(InputQuoteField_BidOrderRef_len > (Py_ssize_t)sizeof(self->data.BidOrderRef)) {
            PyErr_Format(PyExc_ValueError, "BidOrderRef too long: length=%zd (max allowed is %zd)", InputQuoteField_BidOrderRef_len, (Py_ssize_t)sizeof(self->data.BidOrderRef));
            return -1;
        }
        // memset(self->data.BidOrderRef, 0, sizeof(self->data.BidOrderRef));
        // memcpy(self->data.BidOrderRef, InputQuoteField_BidOrderRef, InputQuoteField_BidOrderRef_len);        
        strncpy(self->data.BidOrderRef, InputQuoteField_BidOrderRef, sizeof(self->data.BidOrderRef) );
        InputQuoteField_BidOrderRef = NULL;
    }
            
    ///应价编号
    // TThostFtdcOrderSysIDType char[21]
    if( InputQuoteField_ForQuoteSysID != NULL ) {
        if(InputQuoteField_ForQuoteSysID_len > (Py_ssize_t)sizeof(self->data.ForQuoteSysID)) {
            PyErr_Format(PyExc_ValueError, "ForQuoteSysID too long: length=%zd (max allowed is %zd)", InputQuoteField_ForQuoteSysID_len, (Py_ssize_t)sizeof(self->data.ForQuoteSysID));
            return -1;
        }
        // memset(self->data.ForQuoteSysID, 0, sizeof(self->data.ForQuoteSysID));
        // memcpy(self->data.ForQuoteSysID, InputQuoteField_ForQuoteSysID, InputQuoteField_ForQuoteSysID_len);        
        strncpy(self->data.ForQuoteSysID, InputQuoteField_ForQuoteSysID, sizeof(self->data.ForQuoteSysID) );
        InputQuoteField_ForQuoteSysID = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( InputQuoteField_ExchangeID != NULL ) {
        if(InputQuoteField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", InputQuoteField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, InputQuoteField_ExchangeID, InputQuoteField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, InputQuoteField_ExchangeID, sizeof(self->data.ExchangeID) );
        InputQuoteField_ExchangeID = NULL;
    }
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( InputQuoteField_InvestUnitID != NULL ) {
        if(InputQuoteField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", InputQuoteField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, InputQuoteField_InvestUnitID, InputQuoteField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, InputQuoteField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        InputQuoteField_InvestUnitID = NULL;
    }
            
    ///交易编码
    // TThostFtdcClientIDType char[11]
    if( InputQuoteField_ClientID != NULL ) {
        if(InputQuoteField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", InputQuoteField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
            return -1;
        }
        // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
        // memcpy(self->data.ClientID, InputQuoteField_ClientID, InputQuoteField_ClientID_len);        
        strncpy(self->data.ClientID, InputQuoteField_ClientID, sizeof(self->data.ClientID) );
        InputQuoteField_ClientID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    if( InputQuoteField_reserve2 != NULL ) {
        if(InputQuoteField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", InputQuoteField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
            return -1;
        }
        // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
        // memcpy(self->data.reserve2, InputQuoteField_reserve2, InputQuoteField_reserve2_len);        
        strncpy(self->data.reserve2, InputQuoteField_reserve2, sizeof(self->data.reserve2) );
        InputQuoteField_reserve2 = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( InputQuoteField_MacAddress != NULL ) {
        if(InputQuoteField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", InputQuoteField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, InputQuoteField_MacAddress, InputQuoteField_MacAddress_len);        
        strncpy(self->data.MacAddress, InputQuoteField_MacAddress, sizeof(self->data.MacAddress) );
        InputQuoteField_MacAddress = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( InputQuoteField_InstrumentID != NULL ) {
        if(InputQuoteField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", InputQuoteField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, InputQuoteField_InstrumentID, InputQuoteField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, InputQuoteField_InstrumentID, sizeof(self->data.InstrumentID) );
        InputQuoteField_InstrumentID = NULL;
    }
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( InputQuoteField_IPAddress != NULL ) {
        if(InputQuoteField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", InputQuoteField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, InputQuoteField_IPAddress, InputQuoteField_IPAddress_len);        
        strncpy(self->data.IPAddress, InputQuoteField_IPAddress, sizeof(self->data.IPAddress) );
        InputQuoteField_IPAddress = NULL;
    }
            
    ///被顶单编号
    // TThostFtdcOrderSysIDType char[21]
    if( InputQuoteField_ReplaceSysID != NULL ) {
        if(InputQuoteField_ReplaceSysID_len > (Py_ssize_t)sizeof(self->data.ReplaceSysID)) {
            PyErr_Format(PyExc_ValueError, "ReplaceSysID too long: length=%zd (max allowed is %zd)", InputQuoteField_ReplaceSysID_len, (Py_ssize_t)sizeof(self->data.ReplaceSysID));
            return -1;
        }
        // memset(self->data.ReplaceSysID, 0, sizeof(self->data.ReplaceSysID));
        // memcpy(self->data.ReplaceSysID, InputQuoteField_ReplaceSysID, InputQuoteField_ReplaceSysID_len);        
        strncpy(self->data.ReplaceSysID, InputQuoteField_ReplaceSysID, sizeof(self->data.ReplaceSysID) );
        InputQuoteField_ReplaceSysID = NULL;
    }
            
    ///有效期类型
    // TThostFtdcTimeConditionType char
    self->data.TimeCondition = InputQuoteField_TimeCondition;
            
    ///报单回显字段
    // TThostFtdcOrderMemoType char[13]
    if( InputQuoteField_OrderMemo != NULL ) {
        if(InputQuoteField_OrderMemo_len > (Py_ssize_t)sizeof(self->data.OrderMemo)) {
            PyErr_Format(PyExc_ValueError, "OrderMemo too long: length=%zd (max allowed is %zd)", InputQuoteField_OrderMemo_len, (Py_ssize_t)sizeof(self->data.OrderMemo));
            return -1;
        }
        // memset(self->data.OrderMemo, 0, sizeof(self->data.OrderMemo));
        // memcpy(self->data.OrderMemo, InputQuoteField_OrderMemo, InputQuoteField_OrderMemo_len);        
        strncpy(self->data.OrderMemo, InputQuoteField_OrderMemo, sizeof(self->data.OrderMemo) );
        InputQuoteField_OrderMemo = NULL;
    }
            
    ///session上请求计数 api自动维护
    // TThostFtdcSequenceNo12Type int
    self->data.SessionReqSeq = InputQuoteField_SessionReqSeq;
        

    return 0;
}

static void PyCThostFtdcInputQuoteField_dealloc(PyCThostFtdcInputQuoteField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInputQuoteField_repr(PyCThostFtdcInputQuoteField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:d,s:d,s:i,s:i,s:i,s:y,s:c,s:c,s:c,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:d,s:d,s:i,s:i,s:i,s:s,s:c,s:c,s:c,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:c,s:s,s:i}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"QuoteRef", self->data.QuoteRef//, (Py_ssize_t)sizeof(self->data.QuoteRef) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"AskPrice", self->data.AskPrice 
        ,"BidPrice", self->data.BidPrice 
        ,"AskVolume", self->data.AskVolume 
        ,"BidVolume", self->data.BidVolume 
        ,"RequestID", self->data.RequestID 
        ,"BusinessUnit", self->data.BusinessUnit//, (Py_ssize_t)sizeof(self->data.BusinessUnit) 
        ,"AskOffsetFlag", self->data.AskOffsetFlag 
        ,"BidOffsetFlag", self->data.BidOffsetFlag 
        ,"AskHedgeFlag", self->data.AskHedgeFlag 
        ,"BidHedgeFlag", self->data.BidHedgeFlag 
        ,"AskOrderRef", self->data.AskOrderRef//, (Py_ssize_t)sizeof(self->data.AskOrderRef) 
        ,"BidOrderRef", self->data.BidOrderRef//, (Py_ssize_t)sizeof(self->data.BidOrderRef) 
        ,"ForQuoteSysID", self->data.ForQuoteSysID//, (Py_ssize_t)sizeof(self->data.ForQuoteSysID) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"InvestUnitID", self->data.InvestUnitID//, (Py_ssize_t)sizeof(self->data.InvestUnitID) 
        ,"ClientID", self->data.ClientID//, (Py_ssize_t)sizeof(self->data.ClientID) 
        ,"reserve2", self->data.reserve2//, (Py_ssize_t)sizeof(self->data.reserve2) 
        ,"MacAddress", self->data.MacAddress//, (Py_ssize_t)sizeof(self->data.MacAddress) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"IPAddress", self->data.IPAddress//, (Py_ssize_t)sizeof(self->data.IPAddress) 
        ,"ReplaceSysID", self->data.ReplaceSysID//, (Py_ssize_t)sizeof(self->data.ReplaceSysID) 
        ,"TimeCondition", self->data.TimeCondition 
        ,"OrderMemo", self->data.OrderMemo//, (Py_ssize_t)sizeof(self->data.OrderMemo) 
        ,"SessionReqSeq", self->data.SessionReqSeq 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputQuoteField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcInputQuoteField_get_BrokerID(PyCThostFtdcInputQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcInputQuoteField_set_BrokerID(PyCThostFtdcInputQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputQuoteField_get_InvestorID(PyCThostFtdcInputQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcInputQuoteField_set_InvestorID(PyCThostFtdcInputQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputQuoteField_get_reserve1(PyCThostFtdcInputQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcInputQuoteField_set_reserve1(PyCThostFtdcInputQuoteField *self, PyObject* val, void *closure) {
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
            
///报价引用
// TThostFtdcOrderRefType char[13]
static PyObject *PyCThostFtdcInputQuoteField_get_QuoteRef(PyCThostFtdcInputQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.QuoteRef, (Py_ssize_t)sizeof(self->data.QuoteRef));
    return PyBytes_FromString(self->data.QuoteRef);
}

///报价引用
// TThostFtdcOrderRefType char[13]
static int PyCThostFtdcInputQuoteField_set_QuoteRef(PyCThostFtdcInputQuoteField *self, PyObject* val, void *closure) {
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
            
///用户代码
// TThostFtdcUserIDType char[16]
static PyObject *PyCThostFtdcInputQuoteField_get_UserID(PyCThostFtdcInputQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcInputQuoteField_set_UserID(PyCThostFtdcInputQuoteField *self, PyObject* val, void *closure) {
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
            
///卖价格
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcInputQuoteField_get_AskPrice(PyCThostFtdcInputQuoteField *self, void *closure) {
    return PyFloat_FromDouble(self->data.AskPrice);
}

///卖价格
// TThostFtdcPriceType double
static int PyCThostFtdcInputQuoteField_set_AskPrice(PyCThostFtdcInputQuoteField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AskPrice = buf;
    return 0;
}
        
///买价格
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcInputQuoteField_get_BidPrice(PyCThostFtdcInputQuoteField *self, void *closure) {
    return PyFloat_FromDouble(self->data.BidPrice);
}

///买价格
// TThostFtdcPriceType double
static int PyCThostFtdcInputQuoteField_set_BidPrice(PyCThostFtdcInputQuoteField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BidPrice = buf;
    return 0;
}
        
///卖数量
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcInputQuoteField_get_AskVolume(PyCThostFtdcInputQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.AskVolume);
#else
    return PyInt_FromLong(self->data.AskVolume);
#endif
}

///卖数量
// TThostFtdcVolumeType int
static int PyCThostFtdcInputQuoteField_set_AskVolume(PyCThostFtdcInputQuoteField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskVolume Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskVolume Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the AskVolume value out of range for C int");
        return -1;
    }
    self->data.AskVolume = (int)buf;
    return 0;
}
        
///买数量
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcInputQuoteField_get_BidVolume(PyCThostFtdcInputQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.BidVolume);
#else
    return PyInt_FromLong(self->data.BidVolume);
#endif
}

///买数量
// TThostFtdcVolumeType int
static int PyCThostFtdcInputQuoteField_set_BidVolume(PyCThostFtdcInputQuoteField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidVolume Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidVolume Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the BidVolume value out of range for C int");
        return -1;
    }
    self->data.BidVolume = (int)buf;
    return 0;
}
        
///请求编号
// TThostFtdcRequestIDType int
static PyObject *PyCThostFtdcInputQuoteField_get_RequestID(PyCThostFtdcInputQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcInputQuoteField_set_RequestID(PyCThostFtdcInputQuoteField *self, PyObject* val, void *closure) {
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
        
///业务单元
// TThostFtdcBusinessUnitType char[21]
static PyObject *PyCThostFtdcInputQuoteField_get_BusinessUnit(PyCThostFtdcInputQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BusinessUnit, (Py_ssize_t)sizeof(self->data.BusinessUnit));
    return PyBytes_FromString(self->data.BusinessUnit);
}

///业务单元
// TThostFtdcBusinessUnitType char[21]
static int PyCThostFtdcInputQuoteField_set_BusinessUnit(PyCThostFtdcInputQuoteField *self, PyObject* val, void *closure) {
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
            
///卖开平标志
// TThostFtdcOffsetFlagType char
static PyObject *PyCThostFtdcInputQuoteField_get_AskOffsetFlag(PyCThostFtdcInputQuoteField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.AskOffsetFlag), 1);
}

///卖开平标志
// TThostFtdcOffsetFlagType char
static int PyCThostFtdcInputQuoteField_set_AskOffsetFlag(PyCThostFtdcInputQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskOffsetFlag Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.AskOffsetFlag)) {
        PyErr_SetString(PyExc_ValueError, "AskOffsetFlag must be equal 1 bytes");
        return -1;
    }
    self->data.AskOffsetFlag = *buf;
    return 0;
}
            
///买开平标志
// TThostFtdcOffsetFlagType char
static PyObject *PyCThostFtdcInputQuoteField_get_BidOffsetFlag(PyCThostFtdcInputQuoteField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BidOffsetFlag), 1);
}

///买开平标志
// TThostFtdcOffsetFlagType char
static int PyCThostFtdcInputQuoteField_set_BidOffsetFlag(PyCThostFtdcInputQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidOffsetFlag Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BidOffsetFlag)) {
        PyErr_SetString(PyExc_ValueError, "BidOffsetFlag must be equal 1 bytes");
        return -1;
    }
    self->data.BidOffsetFlag = *buf;
    return 0;
}
            
///卖投机套保标志
// TThostFtdcHedgeFlagType char
static PyObject *PyCThostFtdcInputQuoteField_get_AskHedgeFlag(PyCThostFtdcInputQuoteField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.AskHedgeFlag), 1);
}

///卖投机套保标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcInputQuoteField_set_AskHedgeFlag(PyCThostFtdcInputQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskHedgeFlag Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.AskHedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "AskHedgeFlag must be equal 1 bytes");
        return -1;
    }
    self->data.AskHedgeFlag = *buf;
    return 0;
}
            
///买投机套保标志
// TThostFtdcHedgeFlagType char
static PyObject *PyCThostFtdcInputQuoteField_get_BidHedgeFlag(PyCThostFtdcInputQuoteField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BidHedgeFlag), 1);
}

///买投机套保标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcInputQuoteField_set_BidHedgeFlag(PyCThostFtdcInputQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidHedgeFlag Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BidHedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "BidHedgeFlag must be equal 1 bytes");
        return -1;
    }
    self->data.BidHedgeFlag = *buf;
    return 0;
}
            
///衍生卖报单引用
// TThostFtdcOrderRefType char[13]
static PyObject *PyCThostFtdcInputQuoteField_get_AskOrderRef(PyCThostFtdcInputQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AskOrderRef, (Py_ssize_t)sizeof(self->data.AskOrderRef));
    return PyBytes_FromString(self->data.AskOrderRef);
}

///衍生卖报单引用
// TThostFtdcOrderRefType char[13]
static int PyCThostFtdcInputQuoteField_set_AskOrderRef(PyCThostFtdcInputQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskOrderRef Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.AskOrderRef)) {
        PyErr_SetString(PyExc_ValueError, "AskOrderRef must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.AskOrderRef, 0, sizeof(self->data.AskOrderRef));
    // memcpy(self->data.AskOrderRef, buf, len);
    strncpy(self->data.AskOrderRef, buf, sizeof(self->data.AskOrderRef));
    return 0;
}
            
///衍生买报单引用
// TThostFtdcOrderRefType char[13]
static PyObject *PyCThostFtdcInputQuoteField_get_BidOrderRef(PyCThostFtdcInputQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BidOrderRef, (Py_ssize_t)sizeof(self->data.BidOrderRef));
    return PyBytes_FromString(self->data.BidOrderRef);
}

///衍生买报单引用
// TThostFtdcOrderRefType char[13]
static int PyCThostFtdcInputQuoteField_set_BidOrderRef(PyCThostFtdcInputQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidOrderRef Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BidOrderRef)) {
        PyErr_SetString(PyExc_ValueError, "BidOrderRef must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.BidOrderRef, 0, sizeof(self->data.BidOrderRef));
    // memcpy(self->data.BidOrderRef, buf, len);
    strncpy(self->data.BidOrderRef, buf, sizeof(self->data.BidOrderRef));
    return 0;
}
            
///应价编号
// TThostFtdcOrderSysIDType char[21]
static PyObject *PyCThostFtdcInputQuoteField_get_ForQuoteSysID(PyCThostFtdcInputQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ForQuoteSysID, (Py_ssize_t)sizeof(self->data.ForQuoteSysID));
    return PyBytes_FromString(self->data.ForQuoteSysID);
}

///应价编号
// TThostFtdcOrderSysIDType char[21]
static int PyCThostFtdcInputQuoteField_set_ForQuoteSysID(PyCThostFtdcInputQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ForQuoteSysID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ForQuoteSysID)) {
        PyErr_SetString(PyExc_ValueError, "ForQuoteSysID must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.ForQuoteSysID, 0, sizeof(self->data.ForQuoteSysID));
    // memcpy(self->data.ForQuoteSysID, buf, len);
    strncpy(self->data.ForQuoteSysID, buf, sizeof(self->data.ForQuoteSysID));
    return 0;
}
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcInputQuoteField_get_ExchangeID(PyCThostFtdcInputQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcInputQuoteField_set_ExchangeID(PyCThostFtdcInputQuoteField *self, PyObject* val, void *closure) {
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
            
///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static PyObject *PyCThostFtdcInputQuoteField_get_InvestUnitID(PyCThostFtdcInputQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcInputQuoteField_set_InvestUnitID(PyCThostFtdcInputQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputQuoteField_get_ClientID(PyCThostFtdcInputQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientID, (Py_ssize_t)sizeof(self->data.ClientID));
    return PyBytes_FromString(self->data.ClientID);
}

///交易编码
// TThostFtdcClientIDType char[11]
static int PyCThostFtdcInputQuoteField_set_ClientID(PyCThostFtdcInputQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputQuoteField_get_reserve2(PyCThostFtdcInputQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve2, (Py_ssize_t)sizeof(self->data.reserve2));
    return PyBytes_FromString(self->data.reserve2);
}

///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static int PyCThostFtdcInputQuoteField_set_reserve2(PyCThostFtdcInputQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputQuoteField_get_MacAddress(PyCThostFtdcInputQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcInputQuoteField_set_MacAddress(PyCThostFtdcInputQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputQuoteField_get_InstrumentID(PyCThostFtdcInputQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcInputQuoteField_set_InstrumentID(PyCThostFtdcInputQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputQuoteField_get_IPAddress(PyCThostFtdcInputQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcInputQuoteField_set_IPAddress(PyCThostFtdcInputQuoteField *self, PyObject* val, void *closure) {
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
            
///被顶单编号
// TThostFtdcOrderSysIDType char[21]
static PyObject *PyCThostFtdcInputQuoteField_get_ReplaceSysID(PyCThostFtdcInputQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ReplaceSysID, (Py_ssize_t)sizeof(self->data.ReplaceSysID));
    return PyBytes_FromString(self->data.ReplaceSysID);
}

///被顶单编号
// TThostFtdcOrderSysIDType char[21]
static int PyCThostFtdcInputQuoteField_set_ReplaceSysID(PyCThostFtdcInputQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ReplaceSysID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ReplaceSysID)) {
        PyErr_SetString(PyExc_ValueError, "ReplaceSysID must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.ReplaceSysID, 0, sizeof(self->data.ReplaceSysID));
    // memcpy(self->data.ReplaceSysID, buf, len);
    strncpy(self->data.ReplaceSysID, buf, sizeof(self->data.ReplaceSysID));
    return 0;
}
            
///有效期类型
// TThostFtdcTimeConditionType char
static PyObject *PyCThostFtdcInputQuoteField_get_TimeCondition(PyCThostFtdcInputQuoteField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.TimeCondition), 1);
}

///有效期类型
// TThostFtdcTimeConditionType char
static int PyCThostFtdcInputQuoteField_set_TimeCondition(PyCThostFtdcInputQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TimeCondition Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TimeCondition)) {
        PyErr_SetString(PyExc_ValueError, "TimeCondition must be equal 1 bytes");
        return -1;
    }
    self->data.TimeCondition = *buf;
    return 0;
}
            
///报单回显字段
// TThostFtdcOrderMemoType char[13]
static PyObject *PyCThostFtdcInputQuoteField_get_OrderMemo(PyCThostFtdcInputQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderMemo, (Py_ssize_t)sizeof(self->data.OrderMemo));
    return PyBytes_FromString(self->data.OrderMemo);
}

///报单回显字段
// TThostFtdcOrderMemoType char[13]
static int PyCThostFtdcInputQuoteField_set_OrderMemo(PyCThostFtdcInputQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputQuoteField_get_SessionReqSeq(PyCThostFtdcInputQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionReqSeq);
#else
    return PyInt_FromLong(self->data.SessionReqSeq);
#endif
}

///session上请求计数 api自动维护
// TThostFtdcSequenceNo12Type int
static int PyCThostFtdcInputQuoteField_set_SessionReqSeq(PyCThostFtdcInputQuoteField *self, PyObject* val, void *closure) {
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
        

static PyGetSetDef PyCThostFtdcInputQuoteField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcInputQuoteField_get_BrokerID, (setter)PyCThostFtdcInputQuoteField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcInputQuoteField_get_InvestorID, (setter)PyCThostFtdcInputQuoteField_set_InvestorID, (char *)"InvestorID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcInputQuoteField_get_reserve1, (setter)PyCThostFtdcInputQuoteField_set_reserve1, (char *)"reserve1", NULL},
    ///报价引用 
    {(char *)"QuoteRef", (getter)PyCThostFtdcInputQuoteField_get_QuoteRef, (setter)PyCThostFtdcInputQuoteField_set_QuoteRef, (char *)"QuoteRef", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcInputQuoteField_get_UserID, (setter)PyCThostFtdcInputQuoteField_set_UserID, (char *)"UserID", NULL},
    ///卖价格 
    {(char *)"AskPrice", (getter)PyCThostFtdcInputQuoteField_get_AskPrice, (setter)PyCThostFtdcInputQuoteField_set_AskPrice, (char *)"AskPrice", NULL},
    ///买价格 
    {(char *)"BidPrice", (getter)PyCThostFtdcInputQuoteField_get_BidPrice, (setter)PyCThostFtdcInputQuoteField_set_BidPrice, (char *)"BidPrice", NULL},
    ///卖数量 
    {(char *)"AskVolume", (getter)PyCThostFtdcInputQuoteField_get_AskVolume, (setter)PyCThostFtdcInputQuoteField_set_AskVolume, (char *)"AskVolume", NULL},
    ///买数量 
    {(char *)"BidVolume", (getter)PyCThostFtdcInputQuoteField_get_BidVolume, (setter)PyCThostFtdcInputQuoteField_set_BidVolume, (char *)"BidVolume", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcInputQuoteField_get_RequestID, (setter)PyCThostFtdcInputQuoteField_set_RequestID, (char *)"RequestID", NULL},
    ///业务单元 
    {(char *)"BusinessUnit", (getter)PyCThostFtdcInputQuoteField_get_BusinessUnit, (setter)PyCThostFtdcInputQuoteField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
    ///卖开平标志 
    {(char *)"AskOffsetFlag", (getter)PyCThostFtdcInputQuoteField_get_AskOffsetFlag, (setter)PyCThostFtdcInputQuoteField_set_AskOffsetFlag, (char *)"AskOffsetFlag", NULL},
    ///买开平标志 
    {(char *)"BidOffsetFlag", (getter)PyCThostFtdcInputQuoteField_get_BidOffsetFlag, (setter)PyCThostFtdcInputQuoteField_set_BidOffsetFlag, (char *)"BidOffsetFlag", NULL},
    ///卖投机套保标志 
    {(char *)"AskHedgeFlag", (getter)PyCThostFtdcInputQuoteField_get_AskHedgeFlag, (setter)PyCThostFtdcInputQuoteField_set_AskHedgeFlag, (char *)"AskHedgeFlag", NULL},
    ///买投机套保标志 
    {(char *)"BidHedgeFlag", (getter)PyCThostFtdcInputQuoteField_get_BidHedgeFlag, (setter)PyCThostFtdcInputQuoteField_set_BidHedgeFlag, (char *)"BidHedgeFlag", NULL},
    ///衍生卖报单引用 
    {(char *)"AskOrderRef", (getter)PyCThostFtdcInputQuoteField_get_AskOrderRef, (setter)PyCThostFtdcInputQuoteField_set_AskOrderRef, (char *)"AskOrderRef", NULL},
    ///衍生买报单引用 
    {(char *)"BidOrderRef", (getter)PyCThostFtdcInputQuoteField_get_BidOrderRef, (setter)PyCThostFtdcInputQuoteField_set_BidOrderRef, (char *)"BidOrderRef", NULL},
    ///应价编号 
    {(char *)"ForQuoteSysID", (getter)PyCThostFtdcInputQuoteField_get_ForQuoteSysID, (setter)PyCThostFtdcInputQuoteField_set_ForQuoteSysID, (char *)"ForQuoteSysID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcInputQuoteField_get_ExchangeID, (setter)PyCThostFtdcInputQuoteField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcInputQuoteField_get_InvestUnitID, (setter)PyCThostFtdcInputQuoteField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///交易编码 
    {(char *)"ClientID", (getter)PyCThostFtdcInputQuoteField_get_ClientID, (setter)PyCThostFtdcInputQuoteField_set_ClientID, (char *)"ClientID", NULL},
    ///保留的无效字段 
    {(char *)"reserve2", (getter)PyCThostFtdcInputQuoteField_get_reserve2, (setter)PyCThostFtdcInputQuoteField_set_reserve2, (char *)"reserve2", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcInputQuoteField_get_MacAddress, (setter)PyCThostFtdcInputQuoteField_set_MacAddress, (char *)"MacAddress", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcInputQuoteField_get_InstrumentID, (setter)PyCThostFtdcInputQuoteField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcInputQuoteField_get_IPAddress, (setter)PyCThostFtdcInputQuoteField_set_IPAddress, (char *)"IPAddress", NULL},
    ///被顶单编号 
    {(char *)"ReplaceSysID", (getter)PyCThostFtdcInputQuoteField_get_ReplaceSysID, (setter)PyCThostFtdcInputQuoteField_set_ReplaceSysID, (char *)"ReplaceSysID", NULL},
    ///有效期类型 
    {(char *)"TimeCondition", (getter)PyCThostFtdcInputQuoteField_get_TimeCondition, (setter)PyCThostFtdcInputQuoteField_set_TimeCondition, (char *)"TimeCondition", NULL},
    ///报单回显字段 
    {(char *)"OrderMemo", (getter)PyCThostFtdcInputQuoteField_get_OrderMemo, (setter)PyCThostFtdcInputQuoteField_set_OrderMemo, (char *)"OrderMemo", NULL},
    ///session上请求计数 api自动维护 
    {(char *)"SessionReqSeq", (getter)PyCThostFtdcInputQuoteField_get_SessionReqSeq, (setter)PyCThostFtdcInputQuoteField_set_SessionReqSeq, (char *)"SessionReqSeq", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInputQuoteFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInputQuoteField",	/* tp_name */
	sizeof(PyCThostFtdcInputQuoteField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInputQuoteField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInputQuoteField_repr,   /* tp_repr */
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
	"CThostFtdcInputQuoteField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInputQuoteField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInputQuoteField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInputQuoteField_new,       /* tp_new */
};

int PyCThostFtdcInputQuoteFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInputQuoteField  */
	if (PyType_Ready(&PyCThostFtdcInputQuoteFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInputQuoteField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInputQuoteFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInputQuoteField", (PyObject *)&PyCThostFtdcInputQuoteFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInputQuoteField to module");
        Py_DECREF(&PyCThostFtdcInputQuoteFieldType);
		return -1;
    }

    return 0;
}
