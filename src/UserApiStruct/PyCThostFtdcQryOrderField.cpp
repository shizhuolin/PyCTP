
#include "PyCThostFtdcQryOrderField.h"

///查询报单

static PyObject *PyCThostFtdcQryOrderField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryOrderField *self = (PyCThostFtdcQryOrderField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryOrderField_init(PyCThostFtdcQryOrderField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "ExchangeID", "OrderSysID", "InsertTimeStart", "InsertTimeEnd", "InvestUnitID", "InstrumentID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QryOrderField_BrokerID = NULL;
    Py_ssize_t QryOrderField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *QryOrderField_InvestorID = NULL;
    Py_ssize_t QryOrderField_InvestorID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *QryOrderField_reserve1 = NULL;
    Py_ssize_t QryOrderField_reserve1_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *QryOrderField_ExchangeID = NULL;
    Py_ssize_t QryOrderField_ExchangeID_len = 0;
            
    ///报单编号
    // TThostFtdcOrderSysIDType char[21]
    const char *QryOrderField_OrderSysID = NULL;
    Py_ssize_t QryOrderField_OrderSysID_len = 0;
            
    ///开始时间
    // TThostFtdcTimeType char[9]
    const char *QryOrderField_InsertTimeStart = NULL;
    Py_ssize_t QryOrderField_InsertTimeStart_len = 0;
            
    ///结束时间
    // TThostFtdcTimeType char[9]
    const char *QryOrderField_InsertTimeEnd = NULL;
    Py_ssize_t QryOrderField_InsertTimeEnd_len = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *QryOrderField_InvestUnitID = NULL;
    Py_ssize_t QryOrderField_InvestUnitID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *QryOrderField_InstrumentID = NULL;
    Py_ssize_t QryOrderField_InstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#", (char **)kwlist
#endif

        , &QryOrderField_BrokerID, &QryOrderField_BrokerID_len 
        , &QryOrderField_InvestorID, &QryOrderField_InvestorID_len 
        , &QryOrderField_reserve1, &QryOrderField_reserve1_len 
        , &QryOrderField_ExchangeID, &QryOrderField_ExchangeID_len 
        , &QryOrderField_OrderSysID, &QryOrderField_OrderSysID_len 
        , &QryOrderField_InsertTimeStart, &QryOrderField_InsertTimeStart_len 
        , &QryOrderField_InsertTimeEnd, &QryOrderField_InsertTimeEnd_len 
        , &QryOrderField_InvestUnitID, &QryOrderField_InvestUnitID_len 
        , &QryOrderField_InstrumentID, &QryOrderField_InstrumentID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QryOrderField_BrokerID != NULL ) {
        if(QryOrderField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QryOrderField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QryOrderField_BrokerID, QryOrderField_BrokerID_len);        
        strncpy(self->data.BrokerID, QryOrderField_BrokerID, sizeof(self->data.BrokerID) );
        QryOrderField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( QryOrderField_InvestorID != NULL ) {
        if(QryOrderField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", QryOrderField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, QryOrderField_InvestorID, QryOrderField_InvestorID_len);        
        strncpy(self->data.InvestorID, QryOrderField_InvestorID, sizeof(self->data.InvestorID) );
        QryOrderField_InvestorID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( QryOrderField_reserve1 != NULL ) {
        if(QryOrderField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", QryOrderField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, QryOrderField_reserve1, QryOrderField_reserve1_len);        
        strncpy(self->data.reserve1, QryOrderField_reserve1, sizeof(self->data.reserve1) );
        QryOrderField_reserve1 = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( QryOrderField_ExchangeID != NULL ) {
        if(QryOrderField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", QryOrderField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, QryOrderField_ExchangeID, QryOrderField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, QryOrderField_ExchangeID, sizeof(self->data.ExchangeID) );
        QryOrderField_ExchangeID = NULL;
    }
            
    ///报单编号
    // TThostFtdcOrderSysIDType char[21]
    if( QryOrderField_OrderSysID != NULL ) {
        if(QryOrderField_OrderSysID_len > (Py_ssize_t)sizeof(self->data.OrderSysID)) {
            PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is %zd)", QryOrderField_OrderSysID_len, (Py_ssize_t)sizeof(self->data.OrderSysID));
            return -1;
        }
        // memset(self->data.OrderSysID, 0, sizeof(self->data.OrderSysID));
        // memcpy(self->data.OrderSysID, QryOrderField_OrderSysID, QryOrderField_OrderSysID_len);        
        strncpy(self->data.OrderSysID, QryOrderField_OrderSysID, sizeof(self->data.OrderSysID) );
        QryOrderField_OrderSysID = NULL;
    }
            
    ///开始时间
    // TThostFtdcTimeType char[9]
    if( QryOrderField_InsertTimeStart != NULL ) {
        if(QryOrderField_InsertTimeStart_len > (Py_ssize_t)sizeof(self->data.InsertTimeStart)) {
            PyErr_Format(PyExc_ValueError, "InsertTimeStart too long: length=%zd (max allowed is %zd)", QryOrderField_InsertTimeStart_len, (Py_ssize_t)sizeof(self->data.InsertTimeStart));
            return -1;
        }
        // memset(self->data.InsertTimeStart, 0, sizeof(self->data.InsertTimeStart));
        // memcpy(self->data.InsertTimeStart, QryOrderField_InsertTimeStart, QryOrderField_InsertTimeStart_len);        
        strncpy(self->data.InsertTimeStart, QryOrderField_InsertTimeStart, sizeof(self->data.InsertTimeStart) );
        QryOrderField_InsertTimeStart = NULL;
    }
            
    ///结束时间
    // TThostFtdcTimeType char[9]
    if( QryOrderField_InsertTimeEnd != NULL ) {
        if(QryOrderField_InsertTimeEnd_len > (Py_ssize_t)sizeof(self->data.InsertTimeEnd)) {
            PyErr_Format(PyExc_ValueError, "InsertTimeEnd too long: length=%zd (max allowed is %zd)", QryOrderField_InsertTimeEnd_len, (Py_ssize_t)sizeof(self->data.InsertTimeEnd));
            return -1;
        }
        // memset(self->data.InsertTimeEnd, 0, sizeof(self->data.InsertTimeEnd));
        // memcpy(self->data.InsertTimeEnd, QryOrderField_InsertTimeEnd, QryOrderField_InsertTimeEnd_len);        
        strncpy(self->data.InsertTimeEnd, QryOrderField_InsertTimeEnd, sizeof(self->data.InsertTimeEnd) );
        QryOrderField_InsertTimeEnd = NULL;
    }
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( QryOrderField_InvestUnitID != NULL ) {
        if(QryOrderField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", QryOrderField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, QryOrderField_InvestUnitID, QryOrderField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, QryOrderField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        QryOrderField_InvestUnitID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( QryOrderField_InstrumentID != NULL ) {
        if(QryOrderField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", QryOrderField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, QryOrderField_InstrumentID, QryOrderField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, QryOrderField_InstrumentID, sizeof(self->data.InstrumentID) );
        QryOrderField_InstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryOrderField_dealloc(PyCThostFtdcQryOrderField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryOrderField_repr(PyCThostFtdcQryOrderField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"OrderSysID", self->data.OrderSysID//, (Py_ssize_t)sizeof(self->data.OrderSysID) 
        ,"InsertTimeStart", self->data.InsertTimeStart//, (Py_ssize_t)sizeof(self->data.InsertTimeStart) 
        ,"InsertTimeEnd", self->data.InsertTimeEnd//, (Py_ssize_t)sizeof(self->data.InsertTimeEnd) 
        ,"InvestUnitID", self->data.InvestUnitID//, (Py_ssize_t)sizeof(self->data.InvestUnitID) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryOrderField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQryOrderField_get_BrokerID(PyCThostFtdcQryOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQryOrderField_set_BrokerID(PyCThostFtdcQryOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryOrderField_get_InvestorID(PyCThostFtdcQryOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcQryOrderField_set_InvestorID(PyCThostFtdcQryOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryOrderField_get_reserve1(PyCThostFtdcQryOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcQryOrderField_set_reserve1(PyCThostFtdcQryOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryOrderField_get_ExchangeID(PyCThostFtdcQryOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcQryOrderField_set_ExchangeID(PyCThostFtdcQryOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryOrderField_get_OrderSysID(PyCThostFtdcQryOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderSysID, (Py_ssize_t)sizeof(self->data.OrderSysID));
    return PyBytes_FromString(self->data.OrderSysID);
}

///报单编号
// TThostFtdcOrderSysIDType char[21]
static int PyCThostFtdcQryOrderField_set_OrderSysID(PyCThostFtdcQryOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryOrderField_get_InsertTimeStart(PyCThostFtdcQryOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InsertTimeStart, (Py_ssize_t)sizeof(self->data.InsertTimeStart));
    return PyBytes_FromString(self->data.InsertTimeStart);
}

///开始时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcQryOrderField_set_InsertTimeStart(PyCThostFtdcQryOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryOrderField_get_InsertTimeEnd(PyCThostFtdcQryOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InsertTimeEnd, (Py_ssize_t)sizeof(self->data.InsertTimeEnd));
    return PyBytes_FromString(self->data.InsertTimeEnd);
}

///结束时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcQryOrderField_set_InsertTimeEnd(PyCThostFtdcQryOrderField *self, PyObject* val, void *closure) {
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
            
///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static PyObject *PyCThostFtdcQryOrderField_get_InvestUnitID(PyCThostFtdcQryOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcQryOrderField_set_InvestUnitID(PyCThostFtdcQryOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryOrderField_get_InstrumentID(PyCThostFtdcQryOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcQryOrderField_set_InstrumentID(PyCThostFtdcQryOrderField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQryOrderField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQryOrderField_get_BrokerID, (setter)PyCThostFtdcQryOrderField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcQryOrderField_get_InvestorID, (setter)PyCThostFtdcQryOrderField_set_InvestorID, (char *)"InvestorID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcQryOrderField_get_reserve1, (setter)PyCThostFtdcQryOrderField_set_reserve1, (char *)"reserve1", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcQryOrderField_get_ExchangeID, (setter)PyCThostFtdcQryOrderField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///报单编号 
    {(char *)"OrderSysID", (getter)PyCThostFtdcQryOrderField_get_OrderSysID, (setter)PyCThostFtdcQryOrderField_set_OrderSysID, (char *)"OrderSysID", NULL},
    ///开始时间 
    {(char *)"InsertTimeStart", (getter)PyCThostFtdcQryOrderField_get_InsertTimeStart, (setter)PyCThostFtdcQryOrderField_set_InsertTimeStart, (char *)"InsertTimeStart", NULL},
    ///结束时间 
    {(char *)"InsertTimeEnd", (getter)PyCThostFtdcQryOrderField_get_InsertTimeEnd, (setter)PyCThostFtdcQryOrderField_set_InsertTimeEnd, (char *)"InsertTimeEnd", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcQryOrderField_get_InvestUnitID, (setter)PyCThostFtdcQryOrderField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcQryOrderField_get_InstrumentID, (setter)PyCThostFtdcQryOrderField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryOrderFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryOrderField",	/* tp_name */
	sizeof(PyCThostFtdcQryOrderField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryOrderField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryOrderField_repr,   /* tp_repr */
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
	"CThostFtdcQryOrderField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryOrderField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryOrderField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryOrderField_new,       /* tp_new */
};

int PyCThostFtdcQryOrderFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryOrderField  */
	if (PyType_Ready(&PyCThostFtdcQryOrderFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryOrderField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryOrderFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryOrderField", (PyObject *)&PyCThostFtdcQryOrderFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryOrderField to module");
        Py_DECREF(&PyCThostFtdcQryOrderFieldType);
		return -1;
    }

    return 0;
}
