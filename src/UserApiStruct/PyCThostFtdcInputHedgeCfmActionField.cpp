
#include "PyCThostFtdcInputHedgeCfmActionField.h"

///套保申请撤销

static PyObject *PyCThostFtdcInputHedgeCfmActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInputHedgeCfmActionField *self = (PyCThostFtdcInputHedgeCfmActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcInputHedgeCfmActionField_init(PyCThostFtdcInputHedgeCfmActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID", "InvestorID", "ExchangeID", "OrderSysID", "OrderRef", "FrontID", "SessionID", "RequestID", "IPAddress", "MacAddress",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *InputHedgeCfmActionField_BrokerID = NULL;
    Py_ssize_t InputHedgeCfmActionField_BrokerID_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *InputHedgeCfmActionField_UserID = NULL;
    Py_ssize_t InputHedgeCfmActionField_UserID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *InputHedgeCfmActionField_InvestorID = NULL;
    Py_ssize_t InputHedgeCfmActionField_InvestorID_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *InputHedgeCfmActionField_ExchangeID = NULL;
    Py_ssize_t InputHedgeCfmActionField_ExchangeID_len = 0;
            
    ///合同编号
    // TThostFtdcOrderSysIDType char[21]
    const char *InputHedgeCfmActionField_OrderSysID = NULL;
    Py_ssize_t InputHedgeCfmActionField_OrderSysID_len = 0;
            
    ///报单引用
    // TThostFtdcOrderRefType char[13]
    const char *InputHedgeCfmActionField_OrderRef = NULL;
    Py_ssize_t InputHedgeCfmActionField_OrderRef_len = 0;
            
    ///前置编号
    // TThostFtdcFrontIDType int
    int InputHedgeCfmActionField_FrontID = 0;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    int InputHedgeCfmActionField_SessionID = 0;
        
    ///请求编号
    // TThostFtdcRequestIDType int
    int InputHedgeCfmActionField_RequestID = 0;
        
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *InputHedgeCfmActionField_IPAddress = NULL;
    Py_ssize_t InputHedgeCfmActionField_IPAddress_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *InputHedgeCfmActionField_MacAddress = NULL;
    Py_ssize_t InputHedgeCfmActionField_MacAddress_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#iiiy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#iiis#s#", (char **)kwlist
#endif

        , &InputHedgeCfmActionField_BrokerID, &InputHedgeCfmActionField_BrokerID_len 
        , &InputHedgeCfmActionField_UserID, &InputHedgeCfmActionField_UserID_len 
        , &InputHedgeCfmActionField_InvestorID, &InputHedgeCfmActionField_InvestorID_len 
        , &InputHedgeCfmActionField_ExchangeID, &InputHedgeCfmActionField_ExchangeID_len 
        , &InputHedgeCfmActionField_OrderSysID, &InputHedgeCfmActionField_OrderSysID_len 
        , &InputHedgeCfmActionField_OrderRef, &InputHedgeCfmActionField_OrderRef_len 
        , &InputHedgeCfmActionField_FrontID 
        , &InputHedgeCfmActionField_SessionID 
        , &InputHedgeCfmActionField_RequestID 
        , &InputHedgeCfmActionField_IPAddress, &InputHedgeCfmActionField_IPAddress_len 
        , &InputHedgeCfmActionField_MacAddress, &InputHedgeCfmActionField_MacAddress_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( InputHedgeCfmActionField_BrokerID != NULL ) {
        if(InputHedgeCfmActionField_BrokerID_len >= (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", InputHedgeCfmActionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, InputHedgeCfmActionField_BrokerID, InputHedgeCfmActionField_BrokerID_len);        
        strncpy(self->data.BrokerID, InputHedgeCfmActionField_BrokerID, sizeof(self->data.BrokerID) );
        InputHedgeCfmActionField_BrokerID = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( InputHedgeCfmActionField_UserID != NULL ) {
        if(InputHedgeCfmActionField_UserID_len >= (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", InputHedgeCfmActionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, InputHedgeCfmActionField_UserID, InputHedgeCfmActionField_UserID_len);        
        strncpy(self->data.UserID, InputHedgeCfmActionField_UserID, sizeof(self->data.UserID) );
        InputHedgeCfmActionField_UserID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( InputHedgeCfmActionField_InvestorID != NULL ) {
        if(InputHedgeCfmActionField_InvestorID_len >= (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", InputHedgeCfmActionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, InputHedgeCfmActionField_InvestorID, InputHedgeCfmActionField_InvestorID_len);        
        strncpy(self->data.InvestorID, InputHedgeCfmActionField_InvestorID, sizeof(self->data.InvestorID) );
        InputHedgeCfmActionField_InvestorID = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( InputHedgeCfmActionField_ExchangeID != NULL ) {
        if(InputHedgeCfmActionField_ExchangeID_len >= (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", InputHedgeCfmActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, InputHedgeCfmActionField_ExchangeID, InputHedgeCfmActionField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, InputHedgeCfmActionField_ExchangeID, sizeof(self->data.ExchangeID) );
        InputHedgeCfmActionField_ExchangeID = NULL;
    }
            
    ///合同编号
    // TThostFtdcOrderSysIDType char[21]
    if( InputHedgeCfmActionField_OrderSysID != NULL ) {
        if(InputHedgeCfmActionField_OrderSysID_len >= (Py_ssize_t)sizeof(self->data.OrderSysID)) {
            PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is %zd)", InputHedgeCfmActionField_OrderSysID_len, (Py_ssize_t)sizeof(self->data.OrderSysID));
            return -1;
        }
        // memset(self->data.OrderSysID, 0, sizeof(self->data.OrderSysID));
        // memcpy(self->data.OrderSysID, InputHedgeCfmActionField_OrderSysID, InputHedgeCfmActionField_OrderSysID_len);        
        strncpy(self->data.OrderSysID, InputHedgeCfmActionField_OrderSysID, sizeof(self->data.OrderSysID) );
        InputHedgeCfmActionField_OrderSysID = NULL;
    }
            
    ///报单引用
    // TThostFtdcOrderRefType char[13]
    if( InputHedgeCfmActionField_OrderRef != NULL ) {
        if(InputHedgeCfmActionField_OrderRef_len >= (Py_ssize_t)sizeof(self->data.OrderRef)) {
            PyErr_Format(PyExc_ValueError, "OrderRef too long: length=%zd (max allowed is %zd)", InputHedgeCfmActionField_OrderRef_len, (Py_ssize_t)sizeof(self->data.OrderRef));
            return -1;
        }
        // memset(self->data.OrderRef, 0, sizeof(self->data.OrderRef));
        // memcpy(self->data.OrderRef, InputHedgeCfmActionField_OrderRef, InputHedgeCfmActionField_OrderRef_len);        
        strncpy(self->data.OrderRef, InputHedgeCfmActionField_OrderRef, sizeof(self->data.OrderRef) );
        InputHedgeCfmActionField_OrderRef = NULL;
    }
            
    ///前置编号
    // TThostFtdcFrontIDType int
    self->data.FrontID = InputHedgeCfmActionField_FrontID;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    self->data.SessionID = InputHedgeCfmActionField_SessionID;
        
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = InputHedgeCfmActionField_RequestID;
        
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( InputHedgeCfmActionField_IPAddress != NULL ) {
        if(InputHedgeCfmActionField_IPAddress_len >= (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", InputHedgeCfmActionField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, InputHedgeCfmActionField_IPAddress, InputHedgeCfmActionField_IPAddress_len);        
        strncpy(self->data.IPAddress, InputHedgeCfmActionField_IPAddress, sizeof(self->data.IPAddress) );
        InputHedgeCfmActionField_IPAddress = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( InputHedgeCfmActionField_MacAddress != NULL ) {
        if(InputHedgeCfmActionField_MacAddress_len >= (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", InputHedgeCfmActionField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, InputHedgeCfmActionField_MacAddress, InputHedgeCfmActionField_MacAddress_len);        
        strncpy(self->data.MacAddress, InputHedgeCfmActionField_MacAddress, sizeof(self->data.MacAddress) );
        InputHedgeCfmActionField_MacAddress = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcInputHedgeCfmActionField_dealloc(PyCThostFtdcInputHedgeCfmActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInputHedgeCfmActionField_repr(PyCThostFtdcInputHedgeCfmActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:i,s:i,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:i,s:i,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"OrderSysID", self->data.OrderSysID//, (Py_ssize_t)sizeof(self->data.OrderSysID) 
        ,"OrderRef", self->data.OrderRef//, (Py_ssize_t)sizeof(self->data.OrderRef) 
        ,"FrontID", self->data.FrontID 
        ,"SessionID", self->data.SessionID 
        ,"RequestID", self->data.RequestID 
        ,"IPAddress", self->data.IPAddress//, (Py_ssize_t)sizeof(self->data.IPAddress) 
        ,"MacAddress", self->data.MacAddress//, (Py_ssize_t)sizeof(self->data.MacAddress) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputHedgeCfmActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcInputHedgeCfmActionField_get_BrokerID(PyCThostFtdcInputHedgeCfmActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcInputHedgeCfmActionField_set_BrokerID(PyCThostFtdcInputHedgeCfmActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 11 bytes");
        return -1;
    }
    // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
    // memcpy(self->data.BrokerID, buf, len);
    strncpy(self->data.BrokerID, buf, sizeof(self->data.BrokerID));
    return 0;
}
            
///用户代码
// TThostFtdcUserIDType char[16]
static PyObject *PyCThostFtdcInputHedgeCfmActionField_get_UserID(PyCThostFtdcInputHedgeCfmActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcInputHedgeCfmActionField_set_UserID(PyCThostFtdcInputHedgeCfmActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 16 bytes");
        return -1;
    }
    // memset(self->data.UserID, 0, sizeof(self->data.UserID));
    // memcpy(self->data.UserID, buf, len);
    strncpy(self->data.UserID, buf, sizeof(self->data.UserID));
    return 0;
}
            
///投资者代码
// TThostFtdcInvestorIDType char[13]
static PyObject *PyCThostFtdcInputHedgeCfmActionField_get_InvestorID(PyCThostFtdcInputHedgeCfmActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcInputHedgeCfmActionField_set_InvestorID(PyCThostFtdcInputHedgeCfmActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
    // memcpy(self->data.InvestorID, buf, len);
    strncpy(self->data.InvestorID, buf, sizeof(self->data.InvestorID));
    return 0;
}
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcInputHedgeCfmActionField_get_ExchangeID(PyCThostFtdcInputHedgeCfmActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcInputHedgeCfmActionField_set_ExchangeID(PyCThostFtdcInputHedgeCfmActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
    // memcpy(self->data.ExchangeID, buf, len);
    strncpy(self->data.ExchangeID, buf, sizeof(self->data.ExchangeID));
    return 0;
}
            
///合同编号
// TThostFtdcOrderSysIDType char[21]
static PyObject *PyCThostFtdcInputHedgeCfmActionField_get_OrderSysID(PyCThostFtdcInputHedgeCfmActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderSysID, (Py_ssize_t)sizeof(self->data.OrderSysID));
    return PyBytes_FromString(self->data.OrderSysID);
}

///合同编号
// TThostFtdcOrderSysIDType char[21]
static int PyCThostFtdcInputHedgeCfmActionField_set_OrderSysID(PyCThostFtdcInputHedgeCfmActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderSysID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.OrderSysID)) {
        PyErr_SetString(PyExc_ValueError, "OrderSysID must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.OrderSysID, 0, sizeof(self->data.OrderSysID));
    // memcpy(self->data.OrderSysID, buf, len);
    strncpy(self->data.OrderSysID, buf, sizeof(self->data.OrderSysID));
    return 0;
}
            
///报单引用
// TThostFtdcOrderRefType char[13]
static PyObject *PyCThostFtdcInputHedgeCfmActionField_get_OrderRef(PyCThostFtdcInputHedgeCfmActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderRef, (Py_ssize_t)sizeof(self->data.OrderRef));
    return PyBytes_FromString(self->data.OrderRef);
}

///报单引用
// TThostFtdcOrderRefType char[13]
static int PyCThostFtdcInputHedgeCfmActionField_set_OrderRef(PyCThostFtdcInputHedgeCfmActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderRef Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.OrderRef)) {
        PyErr_SetString(PyExc_ValueError, "OrderRef must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.OrderRef, 0, sizeof(self->data.OrderRef));
    // memcpy(self->data.OrderRef, buf, len);
    strncpy(self->data.OrderRef, buf, sizeof(self->data.OrderRef));
    return 0;
}
            
///前置编号
// TThostFtdcFrontIDType int
static PyObject *PyCThostFtdcInputHedgeCfmActionField_get_FrontID(PyCThostFtdcInputHedgeCfmActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FrontID);
#else
    return PyInt_FromLong(self->data.FrontID);
#endif
}

///前置编号
// TThostFtdcFrontIDType int
static int PyCThostFtdcInputHedgeCfmActionField_set_FrontID(PyCThostFtdcInputHedgeCfmActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputHedgeCfmActionField_get_SessionID(PyCThostFtdcInputHedgeCfmActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话编号
// TThostFtdcSessionIDType int
static int PyCThostFtdcInputHedgeCfmActionField_set_SessionID(PyCThostFtdcInputHedgeCfmActionField *self, PyObject* val, void *closure) {
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
        
///请求编号
// TThostFtdcRequestIDType int
static PyObject *PyCThostFtdcInputHedgeCfmActionField_get_RequestID(PyCThostFtdcInputHedgeCfmActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcInputHedgeCfmActionField_set_RequestID(PyCThostFtdcInputHedgeCfmActionField *self, PyObject* val, void *closure) {
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
        
///IP地址
// TThostFtdcIPAddressType char[33]
static PyObject *PyCThostFtdcInputHedgeCfmActionField_get_IPAddress(PyCThostFtdcInputHedgeCfmActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcInputHedgeCfmActionField_set_IPAddress(PyCThostFtdcInputHedgeCfmActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 33 bytes");
        return -1;
    }
    // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
    // memcpy(self->data.IPAddress, buf, len);
    strncpy(self->data.IPAddress, buf, sizeof(self->data.IPAddress));
    return 0;
}
            
///Mac地址
// TThostFtdcMacAddressType char[21]
static PyObject *PyCThostFtdcInputHedgeCfmActionField_get_MacAddress(PyCThostFtdcInputHedgeCfmActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcInputHedgeCfmActionField_set_MacAddress(PyCThostFtdcInputHedgeCfmActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
    // memcpy(self->data.MacAddress, buf, len);
    strncpy(self->data.MacAddress, buf, sizeof(self->data.MacAddress));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcInputHedgeCfmActionField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcInputHedgeCfmActionField_get_BrokerID, (setter)PyCThostFtdcInputHedgeCfmActionField_set_BrokerID, (char *)"BrokerID", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcInputHedgeCfmActionField_get_UserID, (setter)PyCThostFtdcInputHedgeCfmActionField_set_UserID, (char *)"UserID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcInputHedgeCfmActionField_get_InvestorID, (setter)PyCThostFtdcInputHedgeCfmActionField_set_InvestorID, (char *)"InvestorID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcInputHedgeCfmActionField_get_ExchangeID, (setter)PyCThostFtdcInputHedgeCfmActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///合同编号 
    {(char *)"OrderSysID", (getter)PyCThostFtdcInputHedgeCfmActionField_get_OrderSysID, (setter)PyCThostFtdcInputHedgeCfmActionField_set_OrderSysID, (char *)"OrderSysID", NULL},
    ///报单引用 
    {(char *)"OrderRef", (getter)PyCThostFtdcInputHedgeCfmActionField_get_OrderRef, (setter)PyCThostFtdcInputHedgeCfmActionField_set_OrderRef, (char *)"OrderRef", NULL},
    ///前置编号 
    {(char *)"FrontID", (getter)PyCThostFtdcInputHedgeCfmActionField_get_FrontID, (setter)PyCThostFtdcInputHedgeCfmActionField_set_FrontID, (char *)"FrontID", NULL},
    ///会话编号 
    {(char *)"SessionID", (getter)PyCThostFtdcInputHedgeCfmActionField_get_SessionID, (setter)PyCThostFtdcInputHedgeCfmActionField_set_SessionID, (char *)"SessionID", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcInputHedgeCfmActionField_get_RequestID, (setter)PyCThostFtdcInputHedgeCfmActionField_set_RequestID, (char *)"RequestID", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcInputHedgeCfmActionField_get_IPAddress, (setter)PyCThostFtdcInputHedgeCfmActionField_set_IPAddress, (char *)"IPAddress", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcInputHedgeCfmActionField_get_MacAddress, (setter)PyCThostFtdcInputHedgeCfmActionField_set_MacAddress, (char *)"MacAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInputHedgeCfmActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInputHedgeCfmActionField",	/* tp_name */
	sizeof(PyCThostFtdcInputHedgeCfmActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInputHedgeCfmActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInputHedgeCfmActionField_repr,   /* tp_repr */
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
	"CThostFtdcInputHedgeCfmActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInputHedgeCfmActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInputHedgeCfmActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInputHedgeCfmActionField_new,       /* tp_new */
};

int PyCThostFtdcInputHedgeCfmActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInputHedgeCfmActionField  */
	if (PyType_Ready(&PyCThostFtdcInputHedgeCfmActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInputHedgeCfmActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInputHedgeCfmActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInputHedgeCfmActionField", (PyObject *)&PyCThostFtdcInputHedgeCfmActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInputHedgeCfmActionField to module");
        Py_DECREF(&PyCThostFtdcInputHedgeCfmActionFieldType);
		return -1;
    }

    return 0;
}
