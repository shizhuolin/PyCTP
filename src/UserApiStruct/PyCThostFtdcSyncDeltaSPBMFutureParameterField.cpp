
#include "PyCThostFtdcSyncDeltaSPBMFutureParameterField.h"

///风险结算追平SPBM期货合约保证金参数

static PyObject *PyCThostFtdcSyncDeltaSPBMFutureParameterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaSPBMFutureParameterField *self = (PyCThostFtdcSyncDeltaSPBMFutureParameterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaSPBMFutureParameterField_init(PyCThostFtdcSyncDeltaSPBMFutureParameterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "ExchangeID", "InstrumentID", "ProdFamilyCode", "Cvf", "TimeRange", "MarginRate", "LockRateX", "AddOnRate", "PreSettlementPrice", "AddOnLockRateX2", "ActionDirection", "SyncDeltaSequenceNo",  NULL};


    ///交易日
    // TThostFtdcDateType char[9]
    const char *SyncDeltaSPBMFutureParameterField_TradingDay = NULL;
    Py_ssize_t SyncDeltaSPBMFutureParameterField_TradingDay_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *SyncDeltaSPBMFutureParameterField_ExchangeID = NULL;
    Py_ssize_t SyncDeltaSPBMFutureParameterField_ExchangeID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *SyncDeltaSPBMFutureParameterField_InstrumentID = NULL;
    Py_ssize_t SyncDeltaSPBMFutureParameterField_InstrumentID_len = 0;
            
    ///品种代码
    // TThostFtdcInstrumentIDType char[81]
    const char *SyncDeltaSPBMFutureParameterField_ProdFamilyCode = NULL;
    Py_ssize_t SyncDeltaSPBMFutureParameterField_ProdFamilyCode_len = 0;
            
    ///期货合约因子
    // TThostFtdcVolumeMultipleType int
    int SyncDeltaSPBMFutureParameterField_Cvf = 0;
        
    ///阶段标识
    // TThostFtdcTimeRangeType char
    char SyncDeltaSPBMFutureParameterField_TimeRange = 0;
            
    ///品种保证金标准
    // TThostFtdcRatioType double
    double SyncDeltaSPBMFutureParameterField_MarginRate = 0.0;
        
    ///期货合约内部对锁仓费率折扣比例
    // TThostFtdcRatioType double
    double SyncDeltaSPBMFutureParameterField_LockRateX = 0.0;
        
    ///提高保证金标准
    // TThostFtdcRatioType double
    double SyncDeltaSPBMFutureParameterField_AddOnRate = 0.0;
        
    ///昨结算价
    // TThostFtdcPriceType double
    double SyncDeltaSPBMFutureParameterField_PreSettlementPrice = 0.0;
        
    ///期货合约内部对锁仓附加费率折扣比例
    // TThostFtdcRatioType double
    double SyncDeltaSPBMFutureParameterField_AddOnLockRateX2 = 0.0;
        
    ///操作标志
    // TThostFtdcActionDirectionType char
    char SyncDeltaSPBMFutureParameterField_ActionDirection = 0;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    int SyncDeltaSPBMFutureParameterField_SyncDeltaSequenceNo = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#icdddddci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#icdddddci", (char **)kwlist
#endif

        , &SyncDeltaSPBMFutureParameterField_TradingDay, &SyncDeltaSPBMFutureParameterField_TradingDay_len 
        , &SyncDeltaSPBMFutureParameterField_ExchangeID, &SyncDeltaSPBMFutureParameterField_ExchangeID_len 
        , &SyncDeltaSPBMFutureParameterField_InstrumentID, &SyncDeltaSPBMFutureParameterField_InstrumentID_len 
        , &SyncDeltaSPBMFutureParameterField_ProdFamilyCode, &SyncDeltaSPBMFutureParameterField_ProdFamilyCode_len 
        , &SyncDeltaSPBMFutureParameterField_Cvf 
        , &SyncDeltaSPBMFutureParameterField_TimeRange 
        , &SyncDeltaSPBMFutureParameterField_MarginRate 
        , &SyncDeltaSPBMFutureParameterField_LockRateX 
        , &SyncDeltaSPBMFutureParameterField_AddOnRate 
        , &SyncDeltaSPBMFutureParameterField_PreSettlementPrice 
        , &SyncDeltaSPBMFutureParameterField_AddOnLockRateX2 
        , &SyncDeltaSPBMFutureParameterField_ActionDirection 
        , &SyncDeltaSPBMFutureParameterField_SyncDeltaSequenceNo 


    )) {
        return -1;
    }


    ///交易日
    // TThostFtdcDateType char[9]
    if( SyncDeltaSPBMFutureParameterField_TradingDay != NULL ) {
        if(SyncDeltaSPBMFutureParameterField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", SyncDeltaSPBMFutureParameterField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, SyncDeltaSPBMFutureParameterField_TradingDay, SyncDeltaSPBMFutureParameterField_TradingDay_len);        
        strncpy(self->data.TradingDay, SyncDeltaSPBMFutureParameterField_TradingDay, sizeof(self->data.TradingDay) );
        SyncDeltaSPBMFutureParameterField_TradingDay = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( SyncDeltaSPBMFutureParameterField_ExchangeID != NULL ) {
        if(SyncDeltaSPBMFutureParameterField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", SyncDeltaSPBMFutureParameterField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, SyncDeltaSPBMFutureParameterField_ExchangeID, SyncDeltaSPBMFutureParameterField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, SyncDeltaSPBMFutureParameterField_ExchangeID, sizeof(self->data.ExchangeID) );
        SyncDeltaSPBMFutureParameterField_ExchangeID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( SyncDeltaSPBMFutureParameterField_InstrumentID != NULL ) {
        if(SyncDeltaSPBMFutureParameterField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", SyncDeltaSPBMFutureParameterField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, SyncDeltaSPBMFutureParameterField_InstrumentID, SyncDeltaSPBMFutureParameterField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, SyncDeltaSPBMFutureParameterField_InstrumentID, sizeof(self->data.InstrumentID) );
        SyncDeltaSPBMFutureParameterField_InstrumentID = NULL;
    }
            
    ///品种代码
    // TThostFtdcInstrumentIDType char[81]
    if( SyncDeltaSPBMFutureParameterField_ProdFamilyCode != NULL ) {
        if(SyncDeltaSPBMFutureParameterField_ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is %zd)", SyncDeltaSPBMFutureParameterField_ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.ProdFamilyCode));
            return -1;
        }
        // memset(self->data.ProdFamilyCode, 0, sizeof(self->data.ProdFamilyCode));
        // memcpy(self->data.ProdFamilyCode, SyncDeltaSPBMFutureParameterField_ProdFamilyCode, SyncDeltaSPBMFutureParameterField_ProdFamilyCode_len);        
        strncpy(self->data.ProdFamilyCode, SyncDeltaSPBMFutureParameterField_ProdFamilyCode, sizeof(self->data.ProdFamilyCode) );
        SyncDeltaSPBMFutureParameterField_ProdFamilyCode = NULL;
    }
            
    ///期货合约因子
    // TThostFtdcVolumeMultipleType int
    self->data.Cvf = SyncDeltaSPBMFutureParameterField_Cvf;
        
    ///阶段标识
    // TThostFtdcTimeRangeType char
    self->data.TimeRange = SyncDeltaSPBMFutureParameterField_TimeRange;
            
    ///品种保证金标准
    // TThostFtdcRatioType double
    self->data.MarginRate = SyncDeltaSPBMFutureParameterField_MarginRate;
        
    ///期货合约内部对锁仓费率折扣比例
    // TThostFtdcRatioType double
    self->data.LockRateX = SyncDeltaSPBMFutureParameterField_LockRateX;
        
    ///提高保证金标准
    // TThostFtdcRatioType double
    self->data.AddOnRate = SyncDeltaSPBMFutureParameterField_AddOnRate;
        
    ///昨结算价
    // TThostFtdcPriceType double
    self->data.PreSettlementPrice = SyncDeltaSPBMFutureParameterField_PreSettlementPrice;
        
    ///期货合约内部对锁仓附加费率折扣比例
    // TThostFtdcRatioType double
    self->data.AddOnLockRateX2 = SyncDeltaSPBMFutureParameterField_AddOnLockRateX2;
        
    ///操作标志
    // TThostFtdcActionDirectionType char
    self->data.ActionDirection = SyncDeltaSPBMFutureParameterField_ActionDirection;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    self->data.SyncDeltaSequenceNo = SyncDeltaSPBMFutureParameterField_SyncDeltaSequenceNo;
        

    return 0;
}

static void PyCThostFtdcSyncDeltaSPBMFutureParameterField_dealloc(PyCThostFtdcSyncDeltaSPBMFutureParameterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMFutureParameterField_repr(PyCThostFtdcSyncDeltaSPBMFutureParameterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i,s:c,s:d,s:d,s:d,s:d,s:d,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:i,s:c,s:d,s:d,s:d,s:d,s:d,s:c,s:i}"
#endif

        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"ProdFamilyCode", self->data.ProdFamilyCode//, (Py_ssize_t)sizeof(self->data.ProdFamilyCode) 
        ,"Cvf", self->data.Cvf 
        ,"TimeRange", self->data.TimeRange 
        ,"MarginRate", self->data.MarginRate 
        ,"LockRateX", self->data.LockRateX 
        ,"AddOnRate", self->data.AddOnRate 
        ,"PreSettlementPrice", self->data.PreSettlementPrice 
        ,"AddOnLockRateX2", self->data.AddOnLockRateX2 
        ,"ActionDirection", self->data.ActionDirection 
        ,"SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaSPBMFutureParameterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_TradingDay(PyCThostFtdcSyncDeltaSPBMFutureParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_TradingDay(PyCThostFtdcSyncDeltaSPBMFutureParameterField *self, PyObject* val, void *closure) {
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
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_ExchangeID(PyCThostFtdcSyncDeltaSPBMFutureParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_ExchangeID(PyCThostFtdcSyncDeltaSPBMFutureParameterField *self, PyObject* val, void *closure) {
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
            
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_InstrumentID(PyCThostFtdcSyncDeltaSPBMFutureParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_InstrumentID(PyCThostFtdcSyncDeltaSPBMFutureParameterField *self, PyObject* val, void *closure) {
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
            
///品种代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_ProdFamilyCode(PyCThostFtdcSyncDeltaSPBMFutureParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProdFamilyCode, (Py_ssize_t)sizeof(self->data.ProdFamilyCode));
    return PyBytes_FromString(self->data.ProdFamilyCode);
}

///品种代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_ProdFamilyCode(PyCThostFtdcSyncDeltaSPBMFutureParameterField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ProdFamilyCode Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ProdFamilyCode)) {
        PyErr_SetString(PyExc_ValueError, "ProdFamilyCode must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.ProdFamilyCode, 0, sizeof(self->data.ProdFamilyCode));
    // memcpy(self->data.ProdFamilyCode, buf, len);
    strncpy(self->data.ProdFamilyCode, buf, sizeof(self->data.ProdFamilyCode));
    return 0;
}
            
///期货合约因子
// TThostFtdcVolumeMultipleType int
static PyObject *PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_Cvf(PyCThostFtdcSyncDeltaSPBMFutureParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.Cvf);
#else
    return PyInt_FromLong(self->data.Cvf);
#endif
}

///期货合约因子
// TThostFtdcVolumeMultipleType int
static int PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_Cvf(PyCThostFtdcSyncDeltaSPBMFutureParameterField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Cvf Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Cvf Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the Cvf value out of range for C int");
        return -1;
    }
    self->data.Cvf = (int)buf;
    return 0;
}
        
///阶段标识
// TThostFtdcTimeRangeType char
static PyObject *PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_TimeRange(PyCThostFtdcSyncDeltaSPBMFutureParameterField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.TimeRange), 1);
}

///阶段标识
// TThostFtdcTimeRangeType char
static int PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_TimeRange(PyCThostFtdcSyncDeltaSPBMFutureParameterField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TimeRange Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TimeRange)) {
        PyErr_SetString(PyExc_ValueError, "TimeRange must be equal 1 bytes");
        return -1;
    }
    self->data.TimeRange = *buf;
    return 0;
}
            
///品种保证金标准
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_MarginRate(PyCThostFtdcSyncDeltaSPBMFutureParameterField *self, void *closure) {
    return PyFloat_FromDouble(self->data.MarginRate);
}

///品种保证金标准
// TThostFtdcRatioType double
static int PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_MarginRate(PyCThostFtdcSyncDeltaSPBMFutureParameterField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MarginRate Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.MarginRate = buf;
    return 0;
}
        
///期货合约内部对锁仓费率折扣比例
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_LockRateX(PyCThostFtdcSyncDeltaSPBMFutureParameterField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LockRateX);
}

///期货合约内部对锁仓费率折扣比例
// TThostFtdcRatioType double
static int PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_LockRateX(PyCThostFtdcSyncDeltaSPBMFutureParameterField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LockRateX Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LockRateX = buf;
    return 0;
}
        
///提高保证金标准
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_AddOnRate(PyCThostFtdcSyncDeltaSPBMFutureParameterField *self, void *closure) {
    return PyFloat_FromDouble(self->data.AddOnRate);
}

///提高保证金标准
// TThostFtdcRatioType double
static int PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_AddOnRate(PyCThostFtdcSyncDeltaSPBMFutureParameterField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AddOnRate Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AddOnRate = buf;
    return 0;
}
        
///昨结算价
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_PreSettlementPrice(PyCThostFtdcSyncDeltaSPBMFutureParameterField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PreSettlementPrice);
}

///昨结算价
// TThostFtdcPriceType double
static int PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_PreSettlementPrice(PyCThostFtdcSyncDeltaSPBMFutureParameterField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PreSettlementPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PreSettlementPrice = buf;
    return 0;
}
        
///期货合约内部对锁仓附加费率折扣比例
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_AddOnLockRateX2(PyCThostFtdcSyncDeltaSPBMFutureParameterField *self, void *closure) {
    return PyFloat_FromDouble(self->data.AddOnLockRateX2);
}

///期货合约内部对锁仓附加费率折扣比例
// TThostFtdcRatioType double
static int PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_AddOnLockRateX2(PyCThostFtdcSyncDeltaSPBMFutureParameterField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AddOnLockRateX2 Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AddOnLockRateX2 = buf;
    return 0;
}
        
///操作标志
// TThostFtdcActionDirectionType char
static PyObject *PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_ActionDirection(PyCThostFtdcSyncDeltaSPBMFutureParameterField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

///操作标志
// TThostFtdcActionDirectionType char
static int PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_ActionDirection(PyCThostFtdcSyncDeltaSPBMFutureParameterField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ActionDirection Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ActionDirection)) {
        PyErr_SetString(PyExc_ValueError, "ActionDirection must be equal 1 bytes");
        return -1;
    }
    self->data.ActionDirection = *buf;
    return 0;
}
            
///追平序号
// TThostFtdcSequenceNoType int
static PyObject *PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaSPBMFutureParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else
    return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif
}

///追平序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaSPBMFutureParameterField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SyncDeltaSequenceNo Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SyncDeltaSequenceNo Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the SyncDeltaSequenceNo value out of range for C int");
        return -1;
    }
    self->data.SyncDeltaSequenceNo = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcSyncDeltaSPBMFutureParameterField_getset[] = {
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_TradingDay, (setter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_TradingDay, (char *)"TradingDay", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_InstrumentID, (setter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///品种代码 
    {(char *)"ProdFamilyCode", (getter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_ProdFamilyCode, (setter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_ProdFamilyCode, (char *)"ProdFamilyCode", NULL},
    ///期货合约因子 
    {(char *)"Cvf", (getter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_Cvf, (setter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_Cvf, (char *)"Cvf", NULL},
    ///阶段标识 
    {(char *)"TimeRange", (getter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_TimeRange, (setter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_TimeRange, (char *)"TimeRange", NULL},
    ///品种保证金标准 
    {(char *)"MarginRate", (getter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_MarginRate, (setter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_MarginRate, (char *)"MarginRate", NULL},
    ///期货合约内部对锁仓费率折扣比例 
    {(char *)"LockRateX", (getter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_LockRateX, (setter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_LockRateX, (char *)"LockRateX", NULL},
    ///提高保证金标准 
    {(char *)"AddOnRate", (getter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_AddOnRate, (setter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_AddOnRate, (char *)"AddOnRate", NULL},
    ///昨结算价 
    {(char *)"PreSettlementPrice", (getter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_PreSettlementPrice, (setter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_PreSettlementPrice, (char *)"PreSettlementPrice", NULL},
    ///期货合约内部对锁仓附加费率折扣比例 
    {(char *)"AddOnLockRateX2", (getter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_AddOnLockRateX2, (setter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_AddOnLockRateX2, (char *)"AddOnLockRateX2", NULL},
    ///操作标志 
    {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_ActionDirection, (char *)"ActionDirection", NULL},
    ///追平序号 
    {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaSPBMFutureParameterField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaSPBMFutureParameterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaSPBMFutureParameterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaSPBMFutureParameterField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaSPBMFutureParameterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaSPBMFutureParameterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaSPBMFutureParameterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaSPBMFutureParameterField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaSPBMFutureParameterField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaSPBMFutureParameterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaSPBMFutureParameterField", (PyObject *)&PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaSPBMFutureParameterField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType);
		return -1;
    }

    return 0;
}
