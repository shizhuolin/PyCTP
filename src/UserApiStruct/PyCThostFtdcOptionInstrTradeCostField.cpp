
#include "PyCThostFtdcOptionInstrTradeCostField.h"

///期权交易成本

static PyObject *PyCThostFtdcOptionInstrTradeCostField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcOptionInstrTradeCostField *self = (PyCThostFtdcOptionInstrTradeCostField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcOptionInstrTradeCostField_init(PyCThostFtdcOptionInstrTradeCostField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "HedgeFlag", "FixedMargin", "MiniMargin", "Royalty", "ExchFixedMargin", "ExchMiniMargin", "ExchangeID", "InvestUnitID", "InstrumentID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *OptionInstrTradeCostField_BrokerID = NULL;
    Py_ssize_t OptionInstrTradeCostField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *OptionInstrTradeCostField_InvestorID = NULL;
    Py_ssize_t OptionInstrTradeCostField_InvestorID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *OptionInstrTradeCostField_reserve1 = NULL;
    Py_ssize_t OptionInstrTradeCostField_reserve1_len = 0;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    char OptionInstrTradeCostField_HedgeFlag = 0;
            
    ///期权合约保证金不变部分
    // TThostFtdcMoneyType double
    double OptionInstrTradeCostField_FixedMargin = 0.0;
        
    ///期权合约最小保证金
    // TThostFtdcMoneyType double
    double OptionInstrTradeCostField_MiniMargin = 0.0;
        
    ///期权合约权利金
    // TThostFtdcMoneyType double
    double OptionInstrTradeCostField_Royalty = 0.0;
        
    ///交易所期权合约保证金不变部分
    // TThostFtdcMoneyType double
    double OptionInstrTradeCostField_ExchFixedMargin = 0.0;
        
    ///交易所期权合约最小保证金
    // TThostFtdcMoneyType double
    double OptionInstrTradeCostField_ExchMiniMargin = 0.0;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *OptionInstrTradeCostField_ExchangeID = NULL;
    Py_ssize_t OptionInstrTradeCostField_ExchangeID_len = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *OptionInstrTradeCostField_InvestUnitID = NULL;
    Py_ssize_t OptionInstrTradeCostField_InvestUnitID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *OptionInstrTradeCostField_InstrumentID = NULL;
    Py_ssize_t OptionInstrTradeCostField_InstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#cdddddy#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#cddddds#s#s#", (char **)kwlist
#endif

        , &OptionInstrTradeCostField_BrokerID, &OptionInstrTradeCostField_BrokerID_len 
        , &OptionInstrTradeCostField_InvestorID, &OptionInstrTradeCostField_InvestorID_len 
        , &OptionInstrTradeCostField_reserve1, &OptionInstrTradeCostField_reserve1_len 
        , &OptionInstrTradeCostField_HedgeFlag 
        , &OptionInstrTradeCostField_FixedMargin 
        , &OptionInstrTradeCostField_MiniMargin 
        , &OptionInstrTradeCostField_Royalty 
        , &OptionInstrTradeCostField_ExchFixedMargin 
        , &OptionInstrTradeCostField_ExchMiniMargin 
        , &OptionInstrTradeCostField_ExchangeID, &OptionInstrTradeCostField_ExchangeID_len 
        , &OptionInstrTradeCostField_InvestUnitID, &OptionInstrTradeCostField_InvestUnitID_len 
        , &OptionInstrTradeCostField_InstrumentID, &OptionInstrTradeCostField_InstrumentID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( OptionInstrTradeCostField_BrokerID != NULL ) {
        if(OptionInstrTradeCostField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", OptionInstrTradeCostField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, OptionInstrTradeCostField_BrokerID, OptionInstrTradeCostField_BrokerID_len);        
        strncpy(self->data.BrokerID, OptionInstrTradeCostField_BrokerID, sizeof(self->data.BrokerID) );
        OptionInstrTradeCostField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( OptionInstrTradeCostField_InvestorID != NULL ) {
        if(OptionInstrTradeCostField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", OptionInstrTradeCostField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, OptionInstrTradeCostField_InvestorID, OptionInstrTradeCostField_InvestorID_len);        
        strncpy(self->data.InvestorID, OptionInstrTradeCostField_InvestorID, sizeof(self->data.InvestorID) );
        OptionInstrTradeCostField_InvestorID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( OptionInstrTradeCostField_reserve1 != NULL ) {
        if(OptionInstrTradeCostField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", OptionInstrTradeCostField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, OptionInstrTradeCostField_reserve1, OptionInstrTradeCostField_reserve1_len);        
        strncpy(self->data.reserve1, OptionInstrTradeCostField_reserve1, sizeof(self->data.reserve1) );
        OptionInstrTradeCostField_reserve1 = NULL;
    }
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    self->data.HedgeFlag = OptionInstrTradeCostField_HedgeFlag;
            
    ///期权合约保证金不变部分
    // TThostFtdcMoneyType double
    self->data.FixedMargin = OptionInstrTradeCostField_FixedMargin;
        
    ///期权合约最小保证金
    // TThostFtdcMoneyType double
    self->data.MiniMargin = OptionInstrTradeCostField_MiniMargin;
        
    ///期权合约权利金
    // TThostFtdcMoneyType double
    self->data.Royalty = OptionInstrTradeCostField_Royalty;
        
    ///交易所期权合约保证金不变部分
    // TThostFtdcMoneyType double
    self->data.ExchFixedMargin = OptionInstrTradeCostField_ExchFixedMargin;
        
    ///交易所期权合约最小保证金
    // TThostFtdcMoneyType double
    self->data.ExchMiniMargin = OptionInstrTradeCostField_ExchMiniMargin;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( OptionInstrTradeCostField_ExchangeID != NULL ) {
        if(OptionInstrTradeCostField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", OptionInstrTradeCostField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, OptionInstrTradeCostField_ExchangeID, OptionInstrTradeCostField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, OptionInstrTradeCostField_ExchangeID, sizeof(self->data.ExchangeID) );
        OptionInstrTradeCostField_ExchangeID = NULL;
    }
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( OptionInstrTradeCostField_InvestUnitID != NULL ) {
        if(OptionInstrTradeCostField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", OptionInstrTradeCostField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, OptionInstrTradeCostField_InvestUnitID, OptionInstrTradeCostField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, OptionInstrTradeCostField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        OptionInstrTradeCostField_InvestUnitID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( OptionInstrTradeCostField_InstrumentID != NULL ) {
        if(OptionInstrTradeCostField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", OptionInstrTradeCostField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, OptionInstrTradeCostField_InstrumentID, OptionInstrTradeCostField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, OptionInstrTradeCostField_InstrumentID, sizeof(self->data.InstrumentID) );
        OptionInstrTradeCostField_InstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcOptionInstrTradeCostField_dealloc(PyCThostFtdcOptionInstrTradeCostField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcOptionInstrTradeCostField_repr(PyCThostFtdcOptionInstrTradeCostField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:c,s:d,s:d,s:d,s:d,s:d,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:c,s:d,s:d,s:d,s:d,s:d,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"HedgeFlag", self->data.HedgeFlag 
        ,"FixedMargin", self->data.FixedMargin 
        ,"MiniMargin", self->data.MiniMargin 
        ,"Royalty", self->data.Royalty 
        ,"ExchFixedMargin", self->data.ExchFixedMargin 
        ,"ExchMiniMargin", self->data.ExchMiniMargin 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"InvestUnitID", self->data.InvestUnitID//, (Py_ssize_t)sizeof(self->data.InvestUnitID) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcOptionInstrTradeCostField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcOptionInstrTradeCostField_get_BrokerID(PyCThostFtdcOptionInstrTradeCostField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcOptionInstrTradeCostField_set_BrokerID(PyCThostFtdcOptionInstrTradeCostField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOptionInstrTradeCostField_get_InvestorID(PyCThostFtdcOptionInstrTradeCostField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcOptionInstrTradeCostField_set_InvestorID(PyCThostFtdcOptionInstrTradeCostField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOptionInstrTradeCostField_get_reserve1(PyCThostFtdcOptionInstrTradeCostField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcOptionInstrTradeCostField_set_reserve1(PyCThostFtdcOptionInstrTradeCostField *self, PyObject* val, void *closure) {
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
            
///投机套保标志
// TThostFtdcHedgeFlagType char
static PyObject *PyCThostFtdcOptionInstrTradeCostField_get_HedgeFlag(PyCThostFtdcOptionInstrTradeCostField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

///投机套保标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcOptionInstrTradeCostField_set_HedgeFlag(PyCThostFtdcOptionInstrTradeCostField *self, PyObject* val, void *closure) {
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
            
///期权合约保证金不变部分
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcOptionInstrTradeCostField_get_FixedMargin(PyCThostFtdcOptionInstrTradeCostField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FixedMargin);
}

///期权合约保证金不变部分
// TThostFtdcMoneyType double
static int PyCThostFtdcOptionInstrTradeCostField_set_FixedMargin(PyCThostFtdcOptionInstrTradeCostField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FixedMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.FixedMargin = buf;
    return 0;
}
        
///期权合约最小保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcOptionInstrTradeCostField_get_MiniMargin(PyCThostFtdcOptionInstrTradeCostField *self, void *closure) {
    return PyFloat_FromDouble(self->data.MiniMargin);
}

///期权合约最小保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcOptionInstrTradeCostField_set_MiniMargin(PyCThostFtdcOptionInstrTradeCostField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MiniMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.MiniMargin = buf;
    return 0;
}
        
///期权合约权利金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcOptionInstrTradeCostField_get_Royalty(PyCThostFtdcOptionInstrTradeCostField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Royalty);
}

///期权合约权利金
// TThostFtdcMoneyType double
static int PyCThostFtdcOptionInstrTradeCostField_set_Royalty(PyCThostFtdcOptionInstrTradeCostField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Royalty Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Royalty = buf;
    return 0;
}
        
///交易所期权合约保证金不变部分
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcOptionInstrTradeCostField_get_ExchFixedMargin(PyCThostFtdcOptionInstrTradeCostField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ExchFixedMargin);
}

///交易所期权合约保证金不变部分
// TThostFtdcMoneyType double
static int PyCThostFtdcOptionInstrTradeCostField_set_ExchFixedMargin(PyCThostFtdcOptionInstrTradeCostField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchFixedMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ExchFixedMargin = buf;
    return 0;
}
        
///交易所期权合约最小保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcOptionInstrTradeCostField_get_ExchMiniMargin(PyCThostFtdcOptionInstrTradeCostField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ExchMiniMargin);
}

///交易所期权合约最小保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcOptionInstrTradeCostField_set_ExchMiniMargin(PyCThostFtdcOptionInstrTradeCostField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchMiniMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ExchMiniMargin = buf;
    return 0;
}
        
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcOptionInstrTradeCostField_get_ExchangeID(PyCThostFtdcOptionInstrTradeCostField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcOptionInstrTradeCostField_set_ExchangeID(PyCThostFtdcOptionInstrTradeCostField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOptionInstrTradeCostField_get_InvestUnitID(PyCThostFtdcOptionInstrTradeCostField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcOptionInstrTradeCostField_set_InvestUnitID(PyCThostFtdcOptionInstrTradeCostField *self, PyObject* val, void *closure) {
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
            
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcOptionInstrTradeCostField_get_InstrumentID(PyCThostFtdcOptionInstrTradeCostField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcOptionInstrTradeCostField_set_InstrumentID(PyCThostFtdcOptionInstrTradeCostField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcOptionInstrTradeCostField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcOptionInstrTradeCostField_get_BrokerID, (setter)PyCThostFtdcOptionInstrTradeCostField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcOptionInstrTradeCostField_get_InvestorID, (setter)PyCThostFtdcOptionInstrTradeCostField_set_InvestorID, (char *)"InvestorID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcOptionInstrTradeCostField_get_reserve1, (setter)PyCThostFtdcOptionInstrTradeCostField_set_reserve1, (char *)"reserve1", NULL},
    ///投机套保标志 
    {(char *)"HedgeFlag", (getter)PyCThostFtdcOptionInstrTradeCostField_get_HedgeFlag, (setter)PyCThostFtdcOptionInstrTradeCostField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
    ///期权合约保证金不变部分 
    {(char *)"FixedMargin", (getter)PyCThostFtdcOptionInstrTradeCostField_get_FixedMargin, (setter)PyCThostFtdcOptionInstrTradeCostField_set_FixedMargin, (char *)"FixedMargin", NULL},
    ///期权合约最小保证金 
    {(char *)"MiniMargin", (getter)PyCThostFtdcOptionInstrTradeCostField_get_MiniMargin, (setter)PyCThostFtdcOptionInstrTradeCostField_set_MiniMargin, (char *)"MiniMargin", NULL},
    ///期权合约权利金 
    {(char *)"Royalty", (getter)PyCThostFtdcOptionInstrTradeCostField_get_Royalty, (setter)PyCThostFtdcOptionInstrTradeCostField_set_Royalty, (char *)"Royalty", NULL},
    ///交易所期权合约保证金不变部分 
    {(char *)"ExchFixedMargin", (getter)PyCThostFtdcOptionInstrTradeCostField_get_ExchFixedMargin, (setter)PyCThostFtdcOptionInstrTradeCostField_set_ExchFixedMargin, (char *)"ExchFixedMargin", NULL},
    ///交易所期权合约最小保证金 
    {(char *)"ExchMiniMargin", (getter)PyCThostFtdcOptionInstrTradeCostField_get_ExchMiniMargin, (setter)PyCThostFtdcOptionInstrTradeCostField_set_ExchMiniMargin, (char *)"ExchMiniMargin", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcOptionInstrTradeCostField_get_ExchangeID, (setter)PyCThostFtdcOptionInstrTradeCostField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcOptionInstrTradeCostField_get_InvestUnitID, (setter)PyCThostFtdcOptionInstrTradeCostField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcOptionInstrTradeCostField_get_InstrumentID, (setter)PyCThostFtdcOptionInstrTradeCostField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcOptionInstrTradeCostFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcOptionInstrTradeCostField",	/* tp_name */
	sizeof(PyCThostFtdcOptionInstrTradeCostField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcOptionInstrTradeCostField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcOptionInstrTradeCostField_repr,   /* tp_repr */
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
	"CThostFtdcOptionInstrTradeCostField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcOptionInstrTradeCostField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcOptionInstrTradeCostField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcOptionInstrTradeCostField_new,       /* tp_new */
};

int PyCThostFtdcOptionInstrTradeCostFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcOptionInstrTradeCostField  */
	if (PyType_Ready(&PyCThostFtdcOptionInstrTradeCostFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcOptionInstrTradeCostField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcOptionInstrTradeCostFieldType);
    if( PyModule_AddObject(module, "CThostFtdcOptionInstrTradeCostField", (PyObject *)&PyCThostFtdcOptionInstrTradeCostFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcOptionInstrTradeCostField to module");
        Py_DECREF(&PyCThostFtdcOptionInstrTradeCostFieldType);
		return -1;
    }

    return 0;
}
