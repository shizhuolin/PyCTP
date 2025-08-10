
#include "PyCThostFtdcErrExecOrderField.h"

///错误执行宣告

static PyObject *PyCThostFtdcErrExecOrderField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcErrExecOrderField *self = (PyCThostFtdcErrExecOrderField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcErrExecOrderField_init(PyCThostFtdcErrExecOrderField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "ExecOrderRef", "UserID", "Volume", "RequestID", "BusinessUnit", "OffsetFlag", "HedgeFlag", "ActionType", "PosiDirection", "ReservePositionFlag", "CloseFlag", "ExchangeID", "InvestUnitID", "AccountID", "CurrencyID", "ClientID", "reserve2", "MacAddress", "ErrorID", "ErrorMsg", "InstrumentID", "IPAddress",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *ErrExecOrderField_BrokerID = NULL;
    Py_ssize_t ErrExecOrderField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *ErrExecOrderField_InvestorID = NULL;
    Py_ssize_t ErrExecOrderField_InvestorID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *ErrExecOrderField_reserve1 = NULL;
    Py_ssize_t ErrExecOrderField_reserve1_len = 0;
            
    ///执行宣告引用
    // TThostFtdcOrderRefType char[13]
    const char *ErrExecOrderField_ExecOrderRef = NULL;
    Py_ssize_t ErrExecOrderField_ExecOrderRef_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *ErrExecOrderField_UserID = NULL;
    Py_ssize_t ErrExecOrderField_UserID_len = 0;
            
    ///数量
    // TThostFtdcVolumeType int
    int ErrExecOrderField_Volume = 0;
        
    ///请求编号
    // TThostFtdcRequestIDType int
    int ErrExecOrderField_RequestID = 0;
        
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    const char *ErrExecOrderField_BusinessUnit = NULL;
    Py_ssize_t ErrExecOrderField_BusinessUnit_len = 0;
            
    ///开平标志
    // TThostFtdcOffsetFlagType char
    char ErrExecOrderField_OffsetFlag = 0;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    char ErrExecOrderField_HedgeFlag = 0;
            
    ///执行类型
    // TThostFtdcActionTypeType char
    char ErrExecOrderField_ActionType = 0;
            
    ///保留头寸申请的持仓方向
    // TThostFtdcPosiDirectionType char
    char ErrExecOrderField_PosiDirection = 0;
            
    ///期权行权后是否保留期货头寸的标记,该字段已废弃
    // TThostFtdcExecOrderPositionFlagType char
    char ErrExecOrderField_ReservePositionFlag = 0;
            
    ///期权行权后生成的头寸是否自动平仓
    // TThostFtdcExecOrderCloseFlagType char
    char ErrExecOrderField_CloseFlag = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *ErrExecOrderField_ExchangeID = NULL;
    Py_ssize_t ErrExecOrderField_ExchangeID_len = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *ErrExecOrderField_InvestUnitID = NULL;
    Py_ssize_t ErrExecOrderField_InvestUnitID_len = 0;
            
    ///资金账号
    // TThostFtdcAccountIDType char[13]
    const char *ErrExecOrderField_AccountID = NULL;
    Py_ssize_t ErrExecOrderField_AccountID_len = 0;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *ErrExecOrderField_CurrencyID = NULL;
    Py_ssize_t ErrExecOrderField_CurrencyID_len = 0;
            
    ///交易编码
    // TThostFtdcClientIDType char[11]
    const char *ErrExecOrderField_ClientID = NULL;
    Py_ssize_t ErrExecOrderField_ClientID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    const char *ErrExecOrderField_reserve2 = NULL;
    Py_ssize_t ErrExecOrderField_reserve2_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *ErrExecOrderField_MacAddress = NULL;
    Py_ssize_t ErrExecOrderField_MacAddress_len = 0;
            
    ///错误代码
    // TThostFtdcErrorIDType int
    int ErrExecOrderField_ErrorID = 0;
        
    ///错误信息
    // TThostFtdcErrorMsgType char[81]
    const char *ErrExecOrderField_ErrorMsg = NULL;
    Py_ssize_t ErrExecOrderField_ErrorMsg_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *ErrExecOrderField_InstrumentID = NULL;
    Py_ssize_t ErrExecOrderField_InstrumentID_len = 0;
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *ErrExecOrderField_IPAddress = NULL;
    Py_ssize_t ErrExecOrderField_IPAddress_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#iiy#ccccccy#y#y#y#y#y#y#iy#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#iis#ccccccs#s#s#s#s#s#s#is#s#s#", (char **)kwlist
#endif

        , &ErrExecOrderField_BrokerID, &ErrExecOrderField_BrokerID_len 
        , &ErrExecOrderField_InvestorID, &ErrExecOrderField_InvestorID_len 
        , &ErrExecOrderField_reserve1, &ErrExecOrderField_reserve1_len 
        , &ErrExecOrderField_ExecOrderRef, &ErrExecOrderField_ExecOrderRef_len 
        , &ErrExecOrderField_UserID, &ErrExecOrderField_UserID_len 
        , &ErrExecOrderField_Volume 
        , &ErrExecOrderField_RequestID 
        , &ErrExecOrderField_BusinessUnit, &ErrExecOrderField_BusinessUnit_len 
        , &ErrExecOrderField_OffsetFlag 
        , &ErrExecOrderField_HedgeFlag 
        , &ErrExecOrderField_ActionType 
        , &ErrExecOrderField_PosiDirection 
        , &ErrExecOrderField_ReservePositionFlag 
        , &ErrExecOrderField_CloseFlag 
        , &ErrExecOrderField_ExchangeID, &ErrExecOrderField_ExchangeID_len 
        , &ErrExecOrderField_InvestUnitID, &ErrExecOrderField_InvestUnitID_len 
        , &ErrExecOrderField_AccountID, &ErrExecOrderField_AccountID_len 
        , &ErrExecOrderField_CurrencyID, &ErrExecOrderField_CurrencyID_len 
        , &ErrExecOrderField_ClientID, &ErrExecOrderField_ClientID_len 
        , &ErrExecOrderField_reserve2, &ErrExecOrderField_reserve2_len 
        , &ErrExecOrderField_MacAddress, &ErrExecOrderField_MacAddress_len 
        , &ErrExecOrderField_ErrorID 
        , &ErrExecOrderField_ErrorMsg, &ErrExecOrderField_ErrorMsg_len 
        , &ErrExecOrderField_InstrumentID, &ErrExecOrderField_InstrumentID_len 
        , &ErrExecOrderField_IPAddress, &ErrExecOrderField_IPAddress_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( ErrExecOrderField_BrokerID != NULL ) {
        if(ErrExecOrderField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", ErrExecOrderField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, ErrExecOrderField_BrokerID, ErrExecOrderField_BrokerID_len);        
        strncpy(self->data.BrokerID, ErrExecOrderField_BrokerID, sizeof(self->data.BrokerID) );
        ErrExecOrderField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( ErrExecOrderField_InvestorID != NULL ) {
        if(ErrExecOrderField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", ErrExecOrderField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, ErrExecOrderField_InvestorID, ErrExecOrderField_InvestorID_len);        
        strncpy(self->data.InvestorID, ErrExecOrderField_InvestorID, sizeof(self->data.InvestorID) );
        ErrExecOrderField_InvestorID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( ErrExecOrderField_reserve1 != NULL ) {
        if(ErrExecOrderField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", ErrExecOrderField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, ErrExecOrderField_reserve1, ErrExecOrderField_reserve1_len);        
        strncpy(self->data.reserve1, ErrExecOrderField_reserve1, sizeof(self->data.reserve1) );
        ErrExecOrderField_reserve1 = NULL;
    }
            
    ///执行宣告引用
    // TThostFtdcOrderRefType char[13]
    if( ErrExecOrderField_ExecOrderRef != NULL ) {
        if(ErrExecOrderField_ExecOrderRef_len > (Py_ssize_t)sizeof(self->data.ExecOrderRef)) {
            PyErr_Format(PyExc_ValueError, "ExecOrderRef too long: length=%zd (max allowed is %zd)", ErrExecOrderField_ExecOrderRef_len, (Py_ssize_t)sizeof(self->data.ExecOrderRef));
            return -1;
        }
        // memset(self->data.ExecOrderRef, 0, sizeof(self->data.ExecOrderRef));
        // memcpy(self->data.ExecOrderRef, ErrExecOrderField_ExecOrderRef, ErrExecOrderField_ExecOrderRef_len);        
        strncpy(self->data.ExecOrderRef, ErrExecOrderField_ExecOrderRef, sizeof(self->data.ExecOrderRef) );
        ErrExecOrderField_ExecOrderRef = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( ErrExecOrderField_UserID != NULL ) {
        if(ErrExecOrderField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", ErrExecOrderField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, ErrExecOrderField_UserID, ErrExecOrderField_UserID_len);        
        strncpy(self->data.UserID, ErrExecOrderField_UserID, sizeof(self->data.UserID) );
        ErrExecOrderField_UserID = NULL;
    }
            
    ///数量
    // TThostFtdcVolumeType int
    self->data.Volume = ErrExecOrderField_Volume;
        
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = ErrExecOrderField_RequestID;
        
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    if( ErrExecOrderField_BusinessUnit != NULL ) {
        if(ErrExecOrderField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", ErrExecOrderField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
            return -1;
        }
        // memset(self->data.BusinessUnit, 0, sizeof(self->data.BusinessUnit));
        // memcpy(self->data.BusinessUnit, ErrExecOrderField_BusinessUnit, ErrExecOrderField_BusinessUnit_len);        
        strncpy(self->data.BusinessUnit, ErrExecOrderField_BusinessUnit, sizeof(self->data.BusinessUnit) );
        ErrExecOrderField_BusinessUnit = NULL;
    }
            
    ///开平标志
    // TThostFtdcOffsetFlagType char
    self->data.OffsetFlag = ErrExecOrderField_OffsetFlag;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    self->data.HedgeFlag = ErrExecOrderField_HedgeFlag;
            
    ///执行类型
    // TThostFtdcActionTypeType char
    self->data.ActionType = ErrExecOrderField_ActionType;
            
    ///保留头寸申请的持仓方向
    // TThostFtdcPosiDirectionType char
    self->data.PosiDirection = ErrExecOrderField_PosiDirection;
            
    ///期权行权后是否保留期货头寸的标记,该字段已废弃
    // TThostFtdcExecOrderPositionFlagType char
    self->data.ReservePositionFlag = ErrExecOrderField_ReservePositionFlag;
            
    ///期权行权后生成的头寸是否自动平仓
    // TThostFtdcExecOrderCloseFlagType char
    self->data.CloseFlag = ErrExecOrderField_CloseFlag;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( ErrExecOrderField_ExchangeID != NULL ) {
        if(ErrExecOrderField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", ErrExecOrderField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, ErrExecOrderField_ExchangeID, ErrExecOrderField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, ErrExecOrderField_ExchangeID, sizeof(self->data.ExchangeID) );
        ErrExecOrderField_ExchangeID = NULL;
    }
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( ErrExecOrderField_InvestUnitID != NULL ) {
        if(ErrExecOrderField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", ErrExecOrderField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, ErrExecOrderField_InvestUnitID, ErrExecOrderField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, ErrExecOrderField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        ErrExecOrderField_InvestUnitID = NULL;
    }
            
    ///资金账号
    // TThostFtdcAccountIDType char[13]
    if( ErrExecOrderField_AccountID != NULL ) {
        if(ErrExecOrderField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", ErrExecOrderField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
            return -1;
        }
        // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
        // memcpy(self->data.AccountID, ErrExecOrderField_AccountID, ErrExecOrderField_AccountID_len);        
        strncpy(self->data.AccountID, ErrExecOrderField_AccountID, sizeof(self->data.AccountID) );
        ErrExecOrderField_AccountID = NULL;
    }
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( ErrExecOrderField_CurrencyID != NULL ) {
        if(ErrExecOrderField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", ErrExecOrderField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, ErrExecOrderField_CurrencyID, ErrExecOrderField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, ErrExecOrderField_CurrencyID, sizeof(self->data.CurrencyID) );
        ErrExecOrderField_CurrencyID = NULL;
    }
            
    ///交易编码
    // TThostFtdcClientIDType char[11]
    if( ErrExecOrderField_ClientID != NULL ) {
        if(ErrExecOrderField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", ErrExecOrderField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
            return -1;
        }
        // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
        // memcpy(self->data.ClientID, ErrExecOrderField_ClientID, ErrExecOrderField_ClientID_len);        
        strncpy(self->data.ClientID, ErrExecOrderField_ClientID, sizeof(self->data.ClientID) );
        ErrExecOrderField_ClientID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    if( ErrExecOrderField_reserve2 != NULL ) {
        if(ErrExecOrderField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", ErrExecOrderField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
            return -1;
        }
        // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
        // memcpy(self->data.reserve2, ErrExecOrderField_reserve2, ErrExecOrderField_reserve2_len);        
        strncpy(self->data.reserve2, ErrExecOrderField_reserve2, sizeof(self->data.reserve2) );
        ErrExecOrderField_reserve2 = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( ErrExecOrderField_MacAddress != NULL ) {
        if(ErrExecOrderField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", ErrExecOrderField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, ErrExecOrderField_MacAddress, ErrExecOrderField_MacAddress_len);        
        strncpy(self->data.MacAddress, ErrExecOrderField_MacAddress, sizeof(self->data.MacAddress) );
        ErrExecOrderField_MacAddress = NULL;
    }
            
    ///错误代码
    // TThostFtdcErrorIDType int
    self->data.ErrorID = ErrExecOrderField_ErrorID;
        
    ///错误信息
    // TThostFtdcErrorMsgType char[81]
    if( ErrExecOrderField_ErrorMsg != NULL ) {
        if(ErrExecOrderField_ErrorMsg_len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
            PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is %zd)", ErrExecOrderField_ErrorMsg_len, (Py_ssize_t)sizeof(self->data.ErrorMsg));
            return -1;
        }
        // memset(self->data.ErrorMsg, 0, sizeof(self->data.ErrorMsg));
        // memcpy(self->data.ErrorMsg, ErrExecOrderField_ErrorMsg, ErrExecOrderField_ErrorMsg_len);        
        strncpy(self->data.ErrorMsg, ErrExecOrderField_ErrorMsg, sizeof(self->data.ErrorMsg) );
        ErrExecOrderField_ErrorMsg = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( ErrExecOrderField_InstrumentID != NULL ) {
        if(ErrExecOrderField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", ErrExecOrderField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, ErrExecOrderField_InstrumentID, ErrExecOrderField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, ErrExecOrderField_InstrumentID, sizeof(self->data.InstrumentID) );
        ErrExecOrderField_InstrumentID = NULL;
    }
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( ErrExecOrderField_IPAddress != NULL ) {
        if(ErrExecOrderField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", ErrExecOrderField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, ErrExecOrderField_IPAddress, ErrExecOrderField_IPAddress_len);        
        strncpy(self->data.IPAddress, ErrExecOrderField_IPAddress, sizeof(self->data.IPAddress) );
        ErrExecOrderField_IPAddress = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcErrExecOrderField_dealloc(PyCThostFtdcErrExecOrderField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcErrExecOrderField_repr(PyCThostFtdcErrExecOrderField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:c,s:c,s:c,s:c,s:c,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:i,s:i,s:s,s:c,s:c,s:c,s:c,s:c,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"ExecOrderRef", self->data.ExecOrderRef//, (Py_ssize_t)sizeof(self->data.ExecOrderRef) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"Volume", self->data.Volume 
        ,"RequestID", self->data.RequestID 
        ,"BusinessUnit", self->data.BusinessUnit//, (Py_ssize_t)sizeof(self->data.BusinessUnit) 
        ,"OffsetFlag", self->data.OffsetFlag 
        ,"HedgeFlag", self->data.HedgeFlag 
        ,"ActionType", self->data.ActionType 
        ,"PosiDirection", self->data.PosiDirection 
        ,"ReservePositionFlag", self->data.ReservePositionFlag 
        ,"CloseFlag", self->data.CloseFlag 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"InvestUnitID", self->data.InvestUnitID//, (Py_ssize_t)sizeof(self->data.InvestUnitID) 
        ,"AccountID", self->data.AccountID//, (Py_ssize_t)sizeof(self->data.AccountID) 
        ,"CurrencyID", self->data.CurrencyID//, (Py_ssize_t)sizeof(self->data.CurrencyID) 
        ,"ClientID", self->data.ClientID//, (Py_ssize_t)sizeof(self->data.ClientID) 
        ,"reserve2", self->data.reserve2//, (Py_ssize_t)sizeof(self->data.reserve2) 
        ,"MacAddress", self->data.MacAddress//, (Py_ssize_t)sizeof(self->data.MacAddress) 
        ,"ErrorID", self->data.ErrorID 
        ,"ErrorMsg", self->data.ErrorMsg//, (Py_ssize_t)sizeof(self->data.ErrorMsg) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"IPAddress", self->data.IPAddress//, (Py_ssize_t)sizeof(self->data.IPAddress) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcErrExecOrderField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcErrExecOrderField_get_BrokerID(PyCThostFtdcErrExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcErrExecOrderField_set_BrokerID(PyCThostFtdcErrExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcErrExecOrderField_get_InvestorID(PyCThostFtdcErrExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcErrExecOrderField_set_InvestorID(PyCThostFtdcErrExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcErrExecOrderField_get_reserve1(PyCThostFtdcErrExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcErrExecOrderField_set_reserve1(PyCThostFtdcErrExecOrderField *self, PyObject* val, void *closure) {
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
            
///执行宣告引用
// TThostFtdcOrderRefType char[13]
static PyObject *PyCThostFtdcErrExecOrderField_get_ExecOrderRef(PyCThostFtdcErrExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExecOrderRef, (Py_ssize_t)sizeof(self->data.ExecOrderRef));
    return PyBytes_FromString(self->data.ExecOrderRef);
}

///执行宣告引用
// TThostFtdcOrderRefType char[13]
static int PyCThostFtdcErrExecOrderField_set_ExecOrderRef(PyCThostFtdcErrExecOrderField *self, PyObject* val, void *closure) {
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
            
///用户代码
// TThostFtdcUserIDType char[16]
static PyObject *PyCThostFtdcErrExecOrderField_get_UserID(PyCThostFtdcErrExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcErrExecOrderField_set_UserID(PyCThostFtdcErrExecOrderField *self, PyObject* val, void *closure) {
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
            
///数量
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcErrExecOrderField_get_Volume(PyCThostFtdcErrExecOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.Volume);
#else
    return PyInt_FromLong(self->data.Volume);
#endif
}

///数量
// TThostFtdcVolumeType int
static int PyCThostFtdcErrExecOrderField_set_Volume(PyCThostFtdcErrExecOrderField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Volume Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Volume Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the Volume value out of range for C int");
        return -1;
    }
    self->data.Volume = (int)buf;
    return 0;
}
        
///请求编号
// TThostFtdcRequestIDType int
static PyObject *PyCThostFtdcErrExecOrderField_get_RequestID(PyCThostFtdcErrExecOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcErrExecOrderField_set_RequestID(PyCThostFtdcErrExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcErrExecOrderField_get_BusinessUnit(PyCThostFtdcErrExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BusinessUnit, (Py_ssize_t)sizeof(self->data.BusinessUnit));
    return PyBytes_FromString(self->data.BusinessUnit);
}

///业务单元
// TThostFtdcBusinessUnitType char[21]
static int PyCThostFtdcErrExecOrderField_set_BusinessUnit(PyCThostFtdcErrExecOrderField *self, PyObject* val, void *closure) {
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
            
///开平标志
// TThostFtdcOffsetFlagType char
static PyObject *PyCThostFtdcErrExecOrderField_get_OffsetFlag(PyCThostFtdcErrExecOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OffsetFlag), 1);
}

///开平标志
// TThostFtdcOffsetFlagType char
static int PyCThostFtdcErrExecOrderField_set_OffsetFlag(PyCThostFtdcErrExecOrderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OffsetFlag Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OffsetFlag)) {
        PyErr_SetString(PyExc_ValueError, "OffsetFlag must be equal 1 bytes");
        return -1;
    }
    self->data.OffsetFlag = *buf;
    return 0;
}
            
///投机套保标志
// TThostFtdcHedgeFlagType char
static PyObject *PyCThostFtdcErrExecOrderField_get_HedgeFlag(PyCThostFtdcErrExecOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

///投机套保标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcErrExecOrderField_set_HedgeFlag(PyCThostFtdcErrExecOrderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    self->data.HedgeFlag = *buf;
    return 0;
}
            
///执行类型
// TThostFtdcActionTypeType char
static PyObject *PyCThostFtdcErrExecOrderField_get_ActionType(PyCThostFtdcErrExecOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionType), 1);
}

///执行类型
// TThostFtdcActionTypeType char
static int PyCThostFtdcErrExecOrderField_set_ActionType(PyCThostFtdcErrExecOrderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ActionType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ActionType)) {
        PyErr_SetString(PyExc_ValueError, "ActionType must be equal 1 bytes");
        return -1;
    }
    self->data.ActionType = *buf;
    return 0;
}
            
///保留头寸申请的持仓方向
// TThostFtdcPosiDirectionType char
static PyObject *PyCThostFtdcErrExecOrderField_get_PosiDirection(PyCThostFtdcErrExecOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.PosiDirection), 1);
}

///保留头寸申请的持仓方向
// TThostFtdcPosiDirectionType char
static int PyCThostFtdcErrExecOrderField_set_PosiDirection(PyCThostFtdcErrExecOrderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PosiDirection Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.PosiDirection)) {
        PyErr_SetString(PyExc_ValueError, "PosiDirection must be equal 1 bytes");
        return -1;
    }
    self->data.PosiDirection = *buf;
    return 0;
}
            
///期权行权后是否保留期货头寸的标记,该字段已废弃
// TThostFtdcExecOrderPositionFlagType char
static PyObject *PyCThostFtdcErrExecOrderField_get_ReservePositionFlag(PyCThostFtdcErrExecOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ReservePositionFlag), 1);
}

///期权行权后是否保留期货头寸的标记,该字段已废弃
// TThostFtdcExecOrderPositionFlagType char
static int PyCThostFtdcErrExecOrderField_set_ReservePositionFlag(PyCThostFtdcErrExecOrderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ReservePositionFlag Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ReservePositionFlag)) {
        PyErr_SetString(PyExc_ValueError, "ReservePositionFlag must be equal 1 bytes");
        return -1;
    }
    self->data.ReservePositionFlag = *buf;
    return 0;
}
            
///期权行权后生成的头寸是否自动平仓
// TThostFtdcExecOrderCloseFlagType char
static PyObject *PyCThostFtdcErrExecOrderField_get_CloseFlag(PyCThostFtdcErrExecOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.CloseFlag), 1);
}

///期权行权后生成的头寸是否自动平仓
// TThostFtdcExecOrderCloseFlagType char
static int PyCThostFtdcErrExecOrderField_set_CloseFlag(PyCThostFtdcErrExecOrderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CloseFlag Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CloseFlag)) {
        PyErr_SetString(PyExc_ValueError, "CloseFlag must be equal 1 bytes");
        return -1;
    }
    self->data.CloseFlag = *buf;
    return 0;
}
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcErrExecOrderField_get_ExchangeID(PyCThostFtdcErrExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcErrExecOrderField_set_ExchangeID(PyCThostFtdcErrExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcErrExecOrderField_get_InvestUnitID(PyCThostFtdcErrExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcErrExecOrderField_set_InvestUnitID(PyCThostFtdcErrExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcErrExecOrderField_get_AccountID(PyCThostFtdcErrExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AccountID, (Py_ssize_t)sizeof(self->data.AccountID));
    return PyBytes_FromString(self->data.AccountID);
}

///资金账号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcErrExecOrderField_set_AccountID(PyCThostFtdcErrExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcErrExecOrderField_get_CurrencyID(PyCThostFtdcErrExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcErrExecOrderField_set_CurrencyID(PyCThostFtdcErrExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcErrExecOrderField_get_ClientID(PyCThostFtdcErrExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientID, (Py_ssize_t)sizeof(self->data.ClientID));
    return PyBytes_FromString(self->data.ClientID);
}

///交易编码
// TThostFtdcClientIDType char[11]
static int PyCThostFtdcErrExecOrderField_set_ClientID(PyCThostFtdcErrExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcErrExecOrderField_get_reserve2(PyCThostFtdcErrExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve2, (Py_ssize_t)sizeof(self->data.reserve2));
    return PyBytes_FromString(self->data.reserve2);
}

///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static int PyCThostFtdcErrExecOrderField_set_reserve2(PyCThostFtdcErrExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcErrExecOrderField_get_MacAddress(PyCThostFtdcErrExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcErrExecOrderField_set_MacAddress(PyCThostFtdcErrExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcErrExecOrderField_get_ErrorID(PyCThostFtdcErrExecOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.ErrorID);
#else
    return PyInt_FromLong(self->data.ErrorID);
#endif
}

///错误代码
// TThostFtdcErrorIDType int
static int PyCThostFtdcErrExecOrderField_set_ErrorID(PyCThostFtdcErrExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcErrExecOrderField_get_ErrorMsg(PyCThostFtdcErrExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ErrorMsg, (Py_ssize_t)sizeof(self->data.ErrorMsg));
    return PyBytes_FromString(self->data.ErrorMsg);
}

///错误信息
// TThostFtdcErrorMsgType char[81]
static int PyCThostFtdcErrExecOrderField_set_ErrorMsg(PyCThostFtdcErrExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcErrExecOrderField_get_InstrumentID(PyCThostFtdcErrExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcErrExecOrderField_set_InstrumentID(PyCThostFtdcErrExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcErrExecOrderField_get_IPAddress(PyCThostFtdcErrExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcErrExecOrderField_set_IPAddress(PyCThostFtdcErrExecOrderField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcErrExecOrderField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcErrExecOrderField_get_BrokerID, (setter)PyCThostFtdcErrExecOrderField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcErrExecOrderField_get_InvestorID, (setter)PyCThostFtdcErrExecOrderField_set_InvestorID, (char *)"InvestorID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcErrExecOrderField_get_reserve1, (setter)PyCThostFtdcErrExecOrderField_set_reserve1, (char *)"reserve1", NULL},
    ///执行宣告引用 
    {(char *)"ExecOrderRef", (getter)PyCThostFtdcErrExecOrderField_get_ExecOrderRef, (setter)PyCThostFtdcErrExecOrderField_set_ExecOrderRef, (char *)"ExecOrderRef", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcErrExecOrderField_get_UserID, (setter)PyCThostFtdcErrExecOrderField_set_UserID, (char *)"UserID", NULL},
    ///数量 
    {(char *)"Volume", (getter)PyCThostFtdcErrExecOrderField_get_Volume, (setter)PyCThostFtdcErrExecOrderField_set_Volume, (char *)"Volume", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcErrExecOrderField_get_RequestID, (setter)PyCThostFtdcErrExecOrderField_set_RequestID, (char *)"RequestID", NULL},
    ///业务单元 
    {(char *)"BusinessUnit", (getter)PyCThostFtdcErrExecOrderField_get_BusinessUnit, (setter)PyCThostFtdcErrExecOrderField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
    ///开平标志 
    {(char *)"OffsetFlag", (getter)PyCThostFtdcErrExecOrderField_get_OffsetFlag, (setter)PyCThostFtdcErrExecOrderField_set_OffsetFlag, (char *)"OffsetFlag", NULL},
    ///投机套保标志 
    {(char *)"HedgeFlag", (getter)PyCThostFtdcErrExecOrderField_get_HedgeFlag, (setter)PyCThostFtdcErrExecOrderField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
    ///执行类型 
    {(char *)"ActionType", (getter)PyCThostFtdcErrExecOrderField_get_ActionType, (setter)PyCThostFtdcErrExecOrderField_set_ActionType, (char *)"ActionType", NULL},
    ///保留头寸申请的持仓方向 
    {(char *)"PosiDirection", (getter)PyCThostFtdcErrExecOrderField_get_PosiDirection, (setter)PyCThostFtdcErrExecOrderField_set_PosiDirection, (char *)"PosiDirection", NULL},
    ///期权行权后是否保留期货头寸的标记,该字段已废弃 
    {(char *)"ReservePositionFlag", (getter)PyCThostFtdcErrExecOrderField_get_ReservePositionFlag, (setter)PyCThostFtdcErrExecOrderField_set_ReservePositionFlag, (char *)"ReservePositionFlag", NULL},
    ///期权行权后生成的头寸是否自动平仓 
    {(char *)"CloseFlag", (getter)PyCThostFtdcErrExecOrderField_get_CloseFlag, (setter)PyCThostFtdcErrExecOrderField_set_CloseFlag, (char *)"CloseFlag", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcErrExecOrderField_get_ExchangeID, (setter)PyCThostFtdcErrExecOrderField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcErrExecOrderField_get_InvestUnitID, (setter)PyCThostFtdcErrExecOrderField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///资金账号 
    {(char *)"AccountID", (getter)PyCThostFtdcErrExecOrderField_get_AccountID, (setter)PyCThostFtdcErrExecOrderField_set_AccountID, (char *)"AccountID", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcErrExecOrderField_get_CurrencyID, (setter)PyCThostFtdcErrExecOrderField_set_CurrencyID, (char *)"CurrencyID", NULL},
    ///交易编码 
    {(char *)"ClientID", (getter)PyCThostFtdcErrExecOrderField_get_ClientID, (setter)PyCThostFtdcErrExecOrderField_set_ClientID, (char *)"ClientID", NULL},
    ///保留的无效字段 
    {(char *)"reserve2", (getter)PyCThostFtdcErrExecOrderField_get_reserve2, (setter)PyCThostFtdcErrExecOrderField_set_reserve2, (char *)"reserve2", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcErrExecOrderField_get_MacAddress, (setter)PyCThostFtdcErrExecOrderField_set_MacAddress, (char *)"MacAddress", NULL},
    ///错误代码 
    {(char *)"ErrorID", (getter)PyCThostFtdcErrExecOrderField_get_ErrorID, (setter)PyCThostFtdcErrExecOrderField_set_ErrorID, (char *)"ErrorID", NULL},
    ///错误信息 
    {(char *)"ErrorMsg", (getter)PyCThostFtdcErrExecOrderField_get_ErrorMsg, (setter)PyCThostFtdcErrExecOrderField_set_ErrorMsg, (char *)"ErrorMsg", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcErrExecOrderField_get_InstrumentID, (setter)PyCThostFtdcErrExecOrderField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcErrExecOrderField_get_IPAddress, (setter)PyCThostFtdcErrExecOrderField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcErrExecOrderFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcErrExecOrderField",	/* tp_name */
	sizeof(PyCThostFtdcErrExecOrderField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcErrExecOrderField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcErrExecOrderField_repr,   /* tp_repr */
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
	"CThostFtdcErrExecOrderField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcErrExecOrderField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcErrExecOrderField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcErrExecOrderField_new,       /* tp_new */
};

int PyCThostFtdcErrExecOrderFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcErrExecOrderField  */
	if (PyType_Ready(&PyCThostFtdcErrExecOrderFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcErrExecOrderField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcErrExecOrderFieldType);
    if( PyModule_AddObject(module, "CThostFtdcErrExecOrderField", (PyObject *)&PyCThostFtdcErrExecOrderFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcErrExecOrderField to module");
        Py_DECREF(&PyCThostFtdcErrExecOrderFieldType);
		return -1;
    }

    return 0;
}
