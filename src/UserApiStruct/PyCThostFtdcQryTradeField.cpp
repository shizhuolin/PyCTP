
#include "PyCThostFtdcQryTradeField.h"

///查询成交

static PyObject *PyCThostFtdcQryTradeField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryTradeField *self = (PyCThostFtdcQryTradeField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryTradeField_init(PyCThostFtdcQryTradeField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "ExchangeID", "TradeID", "TradeTimeStart", "TradeTimeEnd", "InvestUnitID", "InstrumentID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QryTradeField_BrokerID = NULL;
    Py_ssize_t QryTradeField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *QryTradeField_InvestorID = NULL;
    Py_ssize_t QryTradeField_InvestorID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *QryTradeField_reserve1 = NULL;
    Py_ssize_t QryTradeField_reserve1_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *QryTradeField_ExchangeID = NULL;
    Py_ssize_t QryTradeField_ExchangeID_len = 0;
            
    ///成交编号
    // TThostFtdcTradeIDType char[21]
    const char *QryTradeField_TradeID = NULL;
    Py_ssize_t QryTradeField_TradeID_len = 0;
            
    ///开始时间
    // TThostFtdcTimeType char[9]
    const char *QryTradeField_TradeTimeStart = NULL;
    Py_ssize_t QryTradeField_TradeTimeStart_len = 0;
            
    ///结束时间
    // TThostFtdcTimeType char[9]
    const char *QryTradeField_TradeTimeEnd = NULL;
    Py_ssize_t QryTradeField_TradeTimeEnd_len = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *QryTradeField_InvestUnitID = NULL;
    Py_ssize_t QryTradeField_InvestUnitID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *QryTradeField_InstrumentID = NULL;
    Py_ssize_t QryTradeField_InstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#", (char **)kwlist
#endif

        , &QryTradeField_BrokerID, &QryTradeField_BrokerID_len 
        , &QryTradeField_InvestorID, &QryTradeField_InvestorID_len 
        , &QryTradeField_reserve1, &QryTradeField_reserve1_len 
        , &QryTradeField_ExchangeID, &QryTradeField_ExchangeID_len 
        , &QryTradeField_TradeID, &QryTradeField_TradeID_len 
        , &QryTradeField_TradeTimeStart, &QryTradeField_TradeTimeStart_len 
        , &QryTradeField_TradeTimeEnd, &QryTradeField_TradeTimeEnd_len 
        , &QryTradeField_InvestUnitID, &QryTradeField_InvestUnitID_len 
        , &QryTradeField_InstrumentID, &QryTradeField_InstrumentID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QryTradeField_BrokerID != NULL ) {
        if(QryTradeField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QryTradeField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QryTradeField_BrokerID, QryTradeField_BrokerID_len);        
        strncpy(self->data.BrokerID, QryTradeField_BrokerID, sizeof(self->data.BrokerID) );
        QryTradeField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( QryTradeField_InvestorID != NULL ) {
        if(QryTradeField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", QryTradeField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, QryTradeField_InvestorID, QryTradeField_InvestorID_len);        
        strncpy(self->data.InvestorID, QryTradeField_InvestorID, sizeof(self->data.InvestorID) );
        QryTradeField_InvestorID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( QryTradeField_reserve1 != NULL ) {
        if(QryTradeField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", QryTradeField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, QryTradeField_reserve1, QryTradeField_reserve1_len);        
        strncpy(self->data.reserve1, QryTradeField_reserve1, sizeof(self->data.reserve1) );
        QryTradeField_reserve1 = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( QryTradeField_ExchangeID != NULL ) {
        if(QryTradeField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", QryTradeField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, QryTradeField_ExchangeID, QryTradeField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, QryTradeField_ExchangeID, sizeof(self->data.ExchangeID) );
        QryTradeField_ExchangeID = NULL;
    }
            
    ///成交编号
    // TThostFtdcTradeIDType char[21]
    if( QryTradeField_TradeID != NULL ) {
        if(QryTradeField_TradeID_len > (Py_ssize_t)sizeof(self->data.TradeID)) {
            PyErr_Format(PyExc_ValueError, "TradeID too long: length=%zd (max allowed is %zd)", QryTradeField_TradeID_len, (Py_ssize_t)sizeof(self->data.TradeID));
            return -1;
        }
        // memset(self->data.TradeID, 0, sizeof(self->data.TradeID));
        // memcpy(self->data.TradeID, QryTradeField_TradeID, QryTradeField_TradeID_len);        
        strncpy(self->data.TradeID, QryTradeField_TradeID, sizeof(self->data.TradeID) );
        QryTradeField_TradeID = NULL;
    }
            
    ///开始时间
    // TThostFtdcTimeType char[9]
    if( QryTradeField_TradeTimeStart != NULL ) {
        if(QryTradeField_TradeTimeStart_len > (Py_ssize_t)sizeof(self->data.TradeTimeStart)) {
            PyErr_Format(PyExc_ValueError, "TradeTimeStart too long: length=%zd (max allowed is %zd)", QryTradeField_TradeTimeStart_len, (Py_ssize_t)sizeof(self->data.TradeTimeStart));
            return -1;
        }
        // memset(self->data.TradeTimeStart, 0, sizeof(self->data.TradeTimeStart));
        // memcpy(self->data.TradeTimeStart, QryTradeField_TradeTimeStart, QryTradeField_TradeTimeStart_len);        
        strncpy(self->data.TradeTimeStart, QryTradeField_TradeTimeStart, sizeof(self->data.TradeTimeStart) );
        QryTradeField_TradeTimeStart = NULL;
    }
            
    ///结束时间
    // TThostFtdcTimeType char[9]
    if( QryTradeField_TradeTimeEnd != NULL ) {
        if(QryTradeField_TradeTimeEnd_len > (Py_ssize_t)sizeof(self->data.TradeTimeEnd)) {
            PyErr_Format(PyExc_ValueError, "TradeTimeEnd too long: length=%zd (max allowed is %zd)", QryTradeField_TradeTimeEnd_len, (Py_ssize_t)sizeof(self->data.TradeTimeEnd));
            return -1;
        }
        // memset(self->data.TradeTimeEnd, 0, sizeof(self->data.TradeTimeEnd));
        // memcpy(self->data.TradeTimeEnd, QryTradeField_TradeTimeEnd, QryTradeField_TradeTimeEnd_len);        
        strncpy(self->data.TradeTimeEnd, QryTradeField_TradeTimeEnd, sizeof(self->data.TradeTimeEnd) );
        QryTradeField_TradeTimeEnd = NULL;
    }
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( QryTradeField_InvestUnitID != NULL ) {
        if(QryTradeField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", QryTradeField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, QryTradeField_InvestUnitID, QryTradeField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, QryTradeField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        QryTradeField_InvestUnitID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( QryTradeField_InstrumentID != NULL ) {
        if(QryTradeField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", QryTradeField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, QryTradeField_InstrumentID, QryTradeField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, QryTradeField_InstrumentID, sizeof(self->data.InstrumentID) );
        QryTradeField_InstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryTradeField_dealloc(PyCThostFtdcQryTradeField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryTradeField_repr(PyCThostFtdcQryTradeField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"TradeID", self->data.TradeID//, (Py_ssize_t)sizeof(self->data.TradeID) 
        ,"TradeTimeStart", self->data.TradeTimeStart//, (Py_ssize_t)sizeof(self->data.TradeTimeStart) 
        ,"TradeTimeEnd", self->data.TradeTimeEnd//, (Py_ssize_t)sizeof(self->data.TradeTimeEnd) 
        ,"InvestUnitID", self->data.InvestUnitID//, (Py_ssize_t)sizeof(self->data.InvestUnitID) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryTradeField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQryTradeField_get_BrokerID(PyCThostFtdcQryTradeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQryTradeField_set_BrokerID(PyCThostFtdcQryTradeField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryTradeField_get_InvestorID(PyCThostFtdcQryTradeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcQryTradeField_set_InvestorID(PyCThostFtdcQryTradeField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryTradeField_get_reserve1(PyCThostFtdcQryTradeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcQryTradeField_set_reserve1(PyCThostFtdcQryTradeField *self, PyObject* val, void *closure) {
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
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcQryTradeField_get_ExchangeID(PyCThostFtdcQryTradeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcQryTradeField_set_ExchangeID(PyCThostFtdcQryTradeField *self, PyObject* val, void *closure) {
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
            
///成交编号
// TThostFtdcTradeIDType char[21]
static PyObject *PyCThostFtdcQryTradeField_get_TradeID(PyCThostFtdcQryTradeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeID, (Py_ssize_t)sizeof(self->data.TradeID));
    return PyBytes_FromString(self->data.TradeID);
}

///成交编号
// TThostFtdcTradeIDType char[21]
static int PyCThostFtdcQryTradeField_set_TradeID(PyCThostFtdcQryTradeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradeID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TradeID)) {
        PyErr_SetString(PyExc_ValueError, "TradeID must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.TradeID, 0, sizeof(self->data.TradeID));
    // memcpy(self->data.TradeID, buf, len);
    strncpy(self->data.TradeID, buf, sizeof(self->data.TradeID));
    return 0;
}
            
///开始时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcQryTradeField_get_TradeTimeStart(PyCThostFtdcQryTradeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeTimeStart, (Py_ssize_t)sizeof(self->data.TradeTimeStart));
    return PyBytes_FromString(self->data.TradeTimeStart);
}

///开始时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcQryTradeField_set_TradeTimeStart(PyCThostFtdcQryTradeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradeTimeStart Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TradeTimeStart)) {
        PyErr_SetString(PyExc_ValueError, "TradeTimeStart must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.TradeTimeStart, 0, sizeof(self->data.TradeTimeStart));
    // memcpy(self->data.TradeTimeStart, buf, len);
    strncpy(self->data.TradeTimeStart, buf, sizeof(self->data.TradeTimeStart));
    return 0;
}
            
///结束时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcQryTradeField_get_TradeTimeEnd(PyCThostFtdcQryTradeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeTimeEnd, (Py_ssize_t)sizeof(self->data.TradeTimeEnd));
    return PyBytes_FromString(self->data.TradeTimeEnd);
}

///结束时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcQryTradeField_set_TradeTimeEnd(PyCThostFtdcQryTradeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradeTimeEnd Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TradeTimeEnd)) {
        PyErr_SetString(PyExc_ValueError, "TradeTimeEnd must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.TradeTimeEnd, 0, sizeof(self->data.TradeTimeEnd));
    // memcpy(self->data.TradeTimeEnd, buf, len);
    strncpy(self->data.TradeTimeEnd, buf, sizeof(self->data.TradeTimeEnd));
    return 0;
}
            
///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static PyObject *PyCThostFtdcQryTradeField_get_InvestUnitID(PyCThostFtdcQryTradeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcQryTradeField_set_InvestUnitID(PyCThostFtdcQryTradeField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryTradeField_get_InstrumentID(PyCThostFtdcQryTradeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcQryTradeField_set_InstrumentID(PyCThostFtdcQryTradeField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQryTradeField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQryTradeField_get_BrokerID, (setter)PyCThostFtdcQryTradeField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcQryTradeField_get_InvestorID, (setter)PyCThostFtdcQryTradeField_set_InvestorID, (char *)"InvestorID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcQryTradeField_get_reserve1, (setter)PyCThostFtdcQryTradeField_set_reserve1, (char *)"reserve1", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcQryTradeField_get_ExchangeID, (setter)PyCThostFtdcQryTradeField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///成交编号 
    {(char *)"TradeID", (getter)PyCThostFtdcQryTradeField_get_TradeID, (setter)PyCThostFtdcQryTradeField_set_TradeID, (char *)"TradeID", NULL},
    ///开始时间 
    {(char *)"TradeTimeStart", (getter)PyCThostFtdcQryTradeField_get_TradeTimeStart, (setter)PyCThostFtdcQryTradeField_set_TradeTimeStart, (char *)"TradeTimeStart", NULL},
    ///结束时间 
    {(char *)"TradeTimeEnd", (getter)PyCThostFtdcQryTradeField_get_TradeTimeEnd, (setter)PyCThostFtdcQryTradeField_set_TradeTimeEnd, (char *)"TradeTimeEnd", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcQryTradeField_get_InvestUnitID, (setter)PyCThostFtdcQryTradeField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcQryTradeField_get_InstrumentID, (setter)PyCThostFtdcQryTradeField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryTradeFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryTradeField",	/* tp_name */
	sizeof(PyCThostFtdcQryTradeField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryTradeField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryTradeField_repr,   /* tp_repr */
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
	"CThostFtdcQryTradeField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryTradeField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryTradeField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryTradeField_new,       /* tp_new */
};

int PyCThostFtdcQryTradeFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryTradeField  */
	if (PyType_Ready(&PyCThostFtdcQryTradeFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryTradeField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryTradeFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryTradeField", (PyObject *)&PyCThostFtdcQryTradeFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryTradeField to module");
        Py_DECREF(&PyCThostFtdcQryTradeFieldType);
		return -1;
    }

    return 0;
}
