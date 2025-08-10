
#include "PyCThostFtdcInputOffsetSettingField.h"

///输入的对冲设置

static PyObject *PyCThostFtdcInputOffsetSettingField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInputOffsetSettingField *self = (PyCThostFtdcInputOffsetSettingField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcInputOffsetSettingField_init(PyCThostFtdcInputOffsetSettingField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "InstrumentID", "UnderlyingInstrID", "ProductID", "OffsetType", "Volume", "IsOffset", "RequestID", "UserID", "ExchangeID", "IPAddress", "MacAddress",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *InputOffsetSettingField_BrokerID = NULL;
    Py_ssize_t InputOffsetSettingField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *InputOffsetSettingField_InvestorID = NULL;
    Py_ssize_t InputOffsetSettingField_InvestorID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *InputOffsetSettingField_InstrumentID = NULL;
    Py_ssize_t InputOffsetSettingField_InstrumentID_len = 0;
            
    ///标的期货合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *InputOffsetSettingField_UnderlyingInstrID = NULL;
    Py_ssize_t InputOffsetSettingField_UnderlyingInstrID_len = 0;
            
    ///产品代码
    // TThostFtdcProductIDType char[41]
    const char *InputOffsetSettingField_ProductID = NULL;
    Py_ssize_t InputOffsetSettingField_ProductID_len = 0;
            
    ///对冲类型
    // TThostFtdcOffsetTypeType char
    char InputOffsetSettingField_OffsetType = 0;
            
    ///申请对冲的合约数量
    // TThostFtdcVolumeType int
    int InputOffsetSettingField_Volume = 0;
        
    ///是否对冲
    // TThostFtdcBoolType int
    int InputOffsetSettingField_IsOffset = 0;
        
    ///请求编号
    // TThostFtdcRequestIDType int
    int InputOffsetSettingField_RequestID = 0;
        
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *InputOffsetSettingField_UserID = NULL;
    Py_ssize_t InputOffsetSettingField_UserID_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *InputOffsetSettingField_ExchangeID = NULL;
    Py_ssize_t InputOffsetSettingField_ExchangeID_len = 0;
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *InputOffsetSettingField_IPAddress = NULL;
    Py_ssize_t InputOffsetSettingField_IPAddress_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *InputOffsetSettingField_MacAddress = NULL;
    Py_ssize_t InputOffsetSettingField_MacAddress_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#ciiiy#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#ciiis#s#s#s#", (char **)kwlist
#endif

        , &InputOffsetSettingField_BrokerID, &InputOffsetSettingField_BrokerID_len 
        , &InputOffsetSettingField_InvestorID, &InputOffsetSettingField_InvestorID_len 
        , &InputOffsetSettingField_InstrumentID, &InputOffsetSettingField_InstrumentID_len 
        , &InputOffsetSettingField_UnderlyingInstrID, &InputOffsetSettingField_UnderlyingInstrID_len 
        , &InputOffsetSettingField_ProductID, &InputOffsetSettingField_ProductID_len 
        , &InputOffsetSettingField_OffsetType 
        , &InputOffsetSettingField_Volume 
        , &InputOffsetSettingField_IsOffset 
        , &InputOffsetSettingField_RequestID 
        , &InputOffsetSettingField_UserID, &InputOffsetSettingField_UserID_len 
        , &InputOffsetSettingField_ExchangeID, &InputOffsetSettingField_ExchangeID_len 
        , &InputOffsetSettingField_IPAddress, &InputOffsetSettingField_IPAddress_len 
        , &InputOffsetSettingField_MacAddress, &InputOffsetSettingField_MacAddress_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( InputOffsetSettingField_BrokerID != NULL ) {
        if(InputOffsetSettingField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", InputOffsetSettingField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, InputOffsetSettingField_BrokerID, InputOffsetSettingField_BrokerID_len);        
        strncpy(self->data.BrokerID, InputOffsetSettingField_BrokerID, sizeof(self->data.BrokerID) );
        InputOffsetSettingField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( InputOffsetSettingField_InvestorID != NULL ) {
        if(InputOffsetSettingField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", InputOffsetSettingField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, InputOffsetSettingField_InvestorID, InputOffsetSettingField_InvestorID_len);        
        strncpy(self->data.InvestorID, InputOffsetSettingField_InvestorID, sizeof(self->data.InvestorID) );
        InputOffsetSettingField_InvestorID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( InputOffsetSettingField_InstrumentID != NULL ) {
        if(InputOffsetSettingField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", InputOffsetSettingField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, InputOffsetSettingField_InstrumentID, InputOffsetSettingField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, InputOffsetSettingField_InstrumentID, sizeof(self->data.InstrumentID) );
        InputOffsetSettingField_InstrumentID = NULL;
    }
            
    ///标的期货合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( InputOffsetSettingField_UnderlyingInstrID != NULL ) {
        if(InputOffsetSettingField_UnderlyingInstrID_len > (Py_ssize_t)sizeof(self->data.UnderlyingInstrID)) {
            PyErr_Format(PyExc_ValueError, "UnderlyingInstrID too long: length=%zd (max allowed is %zd)", InputOffsetSettingField_UnderlyingInstrID_len, (Py_ssize_t)sizeof(self->data.UnderlyingInstrID));
            return -1;
        }
        // memset(self->data.UnderlyingInstrID, 0, sizeof(self->data.UnderlyingInstrID));
        // memcpy(self->data.UnderlyingInstrID, InputOffsetSettingField_UnderlyingInstrID, InputOffsetSettingField_UnderlyingInstrID_len);        
        strncpy(self->data.UnderlyingInstrID, InputOffsetSettingField_UnderlyingInstrID, sizeof(self->data.UnderlyingInstrID) );
        InputOffsetSettingField_UnderlyingInstrID = NULL;
    }
            
    ///产品代码
    // TThostFtdcProductIDType char[41]
    if( InputOffsetSettingField_ProductID != NULL ) {
        if(InputOffsetSettingField_ProductID_len > (Py_ssize_t)sizeof(self->data.ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is %zd)", InputOffsetSettingField_ProductID_len, (Py_ssize_t)sizeof(self->data.ProductID));
            return -1;
        }
        // memset(self->data.ProductID, 0, sizeof(self->data.ProductID));
        // memcpy(self->data.ProductID, InputOffsetSettingField_ProductID, InputOffsetSettingField_ProductID_len);        
        strncpy(self->data.ProductID, InputOffsetSettingField_ProductID, sizeof(self->data.ProductID) );
        InputOffsetSettingField_ProductID = NULL;
    }
            
    ///对冲类型
    // TThostFtdcOffsetTypeType char
    self->data.OffsetType = InputOffsetSettingField_OffsetType;
            
    ///申请对冲的合约数量
    // TThostFtdcVolumeType int
    self->data.Volume = InputOffsetSettingField_Volume;
        
    ///是否对冲
    // TThostFtdcBoolType int
    self->data.IsOffset = InputOffsetSettingField_IsOffset;
        
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = InputOffsetSettingField_RequestID;
        
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( InputOffsetSettingField_UserID != NULL ) {
        if(InputOffsetSettingField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", InputOffsetSettingField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, InputOffsetSettingField_UserID, InputOffsetSettingField_UserID_len);        
        strncpy(self->data.UserID, InputOffsetSettingField_UserID, sizeof(self->data.UserID) );
        InputOffsetSettingField_UserID = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( InputOffsetSettingField_ExchangeID != NULL ) {
        if(InputOffsetSettingField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", InputOffsetSettingField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, InputOffsetSettingField_ExchangeID, InputOffsetSettingField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, InputOffsetSettingField_ExchangeID, sizeof(self->data.ExchangeID) );
        InputOffsetSettingField_ExchangeID = NULL;
    }
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( InputOffsetSettingField_IPAddress != NULL ) {
        if(InputOffsetSettingField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", InputOffsetSettingField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, InputOffsetSettingField_IPAddress, InputOffsetSettingField_IPAddress_len);        
        strncpy(self->data.IPAddress, InputOffsetSettingField_IPAddress, sizeof(self->data.IPAddress) );
        InputOffsetSettingField_IPAddress = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( InputOffsetSettingField_MacAddress != NULL ) {
        if(InputOffsetSettingField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", InputOffsetSettingField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, InputOffsetSettingField_MacAddress, InputOffsetSettingField_MacAddress_len);        
        strncpy(self->data.MacAddress, InputOffsetSettingField_MacAddress, sizeof(self->data.MacAddress) );
        InputOffsetSettingField_MacAddress = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcInputOffsetSettingField_dealloc(PyCThostFtdcInputOffsetSettingField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInputOffsetSettingField_repr(PyCThostFtdcInputOffsetSettingField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:c,s:i,s:i,s:i,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:c,s:i,s:i,s:i,s:s,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"UnderlyingInstrID", self->data.UnderlyingInstrID//, (Py_ssize_t)sizeof(self->data.UnderlyingInstrID) 
        ,"ProductID", self->data.ProductID//, (Py_ssize_t)sizeof(self->data.ProductID) 
        ,"OffsetType", self->data.OffsetType 
        ,"Volume", self->data.Volume 
        ,"IsOffset", self->data.IsOffset 
        ,"RequestID", self->data.RequestID 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"IPAddress", self->data.IPAddress//, (Py_ssize_t)sizeof(self->data.IPAddress) 
        ,"MacAddress", self->data.MacAddress//, (Py_ssize_t)sizeof(self->data.MacAddress) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputOffsetSettingField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcInputOffsetSettingField_get_BrokerID(PyCThostFtdcInputOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcInputOffsetSettingField_set_BrokerID(PyCThostFtdcInputOffsetSettingField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputOffsetSettingField_get_InvestorID(PyCThostFtdcInputOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcInputOffsetSettingField_set_InvestorID(PyCThostFtdcInputOffsetSettingField *self, PyObject* val, void *closure) {
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
            
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcInputOffsetSettingField_get_InstrumentID(PyCThostFtdcInputOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcInputOffsetSettingField_set_InstrumentID(PyCThostFtdcInputOffsetSettingField *self, PyObject* val, void *closure) {
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
            
///标的期货合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcInputOffsetSettingField_get_UnderlyingInstrID(PyCThostFtdcInputOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UnderlyingInstrID, (Py_ssize_t)sizeof(self->data.UnderlyingInstrID));
    return PyBytes_FromString(self->data.UnderlyingInstrID);
}

///标的期货合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcInputOffsetSettingField_set_UnderlyingInstrID(PyCThostFtdcInputOffsetSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UnderlyingInstrID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.UnderlyingInstrID)) {
        PyErr_SetString(PyExc_ValueError, "UnderlyingInstrID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.UnderlyingInstrID, 0, sizeof(self->data.UnderlyingInstrID));
    // memcpy(self->data.UnderlyingInstrID, buf, len);
    strncpy(self->data.UnderlyingInstrID, buf, sizeof(self->data.UnderlyingInstrID));
    return 0;
}
            
///产品代码
// TThostFtdcProductIDType char[41]
static PyObject *PyCThostFtdcInputOffsetSettingField_get_ProductID(PyCThostFtdcInputOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProductID, (Py_ssize_t)sizeof(self->data.ProductID));
    return PyBytes_FromString(self->data.ProductID);
}

///产品代码
// TThostFtdcProductIDType char[41]
static int PyCThostFtdcInputOffsetSettingField_set_ProductID(PyCThostFtdcInputOffsetSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ProductID)) {
        PyErr_SetString(PyExc_ValueError, "ProductID must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.ProductID, 0, sizeof(self->data.ProductID));
    // memcpy(self->data.ProductID, buf, len);
    strncpy(self->data.ProductID, buf, sizeof(self->data.ProductID));
    return 0;
}
            
///对冲类型
// TThostFtdcOffsetTypeType char
static PyObject *PyCThostFtdcInputOffsetSettingField_get_OffsetType(PyCThostFtdcInputOffsetSettingField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OffsetType), 1);
}

///对冲类型
// TThostFtdcOffsetTypeType char
static int PyCThostFtdcInputOffsetSettingField_set_OffsetType(PyCThostFtdcInputOffsetSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OffsetType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OffsetType)) {
        PyErr_SetString(PyExc_ValueError, "OffsetType must be equal 1 bytes");
        return -1;
    }
    self->data.OffsetType = *buf;
    return 0;
}
            
///申请对冲的合约数量
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcInputOffsetSettingField_get_Volume(PyCThostFtdcInputOffsetSettingField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.Volume);
#else
    return PyInt_FromLong(self->data.Volume);
#endif
}

///申请对冲的合约数量
// TThostFtdcVolumeType int
static int PyCThostFtdcInputOffsetSettingField_set_Volume(PyCThostFtdcInputOffsetSettingField *self, PyObject* val, void *closure) {
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
        
///是否对冲
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcInputOffsetSettingField_get_IsOffset(PyCThostFtdcInputOffsetSettingField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsOffset);
#else
    return PyInt_FromLong(self->data.IsOffset);
#endif
}

///是否对冲
// TThostFtdcBoolType int
static int PyCThostFtdcInputOffsetSettingField_set_IsOffset(PyCThostFtdcInputOffsetSettingField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsOffset Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsOffset Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the IsOffset value out of range for C int");
        return -1;
    }
    self->data.IsOffset = (int)buf;
    return 0;
}
        
///请求编号
// TThostFtdcRequestIDType int
static PyObject *PyCThostFtdcInputOffsetSettingField_get_RequestID(PyCThostFtdcInputOffsetSettingField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcInputOffsetSettingField_set_RequestID(PyCThostFtdcInputOffsetSettingField *self, PyObject* val, void *closure) {
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
        
///用户代码
// TThostFtdcUserIDType char[16]
static PyObject *PyCThostFtdcInputOffsetSettingField_get_UserID(PyCThostFtdcInputOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcInputOffsetSettingField_set_UserID(PyCThostFtdcInputOffsetSettingField *self, PyObject* val, void *closure) {
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
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcInputOffsetSettingField_get_ExchangeID(PyCThostFtdcInputOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcInputOffsetSettingField_set_ExchangeID(PyCThostFtdcInputOffsetSettingField *self, PyObject* val, void *closure) {
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
            
///IP地址
// TThostFtdcIPAddressType char[33]
static PyObject *PyCThostFtdcInputOffsetSettingField_get_IPAddress(PyCThostFtdcInputOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcInputOffsetSettingField_set_IPAddress(PyCThostFtdcInputOffsetSettingField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputOffsetSettingField_get_MacAddress(PyCThostFtdcInputOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcInputOffsetSettingField_set_MacAddress(PyCThostFtdcInputOffsetSettingField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcInputOffsetSettingField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcInputOffsetSettingField_get_BrokerID, (setter)PyCThostFtdcInputOffsetSettingField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcInputOffsetSettingField_get_InvestorID, (setter)PyCThostFtdcInputOffsetSettingField_set_InvestorID, (char *)"InvestorID", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcInputOffsetSettingField_get_InstrumentID, (setter)PyCThostFtdcInputOffsetSettingField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///标的期货合约代码 
    {(char *)"UnderlyingInstrID", (getter)PyCThostFtdcInputOffsetSettingField_get_UnderlyingInstrID, (setter)PyCThostFtdcInputOffsetSettingField_set_UnderlyingInstrID, (char *)"UnderlyingInstrID", NULL},
    ///产品代码 
    {(char *)"ProductID", (getter)PyCThostFtdcInputOffsetSettingField_get_ProductID, (setter)PyCThostFtdcInputOffsetSettingField_set_ProductID, (char *)"ProductID", NULL},
    ///对冲类型 
    {(char *)"OffsetType", (getter)PyCThostFtdcInputOffsetSettingField_get_OffsetType, (setter)PyCThostFtdcInputOffsetSettingField_set_OffsetType, (char *)"OffsetType", NULL},
    ///申请对冲的合约数量 
    {(char *)"Volume", (getter)PyCThostFtdcInputOffsetSettingField_get_Volume, (setter)PyCThostFtdcInputOffsetSettingField_set_Volume, (char *)"Volume", NULL},
    ///是否对冲 
    {(char *)"IsOffset", (getter)PyCThostFtdcInputOffsetSettingField_get_IsOffset, (setter)PyCThostFtdcInputOffsetSettingField_set_IsOffset, (char *)"IsOffset", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcInputOffsetSettingField_get_RequestID, (setter)PyCThostFtdcInputOffsetSettingField_set_RequestID, (char *)"RequestID", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcInputOffsetSettingField_get_UserID, (setter)PyCThostFtdcInputOffsetSettingField_set_UserID, (char *)"UserID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcInputOffsetSettingField_get_ExchangeID, (setter)PyCThostFtdcInputOffsetSettingField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcInputOffsetSettingField_get_IPAddress, (setter)PyCThostFtdcInputOffsetSettingField_set_IPAddress, (char *)"IPAddress", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcInputOffsetSettingField_get_MacAddress, (setter)PyCThostFtdcInputOffsetSettingField_set_MacAddress, (char *)"MacAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInputOffsetSettingFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInputOffsetSettingField",	/* tp_name */
	sizeof(PyCThostFtdcInputOffsetSettingField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInputOffsetSettingField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInputOffsetSettingField_repr,   /* tp_repr */
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
	"CThostFtdcInputOffsetSettingField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInputOffsetSettingField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInputOffsetSettingField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInputOffsetSettingField_new,       /* tp_new */
};

int PyCThostFtdcInputOffsetSettingFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInputOffsetSettingField  */
	if (PyType_Ready(&PyCThostFtdcInputOffsetSettingFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInputOffsetSettingField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInputOffsetSettingFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInputOffsetSettingField", (PyObject *)&PyCThostFtdcInputOffsetSettingFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInputOffsetSettingField to module");
        Py_DECREF(&PyCThostFtdcInputOffsetSettingFieldType);
		return -1;
    }

    return 0;
}
