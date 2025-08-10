
#include "PyCThostFtdcInputExecOrderField.h"

///输入的执行宣告

static PyObject *PyCThostFtdcInputExecOrderField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInputExecOrderField *self = (PyCThostFtdcInputExecOrderField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcInputExecOrderField_init(PyCThostFtdcInputExecOrderField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "ExecOrderRef", "UserID", "Volume", "RequestID", "BusinessUnit", "OffsetFlag", "HedgeFlag", "ActionType", "PosiDirection", "ReservePositionFlag", "CloseFlag", "ExchangeID", "InvestUnitID", "AccountID", "CurrencyID", "ClientID", "reserve2", "MacAddress", "InstrumentID", "IPAddress",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *InputExecOrderField_BrokerID = NULL;
    Py_ssize_t InputExecOrderField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *InputExecOrderField_InvestorID = NULL;
    Py_ssize_t InputExecOrderField_InvestorID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *InputExecOrderField_reserve1 = NULL;
    Py_ssize_t InputExecOrderField_reserve1_len = 0;
            
    ///执行宣告引用
    // TThostFtdcOrderRefType char[13]
    const char *InputExecOrderField_ExecOrderRef = NULL;
    Py_ssize_t InputExecOrderField_ExecOrderRef_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *InputExecOrderField_UserID = NULL;
    Py_ssize_t InputExecOrderField_UserID_len = 0;
            
    ///数量
    // TThostFtdcVolumeType int
    int InputExecOrderField_Volume = 0;
        
    ///请求编号
    // TThostFtdcRequestIDType int
    int InputExecOrderField_RequestID = 0;
        
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    const char *InputExecOrderField_BusinessUnit = NULL;
    Py_ssize_t InputExecOrderField_BusinessUnit_len = 0;
            
    ///开平标志
    // TThostFtdcOffsetFlagType char
    char InputExecOrderField_OffsetFlag = 0;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    char InputExecOrderField_HedgeFlag = 0;
            
    ///执行类型
    // TThostFtdcActionTypeType char
    char InputExecOrderField_ActionType = 0;
            
    ///保留头寸申请的持仓方向
    // TThostFtdcPosiDirectionType char
    char InputExecOrderField_PosiDirection = 0;
            
    ///期权行权后是否保留期货头寸的标记,该字段已废弃
    // TThostFtdcExecOrderPositionFlagType char
    char InputExecOrderField_ReservePositionFlag = 0;
            
    ///期权行权后生成的头寸是否自动平仓
    // TThostFtdcExecOrderCloseFlagType char
    char InputExecOrderField_CloseFlag = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *InputExecOrderField_ExchangeID = NULL;
    Py_ssize_t InputExecOrderField_ExchangeID_len = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *InputExecOrderField_InvestUnitID = NULL;
    Py_ssize_t InputExecOrderField_InvestUnitID_len = 0;
            
    ///资金账号
    // TThostFtdcAccountIDType char[13]
    const char *InputExecOrderField_AccountID = NULL;
    Py_ssize_t InputExecOrderField_AccountID_len = 0;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *InputExecOrderField_CurrencyID = NULL;
    Py_ssize_t InputExecOrderField_CurrencyID_len = 0;
            
    ///交易编码
    // TThostFtdcClientIDType char[11]
    const char *InputExecOrderField_ClientID = NULL;
    Py_ssize_t InputExecOrderField_ClientID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    const char *InputExecOrderField_reserve2 = NULL;
    Py_ssize_t InputExecOrderField_reserve2_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *InputExecOrderField_MacAddress = NULL;
    Py_ssize_t InputExecOrderField_MacAddress_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *InputExecOrderField_InstrumentID = NULL;
    Py_ssize_t InputExecOrderField_InstrumentID_len = 0;
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *InputExecOrderField_IPAddress = NULL;
    Py_ssize_t InputExecOrderField_IPAddress_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#iiy#ccccccy#y#y#y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#iis#ccccccs#s#s#s#s#s#s#s#s#", (char **)kwlist
#endif

        , &InputExecOrderField_BrokerID, &InputExecOrderField_BrokerID_len 
        , &InputExecOrderField_InvestorID, &InputExecOrderField_InvestorID_len 
        , &InputExecOrderField_reserve1, &InputExecOrderField_reserve1_len 
        , &InputExecOrderField_ExecOrderRef, &InputExecOrderField_ExecOrderRef_len 
        , &InputExecOrderField_UserID, &InputExecOrderField_UserID_len 
        , &InputExecOrderField_Volume 
        , &InputExecOrderField_RequestID 
        , &InputExecOrderField_BusinessUnit, &InputExecOrderField_BusinessUnit_len 
        , &InputExecOrderField_OffsetFlag 
        , &InputExecOrderField_HedgeFlag 
        , &InputExecOrderField_ActionType 
        , &InputExecOrderField_PosiDirection 
        , &InputExecOrderField_ReservePositionFlag 
        , &InputExecOrderField_CloseFlag 
        , &InputExecOrderField_ExchangeID, &InputExecOrderField_ExchangeID_len 
        , &InputExecOrderField_InvestUnitID, &InputExecOrderField_InvestUnitID_len 
        , &InputExecOrderField_AccountID, &InputExecOrderField_AccountID_len 
        , &InputExecOrderField_CurrencyID, &InputExecOrderField_CurrencyID_len 
        , &InputExecOrderField_ClientID, &InputExecOrderField_ClientID_len 
        , &InputExecOrderField_reserve2, &InputExecOrderField_reserve2_len 
        , &InputExecOrderField_MacAddress, &InputExecOrderField_MacAddress_len 
        , &InputExecOrderField_InstrumentID, &InputExecOrderField_InstrumentID_len 
        , &InputExecOrderField_IPAddress, &InputExecOrderField_IPAddress_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( InputExecOrderField_BrokerID != NULL ) {
        if(InputExecOrderField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", InputExecOrderField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, InputExecOrderField_BrokerID, InputExecOrderField_BrokerID_len);        
        strncpy(self->data.BrokerID, InputExecOrderField_BrokerID, sizeof(self->data.BrokerID) );
        InputExecOrderField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( InputExecOrderField_InvestorID != NULL ) {
        if(InputExecOrderField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", InputExecOrderField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, InputExecOrderField_InvestorID, InputExecOrderField_InvestorID_len);        
        strncpy(self->data.InvestorID, InputExecOrderField_InvestorID, sizeof(self->data.InvestorID) );
        InputExecOrderField_InvestorID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( InputExecOrderField_reserve1 != NULL ) {
        if(InputExecOrderField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", InputExecOrderField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, InputExecOrderField_reserve1, InputExecOrderField_reserve1_len);        
        strncpy(self->data.reserve1, InputExecOrderField_reserve1, sizeof(self->data.reserve1) );
        InputExecOrderField_reserve1 = NULL;
    }
            
    ///执行宣告引用
    // TThostFtdcOrderRefType char[13]
    if( InputExecOrderField_ExecOrderRef != NULL ) {
        if(InputExecOrderField_ExecOrderRef_len > (Py_ssize_t)sizeof(self->data.ExecOrderRef)) {
            PyErr_Format(PyExc_ValueError, "ExecOrderRef too long: length=%zd (max allowed is %zd)", InputExecOrderField_ExecOrderRef_len, (Py_ssize_t)sizeof(self->data.ExecOrderRef));
            return -1;
        }
        // memset(self->data.ExecOrderRef, 0, sizeof(self->data.ExecOrderRef));
        // memcpy(self->data.ExecOrderRef, InputExecOrderField_ExecOrderRef, InputExecOrderField_ExecOrderRef_len);        
        strncpy(self->data.ExecOrderRef, InputExecOrderField_ExecOrderRef, sizeof(self->data.ExecOrderRef) );
        InputExecOrderField_ExecOrderRef = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( InputExecOrderField_UserID != NULL ) {
        if(InputExecOrderField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", InputExecOrderField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, InputExecOrderField_UserID, InputExecOrderField_UserID_len);        
        strncpy(self->data.UserID, InputExecOrderField_UserID, sizeof(self->data.UserID) );
        InputExecOrderField_UserID = NULL;
    }
            
    ///数量
    // TThostFtdcVolumeType int
    self->data.Volume = InputExecOrderField_Volume;
        
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = InputExecOrderField_RequestID;
        
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    if( InputExecOrderField_BusinessUnit != NULL ) {
        if(InputExecOrderField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", InputExecOrderField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
            return -1;
        }
        // memset(self->data.BusinessUnit, 0, sizeof(self->data.BusinessUnit));
        // memcpy(self->data.BusinessUnit, InputExecOrderField_BusinessUnit, InputExecOrderField_BusinessUnit_len);        
        strncpy(self->data.BusinessUnit, InputExecOrderField_BusinessUnit, sizeof(self->data.BusinessUnit) );
        InputExecOrderField_BusinessUnit = NULL;
    }
            
    ///开平标志
    // TThostFtdcOffsetFlagType char
    self->data.OffsetFlag = InputExecOrderField_OffsetFlag;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    self->data.HedgeFlag = InputExecOrderField_HedgeFlag;
            
    ///执行类型
    // TThostFtdcActionTypeType char
    self->data.ActionType = InputExecOrderField_ActionType;
            
    ///保留头寸申请的持仓方向
    // TThostFtdcPosiDirectionType char
    self->data.PosiDirection = InputExecOrderField_PosiDirection;
            
    ///期权行权后是否保留期货头寸的标记,该字段已废弃
    // TThostFtdcExecOrderPositionFlagType char
    self->data.ReservePositionFlag = InputExecOrderField_ReservePositionFlag;
            
    ///期权行权后生成的头寸是否自动平仓
    // TThostFtdcExecOrderCloseFlagType char
    self->data.CloseFlag = InputExecOrderField_CloseFlag;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( InputExecOrderField_ExchangeID != NULL ) {
        if(InputExecOrderField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", InputExecOrderField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, InputExecOrderField_ExchangeID, InputExecOrderField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, InputExecOrderField_ExchangeID, sizeof(self->data.ExchangeID) );
        InputExecOrderField_ExchangeID = NULL;
    }
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( InputExecOrderField_InvestUnitID != NULL ) {
        if(InputExecOrderField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", InputExecOrderField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, InputExecOrderField_InvestUnitID, InputExecOrderField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, InputExecOrderField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        InputExecOrderField_InvestUnitID = NULL;
    }
            
    ///资金账号
    // TThostFtdcAccountIDType char[13]
    if( InputExecOrderField_AccountID != NULL ) {
        if(InputExecOrderField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", InputExecOrderField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
            return -1;
        }
        // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
        // memcpy(self->data.AccountID, InputExecOrderField_AccountID, InputExecOrderField_AccountID_len);        
        strncpy(self->data.AccountID, InputExecOrderField_AccountID, sizeof(self->data.AccountID) );
        InputExecOrderField_AccountID = NULL;
    }
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( InputExecOrderField_CurrencyID != NULL ) {
        if(InputExecOrderField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", InputExecOrderField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, InputExecOrderField_CurrencyID, InputExecOrderField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, InputExecOrderField_CurrencyID, sizeof(self->data.CurrencyID) );
        InputExecOrderField_CurrencyID = NULL;
    }
            
    ///交易编码
    // TThostFtdcClientIDType char[11]
    if( InputExecOrderField_ClientID != NULL ) {
        if(InputExecOrderField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", InputExecOrderField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
            return -1;
        }
        // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
        // memcpy(self->data.ClientID, InputExecOrderField_ClientID, InputExecOrderField_ClientID_len);        
        strncpy(self->data.ClientID, InputExecOrderField_ClientID, sizeof(self->data.ClientID) );
        InputExecOrderField_ClientID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    if( InputExecOrderField_reserve2 != NULL ) {
        if(InputExecOrderField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", InputExecOrderField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
            return -1;
        }
        // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
        // memcpy(self->data.reserve2, InputExecOrderField_reserve2, InputExecOrderField_reserve2_len);        
        strncpy(self->data.reserve2, InputExecOrderField_reserve2, sizeof(self->data.reserve2) );
        InputExecOrderField_reserve2 = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( InputExecOrderField_MacAddress != NULL ) {
        if(InputExecOrderField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", InputExecOrderField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, InputExecOrderField_MacAddress, InputExecOrderField_MacAddress_len);        
        strncpy(self->data.MacAddress, InputExecOrderField_MacAddress, sizeof(self->data.MacAddress) );
        InputExecOrderField_MacAddress = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( InputExecOrderField_InstrumentID != NULL ) {
        if(InputExecOrderField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", InputExecOrderField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, InputExecOrderField_InstrumentID, InputExecOrderField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, InputExecOrderField_InstrumentID, sizeof(self->data.InstrumentID) );
        InputExecOrderField_InstrumentID = NULL;
    }
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( InputExecOrderField_IPAddress != NULL ) {
        if(InputExecOrderField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", InputExecOrderField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, InputExecOrderField_IPAddress, InputExecOrderField_IPAddress_len);        
        strncpy(self->data.IPAddress, InputExecOrderField_IPAddress, sizeof(self->data.IPAddress) );
        InputExecOrderField_IPAddress = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcInputExecOrderField_dealloc(PyCThostFtdcInputExecOrderField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInputExecOrderField_repr(PyCThostFtdcInputExecOrderField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:c,s:c,s:c,s:c,s:c,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:i,s:i,s:s,s:c,s:c,s:c,s:c,s:c,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s}"
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
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"IPAddress", self->data.IPAddress//, (Py_ssize_t)sizeof(self->data.IPAddress) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputExecOrderField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcInputExecOrderField_get_BrokerID(PyCThostFtdcInputExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcInputExecOrderField_set_BrokerID(PyCThostFtdcInputExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputExecOrderField_get_InvestorID(PyCThostFtdcInputExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcInputExecOrderField_set_InvestorID(PyCThostFtdcInputExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputExecOrderField_get_reserve1(PyCThostFtdcInputExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcInputExecOrderField_set_reserve1(PyCThostFtdcInputExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputExecOrderField_get_ExecOrderRef(PyCThostFtdcInputExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExecOrderRef, (Py_ssize_t)sizeof(self->data.ExecOrderRef));
    return PyBytes_FromString(self->data.ExecOrderRef);
}

///执行宣告引用
// TThostFtdcOrderRefType char[13]
static int PyCThostFtdcInputExecOrderField_set_ExecOrderRef(PyCThostFtdcInputExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputExecOrderField_get_UserID(PyCThostFtdcInputExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcInputExecOrderField_set_UserID(PyCThostFtdcInputExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputExecOrderField_get_Volume(PyCThostFtdcInputExecOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.Volume);
#else
    return PyInt_FromLong(self->data.Volume);
#endif
}

///数量
// TThostFtdcVolumeType int
static int PyCThostFtdcInputExecOrderField_set_Volume(PyCThostFtdcInputExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputExecOrderField_get_RequestID(PyCThostFtdcInputExecOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcInputExecOrderField_set_RequestID(PyCThostFtdcInputExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputExecOrderField_get_BusinessUnit(PyCThostFtdcInputExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BusinessUnit, (Py_ssize_t)sizeof(self->data.BusinessUnit));
    return PyBytes_FromString(self->data.BusinessUnit);
}

///业务单元
// TThostFtdcBusinessUnitType char[21]
static int PyCThostFtdcInputExecOrderField_set_BusinessUnit(PyCThostFtdcInputExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputExecOrderField_get_OffsetFlag(PyCThostFtdcInputExecOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OffsetFlag), 1);
}

///开平标志
// TThostFtdcOffsetFlagType char
static int PyCThostFtdcInputExecOrderField_set_OffsetFlag(PyCThostFtdcInputExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputExecOrderField_get_HedgeFlag(PyCThostFtdcInputExecOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

///投机套保标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcInputExecOrderField_set_HedgeFlag(PyCThostFtdcInputExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputExecOrderField_get_ActionType(PyCThostFtdcInputExecOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionType), 1);
}

///执行类型
// TThostFtdcActionTypeType char
static int PyCThostFtdcInputExecOrderField_set_ActionType(PyCThostFtdcInputExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputExecOrderField_get_PosiDirection(PyCThostFtdcInputExecOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.PosiDirection), 1);
}

///保留头寸申请的持仓方向
// TThostFtdcPosiDirectionType char
static int PyCThostFtdcInputExecOrderField_set_PosiDirection(PyCThostFtdcInputExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputExecOrderField_get_ReservePositionFlag(PyCThostFtdcInputExecOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ReservePositionFlag), 1);
}

///期权行权后是否保留期货头寸的标记,该字段已废弃
// TThostFtdcExecOrderPositionFlagType char
static int PyCThostFtdcInputExecOrderField_set_ReservePositionFlag(PyCThostFtdcInputExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputExecOrderField_get_CloseFlag(PyCThostFtdcInputExecOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.CloseFlag), 1);
}

///期权行权后生成的头寸是否自动平仓
// TThostFtdcExecOrderCloseFlagType char
static int PyCThostFtdcInputExecOrderField_set_CloseFlag(PyCThostFtdcInputExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputExecOrderField_get_ExchangeID(PyCThostFtdcInputExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcInputExecOrderField_set_ExchangeID(PyCThostFtdcInputExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputExecOrderField_get_InvestUnitID(PyCThostFtdcInputExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcInputExecOrderField_set_InvestUnitID(PyCThostFtdcInputExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputExecOrderField_get_AccountID(PyCThostFtdcInputExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AccountID, (Py_ssize_t)sizeof(self->data.AccountID));
    return PyBytes_FromString(self->data.AccountID);
}

///资金账号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcInputExecOrderField_set_AccountID(PyCThostFtdcInputExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputExecOrderField_get_CurrencyID(PyCThostFtdcInputExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcInputExecOrderField_set_CurrencyID(PyCThostFtdcInputExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputExecOrderField_get_ClientID(PyCThostFtdcInputExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientID, (Py_ssize_t)sizeof(self->data.ClientID));
    return PyBytes_FromString(self->data.ClientID);
}

///交易编码
// TThostFtdcClientIDType char[11]
static int PyCThostFtdcInputExecOrderField_set_ClientID(PyCThostFtdcInputExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputExecOrderField_get_reserve2(PyCThostFtdcInputExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve2, (Py_ssize_t)sizeof(self->data.reserve2));
    return PyBytes_FromString(self->data.reserve2);
}

///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static int PyCThostFtdcInputExecOrderField_set_reserve2(PyCThostFtdcInputExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputExecOrderField_get_MacAddress(PyCThostFtdcInputExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcInputExecOrderField_set_MacAddress(PyCThostFtdcInputExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputExecOrderField_get_InstrumentID(PyCThostFtdcInputExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcInputExecOrderField_set_InstrumentID(PyCThostFtdcInputExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputExecOrderField_get_IPAddress(PyCThostFtdcInputExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcInputExecOrderField_set_IPAddress(PyCThostFtdcInputExecOrderField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcInputExecOrderField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcInputExecOrderField_get_BrokerID, (setter)PyCThostFtdcInputExecOrderField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcInputExecOrderField_get_InvestorID, (setter)PyCThostFtdcInputExecOrderField_set_InvestorID, (char *)"InvestorID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcInputExecOrderField_get_reserve1, (setter)PyCThostFtdcInputExecOrderField_set_reserve1, (char *)"reserve1", NULL},
    ///执行宣告引用 
    {(char *)"ExecOrderRef", (getter)PyCThostFtdcInputExecOrderField_get_ExecOrderRef, (setter)PyCThostFtdcInputExecOrderField_set_ExecOrderRef, (char *)"ExecOrderRef", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcInputExecOrderField_get_UserID, (setter)PyCThostFtdcInputExecOrderField_set_UserID, (char *)"UserID", NULL},
    ///数量 
    {(char *)"Volume", (getter)PyCThostFtdcInputExecOrderField_get_Volume, (setter)PyCThostFtdcInputExecOrderField_set_Volume, (char *)"Volume", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcInputExecOrderField_get_RequestID, (setter)PyCThostFtdcInputExecOrderField_set_RequestID, (char *)"RequestID", NULL},
    ///业务单元 
    {(char *)"BusinessUnit", (getter)PyCThostFtdcInputExecOrderField_get_BusinessUnit, (setter)PyCThostFtdcInputExecOrderField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
    ///开平标志 
    {(char *)"OffsetFlag", (getter)PyCThostFtdcInputExecOrderField_get_OffsetFlag, (setter)PyCThostFtdcInputExecOrderField_set_OffsetFlag, (char *)"OffsetFlag", NULL},
    ///投机套保标志 
    {(char *)"HedgeFlag", (getter)PyCThostFtdcInputExecOrderField_get_HedgeFlag, (setter)PyCThostFtdcInputExecOrderField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
    ///执行类型 
    {(char *)"ActionType", (getter)PyCThostFtdcInputExecOrderField_get_ActionType, (setter)PyCThostFtdcInputExecOrderField_set_ActionType, (char *)"ActionType", NULL},
    ///保留头寸申请的持仓方向 
    {(char *)"PosiDirection", (getter)PyCThostFtdcInputExecOrderField_get_PosiDirection, (setter)PyCThostFtdcInputExecOrderField_set_PosiDirection, (char *)"PosiDirection", NULL},
    ///期权行权后是否保留期货头寸的标记,该字段已废弃 
    {(char *)"ReservePositionFlag", (getter)PyCThostFtdcInputExecOrderField_get_ReservePositionFlag, (setter)PyCThostFtdcInputExecOrderField_set_ReservePositionFlag, (char *)"ReservePositionFlag", NULL},
    ///期权行权后生成的头寸是否自动平仓 
    {(char *)"CloseFlag", (getter)PyCThostFtdcInputExecOrderField_get_CloseFlag, (setter)PyCThostFtdcInputExecOrderField_set_CloseFlag, (char *)"CloseFlag", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcInputExecOrderField_get_ExchangeID, (setter)PyCThostFtdcInputExecOrderField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcInputExecOrderField_get_InvestUnitID, (setter)PyCThostFtdcInputExecOrderField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///资金账号 
    {(char *)"AccountID", (getter)PyCThostFtdcInputExecOrderField_get_AccountID, (setter)PyCThostFtdcInputExecOrderField_set_AccountID, (char *)"AccountID", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcInputExecOrderField_get_CurrencyID, (setter)PyCThostFtdcInputExecOrderField_set_CurrencyID, (char *)"CurrencyID", NULL},
    ///交易编码 
    {(char *)"ClientID", (getter)PyCThostFtdcInputExecOrderField_get_ClientID, (setter)PyCThostFtdcInputExecOrderField_set_ClientID, (char *)"ClientID", NULL},
    ///保留的无效字段 
    {(char *)"reserve2", (getter)PyCThostFtdcInputExecOrderField_get_reserve2, (setter)PyCThostFtdcInputExecOrderField_set_reserve2, (char *)"reserve2", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcInputExecOrderField_get_MacAddress, (setter)PyCThostFtdcInputExecOrderField_set_MacAddress, (char *)"MacAddress", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcInputExecOrderField_get_InstrumentID, (setter)PyCThostFtdcInputExecOrderField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcInputExecOrderField_get_IPAddress, (setter)PyCThostFtdcInputExecOrderField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInputExecOrderFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInputExecOrderField",	/* tp_name */
	sizeof(PyCThostFtdcInputExecOrderField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInputExecOrderField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInputExecOrderField_repr,   /* tp_repr */
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
	"CThostFtdcInputExecOrderField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInputExecOrderField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInputExecOrderField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInputExecOrderField_new,       /* tp_new */
};

int PyCThostFtdcInputExecOrderFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInputExecOrderField  */
	if (PyType_Ready(&PyCThostFtdcInputExecOrderFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInputExecOrderField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInputExecOrderFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInputExecOrderField", (PyObject *)&PyCThostFtdcInputExecOrderFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInputExecOrderField to module");
        Py_DECREF(&PyCThostFtdcInputExecOrderFieldType);
		return -1;
    }

    return 0;
}
