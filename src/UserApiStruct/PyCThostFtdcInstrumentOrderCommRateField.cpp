
#include "PyCThostFtdcInstrumentOrderCommRateField.h"

///当前报单手续费的详细内容

static PyObject *PyCThostFtdcInstrumentOrderCommRateField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInstrumentOrderCommRateField *self = (PyCThostFtdcInstrumentOrderCommRateField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcInstrumentOrderCommRateField_init(PyCThostFtdcInstrumentOrderCommRateField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "InvestorRange", "BrokerID", "InvestorID", "HedgeFlag", "OrderCommByVolume", "OrderActionCommByVolume", "ExchangeID", "InvestUnitID", "InstrumentID", "OrderCommByTrade", "OrderActionCommByTrade",  NULL};


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *InstrumentOrderCommRateField_reserve1 = NULL;
    Py_ssize_t InstrumentOrderCommRateField_reserve1_len = 0;
            
    ///投资者范围
    // TThostFtdcInvestorRangeType char
    char InstrumentOrderCommRateField_InvestorRange = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *InstrumentOrderCommRateField_BrokerID = NULL;
    Py_ssize_t InstrumentOrderCommRateField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *InstrumentOrderCommRateField_InvestorID = NULL;
    Py_ssize_t InstrumentOrderCommRateField_InvestorID_len = 0;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    char InstrumentOrderCommRateField_HedgeFlag = 0;
            
    ///报单手续费
    // TThostFtdcRatioType double
    double InstrumentOrderCommRateField_OrderCommByVolume = 0.0;
        
    ///撤单手续费
    // TThostFtdcRatioType double
    double InstrumentOrderCommRateField_OrderActionCommByVolume = 0.0;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *InstrumentOrderCommRateField_ExchangeID = NULL;
    Py_ssize_t InstrumentOrderCommRateField_ExchangeID_len = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *InstrumentOrderCommRateField_InvestUnitID = NULL;
    Py_ssize_t InstrumentOrderCommRateField_InvestUnitID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *InstrumentOrderCommRateField_InstrumentID = NULL;
    Py_ssize_t InstrumentOrderCommRateField_InstrumentID_len = 0;
            
    ///报单手续费
    // TThostFtdcRatioType double
    double InstrumentOrderCommRateField_OrderCommByTrade = 0.0;
        
    ///撤单手续费
    // TThostFtdcRatioType double
    double InstrumentOrderCommRateField_OrderActionCommByTrade = 0.0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#cddy#y#y#dd", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#s#cdds#s#s#dd", (char **)kwlist
#endif

        , &InstrumentOrderCommRateField_reserve1, &InstrumentOrderCommRateField_reserve1_len 
        , &InstrumentOrderCommRateField_InvestorRange 
        , &InstrumentOrderCommRateField_BrokerID, &InstrumentOrderCommRateField_BrokerID_len 
        , &InstrumentOrderCommRateField_InvestorID, &InstrumentOrderCommRateField_InvestorID_len 
        , &InstrumentOrderCommRateField_HedgeFlag 
        , &InstrumentOrderCommRateField_OrderCommByVolume 
        , &InstrumentOrderCommRateField_OrderActionCommByVolume 
        , &InstrumentOrderCommRateField_ExchangeID, &InstrumentOrderCommRateField_ExchangeID_len 
        , &InstrumentOrderCommRateField_InvestUnitID, &InstrumentOrderCommRateField_InvestUnitID_len 
        , &InstrumentOrderCommRateField_InstrumentID, &InstrumentOrderCommRateField_InstrumentID_len 
        , &InstrumentOrderCommRateField_OrderCommByTrade 
        , &InstrumentOrderCommRateField_OrderActionCommByTrade 


    )) {
        return -1;
    }


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( InstrumentOrderCommRateField_reserve1 != NULL ) {
        if(InstrumentOrderCommRateField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", InstrumentOrderCommRateField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, InstrumentOrderCommRateField_reserve1, InstrumentOrderCommRateField_reserve1_len);        
        strncpy(self->data.reserve1, InstrumentOrderCommRateField_reserve1, sizeof(self->data.reserve1) );
        InstrumentOrderCommRateField_reserve1 = NULL;
    }
            
    ///投资者范围
    // TThostFtdcInvestorRangeType char
    self->data.InvestorRange = InstrumentOrderCommRateField_InvestorRange;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( InstrumentOrderCommRateField_BrokerID != NULL ) {
        if(InstrumentOrderCommRateField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", InstrumentOrderCommRateField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, InstrumentOrderCommRateField_BrokerID, InstrumentOrderCommRateField_BrokerID_len);        
        strncpy(self->data.BrokerID, InstrumentOrderCommRateField_BrokerID, sizeof(self->data.BrokerID) );
        InstrumentOrderCommRateField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( InstrumentOrderCommRateField_InvestorID != NULL ) {
        if(InstrumentOrderCommRateField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", InstrumentOrderCommRateField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, InstrumentOrderCommRateField_InvestorID, InstrumentOrderCommRateField_InvestorID_len);        
        strncpy(self->data.InvestorID, InstrumentOrderCommRateField_InvestorID, sizeof(self->data.InvestorID) );
        InstrumentOrderCommRateField_InvestorID = NULL;
    }
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    self->data.HedgeFlag = InstrumentOrderCommRateField_HedgeFlag;
            
    ///报单手续费
    // TThostFtdcRatioType double
    self->data.OrderCommByVolume = InstrumentOrderCommRateField_OrderCommByVolume;
        
    ///撤单手续费
    // TThostFtdcRatioType double
    self->data.OrderActionCommByVolume = InstrumentOrderCommRateField_OrderActionCommByVolume;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( InstrumentOrderCommRateField_ExchangeID != NULL ) {
        if(InstrumentOrderCommRateField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", InstrumentOrderCommRateField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, InstrumentOrderCommRateField_ExchangeID, InstrumentOrderCommRateField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, InstrumentOrderCommRateField_ExchangeID, sizeof(self->data.ExchangeID) );
        InstrumentOrderCommRateField_ExchangeID = NULL;
    }
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( InstrumentOrderCommRateField_InvestUnitID != NULL ) {
        if(InstrumentOrderCommRateField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", InstrumentOrderCommRateField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, InstrumentOrderCommRateField_InvestUnitID, InstrumentOrderCommRateField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, InstrumentOrderCommRateField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        InstrumentOrderCommRateField_InvestUnitID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( InstrumentOrderCommRateField_InstrumentID != NULL ) {
        if(InstrumentOrderCommRateField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", InstrumentOrderCommRateField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, InstrumentOrderCommRateField_InstrumentID, InstrumentOrderCommRateField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, InstrumentOrderCommRateField_InstrumentID, sizeof(self->data.InstrumentID) );
        InstrumentOrderCommRateField_InstrumentID = NULL;
    }
            
    ///报单手续费
    // TThostFtdcRatioType double
    self->data.OrderCommByTrade = InstrumentOrderCommRateField_OrderCommByTrade;
        
    ///撤单手续费
    // TThostFtdcRatioType double
    self->data.OrderActionCommByTrade = InstrumentOrderCommRateField_OrderActionCommByTrade;
        

    return 0;
}

static void PyCThostFtdcInstrumentOrderCommRateField_dealloc(PyCThostFtdcInstrumentOrderCommRateField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInstrumentOrderCommRateField_repr(PyCThostFtdcInstrumentOrderCommRateField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:y,s:y,s:c,s:d,s:d,s:y,s:y,s:y,s:d,s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:s,s:s,s:c,s:d,s:d,s:s,s:s,s:s,s:d,s:d}"
#endif

        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"InvestorRange", self->data.InvestorRange 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"HedgeFlag", self->data.HedgeFlag 
        ,"OrderCommByVolume", self->data.OrderCommByVolume 
        ,"OrderActionCommByVolume", self->data.OrderActionCommByVolume 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"InvestUnitID", self->data.InvestUnitID//, (Py_ssize_t)sizeof(self->data.InvestUnitID) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"OrderCommByTrade", self->data.OrderCommByTrade 
        ,"OrderActionCommByTrade", self->data.OrderActionCommByTrade 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInstrumentOrderCommRateField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcInstrumentOrderCommRateField_get_reserve1(PyCThostFtdcInstrumentOrderCommRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcInstrumentOrderCommRateField_set_reserve1(PyCThostFtdcInstrumentOrderCommRateField *self, PyObject* val, void *closure) {
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
            
///投资者范围
// TThostFtdcInvestorRangeType char
static PyObject *PyCThostFtdcInstrumentOrderCommRateField_get_InvestorRange(PyCThostFtdcInstrumentOrderCommRateField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.InvestorRange), 1);
}

///投资者范围
// TThostFtdcInvestorRangeType char
static int PyCThostFtdcInstrumentOrderCommRateField_set_InvestorRange(PyCThostFtdcInstrumentOrderCommRateField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InvestorRange Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InvestorRange)) {
        PyErr_SetString(PyExc_ValueError, "InvestorRange must be equal 1 bytes");
        return -1;
    }
    self->data.InvestorRange = *buf;
    return 0;
}
            
///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcInstrumentOrderCommRateField_get_BrokerID(PyCThostFtdcInstrumentOrderCommRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcInstrumentOrderCommRateField_set_BrokerID(PyCThostFtdcInstrumentOrderCommRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInstrumentOrderCommRateField_get_InvestorID(PyCThostFtdcInstrumentOrderCommRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcInstrumentOrderCommRateField_set_InvestorID(PyCThostFtdcInstrumentOrderCommRateField *self, PyObject* val, void *closure) {
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
            
///投机套保标志
// TThostFtdcHedgeFlagType char
static PyObject *PyCThostFtdcInstrumentOrderCommRateField_get_HedgeFlag(PyCThostFtdcInstrumentOrderCommRateField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

///投机套保标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcInstrumentOrderCommRateField_set_HedgeFlag(PyCThostFtdcInstrumentOrderCommRateField *self, PyObject* val, void *closure) {
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
            
///报单手续费
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcInstrumentOrderCommRateField_get_OrderCommByVolume(PyCThostFtdcInstrumentOrderCommRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.OrderCommByVolume);
}

///报单手续费
// TThostFtdcRatioType double
static int PyCThostFtdcInstrumentOrderCommRateField_set_OrderCommByVolume(PyCThostFtdcInstrumentOrderCommRateField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderCommByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OrderCommByVolume = buf;
    return 0;
}
        
///撤单手续费
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcInstrumentOrderCommRateField_get_OrderActionCommByVolume(PyCThostFtdcInstrumentOrderCommRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.OrderActionCommByVolume);
}

///撤单手续费
// TThostFtdcRatioType double
static int PyCThostFtdcInstrumentOrderCommRateField_set_OrderActionCommByVolume(PyCThostFtdcInstrumentOrderCommRateField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderActionCommByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OrderActionCommByVolume = buf;
    return 0;
}
        
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcInstrumentOrderCommRateField_get_ExchangeID(PyCThostFtdcInstrumentOrderCommRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcInstrumentOrderCommRateField_set_ExchangeID(PyCThostFtdcInstrumentOrderCommRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInstrumentOrderCommRateField_get_InvestUnitID(PyCThostFtdcInstrumentOrderCommRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcInstrumentOrderCommRateField_set_InvestUnitID(PyCThostFtdcInstrumentOrderCommRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInstrumentOrderCommRateField_get_InstrumentID(PyCThostFtdcInstrumentOrderCommRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcInstrumentOrderCommRateField_set_InstrumentID(PyCThostFtdcInstrumentOrderCommRateField *self, PyObject* val, void *closure) {
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
            
///报单手续费
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcInstrumentOrderCommRateField_get_OrderCommByTrade(PyCThostFtdcInstrumentOrderCommRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.OrderCommByTrade);
}

///报单手续费
// TThostFtdcRatioType double
static int PyCThostFtdcInstrumentOrderCommRateField_set_OrderCommByTrade(PyCThostFtdcInstrumentOrderCommRateField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderCommByTrade Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OrderCommByTrade = buf;
    return 0;
}
        
///撤单手续费
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcInstrumentOrderCommRateField_get_OrderActionCommByTrade(PyCThostFtdcInstrumentOrderCommRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.OrderActionCommByTrade);
}

///撤单手续费
// TThostFtdcRatioType double
static int PyCThostFtdcInstrumentOrderCommRateField_set_OrderActionCommByTrade(PyCThostFtdcInstrumentOrderCommRateField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderActionCommByTrade Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OrderActionCommByTrade = buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcInstrumentOrderCommRateField_getset[] = {
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcInstrumentOrderCommRateField_get_reserve1, (setter)PyCThostFtdcInstrumentOrderCommRateField_set_reserve1, (char *)"reserve1", NULL},
    ///投资者范围 
    {(char *)"InvestorRange", (getter)PyCThostFtdcInstrumentOrderCommRateField_get_InvestorRange, (setter)PyCThostFtdcInstrumentOrderCommRateField_set_InvestorRange, (char *)"InvestorRange", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcInstrumentOrderCommRateField_get_BrokerID, (setter)PyCThostFtdcInstrumentOrderCommRateField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcInstrumentOrderCommRateField_get_InvestorID, (setter)PyCThostFtdcInstrumentOrderCommRateField_set_InvestorID, (char *)"InvestorID", NULL},
    ///投机套保标志 
    {(char *)"HedgeFlag", (getter)PyCThostFtdcInstrumentOrderCommRateField_get_HedgeFlag, (setter)PyCThostFtdcInstrumentOrderCommRateField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
    ///报单手续费 
    {(char *)"OrderCommByVolume", (getter)PyCThostFtdcInstrumentOrderCommRateField_get_OrderCommByVolume, (setter)PyCThostFtdcInstrumentOrderCommRateField_set_OrderCommByVolume, (char *)"OrderCommByVolume", NULL},
    ///撤单手续费 
    {(char *)"OrderActionCommByVolume", (getter)PyCThostFtdcInstrumentOrderCommRateField_get_OrderActionCommByVolume, (setter)PyCThostFtdcInstrumentOrderCommRateField_set_OrderActionCommByVolume, (char *)"OrderActionCommByVolume", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcInstrumentOrderCommRateField_get_ExchangeID, (setter)PyCThostFtdcInstrumentOrderCommRateField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcInstrumentOrderCommRateField_get_InvestUnitID, (setter)PyCThostFtdcInstrumentOrderCommRateField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcInstrumentOrderCommRateField_get_InstrumentID, (setter)PyCThostFtdcInstrumentOrderCommRateField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///报单手续费 
    {(char *)"OrderCommByTrade", (getter)PyCThostFtdcInstrumentOrderCommRateField_get_OrderCommByTrade, (setter)PyCThostFtdcInstrumentOrderCommRateField_set_OrderCommByTrade, (char *)"OrderCommByTrade", NULL},
    ///撤单手续费 
    {(char *)"OrderActionCommByTrade", (getter)PyCThostFtdcInstrumentOrderCommRateField_get_OrderActionCommByTrade, (setter)PyCThostFtdcInstrumentOrderCommRateField_set_OrderActionCommByTrade, (char *)"OrderActionCommByTrade", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInstrumentOrderCommRateFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInstrumentOrderCommRateField",	/* tp_name */
	sizeof(PyCThostFtdcInstrumentOrderCommRateField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInstrumentOrderCommRateField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInstrumentOrderCommRateField_repr,   /* tp_repr */
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
	"CThostFtdcInstrumentOrderCommRateField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInstrumentOrderCommRateField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInstrumentOrderCommRateField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInstrumentOrderCommRateField_new,       /* tp_new */
};

int PyCThostFtdcInstrumentOrderCommRateFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInstrumentOrderCommRateField  */
	if (PyType_Ready(&PyCThostFtdcInstrumentOrderCommRateFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInstrumentOrderCommRateField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInstrumentOrderCommRateFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInstrumentOrderCommRateField", (PyObject *)&PyCThostFtdcInstrumentOrderCommRateFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInstrumentOrderCommRateField to module");
        Py_DECREF(&PyCThostFtdcInstrumentOrderCommRateFieldType);
		return -1;
    }

    return 0;
}
