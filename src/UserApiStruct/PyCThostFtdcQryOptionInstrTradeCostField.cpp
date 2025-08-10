
#include "PyCThostFtdcQryOptionInstrTradeCostField.h"

///期权交易成本查询

static PyObject *PyCThostFtdcQryOptionInstrTradeCostField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryOptionInstrTradeCostField *self = (PyCThostFtdcQryOptionInstrTradeCostField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryOptionInstrTradeCostField_init(PyCThostFtdcQryOptionInstrTradeCostField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "HedgeFlag", "InputPrice", "UnderlyingPrice", "ExchangeID", "InvestUnitID", "InstrumentID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QryOptionInstrTradeCostField_BrokerID = NULL;
    Py_ssize_t QryOptionInstrTradeCostField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *QryOptionInstrTradeCostField_InvestorID = NULL;
    Py_ssize_t QryOptionInstrTradeCostField_InvestorID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *QryOptionInstrTradeCostField_reserve1 = NULL;
    Py_ssize_t QryOptionInstrTradeCostField_reserve1_len = 0;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    char QryOptionInstrTradeCostField_HedgeFlag = 0;
            
    ///期权合约报价
    // TThostFtdcPriceType double
    double QryOptionInstrTradeCostField_InputPrice = 0.0;
        
    ///标的价格,填0则用昨结算价
    // TThostFtdcPriceType double
    double QryOptionInstrTradeCostField_UnderlyingPrice = 0.0;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *QryOptionInstrTradeCostField_ExchangeID = NULL;
    Py_ssize_t QryOptionInstrTradeCostField_ExchangeID_len = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *QryOptionInstrTradeCostField_InvestUnitID = NULL;
    Py_ssize_t QryOptionInstrTradeCostField_InvestUnitID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *QryOptionInstrTradeCostField_InstrumentID = NULL;
    Py_ssize_t QryOptionInstrTradeCostField_InstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#cddy#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#cdds#s#s#", (char **)kwlist
#endif

        , &QryOptionInstrTradeCostField_BrokerID, &QryOptionInstrTradeCostField_BrokerID_len 
        , &QryOptionInstrTradeCostField_InvestorID, &QryOptionInstrTradeCostField_InvestorID_len 
        , &QryOptionInstrTradeCostField_reserve1, &QryOptionInstrTradeCostField_reserve1_len 
        , &QryOptionInstrTradeCostField_HedgeFlag 
        , &QryOptionInstrTradeCostField_InputPrice 
        , &QryOptionInstrTradeCostField_UnderlyingPrice 
        , &QryOptionInstrTradeCostField_ExchangeID, &QryOptionInstrTradeCostField_ExchangeID_len 
        , &QryOptionInstrTradeCostField_InvestUnitID, &QryOptionInstrTradeCostField_InvestUnitID_len 
        , &QryOptionInstrTradeCostField_InstrumentID, &QryOptionInstrTradeCostField_InstrumentID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QryOptionInstrTradeCostField_BrokerID != NULL ) {
        if(QryOptionInstrTradeCostField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QryOptionInstrTradeCostField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QryOptionInstrTradeCostField_BrokerID, QryOptionInstrTradeCostField_BrokerID_len);        
        strncpy(self->data.BrokerID, QryOptionInstrTradeCostField_BrokerID, sizeof(self->data.BrokerID) );
        QryOptionInstrTradeCostField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( QryOptionInstrTradeCostField_InvestorID != NULL ) {
        if(QryOptionInstrTradeCostField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", QryOptionInstrTradeCostField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, QryOptionInstrTradeCostField_InvestorID, QryOptionInstrTradeCostField_InvestorID_len);        
        strncpy(self->data.InvestorID, QryOptionInstrTradeCostField_InvestorID, sizeof(self->data.InvestorID) );
        QryOptionInstrTradeCostField_InvestorID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( QryOptionInstrTradeCostField_reserve1 != NULL ) {
        if(QryOptionInstrTradeCostField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", QryOptionInstrTradeCostField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, QryOptionInstrTradeCostField_reserve1, QryOptionInstrTradeCostField_reserve1_len);        
        strncpy(self->data.reserve1, QryOptionInstrTradeCostField_reserve1, sizeof(self->data.reserve1) );
        QryOptionInstrTradeCostField_reserve1 = NULL;
    }
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    self->data.HedgeFlag = QryOptionInstrTradeCostField_HedgeFlag;
            
    ///期权合约报价
    // TThostFtdcPriceType double
    self->data.InputPrice = QryOptionInstrTradeCostField_InputPrice;
        
    ///标的价格,填0则用昨结算价
    // TThostFtdcPriceType double
    self->data.UnderlyingPrice = QryOptionInstrTradeCostField_UnderlyingPrice;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( QryOptionInstrTradeCostField_ExchangeID != NULL ) {
        if(QryOptionInstrTradeCostField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", QryOptionInstrTradeCostField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, QryOptionInstrTradeCostField_ExchangeID, QryOptionInstrTradeCostField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, QryOptionInstrTradeCostField_ExchangeID, sizeof(self->data.ExchangeID) );
        QryOptionInstrTradeCostField_ExchangeID = NULL;
    }
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( QryOptionInstrTradeCostField_InvestUnitID != NULL ) {
        if(QryOptionInstrTradeCostField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", QryOptionInstrTradeCostField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, QryOptionInstrTradeCostField_InvestUnitID, QryOptionInstrTradeCostField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, QryOptionInstrTradeCostField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        QryOptionInstrTradeCostField_InvestUnitID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( QryOptionInstrTradeCostField_InstrumentID != NULL ) {
        if(QryOptionInstrTradeCostField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", QryOptionInstrTradeCostField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, QryOptionInstrTradeCostField_InstrumentID, QryOptionInstrTradeCostField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, QryOptionInstrTradeCostField_InstrumentID, sizeof(self->data.InstrumentID) );
        QryOptionInstrTradeCostField_InstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryOptionInstrTradeCostField_dealloc(PyCThostFtdcQryOptionInstrTradeCostField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryOptionInstrTradeCostField_repr(PyCThostFtdcQryOptionInstrTradeCostField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:c,s:d,s:d,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:c,s:d,s:d,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"HedgeFlag", self->data.HedgeFlag 
        ,"InputPrice", self->data.InputPrice 
        ,"UnderlyingPrice", self->data.UnderlyingPrice 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"InvestUnitID", self->data.InvestUnitID//, (Py_ssize_t)sizeof(self->data.InvestUnitID) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryOptionInstrTradeCostField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQryOptionInstrTradeCostField_get_BrokerID(PyCThostFtdcQryOptionInstrTradeCostField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQryOptionInstrTradeCostField_set_BrokerID(PyCThostFtdcQryOptionInstrTradeCostField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryOptionInstrTradeCostField_get_InvestorID(PyCThostFtdcQryOptionInstrTradeCostField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcQryOptionInstrTradeCostField_set_InvestorID(PyCThostFtdcQryOptionInstrTradeCostField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryOptionInstrTradeCostField_get_reserve1(PyCThostFtdcQryOptionInstrTradeCostField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcQryOptionInstrTradeCostField_set_reserve1(PyCThostFtdcQryOptionInstrTradeCostField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryOptionInstrTradeCostField_get_HedgeFlag(PyCThostFtdcQryOptionInstrTradeCostField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

///投机套保标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcQryOptionInstrTradeCostField_set_HedgeFlag(PyCThostFtdcQryOptionInstrTradeCostField *self, PyObject* val, void *closure) {
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
            
///期权合约报价
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcQryOptionInstrTradeCostField_get_InputPrice(PyCThostFtdcQryOptionInstrTradeCostField *self, void *closure) {
    return PyFloat_FromDouble(self->data.InputPrice);
}

///期权合约报价
// TThostFtdcPriceType double
static int PyCThostFtdcQryOptionInstrTradeCostField_set_InputPrice(PyCThostFtdcQryOptionInstrTradeCostField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InputPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.InputPrice = buf;
    return 0;
}
        
///标的价格,填0则用昨结算价
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcQryOptionInstrTradeCostField_get_UnderlyingPrice(PyCThostFtdcQryOptionInstrTradeCostField *self, void *closure) {
    return PyFloat_FromDouble(self->data.UnderlyingPrice);
}

///标的价格,填0则用昨结算价
// TThostFtdcPriceType double
static int PyCThostFtdcQryOptionInstrTradeCostField_set_UnderlyingPrice(PyCThostFtdcQryOptionInstrTradeCostField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UnderlyingPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.UnderlyingPrice = buf;
    return 0;
}
        
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcQryOptionInstrTradeCostField_get_ExchangeID(PyCThostFtdcQryOptionInstrTradeCostField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcQryOptionInstrTradeCostField_set_ExchangeID(PyCThostFtdcQryOptionInstrTradeCostField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryOptionInstrTradeCostField_get_InvestUnitID(PyCThostFtdcQryOptionInstrTradeCostField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcQryOptionInstrTradeCostField_set_InvestUnitID(PyCThostFtdcQryOptionInstrTradeCostField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryOptionInstrTradeCostField_get_InstrumentID(PyCThostFtdcQryOptionInstrTradeCostField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcQryOptionInstrTradeCostField_set_InstrumentID(PyCThostFtdcQryOptionInstrTradeCostField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQryOptionInstrTradeCostField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQryOptionInstrTradeCostField_get_BrokerID, (setter)PyCThostFtdcQryOptionInstrTradeCostField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcQryOptionInstrTradeCostField_get_InvestorID, (setter)PyCThostFtdcQryOptionInstrTradeCostField_set_InvestorID, (char *)"InvestorID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcQryOptionInstrTradeCostField_get_reserve1, (setter)PyCThostFtdcQryOptionInstrTradeCostField_set_reserve1, (char *)"reserve1", NULL},
    ///投机套保标志 
    {(char *)"HedgeFlag", (getter)PyCThostFtdcQryOptionInstrTradeCostField_get_HedgeFlag, (setter)PyCThostFtdcQryOptionInstrTradeCostField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
    ///期权合约报价 
    {(char *)"InputPrice", (getter)PyCThostFtdcQryOptionInstrTradeCostField_get_InputPrice, (setter)PyCThostFtdcQryOptionInstrTradeCostField_set_InputPrice, (char *)"InputPrice", NULL},
    ///标的价格,填0则用昨结算价 
    {(char *)"UnderlyingPrice", (getter)PyCThostFtdcQryOptionInstrTradeCostField_get_UnderlyingPrice, (setter)PyCThostFtdcQryOptionInstrTradeCostField_set_UnderlyingPrice, (char *)"UnderlyingPrice", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcQryOptionInstrTradeCostField_get_ExchangeID, (setter)PyCThostFtdcQryOptionInstrTradeCostField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcQryOptionInstrTradeCostField_get_InvestUnitID, (setter)PyCThostFtdcQryOptionInstrTradeCostField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcQryOptionInstrTradeCostField_get_InstrumentID, (setter)PyCThostFtdcQryOptionInstrTradeCostField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryOptionInstrTradeCostFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryOptionInstrTradeCostField",	/* tp_name */
	sizeof(PyCThostFtdcQryOptionInstrTradeCostField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryOptionInstrTradeCostField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryOptionInstrTradeCostField_repr,   /* tp_repr */
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
	"CThostFtdcQryOptionInstrTradeCostField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryOptionInstrTradeCostField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryOptionInstrTradeCostField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryOptionInstrTradeCostField_new,       /* tp_new */
};

int PyCThostFtdcQryOptionInstrTradeCostFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryOptionInstrTradeCostField  */
	if (PyType_Ready(&PyCThostFtdcQryOptionInstrTradeCostFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryOptionInstrTradeCostField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryOptionInstrTradeCostFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryOptionInstrTradeCostField", (PyObject *)&PyCThostFtdcQryOptionInstrTradeCostFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryOptionInstrTradeCostField to module");
        Py_DECREF(&PyCThostFtdcQryOptionInstrTradeCostFieldType);
		return -1;
    }

    return 0;
}
