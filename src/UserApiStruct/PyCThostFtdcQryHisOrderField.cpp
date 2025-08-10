
#include "PyCThostFtdcQryHisOrderField.h"

///查询报单

static PyObject *PyCThostFtdcQryHisOrderField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryHisOrderField *self = (PyCThostFtdcQryHisOrderField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryHisOrderField_init(PyCThostFtdcQryHisOrderField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "ExchangeID", "OrderSysID", "InsertTimeStart", "InsertTimeEnd", "TradingDay", "SettlementID", "InstrumentID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QryHisOrderField_BrokerID = NULL;
    Py_ssize_t QryHisOrderField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *QryHisOrderField_InvestorID = NULL;
    Py_ssize_t QryHisOrderField_InvestorID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *QryHisOrderField_reserve1 = NULL;
    Py_ssize_t QryHisOrderField_reserve1_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *QryHisOrderField_ExchangeID = NULL;
    Py_ssize_t QryHisOrderField_ExchangeID_len = 0;
            
    ///报单编号
    // TThostFtdcOrderSysIDType char[21]
    const char *QryHisOrderField_OrderSysID = NULL;
    Py_ssize_t QryHisOrderField_OrderSysID_len = 0;
            
    ///开始时间
    // TThostFtdcTimeType char[9]
    const char *QryHisOrderField_InsertTimeStart = NULL;
    Py_ssize_t QryHisOrderField_InsertTimeStart_len = 0;
            
    ///结束时间
    // TThostFtdcTimeType char[9]
    const char *QryHisOrderField_InsertTimeEnd = NULL;
    Py_ssize_t QryHisOrderField_InsertTimeEnd_len = 0;
            
    ///交易日
    // TThostFtdcDateType char[9]
    const char *QryHisOrderField_TradingDay = NULL;
    Py_ssize_t QryHisOrderField_TradingDay_len = 0;
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    int QryHisOrderField_SettlementID = 0;
        
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *QryHisOrderField_InstrumentID = NULL;
    Py_ssize_t QryHisOrderField_InstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#iy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#is#", (char **)kwlist
#endif

        , &QryHisOrderField_BrokerID, &QryHisOrderField_BrokerID_len 
        , &QryHisOrderField_InvestorID, &QryHisOrderField_InvestorID_len 
        , &QryHisOrderField_reserve1, &QryHisOrderField_reserve1_len 
        , &QryHisOrderField_ExchangeID, &QryHisOrderField_ExchangeID_len 
        , &QryHisOrderField_OrderSysID, &QryHisOrderField_OrderSysID_len 
        , &QryHisOrderField_InsertTimeStart, &QryHisOrderField_InsertTimeStart_len 
        , &QryHisOrderField_InsertTimeEnd, &QryHisOrderField_InsertTimeEnd_len 
        , &QryHisOrderField_TradingDay, &QryHisOrderField_TradingDay_len 
        , &QryHisOrderField_SettlementID 
        , &QryHisOrderField_InstrumentID, &QryHisOrderField_InstrumentID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QryHisOrderField_BrokerID != NULL ) {
        if(QryHisOrderField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QryHisOrderField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QryHisOrderField_BrokerID, QryHisOrderField_BrokerID_len);        
        strncpy(self->data.BrokerID, QryHisOrderField_BrokerID, sizeof(self->data.BrokerID) );
        QryHisOrderField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( QryHisOrderField_InvestorID != NULL ) {
        if(QryHisOrderField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", QryHisOrderField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, QryHisOrderField_InvestorID, QryHisOrderField_InvestorID_len);        
        strncpy(self->data.InvestorID, QryHisOrderField_InvestorID, sizeof(self->data.InvestorID) );
        QryHisOrderField_InvestorID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( QryHisOrderField_reserve1 != NULL ) {
        if(QryHisOrderField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", QryHisOrderField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, QryHisOrderField_reserve1, QryHisOrderField_reserve1_len);        
        strncpy(self->data.reserve1, QryHisOrderField_reserve1, sizeof(self->data.reserve1) );
        QryHisOrderField_reserve1 = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( QryHisOrderField_ExchangeID != NULL ) {
        if(QryHisOrderField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", QryHisOrderField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, QryHisOrderField_ExchangeID, QryHisOrderField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, QryHisOrderField_ExchangeID, sizeof(self->data.ExchangeID) );
        QryHisOrderField_ExchangeID = NULL;
    }
            
    ///报单编号
    // TThostFtdcOrderSysIDType char[21]
    if( QryHisOrderField_OrderSysID != NULL ) {
        if(QryHisOrderField_OrderSysID_len > (Py_ssize_t)sizeof(self->data.OrderSysID)) {
            PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is %zd)", QryHisOrderField_OrderSysID_len, (Py_ssize_t)sizeof(self->data.OrderSysID));
            return -1;
        }
        // memset(self->data.OrderSysID, 0, sizeof(self->data.OrderSysID));
        // memcpy(self->data.OrderSysID, QryHisOrderField_OrderSysID, QryHisOrderField_OrderSysID_len);        
        strncpy(self->data.OrderSysID, QryHisOrderField_OrderSysID, sizeof(self->data.OrderSysID) );
        QryHisOrderField_OrderSysID = NULL;
    }
            
    ///开始时间
    // TThostFtdcTimeType char[9]
    if( QryHisOrderField_InsertTimeStart != NULL ) {
        if(QryHisOrderField_InsertTimeStart_len > (Py_ssize_t)sizeof(self->data.InsertTimeStart)) {
            PyErr_Format(PyExc_ValueError, "InsertTimeStart too long: length=%zd (max allowed is %zd)", QryHisOrderField_InsertTimeStart_len, (Py_ssize_t)sizeof(self->data.InsertTimeStart));
            return -1;
        }
        // memset(self->data.InsertTimeStart, 0, sizeof(self->data.InsertTimeStart));
        // memcpy(self->data.InsertTimeStart, QryHisOrderField_InsertTimeStart, QryHisOrderField_InsertTimeStart_len);        
        strncpy(self->data.InsertTimeStart, QryHisOrderField_InsertTimeStart, sizeof(self->data.InsertTimeStart) );
        QryHisOrderField_InsertTimeStart = NULL;
    }
            
    ///结束时间
    // TThostFtdcTimeType char[9]
    if( QryHisOrderField_InsertTimeEnd != NULL ) {
        if(QryHisOrderField_InsertTimeEnd_len > (Py_ssize_t)sizeof(self->data.InsertTimeEnd)) {
            PyErr_Format(PyExc_ValueError, "InsertTimeEnd too long: length=%zd (max allowed is %zd)", QryHisOrderField_InsertTimeEnd_len, (Py_ssize_t)sizeof(self->data.InsertTimeEnd));
            return -1;
        }
        // memset(self->data.InsertTimeEnd, 0, sizeof(self->data.InsertTimeEnd));
        // memcpy(self->data.InsertTimeEnd, QryHisOrderField_InsertTimeEnd, QryHisOrderField_InsertTimeEnd_len);        
        strncpy(self->data.InsertTimeEnd, QryHisOrderField_InsertTimeEnd, sizeof(self->data.InsertTimeEnd) );
        QryHisOrderField_InsertTimeEnd = NULL;
    }
            
    ///交易日
    // TThostFtdcDateType char[9]
    if( QryHisOrderField_TradingDay != NULL ) {
        if(QryHisOrderField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", QryHisOrderField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, QryHisOrderField_TradingDay, QryHisOrderField_TradingDay_len);        
        strncpy(self->data.TradingDay, QryHisOrderField_TradingDay, sizeof(self->data.TradingDay) );
        QryHisOrderField_TradingDay = NULL;
    }
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    self->data.SettlementID = QryHisOrderField_SettlementID;
        
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( QryHisOrderField_InstrumentID != NULL ) {
        if(QryHisOrderField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", QryHisOrderField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, QryHisOrderField_InstrumentID, QryHisOrderField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, QryHisOrderField_InstrumentID, sizeof(self->data.InstrumentID) );
        QryHisOrderField_InstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryHisOrderField_dealloc(PyCThostFtdcQryHisOrderField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryHisOrderField_repr(PyCThostFtdcQryHisOrderField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"OrderSysID", self->data.OrderSysID//, (Py_ssize_t)sizeof(self->data.OrderSysID) 
        ,"InsertTimeStart", self->data.InsertTimeStart//, (Py_ssize_t)sizeof(self->data.InsertTimeStart) 
        ,"InsertTimeEnd", self->data.InsertTimeEnd//, (Py_ssize_t)sizeof(self->data.InsertTimeEnd) 
        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"SettlementID", self->data.SettlementID 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryHisOrderField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQryHisOrderField_get_BrokerID(PyCThostFtdcQryHisOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQryHisOrderField_set_BrokerID(PyCThostFtdcQryHisOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryHisOrderField_get_InvestorID(PyCThostFtdcQryHisOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcQryHisOrderField_set_InvestorID(PyCThostFtdcQryHisOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryHisOrderField_get_reserve1(PyCThostFtdcQryHisOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcQryHisOrderField_set_reserve1(PyCThostFtdcQryHisOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryHisOrderField_get_ExchangeID(PyCThostFtdcQryHisOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcQryHisOrderField_set_ExchangeID(PyCThostFtdcQryHisOrderField *self, PyObject* val, void *closure) {
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
            
///报单编号
// TThostFtdcOrderSysIDType char[21]
static PyObject *PyCThostFtdcQryHisOrderField_get_OrderSysID(PyCThostFtdcQryHisOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderSysID, (Py_ssize_t)sizeof(self->data.OrderSysID));
    return PyBytes_FromString(self->data.OrderSysID);
}

///报单编号
// TThostFtdcOrderSysIDType char[21]
static int PyCThostFtdcQryHisOrderField_set_OrderSysID(PyCThostFtdcQryHisOrderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderSysID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OrderSysID)) {
        PyErr_SetString(PyExc_ValueError, "OrderSysID must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.OrderSysID, 0, sizeof(self->data.OrderSysID));
    // memcpy(self->data.OrderSysID, buf, len);
    strncpy(self->data.OrderSysID, buf, sizeof(self->data.OrderSysID));
    return 0;
}
            
///开始时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcQryHisOrderField_get_InsertTimeStart(PyCThostFtdcQryHisOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InsertTimeStart, (Py_ssize_t)sizeof(self->data.InsertTimeStart));
    return PyBytes_FromString(self->data.InsertTimeStart);
}

///开始时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcQryHisOrderField_set_InsertTimeStart(PyCThostFtdcQryHisOrderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InsertTimeStart Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InsertTimeStart)) {
        PyErr_SetString(PyExc_ValueError, "InsertTimeStart must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.InsertTimeStart, 0, sizeof(self->data.InsertTimeStart));
    // memcpy(self->data.InsertTimeStart, buf, len);
    strncpy(self->data.InsertTimeStart, buf, sizeof(self->data.InsertTimeStart));
    return 0;
}
            
///结束时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcQryHisOrderField_get_InsertTimeEnd(PyCThostFtdcQryHisOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InsertTimeEnd, (Py_ssize_t)sizeof(self->data.InsertTimeEnd));
    return PyBytes_FromString(self->data.InsertTimeEnd);
}

///结束时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcQryHisOrderField_set_InsertTimeEnd(PyCThostFtdcQryHisOrderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InsertTimeEnd Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InsertTimeEnd)) {
        PyErr_SetString(PyExc_ValueError, "InsertTimeEnd must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.InsertTimeEnd, 0, sizeof(self->data.InsertTimeEnd));
    // memcpy(self->data.InsertTimeEnd, buf, len);
    strncpy(self->data.InsertTimeEnd, buf, sizeof(self->data.InsertTimeEnd));
    return 0;
}
            
///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcQryHisOrderField_get_TradingDay(PyCThostFtdcQryHisOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcQryHisOrderField_set_TradingDay(PyCThostFtdcQryHisOrderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
    // memcpy(self->data.TradingDay, buf, len);
    strncpy(self->data.TradingDay, buf, sizeof(self->data.TradingDay));
    return 0;
}
            
///结算编号
// TThostFtdcSettlementIDType int
static PyObject *PyCThostFtdcQryHisOrderField_get_SettlementID(PyCThostFtdcQryHisOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SettlementID);
#else
    return PyInt_FromLong(self->data.SettlementID);
#endif
}

///结算编号
// TThostFtdcSettlementIDType int
static int PyCThostFtdcQryHisOrderField_set_SettlementID(PyCThostFtdcQryHisOrderField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SettlementID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SettlementID Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the SettlementID value out of range for C int");
        return -1;
    }
    self->data.SettlementID = (int)buf;
    return 0;
}
        
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcQryHisOrderField_get_InstrumentID(PyCThostFtdcQryHisOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcQryHisOrderField_set_InstrumentID(PyCThostFtdcQryHisOrderField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQryHisOrderField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQryHisOrderField_get_BrokerID, (setter)PyCThostFtdcQryHisOrderField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcQryHisOrderField_get_InvestorID, (setter)PyCThostFtdcQryHisOrderField_set_InvestorID, (char *)"InvestorID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcQryHisOrderField_get_reserve1, (setter)PyCThostFtdcQryHisOrderField_set_reserve1, (char *)"reserve1", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcQryHisOrderField_get_ExchangeID, (setter)PyCThostFtdcQryHisOrderField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///报单编号 
    {(char *)"OrderSysID", (getter)PyCThostFtdcQryHisOrderField_get_OrderSysID, (setter)PyCThostFtdcQryHisOrderField_set_OrderSysID, (char *)"OrderSysID", NULL},
    ///开始时间 
    {(char *)"InsertTimeStart", (getter)PyCThostFtdcQryHisOrderField_get_InsertTimeStart, (setter)PyCThostFtdcQryHisOrderField_set_InsertTimeStart, (char *)"InsertTimeStart", NULL},
    ///结束时间 
    {(char *)"InsertTimeEnd", (getter)PyCThostFtdcQryHisOrderField_get_InsertTimeEnd, (setter)PyCThostFtdcQryHisOrderField_set_InsertTimeEnd, (char *)"InsertTimeEnd", NULL},
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcQryHisOrderField_get_TradingDay, (setter)PyCThostFtdcQryHisOrderField_set_TradingDay, (char *)"TradingDay", NULL},
    ///结算编号 
    {(char *)"SettlementID", (getter)PyCThostFtdcQryHisOrderField_get_SettlementID, (setter)PyCThostFtdcQryHisOrderField_set_SettlementID, (char *)"SettlementID", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcQryHisOrderField_get_InstrumentID, (setter)PyCThostFtdcQryHisOrderField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryHisOrderFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryHisOrderField",	/* tp_name */
	sizeof(PyCThostFtdcQryHisOrderField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryHisOrderField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryHisOrderField_repr,   /* tp_repr */
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
	"CThostFtdcQryHisOrderField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryHisOrderField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryHisOrderField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryHisOrderField_new,       /* tp_new */
};

int PyCThostFtdcQryHisOrderFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryHisOrderField  */
	if (PyType_Ready(&PyCThostFtdcQryHisOrderFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryHisOrderField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryHisOrderFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryHisOrderField", (PyObject *)&PyCThostFtdcQryHisOrderFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryHisOrderField to module");
        Py_DECREF(&PyCThostFtdcQryHisOrderFieldType);
		return -1;
    }

    return 0;
}
