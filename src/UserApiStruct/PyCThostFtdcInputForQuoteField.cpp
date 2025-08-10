
#include "PyCThostFtdcInputForQuoteField.h"

///输入的询价

static PyObject *PyCThostFtdcInputForQuoteField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInputForQuoteField *self = (PyCThostFtdcInputForQuoteField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcInputForQuoteField_init(PyCThostFtdcInputForQuoteField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "ForQuoteRef", "UserID", "ExchangeID", "InvestUnitID", "reserve2", "MacAddress", "InstrumentID", "IPAddress",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *InputForQuoteField_BrokerID = NULL;
    Py_ssize_t InputForQuoteField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *InputForQuoteField_InvestorID = NULL;
    Py_ssize_t InputForQuoteField_InvestorID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *InputForQuoteField_reserve1 = NULL;
    Py_ssize_t InputForQuoteField_reserve1_len = 0;
            
    ///询价引用
    // TThostFtdcOrderRefType char[13]
    const char *InputForQuoteField_ForQuoteRef = NULL;
    Py_ssize_t InputForQuoteField_ForQuoteRef_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *InputForQuoteField_UserID = NULL;
    Py_ssize_t InputForQuoteField_UserID_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *InputForQuoteField_ExchangeID = NULL;
    Py_ssize_t InputForQuoteField_ExchangeID_len = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *InputForQuoteField_InvestUnitID = NULL;
    Py_ssize_t InputForQuoteField_InvestUnitID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    const char *InputForQuoteField_reserve2 = NULL;
    Py_ssize_t InputForQuoteField_reserve2_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *InputForQuoteField_MacAddress = NULL;
    Py_ssize_t InputForQuoteField_MacAddress_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *InputForQuoteField_InstrumentID = NULL;
    Py_ssize_t InputForQuoteField_InstrumentID_len = 0;
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *InputForQuoteField_IPAddress = NULL;
    Py_ssize_t InputForQuoteField_IPAddress_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#s#s#", (char **)kwlist
#endif

        , &InputForQuoteField_BrokerID, &InputForQuoteField_BrokerID_len 
        , &InputForQuoteField_InvestorID, &InputForQuoteField_InvestorID_len 
        , &InputForQuoteField_reserve1, &InputForQuoteField_reserve1_len 
        , &InputForQuoteField_ForQuoteRef, &InputForQuoteField_ForQuoteRef_len 
        , &InputForQuoteField_UserID, &InputForQuoteField_UserID_len 
        , &InputForQuoteField_ExchangeID, &InputForQuoteField_ExchangeID_len 
        , &InputForQuoteField_InvestUnitID, &InputForQuoteField_InvestUnitID_len 
        , &InputForQuoteField_reserve2, &InputForQuoteField_reserve2_len 
        , &InputForQuoteField_MacAddress, &InputForQuoteField_MacAddress_len 
        , &InputForQuoteField_InstrumentID, &InputForQuoteField_InstrumentID_len 
        , &InputForQuoteField_IPAddress, &InputForQuoteField_IPAddress_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( InputForQuoteField_BrokerID != NULL ) {
        if(InputForQuoteField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", InputForQuoteField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, InputForQuoteField_BrokerID, InputForQuoteField_BrokerID_len);        
        strncpy(self->data.BrokerID, InputForQuoteField_BrokerID, sizeof(self->data.BrokerID) );
        InputForQuoteField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( InputForQuoteField_InvestorID != NULL ) {
        if(InputForQuoteField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", InputForQuoteField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, InputForQuoteField_InvestorID, InputForQuoteField_InvestorID_len);        
        strncpy(self->data.InvestorID, InputForQuoteField_InvestorID, sizeof(self->data.InvestorID) );
        InputForQuoteField_InvestorID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( InputForQuoteField_reserve1 != NULL ) {
        if(InputForQuoteField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", InputForQuoteField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, InputForQuoteField_reserve1, InputForQuoteField_reserve1_len);        
        strncpy(self->data.reserve1, InputForQuoteField_reserve1, sizeof(self->data.reserve1) );
        InputForQuoteField_reserve1 = NULL;
    }
            
    ///询价引用
    // TThostFtdcOrderRefType char[13]
    if( InputForQuoteField_ForQuoteRef != NULL ) {
        if(InputForQuoteField_ForQuoteRef_len > (Py_ssize_t)sizeof(self->data.ForQuoteRef)) {
            PyErr_Format(PyExc_ValueError, "ForQuoteRef too long: length=%zd (max allowed is %zd)", InputForQuoteField_ForQuoteRef_len, (Py_ssize_t)sizeof(self->data.ForQuoteRef));
            return -1;
        }
        // memset(self->data.ForQuoteRef, 0, sizeof(self->data.ForQuoteRef));
        // memcpy(self->data.ForQuoteRef, InputForQuoteField_ForQuoteRef, InputForQuoteField_ForQuoteRef_len);        
        strncpy(self->data.ForQuoteRef, InputForQuoteField_ForQuoteRef, sizeof(self->data.ForQuoteRef) );
        InputForQuoteField_ForQuoteRef = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( InputForQuoteField_UserID != NULL ) {
        if(InputForQuoteField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", InputForQuoteField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, InputForQuoteField_UserID, InputForQuoteField_UserID_len);        
        strncpy(self->data.UserID, InputForQuoteField_UserID, sizeof(self->data.UserID) );
        InputForQuoteField_UserID = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( InputForQuoteField_ExchangeID != NULL ) {
        if(InputForQuoteField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", InputForQuoteField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, InputForQuoteField_ExchangeID, InputForQuoteField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, InputForQuoteField_ExchangeID, sizeof(self->data.ExchangeID) );
        InputForQuoteField_ExchangeID = NULL;
    }
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( InputForQuoteField_InvestUnitID != NULL ) {
        if(InputForQuoteField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", InputForQuoteField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, InputForQuoteField_InvestUnitID, InputForQuoteField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, InputForQuoteField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        InputForQuoteField_InvestUnitID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    if( InputForQuoteField_reserve2 != NULL ) {
        if(InputForQuoteField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", InputForQuoteField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
            return -1;
        }
        // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
        // memcpy(self->data.reserve2, InputForQuoteField_reserve2, InputForQuoteField_reserve2_len);        
        strncpy(self->data.reserve2, InputForQuoteField_reserve2, sizeof(self->data.reserve2) );
        InputForQuoteField_reserve2 = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( InputForQuoteField_MacAddress != NULL ) {
        if(InputForQuoteField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", InputForQuoteField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, InputForQuoteField_MacAddress, InputForQuoteField_MacAddress_len);        
        strncpy(self->data.MacAddress, InputForQuoteField_MacAddress, sizeof(self->data.MacAddress) );
        InputForQuoteField_MacAddress = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( InputForQuoteField_InstrumentID != NULL ) {
        if(InputForQuoteField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", InputForQuoteField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, InputForQuoteField_InstrumentID, InputForQuoteField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, InputForQuoteField_InstrumentID, sizeof(self->data.InstrumentID) );
        InputForQuoteField_InstrumentID = NULL;
    }
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( InputForQuoteField_IPAddress != NULL ) {
        if(InputForQuoteField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", InputForQuoteField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, InputForQuoteField_IPAddress, InputForQuoteField_IPAddress_len);        
        strncpy(self->data.IPAddress, InputForQuoteField_IPAddress, sizeof(self->data.IPAddress) );
        InputForQuoteField_IPAddress = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcInputForQuoteField_dealloc(PyCThostFtdcInputForQuoteField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInputForQuoteField_repr(PyCThostFtdcInputForQuoteField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"ForQuoteRef", self->data.ForQuoteRef//, (Py_ssize_t)sizeof(self->data.ForQuoteRef) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"InvestUnitID", self->data.InvestUnitID//, (Py_ssize_t)sizeof(self->data.InvestUnitID) 
        ,"reserve2", self->data.reserve2//, (Py_ssize_t)sizeof(self->data.reserve2) 
        ,"MacAddress", self->data.MacAddress//, (Py_ssize_t)sizeof(self->data.MacAddress) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"IPAddress", self->data.IPAddress//, (Py_ssize_t)sizeof(self->data.IPAddress) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputForQuoteField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcInputForQuoteField_get_BrokerID(PyCThostFtdcInputForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcInputForQuoteField_set_BrokerID(PyCThostFtdcInputForQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputForQuoteField_get_InvestorID(PyCThostFtdcInputForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcInputForQuoteField_set_InvestorID(PyCThostFtdcInputForQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputForQuoteField_get_reserve1(PyCThostFtdcInputForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcInputForQuoteField_set_reserve1(PyCThostFtdcInputForQuoteField *self, PyObject* val, void *closure) {
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
            
///询价引用
// TThostFtdcOrderRefType char[13]
static PyObject *PyCThostFtdcInputForQuoteField_get_ForQuoteRef(PyCThostFtdcInputForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ForQuoteRef, (Py_ssize_t)sizeof(self->data.ForQuoteRef));
    return PyBytes_FromString(self->data.ForQuoteRef);
}

///询价引用
// TThostFtdcOrderRefType char[13]
static int PyCThostFtdcInputForQuoteField_set_ForQuoteRef(PyCThostFtdcInputForQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ForQuoteRef Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ForQuoteRef)) {
        PyErr_SetString(PyExc_ValueError, "ForQuoteRef must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.ForQuoteRef, 0, sizeof(self->data.ForQuoteRef));
    // memcpy(self->data.ForQuoteRef, buf, len);
    strncpy(self->data.ForQuoteRef, buf, sizeof(self->data.ForQuoteRef));
    return 0;
}
            
///用户代码
// TThostFtdcUserIDType char[16]
static PyObject *PyCThostFtdcInputForQuoteField_get_UserID(PyCThostFtdcInputForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcInputForQuoteField_set_UserID(PyCThostFtdcInputForQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputForQuoteField_get_ExchangeID(PyCThostFtdcInputForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcInputForQuoteField_set_ExchangeID(PyCThostFtdcInputForQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputForQuoteField_get_InvestUnitID(PyCThostFtdcInputForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcInputForQuoteField_set_InvestUnitID(PyCThostFtdcInputForQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputForQuoteField_get_reserve2(PyCThostFtdcInputForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve2, (Py_ssize_t)sizeof(self->data.reserve2));
    return PyBytes_FromString(self->data.reserve2);
}

///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static int PyCThostFtdcInputForQuoteField_set_reserve2(PyCThostFtdcInputForQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputForQuoteField_get_MacAddress(PyCThostFtdcInputForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcInputForQuoteField_set_MacAddress(PyCThostFtdcInputForQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputForQuoteField_get_InstrumentID(PyCThostFtdcInputForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcInputForQuoteField_set_InstrumentID(PyCThostFtdcInputForQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputForQuoteField_get_IPAddress(PyCThostFtdcInputForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcInputForQuoteField_set_IPAddress(PyCThostFtdcInputForQuoteField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcInputForQuoteField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcInputForQuoteField_get_BrokerID, (setter)PyCThostFtdcInputForQuoteField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcInputForQuoteField_get_InvestorID, (setter)PyCThostFtdcInputForQuoteField_set_InvestorID, (char *)"InvestorID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcInputForQuoteField_get_reserve1, (setter)PyCThostFtdcInputForQuoteField_set_reserve1, (char *)"reserve1", NULL},
    ///询价引用 
    {(char *)"ForQuoteRef", (getter)PyCThostFtdcInputForQuoteField_get_ForQuoteRef, (setter)PyCThostFtdcInputForQuoteField_set_ForQuoteRef, (char *)"ForQuoteRef", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcInputForQuoteField_get_UserID, (setter)PyCThostFtdcInputForQuoteField_set_UserID, (char *)"UserID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcInputForQuoteField_get_ExchangeID, (setter)PyCThostFtdcInputForQuoteField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcInputForQuoteField_get_InvestUnitID, (setter)PyCThostFtdcInputForQuoteField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///保留的无效字段 
    {(char *)"reserve2", (getter)PyCThostFtdcInputForQuoteField_get_reserve2, (setter)PyCThostFtdcInputForQuoteField_set_reserve2, (char *)"reserve2", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcInputForQuoteField_get_MacAddress, (setter)PyCThostFtdcInputForQuoteField_set_MacAddress, (char *)"MacAddress", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcInputForQuoteField_get_InstrumentID, (setter)PyCThostFtdcInputForQuoteField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcInputForQuoteField_get_IPAddress, (setter)PyCThostFtdcInputForQuoteField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInputForQuoteFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInputForQuoteField",	/* tp_name */
	sizeof(PyCThostFtdcInputForQuoteField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInputForQuoteField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInputForQuoteField_repr,   /* tp_repr */
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
	"CThostFtdcInputForQuoteField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInputForQuoteField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInputForQuoteField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInputForQuoteField_new,       /* tp_new */
};

int PyCThostFtdcInputForQuoteFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInputForQuoteField  */
	if (PyType_Ready(&PyCThostFtdcInputForQuoteFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInputForQuoteField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInputForQuoteFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInputForQuoteField", (PyObject *)&PyCThostFtdcInputForQuoteFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInputForQuoteField to module");
        Py_DECREF(&PyCThostFtdcInputForQuoteFieldType);
		return -1;
    }

    return 0;
}
