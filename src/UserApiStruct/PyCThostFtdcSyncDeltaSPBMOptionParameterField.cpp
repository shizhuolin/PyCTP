
#include "PyCThostFtdcSyncDeltaSPBMOptionParameterField.h"

///风险结算追平SPBM期权合约保证金参数

static PyObject *PyCThostFtdcSyncDeltaSPBMOptionParameterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaSPBMOptionParameterField *self = (PyCThostFtdcSyncDeltaSPBMOptionParameterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaSPBMOptionParameterField_init(PyCThostFtdcSyncDeltaSPBMOptionParameterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "ExchangeID", "InstrumentID", "ProdFamilyCode", "Cvf", "DownPrice", "Delta", "SlimiDelta", "PreSettlementPrice", "ActionDirection", "SyncDeltaSequenceNo",  NULL};


    ///交易日
    // TThostFtdcDateType char[9]
    const char *SyncDeltaSPBMOptionParameterField_TradingDay = NULL;
    Py_ssize_t SyncDeltaSPBMOptionParameterField_TradingDay_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *SyncDeltaSPBMOptionParameterField_ExchangeID = NULL;
    Py_ssize_t SyncDeltaSPBMOptionParameterField_ExchangeID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *SyncDeltaSPBMOptionParameterField_InstrumentID = NULL;
    Py_ssize_t SyncDeltaSPBMOptionParameterField_InstrumentID_len = 0;
            
    ///品种代码
    // TThostFtdcInstrumentIDType char[81]
    const char *SyncDeltaSPBMOptionParameterField_ProdFamilyCode = NULL;
    Py_ssize_t SyncDeltaSPBMOptionParameterField_ProdFamilyCode_len = 0;
            
    ///期权合约因子
    // TThostFtdcVolumeMultipleType int
    int SyncDeltaSPBMOptionParameterField_Cvf = 0;
        
    ///期权冲抵价格
    // TThostFtdcPriceType double
    double SyncDeltaSPBMOptionParameterField_DownPrice = 0.0;
        
    ///Delta值
    // TThostFtdcDeltaType double
    double SyncDeltaSPBMOptionParameterField_Delta = 0.0;
        
    ///卖方期权风险转换最低值
    // TThostFtdcDeltaType double
    double SyncDeltaSPBMOptionParameterField_SlimiDelta = 0.0;
        
    ///昨结算价
    // TThostFtdcPriceType double
    double SyncDeltaSPBMOptionParameterField_PreSettlementPrice = 0.0;
        
    ///操作标志
    // TThostFtdcActionDirectionType char
    char SyncDeltaSPBMOptionParameterField_ActionDirection = 0;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    int SyncDeltaSPBMOptionParameterField_SyncDeltaSequenceNo = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#iddddci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#iddddci", (char **)kwlist
#endif

        , &SyncDeltaSPBMOptionParameterField_TradingDay, &SyncDeltaSPBMOptionParameterField_TradingDay_len 
        , &SyncDeltaSPBMOptionParameterField_ExchangeID, &SyncDeltaSPBMOptionParameterField_ExchangeID_len 
        , &SyncDeltaSPBMOptionParameterField_InstrumentID, &SyncDeltaSPBMOptionParameterField_InstrumentID_len 
        , &SyncDeltaSPBMOptionParameterField_ProdFamilyCode, &SyncDeltaSPBMOptionParameterField_ProdFamilyCode_len 
        , &SyncDeltaSPBMOptionParameterField_Cvf 
        , &SyncDeltaSPBMOptionParameterField_DownPrice 
        , &SyncDeltaSPBMOptionParameterField_Delta 
        , &SyncDeltaSPBMOptionParameterField_SlimiDelta 
        , &SyncDeltaSPBMOptionParameterField_PreSettlementPrice 
        , &SyncDeltaSPBMOptionParameterField_ActionDirection 
        , &SyncDeltaSPBMOptionParameterField_SyncDeltaSequenceNo 


    )) {
        return -1;
    }


    ///交易日
    // TThostFtdcDateType char[9]
    if( SyncDeltaSPBMOptionParameterField_TradingDay != NULL ) {
        if(SyncDeltaSPBMOptionParameterField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", SyncDeltaSPBMOptionParameterField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, SyncDeltaSPBMOptionParameterField_TradingDay, SyncDeltaSPBMOptionParameterField_TradingDay_len);        
        strncpy(self->data.TradingDay, SyncDeltaSPBMOptionParameterField_TradingDay, sizeof(self->data.TradingDay) );
        SyncDeltaSPBMOptionParameterField_TradingDay = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( SyncDeltaSPBMOptionParameterField_ExchangeID != NULL ) {
        if(SyncDeltaSPBMOptionParameterField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", SyncDeltaSPBMOptionParameterField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, SyncDeltaSPBMOptionParameterField_ExchangeID, SyncDeltaSPBMOptionParameterField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, SyncDeltaSPBMOptionParameterField_ExchangeID, sizeof(self->data.ExchangeID) );
        SyncDeltaSPBMOptionParameterField_ExchangeID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( SyncDeltaSPBMOptionParameterField_InstrumentID != NULL ) {
        if(SyncDeltaSPBMOptionParameterField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", SyncDeltaSPBMOptionParameterField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, SyncDeltaSPBMOptionParameterField_InstrumentID, SyncDeltaSPBMOptionParameterField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, SyncDeltaSPBMOptionParameterField_InstrumentID, sizeof(self->data.InstrumentID) );
        SyncDeltaSPBMOptionParameterField_InstrumentID = NULL;
    }
            
    ///品种代码
    // TThostFtdcInstrumentIDType char[81]
    if( SyncDeltaSPBMOptionParameterField_ProdFamilyCode != NULL ) {
        if(SyncDeltaSPBMOptionParameterField_ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is %zd)", SyncDeltaSPBMOptionParameterField_ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.ProdFamilyCode));
            return -1;
        }
        // memset(self->data.ProdFamilyCode, 0, sizeof(self->data.ProdFamilyCode));
        // memcpy(self->data.ProdFamilyCode, SyncDeltaSPBMOptionParameterField_ProdFamilyCode, SyncDeltaSPBMOptionParameterField_ProdFamilyCode_len);        
        strncpy(self->data.ProdFamilyCode, SyncDeltaSPBMOptionParameterField_ProdFamilyCode, sizeof(self->data.ProdFamilyCode) );
        SyncDeltaSPBMOptionParameterField_ProdFamilyCode = NULL;
    }
            
    ///期权合约因子
    // TThostFtdcVolumeMultipleType int
    self->data.Cvf = SyncDeltaSPBMOptionParameterField_Cvf;
        
    ///期权冲抵价格
    // TThostFtdcPriceType double
    self->data.DownPrice = SyncDeltaSPBMOptionParameterField_DownPrice;
        
    ///Delta值
    // TThostFtdcDeltaType double
    self->data.Delta = SyncDeltaSPBMOptionParameterField_Delta;
        
    ///卖方期权风险转换最低值
    // TThostFtdcDeltaType double
    self->data.SlimiDelta = SyncDeltaSPBMOptionParameterField_SlimiDelta;
        
    ///昨结算价
    // TThostFtdcPriceType double
    self->data.PreSettlementPrice = SyncDeltaSPBMOptionParameterField_PreSettlementPrice;
        
    ///操作标志
    // TThostFtdcActionDirectionType char
    self->data.ActionDirection = SyncDeltaSPBMOptionParameterField_ActionDirection;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    self->data.SyncDeltaSequenceNo = SyncDeltaSPBMOptionParameterField_SyncDeltaSequenceNo;
        

    return 0;
}

static void PyCThostFtdcSyncDeltaSPBMOptionParameterField_dealloc(PyCThostFtdcSyncDeltaSPBMOptionParameterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMOptionParameterField_repr(PyCThostFtdcSyncDeltaSPBMOptionParameterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i,s:d,s:d,s:d,s:d,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:i,s:d,s:d,s:d,s:d,s:c,s:i}"
#endif

        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"ProdFamilyCode", self->data.ProdFamilyCode//, (Py_ssize_t)sizeof(self->data.ProdFamilyCode) 
        ,"Cvf", self->data.Cvf 
        ,"DownPrice", self->data.DownPrice 
        ,"Delta", self->data.Delta 
        ,"SlimiDelta", self->data.SlimiDelta 
        ,"PreSettlementPrice", self->data.PreSettlementPrice 
        ,"ActionDirection", self->data.ActionDirection 
        ,"SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaSPBMOptionParameterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcSyncDeltaSPBMOptionParameterField_get_TradingDay(PyCThostFtdcSyncDeltaSPBMOptionParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcSyncDeltaSPBMOptionParameterField_set_TradingDay(PyCThostFtdcSyncDeltaSPBMOptionParameterField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaSPBMOptionParameterField_get_ExchangeID(PyCThostFtdcSyncDeltaSPBMOptionParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcSyncDeltaSPBMOptionParameterField_set_ExchangeID(PyCThostFtdcSyncDeltaSPBMOptionParameterField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaSPBMOptionParameterField_get_InstrumentID(PyCThostFtdcSyncDeltaSPBMOptionParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcSyncDeltaSPBMOptionParameterField_set_InstrumentID(PyCThostFtdcSyncDeltaSPBMOptionParameterField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaSPBMOptionParameterField_get_ProdFamilyCode(PyCThostFtdcSyncDeltaSPBMOptionParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProdFamilyCode, (Py_ssize_t)sizeof(self->data.ProdFamilyCode));
    return PyBytes_FromString(self->data.ProdFamilyCode);
}

///品种代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcSyncDeltaSPBMOptionParameterField_set_ProdFamilyCode(PyCThostFtdcSyncDeltaSPBMOptionParameterField *self, PyObject* val, void *closure) {
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
            
///期权合约因子
// TThostFtdcVolumeMultipleType int
static PyObject *PyCThostFtdcSyncDeltaSPBMOptionParameterField_get_Cvf(PyCThostFtdcSyncDeltaSPBMOptionParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.Cvf);
#else
    return PyInt_FromLong(self->data.Cvf);
#endif
}

///期权合约因子
// TThostFtdcVolumeMultipleType int
static int PyCThostFtdcSyncDeltaSPBMOptionParameterField_set_Cvf(PyCThostFtdcSyncDeltaSPBMOptionParameterField *self, PyObject* val, void *closure) {
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
        
///期权冲抵价格
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcSyncDeltaSPBMOptionParameterField_get_DownPrice(PyCThostFtdcSyncDeltaSPBMOptionParameterField *self, void *closure) {
    return PyFloat_FromDouble(self->data.DownPrice);
}

///期权冲抵价格
// TThostFtdcPriceType double
static int PyCThostFtdcSyncDeltaSPBMOptionParameterField_set_DownPrice(PyCThostFtdcSyncDeltaSPBMOptionParameterField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DownPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.DownPrice = buf;
    return 0;
}
        
///Delta值
// TThostFtdcDeltaType double
static PyObject *PyCThostFtdcSyncDeltaSPBMOptionParameterField_get_Delta(PyCThostFtdcSyncDeltaSPBMOptionParameterField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Delta);
}

///Delta值
// TThostFtdcDeltaType double
static int PyCThostFtdcSyncDeltaSPBMOptionParameterField_set_Delta(PyCThostFtdcSyncDeltaSPBMOptionParameterField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Delta Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Delta = buf;
    return 0;
}
        
///卖方期权风险转换最低值
// TThostFtdcDeltaType double
static PyObject *PyCThostFtdcSyncDeltaSPBMOptionParameterField_get_SlimiDelta(PyCThostFtdcSyncDeltaSPBMOptionParameterField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SlimiDelta);
}

///卖方期权风险转换最低值
// TThostFtdcDeltaType double
static int PyCThostFtdcSyncDeltaSPBMOptionParameterField_set_SlimiDelta(PyCThostFtdcSyncDeltaSPBMOptionParameterField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SlimiDelta Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SlimiDelta = buf;
    return 0;
}
        
///昨结算价
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcSyncDeltaSPBMOptionParameterField_get_PreSettlementPrice(PyCThostFtdcSyncDeltaSPBMOptionParameterField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PreSettlementPrice);
}

///昨结算价
// TThostFtdcPriceType double
static int PyCThostFtdcSyncDeltaSPBMOptionParameterField_set_PreSettlementPrice(PyCThostFtdcSyncDeltaSPBMOptionParameterField *self, PyObject* val, void *closure) {
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
        
///操作标志
// TThostFtdcActionDirectionType char
static PyObject *PyCThostFtdcSyncDeltaSPBMOptionParameterField_get_ActionDirection(PyCThostFtdcSyncDeltaSPBMOptionParameterField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

///操作标志
// TThostFtdcActionDirectionType char
static int PyCThostFtdcSyncDeltaSPBMOptionParameterField_set_ActionDirection(PyCThostFtdcSyncDeltaSPBMOptionParameterField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaSPBMOptionParameterField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaSPBMOptionParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else
    return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif
}

///追平序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcSyncDeltaSPBMOptionParameterField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaSPBMOptionParameterField *self, PyObject* val, void *closure) {
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
        

static PyGetSetDef PyCThostFtdcSyncDeltaSPBMOptionParameterField_getset[] = {
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcSyncDeltaSPBMOptionParameterField_get_TradingDay, (setter)PyCThostFtdcSyncDeltaSPBMOptionParameterField_set_TradingDay, (char *)"TradingDay", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaSPBMOptionParameterField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaSPBMOptionParameterField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcSyncDeltaSPBMOptionParameterField_get_InstrumentID, (setter)PyCThostFtdcSyncDeltaSPBMOptionParameterField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///品种代码 
    {(char *)"ProdFamilyCode", (getter)PyCThostFtdcSyncDeltaSPBMOptionParameterField_get_ProdFamilyCode, (setter)PyCThostFtdcSyncDeltaSPBMOptionParameterField_set_ProdFamilyCode, (char *)"ProdFamilyCode", NULL},
    ///期权合约因子 
    {(char *)"Cvf", (getter)PyCThostFtdcSyncDeltaSPBMOptionParameterField_get_Cvf, (setter)PyCThostFtdcSyncDeltaSPBMOptionParameterField_set_Cvf, (char *)"Cvf", NULL},
    ///期权冲抵价格 
    {(char *)"DownPrice", (getter)PyCThostFtdcSyncDeltaSPBMOptionParameterField_get_DownPrice, (setter)PyCThostFtdcSyncDeltaSPBMOptionParameterField_set_DownPrice, (char *)"DownPrice", NULL},
    ///Delta值 
    {(char *)"Delta", (getter)PyCThostFtdcSyncDeltaSPBMOptionParameterField_get_Delta, (setter)PyCThostFtdcSyncDeltaSPBMOptionParameterField_set_Delta, (char *)"Delta", NULL},
    ///卖方期权风险转换最低值 
    {(char *)"SlimiDelta", (getter)PyCThostFtdcSyncDeltaSPBMOptionParameterField_get_SlimiDelta, (setter)PyCThostFtdcSyncDeltaSPBMOptionParameterField_set_SlimiDelta, (char *)"SlimiDelta", NULL},
    ///昨结算价 
    {(char *)"PreSettlementPrice", (getter)PyCThostFtdcSyncDeltaSPBMOptionParameterField_get_PreSettlementPrice, (setter)PyCThostFtdcSyncDeltaSPBMOptionParameterField_set_PreSettlementPrice, (char *)"PreSettlementPrice", NULL},
    ///操作标志 
    {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaSPBMOptionParameterField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaSPBMOptionParameterField_set_ActionDirection, (char *)"ActionDirection", NULL},
    ///追平序号 
    {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaSPBMOptionParameterField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaSPBMOptionParameterField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaSPBMOptionParameterField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaSPBMOptionParameterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaSPBMOptionParameterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaSPBMOptionParameterField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaSPBMOptionParameterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaSPBMOptionParameterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaSPBMOptionParameterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaSPBMOptionParameterField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaSPBMOptionParameterField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaSPBMOptionParameterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaSPBMOptionParameterField", (PyObject *)&PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaSPBMOptionParameterField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType);
		return -1;
    }

    return 0;
}
