
#include "PyCThostFtdcParkedOrderField.h"

///预埋单

static PyObject *PyCThostFtdcParkedOrderField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcParkedOrderField *self = (PyCThostFtdcParkedOrderField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcParkedOrderField_init(PyCThostFtdcParkedOrderField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "OrderRef", "UserID", "OrderPriceType", "Direction", "CombOffsetFlag", "CombHedgeFlag", "LimitPrice", "VolumeTotalOriginal", "TimeCondition", "GTDDate", "VolumeCondition", "MinVolume", "ContingentCondition", "StopPrice", "ForceCloseReason", "IsAutoSuspend", "BusinessUnit", "RequestID", "UserForceClose", "ExchangeID", "ParkedOrderID", "UserType", "Status", "ErrorID", "ErrorMsg", "IsSwapOrder", "AccountID", "CurrencyID", "ClientID", "InvestUnitID", "reserve2", "MacAddress", "InstrumentID", "IPAddress",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *ParkedOrderField_BrokerID = NULL;
    Py_ssize_t ParkedOrderField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *ParkedOrderField_InvestorID = NULL;
    Py_ssize_t ParkedOrderField_InvestorID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *ParkedOrderField_reserve1 = NULL;
    Py_ssize_t ParkedOrderField_reserve1_len = 0;
            
    ///报单引用
    // TThostFtdcOrderRefType char[13]
    const char *ParkedOrderField_OrderRef = NULL;
    Py_ssize_t ParkedOrderField_OrderRef_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *ParkedOrderField_UserID = NULL;
    Py_ssize_t ParkedOrderField_UserID_len = 0;
            
    ///报单价格条件
    // TThostFtdcOrderPriceTypeType char
    char ParkedOrderField_OrderPriceType = 0;
            
    ///买卖方向
    // TThostFtdcDirectionType char
    char ParkedOrderField_Direction = 0;
            
    ///组合开平标志
    // TThostFtdcCombOffsetFlagType char[5]
    const char *ParkedOrderField_CombOffsetFlag = NULL;
    Py_ssize_t ParkedOrderField_CombOffsetFlag_len = 0;
            
    ///组合投机套保标志
    // TThostFtdcCombHedgeFlagType char[5]
    const char *ParkedOrderField_CombHedgeFlag = NULL;
    Py_ssize_t ParkedOrderField_CombHedgeFlag_len = 0;
            
    ///价格
    // TThostFtdcPriceType double
    double ParkedOrderField_LimitPrice = 0.0;
        
    ///数量
    // TThostFtdcVolumeType int
    int ParkedOrderField_VolumeTotalOriginal = 0;
        
    ///有效期类型
    // TThostFtdcTimeConditionType char
    char ParkedOrderField_TimeCondition = 0;
            
    ///GTD日期
    // TThostFtdcDateType char[9]
    const char *ParkedOrderField_GTDDate = NULL;
    Py_ssize_t ParkedOrderField_GTDDate_len = 0;
            
    ///成交量类型
    // TThostFtdcVolumeConditionType char
    char ParkedOrderField_VolumeCondition = 0;
            
    ///最小成交量
    // TThostFtdcVolumeType int
    int ParkedOrderField_MinVolume = 0;
        
    ///触发条件
    // TThostFtdcContingentConditionType char
    char ParkedOrderField_ContingentCondition = 0;
            
    ///止损价
    // TThostFtdcPriceType double
    double ParkedOrderField_StopPrice = 0.0;
        
    ///强平原因
    // TThostFtdcForceCloseReasonType char
    char ParkedOrderField_ForceCloseReason = 0;
            
    ///自动挂起标志
    // TThostFtdcBoolType int
    int ParkedOrderField_IsAutoSuspend = 0;
        
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    const char *ParkedOrderField_BusinessUnit = NULL;
    Py_ssize_t ParkedOrderField_BusinessUnit_len = 0;
            
    ///请求编号
    // TThostFtdcRequestIDType int
    int ParkedOrderField_RequestID = 0;
        
    ///用户强平标志
    // TThostFtdcBoolType int
    int ParkedOrderField_UserForceClose = 0;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *ParkedOrderField_ExchangeID = NULL;
    Py_ssize_t ParkedOrderField_ExchangeID_len = 0;
            
    ///预埋报单编号
    // TThostFtdcParkedOrderIDType char[13]
    const char *ParkedOrderField_ParkedOrderID = NULL;
    Py_ssize_t ParkedOrderField_ParkedOrderID_len = 0;
            
    ///用户类型
    // TThostFtdcUserTypeType char
    char ParkedOrderField_UserType = 0;
            
    ///预埋单状态
    // TThostFtdcParkedOrderStatusType char
    char ParkedOrderField_Status = 0;
            
    ///错误代码
    // TThostFtdcErrorIDType int
    int ParkedOrderField_ErrorID = 0;
        
    ///错误信息
    // TThostFtdcErrorMsgType char[81]
    const char *ParkedOrderField_ErrorMsg = NULL;
    Py_ssize_t ParkedOrderField_ErrorMsg_len = 0;
            
    ///互换单标志
    // TThostFtdcBoolType int
    int ParkedOrderField_IsSwapOrder = 0;
        
    ///资金账号
    // TThostFtdcAccountIDType char[13]
    const char *ParkedOrderField_AccountID = NULL;
    Py_ssize_t ParkedOrderField_AccountID_len = 0;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *ParkedOrderField_CurrencyID = NULL;
    Py_ssize_t ParkedOrderField_CurrencyID_len = 0;
            
    ///交易编码
    // TThostFtdcClientIDType char[11]
    const char *ParkedOrderField_ClientID = NULL;
    Py_ssize_t ParkedOrderField_ClientID_len = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *ParkedOrderField_InvestUnitID = NULL;
    Py_ssize_t ParkedOrderField_InvestUnitID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    const char *ParkedOrderField_reserve2 = NULL;
    Py_ssize_t ParkedOrderField_reserve2_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *ParkedOrderField_MacAddress = NULL;
    Py_ssize_t ParkedOrderField_MacAddress_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *ParkedOrderField_InstrumentID = NULL;
    Py_ssize_t ParkedOrderField_InstrumentID_len = 0;
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *ParkedOrderField_IPAddress = NULL;
    Py_ssize_t ParkedOrderField_IPAddress_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#ccy#y#dicy#cicdciy#iiy#y#cciy#iy#y#y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#ccs#s#dics#cicdcis#iis#s#ccis#is#s#s#s#s#s#s#s#", (char **)kwlist
#endif

        , &ParkedOrderField_BrokerID, &ParkedOrderField_BrokerID_len 
        , &ParkedOrderField_InvestorID, &ParkedOrderField_InvestorID_len 
        , &ParkedOrderField_reserve1, &ParkedOrderField_reserve1_len 
        , &ParkedOrderField_OrderRef, &ParkedOrderField_OrderRef_len 
        , &ParkedOrderField_UserID, &ParkedOrderField_UserID_len 
        , &ParkedOrderField_OrderPriceType 
        , &ParkedOrderField_Direction 
        , &ParkedOrderField_CombOffsetFlag, &ParkedOrderField_CombOffsetFlag_len 
        , &ParkedOrderField_CombHedgeFlag, &ParkedOrderField_CombHedgeFlag_len 
        , &ParkedOrderField_LimitPrice 
        , &ParkedOrderField_VolumeTotalOriginal 
        , &ParkedOrderField_TimeCondition 
        , &ParkedOrderField_GTDDate, &ParkedOrderField_GTDDate_len 
        , &ParkedOrderField_VolumeCondition 
        , &ParkedOrderField_MinVolume 
        , &ParkedOrderField_ContingentCondition 
        , &ParkedOrderField_StopPrice 
        , &ParkedOrderField_ForceCloseReason 
        , &ParkedOrderField_IsAutoSuspend 
        , &ParkedOrderField_BusinessUnit, &ParkedOrderField_BusinessUnit_len 
        , &ParkedOrderField_RequestID 
        , &ParkedOrderField_UserForceClose 
        , &ParkedOrderField_ExchangeID, &ParkedOrderField_ExchangeID_len 
        , &ParkedOrderField_ParkedOrderID, &ParkedOrderField_ParkedOrderID_len 
        , &ParkedOrderField_UserType 
        , &ParkedOrderField_Status 
        , &ParkedOrderField_ErrorID 
        , &ParkedOrderField_ErrorMsg, &ParkedOrderField_ErrorMsg_len 
        , &ParkedOrderField_IsSwapOrder 
        , &ParkedOrderField_AccountID, &ParkedOrderField_AccountID_len 
        , &ParkedOrderField_CurrencyID, &ParkedOrderField_CurrencyID_len 
        , &ParkedOrderField_ClientID, &ParkedOrderField_ClientID_len 
        , &ParkedOrderField_InvestUnitID, &ParkedOrderField_InvestUnitID_len 
        , &ParkedOrderField_reserve2, &ParkedOrderField_reserve2_len 
        , &ParkedOrderField_MacAddress, &ParkedOrderField_MacAddress_len 
        , &ParkedOrderField_InstrumentID, &ParkedOrderField_InstrumentID_len 
        , &ParkedOrderField_IPAddress, &ParkedOrderField_IPAddress_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( ParkedOrderField_BrokerID != NULL ) {
        if(ParkedOrderField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", ParkedOrderField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, ParkedOrderField_BrokerID, ParkedOrderField_BrokerID_len);        
        strncpy(self->data.BrokerID, ParkedOrderField_BrokerID, sizeof(self->data.BrokerID) );
        ParkedOrderField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( ParkedOrderField_InvestorID != NULL ) {
        if(ParkedOrderField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", ParkedOrderField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, ParkedOrderField_InvestorID, ParkedOrderField_InvestorID_len);        
        strncpy(self->data.InvestorID, ParkedOrderField_InvestorID, sizeof(self->data.InvestorID) );
        ParkedOrderField_InvestorID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( ParkedOrderField_reserve1 != NULL ) {
        if(ParkedOrderField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", ParkedOrderField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, ParkedOrderField_reserve1, ParkedOrderField_reserve1_len);        
        strncpy(self->data.reserve1, ParkedOrderField_reserve1, sizeof(self->data.reserve1) );
        ParkedOrderField_reserve1 = NULL;
    }
            
    ///报单引用
    // TThostFtdcOrderRefType char[13]
    if( ParkedOrderField_OrderRef != NULL ) {
        if(ParkedOrderField_OrderRef_len > (Py_ssize_t)sizeof(self->data.OrderRef)) {
            PyErr_Format(PyExc_ValueError, "OrderRef too long: length=%zd (max allowed is %zd)", ParkedOrderField_OrderRef_len, (Py_ssize_t)sizeof(self->data.OrderRef));
            return -1;
        }
        // memset(self->data.OrderRef, 0, sizeof(self->data.OrderRef));
        // memcpy(self->data.OrderRef, ParkedOrderField_OrderRef, ParkedOrderField_OrderRef_len);        
        strncpy(self->data.OrderRef, ParkedOrderField_OrderRef, sizeof(self->data.OrderRef) );
        ParkedOrderField_OrderRef = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( ParkedOrderField_UserID != NULL ) {
        if(ParkedOrderField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", ParkedOrderField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, ParkedOrderField_UserID, ParkedOrderField_UserID_len);        
        strncpy(self->data.UserID, ParkedOrderField_UserID, sizeof(self->data.UserID) );
        ParkedOrderField_UserID = NULL;
    }
            
    ///报单价格条件
    // TThostFtdcOrderPriceTypeType char
    self->data.OrderPriceType = ParkedOrderField_OrderPriceType;
            
    ///买卖方向
    // TThostFtdcDirectionType char
    self->data.Direction = ParkedOrderField_Direction;
            
    ///组合开平标志
    // TThostFtdcCombOffsetFlagType char[5]
    if( ParkedOrderField_CombOffsetFlag != NULL ) {
        if(ParkedOrderField_CombOffsetFlag_len > (Py_ssize_t)sizeof(self->data.CombOffsetFlag)) {
            PyErr_Format(PyExc_ValueError, "CombOffsetFlag too long: length=%zd (max allowed is %zd)", ParkedOrderField_CombOffsetFlag_len, (Py_ssize_t)sizeof(self->data.CombOffsetFlag));
            return -1;
        }
        // memset(self->data.CombOffsetFlag, 0, sizeof(self->data.CombOffsetFlag));
        // memcpy(self->data.CombOffsetFlag, ParkedOrderField_CombOffsetFlag, ParkedOrderField_CombOffsetFlag_len);        
        strncpy(self->data.CombOffsetFlag, ParkedOrderField_CombOffsetFlag, sizeof(self->data.CombOffsetFlag) );
        ParkedOrderField_CombOffsetFlag = NULL;
    }
            
    ///组合投机套保标志
    // TThostFtdcCombHedgeFlagType char[5]
    if( ParkedOrderField_CombHedgeFlag != NULL ) {
        if(ParkedOrderField_CombHedgeFlag_len > (Py_ssize_t)sizeof(self->data.CombHedgeFlag)) {
            PyErr_Format(PyExc_ValueError, "CombHedgeFlag too long: length=%zd (max allowed is %zd)", ParkedOrderField_CombHedgeFlag_len, (Py_ssize_t)sizeof(self->data.CombHedgeFlag));
            return -1;
        }
        // memset(self->data.CombHedgeFlag, 0, sizeof(self->data.CombHedgeFlag));
        // memcpy(self->data.CombHedgeFlag, ParkedOrderField_CombHedgeFlag, ParkedOrderField_CombHedgeFlag_len);        
        strncpy(self->data.CombHedgeFlag, ParkedOrderField_CombHedgeFlag, sizeof(self->data.CombHedgeFlag) );
        ParkedOrderField_CombHedgeFlag = NULL;
    }
            
    ///价格
    // TThostFtdcPriceType double
    self->data.LimitPrice = ParkedOrderField_LimitPrice;
        
    ///数量
    // TThostFtdcVolumeType int
    self->data.VolumeTotalOriginal = ParkedOrderField_VolumeTotalOriginal;
        
    ///有效期类型
    // TThostFtdcTimeConditionType char
    self->data.TimeCondition = ParkedOrderField_TimeCondition;
            
    ///GTD日期
    // TThostFtdcDateType char[9]
    if( ParkedOrderField_GTDDate != NULL ) {
        if(ParkedOrderField_GTDDate_len > (Py_ssize_t)sizeof(self->data.GTDDate)) {
            PyErr_Format(PyExc_ValueError, "GTDDate too long: length=%zd (max allowed is %zd)", ParkedOrderField_GTDDate_len, (Py_ssize_t)sizeof(self->data.GTDDate));
            return -1;
        }
        // memset(self->data.GTDDate, 0, sizeof(self->data.GTDDate));
        // memcpy(self->data.GTDDate, ParkedOrderField_GTDDate, ParkedOrderField_GTDDate_len);        
        strncpy(self->data.GTDDate, ParkedOrderField_GTDDate, sizeof(self->data.GTDDate) );
        ParkedOrderField_GTDDate = NULL;
    }
            
    ///成交量类型
    // TThostFtdcVolumeConditionType char
    self->data.VolumeCondition = ParkedOrderField_VolumeCondition;
            
    ///最小成交量
    // TThostFtdcVolumeType int
    self->data.MinVolume = ParkedOrderField_MinVolume;
        
    ///触发条件
    // TThostFtdcContingentConditionType char
    self->data.ContingentCondition = ParkedOrderField_ContingentCondition;
            
    ///止损价
    // TThostFtdcPriceType double
    self->data.StopPrice = ParkedOrderField_StopPrice;
        
    ///强平原因
    // TThostFtdcForceCloseReasonType char
    self->data.ForceCloseReason = ParkedOrderField_ForceCloseReason;
            
    ///自动挂起标志
    // TThostFtdcBoolType int
    self->data.IsAutoSuspend = ParkedOrderField_IsAutoSuspend;
        
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    if( ParkedOrderField_BusinessUnit != NULL ) {
        if(ParkedOrderField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", ParkedOrderField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
            return -1;
        }
        // memset(self->data.BusinessUnit, 0, sizeof(self->data.BusinessUnit));
        // memcpy(self->data.BusinessUnit, ParkedOrderField_BusinessUnit, ParkedOrderField_BusinessUnit_len);        
        strncpy(self->data.BusinessUnit, ParkedOrderField_BusinessUnit, sizeof(self->data.BusinessUnit) );
        ParkedOrderField_BusinessUnit = NULL;
    }
            
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = ParkedOrderField_RequestID;
        
    ///用户强平标志
    // TThostFtdcBoolType int
    self->data.UserForceClose = ParkedOrderField_UserForceClose;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( ParkedOrderField_ExchangeID != NULL ) {
        if(ParkedOrderField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", ParkedOrderField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, ParkedOrderField_ExchangeID, ParkedOrderField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, ParkedOrderField_ExchangeID, sizeof(self->data.ExchangeID) );
        ParkedOrderField_ExchangeID = NULL;
    }
            
    ///预埋报单编号
    // TThostFtdcParkedOrderIDType char[13]
    if( ParkedOrderField_ParkedOrderID != NULL ) {
        if(ParkedOrderField_ParkedOrderID_len > (Py_ssize_t)sizeof(self->data.ParkedOrderID)) {
            PyErr_Format(PyExc_ValueError, "ParkedOrderID too long: length=%zd (max allowed is %zd)", ParkedOrderField_ParkedOrderID_len, (Py_ssize_t)sizeof(self->data.ParkedOrderID));
            return -1;
        }
        // memset(self->data.ParkedOrderID, 0, sizeof(self->data.ParkedOrderID));
        // memcpy(self->data.ParkedOrderID, ParkedOrderField_ParkedOrderID, ParkedOrderField_ParkedOrderID_len);        
        strncpy(self->data.ParkedOrderID, ParkedOrderField_ParkedOrderID, sizeof(self->data.ParkedOrderID) );
        ParkedOrderField_ParkedOrderID = NULL;
    }
            
    ///用户类型
    // TThostFtdcUserTypeType char
    self->data.UserType = ParkedOrderField_UserType;
            
    ///预埋单状态
    // TThostFtdcParkedOrderStatusType char
    self->data.Status = ParkedOrderField_Status;
            
    ///错误代码
    // TThostFtdcErrorIDType int
    self->data.ErrorID = ParkedOrderField_ErrorID;
        
    ///错误信息
    // TThostFtdcErrorMsgType char[81]
    if( ParkedOrderField_ErrorMsg != NULL ) {
        if(ParkedOrderField_ErrorMsg_len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
            PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is %zd)", ParkedOrderField_ErrorMsg_len, (Py_ssize_t)sizeof(self->data.ErrorMsg));
            return -1;
        }
        // memset(self->data.ErrorMsg, 0, sizeof(self->data.ErrorMsg));
        // memcpy(self->data.ErrorMsg, ParkedOrderField_ErrorMsg, ParkedOrderField_ErrorMsg_len);        
        strncpy(self->data.ErrorMsg, ParkedOrderField_ErrorMsg, sizeof(self->data.ErrorMsg) );
        ParkedOrderField_ErrorMsg = NULL;
    }
            
    ///互换单标志
    // TThostFtdcBoolType int
    self->data.IsSwapOrder = ParkedOrderField_IsSwapOrder;
        
    ///资金账号
    // TThostFtdcAccountIDType char[13]
    if( ParkedOrderField_AccountID != NULL ) {
        if(ParkedOrderField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", ParkedOrderField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
            return -1;
        }
        // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
        // memcpy(self->data.AccountID, ParkedOrderField_AccountID, ParkedOrderField_AccountID_len);        
        strncpy(self->data.AccountID, ParkedOrderField_AccountID, sizeof(self->data.AccountID) );
        ParkedOrderField_AccountID = NULL;
    }
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( ParkedOrderField_CurrencyID != NULL ) {
        if(ParkedOrderField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", ParkedOrderField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, ParkedOrderField_CurrencyID, ParkedOrderField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, ParkedOrderField_CurrencyID, sizeof(self->data.CurrencyID) );
        ParkedOrderField_CurrencyID = NULL;
    }
            
    ///交易编码
    // TThostFtdcClientIDType char[11]
    if( ParkedOrderField_ClientID != NULL ) {
        if(ParkedOrderField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", ParkedOrderField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
            return -1;
        }
        // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
        // memcpy(self->data.ClientID, ParkedOrderField_ClientID, ParkedOrderField_ClientID_len);        
        strncpy(self->data.ClientID, ParkedOrderField_ClientID, sizeof(self->data.ClientID) );
        ParkedOrderField_ClientID = NULL;
    }
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( ParkedOrderField_InvestUnitID != NULL ) {
        if(ParkedOrderField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", ParkedOrderField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, ParkedOrderField_InvestUnitID, ParkedOrderField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, ParkedOrderField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        ParkedOrderField_InvestUnitID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    if( ParkedOrderField_reserve2 != NULL ) {
        if(ParkedOrderField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", ParkedOrderField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
            return -1;
        }
        // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
        // memcpy(self->data.reserve2, ParkedOrderField_reserve2, ParkedOrderField_reserve2_len);        
        strncpy(self->data.reserve2, ParkedOrderField_reserve2, sizeof(self->data.reserve2) );
        ParkedOrderField_reserve2 = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( ParkedOrderField_MacAddress != NULL ) {
        if(ParkedOrderField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", ParkedOrderField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, ParkedOrderField_MacAddress, ParkedOrderField_MacAddress_len);        
        strncpy(self->data.MacAddress, ParkedOrderField_MacAddress, sizeof(self->data.MacAddress) );
        ParkedOrderField_MacAddress = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( ParkedOrderField_InstrumentID != NULL ) {
        if(ParkedOrderField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", ParkedOrderField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, ParkedOrderField_InstrumentID, ParkedOrderField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, ParkedOrderField_InstrumentID, sizeof(self->data.InstrumentID) );
        ParkedOrderField_InstrumentID = NULL;
    }
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( ParkedOrderField_IPAddress != NULL ) {
        if(ParkedOrderField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", ParkedOrderField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, ParkedOrderField_IPAddress, ParkedOrderField_IPAddress_len);        
        strncpy(self->data.IPAddress, ParkedOrderField_IPAddress, sizeof(self->data.IPAddress) );
        ParkedOrderField_IPAddress = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcParkedOrderField_dealloc(PyCThostFtdcParkedOrderField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcParkedOrderField_repr(PyCThostFtdcParkedOrderField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:c,s:c,s:y,s:y,s:d,s:i,s:c,s:y,s:c,s:i,s:c,s:d,s:c,s:i,s:y,s:i,s:i,s:y,s:y,s:c,s:c,s:i,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:c,s:c,s:s,s:s,s:d,s:i,s:c,s:s,s:c,s:i,s:c,s:d,s:c,s:i,s:s,s:i,s:i,s:s,s:s,s:c,s:c,s:i,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s}"
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
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"ParkedOrderID", self->data.ParkedOrderID//, (Py_ssize_t)sizeof(self->data.ParkedOrderID) 
        ,"UserType", self->data.UserType 
        ,"Status", self->data.Status 
        ,"ErrorID", self->data.ErrorID 
        ,"ErrorMsg", self->data.ErrorMsg//, (Py_ssize_t)sizeof(self->data.ErrorMsg) 
        ,"IsSwapOrder", self->data.IsSwapOrder 
        ,"AccountID", self->data.AccountID//, (Py_ssize_t)sizeof(self->data.AccountID) 
        ,"CurrencyID", self->data.CurrencyID//, (Py_ssize_t)sizeof(self->data.CurrencyID) 
        ,"ClientID", self->data.ClientID//, (Py_ssize_t)sizeof(self->data.ClientID) 
        ,"InvestUnitID", self->data.InvestUnitID//, (Py_ssize_t)sizeof(self->data.InvestUnitID) 
        ,"reserve2", self->data.reserve2//, (Py_ssize_t)sizeof(self->data.reserve2) 
        ,"MacAddress", self->data.MacAddress//, (Py_ssize_t)sizeof(self->data.MacAddress) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"IPAddress", self->data.IPAddress//, (Py_ssize_t)sizeof(self->data.IPAddress) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcParkedOrderField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcParkedOrderField_get_BrokerID(PyCThostFtdcParkedOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcParkedOrderField_set_BrokerID(PyCThostFtdcParkedOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcParkedOrderField_get_InvestorID(PyCThostFtdcParkedOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcParkedOrderField_set_InvestorID(PyCThostFtdcParkedOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcParkedOrderField_get_reserve1(PyCThostFtdcParkedOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcParkedOrderField_set_reserve1(PyCThostFtdcParkedOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcParkedOrderField_get_OrderRef(PyCThostFtdcParkedOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderRef, (Py_ssize_t)sizeof(self->data.OrderRef));
    return PyBytes_FromString(self->data.OrderRef);
}

///报单引用
// TThostFtdcOrderRefType char[13]
static int PyCThostFtdcParkedOrderField_set_OrderRef(PyCThostFtdcParkedOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcParkedOrderField_get_UserID(PyCThostFtdcParkedOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcParkedOrderField_set_UserID(PyCThostFtdcParkedOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcParkedOrderField_get_OrderPriceType(PyCThostFtdcParkedOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OrderPriceType), 1);
}

///报单价格条件
// TThostFtdcOrderPriceTypeType char
static int PyCThostFtdcParkedOrderField_set_OrderPriceType(PyCThostFtdcParkedOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcParkedOrderField_get_Direction(PyCThostFtdcParkedOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

///买卖方向
// TThostFtdcDirectionType char
static int PyCThostFtdcParkedOrderField_set_Direction(PyCThostFtdcParkedOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcParkedOrderField_get_CombOffsetFlag(PyCThostFtdcParkedOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CombOffsetFlag, (Py_ssize_t)sizeof(self->data.CombOffsetFlag));
    return PyBytes_FromString(self->data.CombOffsetFlag);
}

///组合开平标志
// TThostFtdcCombOffsetFlagType char[5]
static int PyCThostFtdcParkedOrderField_set_CombOffsetFlag(PyCThostFtdcParkedOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcParkedOrderField_get_CombHedgeFlag(PyCThostFtdcParkedOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CombHedgeFlag, (Py_ssize_t)sizeof(self->data.CombHedgeFlag));
    return PyBytes_FromString(self->data.CombHedgeFlag);
}

///组合投机套保标志
// TThostFtdcCombHedgeFlagType char[5]
static int PyCThostFtdcParkedOrderField_set_CombHedgeFlag(PyCThostFtdcParkedOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcParkedOrderField_get_LimitPrice(PyCThostFtdcParkedOrderField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LimitPrice);
}

///价格
// TThostFtdcPriceType double
static int PyCThostFtdcParkedOrderField_set_LimitPrice(PyCThostFtdcParkedOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcParkedOrderField_get_VolumeTotalOriginal(PyCThostFtdcParkedOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.VolumeTotalOriginal);
#else
    return PyInt_FromLong(self->data.VolumeTotalOriginal);
#endif
}

///数量
// TThostFtdcVolumeType int
static int PyCThostFtdcParkedOrderField_set_VolumeTotalOriginal(PyCThostFtdcParkedOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcParkedOrderField_get_TimeCondition(PyCThostFtdcParkedOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.TimeCondition), 1);
}

///有效期类型
// TThostFtdcTimeConditionType char
static int PyCThostFtdcParkedOrderField_set_TimeCondition(PyCThostFtdcParkedOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcParkedOrderField_get_GTDDate(PyCThostFtdcParkedOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.GTDDate, (Py_ssize_t)sizeof(self->data.GTDDate));
    return PyBytes_FromString(self->data.GTDDate);
}

///GTD日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcParkedOrderField_set_GTDDate(PyCThostFtdcParkedOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcParkedOrderField_get_VolumeCondition(PyCThostFtdcParkedOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.VolumeCondition), 1);
}

///成交量类型
// TThostFtdcVolumeConditionType char
static int PyCThostFtdcParkedOrderField_set_VolumeCondition(PyCThostFtdcParkedOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcParkedOrderField_get_MinVolume(PyCThostFtdcParkedOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.MinVolume);
#else
    return PyInt_FromLong(self->data.MinVolume);
#endif
}

///最小成交量
// TThostFtdcVolumeType int
static int PyCThostFtdcParkedOrderField_set_MinVolume(PyCThostFtdcParkedOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcParkedOrderField_get_ContingentCondition(PyCThostFtdcParkedOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ContingentCondition), 1);
}

///触发条件
// TThostFtdcContingentConditionType char
static int PyCThostFtdcParkedOrderField_set_ContingentCondition(PyCThostFtdcParkedOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcParkedOrderField_get_StopPrice(PyCThostFtdcParkedOrderField *self, void *closure) {
    return PyFloat_FromDouble(self->data.StopPrice);
}

///止损价
// TThostFtdcPriceType double
static int PyCThostFtdcParkedOrderField_set_StopPrice(PyCThostFtdcParkedOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcParkedOrderField_get_ForceCloseReason(PyCThostFtdcParkedOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ForceCloseReason), 1);
}

///强平原因
// TThostFtdcForceCloseReasonType char
static int PyCThostFtdcParkedOrderField_set_ForceCloseReason(PyCThostFtdcParkedOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcParkedOrderField_get_IsAutoSuspend(PyCThostFtdcParkedOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsAutoSuspend);
#else
    return PyInt_FromLong(self->data.IsAutoSuspend);
#endif
}

///自动挂起标志
// TThostFtdcBoolType int
static int PyCThostFtdcParkedOrderField_set_IsAutoSuspend(PyCThostFtdcParkedOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcParkedOrderField_get_BusinessUnit(PyCThostFtdcParkedOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BusinessUnit, (Py_ssize_t)sizeof(self->data.BusinessUnit));
    return PyBytes_FromString(self->data.BusinessUnit);
}

///业务单元
// TThostFtdcBusinessUnitType char[21]
static int PyCThostFtdcParkedOrderField_set_BusinessUnit(PyCThostFtdcParkedOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcParkedOrderField_get_RequestID(PyCThostFtdcParkedOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcParkedOrderField_set_RequestID(PyCThostFtdcParkedOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcParkedOrderField_get_UserForceClose(PyCThostFtdcParkedOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.UserForceClose);
#else
    return PyInt_FromLong(self->data.UserForceClose);
#endif
}

///用户强平标志
// TThostFtdcBoolType int
static int PyCThostFtdcParkedOrderField_set_UserForceClose(PyCThostFtdcParkedOrderField *self, PyObject* val, void *closure) {
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
        
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcParkedOrderField_get_ExchangeID(PyCThostFtdcParkedOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcParkedOrderField_set_ExchangeID(PyCThostFtdcParkedOrderField *self, PyObject* val, void *closure) {
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
            
///预埋报单编号
// TThostFtdcParkedOrderIDType char[13]
static PyObject *PyCThostFtdcParkedOrderField_get_ParkedOrderID(PyCThostFtdcParkedOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParkedOrderID, (Py_ssize_t)sizeof(self->data.ParkedOrderID));
    return PyBytes_FromString(self->data.ParkedOrderID);
}

///预埋报单编号
// TThostFtdcParkedOrderIDType char[13]
static int PyCThostFtdcParkedOrderField_set_ParkedOrderID(PyCThostFtdcParkedOrderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ParkedOrderID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ParkedOrderID)) {
        PyErr_SetString(PyExc_ValueError, "ParkedOrderID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.ParkedOrderID, 0, sizeof(self->data.ParkedOrderID));
    // memcpy(self->data.ParkedOrderID, buf, len);
    strncpy(self->data.ParkedOrderID, buf, sizeof(self->data.ParkedOrderID));
    return 0;
}
            
///用户类型
// TThostFtdcUserTypeType char
static PyObject *PyCThostFtdcParkedOrderField_get_UserType(PyCThostFtdcParkedOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.UserType), 1);
}

///用户类型
// TThostFtdcUserTypeType char
static int PyCThostFtdcParkedOrderField_set_UserType(PyCThostFtdcParkedOrderField *self, PyObject* val, void *closure) {
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
            
///预埋单状态
// TThostFtdcParkedOrderStatusType char
static PyObject *PyCThostFtdcParkedOrderField_get_Status(PyCThostFtdcParkedOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.Status), 1);
}

///预埋单状态
// TThostFtdcParkedOrderStatusType char
static int PyCThostFtdcParkedOrderField_set_Status(PyCThostFtdcParkedOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcParkedOrderField_get_ErrorID(PyCThostFtdcParkedOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.ErrorID);
#else
    return PyInt_FromLong(self->data.ErrorID);
#endif
}

///错误代码
// TThostFtdcErrorIDType int
static int PyCThostFtdcParkedOrderField_set_ErrorID(PyCThostFtdcParkedOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcParkedOrderField_get_ErrorMsg(PyCThostFtdcParkedOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ErrorMsg, (Py_ssize_t)sizeof(self->data.ErrorMsg));
    return PyBytes_FromString(self->data.ErrorMsg);
}

///错误信息
// TThostFtdcErrorMsgType char[81]
static int PyCThostFtdcParkedOrderField_set_ErrorMsg(PyCThostFtdcParkedOrderField *self, PyObject* val, void *closure) {
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
            
///互换单标志
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcParkedOrderField_get_IsSwapOrder(PyCThostFtdcParkedOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsSwapOrder);
#else
    return PyInt_FromLong(self->data.IsSwapOrder);
#endif
}

///互换单标志
// TThostFtdcBoolType int
static int PyCThostFtdcParkedOrderField_set_IsSwapOrder(PyCThostFtdcParkedOrderField *self, PyObject* val, void *closure) {
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
        
///资金账号
// TThostFtdcAccountIDType char[13]
static PyObject *PyCThostFtdcParkedOrderField_get_AccountID(PyCThostFtdcParkedOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AccountID, (Py_ssize_t)sizeof(self->data.AccountID));
    return PyBytes_FromString(self->data.AccountID);
}

///资金账号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcParkedOrderField_set_AccountID(PyCThostFtdcParkedOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcParkedOrderField_get_CurrencyID(PyCThostFtdcParkedOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcParkedOrderField_set_CurrencyID(PyCThostFtdcParkedOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcParkedOrderField_get_ClientID(PyCThostFtdcParkedOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientID, (Py_ssize_t)sizeof(self->data.ClientID));
    return PyBytes_FromString(self->data.ClientID);
}

///交易编码
// TThostFtdcClientIDType char[11]
static int PyCThostFtdcParkedOrderField_set_ClientID(PyCThostFtdcParkedOrderField *self, PyObject* val, void *closure) {
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
            
///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static PyObject *PyCThostFtdcParkedOrderField_get_InvestUnitID(PyCThostFtdcParkedOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcParkedOrderField_set_InvestUnitID(PyCThostFtdcParkedOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcParkedOrderField_get_reserve2(PyCThostFtdcParkedOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve2, (Py_ssize_t)sizeof(self->data.reserve2));
    return PyBytes_FromString(self->data.reserve2);
}

///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static int PyCThostFtdcParkedOrderField_set_reserve2(PyCThostFtdcParkedOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcParkedOrderField_get_MacAddress(PyCThostFtdcParkedOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcParkedOrderField_set_MacAddress(PyCThostFtdcParkedOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcParkedOrderField_get_InstrumentID(PyCThostFtdcParkedOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcParkedOrderField_set_InstrumentID(PyCThostFtdcParkedOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcParkedOrderField_get_IPAddress(PyCThostFtdcParkedOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcParkedOrderField_set_IPAddress(PyCThostFtdcParkedOrderField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcParkedOrderField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcParkedOrderField_get_BrokerID, (setter)PyCThostFtdcParkedOrderField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcParkedOrderField_get_InvestorID, (setter)PyCThostFtdcParkedOrderField_set_InvestorID, (char *)"InvestorID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcParkedOrderField_get_reserve1, (setter)PyCThostFtdcParkedOrderField_set_reserve1, (char *)"reserve1", NULL},
    ///报单引用 
    {(char *)"OrderRef", (getter)PyCThostFtdcParkedOrderField_get_OrderRef, (setter)PyCThostFtdcParkedOrderField_set_OrderRef, (char *)"OrderRef", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcParkedOrderField_get_UserID, (setter)PyCThostFtdcParkedOrderField_set_UserID, (char *)"UserID", NULL},
    ///报单价格条件 
    {(char *)"OrderPriceType", (getter)PyCThostFtdcParkedOrderField_get_OrderPriceType, (setter)PyCThostFtdcParkedOrderField_set_OrderPriceType, (char *)"OrderPriceType", NULL},
    ///买卖方向 
    {(char *)"Direction", (getter)PyCThostFtdcParkedOrderField_get_Direction, (setter)PyCThostFtdcParkedOrderField_set_Direction, (char *)"Direction", NULL},
    ///组合开平标志 
    {(char *)"CombOffsetFlag", (getter)PyCThostFtdcParkedOrderField_get_CombOffsetFlag, (setter)PyCThostFtdcParkedOrderField_set_CombOffsetFlag, (char *)"CombOffsetFlag", NULL},
    ///组合投机套保标志 
    {(char *)"CombHedgeFlag", (getter)PyCThostFtdcParkedOrderField_get_CombHedgeFlag, (setter)PyCThostFtdcParkedOrderField_set_CombHedgeFlag, (char *)"CombHedgeFlag", NULL},
    ///价格 
    {(char *)"LimitPrice", (getter)PyCThostFtdcParkedOrderField_get_LimitPrice, (setter)PyCThostFtdcParkedOrderField_set_LimitPrice, (char *)"LimitPrice", NULL},
    ///数量 
    {(char *)"VolumeTotalOriginal", (getter)PyCThostFtdcParkedOrderField_get_VolumeTotalOriginal, (setter)PyCThostFtdcParkedOrderField_set_VolumeTotalOriginal, (char *)"VolumeTotalOriginal", NULL},
    ///有效期类型 
    {(char *)"TimeCondition", (getter)PyCThostFtdcParkedOrderField_get_TimeCondition, (setter)PyCThostFtdcParkedOrderField_set_TimeCondition, (char *)"TimeCondition", NULL},
    ///GTD日期 
    {(char *)"GTDDate", (getter)PyCThostFtdcParkedOrderField_get_GTDDate, (setter)PyCThostFtdcParkedOrderField_set_GTDDate, (char *)"GTDDate", NULL},
    ///成交量类型 
    {(char *)"VolumeCondition", (getter)PyCThostFtdcParkedOrderField_get_VolumeCondition, (setter)PyCThostFtdcParkedOrderField_set_VolumeCondition, (char *)"VolumeCondition", NULL},
    ///最小成交量 
    {(char *)"MinVolume", (getter)PyCThostFtdcParkedOrderField_get_MinVolume, (setter)PyCThostFtdcParkedOrderField_set_MinVolume, (char *)"MinVolume", NULL},
    ///触发条件 
    {(char *)"ContingentCondition", (getter)PyCThostFtdcParkedOrderField_get_ContingentCondition, (setter)PyCThostFtdcParkedOrderField_set_ContingentCondition, (char *)"ContingentCondition", NULL},
    ///止损价 
    {(char *)"StopPrice", (getter)PyCThostFtdcParkedOrderField_get_StopPrice, (setter)PyCThostFtdcParkedOrderField_set_StopPrice, (char *)"StopPrice", NULL},
    ///强平原因 
    {(char *)"ForceCloseReason", (getter)PyCThostFtdcParkedOrderField_get_ForceCloseReason, (setter)PyCThostFtdcParkedOrderField_set_ForceCloseReason, (char *)"ForceCloseReason", NULL},
    ///自动挂起标志 
    {(char *)"IsAutoSuspend", (getter)PyCThostFtdcParkedOrderField_get_IsAutoSuspend, (setter)PyCThostFtdcParkedOrderField_set_IsAutoSuspend, (char *)"IsAutoSuspend", NULL},
    ///业务单元 
    {(char *)"BusinessUnit", (getter)PyCThostFtdcParkedOrderField_get_BusinessUnit, (setter)PyCThostFtdcParkedOrderField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcParkedOrderField_get_RequestID, (setter)PyCThostFtdcParkedOrderField_set_RequestID, (char *)"RequestID", NULL},
    ///用户强平标志 
    {(char *)"UserForceClose", (getter)PyCThostFtdcParkedOrderField_get_UserForceClose, (setter)PyCThostFtdcParkedOrderField_set_UserForceClose, (char *)"UserForceClose", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcParkedOrderField_get_ExchangeID, (setter)PyCThostFtdcParkedOrderField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///预埋报单编号 
    {(char *)"ParkedOrderID", (getter)PyCThostFtdcParkedOrderField_get_ParkedOrderID, (setter)PyCThostFtdcParkedOrderField_set_ParkedOrderID, (char *)"ParkedOrderID", NULL},
    ///用户类型 
    {(char *)"UserType", (getter)PyCThostFtdcParkedOrderField_get_UserType, (setter)PyCThostFtdcParkedOrderField_set_UserType, (char *)"UserType", NULL},
    ///预埋单状态 
    {(char *)"Status", (getter)PyCThostFtdcParkedOrderField_get_Status, (setter)PyCThostFtdcParkedOrderField_set_Status, (char *)"Status", NULL},
    ///错误代码 
    {(char *)"ErrorID", (getter)PyCThostFtdcParkedOrderField_get_ErrorID, (setter)PyCThostFtdcParkedOrderField_set_ErrorID, (char *)"ErrorID", NULL},
    ///错误信息 
    {(char *)"ErrorMsg", (getter)PyCThostFtdcParkedOrderField_get_ErrorMsg, (setter)PyCThostFtdcParkedOrderField_set_ErrorMsg, (char *)"ErrorMsg", NULL},
    ///互换单标志 
    {(char *)"IsSwapOrder", (getter)PyCThostFtdcParkedOrderField_get_IsSwapOrder, (setter)PyCThostFtdcParkedOrderField_set_IsSwapOrder, (char *)"IsSwapOrder", NULL},
    ///资金账号 
    {(char *)"AccountID", (getter)PyCThostFtdcParkedOrderField_get_AccountID, (setter)PyCThostFtdcParkedOrderField_set_AccountID, (char *)"AccountID", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcParkedOrderField_get_CurrencyID, (setter)PyCThostFtdcParkedOrderField_set_CurrencyID, (char *)"CurrencyID", NULL},
    ///交易编码 
    {(char *)"ClientID", (getter)PyCThostFtdcParkedOrderField_get_ClientID, (setter)PyCThostFtdcParkedOrderField_set_ClientID, (char *)"ClientID", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcParkedOrderField_get_InvestUnitID, (setter)PyCThostFtdcParkedOrderField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///保留的无效字段 
    {(char *)"reserve2", (getter)PyCThostFtdcParkedOrderField_get_reserve2, (setter)PyCThostFtdcParkedOrderField_set_reserve2, (char *)"reserve2", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcParkedOrderField_get_MacAddress, (setter)PyCThostFtdcParkedOrderField_set_MacAddress, (char *)"MacAddress", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcParkedOrderField_get_InstrumentID, (setter)PyCThostFtdcParkedOrderField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcParkedOrderField_get_IPAddress, (setter)PyCThostFtdcParkedOrderField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcParkedOrderFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcParkedOrderField",	/* tp_name */
	sizeof(PyCThostFtdcParkedOrderField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcParkedOrderField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcParkedOrderField_repr,   /* tp_repr */
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
	"CThostFtdcParkedOrderField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcParkedOrderField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcParkedOrderField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcParkedOrderField_new,       /* tp_new */
};

int PyCThostFtdcParkedOrderFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcParkedOrderField  */
	if (PyType_Ready(&PyCThostFtdcParkedOrderFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcParkedOrderField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcParkedOrderFieldType);
    if( PyModule_AddObject(module, "CThostFtdcParkedOrderField", (PyObject *)&PyCThostFtdcParkedOrderFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcParkedOrderField to module");
        Py_DECREF(&PyCThostFtdcParkedOrderFieldType);
		return -1;
    }

    return 0;
}
