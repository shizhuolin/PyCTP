
#include "PyCThostFtdcQryExecOrderField.h"

///执行宣告查询

static PyObject *PyCThostFtdcQryExecOrderField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryExecOrderField *self = (PyCThostFtdcQryExecOrderField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryExecOrderField_init(PyCThostFtdcQryExecOrderField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "ExchangeID", "ExecOrderSysID", "InsertTimeStart", "InsertTimeEnd", "InstrumentID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QryExecOrderField_BrokerID = NULL;
    Py_ssize_t QryExecOrderField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *QryExecOrderField_InvestorID = NULL;
    Py_ssize_t QryExecOrderField_InvestorID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *QryExecOrderField_reserve1 = NULL;
    Py_ssize_t QryExecOrderField_reserve1_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *QryExecOrderField_ExchangeID = NULL;
    Py_ssize_t QryExecOrderField_ExchangeID_len = 0;
            
    ///执行宣告编号
    // TThostFtdcExecOrderSysIDType char[21]
    const char *QryExecOrderField_ExecOrderSysID = NULL;
    Py_ssize_t QryExecOrderField_ExecOrderSysID_len = 0;
            
    ///开始时间
    // TThostFtdcTimeType char[9]
    const char *QryExecOrderField_InsertTimeStart = NULL;
    Py_ssize_t QryExecOrderField_InsertTimeStart_len = 0;
            
    ///结束时间
    // TThostFtdcTimeType char[9]
    const char *QryExecOrderField_InsertTimeEnd = NULL;
    Py_ssize_t QryExecOrderField_InsertTimeEnd_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *QryExecOrderField_InstrumentID = NULL;
    Py_ssize_t QryExecOrderField_InstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#", (char **)kwlist
#endif

        , &QryExecOrderField_BrokerID, &QryExecOrderField_BrokerID_len 
        , &QryExecOrderField_InvestorID, &QryExecOrderField_InvestorID_len 
        , &QryExecOrderField_reserve1, &QryExecOrderField_reserve1_len 
        , &QryExecOrderField_ExchangeID, &QryExecOrderField_ExchangeID_len 
        , &QryExecOrderField_ExecOrderSysID, &QryExecOrderField_ExecOrderSysID_len 
        , &QryExecOrderField_InsertTimeStart, &QryExecOrderField_InsertTimeStart_len 
        , &QryExecOrderField_InsertTimeEnd, &QryExecOrderField_InsertTimeEnd_len 
        , &QryExecOrderField_InstrumentID, &QryExecOrderField_InstrumentID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QryExecOrderField_BrokerID != NULL ) {
        if(QryExecOrderField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QryExecOrderField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QryExecOrderField_BrokerID, QryExecOrderField_BrokerID_len);        
        strncpy(self->data.BrokerID, QryExecOrderField_BrokerID, sizeof(self->data.BrokerID) );
        QryExecOrderField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( QryExecOrderField_InvestorID != NULL ) {
        if(QryExecOrderField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", QryExecOrderField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, QryExecOrderField_InvestorID, QryExecOrderField_InvestorID_len);        
        strncpy(self->data.InvestorID, QryExecOrderField_InvestorID, sizeof(self->data.InvestorID) );
        QryExecOrderField_InvestorID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( QryExecOrderField_reserve1 != NULL ) {
        if(QryExecOrderField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", QryExecOrderField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, QryExecOrderField_reserve1, QryExecOrderField_reserve1_len);        
        strncpy(self->data.reserve1, QryExecOrderField_reserve1, sizeof(self->data.reserve1) );
        QryExecOrderField_reserve1 = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( QryExecOrderField_ExchangeID != NULL ) {
        if(QryExecOrderField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", QryExecOrderField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, QryExecOrderField_ExchangeID, QryExecOrderField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, QryExecOrderField_ExchangeID, sizeof(self->data.ExchangeID) );
        QryExecOrderField_ExchangeID = NULL;
    }
            
    ///执行宣告编号
    // TThostFtdcExecOrderSysIDType char[21]
    if( QryExecOrderField_ExecOrderSysID != NULL ) {
        if(QryExecOrderField_ExecOrderSysID_len > (Py_ssize_t)sizeof(self->data.ExecOrderSysID)) {
            PyErr_Format(PyExc_ValueError, "ExecOrderSysID too long: length=%zd (max allowed is %zd)", QryExecOrderField_ExecOrderSysID_len, (Py_ssize_t)sizeof(self->data.ExecOrderSysID));
            return -1;
        }
        // memset(self->data.ExecOrderSysID, 0, sizeof(self->data.ExecOrderSysID));
        // memcpy(self->data.ExecOrderSysID, QryExecOrderField_ExecOrderSysID, QryExecOrderField_ExecOrderSysID_len);        
        strncpy(self->data.ExecOrderSysID, QryExecOrderField_ExecOrderSysID, sizeof(self->data.ExecOrderSysID) );
        QryExecOrderField_ExecOrderSysID = NULL;
    }
            
    ///开始时间
    // TThostFtdcTimeType char[9]
    if( QryExecOrderField_InsertTimeStart != NULL ) {
        if(QryExecOrderField_InsertTimeStart_len > (Py_ssize_t)sizeof(self->data.InsertTimeStart)) {
            PyErr_Format(PyExc_ValueError, "InsertTimeStart too long: length=%zd (max allowed is %zd)", QryExecOrderField_InsertTimeStart_len, (Py_ssize_t)sizeof(self->data.InsertTimeStart));
            return -1;
        }
        // memset(self->data.InsertTimeStart, 0, sizeof(self->data.InsertTimeStart));
        // memcpy(self->data.InsertTimeStart, QryExecOrderField_InsertTimeStart, QryExecOrderField_InsertTimeStart_len);        
        strncpy(self->data.InsertTimeStart, QryExecOrderField_InsertTimeStart, sizeof(self->data.InsertTimeStart) );
        QryExecOrderField_InsertTimeStart = NULL;
    }
            
    ///结束时间
    // TThostFtdcTimeType char[9]
    if( QryExecOrderField_InsertTimeEnd != NULL ) {
        if(QryExecOrderField_InsertTimeEnd_len > (Py_ssize_t)sizeof(self->data.InsertTimeEnd)) {
            PyErr_Format(PyExc_ValueError, "InsertTimeEnd too long: length=%zd (max allowed is %zd)", QryExecOrderField_InsertTimeEnd_len, (Py_ssize_t)sizeof(self->data.InsertTimeEnd));
            return -1;
        }
        // memset(self->data.InsertTimeEnd, 0, sizeof(self->data.InsertTimeEnd));
        // memcpy(self->data.InsertTimeEnd, QryExecOrderField_InsertTimeEnd, QryExecOrderField_InsertTimeEnd_len);        
        strncpy(self->data.InsertTimeEnd, QryExecOrderField_InsertTimeEnd, sizeof(self->data.InsertTimeEnd) );
        QryExecOrderField_InsertTimeEnd = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( QryExecOrderField_InstrumentID != NULL ) {
        if(QryExecOrderField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", QryExecOrderField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, QryExecOrderField_InstrumentID, QryExecOrderField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, QryExecOrderField_InstrumentID, sizeof(self->data.InstrumentID) );
        QryExecOrderField_InstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryExecOrderField_dealloc(PyCThostFtdcQryExecOrderField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryExecOrderField_repr(PyCThostFtdcQryExecOrderField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"ExecOrderSysID", self->data.ExecOrderSysID//, (Py_ssize_t)sizeof(self->data.ExecOrderSysID) 
        ,"InsertTimeStart", self->data.InsertTimeStart//, (Py_ssize_t)sizeof(self->data.InsertTimeStart) 
        ,"InsertTimeEnd", self->data.InsertTimeEnd//, (Py_ssize_t)sizeof(self->data.InsertTimeEnd) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryExecOrderField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQryExecOrderField_get_BrokerID(PyCThostFtdcQryExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQryExecOrderField_set_BrokerID(PyCThostFtdcQryExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryExecOrderField_get_InvestorID(PyCThostFtdcQryExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcQryExecOrderField_set_InvestorID(PyCThostFtdcQryExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryExecOrderField_get_reserve1(PyCThostFtdcQryExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcQryExecOrderField_set_reserve1(PyCThostFtdcQryExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryExecOrderField_get_ExchangeID(PyCThostFtdcQryExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcQryExecOrderField_set_ExchangeID(PyCThostFtdcQryExecOrderField *self, PyObject* val, void *closure) {
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
            
///执行宣告编号
// TThostFtdcExecOrderSysIDType char[21]
static PyObject *PyCThostFtdcQryExecOrderField_get_ExecOrderSysID(PyCThostFtdcQryExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExecOrderSysID, (Py_ssize_t)sizeof(self->data.ExecOrderSysID));
    return PyBytes_FromString(self->data.ExecOrderSysID);
}

///执行宣告编号
// TThostFtdcExecOrderSysIDType char[21]
static int PyCThostFtdcQryExecOrderField_set_ExecOrderSysID(PyCThostFtdcQryExecOrderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExecOrderSysID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ExecOrderSysID)) {
        PyErr_SetString(PyExc_ValueError, "ExecOrderSysID must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.ExecOrderSysID, 0, sizeof(self->data.ExecOrderSysID));
    // memcpy(self->data.ExecOrderSysID, buf, len);
    strncpy(self->data.ExecOrderSysID, buf, sizeof(self->data.ExecOrderSysID));
    return 0;
}
            
///开始时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcQryExecOrderField_get_InsertTimeStart(PyCThostFtdcQryExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InsertTimeStart, (Py_ssize_t)sizeof(self->data.InsertTimeStart));
    return PyBytes_FromString(self->data.InsertTimeStart);
}

///开始时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcQryExecOrderField_set_InsertTimeStart(PyCThostFtdcQryExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryExecOrderField_get_InsertTimeEnd(PyCThostFtdcQryExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InsertTimeEnd, (Py_ssize_t)sizeof(self->data.InsertTimeEnd));
    return PyBytes_FromString(self->data.InsertTimeEnd);
}

///结束时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcQryExecOrderField_set_InsertTimeEnd(PyCThostFtdcQryExecOrderField *self, PyObject* val, void *closure) {
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
            
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcQryExecOrderField_get_InstrumentID(PyCThostFtdcQryExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcQryExecOrderField_set_InstrumentID(PyCThostFtdcQryExecOrderField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQryExecOrderField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQryExecOrderField_get_BrokerID, (setter)PyCThostFtdcQryExecOrderField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcQryExecOrderField_get_InvestorID, (setter)PyCThostFtdcQryExecOrderField_set_InvestorID, (char *)"InvestorID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcQryExecOrderField_get_reserve1, (setter)PyCThostFtdcQryExecOrderField_set_reserve1, (char *)"reserve1", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcQryExecOrderField_get_ExchangeID, (setter)PyCThostFtdcQryExecOrderField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///执行宣告编号 
    {(char *)"ExecOrderSysID", (getter)PyCThostFtdcQryExecOrderField_get_ExecOrderSysID, (setter)PyCThostFtdcQryExecOrderField_set_ExecOrderSysID, (char *)"ExecOrderSysID", NULL},
    ///开始时间 
    {(char *)"InsertTimeStart", (getter)PyCThostFtdcQryExecOrderField_get_InsertTimeStart, (setter)PyCThostFtdcQryExecOrderField_set_InsertTimeStart, (char *)"InsertTimeStart", NULL},
    ///结束时间 
    {(char *)"InsertTimeEnd", (getter)PyCThostFtdcQryExecOrderField_get_InsertTimeEnd, (setter)PyCThostFtdcQryExecOrderField_set_InsertTimeEnd, (char *)"InsertTimeEnd", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcQryExecOrderField_get_InstrumentID, (setter)PyCThostFtdcQryExecOrderField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryExecOrderFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryExecOrderField",	/* tp_name */
	sizeof(PyCThostFtdcQryExecOrderField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryExecOrderField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryExecOrderField_repr,   /* tp_repr */
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
	"CThostFtdcQryExecOrderField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryExecOrderField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryExecOrderField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryExecOrderField_new,       /* tp_new */
};

int PyCThostFtdcQryExecOrderFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryExecOrderField  */
	if (PyType_Ready(&PyCThostFtdcQryExecOrderFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryExecOrderField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryExecOrderFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryExecOrderField", (PyObject *)&PyCThostFtdcQryExecOrderFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryExecOrderField to module");
        Py_DECREF(&PyCThostFtdcQryExecOrderFieldType);
		return -1;
    }

    return 0;
}
