
#include "PyCThostFtdcInputHedgeCfmField.h"

///套保确认输入基本信息

static PyObject *PyCThostFtdcInputHedgeCfmField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInputHedgeCfmField *self = (PyCThostFtdcInputHedgeCfmField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcInputHedgeCfmField_init(PyCThostFtdcInputHedgeCfmField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID", "InvestorID", "ExchangeID", "InstrumentID", "Volume", "Direction", "RequestID", "OrderRef", "IPAddress", "MacAddress",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *InputHedgeCfmField_BrokerID = NULL;
    Py_ssize_t InputHedgeCfmField_BrokerID_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *InputHedgeCfmField_UserID = NULL;
    Py_ssize_t InputHedgeCfmField_UserID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *InputHedgeCfmField_InvestorID = NULL;
    Py_ssize_t InputHedgeCfmField_InvestorID_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *InputHedgeCfmField_ExchangeID = NULL;
    Py_ssize_t InputHedgeCfmField_ExchangeID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *InputHedgeCfmField_InstrumentID = NULL;
    Py_ssize_t InputHedgeCfmField_InstrumentID_len = 0;
            
    ///数量
    // TThostFtdcVolumeType int
    int InputHedgeCfmField_Volume = 0;
        
    ///买卖方向
    // TThostFtdcDirectionType char
    char InputHedgeCfmField_Direction = 0;
            
    ///请求编号
    // TThostFtdcRequestIDType int
    int InputHedgeCfmField_RequestID = 0;
        
    ///报单引用
    // TThostFtdcOrderRefType char[13]
    const char *InputHedgeCfmField_OrderRef = NULL;
    Py_ssize_t InputHedgeCfmField_OrderRef_len = 0;
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *InputHedgeCfmField_IPAddress = NULL;
    Py_ssize_t InputHedgeCfmField_IPAddress_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *InputHedgeCfmField_MacAddress = NULL;
    Py_ssize_t InputHedgeCfmField_MacAddress_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#iciy#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#icis#s#s#", (char **)kwlist
#endif

        , &InputHedgeCfmField_BrokerID, &InputHedgeCfmField_BrokerID_len 
        , &InputHedgeCfmField_UserID, &InputHedgeCfmField_UserID_len 
        , &InputHedgeCfmField_InvestorID, &InputHedgeCfmField_InvestorID_len 
        , &InputHedgeCfmField_ExchangeID, &InputHedgeCfmField_ExchangeID_len 
        , &InputHedgeCfmField_InstrumentID, &InputHedgeCfmField_InstrumentID_len 
        , &InputHedgeCfmField_Volume 
        , &InputHedgeCfmField_Direction 
        , &InputHedgeCfmField_RequestID 
        , &InputHedgeCfmField_OrderRef, &InputHedgeCfmField_OrderRef_len 
        , &InputHedgeCfmField_IPAddress, &InputHedgeCfmField_IPAddress_len 
        , &InputHedgeCfmField_MacAddress, &InputHedgeCfmField_MacAddress_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( InputHedgeCfmField_BrokerID != NULL ) {
        if(InputHedgeCfmField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", InputHedgeCfmField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, InputHedgeCfmField_BrokerID, InputHedgeCfmField_BrokerID_len);        
        strncpy(self->data.BrokerID, InputHedgeCfmField_BrokerID, sizeof(self->data.BrokerID) );
        InputHedgeCfmField_BrokerID = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( InputHedgeCfmField_UserID != NULL ) {
        if(InputHedgeCfmField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", InputHedgeCfmField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, InputHedgeCfmField_UserID, InputHedgeCfmField_UserID_len);        
        strncpy(self->data.UserID, InputHedgeCfmField_UserID, sizeof(self->data.UserID) );
        InputHedgeCfmField_UserID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( InputHedgeCfmField_InvestorID != NULL ) {
        if(InputHedgeCfmField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", InputHedgeCfmField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, InputHedgeCfmField_InvestorID, InputHedgeCfmField_InvestorID_len);        
        strncpy(self->data.InvestorID, InputHedgeCfmField_InvestorID, sizeof(self->data.InvestorID) );
        InputHedgeCfmField_InvestorID = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( InputHedgeCfmField_ExchangeID != NULL ) {
        if(InputHedgeCfmField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", InputHedgeCfmField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, InputHedgeCfmField_ExchangeID, InputHedgeCfmField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, InputHedgeCfmField_ExchangeID, sizeof(self->data.ExchangeID) );
        InputHedgeCfmField_ExchangeID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( InputHedgeCfmField_InstrumentID != NULL ) {
        if(InputHedgeCfmField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", InputHedgeCfmField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, InputHedgeCfmField_InstrumentID, InputHedgeCfmField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, InputHedgeCfmField_InstrumentID, sizeof(self->data.InstrumentID) );
        InputHedgeCfmField_InstrumentID = NULL;
    }
            
    ///数量
    // TThostFtdcVolumeType int
    self->data.Volume = InputHedgeCfmField_Volume;
        
    ///买卖方向
    // TThostFtdcDirectionType char
    self->data.Direction = InputHedgeCfmField_Direction;
            
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = InputHedgeCfmField_RequestID;
        
    ///报单引用
    // TThostFtdcOrderRefType char[13]
    if( InputHedgeCfmField_OrderRef != NULL ) {
        if(InputHedgeCfmField_OrderRef_len > (Py_ssize_t)sizeof(self->data.OrderRef)) {
            PyErr_Format(PyExc_ValueError, "OrderRef too long: length=%zd (max allowed is %zd)", InputHedgeCfmField_OrderRef_len, (Py_ssize_t)sizeof(self->data.OrderRef));
            return -1;
        }
        // memset(self->data.OrderRef, 0, sizeof(self->data.OrderRef));
        // memcpy(self->data.OrderRef, InputHedgeCfmField_OrderRef, InputHedgeCfmField_OrderRef_len);        
        strncpy(self->data.OrderRef, InputHedgeCfmField_OrderRef, sizeof(self->data.OrderRef) );
        InputHedgeCfmField_OrderRef = NULL;
    }
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( InputHedgeCfmField_IPAddress != NULL ) {
        if(InputHedgeCfmField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", InputHedgeCfmField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, InputHedgeCfmField_IPAddress, InputHedgeCfmField_IPAddress_len);        
        strncpy(self->data.IPAddress, InputHedgeCfmField_IPAddress, sizeof(self->data.IPAddress) );
        InputHedgeCfmField_IPAddress = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( InputHedgeCfmField_MacAddress != NULL ) {
        if(InputHedgeCfmField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", InputHedgeCfmField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, InputHedgeCfmField_MacAddress, InputHedgeCfmField_MacAddress_len);        
        strncpy(self->data.MacAddress, InputHedgeCfmField_MacAddress, sizeof(self->data.MacAddress) );
        InputHedgeCfmField_MacAddress = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcInputHedgeCfmField_dealloc(PyCThostFtdcInputHedgeCfmField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInputHedgeCfmField_repr(PyCThostFtdcInputHedgeCfmField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"Volume", self->data.Volume 
        ,"Direction", self->data.Direction 
        ,"RequestID", self->data.RequestID 
        ,"OrderRef", self->data.OrderRef//, (Py_ssize_t)sizeof(self->data.OrderRef) 
        ,"IPAddress", self->data.IPAddress//, (Py_ssize_t)sizeof(self->data.IPAddress) 
        ,"MacAddress", self->data.MacAddress//, (Py_ssize_t)sizeof(self->data.MacAddress) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputHedgeCfmField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcInputHedgeCfmField_get_BrokerID(PyCThostFtdcInputHedgeCfmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcInputHedgeCfmField_set_BrokerID(PyCThostFtdcInputHedgeCfmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputHedgeCfmField_get_UserID(PyCThostFtdcInputHedgeCfmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcInputHedgeCfmField_set_UserID(PyCThostFtdcInputHedgeCfmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputHedgeCfmField_get_InvestorID(PyCThostFtdcInputHedgeCfmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcInputHedgeCfmField_set_InvestorID(PyCThostFtdcInputHedgeCfmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputHedgeCfmField_get_ExchangeID(PyCThostFtdcInputHedgeCfmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcInputHedgeCfmField_set_ExchangeID(PyCThostFtdcInputHedgeCfmField *self, PyObject* val, void *closure) {
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
            
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcInputHedgeCfmField_get_InstrumentID(PyCThostFtdcInputHedgeCfmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcInputHedgeCfmField_set_InstrumentID(PyCThostFtdcInputHedgeCfmField *self, PyObject* val, void *closure) {
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
            
///数量
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcInputHedgeCfmField_get_Volume(PyCThostFtdcInputHedgeCfmField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.Volume);
#else
    return PyInt_FromLong(self->data.Volume);
#endif
}

///数量
// TThostFtdcVolumeType int
static int PyCThostFtdcInputHedgeCfmField_set_Volume(PyCThostFtdcInputHedgeCfmField *self, PyObject* val, void *closure) {
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
        
///买卖方向
// TThostFtdcDirectionType char
static PyObject *PyCThostFtdcInputHedgeCfmField_get_Direction(PyCThostFtdcInputHedgeCfmField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

///买卖方向
// TThostFtdcDirectionType char
static int PyCThostFtdcInputHedgeCfmField_set_Direction(PyCThostFtdcInputHedgeCfmField *self, PyObject* val, void *closure) {
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
            
///请求编号
// TThostFtdcRequestIDType int
static PyObject *PyCThostFtdcInputHedgeCfmField_get_RequestID(PyCThostFtdcInputHedgeCfmField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcInputHedgeCfmField_set_RequestID(PyCThostFtdcInputHedgeCfmField *self, PyObject* val, void *closure) {
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
        
///报单引用
// TThostFtdcOrderRefType char[13]
static PyObject *PyCThostFtdcInputHedgeCfmField_get_OrderRef(PyCThostFtdcInputHedgeCfmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderRef, (Py_ssize_t)sizeof(self->data.OrderRef));
    return PyBytes_FromString(self->data.OrderRef);
}

///报单引用
// TThostFtdcOrderRefType char[13]
static int PyCThostFtdcInputHedgeCfmField_set_OrderRef(PyCThostFtdcInputHedgeCfmField *self, PyObject* val, void *closure) {
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
            
///IP地址
// TThostFtdcIPAddressType char[33]
static PyObject *PyCThostFtdcInputHedgeCfmField_get_IPAddress(PyCThostFtdcInputHedgeCfmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcInputHedgeCfmField_set_IPAddress(PyCThostFtdcInputHedgeCfmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputHedgeCfmField_get_MacAddress(PyCThostFtdcInputHedgeCfmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcInputHedgeCfmField_set_MacAddress(PyCThostFtdcInputHedgeCfmField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcInputHedgeCfmField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcInputHedgeCfmField_get_BrokerID, (setter)PyCThostFtdcInputHedgeCfmField_set_BrokerID, (char *)"BrokerID", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcInputHedgeCfmField_get_UserID, (setter)PyCThostFtdcInputHedgeCfmField_set_UserID, (char *)"UserID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcInputHedgeCfmField_get_InvestorID, (setter)PyCThostFtdcInputHedgeCfmField_set_InvestorID, (char *)"InvestorID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcInputHedgeCfmField_get_ExchangeID, (setter)PyCThostFtdcInputHedgeCfmField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcInputHedgeCfmField_get_InstrumentID, (setter)PyCThostFtdcInputHedgeCfmField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///数量 
    {(char *)"Volume", (getter)PyCThostFtdcInputHedgeCfmField_get_Volume, (setter)PyCThostFtdcInputHedgeCfmField_set_Volume, (char *)"Volume", NULL},
    ///买卖方向 
    {(char *)"Direction", (getter)PyCThostFtdcInputHedgeCfmField_get_Direction, (setter)PyCThostFtdcInputHedgeCfmField_set_Direction, (char *)"Direction", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcInputHedgeCfmField_get_RequestID, (setter)PyCThostFtdcInputHedgeCfmField_set_RequestID, (char *)"RequestID", NULL},
    ///报单引用 
    {(char *)"OrderRef", (getter)PyCThostFtdcInputHedgeCfmField_get_OrderRef, (setter)PyCThostFtdcInputHedgeCfmField_set_OrderRef, (char *)"OrderRef", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcInputHedgeCfmField_get_IPAddress, (setter)PyCThostFtdcInputHedgeCfmField_set_IPAddress, (char *)"IPAddress", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcInputHedgeCfmField_get_MacAddress, (setter)PyCThostFtdcInputHedgeCfmField_set_MacAddress, (char *)"MacAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInputHedgeCfmFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInputHedgeCfmField",	/* tp_name */
	sizeof(PyCThostFtdcInputHedgeCfmField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInputHedgeCfmField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInputHedgeCfmField_repr,   /* tp_repr */
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
	"CThostFtdcInputHedgeCfmField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInputHedgeCfmField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInputHedgeCfmField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInputHedgeCfmField_new,       /* tp_new */
};

int PyCThostFtdcInputHedgeCfmFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInputHedgeCfmField  */
	if (PyType_Ready(&PyCThostFtdcInputHedgeCfmFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInputHedgeCfmField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInputHedgeCfmFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInputHedgeCfmField", (PyObject *)&PyCThostFtdcInputHedgeCfmFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInputHedgeCfmField to module");
        Py_DECREF(&PyCThostFtdcInputHedgeCfmFieldType);
		return -1;
    }

    return 0;
}
