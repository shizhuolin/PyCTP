
#include "PyCThostFtdcQryOptionSelfCloseField.h"

///期权自对冲查询

static PyObject *PyCThostFtdcQryOptionSelfCloseField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryOptionSelfCloseField *self = (PyCThostFtdcQryOptionSelfCloseField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryOptionSelfCloseField_init(PyCThostFtdcQryOptionSelfCloseField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "ExchangeID", "OptionSelfCloseSysID", "InsertTimeStart", "InsertTimeEnd", "InstrumentID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QryOptionSelfCloseField_BrokerID = NULL;
    Py_ssize_t QryOptionSelfCloseField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *QryOptionSelfCloseField_InvestorID = NULL;
    Py_ssize_t QryOptionSelfCloseField_InvestorID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *QryOptionSelfCloseField_reserve1 = NULL;
    Py_ssize_t QryOptionSelfCloseField_reserve1_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *QryOptionSelfCloseField_ExchangeID = NULL;
    Py_ssize_t QryOptionSelfCloseField_ExchangeID_len = 0;
            
    ///期权自对冲编号
    // TThostFtdcOrderSysIDType char[21]
    const char *QryOptionSelfCloseField_OptionSelfCloseSysID = NULL;
    Py_ssize_t QryOptionSelfCloseField_OptionSelfCloseSysID_len = 0;
            
    ///开始时间
    // TThostFtdcTimeType char[9]
    const char *QryOptionSelfCloseField_InsertTimeStart = NULL;
    Py_ssize_t QryOptionSelfCloseField_InsertTimeStart_len = 0;
            
    ///结束时间
    // TThostFtdcTimeType char[9]
    const char *QryOptionSelfCloseField_InsertTimeEnd = NULL;
    Py_ssize_t QryOptionSelfCloseField_InsertTimeEnd_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *QryOptionSelfCloseField_InstrumentID = NULL;
    Py_ssize_t QryOptionSelfCloseField_InstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#", (char **)kwlist
#endif

        , &QryOptionSelfCloseField_BrokerID, &QryOptionSelfCloseField_BrokerID_len 
        , &QryOptionSelfCloseField_InvestorID, &QryOptionSelfCloseField_InvestorID_len 
        , &QryOptionSelfCloseField_reserve1, &QryOptionSelfCloseField_reserve1_len 
        , &QryOptionSelfCloseField_ExchangeID, &QryOptionSelfCloseField_ExchangeID_len 
        , &QryOptionSelfCloseField_OptionSelfCloseSysID, &QryOptionSelfCloseField_OptionSelfCloseSysID_len 
        , &QryOptionSelfCloseField_InsertTimeStart, &QryOptionSelfCloseField_InsertTimeStart_len 
        , &QryOptionSelfCloseField_InsertTimeEnd, &QryOptionSelfCloseField_InsertTimeEnd_len 
        , &QryOptionSelfCloseField_InstrumentID, &QryOptionSelfCloseField_InstrumentID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QryOptionSelfCloseField_BrokerID != NULL ) {
        if(QryOptionSelfCloseField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QryOptionSelfCloseField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QryOptionSelfCloseField_BrokerID, QryOptionSelfCloseField_BrokerID_len);        
        strncpy(self->data.BrokerID, QryOptionSelfCloseField_BrokerID, sizeof(self->data.BrokerID) );
        QryOptionSelfCloseField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( QryOptionSelfCloseField_InvestorID != NULL ) {
        if(QryOptionSelfCloseField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", QryOptionSelfCloseField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, QryOptionSelfCloseField_InvestorID, QryOptionSelfCloseField_InvestorID_len);        
        strncpy(self->data.InvestorID, QryOptionSelfCloseField_InvestorID, sizeof(self->data.InvestorID) );
        QryOptionSelfCloseField_InvestorID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( QryOptionSelfCloseField_reserve1 != NULL ) {
        if(QryOptionSelfCloseField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", QryOptionSelfCloseField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, QryOptionSelfCloseField_reserve1, QryOptionSelfCloseField_reserve1_len);        
        strncpy(self->data.reserve1, QryOptionSelfCloseField_reserve1, sizeof(self->data.reserve1) );
        QryOptionSelfCloseField_reserve1 = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( QryOptionSelfCloseField_ExchangeID != NULL ) {
        if(QryOptionSelfCloseField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", QryOptionSelfCloseField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, QryOptionSelfCloseField_ExchangeID, QryOptionSelfCloseField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, QryOptionSelfCloseField_ExchangeID, sizeof(self->data.ExchangeID) );
        QryOptionSelfCloseField_ExchangeID = NULL;
    }
            
    ///期权自对冲编号
    // TThostFtdcOrderSysIDType char[21]
    if( QryOptionSelfCloseField_OptionSelfCloseSysID != NULL ) {
        if(QryOptionSelfCloseField_OptionSelfCloseSysID_len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseSysID)) {
            PyErr_Format(PyExc_ValueError, "OptionSelfCloseSysID too long: length=%zd (max allowed is %zd)", QryOptionSelfCloseField_OptionSelfCloseSysID_len, (Py_ssize_t)sizeof(self->data.OptionSelfCloseSysID));
            return -1;
        }
        // memset(self->data.OptionSelfCloseSysID, 0, sizeof(self->data.OptionSelfCloseSysID));
        // memcpy(self->data.OptionSelfCloseSysID, QryOptionSelfCloseField_OptionSelfCloseSysID, QryOptionSelfCloseField_OptionSelfCloseSysID_len);        
        strncpy(self->data.OptionSelfCloseSysID, QryOptionSelfCloseField_OptionSelfCloseSysID, sizeof(self->data.OptionSelfCloseSysID) );
        QryOptionSelfCloseField_OptionSelfCloseSysID = NULL;
    }
            
    ///开始时间
    // TThostFtdcTimeType char[9]
    if( QryOptionSelfCloseField_InsertTimeStart != NULL ) {
        if(QryOptionSelfCloseField_InsertTimeStart_len > (Py_ssize_t)sizeof(self->data.InsertTimeStart)) {
            PyErr_Format(PyExc_ValueError, "InsertTimeStart too long: length=%zd (max allowed is %zd)", QryOptionSelfCloseField_InsertTimeStart_len, (Py_ssize_t)sizeof(self->data.InsertTimeStart));
            return -1;
        }
        // memset(self->data.InsertTimeStart, 0, sizeof(self->data.InsertTimeStart));
        // memcpy(self->data.InsertTimeStart, QryOptionSelfCloseField_InsertTimeStart, QryOptionSelfCloseField_InsertTimeStart_len);        
        strncpy(self->data.InsertTimeStart, QryOptionSelfCloseField_InsertTimeStart, sizeof(self->data.InsertTimeStart) );
        QryOptionSelfCloseField_InsertTimeStart = NULL;
    }
            
    ///结束时间
    // TThostFtdcTimeType char[9]
    if( QryOptionSelfCloseField_InsertTimeEnd != NULL ) {
        if(QryOptionSelfCloseField_InsertTimeEnd_len > (Py_ssize_t)sizeof(self->data.InsertTimeEnd)) {
            PyErr_Format(PyExc_ValueError, "InsertTimeEnd too long: length=%zd (max allowed is %zd)", QryOptionSelfCloseField_InsertTimeEnd_len, (Py_ssize_t)sizeof(self->data.InsertTimeEnd));
            return -1;
        }
        // memset(self->data.InsertTimeEnd, 0, sizeof(self->data.InsertTimeEnd));
        // memcpy(self->data.InsertTimeEnd, QryOptionSelfCloseField_InsertTimeEnd, QryOptionSelfCloseField_InsertTimeEnd_len);        
        strncpy(self->data.InsertTimeEnd, QryOptionSelfCloseField_InsertTimeEnd, sizeof(self->data.InsertTimeEnd) );
        QryOptionSelfCloseField_InsertTimeEnd = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( QryOptionSelfCloseField_InstrumentID != NULL ) {
        if(QryOptionSelfCloseField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", QryOptionSelfCloseField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, QryOptionSelfCloseField_InstrumentID, QryOptionSelfCloseField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, QryOptionSelfCloseField_InstrumentID, sizeof(self->data.InstrumentID) );
        QryOptionSelfCloseField_InstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryOptionSelfCloseField_dealloc(PyCThostFtdcQryOptionSelfCloseField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryOptionSelfCloseField_repr(PyCThostFtdcQryOptionSelfCloseField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"OptionSelfCloseSysID", self->data.OptionSelfCloseSysID//, (Py_ssize_t)sizeof(self->data.OptionSelfCloseSysID) 
        ,"InsertTimeStart", self->data.InsertTimeStart//, (Py_ssize_t)sizeof(self->data.InsertTimeStart) 
        ,"InsertTimeEnd", self->data.InsertTimeEnd//, (Py_ssize_t)sizeof(self->data.InsertTimeEnd) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryOptionSelfCloseField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQryOptionSelfCloseField_get_BrokerID(PyCThostFtdcQryOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQryOptionSelfCloseField_set_BrokerID(PyCThostFtdcQryOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryOptionSelfCloseField_get_InvestorID(PyCThostFtdcQryOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcQryOptionSelfCloseField_set_InvestorID(PyCThostFtdcQryOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryOptionSelfCloseField_get_reserve1(PyCThostFtdcQryOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcQryOptionSelfCloseField_set_reserve1(PyCThostFtdcQryOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryOptionSelfCloseField_get_ExchangeID(PyCThostFtdcQryOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcQryOptionSelfCloseField_set_ExchangeID(PyCThostFtdcQryOptionSelfCloseField *self, PyObject* val, void *closure) {
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
            
///期权自对冲编号
// TThostFtdcOrderSysIDType char[21]
static PyObject *PyCThostFtdcQryOptionSelfCloseField_get_OptionSelfCloseSysID(PyCThostFtdcQryOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OptionSelfCloseSysID, (Py_ssize_t)sizeof(self->data.OptionSelfCloseSysID));
    return PyBytes_FromString(self->data.OptionSelfCloseSysID);
}

///期权自对冲编号
// TThostFtdcOrderSysIDType char[21]
static int PyCThostFtdcQryOptionSelfCloseField_set_OptionSelfCloseSysID(PyCThostFtdcQryOptionSelfCloseField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OptionSelfCloseSysID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseSysID)) {
        PyErr_SetString(PyExc_ValueError, "OptionSelfCloseSysID must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.OptionSelfCloseSysID, 0, sizeof(self->data.OptionSelfCloseSysID));
    // memcpy(self->data.OptionSelfCloseSysID, buf, len);
    strncpy(self->data.OptionSelfCloseSysID, buf, sizeof(self->data.OptionSelfCloseSysID));
    return 0;
}
            
///开始时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcQryOptionSelfCloseField_get_InsertTimeStart(PyCThostFtdcQryOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InsertTimeStart, (Py_ssize_t)sizeof(self->data.InsertTimeStart));
    return PyBytes_FromString(self->data.InsertTimeStart);
}

///开始时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcQryOptionSelfCloseField_set_InsertTimeStart(PyCThostFtdcQryOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryOptionSelfCloseField_get_InsertTimeEnd(PyCThostFtdcQryOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InsertTimeEnd, (Py_ssize_t)sizeof(self->data.InsertTimeEnd));
    return PyBytes_FromString(self->data.InsertTimeEnd);
}

///结束时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcQryOptionSelfCloseField_set_InsertTimeEnd(PyCThostFtdcQryOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryOptionSelfCloseField_get_InstrumentID(PyCThostFtdcQryOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcQryOptionSelfCloseField_set_InstrumentID(PyCThostFtdcQryOptionSelfCloseField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQryOptionSelfCloseField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQryOptionSelfCloseField_get_BrokerID, (setter)PyCThostFtdcQryOptionSelfCloseField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcQryOptionSelfCloseField_get_InvestorID, (setter)PyCThostFtdcQryOptionSelfCloseField_set_InvestorID, (char *)"InvestorID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcQryOptionSelfCloseField_get_reserve1, (setter)PyCThostFtdcQryOptionSelfCloseField_set_reserve1, (char *)"reserve1", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcQryOptionSelfCloseField_get_ExchangeID, (setter)PyCThostFtdcQryOptionSelfCloseField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///期权自对冲编号 
    {(char *)"OptionSelfCloseSysID", (getter)PyCThostFtdcQryOptionSelfCloseField_get_OptionSelfCloseSysID, (setter)PyCThostFtdcQryOptionSelfCloseField_set_OptionSelfCloseSysID, (char *)"OptionSelfCloseSysID", NULL},
    ///开始时间 
    {(char *)"InsertTimeStart", (getter)PyCThostFtdcQryOptionSelfCloseField_get_InsertTimeStart, (setter)PyCThostFtdcQryOptionSelfCloseField_set_InsertTimeStart, (char *)"InsertTimeStart", NULL},
    ///结束时间 
    {(char *)"InsertTimeEnd", (getter)PyCThostFtdcQryOptionSelfCloseField_get_InsertTimeEnd, (setter)PyCThostFtdcQryOptionSelfCloseField_set_InsertTimeEnd, (char *)"InsertTimeEnd", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcQryOptionSelfCloseField_get_InstrumentID, (setter)PyCThostFtdcQryOptionSelfCloseField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryOptionSelfCloseFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryOptionSelfCloseField",	/* tp_name */
	sizeof(PyCThostFtdcQryOptionSelfCloseField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryOptionSelfCloseField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryOptionSelfCloseField_repr,   /* tp_repr */
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
	"CThostFtdcQryOptionSelfCloseField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryOptionSelfCloseField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryOptionSelfCloseField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryOptionSelfCloseField_new,       /* tp_new */
};

int PyCThostFtdcQryOptionSelfCloseFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryOptionSelfCloseField  */
	if (PyType_Ready(&PyCThostFtdcQryOptionSelfCloseFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryOptionSelfCloseField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryOptionSelfCloseFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryOptionSelfCloseField", (PyObject *)&PyCThostFtdcQryOptionSelfCloseFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryOptionSelfCloseField to module");
        Py_DECREF(&PyCThostFtdcQryOptionSelfCloseFieldType);
		return -1;
    }

    return 0;
}
