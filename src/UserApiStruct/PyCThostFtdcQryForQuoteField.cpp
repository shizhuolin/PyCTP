
#include "PyCThostFtdcQryForQuoteField.h"

///询价查询

static PyObject *PyCThostFtdcQryForQuoteField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryForQuoteField *self = (PyCThostFtdcQryForQuoteField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryForQuoteField_init(PyCThostFtdcQryForQuoteField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "ExchangeID", "InsertTimeStart", "InsertTimeEnd", "InvestUnitID", "InstrumentID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QryForQuoteField_BrokerID = NULL;
    Py_ssize_t QryForQuoteField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *QryForQuoteField_InvestorID = NULL;
    Py_ssize_t QryForQuoteField_InvestorID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *QryForQuoteField_reserve1 = NULL;
    Py_ssize_t QryForQuoteField_reserve1_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *QryForQuoteField_ExchangeID = NULL;
    Py_ssize_t QryForQuoteField_ExchangeID_len = 0;
            
    ///开始时间
    // TThostFtdcTimeType char[9]
    const char *QryForQuoteField_InsertTimeStart = NULL;
    Py_ssize_t QryForQuoteField_InsertTimeStart_len = 0;
            
    ///结束时间
    // TThostFtdcTimeType char[9]
    const char *QryForQuoteField_InsertTimeEnd = NULL;
    Py_ssize_t QryForQuoteField_InsertTimeEnd_len = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *QryForQuoteField_InvestUnitID = NULL;
    Py_ssize_t QryForQuoteField_InvestUnitID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *QryForQuoteField_InstrumentID = NULL;
    Py_ssize_t QryForQuoteField_InstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#", (char **)kwlist
#endif

        , &QryForQuoteField_BrokerID, &QryForQuoteField_BrokerID_len 
        , &QryForQuoteField_InvestorID, &QryForQuoteField_InvestorID_len 
        , &QryForQuoteField_reserve1, &QryForQuoteField_reserve1_len 
        , &QryForQuoteField_ExchangeID, &QryForQuoteField_ExchangeID_len 
        , &QryForQuoteField_InsertTimeStart, &QryForQuoteField_InsertTimeStart_len 
        , &QryForQuoteField_InsertTimeEnd, &QryForQuoteField_InsertTimeEnd_len 
        , &QryForQuoteField_InvestUnitID, &QryForQuoteField_InvestUnitID_len 
        , &QryForQuoteField_InstrumentID, &QryForQuoteField_InstrumentID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QryForQuoteField_BrokerID != NULL ) {
        if(QryForQuoteField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QryForQuoteField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QryForQuoteField_BrokerID, QryForQuoteField_BrokerID_len);        
        strncpy(self->data.BrokerID, QryForQuoteField_BrokerID, sizeof(self->data.BrokerID) );
        QryForQuoteField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( QryForQuoteField_InvestorID != NULL ) {
        if(QryForQuoteField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", QryForQuoteField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, QryForQuoteField_InvestorID, QryForQuoteField_InvestorID_len);        
        strncpy(self->data.InvestorID, QryForQuoteField_InvestorID, sizeof(self->data.InvestorID) );
        QryForQuoteField_InvestorID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( QryForQuoteField_reserve1 != NULL ) {
        if(QryForQuoteField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", QryForQuoteField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, QryForQuoteField_reserve1, QryForQuoteField_reserve1_len);        
        strncpy(self->data.reserve1, QryForQuoteField_reserve1, sizeof(self->data.reserve1) );
        QryForQuoteField_reserve1 = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( QryForQuoteField_ExchangeID != NULL ) {
        if(QryForQuoteField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", QryForQuoteField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, QryForQuoteField_ExchangeID, QryForQuoteField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, QryForQuoteField_ExchangeID, sizeof(self->data.ExchangeID) );
        QryForQuoteField_ExchangeID = NULL;
    }
            
    ///开始时间
    // TThostFtdcTimeType char[9]
    if( QryForQuoteField_InsertTimeStart != NULL ) {
        if(QryForQuoteField_InsertTimeStart_len > (Py_ssize_t)sizeof(self->data.InsertTimeStart)) {
            PyErr_Format(PyExc_ValueError, "InsertTimeStart too long: length=%zd (max allowed is %zd)", QryForQuoteField_InsertTimeStart_len, (Py_ssize_t)sizeof(self->data.InsertTimeStart));
            return -1;
        }
        // memset(self->data.InsertTimeStart, 0, sizeof(self->data.InsertTimeStart));
        // memcpy(self->data.InsertTimeStart, QryForQuoteField_InsertTimeStart, QryForQuoteField_InsertTimeStart_len);        
        strncpy(self->data.InsertTimeStart, QryForQuoteField_InsertTimeStart, sizeof(self->data.InsertTimeStart) );
        QryForQuoteField_InsertTimeStart = NULL;
    }
            
    ///结束时间
    // TThostFtdcTimeType char[9]
    if( QryForQuoteField_InsertTimeEnd != NULL ) {
        if(QryForQuoteField_InsertTimeEnd_len > (Py_ssize_t)sizeof(self->data.InsertTimeEnd)) {
            PyErr_Format(PyExc_ValueError, "InsertTimeEnd too long: length=%zd (max allowed is %zd)", QryForQuoteField_InsertTimeEnd_len, (Py_ssize_t)sizeof(self->data.InsertTimeEnd));
            return -1;
        }
        // memset(self->data.InsertTimeEnd, 0, sizeof(self->data.InsertTimeEnd));
        // memcpy(self->data.InsertTimeEnd, QryForQuoteField_InsertTimeEnd, QryForQuoteField_InsertTimeEnd_len);        
        strncpy(self->data.InsertTimeEnd, QryForQuoteField_InsertTimeEnd, sizeof(self->data.InsertTimeEnd) );
        QryForQuoteField_InsertTimeEnd = NULL;
    }
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( QryForQuoteField_InvestUnitID != NULL ) {
        if(QryForQuoteField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", QryForQuoteField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, QryForQuoteField_InvestUnitID, QryForQuoteField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, QryForQuoteField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        QryForQuoteField_InvestUnitID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( QryForQuoteField_InstrumentID != NULL ) {
        if(QryForQuoteField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", QryForQuoteField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, QryForQuoteField_InstrumentID, QryForQuoteField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, QryForQuoteField_InstrumentID, sizeof(self->data.InstrumentID) );
        QryForQuoteField_InstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryForQuoteField_dealloc(PyCThostFtdcQryForQuoteField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryForQuoteField_repr(PyCThostFtdcQryForQuoteField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"InsertTimeStart", self->data.InsertTimeStart//, (Py_ssize_t)sizeof(self->data.InsertTimeStart) 
        ,"InsertTimeEnd", self->data.InsertTimeEnd//, (Py_ssize_t)sizeof(self->data.InsertTimeEnd) 
        ,"InvestUnitID", self->data.InvestUnitID//, (Py_ssize_t)sizeof(self->data.InvestUnitID) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryForQuoteField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQryForQuoteField_get_BrokerID(PyCThostFtdcQryForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQryForQuoteField_set_BrokerID(PyCThostFtdcQryForQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryForQuoteField_get_InvestorID(PyCThostFtdcQryForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcQryForQuoteField_set_InvestorID(PyCThostFtdcQryForQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryForQuoteField_get_reserve1(PyCThostFtdcQryForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcQryForQuoteField_set_reserve1(PyCThostFtdcQryForQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryForQuoteField_get_ExchangeID(PyCThostFtdcQryForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcQryForQuoteField_set_ExchangeID(PyCThostFtdcQryForQuoteField *self, PyObject* val, void *closure) {
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
            
///开始时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcQryForQuoteField_get_InsertTimeStart(PyCThostFtdcQryForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InsertTimeStart, (Py_ssize_t)sizeof(self->data.InsertTimeStart));
    return PyBytes_FromString(self->data.InsertTimeStart);
}

///开始时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcQryForQuoteField_set_InsertTimeStart(PyCThostFtdcQryForQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryForQuoteField_get_InsertTimeEnd(PyCThostFtdcQryForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InsertTimeEnd, (Py_ssize_t)sizeof(self->data.InsertTimeEnd));
    return PyBytes_FromString(self->data.InsertTimeEnd);
}

///结束时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcQryForQuoteField_set_InsertTimeEnd(PyCThostFtdcQryForQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryForQuoteField_get_InvestUnitID(PyCThostFtdcQryForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcQryForQuoteField_set_InvestUnitID(PyCThostFtdcQryForQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryForQuoteField_get_InstrumentID(PyCThostFtdcQryForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcQryForQuoteField_set_InstrumentID(PyCThostFtdcQryForQuoteField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQryForQuoteField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQryForQuoteField_get_BrokerID, (setter)PyCThostFtdcQryForQuoteField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcQryForQuoteField_get_InvestorID, (setter)PyCThostFtdcQryForQuoteField_set_InvestorID, (char *)"InvestorID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcQryForQuoteField_get_reserve1, (setter)PyCThostFtdcQryForQuoteField_set_reserve1, (char *)"reserve1", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcQryForQuoteField_get_ExchangeID, (setter)PyCThostFtdcQryForQuoteField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///开始时间 
    {(char *)"InsertTimeStart", (getter)PyCThostFtdcQryForQuoteField_get_InsertTimeStart, (setter)PyCThostFtdcQryForQuoteField_set_InsertTimeStart, (char *)"InsertTimeStart", NULL},
    ///结束时间 
    {(char *)"InsertTimeEnd", (getter)PyCThostFtdcQryForQuoteField_get_InsertTimeEnd, (setter)PyCThostFtdcQryForQuoteField_set_InsertTimeEnd, (char *)"InsertTimeEnd", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcQryForQuoteField_get_InvestUnitID, (setter)PyCThostFtdcQryForQuoteField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcQryForQuoteField_get_InstrumentID, (setter)PyCThostFtdcQryForQuoteField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryForQuoteFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryForQuoteField",	/* tp_name */
	sizeof(PyCThostFtdcQryForQuoteField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryForQuoteField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryForQuoteField_repr,   /* tp_repr */
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
	"CThostFtdcQryForQuoteField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryForQuoteField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryForQuoteField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryForQuoteField_new,       /* tp_new */
};

int PyCThostFtdcQryForQuoteFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryForQuoteField  */
	if (PyType_Ready(&PyCThostFtdcQryForQuoteFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryForQuoteField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryForQuoteFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryForQuoteField", (PyObject *)&PyCThostFtdcQryForQuoteFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryForQuoteField to module");
        Py_DECREF(&PyCThostFtdcQryForQuoteFieldType);
		return -1;
    }

    return 0;
}
