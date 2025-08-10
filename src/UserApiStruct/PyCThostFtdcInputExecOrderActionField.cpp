
#include "PyCThostFtdcInputExecOrderActionField.h"

///输入执行宣告操作

static PyObject *PyCThostFtdcInputExecOrderActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInputExecOrderActionField *self = (PyCThostFtdcInputExecOrderActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcInputExecOrderActionField_init(PyCThostFtdcInputExecOrderActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "ExecOrderActionRef", "ExecOrderRef", "RequestID", "FrontID", "SessionID", "ExchangeID", "ExecOrderSysID", "ActionFlag", "UserID", "reserve1", "InvestUnitID", "reserve2", "MacAddress", "InstrumentID", "IPAddress",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *InputExecOrderActionField_BrokerID = NULL;
    Py_ssize_t InputExecOrderActionField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *InputExecOrderActionField_InvestorID = NULL;
    Py_ssize_t InputExecOrderActionField_InvestorID_len = 0;
            
    ///执行宣告操作引用
    // TThostFtdcOrderActionRefType int
    int InputExecOrderActionField_ExecOrderActionRef = 0;
        
    ///执行宣告引用
    // TThostFtdcOrderRefType char[13]
    const char *InputExecOrderActionField_ExecOrderRef = NULL;
    Py_ssize_t InputExecOrderActionField_ExecOrderRef_len = 0;
            
    ///请求编号
    // TThostFtdcRequestIDType int
    int InputExecOrderActionField_RequestID = 0;
        
    ///前置编号
    // TThostFtdcFrontIDType int
    int InputExecOrderActionField_FrontID = 0;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    int InputExecOrderActionField_SessionID = 0;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *InputExecOrderActionField_ExchangeID = NULL;
    Py_ssize_t InputExecOrderActionField_ExchangeID_len = 0;
            
    ///执行宣告操作编号
    // TThostFtdcExecOrderSysIDType char[21]
    const char *InputExecOrderActionField_ExecOrderSysID = NULL;
    Py_ssize_t InputExecOrderActionField_ExecOrderSysID_len = 0;
            
    ///操作标志
    // TThostFtdcActionFlagType char
    char InputExecOrderActionField_ActionFlag = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *InputExecOrderActionField_UserID = NULL;
    Py_ssize_t InputExecOrderActionField_UserID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *InputExecOrderActionField_reserve1 = NULL;
    Py_ssize_t InputExecOrderActionField_reserve1_len = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *InputExecOrderActionField_InvestUnitID = NULL;
    Py_ssize_t InputExecOrderActionField_InvestUnitID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    const char *InputExecOrderActionField_reserve2 = NULL;
    Py_ssize_t InputExecOrderActionField_reserve2_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *InputExecOrderActionField_MacAddress = NULL;
    Py_ssize_t InputExecOrderActionField_MacAddress_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *InputExecOrderActionField_InstrumentID = NULL;
    Py_ssize_t InputExecOrderActionField_InstrumentID_len = 0;
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *InputExecOrderActionField_IPAddress = NULL;
    Py_ssize_t InputExecOrderActionField_IPAddress_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iy#iiiy#y#cy#y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#is#iiis#s#cs#s#s#s#s#s#s#", (char **)kwlist
#endif

        , &InputExecOrderActionField_BrokerID, &InputExecOrderActionField_BrokerID_len 
        , &InputExecOrderActionField_InvestorID, &InputExecOrderActionField_InvestorID_len 
        , &InputExecOrderActionField_ExecOrderActionRef 
        , &InputExecOrderActionField_ExecOrderRef, &InputExecOrderActionField_ExecOrderRef_len 
        , &InputExecOrderActionField_RequestID 
        , &InputExecOrderActionField_FrontID 
        , &InputExecOrderActionField_SessionID 
        , &InputExecOrderActionField_ExchangeID, &InputExecOrderActionField_ExchangeID_len 
        , &InputExecOrderActionField_ExecOrderSysID, &InputExecOrderActionField_ExecOrderSysID_len 
        , &InputExecOrderActionField_ActionFlag 
        , &InputExecOrderActionField_UserID, &InputExecOrderActionField_UserID_len 
        , &InputExecOrderActionField_reserve1, &InputExecOrderActionField_reserve1_len 
        , &InputExecOrderActionField_InvestUnitID, &InputExecOrderActionField_InvestUnitID_len 
        , &InputExecOrderActionField_reserve2, &InputExecOrderActionField_reserve2_len 
        , &InputExecOrderActionField_MacAddress, &InputExecOrderActionField_MacAddress_len 
        , &InputExecOrderActionField_InstrumentID, &InputExecOrderActionField_InstrumentID_len 
        , &InputExecOrderActionField_IPAddress, &InputExecOrderActionField_IPAddress_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( InputExecOrderActionField_BrokerID != NULL ) {
        if(InputExecOrderActionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", InputExecOrderActionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, InputExecOrderActionField_BrokerID, InputExecOrderActionField_BrokerID_len);        
        strncpy(self->data.BrokerID, InputExecOrderActionField_BrokerID, sizeof(self->data.BrokerID) );
        InputExecOrderActionField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( InputExecOrderActionField_InvestorID != NULL ) {
        if(InputExecOrderActionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", InputExecOrderActionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, InputExecOrderActionField_InvestorID, InputExecOrderActionField_InvestorID_len);        
        strncpy(self->data.InvestorID, InputExecOrderActionField_InvestorID, sizeof(self->data.InvestorID) );
        InputExecOrderActionField_InvestorID = NULL;
    }
            
    ///执行宣告操作引用
    // TThostFtdcOrderActionRefType int
    self->data.ExecOrderActionRef = InputExecOrderActionField_ExecOrderActionRef;
        
    ///执行宣告引用
    // TThostFtdcOrderRefType char[13]
    if( InputExecOrderActionField_ExecOrderRef != NULL ) {
        if(InputExecOrderActionField_ExecOrderRef_len > (Py_ssize_t)sizeof(self->data.ExecOrderRef)) {
            PyErr_Format(PyExc_ValueError, "ExecOrderRef too long: length=%zd (max allowed is %zd)", InputExecOrderActionField_ExecOrderRef_len, (Py_ssize_t)sizeof(self->data.ExecOrderRef));
            return -1;
        }
        // memset(self->data.ExecOrderRef, 0, sizeof(self->data.ExecOrderRef));
        // memcpy(self->data.ExecOrderRef, InputExecOrderActionField_ExecOrderRef, InputExecOrderActionField_ExecOrderRef_len);        
        strncpy(self->data.ExecOrderRef, InputExecOrderActionField_ExecOrderRef, sizeof(self->data.ExecOrderRef) );
        InputExecOrderActionField_ExecOrderRef = NULL;
    }
            
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = InputExecOrderActionField_RequestID;
        
    ///前置编号
    // TThostFtdcFrontIDType int
    self->data.FrontID = InputExecOrderActionField_FrontID;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    self->data.SessionID = InputExecOrderActionField_SessionID;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( InputExecOrderActionField_ExchangeID != NULL ) {
        if(InputExecOrderActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", InputExecOrderActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, InputExecOrderActionField_ExchangeID, InputExecOrderActionField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, InputExecOrderActionField_ExchangeID, sizeof(self->data.ExchangeID) );
        InputExecOrderActionField_ExchangeID = NULL;
    }
            
    ///执行宣告操作编号
    // TThostFtdcExecOrderSysIDType char[21]
    if( InputExecOrderActionField_ExecOrderSysID != NULL ) {
        if(InputExecOrderActionField_ExecOrderSysID_len > (Py_ssize_t)sizeof(self->data.ExecOrderSysID)) {
            PyErr_Format(PyExc_ValueError, "ExecOrderSysID too long: length=%zd (max allowed is %zd)", InputExecOrderActionField_ExecOrderSysID_len, (Py_ssize_t)sizeof(self->data.ExecOrderSysID));
            return -1;
        }
        // memset(self->data.ExecOrderSysID, 0, sizeof(self->data.ExecOrderSysID));
        // memcpy(self->data.ExecOrderSysID, InputExecOrderActionField_ExecOrderSysID, InputExecOrderActionField_ExecOrderSysID_len);        
        strncpy(self->data.ExecOrderSysID, InputExecOrderActionField_ExecOrderSysID, sizeof(self->data.ExecOrderSysID) );
        InputExecOrderActionField_ExecOrderSysID = NULL;
    }
            
    ///操作标志
    // TThostFtdcActionFlagType char
    self->data.ActionFlag = InputExecOrderActionField_ActionFlag;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( InputExecOrderActionField_UserID != NULL ) {
        if(InputExecOrderActionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", InputExecOrderActionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, InputExecOrderActionField_UserID, InputExecOrderActionField_UserID_len);        
        strncpy(self->data.UserID, InputExecOrderActionField_UserID, sizeof(self->data.UserID) );
        InputExecOrderActionField_UserID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( InputExecOrderActionField_reserve1 != NULL ) {
        if(InputExecOrderActionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", InputExecOrderActionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, InputExecOrderActionField_reserve1, InputExecOrderActionField_reserve1_len);        
        strncpy(self->data.reserve1, InputExecOrderActionField_reserve1, sizeof(self->data.reserve1) );
        InputExecOrderActionField_reserve1 = NULL;
    }
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( InputExecOrderActionField_InvestUnitID != NULL ) {
        if(InputExecOrderActionField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", InputExecOrderActionField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, InputExecOrderActionField_InvestUnitID, InputExecOrderActionField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, InputExecOrderActionField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        InputExecOrderActionField_InvestUnitID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    if( InputExecOrderActionField_reserve2 != NULL ) {
        if(InputExecOrderActionField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", InputExecOrderActionField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
            return -1;
        }
        // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
        // memcpy(self->data.reserve2, InputExecOrderActionField_reserve2, InputExecOrderActionField_reserve2_len);        
        strncpy(self->data.reserve2, InputExecOrderActionField_reserve2, sizeof(self->data.reserve2) );
        InputExecOrderActionField_reserve2 = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( InputExecOrderActionField_MacAddress != NULL ) {
        if(InputExecOrderActionField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", InputExecOrderActionField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, InputExecOrderActionField_MacAddress, InputExecOrderActionField_MacAddress_len);        
        strncpy(self->data.MacAddress, InputExecOrderActionField_MacAddress, sizeof(self->data.MacAddress) );
        InputExecOrderActionField_MacAddress = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( InputExecOrderActionField_InstrumentID != NULL ) {
        if(InputExecOrderActionField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", InputExecOrderActionField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, InputExecOrderActionField_InstrumentID, InputExecOrderActionField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, InputExecOrderActionField_InstrumentID, sizeof(self->data.InstrumentID) );
        InputExecOrderActionField_InstrumentID = NULL;
    }
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( InputExecOrderActionField_IPAddress != NULL ) {
        if(InputExecOrderActionField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", InputExecOrderActionField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, InputExecOrderActionField_IPAddress, InputExecOrderActionField_IPAddress_len);        
        strncpy(self->data.IPAddress, InputExecOrderActionField_IPAddress, sizeof(self->data.IPAddress) );
        InputExecOrderActionField_IPAddress = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcInputExecOrderActionField_dealloc(PyCThostFtdcInputExecOrderActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInputExecOrderActionField_repr(PyCThostFtdcInputExecOrderActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i,s:y,s:i,s:i,s:i,s:y,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i,s:s,s:i,s:i,s:i,s:s,s:s,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:s}"
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
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"IPAddress", self->data.IPAddress//, (Py_ssize_t)sizeof(self->data.IPAddress) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputExecOrderActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcInputExecOrderActionField_get_BrokerID(PyCThostFtdcInputExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcInputExecOrderActionField_set_BrokerID(PyCThostFtdcInputExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputExecOrderActionField_get_InvestorID(PyCThostFtdcInputExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcInputExecOrderActionField_set_InvestorID(PyCThostFtdcInputExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputExecOrderActionField_get_ExecOrderActionRef(PyCThostFtdcInputExecOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.ExecOrderActionRef);
#else
    return PyInt_FromLong(self->data.ExecOrderActionRef);
#endif
}

///执行宣告操作引用
// TThostFtdcOrderActionRefType int
static int PyCThostFtdcInputExecOrderActionField_set_ExecOrderActionRef(PyCThostFtdcInputExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputExecOrderActionField_get_ExecOrderRef(PyCThostFtdcInputExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExecOrderRef, (Py_ssize_t)sizeof(self->data.ExecOrderRef));
    return PyBytes_FromString(self->data.ExecOrderRef);
}

///执行宣告引用
// TThostFtdcOrderRefType char[13]
static int PyCThostFtdcInputExecOrderActionField_set_ExecOrderRef(PyCThostFtdcInputExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputExecOrderActionField_get_RequestID(PyCThostFtdcInputExecOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcInputExecOrderActionField_set_RequestID(PyCThostFtdcInputExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputExecOrderActionField_get_FrontID(PyCThostFtdcInputExecOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FrontID);
#else
    return PyInt_FromLong(self->data.FrontID);
#endif
}

///前置编号
// TThostFtdcFrontIDType int
static int PyCThostFtdcInputExecOrderActionField_set_FrontID(PyCThostFtdcInputExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputExecOrderActionField_get_SessionID(PyCThostFtdcInputExecOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话编号
// TThostFtdcSessionIDType int
static int PyCThostFtdcInputExecOrderActionField_set_SessionID(PyCThostFtdcInputExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputExecOrderActionField_get_ExchangeID(PyCThostFtdcInputExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcInputExecOrderActionField_set_ExchangeID(PyCThostFtdcInputExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputExecOrderActionField_get_ExecOrderSysID(PyCThostFtdcInputExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExecOrderSysID, (Py_ssize_t)sizeof(self->data.ExecOrderSysID));
    return PyBytes_FromString(self->data.ExecOrderSysID);
}

///执行宣告操作编号
// TThostFtdcExecOrderSysIDType char[21]
static int PyCThostFtdcInputExecOrderActionField_set_ExecOrderSysID(PyCThostFtdcInputExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputExecOrderActionField_get_ActionFlag(PyCThostFtdcInputExecOrderActionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionFlag), 1);
}

///操作标志
// TThostFtdcActionFlagType char
static int PyCThostFtdcInputExecOrderActionField_set_ActionFlag(PyCThostFtdcInputExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputExecOrderActionField_get_UserID(PyCThostFtdcInputExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcInputExecOrderActionField_set_UserID(PyCThostFtdcInputExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputExecOrderActionField_get_reserve1(PyCThostFtdcInputExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcInputExecOrderActionField_set_reserve1(PyCThostFtdcInputExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputExecOrderActionField_get_InvestUnitID(PyCThostFtdcInputExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcInputExecOrderActionField_set_InvestUnitID(PyCThostFtdcInputExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputExecOrderActionField_get_reserve2(PyCThostFtdcInputExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve2, (Py_ssize_t)sizeof(self->data.reserve2));
    return PyBytes_FromString(self->data.reserve2);
}

///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static int PyCThostFtdcInputExecOrderActionField_set_reserve2(PyCThostFtdcInputExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputExecOrderActionField_get_MacAddress(PyCThostFtdcInputExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcInputExecOrderActionField_set_MacAddress(PyCThostFtdcInputExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputExecOrderActionField_get_InstrumentID(PyCThostFtdcInputExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcInputExecOrderActionField_set_InstrumentID(PyCThostFtdcInputExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputExecOrderActionField_get_IPAddress(PyCThostFtdcInputExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcInputExecOrderActionField_set_IPAddress(PyCThostFtdcInputExecOrderActionField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcInputExecOrderActionField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcInputExecOrderActionField_get_BrokerID, (setter)PyCThostFtdcInputExecOrderActionField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcInputExecOrderActionField_get_InvestorID, (setter)PyCThostFtdcInputExecOrderActionField_set_InvestorID, (char *)"InvestorID", NULL},
    ///执行宣告操作引用 
    {(char *)"ExecOrderActionRef", (getter)PyCThostFtdcInputExecOrderActionField_get_ExecOrderActionRef, (setter)PyCThostFtdcInputExecOrderActionField_set_ExecOrderActionRef, (char *)"ExecOrderActionRef", NULL},
    ///执行宣告引用 
    {(char *)"ExecOrderRef", (getter)PyCThostFtdcInputExecOrderActionField_get_ExecOrderRef, (setter)PyCThostFtdcInputExecOrderActionField_set_ExecOrderRef, (char *)"ExecOrderRef", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcInputExecOrderActionField_get_RequestID, (setter)PyCThostFtdcInputExecOrderActionField_set_RequestID, (char *)"RequestID", NULL},
    ///前置编号 
    {(char *)"FrontID", (getter)PyCThostFtdcInputExecOrderActionField_get_FrontID, (setter)PyCThostFtdcInputExecOrderActionField_set_FrontID, (char *)"FrontID", NULL},
    ///会话编号 
    {(char *)"SessionID", (getter)PyCThostFtdcInputExecOrderActionField_get_SessionID, (setter)PyCThostFtdcInputExecOrderActionField_set_SessionID, (char *)"SessionID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcInputExecOrderActionField_get_ExchangeID, (setter)PyCThostFtdcInputExecOrderActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///执行宣告操作编号 
    {(char *)"ExecOrderSysID", (getter)PyCThostFtdcInputExecOrderActionField_get_ExecOrderSysID, (setter)PyCThostFtdcInputExecOrderActionField_set_ExecOrderSysID, (char *)"ExecOrderSysID", NULL},
    ///操作标志 
    {(char *)"ActionFlag", (getter)PyCThostFtdcInputExecOrderActionField_get_ActionFlag, (setter)PyCThostFtdcInputExecOrderActionField_set_ActionFlag, (char *)"ActionFlag", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcInputExecOrderActionField_get_UserID, (setter)PyCThostFtdcInputExecOrderActionField_set_UserID, (char *)"UserID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcInputExecOrderActionField_get_reserve1, (setter)PyCThostFtdcInputExecOrderActionField_set_reserve1, (char *)"reserve1", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcInputExecOrderActionField_get_InvestUnitID, (setter)PyCThostFtdcInputExecOrderActionField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///保留的无效字段 
    {(char *)"reserve2", (getter)PyCThostFtdcInputExecOrderActionField_get_reserve2, (setter)PyCThostFtdcInputExecOrderActionField_set_reserve2, (char *)"reserve2", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcInputExecOrderActionField_get_MacAddress, (setter)PyCThostFtdcInputExecOrderActionField_set_MacAddress, (char *)"MacAddress", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcInputExecOrderActionField_get_InstrumentID, (setter)PyCThostFtdcInputExecOrderActionField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcInputExecOrderActionField_get_IPAddress, (setter)PyCThostFtdcInputExecOrderActionField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInputExecOrderActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInputExecOrderActionField",	/* tp_name */
	sizeof(PyCThostFtdcInputExecOrderActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInputExecOrderActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInputExecOrderActionField_repr,   /* tp_repr */
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
	"CThostFtdcInputExecOrderActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInputExecOrderActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInputExecOrderActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInputExecOrderActionField_new,       /* tp_new */
};

int PyCThostFtdcInputExecOrderActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInputExecOrderActionField  */
	if (PyType_Ready(&PyCThostFtdcInputExecOrderActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInputExecOrderActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInputExecOrderActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInputExecOrderActionField", (PyObject *)&PyCThostFtdcInputExecOrderActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInputExecOrderActionField to module");
        Py_DECREF(&PyCThostFtdcInputExecOrderActionFieldType);
		return -1;
    }

    return 0;
}
