
#include "PyCThostFtdcInputOrderField.h"

///输入报单

static PyObject *PyCThostFtdcInputOrderField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInputOrderField *self = (PyCThostFtdcInputOrderField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcInputOrderField_init(PyCThostFtdcInputOrderField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "OrderRef", "UserID", "OrderPriceType", "Direction", "CombOffsetFlag", "CombHedgeFlag", "LimitPrice", "VolumeTotalOriginal", "TimeCondition", "GTDDate", "VolumeCondition", "MinVolume", "ContingentCondition", "StopPrice", "ForceCloseReason", "IsAutoSuspend", "BusinessUnit", "RequestID", "UserForceClose", "IsSwapOrder", "ExchangeID", "InvestUnitID", "AccountID", "CurrencyID", "ClientID", "reserve2", "MacAddress", "InstrumentID", "IPAddress", "OrderMemo", "SessionReqSeq",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *InputOrderField_BrokerID = NULL;
    Py_ssize_t InputOrderField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *InputOrderField_InvestorID = NULL;
    Py_ssize_t InputOrderField_InvestorID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *InputOrderField_reserve1 = NULL;
    Py_ssize_t InputOrderField_reserve1_len = 0;
            
    ///报单引用
    // TThostFtdcOrderRefType char[13]
    const char *InputOrderField_OrderRef = NULL;
    Py_ssize_t InputOrderField_OrderRef_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *InputOrderField_UserID = NULL;
    Py_ssize_t InputOrderField_UserID_len = 0;
            
    ///报单价格条件
    // TThostFtdcOrderPriceTypeType char
    char InputOrderField_OrderPriceType = 0;
            
    ///买卖方向
    // TThostFtdcDirectionType char
    char InputOrderField_Direction = 0;
            
    ///组合开平标志
    // TThostFtdcCombOffsetFlagType char[5]
    const char *InputOrderField_CombOffsetFlag = NULL;
    Py_ssize_t InputOrderField_CombOffsetFlag_len = 0;
            
    ///组合投机套保标志
    // TThostFtdcCombHedgeFlagType char[5]
    const char *InputOrderField_CombHedgeFlag = NULL;
    Py_ssize_t InputOrderField_CombHedgeFlag_len = 0;
            
    ///价格
    // TThostFtdcPriceType double
    double InputOrderField_LimitPrice = 0.0;
        
    ///数量
    // TThostFtdcVolumeType int
    int InputOrderField_VolumeTotalOriginal = 0;
        
    ///有效期类型
    // TThostFtdcTimeConditionType char
    char InputOrderField_TimeCondition = 0;
            
    ///GTD日期
    // TThostFtdcDateType char[9]
    const char *InputOrderField_GTDDate = NULL;
    Py_ssize_t InputOrderField_GTDDate_len = 0;
            
    ///成交量类型
    // TThostFtdcVolumeConditionType char
    char InputOrderField_VolumeCondition = 0;
            
    ///最小成交量
    // TThostFtdcVolumeType int
    int InputOrderField_MinVolume = 0;
        
    ///触发条件
    // TThostFtdcContingentConditionType char
    char InputOrderField_ContingentCondition = 0;
            
    ///止损价
    // TThostFtdcPriceType double
    double InputOrderField_StopPrice = 0.0;
        
    ///强平原因
    // TThostFtdcForceCloseReasonType char
    char InputOrderField_ForceCloseReason = 0;
            
    ///自动挂起标志
    // TThostFtdcBoolType int
    int InputOrderField_IsAutoSuspend = 0;
        
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    const char *InputOrderField_BusinessUnit = NULL;
    Py_ssize_t InputOrderField_BusinessUnit_len = 0;
            
    ///请求编号
    // TThostFtdcRequestIDType int
    int InputOrderField_RequestID = 0;
        
    ///用户强平标志
    // TThostFtdcBoolType int
    int InputOrderField_UserForceClose = 0;
        
    ///互换单标志
    // TThostFtdcBoolType int
    int InputOrderField_IsSwapOrder = 0;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *InputOrderField_ExchangeID = NULL;
    Py_ssize_t InputOrderField_ExchangeID_len = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *InputOrderField_InvestUnitID = NULL;
    Py_ssize_t InputOrderField_InvestUnitID_len = 0;
            
    ///资金账号
    // TThostFtdcAccountIDType char[13]
    const char *InputOrderField_AccountID = NULL;
    Py_ssize_t InputOrderField_AccountID_len = 0;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *InputOrderField_CurrencyID = NULL;
    Py_ssize_t InputOrderField_CurrencyID_len = 0;
            
    ///交易编码
    // TThostFtdcClientIDType char[11]
    const char *InputOrderField_ClientID = NULL;
    Py_ssize_t InputOrderField_ClientID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    const char *InputOrderField_reserve2 = NULL;
    Py_ssize_t InputOrderField_reserve2_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *InputOrderField_MacAddress = NULL;
    Py_ssize_t InputOrderField_MacAddress_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *InputOrderField_InstrumentID = NULL;
    Py_ssize_t InputOrderField_InstrumentID_len = 0;
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *InputOrderField_IPAddress = NULL;
    Py_ssize_t InputOrderField_IPAddress_len = 0;
            
    ///报单回显字段
    // TThostFtdcOrderMemoType char[13]
    const char *InputOrderField_OrderMemo = NULL;
    Py_ssize_t InputOrderField_OrderMemo_len = 0;
            
    ///session上请求计数 api自动维护
    // TThostFtdcSequenceNo12Type int
    int InputOrderField_SessionReqSeq = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#ccy#y#dicy#cicdciy#iiiy#y#y#y#y#y#y#y#y#y#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#ccs#s#dics#cicdcis#iiis#s#s#s#s#s#s#s#s#s#i", (char **)kwlist
#endif

        , &InputOrderField_BrokerID, &InputOrderField_BrokerID_len 
        , &InputOrderField_InvestorID, &InputOrderField_InvestorID_len 
        , &InputOrderField_reserve1, &InputOrderField_reserve1_len 
        , &InputOrderField_OrderRef, &InputOrderField_OrderRef_len 
        , &InputOrderField_UserID, &InputOrderField_UserID_len 
        , &InputOrderField_OrderPriceType 
        , &InputOrderField_Direction 
        , &InputOrderField_CombOffsetFlag, &InputOrderField_CombOffsetFlag_len 
        , &InputOrderField_CombHedgeFlag, &InputOrderField_CombHedgeFlag_len 
        , &InputOrderField_LimitPrice 
        , &InputOrderField_VolumeTotalOriginal 
        , &InputOrderField_TimeCondition 
        , &InputOrderField_GTDDate, &InputOrderField_GTDDate_len 
        , &InputOrderField_VolumeCondition 
        , &InputOrderField_MinVolume 
        , &InputOrderField_ContingentCondition 
        , &InputOrderField_StopPrice 
        , &InputOrderField_ForceCloseReason 
        , &InputOrderField_IsAutoSuspend 
        , &InputOrderField_BusinessUnit, &InputOrderField_BusinessUnit_len 
        , &InputOrderField_RequestID 
        , &InputOrderField_UserForceClose 
        , &InputOrderField_IsSwapOrder 
        , &InputOrderField_ExchangeID, &InputOrderField_ExchangeID_len 
        , &InputOrderField_InvestUnitID, &InputOrderField_InvestUnitID_len 
        , &InputOrderField_AccountID, &InputOrderField_AccountID_len 
        , &InputOrderField_CurrencyID, &InputOrderField_CurrencyID_len 
        , &InputOrderField_ClientID, &InputOrderField_ClientID_len 
        , &InputOrderField_reserve2, &InputOrderField_reserve2_len 
        , &InputOrderField_MacAddress, &InputOrderField_MacAddress_len 
        , &InputOrderField_InstrumentID, &InputOrderField_InstrumentID_len 
        , &InputOrderField_IPAddress, &InputOrderField_IPAddress_len 
        , &InputOrderField_OrderMemo, &InputOrderField_OrderMemo_len 
        , &InputOrderField_SessionReqSeq 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( InputOrderField_BrokerID != NULL ) {
        if(InputOrderField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", InputOrderField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, InputOrderField_BrokerID, InputOrderField_BrokerID_len);        
        strncpy(self->data.BrokerID, InputOrderField_BrokerID, sizeof(self->data.BrokerID) );
        InputOrderField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( InputOrderField_InvestorID != NULL ) {
        if(InputOrderField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", InputOrderField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, InputOrderField_InvestorID, InputOrderField_InvestorID_len);        
        strncpy(self->data.InvestorID, InputOrderField_InvestorID, sizeof(self->data.InvestorID) );
        InputOrderField_InvestorID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( InputOrderField_reserve1 != NULL ) {
        if(InputOrderField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", InputOrderField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, InputOrderField_reserve1, InputOrderField_reserve1_len);        
        strncpy(self->data.reserve1, InputOrderField_reserve1, sizeof(self->data.reserve1) );
        InputOrderField_reserve1 = NULL;
    }
            
    ///报单引用
    // TThostFtdcOrderRefType char[13]
    if( InputOrderField_OrderRef != NULL ) {
        if(InputOrderField_OrderRef_len > (Py_ssize_t)sizeof(self->data.OrderRef)) {
            PyErr_Format(PyExc_ValueError, "OrderRef too long: length=%zd (max allowed is %zd)", InputOrderField_OrderRef_len, (Py_ssize_t)sizeof(self->data.OrderRef));
            return -1;
        }
        // memset(self->data.OrderRef, 0, sizeof(self->data.OrderRef));
        // memcpy(self->data.OrderRef, InputOrderField_OrderRef, InputOrderField_OrderRef_len);        
        strncpy(self->data.OrderRef, InputOrderField_OrderRef, sizeof(self->data.OrderRef) );
        InputOrderField_OrderRef = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( InputOrderField_UserID != NULL ) {
        if(InputOrderField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", InputOrderField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, InputOrderField_UserID, InputOrderField_UserID_len);        
        strncpy(self->data.UserID, InputOrderField_UserID, sizeof(self->data.UserID) );
        InputOrderField_UserID = NULL;
    }
            
    ///报单价格条件
    // TThostFtdcOrderPriceTypeType char
    self->data.OrderPriceType = InputOrderField_OrderPriceType;
            
    ///买卖方向
    // TThostFtdcDirectionType char
    self->data.Direction = InputOrderField_Direction;
            
    ///组合开平标志
    // TThostFtdcCombOffsetFlagType char[5]
    if( InputOrderField_CombOffsetFlag != NULL ) {
        if(InputOrderField_CombOffsetFlag_len > (Py_ssize_t)sizeof(self->data.CombOffsetFlag)) {
            PyErr_Format(PyExc_ValueError, "CombOffsetFlag too long: length=%zd (max allowed is %zd)", InputOrderField_CombOffsetFlag_len, (Py_ssize_t)sizeof(self->data.CombOffsetFlag));
            return -1;
        }
        // memset(self->data.CombOffsetFlag, 0, sizeof(self->data.CombOffsetFlag));
        // memcpy(self->data.CombOffsetFlag, InputOrderField_CombOffsetFlag, InputOrderField_CombOffsetFlag_len);        
        strncpy(self->data.CombOffsetFlag, InputOrderField_CombOffsetFlag, sizeof(self->data.CombOffsetFlag) );
        InputOrderField_CombOffsetFlag = NULL;
    }
            
    ///组合投机套保标志
    // TThostFtdcCombHedgeFlagType char[5]
    if( InputOrderField_CombHedgeFlag != NULL ) {
        if(InputOrderField_CombHedgeFlag_len > (Py_ssize_t)sizeof(self->data.CombHedgeFlag)) {
            PyErr_Format(PyExc_ValueError, "CombHedgeFlag too long: length=%zd (max allowed is %zd)", InputOrderField_CombHedgeFlag_len, (Py_ssize_t)sizeof(self->data.CombHedgeFlag));
            return -1;
        }
        // memset(self->data.CombHedgeFlag, 0, sizeof(self->data.CombHedgeFlag));
        // memcpy(self->data.CombHedgeFlag, InputOrderField_CombHedgeFlag, InputOrderField_CombHedgeFlag_len);        
        strncpy(self->data.CombHedgeFlag, InputOrderField_CombHedgeFlag, sizeof(self->data.CombHedgeFlag) );
        InputOrderField_CombHedgeFlag = NULL;
    }
            
    ///价格
    // TThostFtdcPriceType double
    self->data.LimitPrice = InputOrderField_LimitPrice;
        
    ///数量
    // TThostFtdcVolumeType int
    self->data.VolumeTotalOriginal = InputOrderField_VolumeTotalOriginal;
        
    ///有效期类型
    // TThostFtdcTimeConditionType char
    self->data.TimeCondition = InputOrderField_TimeCondition;
            
    ///GTD日期
    // TThostFtdcDateType char[9]
    if( InputOrderField_GTDDate != NULL ) {
        if(InputOrderField_GTDDate_len > (Py_ssize_t)sizeof(self->data.GTDDate)) {
            PyErr_Format(PyExc_ValueError, "GTDDate too long: length=%zd (max allowed is %zd)", InputOrderField_GTDDate_len, (Py_ssize_t)sizeof(self->data.GTDDate));
            return -1;
        }
        // memset(self->data.GTDDate, 0, sizeof(self->data.GTDDate));
        // memcpy(self->data.GTDDate, InputOrderField_GTDDate, InputOrderField_GTDDate_len);        
        strncpy(self->data.GTDDate, InputOrderField_GTDDate, sizeof(self->data.GTDDate) );
        InputOrderField_GTDDate = NULL;
    }
            
    ///成交量类型
    // TThostFtdcVolumeConditionType char
    self->data.VolumeCondition = InputOrderField_VolumeCondition;
            
    ///最小成交量
    // TThostFtdcVolumeType int
    self->data.MinVolume = InputOrderField_MinVolume;
        
    ///触发条件
    // TThostFtdcContingentConditionType char
    self->data.ContingentCondition = InputOrderField_ContingentCondition;
            
    ///止损价
    // TThostFtdcPriceType double
    self->data.StopPrice = InputOrderField_StopPrice;
        
    ///强平原因
    // TThostFtdcForceCloseReasonType char
    self->data.ForceCloseReason = InputOrderField_ForceCloseReason;
            
    ///自动挂起标志
    // TThostFtdcBoolType int
    self->data.IsAutoSuspend = InputOrderField_IsAutoSuspend;
        
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    if( InputOrderField_BusinessUnit != NULL ) {
        if(InputOrderField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", InputOrderField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
            return -1;
        }
        // memset(self->data.BusinessUnit, 0, sizeof(self->data.BusinessUnit));
        // memcpy(self->data.BusinessUnit, InputOrderField_BusinessUnit, InputOrderField_BusinessUnit_len);        
        strncpy(self->data.BusinessUnit, InputOrderField_BusinessUnit, sizeof(self->data.BusinessUnit) );
        InputOrderField_BusinessUnit = NULL;
    }
            
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = InputOrderField_RequestID;
        
    ///用户强平标志
    // TThostFtdcBoolType int
    self->data.UserForceClose = InputOrderField_UserForceClose;
        
    ///互换单标志
    // TThostFtdcBoolType int
    self->data.IsSwapOrder = InputOrderField_IsSwapOrder;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( InputOrderField_ExchangeID != NULL ) {
        if(InputOrderField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", InputOrderField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, InputOrderField_ExchangeID, InputOrderField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, InputOrderField_ExchangeID, sizeof(self->data.ExchangeID) );
        InputOrderField_ExchangeID = NULL;
    }
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( InputOrderField_InvestUnitID != NULL ) {
        if(InputOrderField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", InputOrderField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, InputOrderField_InvestUnitID, InputOrderField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, InputOrderField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        InputOrderField_InvestUnitID = NULL;
    }
            
    ///资金账号
    // TThostFtdcAccountIDType char[13]
    if( InputOrderField_AccountID != NULL ) {
        if(InputOrderField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", InputOrderField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
            return -1;
        }
        // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
        // memcpy(self->data.AccountID, InputOrderField_AccountID, InputOrderField_AccountID_len);        
        strncpy(self->data.AccountID, InputOrderField_AccountID, sizeof(self->data.AccountID) );
        InputOrderField_AccountID = NULL;
    }
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( InputOrderField_CurrencyID != NULL ) {
        if(InputOrderField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", InputOrderField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, InputOrderField_CurrencyID, InputOrderField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, InputOrderField_CurrencyID, sizeof(self->data.CurrencyID) );
        InputOrderField_CurrencyID = NULL;
    }
            
    ///交易编码
    // TThostFtdcClientIDType char[11]
    if( InputOrderField_ClientID != NULL ) {
        if(InputOrderField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", InputOrderField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
            return -1;
        }
        // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
        // memcpy(self->data.ClientID, InputOrderField_ClientID, InputOrderField_ClientID_len);        
        strncpy(self->data.ClientID, InputOrderField_ClientID, sizeof(self->data.ClientID) );
        InputOrderField_ClientID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    if( InputOrderField_reserve2 != NULL ) {
        if(InputOrderField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", InputOrderField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
            return -1;
        }
        // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
        // memcpy(self->data.reserve2, InputOrderField_reserve2, InputOrderField_reserve2_len);        
        strncpy(self->data.reserve2, InputOrderField_reserve2, sizeof(self->data.reserve2) );
        InputOrderField_reserve2 = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( InputOrderField_MacAddress != NULL ) {
        if(InputOrderField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", InputOrderField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, InputOrderField_MacAddress, InputOrderField_MacAddress_len);        
        strncpy(self->data.MacAddress, InputOrderField_MacAddress, sizeof(self->data.MacAddress) );
        InputOrderField_MacAddress = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( InputOrderField_InstrumentID != NULL ) {
        if(InputOrderField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", InputOrderField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, InputOrderField_InstrumentID, InputOrderField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, InputOrderField_InstrumentID, sizeof(self->data.InstrumentID) );
        InputOrderField_InstrumentID = NULL;
    }
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( InputOrderField_IPAddress != NULL ) {
        if(InputOrderField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", InputOrderField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, InputOrderField_IPAddress, InputOrderField_IPAddress_len);        
        strncpy(self->data.IPAddress, InputOrderField_IPAddress, sizeof(self->data.IPAddress) );
        InputOrderField_IPAddress = NULL;
    }
            
    ///报单回显字段
    // TThostFtdcOrderMemoType char[13]
    if( InputOrderField_OrderMemo != NULL ) {
        if(InputOrderField_OrderMemo_len > (Py_ssize_t)sizeof(self->data.OrderMemo)) {
            PyErr_Format(PyExc_ValueError, "OrderMemo too long: length=%zd (max allowed is %zd)", InputOrderField_OrderMemo_len, (Py_ssize_t)sizeof(self->data.OrderMemo));
            return -1;
        }
        // memset(self->data.OrderMemo, 0, sizeof(self->data.OrderMemo));
        // memcpy(self->data.OrderMemo, InputOrderField_OrderMemo, InputOrderField_OrderMemo_len);        
        strncpy(self->data.OrderMemo, InputOrderField_OrderMemo, sizeof(self->data.OrderMemo) );
        InputOrderField_OrderMemo = NULL;
    }
            
    ///session上请求计数 api自动维护
    // TThostFtdcSequenceNo12Type int
    self->data.SessionReqSeq = InputOrderField_SessionReqSeq;
        

    return 0;
}

static void PyCThostFtdcInputOrderField_dealloc(PyCThostFtdcInputOrderField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInputOrderField_repr(PyCThostFtdcInputOrderField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:c,s:c,s:y,s:y,s:d,s:i,s:c,s:y,s:c,s:i,s:c,s:d,s:c,s:i,s:y,s:i,s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:c,s:c,s:s,s:s,s:d,s:i,s:c,s:s,s:c,s:i,s:c,s:d,s:c,s:i,s:s,s:i,s:i,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"OrderRef", self->data.OrderRef//, (Py_ssize_t)sizeof(self->data.OrderRef) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"OrderPriceType", self->data.OrderPriceType 
        ,"Direction", self->data.Direction 
        ,"CombOffsetFlag", self->data.CombOffsetFlag//, (Py_ssize_t)sizeof(self->data.CombOffsetFlag) 
        ,"CombHedgeFlag", self->data.CombHedgeFlag//, (Py_ssize_t)sizeof(self->data.CombHedgeFlag) 
        ,"LimitPrice", self->data.LimitPrice 
        ,"VolumeTotalOriginal", self->data.VolumeTotalOriginal 
        ,"TimeCondition", self->data.TimeCondition 
        ,"GTDDate", self->data.GTDDate//, (Py_ssize_t)sizeof(self->data.GTDDate) 
        ,"VolumeCondition", self->data.VolumeCondition 
        ,"MinVolume", self->data.MinVolume 
        ,"ContingentCondition", self->data.ContingentCondition 
        ,"StopPrice", self->data.StopPrice 
        ,"ForceCloseReason", self->data.ForceCloseReason 
        ,"IsAutoSuspend", self->data.IsAutoSuspend 
        ,"BusinessUnit", self->data.BusinessUnit//, (Py_ssize_t)sizeof(self->data.BusinessUnit) 
        ,"RequestID", self->data.RequestID 
        ,"UserForceClose", self->data.UserForceClose 
        ,"IsSwapOrder", self->data.IsSwapOrder 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"InvestUnitID", self->data.InvestUnitID//, (Py_ssize_t)sizeof(self->data.InvestUnitID) 
        ,"AccountID", self->data.AccountID//, (Py_ssize_t)sizeof(self->data.AccountID) 
        ,"CurrencyID", self->data.CurrencyID//, (Py_ssize_t)sizeof(self->data.CurrencyID) 
        ,"ClientID", self->data.ClientID//, (Py_ssize_t)sizeof(self->data.ClientID) 
        ,"reserve2", self->data.reserve2//, (Py_ssize_t)sizeof(self->data.reserve2) 
        ,"MacAddress", self->data.MacAddress//, (Py_ssize_t)sizeof(self->data.MacAddress) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"IPAddress", self->data.IPAddress//, (Py_ssize_t)sizeof(self->data.IPAddress) 
        ,"OrderMemo", self->data.OrderMemo//, (Py_ssize_t)sizeof(self->data.OrderMemo) 
        ,"SessionReqSeq", self->data.SessionReqSeq 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputOrderField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcInputOrderField_get_BrokerID(PyCThostFtdcInputOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcInputOrderField_set_BrokerID(PyCThostFtdcInputOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputOrderField_get_InvestorID(PyCThostFtdcInputOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcInputOrderField_set_InvestorID(PyCThostFtdcInputOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputOrderField_get_reserve1(PyCThostFtdcInputOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcInputOrderField_set_reserve1(PyCThostFtdcInputOrderField *self, PyObject* val, void *closure) {
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
            
///报单引用
// TThostFtdcOrderRefType char[13]
static PyObject *PyCThostFtdcInputOrderField_get_OrderRef(PyCThostFtdcInputOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderRef, (Py_ssize_t)sizeof(self->data.OrderRef));
    return PyBytes_FromString(self->data.OrderRef);
}

///报单引用
// TThostFtdcOrderRefType char[13]
static int PyCThostFtdcInputOrderField_set_OrderRef(PyCThostFtdcInputOrderField *self, PyObject* val, void *closure) {
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
            
///用户代码
// TThostFtdcUserIDType char[16]
static PyObject *PyCThostFtdcInputOrderField_get_UserID(PyCThostFtdcInputOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcInputOrderField_set_UserID(PyCThostFtdcInputOrderField *self, PyObject* val, void *closure) {
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
            
///报单价格条件
// TThostFtdcOrderPriceTypeType char
static PyObject *PyCThostFtdcInputOrderField_get_OrderPriceType(PyCThostFtdcInputOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OrderPriceType), 1);
}

///报单价格条件
// TThostFtdcOrderPriceTypeType char
static int PyCThostFtdcInputOrderField_set_OrderPriceType(PyCThostFtdcInputOrderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderPriceType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OrderPriceType)) {
        PyErr_SetString(PyExc_ValueError, "OrderPriceType must be equal 1 bytes");
        return -1;
    }
    self->data.OrderPriceType = *buf;
    return 0;
}
            
///买卖方向
// TThostFtdcDirectionType char
static PyObject *PyCThostFtdcInputOrderField_get_Direction(PyCThostFtdcInputOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

///买卖方向
// TThostFtdcDirectionType char
static int PyCThostFtdcInputOrderField_set_Direction(PyCThostFtdcInputOrderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Direction Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Direction)) {
        PyErr_SetString(PyExc_ValueError, "Direction must be equal 1 bytes");
        return -1;
    }
    self->data.Direction = *buf;
    return 0;
}
            
///组合开平标志
// TThostFtdcCombOffsetFlagType char[5]
static PyObject *PyCThostFtdcInputOrderField_get_CombOffsetFlag(PyCThostFtdcInputOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CombOffsetFlag, (Py_ssize_t)sizeof(self->data.CombOffsetFlag));
    return PyBytes_FromString(self->data.CombOffsetFlag);
}

///组合开平标志
// TThostFtdcCombOffsetFlagType char[5]
static int PyCThostFtdcInputOrderField_set_CombOffsetFlag(PyCThostFtdcInputOrderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CombOffsetFlag Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CombOffsetFlag)) {
        PyErr_SetString(PyExc_ValueError, "CombOffsetFlag must be less than 5 bytes");
        return -1;
    }
    // memset(self->data.CombOffsetFlag, 0, sizeof(self->data.CombOffsetFlag));
    // memcpy(self->data.CombOffsetFlag, buf, len);
    strncpy(self->data.CombOffsetFlag, buf, sizeof(self->data.CombOffsetFlag));
    return 0;
}
            
///组合投机套保标志
// TThostFtdcCombHedgeFlagType char[5]
static PyObject *PyCThostFtdcInputOrderField_get_CombHedgeFlag(PyCThostFtdcInputOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CombHedgeFlag, (Py_ssize_t)sizeof(self->data.CombHedgeFlag));
    return PyBytes_FromString(self->data.CombHedgeFlag);
}

///组合投机套保标志
// TThostFtdcCombHedgeFlagType char[5]
static int PyCThostFtdcInputOrderField_set_CombHedgeFlag(PyCThostFtdcInputOrderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CombHedgeFlag Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CombHedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "CombHedgeFlag must be less than 5 bytes");
        return -1;
    }
    // memset(self->data.CombHedgeFlag, 0, sizeof(self->data.CombHedgeFlag));
    // memcpy(self->data.CombHedgeFlag, buf, len);
    strncpy(self->data.CombHedgeFlag, buf, sizeof(self->data.CombHedgeFlag));
    return 0;
}
            
///价格
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcInputOrderField_get_LimitPrice(PyCThostFtdcInputOrderField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LimitPrice);
}

///价格
// TThostFtdcPriceType double
static int PyCThostFtdcInputOrderField_set_LimitPrice(PyCThostFtdcInputOrderField *self, PyObject* val, void *closure) {
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
        
///数量
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcInputOrderField_get_VolumeTotalOriginal(PyCThostFtdcInputOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.VolumeTotalOriginal);
#else
    return PyInt_FromLong(self->data.VolumeTotalOriginal);
#endif
}

///数量
// TThostFtdcVolumeType int
static int PyCThostFtdcInputOrderField_set_VolumeTotalOriginal(PyCThostFtdcInputOrderField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "VolumeTotalOriginal Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "VolumeTotalOriginal Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the VolumeTotalOriginal value out of range for C int");
        return -1;
    }
    self->data.VolumeTotalOriginal = (int)buf;
    return 0;
}
        
///有效期类型
// TThostFtdcTimeConditionType char
static PyObject *PyCThostFtdcInputOrderField_get_TimeCondition(PyCThostFtdcInputOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.TimeCondition), 1);
}

///有效期类型
// TThostFtdcTimeConditionType char
static int PyCThostFtdcInputOrderField_set_TimeCondition(PyCThostFtdcInputOrderField *self, PyObject* val, void *closure) {
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
            
///GTD日期
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcInputOrderField_get_GTDDate(PyCThostFtdcInputOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.GTDDate, (Py_ssize_t)sizeof(self->data.GTDDate));
    return PyBytes_FromString(self->data.GTDDate);
}

///GTD日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcInputOrderField_set_GTDDate(PyCThostFtdcInputOrderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "GTDDate Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.GTDDate)) {
        PyErr_SetString(PyExc_ValueError, "GTDDate must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.GTDDate, 0, sizeof(self->data.GTDDate));
    // memcpy(self->data.GTDDate, buf, len);
    strncpy(self->data.GTDDate, buf, sizeof(self->data.GTDDate));
    return 0;
}
            
///成交量类型
// TThostFtdcVolumeConditionType char
static PyObject *PyCThostFtdcInputOrderField_get_VolumeCondition(PyCThostFtdcInputOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.VolumeCondition), 1);
}

///成交量类型
// TThostFtdcVolumeConditionType char
static int PyCThostFtdcInputOrderField_set_VolumeCondition(PyCThostFtdcInputOrderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "VolumeCondition Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.VolumeCondition)) {
        PyErr_SetString(PyExc_ValueError, "VolumeCondition must be equal 1 bytes");
        return -1;
    }
    self->data.VolumeCondition = *buf;
    return 0;
}
            
///最小成交量
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcInputOrderField_get_MinVolume(PyCThostFtdcInputOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.MinVolume);
#else
    return PyInt_FromLong(self->data.MinVolume);
#endif
}

///最小成交量
// TThostFtdcVolumeType int
static int PyCThostFtdcInputOrderField_set_MinVolume(PyCThostFtdcInputOrderField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MinVolume Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MinVolume Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the MinVolume value out of range for C int");
        return -1;
    }
    self->data.MinVolume = (int)buf;
    return 0;
}
        
///触发条件
// TThostFtdcContingentConditionType char
static PyObject *PyCThostFtdcInputOrderField_get_ContingentCondition(PyCThostFtdcInputOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ContingentCondition), 1);
}

///触发条件
// TThostFtdcContingentConditionType char
static int PyCThostFtdcInputOrderField_set_ContingentCondition(PyCThostFtdcInputOrderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ContingentCondition Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ContingentCondition)) {
        PyErr_SetString(PyExc_ValueError, "ContingentCondition must be equal 1 bytes");
        return -1;
    }
    self->data.ContingentCondition = *buf;
    return 0;
}
            
///止损价
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcInputOrderField_get_StopPrice(PyCThostFtdcInputOrderField *self, void *closure) {
    return PyFloat_FromDouble(self->data.StopPrice);
}

///止损价
// TThostFtdcPriceType double
static int PyCThostFtdcInputOrderField_set_StopPrice(PyCThostFtdcInputOrderField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "StopPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.StopPrice = buf;
    return 0;
}
        
///强平原因
// TThostFtdcForceCloseReasonType char
static PyObject *PyCThostFtdcInputOrderField_get_ForceCloseReason(PyCThostFtdcInputOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ForceCloseReason), 1);
}

///强平原因
// TThostFtdcForceCloseReasonType char
static int PyCThostFtdcInputOrderField_set_ForceCloseReason(PyCThostFtdcInputOrderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ForceCloseReason Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ForceCloseReason)) {
        PyErr_SetString(PyExc_ValueError, "ForceCloseReason must be equal 1 bytes");
        return -1;
    }
    self->data.ForceCloseReason = *buf;
    return 0;
}
            
///自动挂起标志
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcInputOrderField_get_IsAutoSuspend(PyCThostFtdcInputOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsAutoSuspend);
#else
    return PyInt_FromLong(self->data.IsAutoSuspend);
#endif
}

///自动挂起标志
// TThostFtdcBoolType int
static int PyCThostFtdcInputOrderField_set_IsAutoSuspend(PyCThostFtdcInputOrderField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsAutoSuspend Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsAutoSuspend Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the IsAutoSuspend value out of range for C int");
        return -1;
    }
    self->data.IsAutoSuspend = (int)buf;
    return 0;
}
        
///业务单元
// TThostFtdcBusinessUnitType char[21]
static PyObject *PyCThostFtdcInputOrderField_get_BusinessUnit(PyCThostFtdcInputOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BusinessUnit, (Py_ssize_t)sizeof(self->data.BusinessUnit));
    return PyBytes_FromString(self->data.BusinessUnit);
}

///业务单元
// TThostFtdcBusinessUnitType char[21]
static int PyCThostFtdcInputOrderField_set_BusinessUnit(PyCThostFtdcInputOrderField *self, PyObject* val, void *closure) {
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
            
///请求编号
// TThostFtdcRequestIDType int
static PyObject *PyCThostFtdcInputOrderField_get_RequestID(PyCThostFtdcInputOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcInputOrderField_set_RequestID(PyCThostFtdcInputOrderField *self, PyObject* val, void *closure) {
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
        
///用户强平标志
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcInputOrderField_get_UserForceClose(PyCThostFtdcInputOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.UserForceClose);
#else
    return PyInt_FromLong(self->data.UserForceClose);
#endif
}

///用户强平标志
// TThostFtdcBoolType int
static int PyCThostFtdcInputOrderField_set_UserForceClose(PyCThostFtdcInputOrderField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UserForceClose Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UserForceClose Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the UserForceClose value out of range for C int");
        return -1;
    }
    self->data.UserForceClose = (int)buf;
    return 0;
}
        
///互换单标志
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcInputOrderField_get_IsSwapOrder(PyCThostFtdcInputOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsSwapOrder);
#else
    return PyInt_FromLong(self->data.IsSwapOrder);
#endif
}

///互换单标志
// TThostFtdcBoolType int
static int PyCThostFtdcInputOrderField_set_IsSwapOrder(PyCThostFtdcInputOrderField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsSwapOrder Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsSwapOrder Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the IsSwapOrder value out of range for C int");
        return -1;
    }
    self->data.IsSwapOrder = (int)buf;
    return 0;
}
        
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcInputOrderField_get_ExchangeID(PyCThostFtdcInputOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcInputOrderField_set_ExchangeID(PyCThostFtdcInputOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputOrderField_get_InvestUnitID(PyCThostFtdcInputOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcInputOrderField_set_InvestUnitID(PyCThostFtdcInputOrderField *self, PyObject* val, void *closure) {
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
            
///资金账号
// TThostFtdcAccountIDType char[13]
static PyObject *PyCThostFtdcInputOrderField_get_AccountID(PyCThostFtdcInputOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AccountID, (Py_ssize_t)sizeof(self->data.AccountID));
    return PyBytes_FromString(self->data.AccountID);
}

///资金账号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcInputOrderField_set_AccountID(PyCThostFtdcInputOrderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
    // memcpy(self->data.AccountID, buf, len);
    strncpy(self->data.AccountID, buf, sizeof(self->data.AccountID));
    return 0;
}
            
///币种代码
// TThostFtdcCurrencyIDType char[4]
static PyObject *PyCThostFtdcInputOrderField_get_CurrencyID(PyCThostFtdcInputOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcInputOrderField_set_CurrencyID(PyCThostFtdcInputOrderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 4 bytes");
        return -1;
    }
    // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
    // memcpy(self->data.CurrencyID, buf, len);
    strncpy(self->data.CurrencyID, buf, sizeof(self->data.CurrencyID));
    return 0;
}
            
///交易编码
// TThostFtdcClientIDType char[11]
static PyObject *PyCThostFtdcInputOrderField_get_ClientID(PyCThostFtdcInputOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientID, (Py_ssize_t)sizeof(self->data.ClientID));
    return PyBytes_FromString(self->data.ClientID);
}

///交易编码
// TThostFtdcClientIDType char[11]
static int PyCThostFtdcInputOrderField_set_ClientID(PyCThostFtdcInputOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputOrderField_get_reserve2(PyCThostFtdcInputOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve2, (Py_ssize_t)sizeof(self->data.reserve2));
    return PyBytes_FromString(self->data.reserve2);
}

///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static int PyCThostFtdcInputOrderField_set_reserve2(PyCThostFtdcInputOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputOrderField_get_MacAddress(PyCThostFtdcInputOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcInputOrderField_set_MacAddress(PyCThostFtdcInputOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputOrderField_get_InstrumentID(PyCThostFtdcInputOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcInputOrderField_set_InstrumentID(PyCThostFtdcInputOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputOrderField_get_IPAddress(PyCThostFtdcInputOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcInputOrderField_set_IPAddress(PyCThostFtdcInputOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputOrderField_get_OrderMemo(PyCThostFtdcInputOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderMemo, (Py_ssize_t)sizeof(self->data.OrderMemo));
    return PyBytes_FromString(self->data.OrderMemo);
}

///报单回显字段
// TThostFtdcOrderMemoType char[13]
static int PyCThostFtdcInputOrderField_set_OrderMemo(PyCThostFtdcInputOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputOrderField_get_SessionReqSeq(PyCThostFtdcInputOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionReqSeq);
#else
    return PyInt_FromLong(self->data.SessionReqSeq);
#endif
}

///session上请求计数 api自动维护
// TThostFtdcSequenceNo12Type int
static int PyCThostFtdcInputOrderField_set_SessionReqSeq(PyCThostFtdcInputOrderField *self, PyObject* val, void *closure) {
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
        

static PyGetSetDef PyCThostFtdcInputOrderField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcInputOrderField_get_BrokerID, (setter)PyCThostFtdcInputOrderField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcInputOrderField_get_InvestorID, (setter)PyCThostFtdcInputOrderField_set_InvestorID, (char *)"InvestorID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcInputOrderField_get_reserve1, (setter)PyCThostFtdcInputOrderField_set_reserve1, (char *)"reserve1", NULL},
    ///报单引用 
    {(char *)"OrderRef", (getter)PyCThostFtdcInputOrderField_get_OrderRef, (setter)PyCThostFtdcInputOrderField_set_OrderRef, (char *)"OrderRef", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcInputOrderField_get_UserID, (setter)PyCThostFtdcInputOrderField_set_UserID, (char *)"UserID", NULL},
    ///报单价格条件 
    {(char *)"OrderPriceType", (getter)PyCThostFtdcInputOrderField_get_OrderPriceType, (setter)PyCThostFtdcInputOrderField_set_OrderPriceType, (char *)"OrderPriceType", NULL},
    ///买卖方向 
    {(char *)"Direction", (getter)PyCThostFtdcInputOrderField_get_Direction, (setter)PyCThostFtdcInputOrderField_set_Direction, (char *)"Direction", NULL},
    ///组合开平标志 
    {(char *)"CombOffsetFlag", (getter)PyCThostFtdcInputOrderField_get_CombOffsetFlag, (setter)PyCThostFtdcInputOrderField_set_CombOffsetFlag, (char *)"CombOffsetFlag", NULL},
    ///组合投机套保标志 
    {(char *)"CombHedgeFlag", (getter)PyCThostFtdcInputOrderField_get_CombHedgeFlag, (setter)PyCThostFtdcInputOrderField_set_CombHedgeFlag, (char *)"CombHedgeFlag", NULL},
    ///价格 
    {(char *)"LimitPrice", (getter)PyCThostFtdcInputOrderField_get_LimitPrice, (setter)PyCThostFtdcInputOrderField_set_LimitPrice, (char *)"LimitPrice", NULL},
    ///数量 
    {(char *)"VolumeTotalOriginal", (getter)PyCThostFtdcInputOrderField_get_VolumeTotalOriginal, (setter)PyCThostFtdcInputOrderField_set_VolumeTotalOriginal, (char *)"VolumeTotalOriginal", NULL},
    ///有效期类型 
    {(char *)"TimeCondition", (getter)PyCThostFtdcInputOrderField_get_TimeCondition, (setter)PyCThostFtdcInputOrderField_set_TimeCondition, (char *)"TimeCondition", NULL},
    ///GTD日期 
    {(char *)"GTDDate", (getter)PyCThostFtdcInputOrderField_get_GTDDate, (setter)PyCThostFtdcInputOrderField_set_GTDDate, (char *)"GTDDate", NULL},
    ///成交量类型 
    {(char *)"VolumeCondition", (getter)PyCThostFtdcInputOrderField_get_VolumeCondition, (setter)PyCThostFtdcInputOrderField_set_VolumeCondition, (char *)"VolumeCondition", NULL},
    ///最小成交量 
    {(char *)"MinVolume", (getter)PyCThostFtdcInputOrderField_get_MinVolume, (setter)PyCThostFtdcInputOrderField_set_MinVolume, (char *)"MinVolume", NULL},
    ///触发条件 
    {(char *)"ContingentCondition", (getter)PyCThostFtdcInputOrderField_get_ContingentCondition, (setter)PyCThostFtdcInputOrderField_set_ContingentCondition, (char *)"ContingentCondition", NULL},
    ///止损价 
    {(char *)"StopPrice", (getter)PyCThostFtdcInputOrderField_get_StopPrice, (setter)PyCThostFtdcInputOrderField_set_StopPrice, (char *)"StopPrice", NULL},
    ///强平原因 
    {(char *)"ForceCloseReason", (getter)PyCThostFtdcInputOrderField_get_ForceCloseReason, (setter)PyCThostFtdcInputOrderField_set_ForceCloseReason, (char *)"ForceCloseReason", NULL},
    ///自动挂起标志 
    {(char *)"IsAutoSuspend", (getter)PyCThostFtdcInputOrderField_get_IsAutoSuspend, (setter)PyCThostFtdcInputOrderField_set_IsAutoSuspend, (char *)"IsAutoSuspend", NULL},
    ///业务单元 
    {(char *)"BusinessUnit", (getter)PyCThostFtdcInputOrderField_get_BusinessUnit, (setter)PyCThostFtdcInputOrderField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcInputOrderField_get_RequestID, (setter)PyCThostFtdcInputOrderField_set_RequestID, (char *)"RequestID", NULL},
    ///用户强平标志 
    {(char *)"UserForceClose", (getter)PyCThostFtdcInputOrderField_get_UserForceClose, (setter)PyCThostFtdcInputOrderField_set_UserForceClose, (char *)"UserForceClose", NULL},
    ///互换单标志 
    {(char *)"IsSwapOrder", (getter)PyCThostFtdcInputOrderField_get_IsSwapOrder, (setter)PyCThostFtdcInputOrderField_set_IsSwapOrder, (char *)"IsSwapOrder", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcInputOrderField_get_ExchangeID, (setter)PyCThostFtdcInputOrderField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcInputOrderField_get_InvestUnitID, (setter)PyCThostFtdcInputOrderField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///资金账号 
    {(char *)"AccountID", (getter)PyCThostFtdcInputOrderField_get_AccountID, (setter)PyCThostFtdcInputOrderField_set_AccountID, (char *)"AccountID", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcInputOrderField_get_CurrencyID, (setter)PyCThostFtdcInputOrderField_set_CurrencyID, (char *)"CurrencyID", NULL},
    ///交易编码 
    {(char *)"ClientID", (getter)PyCThostFtdcInputOrderField_get_ClientID, (setter)PyCThostFtdcInputOrderField_set_ClientID, (char *)"ClientID", NULL},
    ///保留的无效字段 
    {(char *)"reserve2", (getter)PyCThostFtdcInputOrderField_get_reserve2, (setter)PyCThostFtdcInputOrderField_set_reserve2, (char *)"reserve2", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcInputOrderField_get_MacAddress, (setter)PyCThostFtdcInputOrderField_set_MacAddress, (char *)"MacAddress", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcInputOrderField_get_InstrumentID, (setter)PyCThostFtdcInputOrderField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcInputOrderField_get_IPAddress, (setter)PyCThostFtdcInputOrderField_set_IPAddress, (char *)"IPAddress", NULL},
    ///报单回显字段 
    {(char *)"OrderMemo", (getter)PyCThostFtdcInputOrderField_get_OrderMemo, (setter)PyCThostFtdcInputOrderField_set_OrderMemo, (char *)"OrderMemo", NULL},
    ///session上请求计数 api自动维护 
    {(char *)"SessionReqSeq", (getter)PyCThostFtdcInputOrderField_get_SessionReqSeq, (setter)PyCThostFtdcInputOrderField_set_SessionReqSeq, (char *)"SessionReqSeq", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInputOrderFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInputOrderField",	/* tp_name */
	sizeof(PyCThostFtdcInputOrderField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInputOrderField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInputOrderField_repr,   /* tp_repr */
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
	"CThostFtdcInputOrderField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInputOrderField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInputOrderField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInputOrderField_new,       /* tp_new */
};

int PyCThostFtdcInputOrderFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInputOrderField  */
	if (PyType_Ready(&PyCThostFtdcInputOrderFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInputOrderField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInputOrderFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInputOrderField", (PyObject *)&PyCThostFtdcInputOrderFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInputOrderField to module");
        Py_DECREF(&PyCThostFtdcInputOrderFieldType);
		return -1;
    }

    return 0;
}
