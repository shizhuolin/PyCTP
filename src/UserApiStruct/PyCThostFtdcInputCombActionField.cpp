
#include "PyCThostFtdcInputCombActionField.h"

///输入的申请组合

static PyObject *PyCThostFtdcInputCombActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInputCombActionField *self = (PyCThostFtdcInputCombActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcInputCombActionField_init(PyCThostFtdcInputCombActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "CombActionRef", "UserID", "Direction", "Volume", "CombDirection", "HedgeFlag", "ExchangeID", "reserve2", "MacAddress", "InvestUnitID", "FrontID", "SessionID", "InstrumentID", "IPAddress",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *InputCombActionField_BrokerID = NULL;
    Py_ssize_t InputCombActionField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *InputCombActionField_InvestorID = NULL;
    Py_ssize_t InputCombActionField_InvestorID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *InputCombActionField_reserve1 = NULL;
    Py_ssize_t InputCombActionField_reserve1_len = 0;
            
    ///组合引用
    // TThostFtdcOrderRefType char[13]
    const char *InputCombActionField_CombActionRef = NULL;
    Py_ssize_t InputCombActionField_CombActionRef_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *InputCombActionField_UserID = NULL;
    Py_ssize_t InputCombActionField_UserID_len = 0;
            
    ///买卖方向
    // TThostFtdcDirectionType char
    char InputCombActionField_Direction = 0;
            
    ///数量
    // TThostFtdcVolumeType int
    int InputCombActionField_Volume = 0;
        
    ///组合指令方向
    // TThostFtdcCombDirectionType char
    char InputCombActionField_CombDirection = 0;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    char InputCombActionField_HedgeFlag = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *InputCombActionField_ExchangeID = NULL;
    Py_ssize_t InputCombActionField_ExchangeID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    const char *InputCombActionField_reserve2 = NULL;
    Py_ssize_t InputCombActionField_reserve2_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *InputCombActionField_MacAddress = NULL;
    Py_ssize_t InputCombActionField_MacAddress_len = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *InputCombActionField_InvestUnitID = NULL;
    Py_ssize_t InputCombActionField_InvestUnitID_len = 0;
            
    ///前置编号
    // TThostFtdcFrontIDType int
    int InputCombActionField_FrontID = 0;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    int InputCombActionField_SessionID = 0;
        
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *InputCombActionField_InstrumentID = NULL;
    Py_ssize_t InputCombActionField_InstrumentID_len = 0;
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *InputCombActionField_IPAddress = NULL;
    Py_ssize_t InputCombActionField_IPAddress_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#ciccy#y#y#y#iiy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#ciccs#s#s#s#iis#s#", (char **)kwlist
#endif

        , &InputCombActionField_BrokerID, &InputCombActionField_BrokerID_len 
        , &InputCombActionField_InvestorID, &InputCombActionField_InvestorID_len 
        , &InputCombActionField_reserve1, &InputCombActionField_reserve1_len 
        , &InputCombActionField_CombActionRef, &InputCombActionField_CombActionRef_len 
        , &InputCombActionField_UserID, &InputCombActionField_UserID_len 
        , &InputCombActionField_Direction 
        , &InputCombActionField_Volume 
        , &InputCombActionField_CombDirection 
        , &InputCombActionField_HedgeFlag 
        , &InputCombActionField_ExchangeID, &InputCombActionField_ExchangeID_len 
        , &InputCombActionField_reserve2, &InputCombActionField_reserve2_len 
        , &InputCombActionField_MacAddress, &InputCombActionField_MacAddress_len 
        , &InputCombActionField_InvestUnitID, &InputCombActionField_InvestUnitID_len 
        , &InputCombActionField_FrontID 
        , &InputCombActionField_SessionID 
        , &InputCombActionField_InstrumentID, &InputCombActionField_InstrumentID_len 
        , &InputCombActionField_IPAddress, &InputCombActionField_IPAddress_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( InputCombActionField_BrokerID != NULL ) {
        if(InputCombActionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", InputCombActionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, InputCombActionField_BrokerID, InputCombActionField_BrokerID_len);        
        strncpy(self->data.BrokerID, InputCombActionField_BrokerID, sizeof(self->data.BrokerID) );
        InputCombActionField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( InputCombActionField_InvestorID != NULL ) {
        if(InputCombActionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", InputCombActionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, InputCombActionField_InvestorID, InputCombActionField_InvestorID_len);        
        strncpy(self->data.InvestorID, InputCombActionField_InvestorID, sizeof(self->data.InvestorID) );
        InputCombActionField_InvestorID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( InputCombActionField_reserve1 != NULL ) {
        if(InputCombActionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", InputCombActionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, InputCombActionField_reserve1, InputCombActionField_reserve1_len);        
        strncpy(self->data.reserve1, InputCombActionField_reserve1, sizeof(self->data.reserve1) );
        InputCombActionField_reserve1 = NULL;
    }
            
    ///组合引用
    // TThostFtdcOrderRefType char[13]
    if( InputCombActionField_CombActionRef != NULL ) {
        if(InputCombActionField_CombActionRef_len > (Py_ssize_t)sizeof(self->data.CombActionRef)) {
            PyErr_Format(PyExc_ValueError, "CombActionRef too long: length=%zd (max allowed is %zd)", InputCombActionField_CombActionRef_len, (Py_ssize_t)sizeof(self->data.CombActionRef));
            return -1;
        }
        // memset(self->data.CombActionRef, 0, sizeof(self->data.CombActionRef));
        // memcpy(self->data.CombActionRef, InputCombActionField_CombActionRef, InputCombActionField_CombActionRef_len);        
        strncpy(self->data.CombActionRef, InputCombActionField_CombActionRef, sizeof(self->data.CombActionRef) );
        InputCombActionField_CombActionRef = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( InputCombActionField_UserID != NULL ) {
        if(InputCombActionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", InputCombActionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, InputCombActionField_UserID, InputCombActionField_UserID_len);        
        strncpy(self->data.UserID, InputCombActionField_UserID, sizeof(self->data.UserID) );
        InputCombActionField_UserID = NULL;
    }
            
    ///买卖方向
    // TThostFtdcDirectionType char
    self->data.Direction = InputCombActionField_Direction;
            
    ///数量
    // TThostFtdcVolumeType int
    self->data.Volume = InputCombActionField_Volume;
        
    ///组合指令方向
    // TThostFtdcCombDirectionType char
    self->data.CombDirection = InputCombActionField_CombDirection;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    self->data.HedgeFlag = InputCombActionField_HedgeFlag;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( InputCombActionField_ExchangeID != NULL ) {
        if(InputCombActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", InputCombActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, InputCombActionField_ExchangeID, InputCombActionField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, InputCombActionField_ExchangeID, sizeof(self->data.ExchangeID) );
        InputCombActionField_ExchangeID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    if( InputCombActionField_reserve2 != NULL ) {
        if(InputCombActionField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", InputCombActionField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
            return -1;
        }
        // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
        // memcpy(self->data.reserve2, InputCombActionField_reserve2, InputCombActionField_reserve2_len);        
        strncpy(self->data.reserve2, InputCombActionField_reserve2, sizeof(self->data.reserve2) );
        InputCombActionField_reserve2 = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( InputCombActionField_MacAddress != NULL ) {
        if(InputCombActionField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", InputCombActionField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, InputCombActionField_MacAddress, InputCombActionField_MacAddress_len);        
        strncpy(self->data.MacAddress, InputCombActionField_MacAddress, sizeof(self->data.MacAddress) );
        InputCombActionField_MacAddress = NULL;
    }
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( InputCombActionField_InvestUnitID != NULL ) {
        if(InputCombActionField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", InputCombActionField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, InputCombActionField_InvestUnitID, InputCombActionField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, InputCombActionField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        InputCombActionField_InvestUnitID = NULL;
    }
            
    ///前置编号
    // TThostFtdcFrontIDType int
    self->data.FrontID = InputCombActionField_FrontID;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    self->data.SessionID = InputCombActionField_SessionID;
        
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( InputCombActionField_InstrumentID != NULL ) {
        if(InputCombActionField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", InputCombActionField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, InputCombActionField_InstrumentID, InputCombActionField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, InputCombActionField_InstrumentID, sizeof(self->data.InstrumentID) );
        InputCombActionField_InstrumentID = NULL;
    }
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( InputCombActionField_IPAddress != NULL ) {
        if(InputCombActionField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", InputCombActionField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, InputCombActionField_IPAddress, InputCombActionField_IPAddress_len);        
        strncpy(self->data.IPAddress, InputCombActionField_IPAddress, sizeof(self->data.IPAddress) );
        InputCombActionField_IPAddress = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcInputCombActionField_dealloc(PyCThostFtdcInputCombActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInputCombActionField_repr(PyCThostFtdcInputCombActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:c,s:i,s:c,s:c,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:c,s:i,s:c,s:c,s:s,s:s,s:s,s:s,s:i,s:i,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"CombActionRef", self->data.CombActionRef//, (Py_ssize_t)sizeof(self->data.CombActionRef) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"Direction", self->data.Direction 
        ,"Volume", self->data.Volume 
        ,"CombDirection", self->data.CombDirection 
        ,"HedgeFlag", self->data.HedgeFlag 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"reserve2", self->data.reserve2//, (Py_ssize_t)sizeof(self->data.reserve2) 
        ,"MacAddress", self->data.MacAddress//, (Py_ssize_t)sizeof(self->data.MacAddress) 
        ,"InvestUnitID", self->data.InvestUnitID//, (Py_ssize_t)sizeof(self->data.InvestUnitID) 
        ,"FrontID", self->data.FrontID 
        ,"SessionID", self->data.SessionID 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"IPAddress", self->data.IPAddress//, (Py_ssize_t)sizeof(self->data.IPAddress) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputCombActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcInputCombActionField_get_BrokerID(PyCThostFtdcInputCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcInputCombActionField_set_BrokerID(PyCThostFtdcInputCombActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputCombActionField_get_InvestorID(PyCThostFtdcInputCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcInputCombActionField_set_InvestorID(PyCThostFtdcInputCombActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputCombActionField_get_reserve1(PyCThostFtdcInputCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcInputCombActionField_set_reserve1(PyCThostFtdcInputCombActionField *self, PyObject* val, void *closure) {
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
            
///组合引用
// TThostFtdcOrderRefType char[13]
static PyObject *PyCThostFtdcInputCombActionField_get_CombActionRef(PyCThostFtdcInputCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CombActionRef, (Py_ssize_t)sizeof(self->data.CombActionRef));
    return PyBytes_FromString(self->data.CombActionRef);
}

///组合引用
// TThostFtdcOrderRefType char[13]
static int PyCThostFtdcInputCombActionField_set_CombActionRef(PyCThostFtdcInputCombActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CombActionRef Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CombActionRef)) {
        PyErr_SetString(PyExc_ValueError, "CombActionRef must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.CombActionRef, 0, sizeof(self->data.CombActionRef));
    // memcpy(self->data.CombActionRef, buf, len);
    strncpy(self->data.CombActionRef, buf, sizeof(self->data.CombActionRef));
    return 0;
}
            
///用户代码
// TThostFtdcUserIDType char[16]
static PyObject *PyCThostFtdcInputCombActionField_get_UserID(PyCThostFtdcInputCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcInputCombActionField_set_UserID(PyCThostFtdcInputCombActionField *self, PyObject* val, void *closure) {
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
            
///买卖方向
// TThostFtdcDirectionType char
static PyObject *PyCThostFtdcInputCombActionField_get_Direction(PyCThostFtdcInputCombActionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

///买卖方向
// TThostFtdcDirectionType char
static int PyCThostFtdcInputCombActionField_set_Direction(PyCThostFtdcInputCombActionField *self, PyObject* val, void *closure) {
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
            
///数量
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcInputCombActionField_get_Volume(PyCThostFtdcInputCombActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.Volume);
#else
    return PyInt_FromLong(self->data.Volume);
#endif
}

///数量
// TThostFtdcVolumeType int
static int PyCThostFtdcInputCombActionField_set_Volume(PyCThostFtdcInputCombActionField *self, PyObject* val, void *closure) {
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
        
///组合指令方向
// TThostFtdcCombDirectionType char
static PyObject *PyCThostFtdcInputCombActionField_get_CombDirection(PyCThostFtdcInputCombActionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.CombDirection), 1);
}

///组合指令方向
// TThostFtdcCombDirectionType char
static int PyCThostFtdcInputCombActionField_set_CombDirection(PyCThostFtdcInputCombActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CombDirection Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CombDirection)) {
        PyErr_SetString(PyExc_ValueError, "CombDirection must be equal 1 bytes");
        return -1;
    }
    self->data.CombDirection = *buf;
    return 0;
}
            
///投机套保标志
// TThostFtdcHedgeFlagType char
static PyObject *PyCThostFtdcInputCombActionField_get_HedgeFlag(PyCThostFtdcInputCombActionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

///投机套保标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcInputCombActionField_set_HedgeFlag(PyCThostFtdcInputCombActionField *self, PyObject* val, void *closure) {
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
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcInputCombActionField_get_ExchangeID(PyCThostFtdcInputCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcInputCombActionField_set_ExchangeID(PyCThostFtdcInputCombActionField *self, PyObject* val, void *closure) {
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
            
///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static PyObject *PyCThostFtdcInputCombActionField_get_reserve2(PyCThostFtdcInputCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve2, (Py_ssize_t)sizeof(self->data.reserve2));
    return PyBytes_FromString(self->data.reserve2);
}

///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static int PyCThostFtdcInputCombActionField_set_reserve2(PyCThostFtdcInputCombActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputCombActionField_get_MacAddress(PyCThostFtdcInputCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcInputCombActionField_set_MacAddress(PyCThostFtdcInputCombActionField *self, PyObject* val, void *closure) {
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
            
///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static PyObject *PyCThostFtdcInputCombActionField_get_InvestUnitID(PyCThostFtdcInputCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcInputCombActionField_set_InvestUnitID(PyCThostFtdcInputCombActionField *self, PyObject* val, void *closure) {
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
            
///前置编号
// TThostFtdcFrontIDType int
static PyObject *PyCThostFtdcInputCombActionField_get_FrontID(PyCThostFtdcInputCombActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FrontID);
#else
    return PyInt_FromLong(self->data.FrontID);
#endif
}

///前置编号
// TThostFtdcFrontIDType int
static int PyCThostFtdcInputCombActionField_set_FrontID(PyCThostFtdcInputCombActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputCombActionField_get_SessionID(PyCThostFtdcInputCombActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话编号
// TThostFtdcSessionIDType int
static int PyCThostFtdcInputCombActionField_set_SessionID(PyCThostFtdcInputCombActionField *self, PyObject* val, void *closure) {
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
        
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcInputCombActionField_get_InstrumentID(PyCThostFtdcInputCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcInputCombActionField_set_InstrumentID(PyCThostFtdcInputCombActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInputCombActionField_get_IPAddress(PyCThostFtdcInputCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcInputCombActionField_set_IPAddress(PyCThostFtdcInputCombActionField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcInputCombActionField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcInputCombActionField_get_BrokerID, (setter)PyCThostFtdcInputCombActionField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcInputCombActionField_get_InvestorID, (setter)PyCThostFtdcInputCombActionField_set_InvestorID, (char *)"InvestorID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcInputCombActionField_get_reserve1, (setter)PyCThostFtdcInputCombActionField_set_reserve1, (char *)"reserve1", NULL},
    ///组合引用 
    {(char *)"CombActionRef", (getter)PyCThostFtdcInputCombActionField_get_CombActionRef, (setter)PyCThostFtdcInputCombActionField_set_CombActionRef, (char *)"CombActionRef", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcInputCombActionField_get_UserID, (setter)PyCThostFtdcInputCombActionField_set_UserID, (char *)"UserID", NULL},
    ///买卖方向 
    {(char *)"Direction", (getter)PyCThostFtdcInputCombActionField_get_Direction, (setter)PyCThostFtdcInputCombActionField_set_Direction, (char *)"Direction", NULL},
    ///数量 
    {(char *)"Volume", (getter)PyCThostFtdcInputCombActionField_get_Volume, (setter)PyCThostFtdcInputCombActionField_set_Volume, (char *)"Volume", NULL},
    ///组合指令方向 
    {(char *)"CombDirection", (getter)PyCThostFtdcInputCombActionField_get_CombDirection, (setter)PyCThostFtdcInputCombActionField_set_CombDirection, (char *)"CombDirection", NULL},
    ///投机套保标志 
    {(char *)"HedgeFlag", (getter)PyCThostFtdcInputCombActionField_get_HedgeFlag, (setter)PyCThostFtdcInputCombActionField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcInputCombActionField_get_ExchangeID, (setter)PyCThostFtdcInputCombActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///保留的无效字段 
    {(char *)"reserve2", (getter)PyCThostFtdcInputCombActionField_get_reserve2, (setter)PyCThostFtdcInputCombActionField_set_reserve2, (char *)"reserve2", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcInputCombActionField_get_MacAddress, (setter)PyCThostFtdcInputCombActionField_set_MacAddress, (char *)"MacAddress", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcInputCombActionField_get_InvestUnitID, (setter)PyCThostFtdcInputCombActionField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///前置编号 
    {(char *)"FrontID", (getter)PyCThostFtdcInputCombActionField_get_FrontID, (setter)PyCThostFtdcInputCombActionField_set_FrontID, (char *)"FrontID", NULL},
    ///会话编号 
    {(char *)"SessionID", (getter)PyCThostFtdcInputCombActionField_get_SessionID, (setter)PyCThostFtdcInputCombActionField_set_SessionID, (char *)"SessionID", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcInputCombActionField_get_InstrumentID, (setter)PyCThostFtdcInputCombActionField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcInputCombActionField_get_IPAddress, (setter)PyCThostFtdcInputCombActionField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInputCombActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInputCombActionField",	/* tp_name */
	sizeof(PyCThostFtdcInputCombActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInputCombActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInputCombActionField_repr,   /* tp_repr */
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
	"CThostFtdcInputCombActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInputCombActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInputCombActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInputCombActionField_new,       /* tp_new */
};

int PyCThostFtdcInputCombActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInputCombActionField  */
	if (PyType_Ready(&PyCThostFtdcInputCombActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInputCombActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInputCombActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInputCombActionField", (PyObject *)&PyCThostFtdcInputCombActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInputCombActionField to module");
        Py_DECREF(&PyCThostFtdcInputCombActionFieldType);
		return -1;
    }

    return 0;
}
