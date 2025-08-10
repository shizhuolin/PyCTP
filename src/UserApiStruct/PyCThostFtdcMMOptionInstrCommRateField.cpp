
#include "PyCThostFtdcMMOptionInstrCommRateField.h"

///当前做市商期权合约手续费的详细内容

static PyObject *PyCThostFtdcMMOptionInstrCommRateField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcMMOptionInstrCommRateField *self = (PyCThostFtdcMMOptionInstrCommRateField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcMMOptionInstrCommRateField_init(PyCThostFtdcMMOptionInstrCommRateField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "InvestorRange", "BrokerID", "InvestorID", "OpenRatioByMoney", "OpenRatioByVolume", "CloseRatioByMoney", "CloseRatioByVolume", "CloseTodayRatioByMoney", "CloseTodayRatioByVolume", "StrikeRatioByMoney", "StrikeRatioByVolume", "InstrumentID",  NULL};


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *MMOptionInstrCommRateField_reserve1 = NULL;
    Py_ssize_t MMOptionInstrCommRateField_reserve1_len = 0;
            
    ///投资者范围
    // TThostFtdcInvestorRangeType char
    char MMOptionInstrCommRateField_InvestorRange = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *MMOptionInstrCommRateField_BrokerID = NULL;
    Py_ssize_t MMOptionInstrCommRateField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *MMOptionInstrCommRateField_InvestorID = NULL;
    Py_ssize_t MMOptionInstrCommRateField_InvestorID_len = 0;
            
    ///开仓手续费率
    // TThostFtdcRatioType double
    double MMOptionInstrCommRateField_OpenRatioByMoney = 0.0;
        
    ///开仓手续费
    // TThostFtdcRatioType double
    double MMOptionInstrCommRateField_OpenRatioByVolume = 0.0;
        
    ///平仓手续费率
    // TThostFtdcRatioType double
    double MMOptionInstrCommRateField_CloseRatioByMoney = 0.0;
        
    ///平仓手续费
    // TThostFtdcRatioType double
    double MMOptionInstrCommRateField_CloseRatioByVolume = 0.0;
        
    ///平今手续费率
    // TThostFtdcRatioType double
    double MMOptionInstrCommRateField_CloseTodayRatioByMoney = 0.0;
        
    ///平今手续费
    // TThostFtdcRatioType double
    double MMOptionInstrCommRateField_CloseTodayRatioByVolume = 0.0;
        
    ///执行手续费率
    // TThostFtdcRatioType double
    double MMOptionInstrCommRateField_StrikeRatioByMoney = 0.0;
        
    ///执行手续费
    // TThostFtdcRatioType double
    double MMOptionInstrCommRateField_StrikeRatioByVolume = 0.0;
        
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *MMOptionInstrCommRateField_InstrumentID = NULL;
    Py_ssize_t MMOptionInstrCommRateField_InstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#ddddddddy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#s#dddddddds#", (char **)kwlist
#endif

        , &MMOptionInstrCommRateField_reserve1, &MMOptionInstrCommRateField_reserve1_len 
        , &MMOptionInstrCommRateField_InvestorRange 
        , &MMOptionInstrCommRateField_BrokerID, &MMOptionInstrCommRateField_BrokerID_len 
        , &MMOptionInstrCommRateField_InvestorID, &MMOptionInstrCommRateField_InvestorID_len 
        , &MMOptionInstrCommRateField_OpenRatioByMoney 
        , &MMOptionInstrCommRateField_OpenRatioByVolume 
        , &MMOptionInstrCommRateField_CloseRatioByMoney 
        , &MMOptionInstrCommRateField_CloseRatioByVolume 
        , &MMOptionInstrCommRateField_CloseTodayRatioByMoney 
        , &MMOptionInstrCommRateField_CloseTodayRatioByVolume 
        , &MMOptionInstrCommRateField_StrikeRatioByMoney 
        , &MMOptionInstrCommRateField_StrikeRatioByVolume 
        , &MMOptionInstrCommRateField_InstrumentID, &MMOptionInstrCommRateField_InstrumentID_len 


    )) {
        return -1;
    }


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( MMOptionInstrCommRateField_reserve1 != NULL ) {
        if(MMOptionInstrCommRateField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", MMOptionInstrCommRateField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, MMOptionInstrCommRateField_reserve1, MMOptionInstrCommRateField_reserve1_len);        
        strncpy(self->data.reserve1, MMOptionInstrCommRateField_reserve1, sizeof(self->data.reserve1) );
        MMOptionInstrCommRateField_reserve1 = NULL;
    }
            
    ///投资者范围
    // TThostFtdcInvestorRangeType char
    self->data.InvestorRange = MMOptionInstrCommRateField_InvestorRange;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( MMOptionInstrCommRateField_BrokerID != NULL ) {
        if(MMOptionInstrCommRateField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", MMOptionInstrCommRateField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, MMOptionInstrCommRateField_BrokerID, MMOptionInstrCommRateField_BrokerID_len);        
        strncpy(self->data.BrokerID, MMOptionInstrCommRateField_BrokerID, sizeof(self->data.BrokerID) );
        MMOptionInstrCommRateField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( MMOptionInstrCommRateField_InvestorID != NULL ) {
        if(MMOptionInstrCommRateField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", MMOptionInstrCommRateField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, MMOptionInstrCommRateField_InvestorID, MMOptionInstrCommRateField_InvestorID_len);        
        strncpy(self->data.InvestorID, MMOptionInstrCommRateField_InvestorID, sizeof(self->data.InvestorID) );
        MMOptionInstrCommRateField_InvestorID = NULL;
    }
            
    ///开仓手续费率
    // TThostFtdcRatioType double
    self->data.OpenRatioByMoney = MMOptionInstrCommRateField_OpenRatioByMoney;
        
    ///开仓手续费
    // TThostFtdcRatioType double
    self->data.OpenRatioByVolume = MMOptionInstrCommRateField_OpenRatioByVolume;
        
    ///平仓手续费率
    // TThostFtdcRatioType double
    self->data.CloseRatioByMoney = MMOptionInstrCommRateField_CloseRatioByMoney;
        
    ///平仓手续费
    // TThostFtdcRatioType double
    self->data.CloseRatioByVolume = MMOptionInstrCommRateField_CloseRatioByVolume;
        
    ///平今手续费率
    // TThostFtdcRatioType double
    self->data.CloseTodayRatioByMoney = MMOptionInstrCommRateField_CloseTodayRatioByMoney;
        
    ///平今手续费
    // TThostFtdcRatioType double
    self->data.CloseTodayRatioByVolume = MMOptionInstrCommRateField_CloseTodayRatioByVolume;
        
    ///执行手续费率
    // TThostFtdcRatioType double
    self->data.StrikeRatioByMoney = MMOptionInstrCommRateField_StrikeRatioByMoney;
        
    ///执行手续费
    // TThostFtdcRatioType double
    self->data.StrikeRatioByVolume = MMOptionInstrCommRateField_StrikeRatioByVolume;
        
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( MMOptionInstrCommRateField_InstrumentID != NULL ) {
        if(MMOptionInstrCommRateField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", MMOptionInstrCommRateField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, MMOptionInstrCommRateField_InstrumentID, MMOptionInstrCommRateField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, MMOptionInstrCommRateField_InstrumentID, sizeof(self->data.InstrumentID) );
        MMOptionInstrCommRateField_InstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcMMOptionInstrCommRateField_dealloc(PyCThostFtdcMMOptionInstrCommRateField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcMMOptionInstrCommRateField_repr(PyCThostFtdcMMOptionInstrCommRateField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:s,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:s}"
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
        ,"StrikeRatioByMoney", self->data.StrikeRatioByMoney 
        ,"StrikeRatioByVolume", self->data.StrikeRatioByVolume 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMMOptionInstrCommRateField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcMMOptionInstrCommRateField_get_reserve1(PyCThostFtdcMMOptionInstrCommRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcMMOptionInstrCommRateField_set_reserve1(PyCThostFtdcMMOptionInstrCommRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMMOptionInstrCommRateField_get_InvestorRange(PyCThostFtdcMMOptionInstrCommRateField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.InvestorRange), 1);
}

///投资者范围
// TThostFtdcInvestorRangeType char
static int PyCThostFtdcMMOptionInstrCommRateField_set_InvestorRange(PyCThostFtdcMMOptionInstrCommRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMMOptionInstrCommRateField_get_BrokerID(PyCThostFtdcMMOptionInstrCommRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcMMOptionInstrCommRateField_set_BrokerID(PyCThostFtdcMMOptionInstrCommRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMMOptionInstrCommRateField_get_InvestorID(PyCThostFtdcMMOptionInstrCommRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcMMOptionInstrCommRateField_set_InvestorID(PyCThostFtdcMMOptionInstrCommRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMMOptionInstrCommRateField_get_OpenRatioByMoney(PyCThostFtdcMMOptionInstrCommRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.OpenRatioByMoney);
}

///开仓手续费率
// TThostFtdcRatioType double
static int PyCThostFtdcMMOptionInstrCommRateField_set_OpenRatioByMoney(PyCThostFtdcMMOptionInstrCommRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMMOptionInstrCommRateField_get_OpenRatioByVolume(PyCThostFtdcMMOptionInstrCommRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.OpenRatioByVolume);
}

///开仓手续费
// TThostFtdcRatioType double
static int PyCThostFtdcMMOptionInstrCommRateField_set_OpenRatioByVolume(PyCThostFtdcMMOptionInstrCommRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMMOptionInstrCommRateField_get_CloseRatioByMoney(PyCThostFtdcMMOptionInstrCommRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CloseRatioByMoney);
}

///平仓手续费率
// TThostFtdcRatioType double
static int PyCThostFtdcMMOptionInstrCommRateField_set_CloseRatioByMoney(PyCThostFtdcMMOptionInstrCommRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMMOptionInstrCommRateField_get_CloseRatioByVolume(PyCThostFtdcMMOptionInstrCommRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CloseRatioByVolume);
}

///平仓手续费
// TThostFtdcRatioType double
static int PyCThostFtdcMMOptionInstrCommRateField_set_CloseRatioByVolume(PyCThostFtdcMMOptionInstrCommRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMMOptionInstrCommRateField_get_CloseTodayRatioByMoney(PyCThostFtdcMMOptionInstrCommRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CloseTodayRatioByMoney);
}

///平今手续费率
// TThostFtdcRatioType double
static int PyCThostFtdcMMOptionInstrCommRateField_set_CloseTodayRatioByMoney(PyCThostFtdcMMOptionInstrCommRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMMOptionInstrCommRateField_get_CloseTodayRatioByVolume(PyCThostFtdcMMOptionInstrCommRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CloseTodayRatioByVolume);
}

///平今手续费
// TThostFtdcRatioType double
static int PyCThostFtdcMMOptionInstrCommRateField_set_CloseTodayRatioByVolume(PyCThostFtdcMMOptionInstrCommRateField *self, PyObject* val, void *closure) {
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
        
///执行手续费率
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcMMOptionInstrCommRateField_get_StrikeRatioByMoney(PyCThostFtdcMMOptionInstrCommRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.StrikeRatioByMoney);
}

///执行手续费率
// TThostFtdcRatioType double
static int PyCThostFtdcMMOptionInstrCommRateField_set_StrikeRatioByMoney(PyCThostFtdcMMOptionInstrCommRateField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "StrikeRatioByMoney Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.StrikeRatioByMoney = buf;
    return 0;
}
        
///执行手续费
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcMMOptionInstrCommRateField_get_StrikeRatioByVolume(PyCThostFtdcMMOptionInstrCommRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.StrikeRatioByVolume);
}

///执行手续费
// TThostFtdcRatioType double
static int PyCThostFtdcMMOptionInstrCommRateField_set_StrikeRatioByVolume(PyCThostFtdcMMOptionInstrCommRateField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "StrikeRatioByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.StrikeRatioByVolume = buf;
    return 0;
}
        
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcMMOptionInstrCommRateField_get_InstrumentID(PyCThostFtdcMMOptionInstrCommRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcMMOptionInstrCommRateField_set_InstrumentID(PyCThostFtdcMMOptionInstrCommRateField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcMMOptionInstrCommRateField_getset[] = {
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcMMOptionInstrCommRateField_get_reserve1, (setter)PyCThostFtdcMMOptionInstrCommRateField_set_reserve1, (char *)"reserve1", NULL},
    ///投资者范围 
    {(char *)"InvestorRange", (getter)PyCThostFtdcMMOptionInstrCommRateField_get_InvestorRange, (setter)PyCThostFtdcMMOptionInstrCommRateField_set_InvestorRange, (char *)"InvestorRange", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcMMOptionInstrCommRateField_get_BrokerID, (setter)PyCThostFtdcMMOptionInstrCommRateField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcMMOptionInstrCommRateField_get_InvestorID, (setter)PyCThostFtdcMMOptionInstrCommRateField_set_InvestorID, (char *)"InvestorID", NULL},
    ///开仓手续费率 
    {(char *)"OpenRatioByMoney", (getter)PyCThostFtdcMMOptionInstrCommRateField_get_OpenRatioByMoney, (setter)PyCThostFtdcMMOptionInstrCommRateField_set_OpenRatioByMoney, (char *)"OpenRatioByMoney", NULL},
    ///开仓手续费 
    {(char *)"OpenRatioByVolume", (getter)PyCThostFtdcMMOptionInstrCommRateField_get_OpenRatioByVolume, (setter)PyCThostFtdcMMOptionInstrCommRateField_set_OpenRatioByVolume, (char *)"OpenRatioByVolume", NULL},
    ///平仓手续费率 
    {(char *)"CloseRatioByMoney", (getter)PyCThostFtdcMMOptionInstrCommRateField_get_CloseRatioByMoney, (setter)PyCThostFtdcMMOptionInstrCommRateField_set_CloseRatioByMoney, (char *)"CloseRatioByMoney", NULL},
    ///平仓手续费 
    {(char *)"CloseRatioByVolume", (getter)PyCThostFtdcMMOptionInstrCommRateField_get_CloseRatioByVolume, (setter)PyCThostFtdcMMOptionInstrCommRateField_set_CloseRatioByVolume, (char *)"CloseRatioByVolume", NULL},
    ///平今手续费率 
    {(char *)"CloseTodayRatioByMoney", (getter)PyCThostFtdcMMOptionInstrCommRateField_get_CloseTodayRatioByMoney, (setter)PyCThostFtdcMMOptionInstrCommRateField_set_CloseTodayRatioByMoney, (char *)"CloseTodayRatioByMoney", NULL},
    ///平今手续费 
    {(char *)"CloseTodayRatioByVolume", (getter)PyCThostFtdcMMOptionInstrCommRateField_get_CloseTodayRatioByVolume, (setter)PyCThostFtdcMMOptionInstrCommRateField_set_CloseTodayRatioByVolume, (char *)"CloseTodayRatioByVolume", NULL},
    ///执行手续费率 
    {(char *)"StrikeRatioByMoney", (getter)PyCThostFtdcMMOptionInstrCommRateField_get_StrikeRatioByMoney, (setter)PyCThostFtdcMMOptionInstrCommRateField_set_StrikeRatioByMoney, (char *)"StrikeRatioByMoney", NULL},
    ///执行手续费 
    {(char *)"StrikeRatioByVolume", (getter)PyCThostFtdcMMOptionInstrCommRateField_get_StrikeRatioByVolume, (setter)PyCThostFtdcMMOptionInstrCommRateField_set_StrikeRatioByVolume, (char *)"StrikeRatioByVolume", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcMMOptionInstrCommRateField_get_InstrumentID, (setter)PyCThostFtdcMMOptionInstrCommRateField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcMMOptionInstrCommRateFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcMMOptionInstrCommRateField",	/* tp_name */
	sizeof(PyCThostFtdcMMOptionInstrCommRateField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcMMOptionInstrCommRateField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcMMOptionInstrCommRateField_repr,   /* tp_repr */
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
	"CThostFtdcMMOptionInstrCommRateField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcMMOptionInstrCommRateField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcMMOptionInstrCommRateField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcMMOptionInstrCommRateField_new,       /* tp_new */
};

int PyCThostFtdcMMOptionInstrCommRateFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcMMOptionInstrCommRateField  */
	if (PyType_Ready(&PyCThostFtdcMMOptionInstrCommRateFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcMMOptionInstrCommRateField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcMMOptionInstrCommRateFieldType);
    if( PyModule_AddObject(module, "CThostFtdcMMOptionInstrCommRateField", (PyObject *)&PyCThostFtdcMMOptionInstrCommRateFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcMMOptionInstrCommRateField to module");
        Py_DECREF(&PyCThostFtdcMMOptionInstrCommRateFieldType);
		return -1;
    }

    return 0;
}
