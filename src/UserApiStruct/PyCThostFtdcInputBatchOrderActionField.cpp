
#include "PyCThostFtdcInputBatchOrderActionField.h"

///输入批量报单操作

static PyObject *PyCThostFtdcInputBatchOrderActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInputBatchOrderActionField *self = (PyCThostFtdcInputBatchOrderActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcInputBatchOrderActionField_init(PyCThostFtdcInputBatchOrderActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "OrderActionRef", "RequestID", "FrontID", "SessionID", "ExchangeID", "UserID", "InvestUnitID", "reserve1", "MacAddress", "IPAddress",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *InputBatchOrderActionField_BrokerID = NULL;
    Py_ssize_t InputBatchOrderActionField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *InputBatchOrderActionField_InvestorID = NULL;
    Py_ssize_t InputBatchOrderActionField_InvestorID_len = 0;
            
    ///报单操作引用
    // TThostFtdcOrderActionRefType int
    int InputBatchOrderActionField_OrderActionRef = 0;
        
    ///请求编号
    // TThostFtdcRequestIDType int
    int InputBatchOrderActionField_RequestID = 0;
        
    ///前置编号
    // TThostFtdcFrontIDType int
    int InputBatchOrderActionField_FrontID = 0;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    int InputBatchOrderActionField_SessionID = 0;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *InputBatchOrderActionField_ExchangeID = NULL;
    Py_ssize_t InputBatchOrderActionField_ExchangeID_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *InputBatchOrderActionField_UserID = NULL;
    Py_ssize_t InputBatchOrderActionField_UserID_len = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *InputBatchOrderActionField_InvestUnitID = NULL;
    Py_ssize_t InputBatchOrderActionField_InvestUnitID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    const char *InputBatchOrderActionField_reserve1 = NULL;
    Py_ssize_t InputBatchOrderActionField_reserve1_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *InputBatchOrderActionField_MacAddress = NULL;
    Py_ssize_t InputBatchOrderActionField_MacAddress_len = 0;
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *InputBatchOrderActionField_IPAddress = NULL;
    Py_ssize_t InputBatchOrderActionField_IPAddress_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iiiiy#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#iiiis#s#s#s#s#s#", (char **)kwlist
#endif

        , &InputBatchOrderActionField_BrokerID, &InputBatchOrderActionField_BrokerID_len 
        , &InputBatchOrderActionField_InvestorID, &InputBatchOrderActionField_InvestorID_len 
        , &InputBatchOrderActionField_OrderActionRef 
        , &InputBatchOrderActionField_RequestID 
        , &InputBatchOrderActionField_FrontID 
        , &InputBatchOrderActionField_SessionID 
        , &InputBatchOrderActionField_ExchangeID, &InputBatchOrderActionField_ExchangeID_len 
        , &InputBatchOrderActionField_UserID, &InputBatchOrderActionField_UserID_len 
        , &InputBatchOrderActionField_InvestUnitID, &InputBatchOrderActionField_InvestUnitID_len 
        , &InputBatchOrderActionField_reserve1, &InputBatchOrderActionField_reserve1_len 
        , &InputBatchOrderActionField_MacAddress, &InputBatchOrderActionField_MacAddress_len 
        , &InputBatchOrderActionField_IPAddress, &InputBatchOrderActionField_IPAddress_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( InputBatchOrderActionField_BrokerID != NULL ) {
        if(InputBatchOrderActionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", InputBatchOrderActionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, InputBatchOrderActionField_BrokerID, InputBatchOrderActionField_BrokerID_len);        
        strncpy(self->data.BrokerID, InputBatchOrderActionField_BrokerID, sizeof(self->data.BrokerID) );
        InputBatchOrderActionField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( InputBatchOrderActionField_InvestorID != NULL ) {
        if(InputBatchOrderActionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", InputBatchOrderActionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, InputBatchOrderActionField_InvestorID, InputBatchOrderActionField_InvestorID_len);        
        strncpy(self->data.InvestorID, InputBatchOrderActionField_InvestorID, sizeof(self->data.InvestorID) );
        InputBatchOrderActionField_InvestorID = NULL;
    }
            
    ///报单操作引用
    // TThostFtdcOrderActionRefType int
    self->data.OrderActionRef = InputBatchOrderActionField_OrderActionRef;
        
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = InputBatchOrderActionField_RequestID;
        
    ///前置编号
    // TThostFtdcFrontIDType int
    self->data.FrontID = InputBatchOrderActionField_FrontID;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    self->data.SessionID = InputBatchOrderActionField_SessionID;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( InputBatchOrderActionField_ExchangeID != NULL ) {
        if(InputBatchOrderActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", InputBatchOrderActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, InputBatchOrderActionField_ExchangeID, InputBatchOrderActionField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, InputBatchOrderActionField_ExchangeID, sizeof(self->data.ExchangeID) );
        InputBatchOrderActionField_ExchangeID = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( InputBatchOrderActionField_UserID != NULL ) {
        if(InputBatchOrderActionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", InputBatchOrderActionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, InputBatchOrderActionField_UserID, InputBatchOrderActionField_UserID_len);        
        strncpy(self->data.UserID, InputBatchOrderActionField_UserID, sizeof(self->data.UserID) );
        InputBatchOrderActionField_UserID = NULL;
    }
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( InputBatchOrderActionField_InvestUnitID != NULL ) {
        if(InputBatchOrderActionField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", InputBatchOrderActionField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, InputBatchOrderActionField_InvestUnitID, InputBatchOrderActionField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, InputBatchOrderActionField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        InputBatchOrderActionField_InvestUnitID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    if( InputBatchOrderActionField_reserve1 != NULL ) {
        if(InputBatchOrderActionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", InputBatchOrderActionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, InputBatchOrderActionField_reserve1, InputBatchOrderActionField_reserve1_len);        
        strncpy(self->data.reserve1, InputBatchOrderActionField_reserve1, sizeof(self->data.reserve1) );
        InputBatchOrderActionField_reserve1 = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( InputBatchOrderActionField_MacAddress != NULL ) {
        if(InputBatchOrderActionField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", InputBatchOrderActionField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, InputBatchOrderActionField_MacAddress, InputBatchOrderActionField_MacAddress_len);        
        strncpy(self->data.MacAddress, InputBatchOrderActionField_MacAddress, sizeof(self->data.MacAddress) );
        InputBatchOrderActionField_MacAddress = NULL;
    }
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( InputBatchOrderActionField_IPAddress != NULL ) {
        if(InputBatchOrderActionField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", InputBatchOrderActionField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, InputBatchOrderActionField_IPAddress, InputBatchOrderActionField_IPAddress_len);        
        strncpy(self->data.IPAddress, InputBatchOrderActionField_IPAddress, sizeof(self->data.IPAddress) );
        InputBatchOrderActionField_IPAddress = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcInputBatchOrderActionField_dealloc(PyCThostFtdcInputBatchOrderActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInputBatchOrderActionField_repr(PyCThostFtdcInputBatchOrderActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i,s:i,s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i,s:i,s:i,s:i,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"OrderActionRef", self->data.OrderActionRef 
        ,"RequestID", self->data.RequestID 
        ,"FrontID", self->data.FrontID 
        ,"SessionID", self->data.SessionID 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"InvestUnitID", self->data.InvestUnitID//, (Py_ssize_t)sizeof(self->data.InvestUnitID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"MacAddress", self->data.MacAddress//, (Py_ssize_t)sizeof(self->data.MacAddress) 
        ,"IPAddress", self->data.IPAddress//, (Py_ssize_t)sizeof(self->data.IPAddress) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputBatchOrderActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcInputBatchOrderActionField_get_BrokerID(PyCThostFtdcInputBatchOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcInputBatchOrderActionField_set_BrokerID(PyCThostFtdcInputBatchOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputBatchOrderActionField_get_InvestorID(PyCThostFtdcInputBatchOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcInputBatchOrderActionField_set_InvestorID(PyCThostFtdcInputBatchOrderActionField *self, PyObject* val, void *closure) {
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
            
///报单操作引用
// TThostFtdcOrderActionRefType int
static PyObject *PyCThostFtdcInputBatchOrderActionField_get_OrderActionRef(PyCThostFtdcInputBatchOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.OrderActionRef);
#else
    return PyInt_FromLong(self->data.OrderActionRef);
#endif
}

///报单操作引用
// TThostFtdcOrderActionRefType int
static int PyCThostFtdcInputBatchOrderActionField_set_OrderActionRef(PyCThostFtdcInputBatchOrderActionField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderActionRef Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderActionRef Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the OrderActionRef value out of range for C int");
        return -1;
    }
    self->data.OrderActionRef = (int)buf;
    return 0;
}
        
///请求编号
// TThostFtdcRequestIDType int
static PyObject *PyCThostFtdcInputBatchOrderActionField_get_RequestID(PyCThostFtdcInputBatchOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcInputBatchOrderActionField_set_RequestID(PyCThostFtdcInputBatchOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputBatchOrderActionField_get_FrontID(PyCThostFtdcInputBatchOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FrontID);
#else
    return PyInt_FromLong(self->data.FrontID);
#endif
}

///前置编号
// TThostFtdcFrontIDType int
static int PyCThostFtdcInputBatchOrderActionField_set_FrontID(PyCThostFtdcInputBatchOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputBatchOrderActionField_get_SessionID(PyCThostFtdcInputBatchOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话编号
// TThostFtdcSessionIDType int
static int PyCThostFtdcInputBatchOrderActionField_set_SessionID(PyCThostFtdcInputBatchOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputBatchOrderActionField_get_ExchangeID(PyCThostFtdcInputBatchOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcInputBatchOrderActionField_set_ExchangeID(PyCThostFtdcInputBatchOrderActionField *self, PyObject* val, void *closure) {
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
            
///用户代码
// TThostFtdcUserIDType char[16]
static PyObject *PyCThostFtdcInputBatchOrderActionField_get_UserID(PyCThostFtdcInputBatchOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcInputBatchOrderActionField_set_UserID(PyCThostFtdcInputBatchOrderActionField *self, PyObject* val, void *closure) {
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
            
///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static PyObject *PyCThostFtdcInputBatchOrderActionField_get_InvestUnitID(PyCThostFtdcInputBatchOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcInputBatchOrderActionField_set_InvestUnitID(PyCThostFtdcInputBatchOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputBatchOrderActionField_get_reserve1(PyCThostFtdcInputBatchOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static int PyCThostFtdcInputBatchOrderActionField_set_reserve1(PyCThostFtdcInputBatchOrderActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 16 bytes");
        return -1;
    }
    // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
    // memcpy(self->data.reserve1, buf, len);
    strncpy(self->data.reserve1, buf, sizeof(self->data.reserve1));
    return 0;
}
            
///Mac地址
// TThostFtdcMacAddressType char[21]
static PyObject *PyCThostFtdcInputBatchOrderActionField_get_MacAddress(PyCThostFtdcInputBatchOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcInputBatchOrderActionField_set_MacAddress(PyCThostFtdcInputBatchOrderActionField *self, PyObject* val, void *closure) {
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
            
///IP地址
// TThostFtdcIPAddressType char[33]
static PyObject *PyCThostFtdcInputBatchOrderActionField_get_IPAddress(PyCThostFtdcInputBatchOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcInputBatchOrderActionField_set_IPAddress(PyCThostFtdcInputBatchOrderActionField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcInputBatchOrderActionField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcInputBatchOrderActionField_get_BrokerID, (setter)PyCThostFtdcInputBatchOrderActionField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcInputBatchOrderActionField_get_InvestorID, (setter)PyCThostFtdcInputBatchOrderActionField_set_InvestorID, (char *)"InvestorID", NULL},
    ///报单操作引用 
    {(char *)"OrderActionRef", (getter)PyCThostFtdcInputBatchOrderActionField_get_OrderActionRef, (setter)PyCThostFtdcInputBatchOrderActionField_set_OrderActionRef, (char *)"OrderActionRef", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcInputBatchOrderActionField_get_RequestID, (setter)PyCThostFtdcInputBatchOrderActionField_set_RequestID, (char *)"RequestID", NULL},
    ///前置编号 
    {(char *)"FrontID", (getter)PyCThostFtdcInputBatchOrderActionField_get_FrontID, (setter)PyCThostFtdcInputBatchOrderActionField_set_FrontID, (char *)"FrontID", NULL},
    ///会话编号 
    {(char *)"SessionID", (getter)PyCThostFtdcInputBatchOrderActionField_get_SessionID, (setter)PyCThostFtdcInputBatchOrderActionField_set_SessionID, (char *)"SessionID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcInputBatchOrderActionField_get_ExchangeID, (setter)PyCThostFtdcInputBatchOrderActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcInputBatchOrderActionField_get_UserID, (setter)PyCThostFtdcInputBatchOrderActionField_set_UserID, (char *)"UserID", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcInputBatchOrderActionField_get_InvestUnitID, (setter)PyCThostFtdcInputBatchOrderActionField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcInputBatchOrderActionField_get_reserve1, (setter)PyCThostFtdcInputBatchOrderActionField_set_reserve1, (char *)"reserve1", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcInputBatchOrderActionField_get_MacAddress, (setter)PyCThostFtdcInputBatchOrderActionField_set_MacAddress, (char *)"MacAddress", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcInputBatchOrderActionField_get_IPAddress, (setter)PyCThostFtdcInputBatchOrderActionField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInputBatchOrderActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInputBatchOrderActionField",	/* tp_name */
	sizeof(PyCThostFtdcInputBatchOrderActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInputBatchOrderActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInputBatchOrderActionField_repr,   /* tp_repr */
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
	"CThostFtdcInputBatchOrderActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInputBatchOrderActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInputBatchOrderActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInputBatchOrderActionField_new,       /* tp_new */
};

int PyCThostFtdcInputBatchOrderActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInputBatchOrderActionField  */
	if (PyType_Ready(&PyCThostFtdcInputBatchOrderActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInputBatchOrderActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInputBatchOrderActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInputBatchOrderActionField", (PyObject *)&PyCThostFtdcInputBatchOrderActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInputBatchOrderActionField to module");
        Py_DECREF(&PyCThostFtdcInputBatchOrderActionFieldType);
		return -1;
    }

    return 0;
}
