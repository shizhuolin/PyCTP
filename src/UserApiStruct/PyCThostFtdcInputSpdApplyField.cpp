
#include "PyCThostFtdcInputSpdApplyField.h"

///套利确认输入基本信息

static PyObject *PyCThostFtdcInputSpdApplyField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInputSpdApplyField *self = (PyCThostFtdcInputSpdApplyField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcInputSpdApplyField_init(PyCThostFtdcInputSpdApplyField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID", "InvestorID", "ExchangeID", "FirstLegInstrumentID", "SecondLegInstrumentID", "Volume", "Direction", "CmbType", "RequestID", "OrderRef", "IPAddress", "MacAddress",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *InputSpdApplyField_BrokerID = NULL;
    Py_ssize_t InputSpdApplyField_BrokerID_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *InputSpdApplyField_UserID = NULL;
    Py_ssize_t InputSpdApplyField_UserID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *InputSpdApplyField_InvestorID = NULL;
    Py_ssize_t InputSpdApplyField_InvestorID_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *InputSpdApplyField_ExchangeID = NULL;
    Py_ssize_t InputSpdApplyField_ExchangeID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *InputSpdApplyField_FirstLegInstrumentID = NULL;
    Py_ssize_t InputSpdApplyField_FirstLegInstrumentID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *InputSpdApplyField_SecondLegInstrumentID = NULL;
    Py_ssize_t InputSpdApplyField_SecondLegInstrumentID_len = 0;
            
    ///数量
    // TThostFtdcVolumeType int
    int InputSpdApplyField_Volume = 0;
        
    ///买卖方向
    // TThostFtdcDirectionType char
    char InputSpdApplyField_Direction = 0;
            
    ///组合定单类型
    // TThostFtdcCmbTypeType char
    char InputSpdApplyField_CmbType = 0;
            
    ///请求编号
    // TThostFtdcRequestIDType int
    int InputSpdApplyField_RequestID = 0;
        
    ///报单引用
    // TThostFtdcOrderRefType char[13]
    const char *InputSpdApplyField_OrderRef = NULL;
    Py_ssize_t InputSpdApplyField_OrderRef_len = 0;
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *InputSpdApplyField_IPAddress = NULL;
    Py_ssize_t InputSpdApplyField_IPAddress_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *InputSpdApplyField_MacAddress = NULL;
    Py_ssize_t InputSpdApplyField_MacAddress_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#icciy#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#iccis#s#s#", (char **)kwlist
#endif

        , &InputSpdApplyField_BrokerID, &InputSpdApplyField_BrokerID_len 
        , &InputSpdApplyField_UserID, &InputSpdApplyField_UserID_len 
        , &InputSpdApplyField_InvestorID, &InputSpdApplyField_InvestorID_len 
        , &InputSpdApplyField_ExchangeID, &InputSpdApplyField_ExchangeID_len 
        , &InputSpdApplyField_FirstLegInstrumentID, &InputSpdApplyField_FirstLegInstrumentID_len 
        , &InputSpdApplyField_SecondLegInstrumentID, &InputSpdApplyField_SecondLegInstrumentID_len 
        , &InputSpdApplyField_Volume 
        , &InputSpdApplyField_Direction 
        , &InputSpdApplyField_CmbType 
        , &InputSpdApplyField_RequestID 
        , &InputSpdApplyField_OrderRef, &InputSpdApplyField_OrderRef_len 
        , &InputSpdApplyField_IPAddress, &InputSpdApplyField_IPAddress_len 
        , &InputSpdApplyField_MacAddress, &InputSpdApplyField_MacAddress_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( InputSpdApplyField_BrokerID != NULL ) {
        if(InputSpdApplyField_BrokerID_len >= (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", InputSpdApplyField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, InputSpdApplyField_BrokerID, InputSpdApplyField_BrokerID_len);        
        strncpy(self->data.BrokerID, InputSpdApplyField_BrokerID, sizeof(self->data.BrokerID) );
        InputSpdApplyField_BrokerID = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( InputSpdApplyField_UserID != NULL ) {
        if(InputSpdApplyField_UserID_len >= (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", InputSpdApplyField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, InputSpdApplyField_UserID, InputSpdApplyField_UserID_len);        
        strncpy(self->data.UserID, InputSpdApplyField_UserID, sizeof(self->data.UserID) );
        InputSpdApplyField_UserID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( InputSpdApplyField_InvestorID != NULL ) {
        if(InputSpdApplyField_InvestorID_len >= (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", InputSpdApplyField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, InputSpdApplyField_InvestorID, InputSpdApplyField_InvestorID_len);        
        strncpy(self->data.InvestorID, InputSpdApplyField_InvestorID, sizeof(self->data.InvestorID) );
        InputSpdApplyField_InvestorID = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( InputSpdApplyField_ExchangeID != NULL ) {
        if(InputSpdApplyField_ExchangeID_len >= (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", InputSpdApplyField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, InputSpdApplyField_ExchangeID, InputSpdApplyField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, InputSpdApplyField_ExchangeID, sizeof(self->data.ExchangeID) );
        InputSpdApplyField_ExchangeID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( InputSpdApplyField_FirstLegInstrumentID != NULL ) {
        if(InputSpdApplyField_FirstLegInstrumentID_len >= (Py_ssize_t)sizeof(self->data.FirstLegInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "FirstLegInstrumentID too long: length=%zd (max allowed is %zd)", InputSpdApplyField_FirstLegInstrumentID_len, (Py_ssize_t)sizeof(self->data.FirstLegInstrumentID));
            return -1;
        }
        // memset(self->data.FirstLegInstrumentID, 0, sizeof(self->data.FirstLegInstrumentID));
        // memcpy(self->data.FirstLegInstrumentID, InputSpdApplyField_FirstLegInstrumentID, InputSpdApplyField_FirstLegInstrumentID_len);        
        strncpy(self->data.FirstLegInstrumentID, InputSpdApplyField_FirstLegInstrumentID, sizeof(self->data.FirstLegInstrumentID) );
        InputSpdApplyField_FirstLegInstrumentID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( InputSpdApplyField_SecondLegInstrumentID != NULL ) {
        if(InputSpdApplyField_SecondLegInstrumentID_len >= (Py_ssize_t)sizeof(self->data.SecondLegInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "SecondLegInstrumentID too long: length=%zd (max allowed is %zd)", InputSpdApplyField_SecondLegInstrumentID_len, (Py_ssize_t)sizeof(self->data.SecondLegInstrumentID));
            return -1;
        }
        // memset(self->data.SecondLegInstrumentID, 0, sizeof(self->data.SecondLegInstrumentID));
        // memcpy(self->data.SecondLegInstrumentID, InputSpdApplyField_SecondLegInstrumentID, InputSpdApplyField_SecondLegInstrumentID_len);        
        strncpy(self->data.SecondLegInstrumentID, InputSpdApplyField_SecondLegInstrumentID, sizeof(self->data.SecondLegInstrumentID) );
        InputSpdApplyField_SecondLegInstrumentID = NULL;
    }
            
    ///数量
    // TThostFtdcVolumeType int
    self->data.Volume = InputSpdApplyField_Volume;
        
    ///买卖方向
    // TThostFtdcDirectionType char
    self->data.Direction = InputSpdApplyField_Direction;
            
    ///组合定单类型
    // TThostFtdcCmbTypeType char
    self->data.CmbType = InputSpdApplyField_CmbType;
            
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = InputSpdApplyField_RequestID;
        
    ///报单引用
    // TThostFtdcOrderRefType char[13]
    if( InputSpdApplyField_OrderRef != NULL ) {
        if(InputSpdApplyField_OrderRef_len >= (Py_ssize_t)sizeof(self->data.OrderRef)) {
            PyErr_Format(PyExc_ValueError, "OrderRef too long: length=%zd (max allowed is %zd)", InputSpdApplyField_OrderRef_len, (Py_ssize_t)sizeof(self->data.OrderRef));
            return -1;
        }
        // memset(self->data.OrderRef, 0, sizeof(self->data.OrderRef));
        // memcpy(self->data.OrderRef, InputSpdApplyField_OrderRef, InputSpdApplyField_OrderRef_len);        
        strncpy(self->data.OrderRef, InputSpdApplyField_OrderRef, sizeof(self->data.OrderRef) );
        InputSpdApplyField_OrderRef = NULL;
    }
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( InputSpdApplyField_IPAddress != NULL ) {
        if(InputSpdApplyField_IPAddress_len >= (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", InputSpdApplyField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, InputSpdApplyField_IPAddress, InputSpdApplyField_IPAddress_len);        
        strncpy(self->data.IPAddress, InputSpdApplyField_IPAddress, sizeof(self->data.IPAddress) );
        InputSpdApplyField_IPAddress = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( InputSpdApplyField_MacAddress != NULL ) {
        if(InputSpdApplyField_MacAddress_len >= (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", InputSpdApplyField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, InputSpdApplyField_MacAddress, InputSpdApplyField_MacAddress_len);        
        strncpy(self->data.MacAddress, InputSpdApplyField_MacAddress, sizeof(self->data.MacAddress) );
        InputSpdApplyField_MacAddress = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcInputSpdApplyField_dealloc(PyCThostFtdcInputSpdApplyField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInputSpdApplyField_repr(PyCThostFtdcInputSpdApplyField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:c,s:i,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:c,s:i,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"FirstLegInstrumentID", self->data.FirstLegInstrumentID//, (Py_ssize_t)sizeof(self->data.FirstLegInstrumentID) 
        ,"SecondLegInstrumentID", self->data.SecondLegInstrumentID//, (Py_ssize_t)sizeof(self->data.SecondLegInstrumentID) 
        ,"Volume", self->data.Volume 
        ,"Direction", self->data.Direction 
        ,"CmbType", self->data.CmbType 
        ,"RequestID", self->data.RequestID 
        ,"OrderRef", self->data.OrderRef//, (Py_ssize_t)sizeof(self->data.OrderRef) 
        ,"IPAddress", self->data.IPAddress//, (Py_ssize_t)sizeof(self->data.IPAddress) 
        ,"MacAddress", self->data.MacAddress//, (Py_ssize_t)sizeof(self->data.MacAddress) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputSpdApplyField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcInputSpdApplyField_get_BrokerID(PyCThostFtdcInputSpdApplyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcInputSpdApplyField_set_BrokerID(PyCThostFtdcInputSpdApplyField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputSpdApplyField_get_UserID(PyCThostFtdcInputSpdApplyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcInputSpdApplyField_set_UserID(PyCThostFtdcInputSpdApplyField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputSpdApplyField_get_InvestorID(PyCThostFtdcInputSpdApplyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcInputSpdApplyField_set_InvestorID(PyCThostFtdcInputSpdApplyField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputSpdApplyField_get_ExchangeID(PyCThostFtdcInputSpdApplyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcInputSpdApplyField_set_ExchangeID(PyCThostFtdcInputSpdApplyField *self, PyObject* val, void *closure) {
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
            
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcInputSpdApplyField_get_FirstLegInstrumentID(PyCThostFtdcInputSpdApplyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.FirstLegInstrumentID, (Py_ssize_t)sizeof(self->data.FirstLegInstrumentID));
    return PyBytes_FromString(self->data.FirstLegInstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcInputSpdApplyField_set_FirstLegInstrumentID(PyCThostFtdcInputSpdApplyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FirstLegInstrumentID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.FirstLegInstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "FirstLegInstrumentID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.FirstLegInstrumentID, 0, sizeof(self->data.FirstLegInstrumentID));
    // memcpy(self->data.FirstLegInstrumentID, buf, len);
    strncpy(self->data.FirstLegInstrumentID, buf, sizeof(self->data.FirstLegInstrumentID));
    return 0;
}
            
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcInputSpdApplyField_get_SecondLegInstrumentID(PyCThostFtdcInputSpdApplyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.SecondLegInstrumentID, (Py_ssize_t)sizeof(self->data.SecondLegInstrumentID));
    return PyBytes_FromString(self->data.SecondLegInstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcInputSpdApplyField_set_SecondLegInstrumentID(PyCThostFtdcInputSpdApplyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SecondLegInstrumentID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.SecondLegInstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "SecondLegInstrumentID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.SecondLegInstrumentID, 0, sizeof(self->data.SecondLegInstrumentID));
    // memcpy(self->data.SecondLegInstrumentID, buf, len);
    strncpy(self->data.SecondLegInstrumentID, buf, sizeof(self->data.SecondLegInstrumentID));
    return 0;
}
            
///数量
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcInputSpdApplyField_get_Volume(PyCThostFtdcInputSpdApplyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.Volume);
#else
    return PyInt_FromLong(self->data.Volume);
#endif
}

///数量
// TThostFtdcVolumeType int
static int PyCThostFtdcInputSpdApplyField_set_Volume(PyCThostFtdcInputSpdApplyField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputSpdApplyField_get_Direction(PyCThostFtdcInputSpdApplyField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

///买卖方向
// TThostFtdcDirectionType char
static int PyCThostFtdcInputSpdApplyField_set_Direction(PyCThostFtdcInputSpdApplyField *self, PyObject* val, void *closure) {
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
            
///组合定单类型
// TThostFtdcCmbTypeType char
static PyObject *PyCThostFtdcInputSpdApplyField_get_CmbType(PyCThostFtdcInputSpdApplyField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.CmbType), 1);
}

///组合定单类型
// TThostFtdcCmbTypeType char
static int PyCThostFtdcInputSpdApplyField_set_CmbType(PyCThostFtdcInputSpdApplyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CmbType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CmbType)) {
        PyErr_SetString(PyExc_ValueError, "CmbType must be equal 1 bytes");
        return -1;
    }
    self->data.CmbType = *buf;
    return 0;
}
            
///请求编号
// TThostFtdcRequestIDType int
static PyObject *PyCThostFtdcInputSpdApplyField_get_RequestID(PyCThostFtdcInputSpdApplyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcInputSpdApplyField_set_RequestID(PyCThostFtdcInputSpdApplyField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputSpdApplyField_get_OrderRef(PyCThostFtdcInputSpdApplyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderRef, (Py_ssize_t)sizeof(self->data.OrderRef));
    return PyBytes_FromString(self->data.OrderRef);
}

///报单引用
// TThostFtdcOrderRefType char[13]
static int PyCThostFtdcInputSpdApplyField_set_OrderRef(PyCThostFtdcInputSpdApplyField *self, PyObject* val, void *closure) {
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
            
///IP地址
// TThostFtdcIPAddressType char[33]
static PyObject *PyCThostFtdcInputSpdApplyField_get_IPAddress(PyCThostFtdcInputSpdApplyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcInputSpdApplyField_set_IPAddress(PyCThostFtdcInputSpdApplyField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputSpdApplyField_get_MacAddress(PyCThostFtdcInputSpdApplyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcInputSpdApplyField_set_MacAddress(PyCThostFtdcInputSpdApplyField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcInputSpdApplyField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcInputSpdApplyField_get_BrokerID, (setter)PyCThostFtdcInputSpdApplyField_set_BrokerID, (char *)"BrokerID", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcInputSpdApplyField_get_UserID, (setter)PyCThostFtdcInputSpdApplyField_set_UserID, (char *)"UserID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcInputSpdApplyField_get_InvestorID, (setter)PyCThostFtdcInputSpdApplyField_set_InvestorID, (char *)"InvestorID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcInputSpdApplyField_get_ExchangeID, (setter)PyCThostFtdcInputSpdApplyField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///合约代码 
    {(char *)"FirstLegInstrumentID", (getter)PyCThostFtdcInputSpdApplyField_get_FirstLegInstrumentID, (setter)PyCThostFtdcInputSpdApplyField_set_FirstLegInstrumentID, (char *)"FirstLegInstrumentID", NULL},
    ///合约代码 
    {(char *)"SecondLegInstrumentID", (getter)PyCThostFtdcInputSpdApplyField_get_SecondLegInstrumentID, (setter)PyCThostFtdcInputSpdApplyField_set_SecondLegInstrumentID, (char *)"SecondLegInstrumentID", NULL},
    ///数量 
    {(char *)"Volume", (getter)PyCThostFtdcInputSpdApplyField_get_Volume, (setter)PyCThostFtdcInputSpdApplyField_set_Volume, (char *)"Volume", NULL},
    ///买卖方向 
    {(char *)"Direction", (getter)PyCThostFtdcInputSpdApplyField_get_Direction, (setter)PyCThostFtdcInputSpdApplyField_set_Direction, (char *)"Direction", NULL},
    ///组合定单类型 
    {(char *)"CmbType", (getter)PyCThostFtdcInputSpdApplyField_get_CmbType, (setter)PyCThostFtdcInputSpdApplyField_set_CmbType, (char *)"CmbType", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcInputSpdApplyField_get_RequestID, (setter)PyCThostFtdcInputSpdApplyField_set_RequestID, (char *)"RequestID", NULL},
    ///报单引用 
    {(char *)"OrderRef", (getter)PyCThostFtdcInputSpdApplyField_get_OrderRef, (setter)PyCThostFtdcInputSpdApplyField_set_OrderRef, (char *)"OrderRef", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcInputSpdApplyField_get_IPAddress, (setter)PyCThostFtdcInputSpdApplyField_set_IPAddress, (char *)"IPAddress", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcInputSpdApplyField_get_MacAddress, (setter)PyCThostFtdcInputSpdApplyField_set_MacAddress, (char *)"MacAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInputSpdApplyFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInputSpdApplyField",	/* tp_name */
	sizeof(PyCThostFtdcInputSpdApplyField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInputSpdApplyField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInputSpdApplyField_repr,   /* tp_repr */
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
	"CThostFtdcInputSpdApplyField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInputSpdApplyField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInputSpdApplyField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInputSpdApplyField_new,       /* tp_new */
};

int PyCThostFtdcInputSpdApplyFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInputSpdApplyField  */
	if (PyType_Ready(&PyCThostFtdcInputSpdApplyFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInputSpdApplyField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInputSpdApplyFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInputSpdApplyField", (PyObject *)&PyCThostFtdcInputSpdApplyFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInputSpdApplyField to module");
        Py_DECREF(&PyCThostFtdcInputSpdApplyFieldType);
		return -1;
    }

    return 0;
}
