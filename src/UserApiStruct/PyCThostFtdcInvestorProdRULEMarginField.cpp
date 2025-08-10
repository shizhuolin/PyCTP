
#include "PyCThostFtdcInvestorProdRULEMarginField.h"

///投资者产品RULE保证金

static PyObject *PyCThostFtdcInvestorProdRULEMarginField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInvestorProdRULEMarginField *self = (PyCThostFtdcInvestorProdRULEMarginField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcInvestorProdRULEMarginField_init(PyCThostFtdcInvestorProdRULEMarginField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "BrokerID", "InvestorID", "ProdFamilyCode", "InstrumentClass", "CommodityGroupID", "BStdPosition", "SStdPosition", "BStdOpenFrozen", "SStdOpenFrozen", "BStdCloseFrozen", "SStdCloseFrozen", "IntraProdStdPosition", "NetStdPosition", "InterProdStdPosition", "SingleStdPosition", "IntraProdMargin", "InterProdMargin", "SingleMargin", "NonCombMargin", "AddOnMargin", "ExchMargin", "AddOnFrozenMargin", "OpenFrozenMargin", "CloseFrozenMargin", "Margin", "FrozenMargin",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *InvestorProdRULEMarginField_ExchangeID = NULL;
    Py_ssize_t InvestorProdRULEMarginField_ExchangeID_len = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *InvestorProdRULEMarginField_BrokerID = NULL;
    Py_ssize_t InvestorProdRULEMarginField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *InvestorProdRULEMarginField_InvestorID = NULL;
    Py_ssize_t InvestorProdRULEMarginField_InvestorID_len = 0;
            
    ///品种代码
    // TThostFtdcInstrumentIDType char[81]
    const char *InvestorProdRULEMarginField_ProdFamilyCode = NULL;
    Py_ssize_t InvestorProdRULEMarginField_ProdFamilyCode_len = 0;
            
    ///合约类型
    // TThostFtdcInstrumentClassType char
    char InvestorProdRULEMarginField_InstrumentClass = 0;
            
    ///商品群号
    // TThostFtdcCommodityGroupIDType int
    int InvestorProdRULEMarginField_CommodityGroupID = 0;
        
    ///买标准持仓
    // TThostFtdcStdPositionType double
    double InvestorProdRULEMarginField_BStdPosition = 0.0;
        
    ///卖标准持仓
    // TThostFtdcStdPositionType double
    double InvestorProdRULEMarginField_SStdPosition = 0.0;
        
    ///买标准开仓冻结
    // TThostFtdcStdPositionType double
    double InvestorProdRULEMarginField_BStdOpenFrozen = 0.0;
        
    ///卖标准开仓冻结
    // TThostFtdcStdPositionType double
    double InvestorProdRULEMarginField_SStdOpenFrozen = 0.0;
        
    ///买标准平仓冻结
    // TThostFtdcStdPositionType double
    double InvestorProdRULEMarginField_BStdCloseFrozen = 0.0;
        
    ///卖标准平仓冻结
    // TThostFtdcStdPositionType double
    double InvestorProdRULEMarginField_SStdCloseFrozen = 0.0;
        
    ///品种内对冲标准持仓
    // TThostFtdcStdPositionType double
    double InvestorProdRULEMarginField_IntraProdStdPosition = 0.0;
        
    ///品种内单腿标准持仓
    // TThostFtdcStdPositionType double
    double InvestorProdRULEMarginField_NetStdPosition = 0.0;
        
    ///品种间对冲标准持仓
    // TThostFtdcStdPositionType double
    double InvestorProdRULEMarginField_InterProdStdPosition = 0.0;
        
    ///单腿标准持仓
    // TThostFtdcStdPositionType double
    double InvestorProdRULEMarginField_SingleStdPosition = 0.0;
        
    ///品种内对锁保证金
    // TThostFtdcMoneyType double
    double InvestorProdRULEMarginField_IntraProdMargin = 0.0;
        
    ///品种间对锁保证金
    // TThostFtdcMoneyType double
    double InvestorProdRULEMarginField_InterProdMargin = 0.0;
        
    ///跨品种单腿保证金
    // TThostFtdcMoneyType double
    double InvestorProdRULEMarginField_SingleMargin = 0.0;
        
    ///非组合合约保证金
    // TThostFtdcMoneyType double
    double InvestorProdRULEMarginField_NonCombMargin = 0.0;
        
    ///附加保证金
    // TThostFtdcMoneyType double
    double InvestorProdRULEMarginField_AddOnMargin = 0.0;
        
    ///交易所保证金
    // TThostFtdcMoneyType double
    double InvestorProdRULEMarginField_ExchMargin = 0.0;
        
    ///附加冻结保证金
    // TThostFtdcMoneyType double
    double InvestorProdRULEMarginField_AddOnFrozenMargin = 0.0;
        
    ///开仓冻结保证金
    // TThostFtdcMoneyType double
    double InvestorProdRULEMarginField_OpenFrozenMargin = 0.0;
        
    ///平仓冻结保证金
    // TThostFtdcMoneyType double
    double InvestorProdRULEMarginField_CloseFrozenMargin = 0.0;
        
    ///品种保证金
    // TThostFtdcMoneyType double
    double InvestorProdRULEMarginField_Margin = 0.0;
        
    ///冻结保证金
    // TThostFtdcMoneyType double
    double InvestorProdRULEMarginField_FrozenMargin = 0.0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#ciddddddddddddddddddddd", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#ciddddddddddddddddddddd", (char **)kwlist
#endif

        , &InvestorProdRULEMarginField_ExchangeID, &InvestorProdRULEMarginField_ExchangeID_len 
        , &InvestorProdRULEMarginField_BrokerID, &InvestorProdRULEMarginField_BrokerID_len 
        , &InvestorProdRULEMarginField_InvestorID, &InvestorProdRULEMarginField_InvestorID_len 
        , &InvestorProdRULEMarginField_ProdFamilyCode, &InvestorProdRULEMarginField_ProdFamilyCode_len 
        , &InvestorProdRULEMarginField_InstrumentClass 
        , &InvestorProdRULEMarginField_CommodityGroupID 
        , &InvestorProdRULEMarginField_BStdPosition 
        , &InvestorProdRULEMarginField_SStdPosition 
        , &InvestorProdRULEMarginField_BStdOpenFrozen 
        , &InvestorProdRULEMarginField_SStdOpenFrozen 
        , &InvestorProdRULEMarginField_BStdCloseFrozen 
        , &InvestorProdRULEMarginField_SStdCloseFrozen 
        , &InvestorProdRULEMarginField_IntraProdStdPosition 
        , &InvestorProdRULEMarginField_NetStdPosition 
        , &InvestorProdRULEMarginField_InterProdStdPosition 
        , &InvestorProdRULEMarginField_SingleStdPosition 
        , &InvestorProdRULEMarginField_IntraProdMargin 
        , &InvestorProdRULEMarginField_InterProdMargin 
        , &InvestorProdRULEMarginField_SingleMargin 
        , &InvestorProdRULEMarginField_NonCombMargin 
        , &InvestorProdRULEMarginField_AddOnMargin 
        , &InvestorProdRULEMarginField_ExchMargin 
        , &InvestorProdRULEMarginField_AddOnFrozenMargin 
        , &InvestorProdRULEMarginField_OpenFrozenMargin 
        , &InvestorProdRULEMarginField_CloseFrozenMargin 
        , &InvestorProdRULEMarginField_Margin 
        , &InvestorProdRULEMarginField_FrozenMargin 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( InvestorProdRULEMarginField_ExchangeID != NULL ) {
        if(InvestorProdRULEMarginField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", InvestorProdRULEMarginField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, InvestorProdRULEMarginField_ExchangeID, InvestorProdRULEMarginField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, InvestorProdRULEMarginField_ExchangeID, sizeof(self->data.ExchangeID) );
        InvestorProdRULEMarginField_ExchangeID = NULL;
    }
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( InvestorProdRULEMarginField_BrokerID != NULL ) {
        if(InvestorProdRULEMarginField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", InvestorProdRULEMarginField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, InvestorProdRULEMarginField_BrokerID, InvestorProdRULEMarginField_BrokerID_len);        
        strncpy(self->data.BrokerID, InvestorProdRULEMarginField_BrokerID, sizeof(self->data.BrokerID) );
        InvestorProdRULEMarginField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( InvestorProdRULEMarginField_InvestorID != NULL ) {
        if(InvestorProdRULEMarginField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", InvestorProdRULEMarginField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, InvestorProdRULEMarginField_InvestorID, InvestorProdRULEMarginField_InvestorID_len);        
        strncpy(self->data.InvestorID, InvestorProdRULEMarginField_InvestorID, sizeof(self->data.InvestorID) );
        InvestorProdRULEMarginField_InvestorID = NULL;
    }
            
    ///品种代码
    // TThostFtdcInstrumentIDType char[81]
    if( InvestorProdRULEMarginField_ProdFamilyCode != NULL ) {
        if(InvestorProdRULEMarginField_ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is %zd)", InvestorProdRULEMarginField_ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.ProdFamilyCode));
            return -1;
        }
        // memset(self->data.ProdFamilyCode, 0, sizeof(self->data.ProdFamilyCode));
        // memcpy(self->data.ProdFamilyCode, InvestorProdRULEMarginField_ProdFamilyCode, InvestorProdRULEMarginField_ProdFamilyCode_len);        
        strncpy(self->data.ProdFamilyCode, InvestorProdRULEMarginField_ProdFamilyCode, sizeof(self->data.ProdFamilyCode) );
        InvestorProdRULEMarginField_ProdFamilyCode = NULL;
    }
            
    ///合约类型
    // TThostFtdcInstrumentClassType char
    self->data.InstrumentClass = InvestorProdRULEMarginField_InstrumentClass;
            
    ///商品群号
    // TThostFtdcCommodityGroupIDType int
    self->data.CommodityGroupID = InvestorProdRULEMarginField_CommodityGroupID;
        
    ///买标准持仓
    // TThostFtdcStdPositionType double
    self->data.BStdPosition = InvestorProdRULEMarginField_BStdPosition;
        
    ///卖标准持仓
    // TThostFtdcStdPositionType double
    self->data.SStdPosition = InvestorProdRULEMarginField_SStdPosition;
        
    ///买标准开仓冻结
    // TThostFtdcStdPositionType double
    self->data.BStdOpenFrozen = InvestorProdRULEMarginField_BStdOpenFrozen;
        
    ///卖标准开仓冻结
    // TThostFtdcStdPositionType double
    self->data.SStdOpenFrozen = InvestorProdRULEMarginField_SStdOpenFrozen;
        
    ///买标准平仓冻结
    // TThostFtdcStdPositionType double
    self->data.BStdCloseFrozen = InvestorProdRULEMarginField_BStdCloseFrozen;
        
    ///卖标准平仓冻结
    // TThostFtdcStdPositionType double
    self->data.SStdCloseFrozen = InvestorProdRULEMarginField_SStdCloseFrozen;
        
    ///品种内对冲标准持仓
    // TThostFtdcStdPositionType double
    self->data.IntraProdStdPosition = InvestorProdRULEMarginField_IntraProdStdPosition;
        
    ///品种内单腿标准持仓
    // TThostFtdcStdPositionType double
    self->data.NetStdPosition = InvestorProdRULEMarginField_NetStdPosition;
        
    ///品种间对冲标准持仓
    // TThostFtdcStdPositionType double
    self->data.InterProdStdPosition = InvestorProdRULEMarginField_InterProdStdPosition;
        
    ///单腿标准持仓
    // TThostFtdcStdPositionType double
    self->data.SingleStdPosition = InvestorProdRULEMarginField_SingleStdPosition;
        
    ///品种内对锁保证金
    // TThostFtdcMoneyType double
    self->data.IntraProdMargin = InvestorProdRULEMarginField_IntraProdMargin;
        
    ///品种间对锁保证金
    // TThostFtdcMoneyType double
    self->data.InterProdMargin = InvestorProdRULEMarginField_InterProdMargin;
        
    ///跨品种单腿保证金
    // TThostFtdcMoneyType double
    self->data.SingleMargin = InvestorProdRULEMarginField_SingleMargin;
        
    ///非组合合约保证金
    // TThostFtdcMoneyType double
    self->data.NonCombMargin = InvestorProdRULEMarginField_NonCombMargin;
        
    ///附加保证金
    // TThostFtdcMoneyType double
    self->data.AddOnMargin = InvestorProdRULEMarginField_AddOnMargin;
        
    ///交易所保证金
    // TThostFtdcMoneyType double
    self->data.ExchMargin = InvestorProdRULEMarginField_ExchMargin;
        
    ///附加冻结保证金
    // TThostFtdcMoneyType double
    self->data.AddOnFrozenMargin = InvestorProdRULEMarginField_AddOnFrozenMargin;
        
    ///开仓冻结保证金
    // TThostFtdcMoneyType double
    self->data.OpenFrozenMargin = InvestorProdRULEMarginField_OpenFrozenMargin;
        
    ///平仓冻结保证金
    // TThostFtdcMoneyType double
    self->data.CloseFrozenMargin = InvestorProdRULEMarginField_CloseFrozenMargin;
        
    ///品种保证金
    // TThostFtdcMoneyType double
    self->data.Margin = InvestorProdRULEMarginField_Margin;
        
    ///冻结保证金
    // TThostFtdcMoneyType double
    self->data.FrozenMargin = InvestorProdRULEMarginField_FrozenMargin;
        

    return 0;
}

static void PyCThostFtdcInvestorProdRULEMarginField_dealloc(PyCThostFtdcInvestorProdRULEMarginField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInvestorProdRULEMarginField_repr(PyCThostFtdcInvestorProdRULEMarginField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:c,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:c,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d}"
#endif

        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"ProdFamilyCode", self->data.ProdFamilyCode//, (Py_ssize_t)sizeof(self->data.ProdFamilyCode) 
        ,"InstrumentClass", self->data.InstrumentClass 
        ,"CommodityGroupID", self->data.CommodityGroupID 
        ,"BStdPosition", self->data.BStdPosition 
        ,"SStdPosition", self->data.SStdPosition 
        ,"BStdOpenFrozen", self->data.BStdOpenFrozen 
        ,"SStdOpenFrozen", self->data.SStdOpenFrozen 
        ,"BStdCloseFrozen", self->data.BStdCloseFrozen 
        ,"SStdCloseFrozen", self->data.SStdCloseFrozen 
        ,"IntraProdStdPosition", self->data.IntraProdStdPosition 
        ,"NetStdPosition", self->data.NetStdPosition 
        ,"InterProdStdPosition", self->data.InterProdStdPosition 
        ,"SingleStdPosition", self->data.SingleStdPosition 
        ,"IntraProdMargin", self->data.IntraProdMargin 
        ,"InterProdMargin", self->data.InterProdMargin 
        ,"SingleMargin", self->data.SingleMargin 
        ,"NonCombMargin", self->data.NonCombMargin 
        ,"AddOnMargin", self->data.AddOnMargin 
        ,"ExchMargin", self->data.ExchMargin 
        ,"AddOnFrozenMargin", self->data.AddOnFrozenMargin 
        ,"OpenFrozenMargin", self->data.OpenFrozenMargin 
        ,"CloseFrozenMargin", self->data.CloseFrozenMargin 
        ,"Margin", self->data.Margin 
        ,"FrozenMargin", self->data.FrozenMargin 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorProdRULEMarginField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_ExchangeID(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcInvestorProdRULEMarginField_set_ExchangeID(PyCThostFtdcInvestorProdRULEMarginField *self, PyObject* val, void *closure) {
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
            
///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_BrokerID(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcInvestorProdRULEMarginField_set_BrokerID(PyCThostFtdcInvestorProdRULEMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_InvestorID(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcInvestorProdRULEMarginField_set_InvestorID(PyCThostFtdcInvestorProdRULEMarginField *self, PyObject* val, void *closure) {
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
            
///品种代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_ProdFamilyCode(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProdFamilyCode, (Py_ssize_t)sizeof(self->data.ProdFamilyCode));
    return PyBytes_FromString(self->data.ProdFamilyCode);
}

///品种代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcInvestorProdRULEMarginField_set_ProdFamilyCode(PyCThostFtdcInvestorProdRULEMarginField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ProdFamilyCode Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ProdFamilyCode)) {
        PyErr_SetString(PyExc_ValueError, "ProdFamilyCode must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.ProdFamilyCode, 0, sizeof(self->data.ProdFamilyCode));
    // memcpy(self->data.ProdFamilyCode, buf, len);
    strncpy(self->data.ProdFamilyCode, buf, sizeof(self->data.ProdFamilyCode));
    return 0;
}
            
///合约类型
// TThostFtdcInstrumentClassType char
static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_InstrumentClass(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.InstrumentClass), 1);
}

///合约类型
// TThostFtdcInstrumentClassType char
static int PyCThostFtdcInvestorProdRULEMarginField_set_InstrumentClass(PyCThostFtdcInvestorProdRULEMarginField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentClass Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InstrumentClass)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentClass must be equal 1 bytes");
        return -1;
    }
    self->data.InstrumentClass = *buf;
    return 0;
}
            
///商品群号
// TThostFtdcCommodityGroupIDType int
static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_CommodityGroupID(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.CommodityGroupID);
#else
    return PyInt_FromLong(self->data.CommodityGroupID);
#endif
}

///商品群号
// TThostFtdcCommodityGroupIDType int
static int PyCThostFtdcInvestorProdRULEMarginField_set_CommodityGroupID(PyCThostFtdcInvestorProdRULEMarginField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CommodityGroupID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CommodityGroupID Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the CommodityGroupID value out of range for C int");
        return -1;
    }
    self->data.CommodityGroupID = (int)buf;
    return 0;
}
        
///买标准持仓
// TThostFtdcStdPositionType double
static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_BStdPosition(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.BStdPosition);
}

///买标准持仓
// TThostFtdcStdPositionType double
static int PyCThostFtdcInvestorProdRULEMarginField_set_BStdPosition(PyCThostFtdcInvestorProdRULEMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BStdPosition Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BStdPosition = buf;
    return 0;
}
        
///卖标准持仓
// TThostFtdcStdPositionType double
static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_SStdPosition(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SStdPosition);
}

///卖标准持仓
// TThostFtdcStdPositionType double
static int PyCThostFtdcInvestorProdRULEMarginField_set_SStdPosition(PyCThostFtdcInvestorProdRULEMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SStdPosition Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SStdPosition = buf;
    return 0;
}
        
///买标准开仓冻结
// TThostFtdcStdPositionType double
static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_BStdOpenFrozen(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.BStdOpenFrozen);
}

///买标准开仓冻结
// TThostFtdcStdPositionType double
static int PyCThostFtdcInvestorProdRULEMarginField_set_BStdOpenFrozen(PyCThostFtdcInvestorProdRULEMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BStdOpenFrozen Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BStdOpenFrozen = buf;
    return 0;
}
        
///卖标准开仓冻结
// TThostFtdcStdPositionType double
static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_SStdOpenFrozen(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SStdOpenFrozen);
}

///卖标准开仓冻结
// TThostFtdcStdPositionType double
static int PyCThostFtdcInvestorProdRULEMarginField_set_SStdOpenFrozen(PyCThostFtdcInvestorProdRULEMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SStdOpenFrozen Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SStdOpenFrozen = buf;
    return 0;
}
        
///买标准平仓冻结
// TThostFtdcStdPositionType double
static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_BStdCloseFrozen(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.BStdCloseFrozen);
}

///买标准平仓冻结
// TThostFtdcStdPositionType double
static int PyCThostFtdcInvestorProdRULEMarginField_set_BStdCloseFrozen(PyCThostFtdcInvestorProdRULEMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BStdCloseFrozen Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BStdCloseFrozen = buf;
    return 0;
}
        
///卖标准平仓冻结
// TThostFtdcStdPositionType double
static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_SStdCloseFrozen(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SStdCloseFrozen);
}

///卖标准平仓冻结
// TThostFtdcStdPositionType double
static int PyCThostFtdcInvestorProdRULEMarginField_set_SStdCloseFrozen(PyCThostFtdcInvestorProdRULEMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SStdCloseFrozen Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SStdCloseFrozen = buf;
    return 0;
}
        
///品种内对冲标准持仓
// TThostFtdcStdPositionType double
static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_IntraProdStdPosition(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.IntraProdStdPosition);
}

///品种内对冲标准持仓
// TThostFtdcStdPositionType double
static int PyCThostFtdcInvestorProdRULEMarginField_set_IntraProdStdPosition(PyCThostFtdcInvestorProdRULEMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IntraProdStdPosition Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.IntraProdStdPosition = buf;
    return 0;
}
        
///品种内单腿标准持仓
// TThostFtdcStdPositionType double
static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_NetStdPosition(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.NetStdPosition);
}

///品种内单腿标准持仓
// TThostFtdcStdPositionType double
static int PyCThostFtdcInvestorProdRULEMarginField_set_NetStdPosition(PyCThostFtdcInvestorProdRULEMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "NetStdPosition Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.NetStdPosition = buf;
    return 0;
}
        
///品种间对冲标准持仓
// TThostFtdcStdPositionType double
static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_InterProdStdPosition(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.InterProdStdPosition);
}

///品种间对冲标准持仓
// TThostFtdcStdPositionType double
static int PyCThostFtdcInvestorProdRULEMarginField_set_InterProdStdPosition(PyCThostFtdcInvestorProdRULEMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InterProdStdPosition Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.InterProdStdPosition = buf;
    return 0;
}
        
///单腿标准持仓
// TThostFtdcStdPositionType double
static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_SingleStdPosition(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SingleStdPosition);
}

///单腿标准持仓
// TThostFtdcStdPositionType double
static int PyCThostFtdcInvestorProdRULEMarginField_set_SingleStdPosition(PyCThostFtdcInvestorProdRULEMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SingleStdPosition Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SingleStdPosition = buf;
    return 0;
}
        
///品种内对锁保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_IntraProdMargin(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.IntraProdMargin);
}

///品种内对锁保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdRULEMarginField_set_IntraProdMargin(PyCThostFtdcInvestorProdRULEMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IntraProdMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.IntraProdMargin = buf;
    return 0;
}
        
///品种间对锁保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_InterProdMargin(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.InterProdMargin);
}

///品种间对锁保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdRULEMarginField_set_InterProdMargin(PyCThostFtdcInvestorProdRULEMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InterProdMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.InterProdMargin = buf;
    return 0;
}
        
///跨品种单腿保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_SingleMargin(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SingleMargin);
}

///跨品种单腿保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdRULEMarginField_set_SingleMargin(PyCThostFtdcInvestorProdRULEMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SingleMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SingleMargin = buf;
    return 0;
}
        
///非组合合约保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_NonCombMargin(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.NonCombMargin);
}

///非组合合约保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdRULEMarginField_set_NonCombMargin(PyCThostFtdcInvestorProdRULEMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "NonCombMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.NonCombMargin = buf;
    return 0;
}
        
///附加保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_AddOnMargin(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.AddOnMargin);
}

///附加保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdRULEMarginField_set_AddOnMargin(PyCThostFtdcInvestorProdRULEMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AddOnMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AddOnMargin = buf;
    return 0;
}
        
///交易所保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_ExchMargin(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ExchMargin);
}

///交易所保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdRULEMarginField_set_ExchMargin(PyCThostFtdcInvestorProdRULEMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ExchMargin = buf;
    return 0;
}
        
///附加冻结保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_AddOnFrozenMargin(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.AddOnFrozenMargin);
}

///附加冻结保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdRULEMarginField_set_AddOnFrozenMargin(PyCThostFtdcInvestorProdRULEMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AddOnFrozenMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AddOnFrozenMargin = buf;
    return 0;
}
        
///开仓冻结保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_OpenFrozenMargin(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.OpenFrozenMargin);
}

///开仓冻结保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdRULEMarginField_set_OpenFrozenMargin(PyCThostFtdcInvestorProdRULEMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OpenFrozenMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OpenFrozenMargin = buf;
    return 0;
}
        
///平仓冻结保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_CloseFrozenMargin(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CloseFrozenMargin);
}

///平仓冻结保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdRULEMarginField_set_CloseFrozenMargin(PyCThostFtdcInvestorProdRULEMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CloseFrozenMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CloseFrozenMargin = buf;
    return 0;
}
        
///品种保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_Margin(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Margin);
}

///品种保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdRULEMarginField_set_Margin(PyCThostFtdcInvestorProdRULEMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Margin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Margin = buf;
    return 0;
}
        
///冻结保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_FrozenMargin(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FrozenMargin);
}

///冻结保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdRULEMarginField_set_FrozenMargin(PyCThostFtdcInvestorProdRULEMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FrozenMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.FrozenMargin = buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcInvestorProdRULEMarginField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_ExchangeID, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_BrokerID, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_InvestorID, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_InvestorID, (char *)"InvestorID", NULL},
    ///品种代码 
    {(char *)"ProdFamilyCode", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_ProdFamilyCode, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_ProdFamilyCode, (char *)"ProdFamilyCode", NULL},
    ///合约类型 
    {(char *)"InstrumentClass", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_InstrumentClass, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_InstrumentClass, (char *)"InstrumentClass", NULL},
    ///商品群号 
    {(char *)"CommodityGroupID", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_CommodityGroupID, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_CommodityGroupID, (char *)"CommodityGroupID", NULL},
    ///买标准持仓 
    {(char *)"BStdPosition", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_BStdPosition, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_BStdPosition, (char *)"BStdPosition", NULL},
    ///卖标准持仓 
    {(char *)"SStdPosition", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_SStdPosition, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_SStdPosition, (char *)"SStdPosition", NULL},
    ///买标准开仓冻结 
    {(char *)"BStdOpenFrozen", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_BStdOpenFrozen, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_BStdOpenFrozen, (char *)"BStdOpenFrozen", NULL},
    ///卖标准开仓冻结 
    {(char *)"SStdOpenFrozen", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_SStdOpenFrozen, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_SStdOpenFrozen, (char *)"SStdOpenFrozen", NULL},
    ///买标准平仓冻结 
    {(char *)"BStdCloseFrozen", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_BStdCloseFrozen, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_BStdCloseFrozen, (char *)"BStdCloseFrozen", NULL},
    ///卖标准平仓冻结 
    {(char *)"SStdCloseFrozen", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_SStdCloseFrozen, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_SStdCloseFrozen, (char *)"SStdCloseFrozen", NULL},
    ///品种内对冲标准持仓 
    {(char *)"IntraProdStdPosition", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_IntraProdStdPosition, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_IntraProdStdPosition, (char *)"IntraProdStdPosition", NULL},
    ///品种内单腿标准持仓 
    {(char *)"NetStdPosition", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_NetStdPosition, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_NetStdPosition, (char *)"NetStdPosition", NULL},
    ///品种间对冲标准持仓 
    {(char *)"InterProdStdPosition", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_InterProdStdPosition, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_InterProdStdPosition, (char *)"InterProdStdPosition", NULL},
    ///单腿标准持仓 
    {(char *)"SingleStdPosition", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_SingleStdPosition, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_SingleStdPosition, (char *)"SingleStdPosition", NULL},
    ///品种内对锁保证金 
    {(char *)"IntraProdMargin", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_IntraProdMargin, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_IntraProdMargin, (char *)"IntraProdMargin", NULL},
    ///品种间对锁保证金 
    {(char *)"InterProdMargin", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_InterProdMargin, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_InterProdMargin, (char *)"InterProdMargin", NULL},
    ///跨品种单腿保证金 
    {(char *)"SingleMargin", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_SingleMargin, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_SingleMargin, (char *)"SingleMargin", NULL},
    ///非组合合约保证金 
    {(char *)"NonCombMargin", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_NonCombMargin, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_NonCombMargin, (char *)"NonCombMargin", NULL},
    ///附加保证金 
    {(char *)"AddOnMargin", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_AddOnMargin, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_AddOnMargin, (char *)"AddOnMargin", NULL},
    ///交易所保证金 
    {(char *)"ExchMargin", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_ExchMargin, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_ExchMargin, (char *)"ExchMargin", NULL},
    ///附加冻结保证金 
    {(char *)"AddOnFrozenMargin", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_AddOnFrozenMargin, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_AddOnFrozenMargin, (char *)"AddOnFrozenMargin", NULL},
    ///开仓冻结保证金 
    {(char *)"OpenFrozenMargin", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_OpenFrozenMargin, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_OpenFrozenMargin, (char *)"OpenFrozenMargin", NULL},
    ///平仓冻结保证金 
    {(char *)"CloseFrozenMargin", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_CloseFrozenMargin, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_CloseFrozenMargin, (char *)"CloseFrozenMargin", NULL},
    ///品种保证金 
    {(char *)"Margin", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_Margin, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_Margin, (char *)"Margin", NULL},
    ///冻结保证金 
    {(char *)"FrozenMargin", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_FrozenMargin, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_FrozenMargin, (char *)"FrozenMargin", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInvestorProdRULEMarginFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInvestorProdRULEMarginField",	/* tp_name */
	sizeof(PyCThostFtdcInvestorProdRULEMarginField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInvestorProdRULEMarginField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInvestorProdRULEMarginField_repr,   /* tp_repr */
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
	"CThostFtdcInvestorProdRULEMarginField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInvestorProdRULEMarginField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInvestorProdRULEMarginField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInvestorProdRULEMarginField_new,       /* tp_new */
};

int PyCThostFtdcInvestorProdRULEMarginFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInvestorProdRULEMarginField  */
	if (PyType_Ready(&PyCThostFtdcInvestorProdRULEMarginFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInvestorProdRULEMarginField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInvestorProdRULEMarginFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInvestorProdRULEMarginField", (PyObject *)&PyCThostFtdcInvestorProdRULEMarginFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorProdRULEMarginField to module");
        Py_DECREF(&PyCThostFtdcInvestorProdRULEMarginFieldType);
		return -1;
    }

    return 0;
}
