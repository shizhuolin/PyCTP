
#include "PyCThostFtdcInputOptionSelfCloseField.h"

///输入的期权自对冲

static PyObject *PyCThostFtdcInputOptionSelfCloseField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInputOptionSelfCloseField *self = (PyCThostFtdcInputOptionSelfCloseField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcInputOptionSelfCloseField_init(PyCThostFtdcInputOptionSelfCloseField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "OptionSelfCloseRef", "UserID", "Volume", "RequestID", "BusinessUnit", "HedgeFlag", "OptSelfCloseFlag", "ExchangeID", "InvestUnitID", "AccountID", "CurrencyID", "ClientID", "reserve2", "MacAddress", "InstrumentID", "IPAddress",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *InputOptionSelfCloseField_BrokerID = NULL;
    Py_ssize_t InputOptionSelfCloseField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *InputOptionSelfCloseField_InvestorID = NULL;
    Py_ssize_t InputOptionSelfCloseField_InvestorID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *InputOptionSelfCloseField_reserve1 = NULL;
    Py_ssize_t InputOptionSelfCloseField_reserve1_len = 0;
            
    ///期权自对冲引用
    // TThostFtdcOrderRefType char[13]
    const char *InputOptionSelfCloseField_OptionSelfCloseRef = NULL;
    Py_ssize_t InputOptionSelfCloseField_OptionSelfCloseRef_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *InputOptionSelfCloseField_UserID = NULL;
    Py_ssize_t InputOptionSelfCloseField_UserID_len = 0;
            
    ///数量
    // TThostFtdcVolumeType int
    int InputOptionSelfCloseField_Volume = 0;
        
    ///请求编号
    // TThostFtdcRequestIDType int
    int InputOptionSelfCloseField_RequestID = 0;
        
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    const char *InputOptionSelfCloseField_BusinessUnit = NULL;
    Py_ssize_t InputOptionSelfCloseField_BusinessUnit_len = 0;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    char InputOptionSelfCloseField_HedgeFlag = 0;
            
    ///期权行权的头寸是否自对冲
    // TThostFtdcOptSelfCloseFlagType char
    char InputOptionSelfCloseField_OptSelfCloseFlag = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *InputOptionSelfCloseField_ExchangeID = NULL;
    Py_ssize_t InputOptionSelfCloseField_ExchangeID_len = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *InputOptionSelfCloseField_InvestUnitID = NULL;
    Py_ssize_t InputOptionSelfCloseField_InvestUnitID_len = 0;
            
    ///资金账号
    // TThostFtdcAccountIDType char[13]
    const char *InputOptionSelfCloseField_AccountID = NULL;
    Py_ssize_t InputOptionSelfCloseField_AccountID_len = 0;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *InputOptionSelfCloseField_CurrencyID = NULL;
    Py_ssize_t InputOptionSelfCloseField_CurrencyID_len = 0;
            
    ///交易编码
    // TThostFtdcClientIDType char[11]
    const char *InputOptionSelfCloseField_ClientID = NULL;
    Py_ssize_t InputOptionSelfCloseField_ClientID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    const char *InputOptionSelfCloseField_reserve2 = NULL;
    Py_ssize_t InputOptionSelfCloseField_reserve2_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *InputOptionSelfCloseField_MacAddress = NULL;
    Py_ssize_t InputOptionSelfCloseField_MacAddress_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *InputOptionSelfCloseField_InstrumentID = NULL;
    Py_ssize_t InputOptionSelfCloseField_InstrumentID_len = 0;
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *InputOptionSelfCloseField_IPAddress = NULL;
    Py_ssize_t InputOptionSelfCloseField_IPAddress_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#iiy#ccy#y#y#y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#iis#ccs#s#s#s#s#s#s#s#s#", (char **)kwlist
#endif

        , &InputOptionSelfCloseField_BrokerID, &InputOptionSelfCloseField_BrokerID_len 
        , &InputOptionSelfCloseField_InvestorID, &InputOptionSelfCloseField_InvestorID_len 
        , &InputOptionSelfCloseField_reserve1, &InputOptionSelfCloseField_reserve1_len 
        , &InputOptionSelfCloseField_OptionSelfCloseRef, &InputOptionSelfCloseField_OptionSelfCloseRef_len 
        , &InputOptionSelfCloseField_UserID, &InputOptionSelfCloseField_UserID_len 
        , &InputOptionSelfCloseField_Volume 
        , &InputOptionSelfCloseField_RequestID 
        , &InputOptionSelfCloseField_BusinessUnit, &InputOptionSelfCloseField_BusinessUnit_len 
        , &InputOptionSelfCloseField_HedgeFlag 
        , &InputOptionSelfCloseField_OptSelfCloseFlag 
        , &InputOptionSelfCloseField_ExchangeID, &InputOptionSelfCloseField_ExchangeID_len 
        , &InputOptionSelfCloseField_InvestUnitID, &InputOptionSelfCloseField_InvestUnitID_len 
        , &InputOptionSelfCloseField_AccountID, &InputOptionSelfCloseField_AccountID_len 
        , &InputOptionSelfCloseField_CurrencyID, &InputOptionSelfCloseField_CurrencyID_len 
        , &InputOptionSelfCloseField_ClientID, &InputOptionSelfCloseField_ClientID_len 
        , &InputOptionSelfCloseField_reserve2, &InputOptionSelfCloseField_reserve2_len 
        , &InputOptionSelfCloseField_MacAddress, &InputOptionSelfCloseField_MacAddress_len 
        , &InputOptionSelfCloseField_InstrumentID, &InputOptionSelfCloseField_InstrumentID_len 
        , &InputOptionSelfCloseField_IPAddress, &InputOptionSelfCloseField_IPAddress_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( InputOptionSelfCloseField_BrokerID != NULL ) {
        if(InputOptionSelfCloseField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", InputOptionSelfCloseField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, InputOptionSelfCloseField_BrokerID, InputOptionSelfCloseField_BrokerID_len);        
        strncpy(self->data.BrokerID, InputOptionSelfCloseField_BrokerID, sizeof(self->data.BrokerID) );
        InputOptionSelfCloseField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( InputOptionSelfCloseField_InvestorID != NULL ) {
        if(InputOptionSelfCloseField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", InputOptionSelfCloseField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, InputOptionSelfCloseField_InvestorID, InputOptionSelfCloseField_InvestorID_len);        
        strncpy(self->data.InvestorID, InputOptionSelfCloseField_InvestorID, sizeof(self->data.InvestorID) );
        InputOptionSelfCloseField_InvestorID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( InputOptionSelfCloseField_reserve1 != NULL ) {
        if(InputOptionSelfCloseField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", InputOptionSelfCloseField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, InputOptionSelfCloseField_reserve1, InputOptionSelfCloseField_reserve1_len);        
        strncpy(self->data.reserve1, InputOptionSelfCloseField_reserve1, sizeof(self->data.reserve1) );
        InputOptionSelfCloseField_reserve1 = NULL;
    }
            
    ///期权自对冲引用
    // TThostFtdcOrderRefType char[13]
    if( InputOptionSelfCloseField_OptionSelfCloseRef != NULL ) {
        if(InputOptionSelfCloseField_OptionSelfCloseRef_len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseRef)) {
            PyErr_Format(PyExc_ValueError, "OptionSelfCloseRef too long: length=%zd (max allowed is %zd)", InputOptionSelfCloseField_OptionSelfCloseRef_len, (Py_ssize_t)sizeof(self->data.OptionSelfCloseRef));
            return -1;
        }
        // memset(self->data.OptionSelfCloseRef, 0, sizeof(self->data.OptionSelfCloseRef));
        // memcpy(self->data.OptionSelfCloseRef, InputOptionSelfCloseField_OptionSelfCloseRef, InputOptionSelfCloseField_OptionSelfCloseRef_len);        
        strncpy(self->data.OptionSelfCloseRef, InputOptionSelfCloseField_OptionSelfCloseRef, sizeof(self->data.OptionSelfCloseRef) );
        InputOptionSelfCloseField_OptionSelfCloseRef = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( InputOptionSelfCloseField_UserID != NULL ) {
        if(InputOptionSelfCloseField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", InputOptionSelfCloseField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, InputOptionSelfCloseField_UserID, InputOptionSelfCloseField_UserID_len);        
        strncpy(self->data.UserID, InputOptionSelfCloseField_UserID, sizeof(self->data.UserID) );
        InputOptionSelfCloseField_UserID = NULL;
    }
            
    ///数量
    // TThostFtdcVolumeType int
    self->data.Volume = InputOptionSelfCloseField_Volume;
        
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = InputOptionSelfCloseField_RequestID;
        
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    if( InputOptionSelfCloseField_BusinessUnit != NULL ) {
        if(InputOptionSelfCloseField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", InputOptionSelfCloseField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
            return -1;
        }
        // memset(self->data.BusinessUnit, 0, sizeof(self->data.BusinessUnit));
        // memcpy(self->data.BusinessUnit, InputOptionSelfCloseField_BusinessUnit, InputOptionSelfCloseField_BusinessUnit_len);        
        strncpy(self->data.BusinessUnit, InputOptionSelfCloseField_BusinessUnit, sizeof(self->data.BusinessUnit) );
        InputOptionSelfCloseField_BusinessUnit = NULL;
    }
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    self->data.HedgeFlag = InputOptionSelfCloseField_HedgeFlag;
            
    ///期权行权的头寸是否自对冲
    // TThostFtdcOptSelfCloseFlagType char
    self->data.OptSelfCloseFlag = InputOptionSelfCloseField_OptSelfCloseFlag;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( InputOptionSelfCloseField_ExchangeID != NULL ) {
        if(InputOptionSelfCloseField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", InputOptionSelfCloseField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, InputOptionSelfCloseField_ExchangeID, InputOptionSelfCloseField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, InputOptionSelfCloseField_ExchangeID, sizeof(self->data.ExchangeID) );
        InputOptionSelfCloseField_ExchangeID = NULL;
    }
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( InputOptionSelfCloseField_InvestUnitID != NULL ) {
        if(InputOptionSelfCloseField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", InputOptionSelfCloseField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, InputOptionSelfCloseField_InvestUnitID, InputOptionSelfCloseField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, InputOptionSelfCloseField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        InputOptionSelfCloseField_InvestUnitID = NULL;
    }
            
    ///资金账号
    // TThostFtdcAccountIDType char[13]
    if( InputOptionSelfCloseField_AccountID != NULL ) {
        if(InputOptionSelfCloseField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", InputOptionSelfCloseField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
            return -1;
        }
        // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
        // memcpy(self->data.AccountID, InputOptionSelfCloseField_AccountID, InputOptionSelfCloseField_AccountID_len);        
        strncpy(self->data.AccountID, InputOptionSelfCloseField_AccountID, sizeof(self->data.AccountID) );
        InputOptionSelfCloseField_AccountID = NULL;
    }
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( InputOptionSelfCloseField_CurrencyID != NULL ) {
        if(InputOptionSelfCloseField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", InputOptionSelfCloseField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, InputOptionSelfCloseField_CurrencyID, InputOptionSelfCloseField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, InputOptionSelfCloseField_CurrencyID, sizeof(self->data.CurrencyID) );
        InputOptionSelfCloseField_CurrencyID = NULL;
    }
            
    ///交易编码
    // TThostFtdcClientIDType char[11]
    if( InputOptionSelfCloseField_ClientID != NULL ) {
        if(InputOptionSelfCloseField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", InputOptionSelfCloseField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
            return -1;
        }
        // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
        // memcpy(self->data.ClientID, InputOptionSelfCloseField_ClientID, InputOptionSelfCloseField_ClientID_len);        
        strncpy(self->data.ClientID, InputOptionSelfCloseField_ClientID, sizeof(self->data.ClientID) );
        InputOptionSelfCloseField_ClientID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    if( InputOptionSelfCloseField_reserve2 != NULL ) {
        if(InputOptionSelfCloseField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", InputOptionSelfCloseField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
            return -1;
        }
        // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
        // memcpy(self->data.reserve2, InputOptionSelfCloseField_reserve2, InputOptionSelfCloseField_reserve2_len);        
        strncpy(self->data.reserve2, InputOptionSelfCloseField_reserve2, sizeof(self->data.reserve2) );
        InputOptionSelfCloseField_reserve2 = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( InputOptionSelfCloseField_MacAddress != NULL ) {
        if(InputOptionSelfCloseField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", InputOptionSelfCloseField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, InputOptionSelfCloseField_MacAddress, InputOptionSelfCloseField_MacAddress_len);        
        strncpy(self->data.MacAddress, InputOptionSelfCloseField_MacAddress, sizeof(self->data.MacAddress) );
        InputOptionSelfCloseField_MacAddress = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( InputOptionSelfCloseField_InstrumentID != NULL ) {
        if(InputOptionSelfCloseField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", InputOptionSelfCloseField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, InputOptionSelfCloseField_InstrumentID, InputOptionSelfCloseField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, InputOptionSelfCloseField_InstrumentID, sizeof(self->data.InstrumentID) );
        InputOptionSelfCloseField_InstrumentID = NULL;
    }
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( InputOptionSelfCloseField_IPAddress != NULL ) {
        if(InputOptionSelfCloseField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", InputOptionSelfCloseField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, InputOptionSelfCloseField_IPAddress, InputOptionSelfCloseField_IPAddress_len);        
        strncpy(self->data.IPAddress, InputOptionSelfCloseField_IPAddress, sizeof(self->data.IPAddress) );
        InputOptionSelfCloseField_IPAddress = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcInputOptionSelfCloseField_dealloc(PyCThostFtdcInputOptionSelfCloseField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInputOptionSelfCloseField_repr(PyCThostFtdcInputOptionSelfCloseField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:c,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:i,s:i,s:s,s:c,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"OptionSelfCloseRef", self->data.OptionSelfCloseRef//, (Py_ssize_t)sizeof(self->data.OptionSelfCloseRef) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"Volume", self->data.Volume 
        ,"RequestID", self->data.RequestID 
        ,"BusinessUnit", self->data.BusinessUnit//, (Py_ssize_t)sizeof(self->data.BusinessUnit) 
        ,"HedgeFlag", self->data.HedgeFlag 
        ,"OptSelfCloseFlag", self->data.OptSelfCloseFlag 
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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputOptionSelfCloseField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcInputOptionSelfCloseField_get_BrokerID(PyCThostFtdcInputOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcInputOptionSelfCloseField_set_BrokerID(PyCThostFtdcInputOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputOptionSelfCloseField_get_InvestorID(PyCThostFtdcInputOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcInputOptionSelfCloseField_set_InvestorID(PyCThostFtdcInputOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputOptionSelfCloseField_get_reserve1(PyCThostFtdcInputOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcInputOptionSelfCloseField_set_reserve1(PyCThostFtdcInputOptionSelfCloseField *self, PyObject* val, void *closure) {
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
            
///期权自对冲引用
// TThostFtdcOrderRefType char[13]
static PyObject *PyCThostFtdcInputOptionSelfCloseField_get_OptionSelfCloseRef(PyCThostFtdcInputOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OptionSelfCloseRef, (Py_ssize_t)sizeof(self->data.OptionSelfCloseRef));
    return PyBytes_FromString(self->data.OptionSelfCloseRef);
}

///期权自对冲引用
// TThostFtdcOrderRefType char[13]
static int PyCThostFtdcInputOptionSelfCloseField_set_OptionSelfCloseRef(PyCThostFtdcInputOptionSelfCloseField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OptionSelfCloseRef Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseRef)) {
        PyErr_SetString(PyExc_ValueError, "OptionSelfCloseRef must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.OptionSelfCloseRef, 0, sizeof(self->data.OptionSelfCloseRef));
    // memcpy(self->data.OptionSelfCloseRef, buf, len);
    strncpy(self->data.OptionSelfCloseRef, buf, sizeof(self->data.OptionSelfCloseRef));
    return 0;
}
            
///用户代码
// TThostFtdcUserIDType char[16]
static PyObject *PyCThostFtdcInputOptionSelfCloseField_get_UserID(PyCThostFtdcInputOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcInputOptionSelfCloseField_set_UserID(PyCThostFtdcInputOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputOptionSelfCloseField_get_Volume(PyCThostFtdcInputOptionSelfCloseField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.Volume);
#else
    return PyInt_FromLong(self->data.Volume);
#endif
}

///数量
// TThostFtdcVolumeType int
static int PyCThostFtdcInputOptionSelfCloseField_set_Volume(PyCThostFtdcInputOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputOptionSelfCloseField_get_RequestID(PyCThostFtdcInputOptionSelfCloseField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcInputOptionSelfCloseField_set_RequestID(PyCThostFtdcInputOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputOptionSelfCloseField_get_BusinessUnit(PyCThostFtdcInputOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BusinessUnit, (Py_ssize_t)sizeof(self->data.BusinessUnit));
    return PyBytes_FromString(self->data.BusinessUnit);
}

///业务单元
// TThostFtdcBusinessUnitType char[21]
static int PyCThostFtdcInputOptionSelfCloseField_set_BusinessUnit(PyCThostFtdcInputOptionSelfCloseField *self, PyObject* val, void *closure) {
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
            
///投机套保标志
// TThostFtdcHedgeFlagType char
static PyObject *PyCThostFtdcInputOptionSelfCloseField_get_HedgeFlag(PyCThostFtdcInputOptionSelfCloseField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

///投机套保标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcInputOptionSelfCloseField_set_HedgeFlag(PyCThostFtdcInputOptionSelfCloseField *self, PyObject* val, void *closure) {
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
            
///期权行权的头寸是否自对冲
// TThostFtdcOptSelfCloseFlagType char
static PyObject *PyCThostFtdcInputOptionSelfCloseField_get_OptSelfCloseFlag(PyCThostFtdcInputOptionSelfCloseField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OptSelfCloseFlag), 1);
}

///期权行权的头寸是否自对冲
// TThostFtdcOptSelfCloseFlagType char
static int PyCThostFtdcInputOptionSelfCloseField_set_OptSelfCloseFlag(PyCThostFtdcInputOptionSelfCloseField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OptSelfCloseFlag Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OptSelfCloseFlag)) {
        PyErr_SetString(PyExc_ValueError, "OptSelfCloseFlag must be equal 1 bytes");
        return -1;
    }
    self->data.OptSelfCloseFlag = *buf;
    return 0;
}
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcInputOptionSelfCloseField_get_ExchangeID(PyCThostFtdcInputOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcInputOptionSelfCloseField_set_ExchangeID(PyCThostFtdcInputOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputOptionSelfCloseField_get_InvestUnitID(PyCThostFtdcInputOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcInputOptionSelfCloseField_set_InvestUnitID(PyCThostFtdcInputOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputOptionSelfCloseField_get_AccountID(PyCThostFtdcInputOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AccountID, (Py_ssize_t)sizeof(self->data.AccountID));
    return PyBytes_FromString(self->data.AccountID);
}

///资金账号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcInputOptionSelfCloseField_set_AccountID(PyCThostFtdcInputOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputOptionSelfCloseField_get_CurrencyID(PyCThostFtdcInputOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcInputOptionSelfCloseField_set_CurrencyID(PyCThostFtdcInputOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputOptionSelfCloseField_get_ClientID(PyCThostFtdcInputOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientID, (Py_ssize_t)sizeof(self->data.ClientID));
    return PyBytes_FromString(self->data.ClientID);
}

///交易编码
// TThostFtdcClientIDType char[11]
static int PyCThostFtdcInputOptionSelfCloseField_set_ClientID(PyCThostFtdcInputOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputOptionSelfCloseField_get_reserve2(PyCThostFtdcInputOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve2, (Py_ssize_t)sizeof(self->data.reserve2));
    return PyBytes_FromString(self->data.reserve2);
}

///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static int PyCThostFtdcInputOptionSelfCloseField_set_reserve2(PyCThostFtdcInputOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputOptionSelfCloseField_get_MacAddress(PyCThostFtdcInputOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcInputOptionSelfCloseField_set_MacAddress(PyCThostFtdcInputOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputOptionSelfCloseField_get_InstrumentID(PyCThostFtdcInputOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcInputOptionSelfCloseField_set_InstrumentID(PyCThostFtdcInputOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputOptionSelfCloseField_get_IPAddress(PyCThostFtdcInputOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcInputOptionSelfCloseField_set_IPAddress(PyCThostFtdcInputOptionSelfCloseField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcInputOptionSelfCloseField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcInputOptionSelfCloseField_get_BrokerID, (setter)PyCThostFtdcInputOptionSelfCloseField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcInputOptionSelfCloseField_get_InvestorID, (setter)PyCThostFtdcInputOptionSelfCloseField_set_InvestorID, (char *)"InvestorID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcInputOptionSelfCloseField_get_reserve1, (setter)PyCThostFtdcInputOptionSelfCloseField_set_reserve1, (char *)"reserve1", NULL},
    ///期权自对冲引用 
    {(char *)"OptionSelfCloseRef", (getter)PyCThostFtdcInputOptionSelfCloseField_get_OptionSelfCloseRef, (setter)PyCThostFtdcInputOptionSelfCloseField_set_OptionSelfCloseRef, (char *)"OptionSelfCloseRef", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcInputOptionSelfCloseField_get_UserID, (setter)PyCThostFtdcInputOptionSelfCloseField_set_UserID, (char *)"UserID", NULL},
    ///数量 
    {(char *)"Volume", (getter)PyCThostFtdcInputOptionSelfCloseField_get_Volume, (setter)PyCThostFtdcInputOptionSelfCloseField_set_Volume, (char *)"Volume", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcInputOptionSelfCloseField_get_RequestID, (setter)PyCThostFtdcInputOptionSelfCloseField_set_RequestID, (char *)"RequestID", NULL},
    ///业务单元 
    {(char *)"BusinessUnit", (getter)PyCThostFtdcInputOptionSelfCloseField_get_BusinessUnit, (setter)PyCThostFtdcInputOptionSelfCloseField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
    ///投机套保标志 
    {(char *)"HedgeFlag", (getter)PyCThostFtdcInputOptionSelfCloseField_get_HedgeFlag, (setter)PyCThostFtdcInputOptionSelfCloseField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
    ///期权行权的头寸是否自对冲 
    {(char *)"OptSelfCloseFlag", (getter)PyCThostFtdcInputOptionSelfCloseField_get_OptSelfCloseFlag, (setter)PyCThostFtdcInputOptionSelfCloseField_set_OptSelfCloseFlag, (char *)"OptSelfCloseFlag", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcInputOptionSelfCloseField_get_ExchangeID, (setter)PyCThostFtdcInputOptionSelfCloseField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcInputOptionSelfCloseField_get_InvestUnitID, (setter)PyCThostFtdcInputOptionSelfCloseField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///资金账号 
    {(char *)"AccountID", (getter)PyCThostFtdcInputOptionSelfCloseField_get_AccountID, (setter)PyCThostFtdcInputOptionSelfCloseField_set_AccountID, (char *)"AccountID", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcInputOptionSelfCloseField_get_CurrencyID, (setter)PyCThostFtdcInputOptionSelfCloseField_set_CurrencyID, (char *)"CurrencyID", NULL},
    ///交易编码 
    {(char *)"ClientID", (getter)PyCThostFtdcInputOptionSelfCloseField_get_ClientID, (setter)PyCThostFtdcInputOptionSelfCloseField_set_ClientID, (char *)"ClientID", NULL},
    ///保留的无效字段 
    {(char *)"reserve2", (getter)PyCThostFtdcInputOptionSelfCloseField_get_reserve2, (setter)PyCThostFtdcInputOptionSelfCloseField_set_reserve2, (char *)"reserve2", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcInputOptionSelfCloseField_get_MacAddress, (setter)PyCThostFtdcInputOptionSelfCloseField_set_MacAddress, (char *)"MacAddress", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcInputOptionSelfCloseField_get_InstrumentID, (setter)PyCThostFtdcInputOptionSelfCloseField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcInputOptionSelfCloseField_get_IPAddress, (setter)PyCThostFtdcInputOptionSelfCloseField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInputOptionSelfCloseFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInputOptionSelfCloseField",	/* tp_name */
	sizeof(PyCThostFtdcInputOptionSelfCloseField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInputOptionSelfCloseField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInputOptionSelfCloseField_repr,   /* tp_repr */
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
	"CThostFtdcInputOptionSelfCloseField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInputOptionSelfCloseField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInputOptionSelfCloseField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInputOptionSelfCloseField_new,       /* tp_new */
};

int PyCThostFtdcInputOptionSelfCloseFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInputOptionSelfCloseField  */
	if (PyType_Ready(&PyCThostFtdcInputOptionSelfCloseFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInputOptionSelfCloseField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInputOptionSelfCloseFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInputOptionSelfCloseField", (PyObject *)&PyCThostFtdcInputOptionSelfCloseFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInputOptionSelfCloseField to module");
        Py_DECREF(&PyCThostFtdcInputOptionSelfCloseFieldType);
		return -1;
    }

    return 0;
}
