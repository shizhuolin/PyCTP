
#include "PyCThostFtdcInvestorProdSPBMDetailField.h"

///投资者产品SPBM明细

static PyObject *PyCThostFtdcInvestorProdSPBMDetailField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInvestorProdSPBMDetailField *self = (PyCThostFtdcInvestorProdSPBMDetailField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcInvestorProdSPBMDetailField_init(PyCThostFtdcInvestorProdSPBMDetailField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "BrokerID", "InvestorID", "ProdFamilyCode", "IntraInstrMargin", "BCollectingMargin", "SCollectingMargin", "IntraProdMargin", "NetMargin", "InterProdMargin", "SingleMargin", "AddOnMargin", "DeliveryMargin", "CallOptionMinRisk", "PutOptionMinRisk", "OptionMinRisk", "OptionValueOffset", "OptionRoyalty", "RealOptionValueOffset", "Margin", "ExchMargin",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *InvestorProdSPBMDetailField_ExchangeID = NULL;
    Py_ssize_t InvestorProdSPBMDetailField_ExchangeID_len = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *InvestorProdSPBMDetailField_BrokerID = NULL;
    Py_ssize_t InvestorProdSPBMDetailField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *InvestorProdSPBMDetailField_InvestorID = NULL;
    Py_ssize_t InvestorProdSPBMDetailField_InvestorID_len = 0;
            
    ///品种代码
    // TThostFtdcInstrumentIDType char[81]
    const char *InvestorProdSPBMDetailField_ProdFamilyCode = NULL;
    Py_ssize_t InvestorProdSPBMDetailField_ProdFamilyCode_len = 0;
            
    ///合约内对锁保证金
    // TThostFtdcMoneyType double
    double InvestorProdSPBMDetailField_IntraInstrMargin = 0.0;
        
    ///买归集保证金
    // TThostFtdcMoneyType double
    double InvestorProdSPBMDetailField_BCollectingMargin = 0.0;
        
    ///卖归集保证金
    // TThostFtdcMoneyType double
    double InvestorProdSPBMDetailField_SCollectingMargin = 0.0;
        
    ///品种内合约间对锁保证金
    // TThostFtdcMoneyType double
    double InvestorProdSPBMDetailField_IntraProdMargin = 0.0;
        
    ///净保证金
    // TThostFtdcMoneyType double
    double InvestorProdSPBMDetailField_NetMargin = 0.0;
        
    ///产品间对锁保证金
    // TThostFtdcMoneyType double
    double InvestorProdSPBMDetailField_InterProdMargin = 0.0;
        
    ///裸保证金
    // TThostFtdcMoneyType double
    double InvestorProdSPBMDetailField_SingleMargin = 0.0;
        
    ///附加保证金
    // TThostFtdcMoneyType double
    double InvestorProdSPBMDetailField_AddOnMargin = 0.0;
        
    ///交割月保证金
    // TThostFtdcMoneyType double
    double InvestorProdSPBMDetailField_DeliveryMargin = 0.0;
        
    ///看涨期权最低风险
    // TThostFtdcMoneyType double
    double InvestorProdSPBMDetailField_CallOptionMinRisk = 0.0;
        
    ///看跌期权最低风险
    // TThostFtdcMoneyType double
    double InvestorProdSPBMDetailField_PutOptionMinRisk = 0.0;
        
    ///卖方期权最低风险
    // TThostFtdcMoneyType double
    double InvestorProdSPBMDetailField_OptionMinRisk = 0.0;
        
    ///买方期权冲抵价值
    // TThostFtdcMoneyType double
    double InvestorProdSPBMDetailField_OptionValueOffset = 0.0;
        
    ///卖方期权权利金
    // TThostFtdcMoneyType double
    double InvestorProdSPBMDetailField_OptionRoyalty = 0.0;
        
    ///价值冲抵
    // TThostFtdcMoneyType double
    double InvestorProdSPBMDetailField_RealOptionValueOffset = 0.0;
        
    ///保证金
    // TThostFtdcMoneyType double
    double InvestorProdSPBMDetailField_Margin = 0.0;
        
    ///交易所保证金
    // TThostFtdcMoneyType double
    double InvestorProdSPBMDetailField_ExchMargin = 0.0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#ddddddddddddddddd", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#ddddddddddddddddd", (char **)kwlist
#endif

        , &InvestorProdSPBMDetailField_ExchangeID, &InvestorProdSPBMDetailField_ExchangeID_len 
        , &InvestorProdSPBMDetailField_BrokerID, &InvestorProdSPBMDetailField_BrokerID_len 
        , &InvestorProdSPBMDetailField_InvestorID, &InvestorProdSPBMDetailField_InvestorID_len 
        , &InvestorProdSPBMDetailField_ProdFamilyCode, &InvestorProdSPBMDetailField_ProdFamilyCode_len 
        , &InvestorProdSPBMDetailField_IntraInstrMargin 
        , &InvestorProdSPBMDetailField_BCollectingMargin 
        , &InvestorProdSPBMDetailField_SCollectingMargin 
        , &InvestorProdSPBMDetailField_IntraProdMargin 
        , &InvestorProdSPBMDetailField_NetMargin 
        , &InvestorProdSPBMDetailField_InterProdMargin 
        , &InvestorProdSPBMDetailField_SingleMargin 
        , &InvestorProdSPBMDetailField_AddOnMargin 
        , &InvestorProdSPBMDetailField_DeliveryMargin 
        , &InvestorProdSPBMDetailField_CallOptionMinRisk 
        , &InvestorProdSPBMDetailField_PutOptionMinRisk 
        , &InvestorProdSPBMDetailField_OptionMinRisk 
        , &InvestorProdSPBMDetailField_OptionValueOffset 
        , &InvestorProdSPBMDetailField_OptionRoyalty 
        , &InvestorProdSPBMDetailField_RealOptionValueOffset 
        , &InvestorProdSPBMDetailField_Margin 
        , &InvestorProdSPBMDetailField_ExchMargin 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( InvestorProdSPBMDetailField_ExchangeID != NULL ) {
        if(InvestorProdSPBMDetailField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", InvestorProdSPBMDetailField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, InvestorProdSPBMDetailField_ExchangeID, InvestorProdSPBMDetailField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, InvestorProdSPBMDetailField_ExchangeID, sizeof(self->data.ExchangeID) );
        InvestorProdSPBMDetailField_ExchangeID = NULL;
    }
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( InvestorProdSPBMDetailField_BrokerID != NULL ) {
        if(InvestorProdSPBMDetailField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", InvestorProdSPBMDetailField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, InvestorProdSPBMDetailField_BrokerID, InvestorProdSPBMDetailField_BrokerID_len);        
        strncpy(self->data.BrokerID, InvestorProdSPBMDetailField_BrokerID, sizeof(self->data.BrokerID) );
        InvestorProdSPBMDetailField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( InvestorProdSPBMDetailField_InvestorID != NULL ) {
        if(InvestorProdSPBMDetailField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", InvestorProdSPBMDetailField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, InvestorProdSPBMDetailField_InvestorID, InvestorProdSPBMDetailField_InvestorID_len);        
        strncpy(self->data.InvestorID, InvestorProdSPBMDetailField_InvestorID, sizeof(self->data.InvestorID) );
        InvestorProdSPBMDetailField_InvestorID = NULL;
    }
            
    ///品种代码
    // TThostFtdcInstrumentIDType char[81]
    if( InvestorProdSPBMDetailField_ProdFamilyCode != NULL ) {
        if(InvestorProdSPBMDetailField_ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is %zd)", InvestorProdSPBMDetailField_ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.ProdFamilyCode));
            return -1;
        }
        // memset(self->data.ProdFamilyCode, 0, sizeof(self->data.ProdFamilyCode));
        // memcpy(self->data.ProdFamilyCode, InvestorProdSPBMDetailField_ProdFamilyCode, InvestorProdSPBMDetailField_ProdFamilyCode_len);        
        strncpy(self->data.ProdFamilyCode, InvestorProdSPBMDetailField_ProdFamilyCode, sizeof(self->data.ProdFamilyCode) );
        InvestorProdSPBMDetailField_ProdFamilyCode = NULL;
    }
            
    ///合约内对锁保证金
    // TThostFtdcMoneyType double
    self->data.IntraInstrMargin = InvestorProdSPBMDetailField_IntraInstrMargin;
        
    ///买归集保证金
    // TThostFtdcMoneyType double
    self->data.BCollectingMargin = InvestorProdSPBMDetailField_BCollectingMargin;
        
    ///卖归集保证金
    // TThostFtdcMoneyType double
    self->data.SCollectingMargin = InvestorProdSPBMDetailField_SCollectingMargin;
        
    ///品种内合约间对锁保证金
    // TThostFtdcMoneyType double
    self->data.IntraProdMargin = InvestorProdSPBMDetailField_IntraProdMargin;
        
    ///净保证金
    // TThostFtdcMoneyType double
    self->data.NetMargin = InvestorProdSPBMDetailField_NetMargin;
        
    ///产品间对锁保证金
    // TThostFtdcMoneyType double
    self->data.InterProdMargin = InvestorProdSPBMDetailField_InterProdMargin;
        
    ///裸保证金
    // TThostFtdcMoneyType double
    self->data.SingleMargin = InvestorProdSPBMDetailField_SingleMargin;
        
    ///附加保证金
    // TThostFtdcMoneyType double
    self->data.AddOnMargin = InvestorProdSPBMDetailField_AddOnMargin;
        
    ///交割月保证金
    // TThostFtdcMoneyType double
    self->data.DeliveryMargin = InvestorProdSPBMDetailField_DeliveryMargin;
        
    ///看涨期权最低风险
    // TThostFtdcMoneyType double
    self->data.CallOptionMinRisk = InvestorProdSPBMDetailField_CallOptionMinRisk;
        
    ///看跌期权最低风险
    // TThostFtdcMoneyType double
    self->data.PutOptionMinRisk = InvestorProdSPBMDetailField_PutOptionMinRisk;
        
    ///卖方期权最低风险
    // TThostFtdcMoneyType double
    self->data.OptionMinRisk = InvestorProdSPBMDetailField_OptionMinRisk;
        
    ///买方期权冲抵价值
    // TThostFtdcMoneyType double
    self->data.OptionValueOffset = InvestorProdSPBMDetailField_OptionValueOffset;
        
    ///卖方期权权利金
    // TThostFtdcMoneyType double
    self->data.OptionRoyalty = InvestorProdSPBMDetailField_OptionRoyalty;
        
    ///价值冲抵
    // TThostFtdcMoneyType double
    self->data.RealOptionValueOffset = InvestorProdSPBMDetailField_RealOptionValueOffset;
        
    ///保证金
    // TThostFtdcMoneyType double
    self->data.Margin = InvestorProdSPBMDetailField_Margin;
        
    ///交易所保证金
    // TThostFtdcMoneyType double
    self->data.ExchMargin = InvestorProdSPBMDetailField_ExchMargin;
        

    return 0;
}

static void PyCThostFtdcInvestorProdSPBMDetailField_dealloc(PyCThostFtdcInvestorProdSPBMDetailField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInvestorProdSPBMDetailField_repr(PyCThostFtdcInvestorProdSPBMDetailField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d}"
#endif

        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"ProdFamilyCode", self->data.ProdFamilyCode//, (Py_ssize_t)sizeof(self->data.ProdFamilyCode) 
        ,"IntraInstrMargin", self->data.IntraInstrMargin 
        ,"BCollectingMargin", self->data.BCollectingMargin 
        ,"SCollectingMargin", self->data.SCollectingMargin 
        ,"IntraProdMargin", self->data.IntraProdMargin 
        ,"NetMargin", self->data.NetMargin 
        ,"InterProdMargin", self->data.InterProdMargin 
        ,"SingleMargin", self->data.SingleMargin 
        ,"AddOnMargin", self->data.AddOnMargin 
        ,"DeliveryMargin", self->data.DeliveryMargin 
        ,"CallOptionMinRisk", self->data.CallOptionMinRisk 
        ,"PutOptionMinRisk", self->data.PutOptionMinRisk 
        ,"OptionMinRisk", self->data.OptionMinRisk 
        ,"OptionValueOffset", self->data.OptionValueOffset 
        ,"OptionRoyalty", self->data.OptionRoyalty 
        ,"RealOptionValueOffset", self->data.RealOptionValueOffset 
        ,"Margin", self->data.Margin 
        ,"ExchMargin", self->data.ExchMargin 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorProdSPBMDetailField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcInvestorProdSPBMDetailField_get_ExchangeID(PyCThostFtdcInvestorProdSPBMDetailField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcInvestorProdSPBMDetailField_set_ExchangeID(PyCThostFtdcInvestorProdSPBMDetailField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorProdSPBMDetailField_get_BrokerID(PyCThostFtdcInvestorProdSPBMDetailField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcInvestorProdSPBMDetailField_set_BrokerID(PyCThostFtdcInvestorProdSPBMDetailField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorProdSPBMDetailField_get_InvestorID(PyCThostFtdcInvestorProdSPBMDetailField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcInvestorProdSPBMDetailField_set_InvestorID(PyCThostFtdcInvestorProdSPBMDetailField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorProdSPBMDetailField_get_ProdFamilyCode(PyCThostFtdcInvestorProdSPBMDetailField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProdFamilyCode, (Py_ssize_t)sizeof(self->data.ProdFamilyCode));
    return PyBytes_FromString(self->data.ProdFamilyCode);
}

///品种代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcInvestorProdSPBMDetailField_set_ProdFamilyCode(PyCThostFtdcInvestorProdSPBMDetailField *self, PyObject* val, void *closure) {
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
            
///合约内对锁保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdSPBMDetailField_get_IntraInstrMargin(PyCThostFtdcInvestorProdSPBMDetailField *self, void *closure) {
    return PyFloat_FromDouble(self->data.IntraInstrMargin);
}

///合约内对锁保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdSPBMDetailField_set_IntraInstrMargin(PyCThostFtdcInvestorProdSPBMDetailField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IntraInstrMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.IntraInstrMargin = buf;
    return 0;
}
        
///买归集保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdSPBMDetailField_get_BCollectingMargin(PyCThostFtdcInvestorProdSPBMDetailField *self, void *closure) {
    return PyFloat_FromDouble(self->data.BCollectingMargin);
}

///买归集保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdSPBMDetailField_set_BCollectingMargin(PyCThostFtdcInvestorProdSPBMDetailField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BCollectingMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BCollectingMargin = buf;
    return 0;
}
        
///卖归集保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdSPBMDetailField_get_SCollectingMargin(PyCThostFtdcInvestorProdSPBMDetailField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SCollectingMargin);
}

///卖归集保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdSPBMDetailField_set_SCollectingMargin(PyCThostFtdcInvestorProdSPBMDetailField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SCollectingMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SCollectingMargin = buf;
    return 0;
}
        
///品种内合约间对锁保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdSPBMDetailField_get_IntraProdMargin(PyCThostFtdcInvestorProdSPBMDetailField *self, void *closure) {
    return PyFloat_FromDouble(self->data.IntraProdMargin);
}

///品种内合约间对锁保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdSPBMDetailField_set_IntraProdMargin(PyCThostFtdcInvestorProdSPBMDetailField *self, PyObject* val, void *closure) {
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
        
///净保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdSPBMDetailField_get_NetMargin(PyCThostFtdcInvestorProdSPBMDetailField *self, void *closure) {
    return PyFloat_FromDouble(self->data.NetMargin);
}

///净保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdSPBMDetailField_set_NetMargin(PyCThostFtdcInvestorProdSPBMDetailField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "NetMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.NetMargin = buf;
    return 0;
}
        
///产品间对锁保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdSPBMDetailField_get_InterProdMargin(PyCThostFtdcInvestorProdSPBMDetailField *self, void *closure) {
    return PyFloat_FromDouble(self->data.InterProdMargin);
}

///产品间对锁保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdSPBMDetailField_set_InterProdMargin(PyCThostFtdcInvestorProdSPBMDetailField *self, PyObject* val, void *closure) {
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
        
///裸保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdSPBMDetailField_get_SingleMargin(PyCThostFtdcInvestorProdSPBMDetailField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SingleMargin);
}

///裸保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdSPBMDetailField_set_SingleMargin(PyCThostFtdcInvestorProdSPBMDetailField *self, PyObject* val, void *closure) {
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
        
///附加保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdSPBMDetailField_get_AddOnMargin(PyCThostFtdcInvestorProdSPBMDetailField *self, void *closure) {
    return PyFloat_FromDouble(self->data.AddOnMargin);
}

///附加保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdSPBMDetailField_set_AddOnMargin(PyCThostFtdcInvestorProdSPBMDetailField *self, PyObject* val, void *closure) {
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
        
///交割月保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdSPBMDetailField_get_DeliveryMargin(PyCThostFtdcInvestorProdSPBMDetailField *self, void *closure) {
    return PyFloat_FromDouble(self->data.DeliveryMargin);
}

///交割月保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdSPBMDetailField_set_DeliveryMargin(PyCThostFtdcInvestorProdSPBMDetailField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DeliveryMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.DeliveryMargin = buf;
    return 0;
}
        
///看涨期权最低风险
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdSPBMDetailField_get_CallOptionMinRisk(PyCThostFtdcInvestorProdSPBMDetailField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CallOptionMinRisk);
}

///看涨期权最低风险
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdSPBMDetailField_set_CallOptionMinRisk(PyCThostFtdcInvestorProdSPBMDetailField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CallOptionMinRisk Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CallOptionMinRisk = buf;
    return 0;
}
        
///看跌期权最低风险
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdSPBMDetailField_get_PutOptionMinRisk(PyCThostFtdcInvestorProdSPBMDetailField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PutOptionMinRisk);
}

///看跌期权最低风险
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdSPBMDetailField_set_PutOptionMinRisk(PyCThostFtdcInvestorProdSPBMDetailField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PutOptionMinRisk Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PutOptionMinRisk = buf;
    return 0;
}
        
///卖方期权最低风险
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdSPBMDetailField_get_OptionMinRisk(PyCThostFtdcInvestorProdSPBMDetailField *self, void *closure) {
    return PyFloat_FromDouble(self->data.OptionMinRisk);
}

///卖方期权最低风险
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdSPBMDetailField_set_OptionMinRisk(PyCThostFtdcInvestorProdSPBMDetailField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OptionMinRisk Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OptionMinRisk = buf;
    return 0;
}
        
///买方期权冲抵价值
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdSPBMDetailField_get_OptionValueOffset(PyCThostFtdcInvestorProdSPBMDetailField *self, void *closure) {
    return PyFloat_FromDouble(self->data.OptionValueOffset);
}

///买方期权冲抵价值
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdSPBMDetailField_set_OptionValueOffset(PyCThostFtdcInvestorProdSPBMDetailField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OptionValueOffset Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OptionValueOffset = buf;
    return 0;
}
        
///卖方期权权利金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdSPBMDetailField_get_OptionRoyalty(PyCThostFtdcInvestorProdSPBMDetailField *self, void *closure) {
    return PyFloat_FromDouble(self->data.OptionRoyalty);
}

///卖方期权权利金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdSPBMDetailField_set_OptionRoyalty(PyCThostFtdcInvestorProdSPBMDetailField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OptionRoyalty Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OptionRoyalty = buf;
    return 0;
}
        
///价值冲抵
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdSPBMDetailField_get_RealOptionValueOffset(PyCThostFtdcInvestorProdSPBMDetailField *self, void *closure) {
    return PyFloat_FromDouble(self->data.RealOptionValueOffset);
}

///价值冲抵
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdSPBMDetailField_set_RealOptionValueOffset(PyCThostFtdcInvestorProdSPBMDetailField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "RealOptionValueOffset Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.RealOptionValueOffset = buf;
    return 0;
}
        
///保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdSPBMDetailField_get_Margin(PyCThostFtdcInvestorProdSPBMDetailField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Margin);
}

///保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdSPBMDetailField_set_Margin(PyCThostFtdcInvestorProdSPBMDetailField *self, PyObject* val, void *closure) {
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
        
///交易所保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdSPBMDetailField_get_ExchMargin(PyCThostFtdcInvestorProdSPBMDetailField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ExchMargin);
}

///交易所保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdSPBMDetailField_set_ExchMargin(PyCThostFtdcInvestorProdSPBMDetailField *self, PyObject* val, void *closure) {
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
        

static PyGetSetDef PyCThostFtdcInvestorProdSPBMDetailField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcInvestorProdSPBMDetailField_get_ExchangeID, (setter)PyCThostFtdcInvestorProdSPBMDetailField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcInvestorProdSPBMDetailField_get_BrokerID, (setter)PyCThostFtdcInvestorProdSPBMDetailField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcInvestorProdSPBMDetailField_get_InvestorID, (setter)PyCThostFtdcInvestorProdSPBMDetailField_set_InvestorID, (char *)"InvestorID", NULL},
    ///品种代码 
    {(char *)"ProdFamilyCode", (getter)PyCThostFtdcInvestorProdSPBMDetailField_get_ProdFamilyCode, (setter)PyCThostFtdcInvestorProdSPBMDetailField_set_ProdFamilyCode, (char *)"ProdFamilyCode", NULL},
    ///合约内对锁保证金 
    {(char *)"IntraInstrMargin", (getter)PyCThostFtdcInvestorProdSPBMDetailField_get_IntraInstrMargin, (setter)PyCThostFtdcInvestorProdSPBMDetailField_set_IntraInstrMargin, (char *)"IntraInstrMargin", NULL},
    ///买归集保证金 
    {(char *)"BCollectingMargin", (getter)PyCThostFtdcInvestorProdSPBMDetailField_get_BCollectingMargin, (setter)PyCThostFtdcInvestorProdSPBMDetailField_set_BCollectingMargin, (char *)"BCollectingMargin", NULL},
    ///卖归集保证金 
    {(char *)"SCollectingMargin", (getter)PyCThostFtdcInvestorProdSPBMDetailField_get_SCollectingMargin, (setter)PyCThostFtdcInvestorProdSPBMDetailField_set_SCollectingMargin, (char *)"SCollectingMargin", NULL},
    ///品种内合约间对锁保证金 
    {(char *)"IntraProdMargin", (getter)PyCThostFtdcInvestorProdSPBMDetailField_get_IntraProdMargin, (setter)PyCThostFtdcInvestorProdSPBMDetailField_set_IntraProdMargin, (char *)"IntraProdMargin", NULL},
    ///净保证金 
    {(char *)"NetMargin", (getter)PyCThostFtdcInvestorProdSPBMDetailField_get_NetMargin, (setter)PyCThostFtdcInvestorProdSPBMDetailField_set_NetMargin, (char *)"NetMargin", NULL},
    ///产品间对锁保证金 
    {(char *)"InterProdMargin", (getter)PyCThostFtdcInvestorProdSPBMDetailField_get_InterProdMargin, (setter)PyCThostFtdcInvestorProdSPBMDetailField_set_InterProdMargin, (char *)"InterProdMargin", NULL},
    ///裸保证金 
    {(char *)"SingleMargin", (getter)PyCThostFtdcInvestorProdSPBMDetailField_get_SingleMargin, (setter)PyCThostFtdcInvestorProdSPBMDetailField_set_SingleMargin, (char *)"SingleMargin", NULL},
    ///附加保证金 
    {(char *)"AddOnMargin", (getter)PyCThostFtdcInvestorProdSPBMDetailField_get_AddOnMargin, (setter)PyCThostFtdcInvestorProdSPBMDetailField_set_AddOnMargin, (char *)"AddOnMargin", NULL},
    ///交割月保证金 
    {(char *)"DeliveryMargin", (getter)PyCThostFtdcInvestorProdSPBMDetailField_get_DeliveryMargin, (setter)PyCThostFtdcInvestorProdSPBMDetailField_set_DeliveryMargin, (char *)"DeliveryMargin", NULL},
    ///看涨期权最低风险 
    {(char *)"CallOptionMinRisk", (getter)PyCThostFtdcInvestorProdSPBMDetailField_get_CallOptionMinRisk, (setter)PyCThostFtdcInvestorProdSPBMDetailField_set_CallOptionMinRisk, (char *)"CallOptionMinRisk", NULL},
    ///看跌期权最低风险 
    {(char *)"PutOptionMinRisk", (getter)PyCThostFtdcInvestorProdSPBMDetailField_get_PutOptionMinRisk, (setter)PyCThostFtdcInvestorProdSPBMDetailField_set_PutOptionMinRisk, (char *)"PutOptionMinRisk", NULL},
    ///卖方期权最低风险 
    {(char *)"OptionMinRisk", (getter)PyCThostFtdcInvestorProdSPBMDetailField_get_OptionMinRisk, (setter)PyCThostFtdcInvestorProdSPBMDetailField_set_OptionMinRisk, (char *)"OptionMinRisk", NULL},
    ///买方期权冲抵价值 
    {(char *)"OptionValueOffset", (getter)PyCThostFtdcInvestorProdSPBMDetailField_get_OptionValueOffset, (setter)PyCThostFtdcInvestorProdSPBMDetailField_set_OptionValueOffset, (char *)"OptionValueOffset", NULL},
    ///卖方期权权利金 
    {(char *)"OptionRoyalty", (getter)PyCThostFtdcInvestorProdSPBMDetailField_get_OptionRoyalty, (setter)PyCThostFtdcInvestorProdSPBMDetailField_set_OptionRoyalty, (char *)"OptionRoyalty", NULL},
    ///价值冲抵 
    {(char *)"RealOptionValueOffset", (getter)PyCThostFtdcInvestorProdSPBMDetailField_get_RealOptionValueOffset, (setter)PyCThostFtdcInvestorProdSPBMDetailField_set_RealOptionValueOffset, (char *)"RealOptionValueOffset", NULL},
    ///保证金 
    {(char *)"Margin", (getter)PyCThostFtdcInvestorProdSPBMDetailField_get_Margin, (setter)PyCThostFtdcInvestorProdSPBMDetailField_set_Margin, (char *)"Margin", NULL},
    ///交易所保证金 
    {(char *)"ExchMargin", (getter)PyCThostFtdcInvestorProdSPBMDetailField_get_ExchMargin, (setter)PyCThostFtdcInvestorProdSPBMDetailField_set_ExchMargin, (char *)"ExchMargin", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInvestorProdSPBMDetailFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInvestorProdSPBMDetailField",	/* tp_name */
	sizeof(PyCThostFtdcInvestorProdSPBMDetailField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInvestorProdSPBMDetailField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInvestorProdSPBMDetailField_repr,   /* tp_repr */
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
	"CThostFtdcInvestorProdSPBMDetailField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInvestorProdSPBMDetailField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInvestorProdSPBMDetailField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInvestorProdSPBMDetailField_new,       /* tp_new */
};

int PyCThostFtdcInvestorProdSPBMDetailFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInvestorProdSPBMDetailField  */
	if (PyType_Ready(&PyCThostFtdcInvestorProdSPBMDetailFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInvestorProdSPBMDetailField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInvestorProdSPBMDetailFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInvestorProdSPBMDetailField", (PyObject *)&PyCThostFtdcInvestorProdSPBMDetailFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorProdSPBMDetailField to module");
        Py_DECREF(&PyCThostFtdcInvestorProdSPBMDetailFieldType);
		return -1;
    }

    return 0;
}
