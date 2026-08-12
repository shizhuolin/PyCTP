
#include "PyCThostFtdcInputSpdApplyActionField.h"

///套利申请撤销

static PyObject *PyCThostFtdcInputSpdApplyActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInputSpdApplyActionField *self = (PyCThostFtdcInputSpdApplyActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcInputSpdApplyActionField_init(PyCThostFtdcInputSpdApplyActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID", "InvestorID", "ExchangeID", "OrderSysID", "OrderRef", "FrontID", "SessionID", "RequestID", "IPAddress", "MacAddress",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *InputSpdApplyActionField_BrokerID = NULL;
    Py_ssize_t InputSpdApplyActionField_BrokerID_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *InputSpdApplyActionField_UserID = NULL;
    Py_ssize_t InputSpdApplyActionField_UserID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *InputSpdApplyActionField_InvestorID = NULL;
    Py_ssize_t InputSpdApplyActionField_InvestorID_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *InputSpdApplyActionField_ExchangeID = NULL;
    Py_ssize_t InputSpdApplyActionField_ExchangeID_len = 0;
            
    ///合同编号
    // TThostFtdcOrderSysIDType char[21]
    const char *InputSpdApplyActionField_OrderSysID = NULL;
    Py_ssize_t InputSpdApplyActionField_OrderSysID_len = 0;
            
    ///报单引用
    // TThostFtdcOrderRefType char[13]
    const char *InputSpdApplyActionField_OrderRef = NULL;
    Py_ssize_t InputSpdApplyActionField_OrderRef_len = 0;
            
    ///前置编号
    // TThostFtdcFrontIDType int
    int InputSpdApplyActionField_FrontID = 0;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    int InputSpdApplyActionField_SessionID = 0;
        
    ///请求编号
    // TThostFtdcRequestIDType int
    int InputSpdApplyActionField_RequestID = 0;
        
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *InputSpdApplyActionField_IPAddress = NULL;
    Py_ssize_t InputSpdApplyActionField_IPAddress_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *InputSpdApplyActionField_MacAddress = NULL;
    Py_ssize_t InputSpdApplyActionField_MacAddress_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#iiiy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#iiis#s#", (char **)kwlist
#endif

        , &InputSpdApplyActionField_BrokerID, &InputSpdApplyActionField_BrokerID_len 
        , &InputSpdApplyActionField_UserID, &InputSpdApplyActionField_UserID_len 
        , &InputSpdApplyActionField_InvestorID, &InputSpdApplyActionField_InvestorID_len 
        , &InputSpdApplyActionField_ExchangeID, &InputSpdApplyActionField_ExchangeID_len 
        , &InputSpdApplyActionField_OrderSysID, &InputSpdApplyActionField_OrderSysID_len 
        , &InputSpdApplyActionField_OrderRef, &InputSpdApplyActionField_OrderRef_len 
        , &InputSpdApplyActionField_FrontID 
        , &InputSpdApplyActionField_SessionID 
        , &InputSpdApplyActionField_RequestID 
        , &InputSpdApplyActionField_IPAddress, &InputSpdApplyActionField_IPAddress_len 
        , &InputSpdApplyActionField_MacAddress, &InputSpdApplyActionField_MacAddress_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( InputSpdApplyActionField_BrokerID != NULL ) {
        if(InputSpdApplyActionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", InputSpdApplyActionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, InputSpdApplyActionField_BrokerID, InputSpdApplyActionField_BrokerID_len);        
        strncpy(self->data.BrokerID, InputSpdApplyActionField_BrokerID, sizeof(self->data.BrokerID) );
        InputSpdApplyActionField_BrokerID = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( InputSpdApplyActionField_UserID != NULL ) {
        if(InputSpdApplyActionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", InputSpdApplyActionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, InputSpdApplyActionField_UserID, InputSpdApplyActionField_UserID_len);        
        strncpy(self->data.UserID, InputSpdApplyActionField_UserID, sizeof(self->data.UserID) );
        InputSpdApplyActionField_UserID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( InputSpdApplyActionField_InvestorID != NULL ) {
        if(InputSpdApplyActionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", InputSpdApplyActionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, InputSpdApplyActionField_InvestorID, InputSpdApplyActionField_InvestorID_len);        
        strncpy(self->data.InvestorID, InputSpdApplyActionField_InvestorID, sizeof(self->data.InvestorID) );
        InputSpdApplyActionField_InvestorID = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( InputSpdApplyActionField_ExchangeID != NULL ) {
        if(InputSpdApplyActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", InputSpdApplyActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, InputSpdApplyActionField_ExchangeID, InputSpdApplyActionField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, InputSpdApplyActionField_ExchangeID, sizeof(self->data.ExchangeID) );
        InputSpdApplyActionField_ExchangeID = NULL;
    }
            
    ///合同编号
    // TThostFtdcOrderSysIDType char[21]
    if( InputSpdApplyActionField_OrderSysID != NULL ) {
        if(InputSpdApplyActionField_OrderSysID_len > (Py_ssize_t)sizeof(self->data.OrderSysID)) {
            PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is %zd)", InputSpdApplyActionField_OrderSysID_len, (Py_ssize_t)sizeof(self->data.OrderSysID));
            return -1;
        }
        // memset(self->data.OrderSysID, 0, sizeof(self->data.OrderSysID));
        // memcpy(self->data.OrderSysID, InputSpdApplyActionField_OrderSysID, InputSpdApplyActionField_OrderSysID_len);        
        strncpy(self->data.OrderSysID, InputSpdApplyActionField_OrderSysID, sizeof(self->data.OrderSysID) );
        InputSpdApplyActionField_OrderSysID = NULL;
    }
            
    ///报单引用
    // TThostFtdcOrderRefType char[13]
    if( InputSpdApplyActionField_OrderRef != NULL ) {
        if(InputSpdApplyActionField_OrderRef_len > (Py_ssize_t)sizeof(self->data.OrderRef)) {
            PyErr_Format(PyExc_ValueError, "OrderRef too long: length=%zd (max allowed is %zd)", InputSpdApplyActionField_OrderRef_len, (Py_ssize_t)sizeof(self->data.OrderRef));
            return -1;
        }
        // memset(self->data.OrderRef, 0, sizeof(self->data.OrderRef));
        // memcpy(self->data.OrderRef, InputSpdApplyActionField_OrderRef, InputSpdApplyActionField_OrderRef_len);        
        strncpy(self->data.OrderRef, InputSpdApplyActionField_OrderRef, sizeof(self->data.OrderRef) );
        InputSpdApplyActionField_OrderRef = NULL;
    }
            
    ///前置编号
    // TThostFtdcFrontIDType int
    self->data.FrontID = InputSpdApplyActionField_FrontID;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    self->data.SessionID = InputSpdApplyActionField_SessionID;
        
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = InputSpdApplyActionField_RequestID;
        
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( InputSpdApplyActionField_IPAddress != NULL ) {
        if(InputSpdApplyActionField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", InputSpdApplyActionField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, InputSpdApplyActionField_IPAddress, InputSpdApplyActionField_IPAddress_len);        
        strncpy(self->data.IPAddress, InputSpdApplyActionField_IPAddress, sizeof(self->data.IPAddress) );
        InputSpdApplyActionField_IPAddress = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( InputSpdApplyActionField_MacAddress != NULL ) {
        if(InputSpdApplyActionField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", InputSpdApplyActionField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, InputSpdApplyActionField_MacAddress, InputSpdApplyActionField_MacAddress_len);        
        strncpy(self->data.MacAddress, InputSpdApplyActionField_MacAddress, sizeof(self->data.MacAddress) );
        InputSpdApplyActionField_MacAddress = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcInputSpdApplyActionField_dealloc(PyCThostFtdcInputSpdApplyActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInputSpdApplyActionField_repr(PyCThostFtdcInputSpdApplyActionField *self) {

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputSpdApplyActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcInputSpdApplyActionField_get_BrokerID(PyCThostFtdcInputSpdApplyActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcInputSpdApplyActionField_set_BrokerID(PyCThostFtdcInputSpdApplyActionField *self, PyObject* val, void *closure) {
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
            
///用户代码
// TThostFtdcUserIDType char[16]
static PyObject *PyCThostFtdcInputSpdApplyActionField_get_UserID(PyCThostFtdcInputSpdApplyActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcInputSpdApplyActionField_set_UserID(PyCThostFtdcInputSpdApplyActionField *self, PyObject* val, void *closure) {
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
            
///投资者代码
// TThostFtdcInvestorIDType char[13]
static PyObject *PyCThostFtdcInputSpdApplyActionField_get_InvestorID(PyCThostFtdcInputSpdApplyActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcInputSpdApplyActionField_set_InvestorID(PyCThostFtdcInputSpdApplyActionField *self, PyObject* val, void *closure) {
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
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcInputSpdApplyActionField_get_ExchangeID(PyCThostFtdcInputSpdApplyActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcInputSpdApplyActionField_set_ExchangeID(PyCThostFtdcInputSpdApplyActionField *self, PyObject* val, void *closure) {
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
            
///合同编号
// TThostFtdcOrderSysIDType char[21]
static PyObject *PyCThostFtdcInputSpdApplyActionField_get_OrderSysID(PyCThostFtdcInputSpdApplyActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderSysID, (Py_ssize_t)sizeof(self->data.OrderSysID));
    return PyBytes_FromString(self->data.OrderSysID);
}

///合同编号
// TThostFtdcOrderSysIDType char[21]
static int PyCThostFtdcInputSpdApplyActionField_set_OrderSysID(PyCThostFtdcInputSpdApplyActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderSysID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OrderSysID)) {
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
static PyObject *PyCThostFtdcInputSpdApplyActionField_get_OrderRef(PyCThostFtdcInputSpdApplyActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderRef, (Py_ssize_t)sizeof(self->data.OrderRef));
    return PyBytes_FromString(self->data.OrderRef);
}

///报单引用
// TThostFtdcOrderRefType char[13]
static int PyCThostFtdcInputSpdApplyActionField_set_OrderRef(PyCThostFtdcInputSpdApplyActionField *self, PyObject* val, void *closure) {
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
            
///前置编号
// TThostFtdcFrontIDType int
static PyObject *PyCThostFtdcInputSpdApplyActionField_get_FrontID(PyCThostFtdcInputSpdApplyActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FrontID);
#else
    return PyInt_FromLong(self->data.FrontID);
#endif
}

///前置编号
// TThostFtdcFrontIDType int
static int PyCThostFtdcInputSpdApplyActionField_set_FrontID(PyCThostFtdcInputSpdApplyActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputSpdApplyActionField_get_SessionID(PyCThostFtdcInputSpdApplyActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话编号
// TThostFtdcSessionIDType int
static int PyCThostFtdcInputSpdApplyActionField_set_SessionID(PyCThostFtdcInputSpdApplyActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputSpdApplyActionField_get_RequestID(PyCThostFtdcInputSpdApplyActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcInputSpdApplyActionField_set_RequestID(PyCThostFtdcInputSpdApplyActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputSpdApplyActionField_get_IPAddress(PyCThostFtdcInputSpdApplyActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcInputSpdApplyActionField_set_IPAddress(PyCThostFtdcInputSpdApplyActionField *self, PyObject* val, void *closure) {
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
            
///Mac地址
// TThostFtdcMacAddressType char[21]
static PyObject *PyCThostFtdcInputSpdApplyActionField_get_MacAddress(PyCThostFtdcInputSpdApplyActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcInputSpdApplyActionField_set_MacAddress(PyCThostFtdcInputSpdApplyActionField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcInputSpdApplyActionField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcInputSpdApplyActionField_get_BrokerID, (setter)PyCThostFtdcInputSpdApplyActionField_set_BrokerID, (char *)"BrokerID", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcInputSpdApplyActionField_get_UserID, (setter)PyCThostFtdcInputSpdApplyActionField_set_UserID, (char *)"UserID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcInputSpdApplyActionField_get_InvestorID, (setter)PyCThostFtdcInputSpdApplyActionField_set_InvestorID, (char *)"InvestorID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcInputSpdApplyActionField_get_ExchangeID, (setter)PyCThostFtdcInputSpdApplyActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///合同编号 
    {(char *)"OrderSysID", (getter)PyCThostFtdcInputSpdApplyActionField_get_OrderSysID, (setter)PyCThostFtdcInputSpdApplyActionField_set_OrderSysID, (char *)"OrderSysID", NULL},
    ///报单引用 
    {(char *)"OrderRef", (getter)PyCThostFtdcInputSpdApplyActionField_get_OrderRef, (setter)PyCThostFtdcInputSpdApplyActionField_set_OrderRef, (char *)"OrderRef", NULL},
    ///前置编号 
    {(char *)"FrontID", (getter)PyCThostFtdcInputSpdApplyActionField_get_FrontID, (setter)PyCThostFtdcInputSpdApplyActionField_set_FrontID, (char *)"FrontID", NULL},
    ///会话编号 
    {(char *)"SessionID", (getter)PyCThostFtdcInputSpdApplyActionField_get_SessionID, (setter)PyCThostFtdcInputSpdApplyActionField_set_SessionID, (char *)"SessionID", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcInputSpdApplyActionField_get_RequestID, (setter)PyCThostFtdcInputSpdApplyActionField_set_RequestID, (char *)"RequestID", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcInputSpdApplyActionField_get_IPAddress, (setter)PyCThostFtdcInputSpdApplyActionField_set_IPAddress, (char *)"IPAddress", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcInputSpdApplyActionField_get_MacAddress, (setter)PyCThostFtdcInputSpdApplyActionField_set_MacAddress, (char *)"MacAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInputSpdApplyActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInputSpdApplyActionField",	/* tp_name */
	sizeof(PyCThostFtdcInputSpdApplyActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInputSpdApplyActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInputSpdApplyActionField_repr,   /* tp_repr */
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
	"CThostFtdcInputSpdApplyActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInputSpdApplyActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInputSpdApplyActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInputSpdApplyActionField_new,       /* tp_new */
};

int PyCThostFtdcInputSpdApplyActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInputSpdApplyActionField  */
	if (PyType_Ready(&PyCThostFtdcInputSpdApplyActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInputSpdApplyActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInputSpdApplyActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInputSpdApplyActionField", (PyObject *)&PyCThostFtdcInputSpdApplyActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInputSpdApplyActionField to module");
        Py_DECREF(&PyCThostFtdcInputSpdApplyActionFieldType);
		return -1;
    }

    return 0;
}
