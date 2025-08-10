
#include "PyCThostFtdcInputOptionSelfCloseActionField.h"

///输入期权自对冲操作

static PyObject *PyCThostFtdcInputOptionSelfCloseActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInputOptionSelfCloseActionField *self = (PyCThostFtdcInputOptionSelfCloseActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcInputOptionSelfCloseActionField_init(PyCThostFtdcInputOptionSelfCloseActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "OptionSelfCloseActionRef", "OptionSelfCloseRef", "RequestID", "FrontID", "SessionID", "ExchangeID", "OptionSelfCloseSysID", "ActionFlag", "UserID", "reserve1", "InvestUnitID", "reserve2", "MacAddress", "InstrumentID", "IPAddress",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *InputOptionSelfCloseActionField_BrokerID = NULL;
    Py_ssize_t InputOptionSelfCloseActionField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *InputOptionSelfCloseActionField_InvestorID = NULL;
    Py_ssize_t InputOptionSelfCloseActionField_InvestorID_len = 0;
            
    ///期权自对冲操作引用
    // TThostFtdcOrderActionRefType int
    int InputOptionSelfCloseActionField_OptionSelfCloseActionRef = 0;
        
    ///期权自对冲引用
    // TThostFtdcOrderRefType char[13]
    const char *InputOptionSelfCloseActionField_OptionSelfCloseRef = NULL;
    Py_ssize_t InputOptionSelfCloseActionField_OptionSelfCloseRef_len = 0;
            
    ///请求编号
    // TThostFtdcRequestIDType int
    int InputOptionSelfCloseActionField_RequestID = 0;
        
    ///前置编号
    // TThostFtdcFrontIDType int
    int InputOptionSelfCloseActionField_FrontID = 0;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    int InputOptionSelfCloseActionField_SessionID = 0;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *InputOptionSelfCloseActionField_ExchangeID = NULL;
    Py_ssize_t InputOptionSelfCloseActionField_ExchangeID_len = 0;
            
    ///期权自对冲操作编号
    // TThostFtdcOrderSysIDType char[21]
    const char *InputOptionSelfCloseActionField_OptionSelfCloseSysID = NULL;
    Py_ssize_t InputOptionSelfCloseActionField_OptionSelfCloseSysID_len = 0;
            
    ///操作标志
    // TThostFtdcActionFlagType char
    char InputOptionSelfCloseActionField_ActionFlag = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *InputOptionSelfCloseActionField_UserID = NULL;
    Py_ssize_t InputOptionSelfCloseActionField_UserID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *InputOptionSelfCloseActionField_reserve1 = NULL;
    Py_ssize_t InputOptionSelfCloseActionField_reserve1_len = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *InputOptionSelfCloseActionField_InvestUnitID = NULL;
    Py_ssize_t InputOptionSelfCloseActionField_InvestUnitID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    const char *InputOptionSelfCloseActionField_reserve2 = NULL;
    Py_ssize_t InputOptionSelfCloseActionField_reserve2_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *InputOptionSelfCloseActionField_MacAddress = NULL;
    Py_ssize_t InputOptionSelfCloseActionField_MacAddress_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *InputOptionSelfCloseActionField_InstrumentID = NULL;
    Py_ssize_t InputOptionSelfCloseActionField_InstrumentID_len = 0;
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *InputOptionSelfCloseActionField_IPAddress = NULL;
    Py_ssize_t InputOptionSelfCloseActionField_IPAddress_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iy#iiiy#y#cy#y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#is#iiis#s#cs#s#s#s#s#s#s#", (char **)kwlist
#endif

        , &InputOptionSelfCloseActionField_BrokerID, &InputOptionSelfCloseActionField_BrokerID_len 
        , &InputOptionSelfCloseActionField_InvestorID, &InputOptionSelfCloseActionField_InvestorID_len 
        , &InputOptionSelfCloseActionField_OptionSelfCloseActionRef 
        , &InputOptionSelfCloseActionField_OptionSelfCloseRef, &InputOptionSelfCloseActionField_OptionSelfCloseRef_len 
        , &InputOptionSelfCloseActionField_RequestID 
        , &InputOptionSelfCloseActionField_FrontID 
        , &InputOptionSelfCloseActionField_SessionID 
        , &InputOptionSelfCloseActionField_ExchangeID, &InputOptionSelfCloseActionField_ExchangeID_len 
        , &InputOptionSelfCloseActionField_OptionSelfCloseSysID, &InputOptionSelfCloseActionField_OptionSelfCloseSysID_len 
        , &InputOptionSelfCloseActionField_ActionFlag 
        , &InputOptionSelfCloseActionField_UserID, &InputOptionSelfCloseActionField_UserID_len 
        , &InputOptionSelfCloseActionField_reserve1, &InputOptionSelfCloseActionField_reserve1_len 
        , &InputOptionSelfCloseActionField_InvestUnitID, &InputOptionSelfCloseActionField_InvestUnitID_len 
        , &InputOptionSelfCloseActionField_reserve2, &InputOptionSelfCloseActionField_reserve2_len 
        , &InputOptionSelfCloseActionField_MacAddress, &InputOptionSelfCloseActionField_MacAddress_len 
        , &InputOptionSelfCloseActionField_InstrumentID, &InputOptionSelfCloseActionField_InstrumentID_len 
        , &InputOptionSelfCloseActionField_IPAddress, &InputOptionSelfCloseActionField_IPAddress_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( InputOptionSelfCloseActionField_BrokerID != NULL ) {
        if(InputOptionSelfCloseActionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", InputOptionSelfCloseActionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, InputOptionSelfCloseActionField_BrokerID, InputOptionSelfCloseActionField_BrokerID_len);        
        strncpy(self->data.BrokerID, InputOptionSelfCloseActionField_BrokerID, sizeof(self->data.BrokerID) );
        InputOptionSelfCloseActionField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( InputOptionSelfCloseActionField_InvestorID != NULL ) {
        if(InputOptionSelfCloseActionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", InputOptionSelfCloseActionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, InputOptionSelfCloseActionField_InvestorID, InputOptionSelfCloseActionField_InvestorID_len);        
        strncpy(self->data.InvestorID, InputOptionSelfCloseActionField_InvestorID, sizeof(self->data.InvestorID) );
        InputOptionSelfCloseActionField_InvestorID = NULL;
    }
            
    ///期权自对冲操作引用
    // TThostFtdcOrderActionRefType int
    self->data.OptionSelfCloseActionRef = InputOptionSelfCloseActionField_OptionSelfCloseActionRef;
        
    ///期权自对冲引用
    // TThostFtdcOrderRefType char[13]
    if( InputOptionSelfCloseActionField_OptionSelfCloseRef != NULL ) {
        if(InputOptionSelfCloseActionField_OptionSelfCloseRef_len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseRef)) {
            PyErr_Format(PyExc_ValueError, "OptionSelfCloseRef too long: length=%zd (max allowed is %zd)", InputOptionSelfCloseActionField_OptionSelfCloseRef_len, (Py_ssize_t)sizeof(self->data.OptionSelfCloseRef));
            return -1;
        }
        // memset(self->data.OptionSelfCloseRef, 0, sizeof(self->data.OptionSelfCloseRef));
        // memcpy(self->data.OptionSelfCloseRef, InputOptionSelfCloseActionField_OptionSelfCloseRef, InputOptionSelfCloseActionField_OptionSelfCloseRef_len);        
        strncpy(self->data.OptionSelfCloseRef, InputOptionSelfCloseActionField_OptionSelfCloseRef, sizeof(self->data.OptionSelfCloseRef) );
        InputOptionSelfCloseActionField_OptionSelfCloseRef = NULL;
    }
            
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = InputOptionSelfCloseActionField_RequestID;
        
    ///前置编号
    // TThostFtdcFrontIDType int
    self->data.FrontID = InputOptionSelfCloseActionField_FrontID;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    self->data.SessionID = InputOptionSelfCloseActionField_SessionID;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( InputOptionSelfCloseActionField_ExchangeID != NULL ) {
        if(InputOptionSelfCloseActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", InputOptionSelfCloseActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, InputOptionSelfCloseActionField_ExchangeID, InputOptionSelfCloseActionField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, InputOptionSelfCloseActionField_ExchangeID, sizeof(self->data.ExchangeID) );
        InputOptionSelfCloseActionField_ExchangeID = NULL;
    }
            
    ///期权自对冲操作编号
    // TThostFtdcOrderSysIDType char[21]
    if( InputOptionSelfCloseActionField_OptionSelfCloseSysID != NULL ) {
        if(InputOptionSelfCloseActionField_OptionSelfCloseSysID_len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseSysID)) {
            PyErr_Format(PyExc_ValueError, "OptionSelfCloseSysID too long: length=%zd (max allowed is %zd)", InputOptionSelfCloseActionField_OptionSelfCloseSysID_len, (Py_ssize_t)sizeof(self->data.OptionSelfCloseSysID));
            return -1;
        }
        // memset(self->data.OptionSelfCloseSysID, 0, sizeof(self->data.OptionSelfCloseSysID));
        // memcpy(self->data.OptionSelfCloseSysID, InputOptionSelfCloseActionField_OptionSelfCloseSysID, InputOptionSelfCloseActionField_OptionSelfCloseSysID_len);        
        strncpy(self->data.OptionSelfCloseSysID, InputOptionSelfCloseActionField_OptionSelfCloseSysID, sizeof(self->data.OptionSelfCloseSysID) );
        InputOptionSelfCloseActionField_OptionSelfCloseSysID = NULL;
    }
            
    ///操作标志
    // TThostFtdcActionFlagType char
    self->data.ActionFlag = InputOptionSelfCloseActionField_ActionFlag;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( InputOptionSelfCloseActionField_UserID != NULL ) {
        if(InputOptionSelfCloseActionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", InputOptionSelfCloseActionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, InputOptionSelfCloseActionField_UserID, InputOptionSelfCloseActionField_UserID_len);        
        strncpy(self->data.UserID, InputOptionSelfCloseActionField_UserID, sizeof(self->data.UserID) );
        InputOptionSelfCloseActionField_UserID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( InputOptionSelfCloseActionField_reserve1 != NULL ) {
        if(InputOptionSelfCloseActionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", InputOptionSelfCloseActionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, InputOptionSelfCloseActionField_reserve1, InputOptionSelfCloseActionField_reserve1_len);        
        strncpy(self->data.reserve1, InputOptionSelfCloseActionField_reserve1, sizeof(self->data.reserve1) );
        InputOptionSelfCloseActionField_reserve1 = NULL;
    }
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( InputOptionSelfCloseActionField_InvestUnitID != NULL ) {
        if(InputOptionSelfCloseActionField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", InputOptionSelfCloseActionField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, InputOptionSelfCloseActionField_InvestUnitID, InputOptionSelfCloseActionField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, InputOptionSelfCloseActionField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        InputOptionSelfCloseActionField_InvestUnitID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    if( InputOptionSelfCloseActionField_reserve2 != NULL ) {
        if(InputOptionSelfCloseActionField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", InputOptionSelfCloseActionField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
            return -1;
        }
        // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
        // memcpy(self->data.reserve2, InputOptionSelfCloseActionField_reserve2, InputOptionSelfCloseActionField_reserve2_len);        
        strncpy(self->data.reserve2, InputOptionSelfCloseActionField_reserve2, sizeof(self->data.reserve2) );
        InputOptionSelfCloseActionField_reserve2 = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( InputOptionSelfCloseActionField_MacAddress != NULL ) {
        if(InputOptionSelfCloseActionField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", InputOptionSelfCloseActionField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, InputOptionSelfCloseActionField_MacAddress, InputOptionSelfCloseActionField_MacAddress_len);        
        strncpy(self->data.MacAddress, InputOptionSelfCloseActionField_MacAddress, sizeof(self->data.MacAddress) );
        InputOptionSelfCloseActionField_MacAddress = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( InputOptionSelfCloseActionField_InstrumentID != NULL ) {
        if(InputOptionSelfCloseActionField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", InputOptionSelfCloseActionField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, InputOptionSelfCloseActionField_InstrumentID, InputOptionSelfCloseActionField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, InputOptionSelfCloseActionField_InstrumentID, sizeof(self->data.InstrumentID) );
        InputOptionSelfCloseActionField_InstrumentID = NULL;
    }
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( InputOptionSelfCloseActionField_IPAddress != NULL ) {
        if(InputOptionSelfCloseActionField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", InputOptionSelfCloseActionField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, InputOptionSelfCloseActionField_IPAddress, InputOptionSelfCloseActionField_IPAddress_len);        
        strncpy(self->data.IPAddress, InputOptionSelfCloseActionField_IPAddress, sizeof(self->data.IPAddress) );
        InputOptionSelfCloseActionField_IPAddress = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcInputOptionSelfCloseActionField_dealloc(PyCThostFtdcInputOptionSelfCloseActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInputOptionSelfCloseActionField_repr(PyCThostFtdcInputOptionSelfCloseActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i,s:y,s:i,s:i,s:i,s:y,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i,s:s,s:i,s:i,s:i,s:s,s:s,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"OptionSelfCloseActionRef", self->data.OptionSelfCloseActionRef 
        ,"OptionSelfCloseRef", self->data.OptionSelfCloseRef//, (Py_ssize_t)sizeof(self->data.OptionSelfCloseRef) 
        ,"RequestID", self->data.RequestID 
        ,"FrontID", self->data.FrontID 
        ,"SessionID", self->data.SessionID 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"OptionSelfCloseSysID", self->data.OptionSelfCloseSysID//, (Py_ssize_t)sizeof(self->data.OptionSelfCloseSysID) 
        ,"ActionFlag", self->data.ActionFlag 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"InvestUnitID", self->data.InvestUnitID//, (Py_ssize_t)sizeof(self->data.InvestUnitID) 
        ,"reserve2", self->data.reserve2//, (Py_ssize_t)sizeof(self->data.reserve2) 
        ,"MacAddress", self->data.MacAddress//, (Py_ssize_t)sizeof(self->data.MacAddress) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"IPAddress", self->data.IPAddress//, (Py_ssize_t)sizeof(self->data.IPAddress) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputOptionSelfCloseActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcInputOptionSelfCloseActionField_get_BrokerID(PyCThostFtdcInputOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcInputOptionSelfCloseActionField_set_BrokerID(PyCThostFtdcInputOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputOptionSelfCloseActionField_get_InvestorID(PyCThostFtdcInputOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcInputOptionSelfCloseActionField_set_InvestorID(PyCThostFtdcInputOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
            
///期权自对冲操作引用
// TThostFtdcOrderActionRefType int
static PyObject *PyCThostFtdcInputOptionSelfCloseActionField_get_OptionSelfCloseActionRef(PyCThostFtdcInputOptionSelfCloseActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.OptionSelfCloseActionRef);
#else
    return PyInt_FromLong(self->data.OptionSelfCloseActionRef);
#endif
}

///期权自对冲操作引用
// TThostFtdcOrderActionRefType int
static int PyCThostFtdcInputOptionSelfCloseActionField_set_OptionSelfCloseActionRef(PyCThostFtdcInputOptionSelfCloseActionField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OptionSelfCloseActionRef Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OptionSelfCloseActionRef Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the OptionSelfCloseActionRef value out of range for C int");
        return -1;
    }
    self->data.OptionSelfCloseActionRef = (int)buf;
    return 0;
}
        
///期权自对冲引用
// TThostFtdcOrderRefType char[13]
static PyObject *PyCThostFtdcInputOptionSelfCloseActionField_get_OptionSelfCloseRef(PyCThostFtdcInputOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OptionSelfCloseRef, (Py_ssize_t)sizeof(self->data.OptionSelfCloseRef));
    return PyBytes_FromString(self->data.OptionSelfCloseRef);
}

///期权自对冲引用
// TThostFtdcOrderRefType char[13]
static int PyCThostFtdcInputOptionSelfCloseActionField_set_OptionSelfCloseRef(PyCThostFtdcInputOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
            
///请求编号
// TThostFtdcRequestIDType int
static PyObject *PyCThostFtdcInputOptionSelfCloseActionField_get_RequestID(PyCThostFtdcInputOptionSelfCloseActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcInputOptionSelfCloseActionField_set_RequestID(PyCThostFtdcInputOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputOptionSelfCloseActionField_get_FrontID(PyCThostFtdcInputOptionSelfCloseActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FrontID);
#else
    return PyInt_FromLong(self->data.FrontID);
#endif
}

///前置编号
// TThostFtdcFrontIDType int
static int PyCThostFtdcInputOptionSelfCloseActionField_set_FrontID(PyCThostFtdcInputOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputOptionSelfCloseActionField_get_SessionID(PyCThostFtdcInputOptionSelfCloseActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话编号
// TThostFtdcSessionIDType int
static int PyCThostFtdcInputOptionSelfCloseActionField_set_SessionID(PyCThostFtdcInputOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputOptionSelfCloseActionField_get_ExchangeID(PyCThostFtdcInputOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcInputOptionSelfCloseActionField_set_ExchangeID(PyCThostFtdcInputOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
            
///期权自对冲操作编号
// TThostFtdcOrderSysIDType char[21]
static PyObject *PyCThostFtdcInputOptionSelfCloseActionField_get_OptionSelfCloseSysID(PyCThostFtdcInputOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OptionSelfCloseSysID, (Py_ssize_t)sizeof(self->data.OptionSelfCloseSysID));
    return PyBytes_FromString(self->data.OptionSelfCloseSysID);
}

///期权自对冲操作编号
// TThostFtdcOrderSysIDType char[21]
static int PyCThostFtdcInputOptionSelfCloseActionField_set_OptionSelfCloseSysID(PyCThostFtdcInputOptionSelfCloseActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OptionSelfCloseSysID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseSysID)) {
        PyErr_SetString(PyExc_ValueError, "OptionSelfCloseSysID must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.OptionSelfCloseSysID, 0, sizeof(self->data.OptionSelfCloseSysID));
    // memcpy(self->data.OptionSelfCloseSysID, buf, len);
    strncpy(self->data.OptionSelfCloseSysID, buf, sizeof(self->data.OptionSelfCloseSysID));
    return 0;
}
            
///操作标志
// TThostFtdcActionFlagType char
static PyObject *PyCThostFtdcInputOptionSelfCloseActionField_get_ActionFlag(PyCThostFtdcInputOptionSelfCloseActionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionFlag), 1);
}

///操作标志
// TThostFtdcActionFlagType char
static int PyCThostFtdcInputOptionSelfCloseActionField_set_ActionFlag(PyCThostFtdcInputOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputOptionSelfCloseActionField_get_UserID(PyCThostFtdcInputOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcInputOptionSelfCloseActionField_set_UserID(PyCThostFtdcInputOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputOptionSelfCloseActionField_get_reserve1(PyCThostFtdcInputOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcInputOptionSelfCloseActionField_set_reserve1(PyCThostFtdcInputOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputOptionSelfCloseActionField_get_InvestUnitID(PyCThostFtdcInputOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcInputOptionSelfCloseActionField_set_InvestUnitID(PyCThostFtdcInputOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputOptionSelfCloseActionField_get_reserve2(PyCThostFtdcInputOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve2, (Py_ssize_t)sizeof(self->data.reserve2));
    return PyBytes_FromString(self->data.reserve2);
}

///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static int PyCThostFtdcInputOptionSelfCloseActionField_set_reserve2(PyCThostFtdcInputOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputOptionSelfCloseActionField_get_MacAddress(PyCThostFtdcInputOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcInputOptionSelfCloseActionField_set_MacAddress(PyCThostFtdcInputOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputOptionSelfCloseActionField_get_InstrumentID(PyCThostFtdcInputOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcInputOptionSelfCloseActionField_set_InstrumentID(PyCThostFtdcInputOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputOptionSelfCloseActionField_get_IPAddress(PyCThostFtdcInputOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcInputOptionSelfCloseActionField_set_IPAddress(PyCThostFtdcInputOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcInputOptionSelfCloseActionField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcInputOptionSelfCloseActionField_get_BrokerID, (setter)PyCThostFtdcInputOptionSelfCloseActionField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcInputOptionSelfCloseActionField_get_InvestorID, (setter)PyCThostFtdcInputOptionSelfCloseActionField_set_InvestorID, (char *)"InvestorID", NULL},
    ///期权自对冲操作引用 
    {(char *)"OptionSelfCloseActionRef", (getter)PyCThostFtdcInputOptionSelfCloseActionField_get_OptionSelfCloseActionRef, (setter)PyCThostFtdcInputOptionSelfCloseActionField_set_OptionSelfCloseActionRef, (char *)"OptionSelfCloseActionRef", NULL},
    ///期权自对冲引用 
    {(char *)"OptionSelfCloseRef", (getter)PyCThostFtdcInputOptionSelfCloseActionField_get_OptionSelfCloseRef, (setter)PyCThostFtdcInputOptionSelfCloseActionField_set_OptionSelfCloseRef, (char *)"OptionSelfCloseRef", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcInputOptionSelfCloseActionField_get_RequestID, (setter)PyCThostFtdcInputOptionSelfCloseActionField_set_RequestID, (char *)"RequestID", NULL},
    ///前置编号 
    {(char *)"FrontID", (getter)PyCThostFtdcInputOptionSelfCloseActionField_get_FrontID, (setter)PyCThostFtdcInputOptionSelfCloseActionField_set_FrontID, (char *)"FrontID", NULL},
    ///会话编号 
    {(char *)"SessionID", (getter)PyCThostFtdcInputOptionSelfCloseActionField_get_SessionID, (setter)PyCThostFtdcInputOptionSelfCloseActionField_set_SessionID, (char *)"SessionID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcInputOptionSelfCloseActionField_get_ExchangeID, (setter)PyCThostFtdcInputOptionSelfCloseActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///期权自对冲操作编号 
    {(char *)"OptionSelfCloseSysID", (getter)PyCThostFtdcInputOptionSelfCloseActionField_get_OptionSelfCloseSysID, (setter)PyCThostFtdcInputOptionSelfCloseActionField_set_OptionSelfCloseSysID, (char *)"OptionSelfCloseSysID", NULL},
    ///操作标志 
    {(char *)"ActionFlag", (getter)PyCThostFtdcInputOptionSelfCloseActionField_get_ActionFlag, (setter)PyCThostFtdcInputOptionSelfCloseActionField_set_ActionFlag, (char *)"ActionFlag", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcInputOptionSelfCloseActionField_get_UserID, (setter)PyCThostFtdcInputOptionSelfCloseActionField_set_UserID, (char *)"UserID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcInputOptionSelfCloseActionField_get_reserve1, (setter)PyCThostFtdcInputOptionSelfCloseActionField_set_reserve1, (char *)"reserve1", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcInputOptionSelfCloseActionField_get_InvestUnitID, (setter)PyCThostFtdcInputOptionSelfCloseActionField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///保留的无效字段 
    {(char *)"reserve2", (getter)PyCThostFtdcInputOptionSelfCloseActionField_get_reserve2, (setter)PyCThostFtdcInputOptionSelfCloseActionField_set_reserve2, (char *)"reserve2", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcInputOptionSelfCloseActionField_get_MacAddress, (setter)PyCThostFtdcInputOptionSelfCloseActionField_set_MacAddress, (char *)"MacAddress", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcInputOptionSelfCloseActionField_get_InstrumentID, (setter)PyCThostFtdcInputOptionSelfCloseActionField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcInputOptionSelfCloseActionField_get_IPAddress, (setter)PyCThostFtdcInputOptionSelfCloseActionField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInputOptionSelfCloseActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInputOptionSelfCloseActionField",	/* tp_name */
	sizeof(PyCThostFtdcInputOptionSelfCloseActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInputOptionSelfCloseActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInputOptionSelfCloseActionField_repr,   /* tp_repr */
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
	"CThostFtdcInputOptionSelfCloseActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInputOptionSelfCloseActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInputOptionSelfCloseActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInputOptionSelfCloseActionField_new,       /* tp_new */
};

int PyCThostFtdcInputOptionSelfCloseActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInputOptionSelfCloseActionField  */
	if (PyType_Ready(&PyCThostFtdcInputOptionSelfCloseActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInputOptionSelfCloseActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInputOptionSelfCloseActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInputOptionSelfCloseActionField", (PyObject *)&PyCThostFtdcInputOptionSelfCloseActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInputOptionSelfCloseActionField to module");
        Py_DECREF(&PyCThostFtdcInputOptionSelfCloseActionFieldType);
		return -1;
    }

    return 0;
}
