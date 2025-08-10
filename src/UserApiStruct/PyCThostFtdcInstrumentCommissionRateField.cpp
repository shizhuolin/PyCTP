
#include "PyCThostFtdcInstrumentCommissionRateField.h"

///合约手续费率

static PyObject *PyCThostFtdcInstrumentCommissionRateField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInstrumentCommissionRateField *self = (PyCThostFtdcInstrumentCommissionRateField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcInstrumentCommissionRateField_init(PyCThostFtdcInstrumentCommissionRateField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "InvestorRange", "BrokerID", "InvestorID", "OpenRatioByMoney", "OpenRatioByVolume", "CloseRatioByMoney", "CloseRatioByVolume", "CloseTodayRatioByMoney", "CloseTodayRatioByVolume", "ExchangeID", "BizType", "InvestUnitID", "InstrumentID",  NULL};


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *InstrumentCommissionRateField_reserve1 = NULL;
    Py_ssize_t InstrumentCommissionRateField_reserve1_len = 0;
            
    ///投资者范围
    // TThostFtdcInvestorRangeType char
    char InstrumentCommissionRateField_InvestorRange = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *InstrumentCommissionRateField_BrokerID = NULL;
    Py_ssize_t InstrumentCommissionRateField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *InstrumentCommissionRateField_InvestorID = NULL;
    Py_ssize_t InstrumentCommissionRateField_InvestorID_len = 0;
            
    ///开仓手续费率
    // TThostFtdcRatioType double
    double InstrumentCommissionRateField_OpenRatioByMoney = 0.0;
        
    ///开仓手续费
    // TThostFtdcRatioType double
    double InstrumentCommissionRateField_OpenRatioByVolume = 0.0;
        
    ///平仓手续费率
    // TThostFtdcRatioType double
    double InstrumentCommissionRateField_CloseRatioByMoney = 0.0;
        
    ///平仓手续费
    // TThostFtdcRatioType double
    double InstrumentCommissionRateField_CloseRatioByVolume = 0.0;
        
    ///平今手续费率
    // TThostFtdcRatioType double
    double InstrumentCommissionRateField_CloseTodayRatioByMoney = 0.0;
        
    ///平今手续费
    // TThostFtdcRatioType double
    double InstrumentCommissionRateField_CloseTodayRatioByVolume = 0.0;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *InstrumentCommissionRateField_ExchangeID = NULL;
    Py_ssize_t InstrumentCommissionRateField_ExchangeID_len = 0;
            
    ///业务类型
    // TThostFtdcBizTypeType char
    char InstrumentCommissionRateField_BizType = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *InstrumentCommissionRateField_InvestUnitID = NULL;
    Py_ssize_t InstrumentCommissionRateField_InvestUnitID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *InstrumentCommissionRateField_InstrumentID = NULL;
    Py_ssize_t InstrumentCommissionRateField_InstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#ddddddy#cy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#s#dddddds#cs#s#", (char **)kwlist
#endif

        , &InstrumentCommissionRateField_reserve1, &InstrumentCommissionRateField_reserve1_len 
        , &InstrumentCommissionRateField_InvestorRange 
        , &InstrumentCommissionRateField_BrokerID, &InstrumentCommissionRateField_BrokerID_len 
        , &InstrumentCommissionRateField_InvestorID, &InstrumentCommissionRateField_InvestorID_len 
        , &InstrumentCommissionRateField_OpenRatioByMoney 
        , &InstrumentCommissionRateField_OpenRatioByVolume 
        , &InstrumentCommissionRateField_CloseRatioByMoney 
        , &InstrumentCommissionRateField_CloseRatioByVolume 
        , &InstrumentCommissionRateField_CloseTodayRatioByMoney 
        , &InstrumentCommissionRateField_CloseTodayRatioByVolume 
        , &InstrumentCommissionRateField_ExchangeID, &InstrumentCommissionRateField_ExchangeID_len 
        , &InstrumentCommissionRateField_BizType 
        , &InstrumentCommissionRateField_InvestUnitID, &InstrumentCommissionRateField_InvestUnitID_len 
        , &InstrumentCommissionRateField_InstrumentID, &InstrumentCommissionRateField_InstrumentID_len 


    )) {
        return -1;
    }


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( InstrumentCommissionRateField_reserve1 != NULL ) {
        if(InstrumentCommissionRateField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", InstrumentCommissionRateField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, InstrumentCommissionRateField_reserve1, InstrumentCommissionRateField_reserve1_len);        
        strncpy(self->data.reserve1, InstrumentCommissionRateField_reserve1, sizeof(self->data.reserve1) );
        InstrumentCommissionRateField_reserve1 = NULL;
    }
            
    ///投资者范围
    // TThostFtdcInvestorRangeType char
    self->data.InvestorRange = InstrumentCommissionRateField_InvestorRange;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( InstrumentCommissionRateField_BrokerID != NULL ) {
        if(InstrumentCommissionRateField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", InstrumentCommissionRateField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, InstrumentCommissionRateField_BrokerID, InstrumentCommissionRateField_BrokerID_len);        
        strncpy(self->data.BrokerID, InstrumentCommissionRateField_BrokerID, sizeof(self->data.BrokerID) );
        InstrumentCommissionRateField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( InstrumentCommissionRateField_InvestorID != NULL ) {
        if(InstrumentCommissionRateField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", InstrumentCommissionRateField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, InstrumentCommissionRateField_InvestorID, InstrumentCommissionRateField_InvestorID_len);        
        strncpy(self->data.InvestorID, InstrumentCommissionRateField_InvestorID, sizeof(self->data.InvestorID) );
        InstrumentCommissionRateField_InvestorID = NULL;
    }
            
    ///开仓手续费率
    // TThostFtdcRatioType double
    self->data.OpenRatioByMoney = InstrumentCommissionRateField_OpenRatioByMoney;
        
    ///开仓手续费
    // TThostFtdcRatioType double
    self->data.OpenRatioByVolume = InstrumentCommissionRateField_OpenRatioByVolume;
        
    ///平仓手续费率
    // TThostFtdcRatioType double
    self->data.CloseRatioByMoney = InstrumentCommissionRateField_CloseRatioByMoney;
        
    ///平仓手续费
    // TThostFtdcRatioType double
    self->data.CloseRatioByVolume = InstrumentCommissionRateField_CloseRatioByVolume;
        
    ///平今手续费率
    // TThostFtdcRatioType double
    self->data.CloseTodayRatioByMoney = InstrumentCommissionRateField_CloseTodayRatioByMoney;
        
    ///平今手续费
    // TThostFtdcRatioType double
    self->data.CloseTodayRatioByVolume = InstrumentCommissionRateField_CloseTodayRatioByVolume;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( InstrumentCommissionRateField_ExchangeID != NULL ) {
        if(InstrumentCommissionRateField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", InstrumentCommissionRateField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, InstrumentCommissionRateField_ExchangeID, InstrumentCommissionRateField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, InstrumentCommissionRateField_ExchangeID, sizeof(self->data.ExchangeID) );
        InstrumentCommissionRateField_ExchangeID = NULL;
    }
            
    ///业务类型
    // TThostFtdcBizTypeType char
    self->data.BizType = InstrumentCommissionRateField_BizType;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( InstrumentCommissionRateField_InvestUnitID != NULL ) {
        if(InstrumentCommissionRateField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", InstrumentCommissionRateField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, InstrumentCommissionRateField_InvestUnitID, InstrumentCommissionRateField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, InstrumentCommissionRateField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        InstrumentCommissionRateField_InvestUnitID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( InstrumentCommissionRateField_InstrumentID != NULL ) {
        if(InstrumentCommissionRateField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", InstrumentCommissionRateField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, InstrumentCommissionRateField_InstrumentID, InstrumentCommissionRateField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, InstrumentCommissionRateField_InstrumentID, sizeof(self->data.InstrumentID) );
        InstrumentCommissionRateField_InstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcInstrumentCommissionRateField_dealloc(PyCThostFtdcInstrumentCommissionRateField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInstrumentCommissionRateField_repr(PyCThostFtdcInstrumentCommissionRateField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:y,s:c,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:s,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:s,s:c,s:s,s:s}"
#endif

        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"InvestorRange", self->data.InvestorRange 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"OpenRatioByMoney", self->data.OpenRatioByMoney 
        ,"OpenRatioByVolume", self->data.OpenRatioByVolume 
        ,"CloseRatioByMoney", self->data.CloseRatioByMoney 
        ,"CloseRatioByVolume", self->data.CloseRatioByVolume 
        ,"CloseTodayRatioByMoney", self->data.CloseTodayRatioByMoney 
        ,"CloseTodayRatioByVolume", self->data.CloseTodayRatioByVolume 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"BizType", self->data.BizType 
        ,"InvestUnitID", self->data.InvestUnitID//, (Py_ssize_t)sizeof(self->data.InvestUnitID) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInstrumentCommissionRateField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcInstrumentCommissionRateField_get_reserve1(PyCThostFtdcInstrumentCommissionRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcInstrumentCommissionRateField_set_reserve1(PyCThostFtdcInstrumentCommissionRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInstrumentCommissionRateField_get_InvestorRange(PyCThostFtdcInstrumentCommissionRateField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.InvestorRange), 1);
}

///投资者范围
// TThostFtdcInvestorRangeType char
static int PyCThostFtdcInstrumentCommissionRateField_set_InvestorRange(PyCThostFtdcInstrumentCommissionRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInstrumentCommissionRateField_get_BrokerID(PyCThostFtdcInstrumentCommissionRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcInstrumentCommissionRateField_set_BrokerID(PyCThostFtdcInstrumentCommissionRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInstrumentCommissionRateField_get_InvestorID(PyCThostFtdcInstrumentCommissionRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcInstrumentCommissionRateField_set_InvestorID(PyCThostFtdcInstrumentCommissionRateField *self, PyObject* val, void *closure) {
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
            
///开仓手续费率
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcInstrumentCommissionRateField_get_OpenRatioByMoney(PyCThostFtdcInstrumentCommissionRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.OpenRatioByMoney);
}

///开仓手续费率
// TThostFtdcRatioType double
static int PyCThostFtdcInstrumentCommissionRateField_set_OpenRatioByMoney(PyCThostFtdcInstrumentCommissionRateField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OpenRatioByMoney Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OpenRatioByMoney = buf;
    return 0;
}
        
///开仓手续费
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcInstrumentCommissionRateField_get_OpenRatioByVolume(PyCThostFtdcInstrumentCommissionRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.OpenRatioByVolume);
}

///开仓手续费
// TThostFtdcRatioType double
static int PyCThostFtdcInstrumentCommissionRateField_set_OpenRatioByVolume(PyCThostFtdcInstrumentCommissionRateField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OpenRatioByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OpenRatioByVolume = buf;
    return 0;
}
        
///平仓手续费率
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcInstrumentCommissionRateField_get_CloseRatioByMoney(PyCThostFtdcInstrumentCommissionRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CloseRatioByMoney);
}

///平仓手续费率
// TThostFtdcRatioType double
static int PyCThostFtdcInstrumentCommissionRateField_set_CloseRatioByMoney(PyCThostFtdcInstrumentCommissionRateField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CloseRatioByMoney Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CloseRatioByMoney = buf;
    return 0;
}
        
///平仓手续费
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcInstrumentCommissionRateField_get_CloseRatioByVolume(PyCThostFtdcInstrumentCommissionRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CloseRatioByVolume);
}

///平仓手续费
// TThostFtdcRatioType double
static int PyCThostFtdcInstrumentCommissionRateField_set_CloseRatioByVolume(PyCThostFtdcInstrumentCommissionRateField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CloseRatioByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CloseRatioByVolume = buf;
    return 0;
}
        
///平今手续费率
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcInstrumentCommissionRateField_get_CloseTodayRatioByMoney(PyCThostFtdcInstrumentCommissionRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CloseTodayRatioByMoney);
}

///平今手续费率
// TThostFtdcRatioType double
static int PyCThostFtdcInstrumentCommissionRateField_set_CloseTodayRatioByMoney(PyCThostFtdcInstrumentCommissionRateField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CloseTodayRatioByMoney Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CloseTodayRatioByMoney = buf;
    return 0;
}
        
///平今手续费
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcInstrumentCommissionRateField_get_CloseTodayRatioByVolume(PyCThostFtdcInstrumentCommissionRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CloseTodayRatioByVolume);
}

///平今手续费
// TThostFtdcRatioType double
static int PyCThostFtdcInstrumentCommissionRateField_set_CloseTodayRatioByVolume(PyCThostFtdcInstrumentCommissionRateField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CloseTodayRatioByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CloseTodayRatioByVolume = buf;
    return 0;
}
        
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcInstrumentCommissionRateField_get_ExchangeID(PyCThostFtdcInstrumentCommissionRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcInstrumentCommissionRateField_set_ExchangeID(PyCThostFtdcInstrumentCommissionRateField *self, PyObject* val, void *closure) {
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
            
///业务类型
// TThostFtdcBizTypeType char
static PyObject *PyCThostFtdcInstrumentCommissionRateField_get_BizType(PyCThostFtdcInstrumentCommissionRateField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BizType), 1);
}

///业务类型
// TThostFtdcBizTypeType char
static int PyCThostFtdcInstrumentCommissionRateField_set_BizType(PyCThostFtdcInstrumentCommissionRateField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BizType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BizType)) {
        PyErr_SetString(PyExc_ValueError, "BizType must be equal 1 bytes");
        return -1;
    }
    self->data.BizType = *buf;
    return 0;
}
            
///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static PyObject *PyCThostFtdcInstrumentCommissionRateField_get_InvestUnitID(PyCThostFtdcInstrumentCommissionRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcInstrumentCommissionRateField_set_InvestUnitID(PyCThostFtdcInstrumentCommissionRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInstrumentCommissionRateField_get_InstrumentID(PyCThostFtdcInstrumentCommissionRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcInstrumentCommissionRateField_set_InstrumentID(PyCThostFtdcInstrumentCommissionRateField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcInstrumentCommissionRateField_getset[] = {
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcInstrumentCommissionRateField_get_reserve1, (setter)PyCThostFtdcInstrumentCommissionRateField_set_reserve1, (char *)"reserve1", NULL},
    ///投资者范围 
    {(char *)"InvestorRange", (getter)PyCThostFtdcInstrumentCommissionRateField_get_InvestorRange, (setter)PyCThostFtdcInstrumentCommissionRateField_set_InvestorRange, (char *)"InvestorRange", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcInstrumentCommissionRateField_get_BrokerID, (setter)PyCThostFtdcInstrumentCommissionRateField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcInstrumentCommissionRateField_get_InvestorID, (setter)PyCThostFtdcInstrumentCommissionRateField_set_InvestorID, (char *)"InvestorID", NULL},
    ///开仓手续费率 
    {(char *)"OpenRatioByMoney", (getter)PyCThostFtdcInstrumentCommissionRateField_get_OpenRatioByMoney, (setter)PyCThostFtdcInstrumentCommissionRateField_set_OpenRatioByMoney, (char *)"OpenRatioByMoney", NULL},
    ///开仓手续费 
    {(char *)"OpenRatioByVolume", (getter)PyCThostFtdcInstrumentCommissionRateField_get_OpenRatioByVolume, (setter)PyCThostFtdcInstrumentCommissionRateField_set_OpenRatioByVolume, (char *)"OpenRatioByVolume", NULL},
    ///平仓手续费率 
    {(char *)"CloseRatioByMoney", (getter)PyCThostFtdcInstrumentCommissionRateField_get_CloseRatioByMoney, (setter)PyCThostFtdcInstrumentCommissionRateField_set_CloseRatioByMoney, (char *)"CloseRatioByMoney", NULL},
    ///平仓手续费 
    {(char *)"CloseRatioByVolume", (getter)PyCThostFtdcInstrumentCommissionRateField_get_CloseRatioByVolume, (setter)PyCThostFtdcInstrumentCommissionRateField_set_CloseRatioByVolume, (char *)"CloseRatioByVolume", NULL},
    ///平今手续费率 
    {(char *)"CloseTodayRatioByMoney", (getter)PyCThostFtdcInstrumentCommissionRateField_get_CloseTodayRatioByMoney, (setter)PyCThostFtdcInstrumentCommissionRateField_set_CloseTodayRatioByMoney, (char *)"CloseTodayRatioByMoney", NULL},
    ///平今手续费 
    {(char *)"CloseTodayRatioByVolume", (getter)PyCThostFtdcInstrumentCommissionRateField_get_CloseTodayRatioByVolume, (setter)PyCThostFtdcInstrumentCommissionRateField_set_CloseTodayRatioByVolume, (char *)"CloseTodayRatioByVolume", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcInstrumentCommissionRateField_get_ExchangeID, (setter)PyCThostFtdcInstrumentCommissionRateField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///业务类型 
    {(char *)"BizType", (getter)PyCThostFtdcInstrumentCommissionRateField_get_BizType, (setter)PyCThostFtdcInstrumentCommissionRateField_set_BizType, (char *)"BizType", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcInstrumentCommissionRateField_get_InvestUnitID, (setter)PyCThostFtdcInstrumentCommissionRateField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcInstrumentCommissionRateField_get_InstrumentID, (setter)PyCThostFtdcInstrumentCommissionRateField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInstrumentCommissionRateFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInstrumentCommissionRateField",	/* tp_name */
	sizeof(PyCThostFtdcInstrumentCommissionRateField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInstrumentCommissionRateField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInstrumentCommissionRateField_repr,   /* tp_repr */
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
	"CThostFtdcInstrumentCommissionRateField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInstrumentCommissionRateField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInstrumentCommissionRateField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInstrumentCommissionRateField_new,       /* tp_new */
};

int PyCThostFtdcInstrumentCommissionRateFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInstrumentCommissionRateField  */
	if (PyType_Ready(&PyCThostFtdcInstrumentCommissionRateFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInstrumentCommissionRateField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInstrumentCommissionRateFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInstrumentCommissionRateField", (PyObject *)&PyCThostFtdcInstrumentCommissionRateFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInstrumentCommissionRateField to module");
        Py_DECREF(&PyCThostFtdcInstrumentCommissionRateFieldType);
		return -1;
    }

    return 0;
}
