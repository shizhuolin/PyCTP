
#include "PyCThostFtdcInvestorInfoCommRecField.h"

///投资者申报费阶梯收取记录

static PyObject *PyCThostFtdcInvestorInfoCommRecField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInvestorInfoCommRecField *self = (PyCThostFtdcInvestorInfoCommRecField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcInvestorInfoCommRecField_init(PyCThostFtdcInvestorInfoCommRecField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "BrokerID", "InvestorID", "InstrumentID", "OrderCount", "OrderActionCount", "ForQuoteCnt", "InfoComm", "IsOptSeries", "ProductID", "InfoCnt",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *InvestorInfoCommRecField_ExchangeID = NULL;
    Py_ssize_t InvestorInfoCommRecField_ExchangeID_len = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *InvestorInfoCommRecField_BrokerID = NULL;
    Py_ssize_t InvestorInfoCommRecField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *InvestorInfoCommRecField_InvestorID = NULL;
    Py_ssize_t InvestorInfoCommRecField_InvestorID_len = 0;
            
    ///商品代码
    // TThostFtdcInstrumentIDType char[81]
    const char *InvestorInfoCommRecField_InstrumentID = NULL;
    Py_ssize_t InvestorInfoCommRecField_InstrumentID_len = 0;
            
    ///报单总笔数
    // TThostFtdcVolumeType int
    int InvestorInfoCommRecField_OrderCount = 0;
        
    ///撤单总笔数
    // TThostFtdcVolumeType int
    int InvestorInfoCommRecField_OrderActionCount = 0;
        
    ///询价总次数
    // TThostFtdcVolumeType int
    int InvestorInfoCommRecField_ForQuoteCnt = 0;
        
    ///申报费
    // TThostFtdcMoneyType double
    double InvestorInfoCommRecField_InfoComm = 0.0;
        
    ///是否期权系列
    // TThostFtdcBoolType int
    int InvestorInfoCommRecField_IsOptSeries = 0;
        
    ///品种代码
    // TThostFtdcProductIDType char[41]
    const char *InvestorInfoCommRecField_ProductID = NULL;
    Py_ssize_t InvestorInfoCommRecField_ProductID_len = 0;
            
    ///信息量总量
    // TThostFtdcVolumeType int
    int InvestorInfoCommRecField_InfoCnt = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#iiidiy#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#iiidis#i", (char **)kwlist
#endif

        , &InvestorInfoCommRecField_ExchangeID, &InvestorInfoCommRecField_ExchangeID_len 
        , &InvestorInfoCommRecField_BrokerID, &InvestorInfoCommRecField_BrokerID_len 
        , &InvestorInfoCommRecField_InvestorID, &InvestorInfoCommRecField_InvestorID_len 
        , &InvestorInfoCommRecField_InstrumentID, &InvestorInfoCommRecField_InstrumentID_len 
        , &InvestorInfoCommRecField_OrderCount 
        , &InvestorInfoCommRecField_OrderActionCount 
        , &InvestorInfoCommRecField_ForQuoteCnt 
        , &InvestorInfoCommRecField_InfoComm 
        , &InvestorInfoCommRecField_IsOptSeries 
        , &InvestorInfoCommRecField_ProductID, &InvestorInfoCommRecField_ProductID_len 
        , &InvestorInfoCommRecField_InfoCnt 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( InvestorInfoCommRecField_ExchangeID != NULL ) {
        if(InvestorInfoCommRecField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", InvestorInfoCommRecField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, InvestorInfoCommRecField_ExchangeID, InvestorInfoCommRecField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, InvestorInfoCommRecField_ExchangeID, sizeof(self->data.ExchangeID) );
        InvestorInfoCommRecField_ExchangeID = NULL;
    }
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( InvestorInfoCommRecField_BrokerID != NULL ) {
        if(InvestorInfoCommRecField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", InvestorInfoCommRecField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, InvestorInfoCommRecField_BrokerID, InvestorInfoCommRecField_BrokerID_len);        
        strncpy(self->data.BrokerID, InvestorInfoCommRecField_BrokerID, sizeof(self->data.BrokerID) );
        InvestorInfoCommRecField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( InvestorInfoCommRecField_InvestorID != NULL ) {
        if(InvestorInfoCommRecField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", InvestorInfoCommRecField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, InvestorInfoCommRecField_InvestorID, InvestorInfoCommRecField_InvestorID_len);        
        strncpy(self->data.InvestorID, InvestorInfoCommRecField_InvestorID, sizeof(self->data.InvestorID) );
        InvestorInfoCommRecField_InvestorID = NULL;
    }
            
    ///商品代码
    // TThostFtdcInstrumentIDType char[81]
    if( InvestorInfoCommRecField_InstrumentID != NULL ) {
        if(InvestorInfoCommRecField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", InvestorInfoCommRecField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, InvestorInfoCommRecField_InstrumentID, InvestorInfoCommRecField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, InvestorInfoCommRecField_InstrumentID, sizeof(self->data.InstrumentID) );
        InvestorInfoCommRecField_InstrumentID = NULL;
    }
            
    ///报单总笔数
    // TThostFtdcVolumeType int
    self->data.OrderCount = InvestorInfoCommRecField_OrderCount;
        
    ///撤单总笔数
    // TThostFtdcVolumeType int
    self->data.OrderActionCount = InvestorInfoCommRecField_OrderActionCount;
        
    ///询价总次数
    // TThostFtdcVolumeType int
    self->data.ForQuoteCnt = InvestorInfoCommRecField_ForQuoteCnt;
        
    ///申报费
    // TThostFtdcMoneyType double
    self->data.InfoComm = InvestorInfoCommRecField_InfoComm;
        
    ///是否期权系列
    // TThostFtdcBoolType int
    self->data.IsOptSeries = InvestorInfoCommRecField_IsOptSeries;
        
    ///品种代码
    // TThostFtdcProductIDType char[41]
    if( InvestorInfoCommRecField_ProductID != NULL ) {
        if(InvestorInfoCommRecField_ProductID_len > (Py_ssize_t)sizeof(self->data.ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is %zd)", InvestorInfoCommRecField_ProductID_len, (Py_ssize_t)sizeof(self->data.ProductID));
            return -1;
        }
        // memset(self->data.ProductID, 0, sizeof(self->data.ProductID));
        // memcpy(self->data.ProductID, InvestorInfoCommRecField_ProductID, InvestorInfoCommRecField_ProductID_len);        
        strncpy(self->data.ProductID, InvestorInfoCommRecField_ProductID, sizeof(self->data.ProductID) );
        InvestorInfoCommRecField_ProductID = NULL;
    }
            
    ///信息量总量
    // TThostFtdcVolumeType int
    self->data.InfoCnt = InvestorInfoCommRecField_InfoCnt;
        

    return 0;
}

static void PyCThostFtdcInvestorInfoCommRecField_dealloc(PyCThostFtdcInvestorInfoCommRecField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInvestorInfoCommRecField_repr(PyCThostFtdcInvestorInfoCommRecField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i,s:i,s:i,s:d,s:i,s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:i,s:i,s:i,s:d,s:i,s:s,s:i}"
#endif

        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"OrderCount", self->data.OrderCount 
        ,"OrderActionCount", self->data.OrderActionCount 
        ,"ForQuoteCnt", self->data.ForQuoteCnt 
        ,"InfoComm", self->data.InfoComm 
        ,"IsOptSeries", self->data.IsOptSeries 
        ,"ProductID", self->data.ProductID//, (Py_ssize_t)sizeof(self->data.ProductID) 
        ,"InfoCnt", self->data.InfoCnt 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorInfoCommRecField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcInvestorInfoCommRecField_get_ExchangeID(PyCThostFtdcInvestorInfoCommRecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcInvestorInfoCommRecField_set_ExchangeID(PyCThostFtdcInvestorInfoCommRecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorInfoCommRecField_get_BrokerID(PyCThostFtdcInvestorInfoCommRecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcInvestorInfoCommRecField_set_BrokerID(PyCThostFtdcInvestorInfoCommRecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorInfoCommRecField_get_InvestorID(PyCThostFtdcInvestorInfoCommRecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcInvestorInfoCommRecField_set_InvestorID(PyCThostFtdcInvestorInfoCommRecField *self, PyObject* val, void *closure) {
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
            
///商品代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcInvestorInfoCommRecField_get_InstrumentID(PyCThostFtdcInvestorInfoCommRecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///商品代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcInvestorInfoCommRecField_set_InstrumentID(PyCThostFtdcInvestorInfoCommRecField *self, PyObject* val, void *closure) {
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
            
///报单总笔数
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcInvestorInfoCommRecField_get_OrderCount(PyCThostFtdcInvestorInfoCommRecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.OrderCount);
#else
    return PyInt_FromLong(self->data.OrderCount);
#endif
}

///报单总笔数
// TThostFtdcVolumeType int
static int PyCThostFtdcInvestorInfoCommRecField_set_OrderCount(PyCThostFtdcInvestorInfoCommRecField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderCount Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderCount Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the OrderCount value out of range for C int");
        return -1;
    }
    self->data.OrderCount = (int)buf;
    return 0;
}
        
///撤单总笔数
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcInvestorInfoCommRecField_get_OrderActionCount(PyCThostFtdcInvestorInfoCommRecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.OrderActionCount);
#else
    return PyInt_FromLong(self->data.OrderActionCount);
#endif
}

///撤单总笔数
// TThostFtdcVolumeType int
static int PyCThostFtdcInvestorInfoCommRecField_set_OrderActionCount(PyCThostFtdcInvestorInfoCommRecField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderActionCount Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderActionCount Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the OrderActionCount value out of range for C int");
        return -1;
    }
    self->data.OrderActionCount = (int)buf;
    return 0;
}
        
///询价总次数
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcInvestorInfoCommRecField_get_ForQuoteCnt(PyCThostFtdcInvestorInfoCommRecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.ForQuoteCnt);
#else
    return PyInt_FromLong(self->data.ForQuoteCnt);
#endif
}

///询价总次数
// TThostFtdcVolumeType int
static int PyCThostFtdcInvestorInfoCommRecField_set_ForQuoteCnt(PyCThostFtdcInvestorInfoCommRecField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ForQuoteCnt Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ForQuoteCnt Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the ForQuoteCnt value out of range for C int");
        return -1;
    }
    self->data.ForQuoteCnt = (int)buf;
    return 0;
}
        
///申报费
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorInfoCommRecField_get_InfoComm(PyCThostFtdcInvestorInfoCommRecField *self, void *closure) {
    return PyFloat_FromDouble(self->data.InfoComm);
}

///申报费
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorInfoCommRecField_set_InfoComm(PyCThostFtdcInvestorInfoCommRecField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InfoComm Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.InfoComm = buf;
    return 0;
}
        
///是否期权系列
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcInvestorInfoCommRecField_get_IsOptSeries(PyCThostFtdcInvestorInfoCommRecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsOptSeries);
#else
    return PyInt_FromLong(self->data.IsOptSeries);
#endif
}

///是否期权系列
// TThostFtdcBoolType int
static int PyCThostFtdcInvestorInfoCommRecField_set_IsOptSeries(PyCThostFtdcInvestorInfoCommRecField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsOptSeries Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsOptSeries Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the IsOptSeries value out of range for C int");
        return -1;
    }
    self->data.IsOptSeries = (int)buf;
    return 0;
}
        
///品种代码
// TThostFtdcProductIDType char[41]
static PyObject *PyCThostFtdcInvestorInfoCommRecField_get_ProductID(PyCThostFtdcInvestorInfoCommRecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProductID, (Py_ssize_t)sizeof(self->data.ProductID));
    return PyBytes_FromString(self->data.ProductID);
}

///品种代码
// TThostFtdcProductIDType char[41]
static int PyCThostFtdcInvestorInfoCommRecField_set_ProductID(PyCThostFtdcInvestorInfoCommRecField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ProductID)) {
        PyErr_SetString(PyExc_ValueError, "ProductID must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.ProductID, 0, sizeof(self->data.ProductID));
    // memcpy(self->data.ProductID, buf, len);
    strncpy(self->data.ProductID, buf, sizeof(self->data.ProductID));
    return 0;
}
            
///信息量总量
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcInvestorInfoCommRecField_get_InfoCnt(PyCThostFtdcInvestorInfoCommRecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InfoCnt);
#else
    return PyInt_FromLong(self->data.InfoCnt);
#endif
}

///信息量总量
// TThostFtdcVolumeType int
static int PyCThostFtdcInvestorInfoCommRecField_set_InfoCnt(PyCThostFtdcInvestorInfoCommRecField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InfoCnt Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InfoCnt Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the InfoCnt value out of range for C int");
        return -1;
    }
    self->data.InfoCnt = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcInvestorInfoCommRecField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcInvestorInfoCommRecField_get_ExchangeID, (setter)PyCThostFtdcInvestorInfoCommRecField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcInvestorInfoCommRecField_get_BrokerID, (setter)PyCThostFtdcInvestorInfoCommRecField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcInvestorInfoCommRecField_get_InvestorID, (setter)PyCThostFtdcInvestorInfoCommRecField_set_InvestorID, (char *)"InvestorID", NULL},
    ///商品代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcInvestorInfoCommRecField_get_InstrumentID, (setter)PyCThostFtdcInvestorInfoCommRecField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///报单总笔数 
    {(char *)"OrderCount", (getter)PyCThostFtdcInvestorInfoCommRecField_get_OrderCount, (setter)PyCThostFtdcInvestorInfoCommRecField_set_OrderCount, (char *)"OrderCount", NULL},
    ///撤单总笔数 
    {(char *)"OrderActionCount", (getter)PyCThostFtdcInvestorInfoCommRecField_get_OrderActionCount, (setter)PyCThostFtdcInvestorInfoCommRecField_set_OrderActionCount, (char *)"OrderActionCount", NULL},
    ///询价总次数 
    {(char *)"ForQuoteCnt", (getter)PyCThostFtdcInvestorInfoCommRecField_get_ForQuoteCnt, (setter)PyCThostFtdcInvestorInfoCommRecField_set_ForQuoteCnt, (char *)"ForQuoteCnt", NULL},
    ///申报费 
    {(char *)"InfoComm", (getter)PyCThostFtdcInvestorInfoCommRecField_get_InfoComm, (setter)PyCThostFtdcInvestorInfoCommRecField_set_InfoComm, (char *)"InfoComm", NULL},
    ///是否期权系列 
    {(char *)"IsOptSeries", (getter)PyCThostFtdcInvestorInfoCommRecField_get_IsOptSeries, (setter)PyCThostFtdcInvestorInfoCommRecField_set_IsOptSeries, (char *)"IsOptSeries", NULL},
    ///品种代码 
    {(char *)"ProductID", (getter)PyCThostFtdcInvestorInfoCommRecField_get_ProductID, (setter)PyCThostFtdcInvestorInfoCommRecField_set_ProductID, (char *)"ProductID", NULL},
    ///信息量总量 
    {(char *)"InfoCnt", (getter)PyCThostFtdcInvestorInfoCommRecField_get_InfoCnt, (setter)PyCThostFtdcInvestorInfoCommRecField_set_InfoCnt, (char *)"InfoCnt", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInvestorInfoCommRecFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInvestorInfoCommRecField",	/* tp_name */
	sizeof(PyCThostFtdcInvestorInfoCommRecField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInvestorInfoCommRecField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInvestorInfoCommRecField_repr,   /* tp_repr */
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
	"CThostFtdcInvestorInfoCommRecField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInvestorInfoCommRecField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInvestorInfoCommRecField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInvestorInfoCommRecField_new,       /* tp_new */
};

int PyCThostFtdcInvestorInfoCommRecFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInvestorInfoCommRecField  */
	if (PyType_Ready(&PyCThostFtdcInvestorInfoCommRecFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInvestorInfoCommRecField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInvestorInfoCommRecFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInvestorInfoCommRecField", (PyObject *)&PyCThostFtdcInvestorInfoCommRecFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorInfoCommRecField to module");
        Py_DECREF(&PyCThostFtdcInvestorInfoCommRecFieldType);
		return -1;
    }

    return 0;
}
