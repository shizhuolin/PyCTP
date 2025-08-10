
#include "PyCThostFtdcSyncDeltaEWarrantOffsetField.h"

///风险结算追平仓单折抵

static PyObject *PyCThostFtdcSyncDeltaEWarrantOffsetField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaEWarrantOffsetField *self = (PyCThostFtdcSyncDeltaEWarrantOffsetField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaEWarrantOffsetField_init(PyCThostFtdcSyncDeltaEWarrantOffsetField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "BrokerID", "InvestorID", "ExchangeID", "InstrumentID", "Direction", "HedgeFlag", "Volume", "ActionDirection", "SyncDeltaSequenceNo",  NULL};


    ///交易日期
    // TThostFtdcTradeDateType char[9]
    const char *SyncDeltaEWarrantOffsetField_TradingDay = NULL;
    Py_ssize_t SyncDeltaEWarrantOffsetField_TradingDay_len = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *SyncDeltaEWarrantOffsetField_BrokerID = NULL;
    Py_ssize_t SyncDeltaEWarrantOffsetField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *SyncDeltaEWarrantOffsetField_InvestorID = NULL;
    Py_ssize_t SyncDeltaEWarrantOffsetField_InvestorID_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *SyncDeltaEWarrantOffsetField_ExchangeID = NULL;
    Py_ssize_t SyncDeltaEWarrantOffsetField_ExchangeID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *SyncDeltaEWarrantOffsetField_InstrumentID = NULL;
    Py_ssize_t SyncDeltaEWarrantOffsetField_InstrumentID_len = 0;
            
    ///买卖方向
    // TThostFtdcDirectionType char
    char SyncDeltaEWarrantOffsetField_Direction = 0;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    char SyncDeltaEWarrantOffsetField_HedgeFlag = 0;
            
    ///数量
    // TThostFtdcVolumeType int
    int SyncDeltaEWarrantOffsetField_Volume = 0;
        
    ///操作标志
    // TThostFtdcActionDirectionType char
    char SyncDeltaEWarrantOffsetField_ActionDirection = 0;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    int SyncDeltaEWarrantOffsetField_SyncDeltaSequenceNo = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#ccici", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#ccici", (char **)kwlist
#endif

        , &SyncDeltaEWarrantOffsetField_TradingDay, &SyncDeltaEWarrantOffsetField_TradingDay_len 
        , &SyncDeltaEWarrantOffsetField_BrokerID, &SyncDeltaEWarrantOffsetField_BrokerID_len 
        , &SyncDeltaEWarrantOffsetField_InvestorID, &SyncDeltaEWarrantOffsetField_InvestorID_len 
        , &SyncDeltaEWarrantOffsetField_ExchangeID, &SyncDeltaEWarrantOffsetField_ExchangeID_len 
        , &SyncDeltaEWarrantOffsetField_InstrumentID, &SyncDeltaEWarrantOffsetField_InstrumentID_len 
        , &SyncDeltaEWarrantOffsetField_Direction 
        , &SyncDeltaEWarrantOffsetField_HedgeFlag 
        , &SyncDeltaEWarrantOffsetField_Volume 
        , &SyncDeltaEWarrantOffsetField_ActionDirection 
        , &SyncDeltaEWarrantOffsetField_SyncDeltaSequenceNo 


    )) {
        return -1;
    }


    ///交易日期
    // TThostFtdcTradeDateType char[9]
    if( SyncDeltaEWarrantOffsetField_TradingDay != NULL ) {
        if(SyncDeltaEWarrantOffsetField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", SyncDeltaEWarrantOffsetField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, SyncDeltaEWarrantOffsetField_TradingDay, SyncDeltaEWarrantOffsetField_TradingDay_len);        
        strncpy(self->data.TradingDay, SyncDeltaEWarrantOffsetField_TradingDay, sizeof(self->data.TradingDay) );
        SyncDeltaEWarrantOffsetField_TradingDay = NULL;
    }
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( SyncDeltaEWarrantOffsetField_BrokerID != NULL ) {
        if(SyncDeltaEWarrantOffsetField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", SyncDeltaEWarrantOffsetField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, SyncDeltaEWarrantOffsetField_BrokerID, SyncDeltaEWarrantOffsetField_BrokerID_len);        
        strncpy(self->data.BrokerID, SyncDeltaEWarrantOffsetField_BrokerID, sizeof(self->data.BrokerID) );
        SyncDeltaEWarrantOffsetField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( SyncDeltaEWarrantOffsetField_InvestorID != NULL ) {
        if(SyncDeltaEWarrantOffsetField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", SyncDeltaEWarrantOffsetField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, SyncDeltaEWarrantOffsetField_InvestorID, SyncDeltaEWarrantOffsetField_InvestorID_len);        
        strncpy(self->data.InvestorID, SyncDeltaEWarrantOffsetField_InvestorID, sizeof(self->data.InvestorID) );
        SyncDeltaEWarrantOffsetField_InvestorID = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( SyncDeltaEWarrantOffsetField_ExchangeID != NULL ) {
        if(SyncDeltaEWarrantOffsetField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", SyncDeltaEWarrantOffsetField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, SyncDeltaEWarrantOffsetField_ExchangeID, SyncDeltaEWarrantOffsetField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, SyncDeltaEWarrantOffsetField_ExchangeID, sizeof(self->data.ExchangeID) );
        SyncDeltaEWarrantOffsetField_ExchangeID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( SyncDeltaEWarrantOffsetField_InstrumentID != NULL ) {
        if(SyncDeltaEWarrantOffsetField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", SyncDeltaEWarrantOffsetField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, SyncDeltaEWarrantOffsetField_InstrumentID, SyncDeltaEWarrantOffsetField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, SyncDeltaEWarrantOffsetField_InstrumentID, sizeof(self->data.InstrumentID) );
        SyncDeltaEWarrantOffsetField_InstrumentID = NULL;
    }
            
    ///买卖方向
    // TThostFtdcDirectionType char
    self->data.Direction = SyncDeltaEWarrantOffsetField_Direction;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    self->data.HedgeFlag = SyncDeltaEWarrantOffsetField_HedgeFlag;
            
    ///数量
    // TThostFtdcVolumeType int
    self->data.Volume = SyncDeltaEWarrantOffsetField_Volume;
        
    ///操作标志
    // TThostFtdcActionDirectionType char
    self->data.ActionDirection = SyncDeltaEWarrantOffsetField_ActionDirection;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    self->data.SyncDeltaSequenceNo = SyncDeltaEWarrantOffsetField_SyncDeltaSequenceNo;
        

    return 0;
}

static void PyCThostFtdcSyncDeltaEWarrantOffsetField_dealloc(PyCThostFtdcSyncDeltaEWarrantOffsetField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaEWarrantOffsetField_repr(PyCThostFtdcSyncDeltaEWarrantOffsetField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:c,s:c,s:i,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:c,s:c,s:i,s:c,s:i}"
#endif

        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"Direction", self->data.Direction 
        ,"HedgeFlag", self->data.HedgeFlag 
        ,"Volume", self->data.Volume 
        ,"ActionDirection", self->data.ActionDirection 
        ,"SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaEWarrantOffsetField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易日期
// TThostFtdcTradeDateType char[9]
static PyObject *PyCThostFtdcSyncDeltaEWarrantOffsetField_get_TradingDay(PyCThostFtdcSyncDeltaEWarrantOffsetField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcSyncDeltaEWarrantOffsetField_set_TradingDay(PyCThostFtdcSyncDeltaEWarrantOffsetField *self, PyObject* val, void *closure) {
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
            
///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcSyncDeltaEWarrantOffsetField_get_BrokerID(PyCThostFtdcSyncDeltaEWarrantOffsetField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcSyncDeltaEWarrantOffsetField_set_BrokerID(PyCThostFtdcSyncDeltaEWarrantOffsetField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaEWarrantOffsetField_get_InvestorID(PyCThostFtdcSyncDeltaEWarrantOffsetField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcSyncDeltaEWarrantOffsetField_set_InvestorID(PyCThostFtdcSyncDeltaEWarrantOffsetField *self, PyObject* val, void *closure) {
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
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcSyncDeltaEWarrantOffsetField_get_ExchangeID(PyCThostFtdcSyncDeltaEWarrantOffsetField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcSyncDeltaEWarrantOffsetField_set_ExchangeID(PyCThostFtdcSyncDeltaEWarrantOffsetField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaEWarrantOffsetField_get_InstrumentID(PyCThostFtdcSyncDeltaEWarrantOffsetField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcSyncDeltaEWarrantOffsetField_set_InstrumentID(PyCThostFtdcSyncDeltaEWarrantOffsetField *self, PyObject* val, void *closure) {
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
            
///买卖方向
// TThostFtdcDirectionType char
static PyObject *PyCThostFtdcSyncDeltaEWarrantOffsetField_get_Direction(PyCThostFtdcSyncDeltaEWarrantOffsetField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

///买卖方向
// TThostFtdcDirectionType char
static int PyCThostFtdcSyncDeltaEWarrantOffsetField_set_Direction(PyCThostFtdcSyncDeltaEWarrantOffsetField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Direction Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Direction)) {
        PyErr_SetString(PyExc_ValueError, "Direction must be equal 1 bytes");
        return -1;
    }
    self->data.Direction = *buf;
    return 0;
}
            
///投机套保标志
// TThostFtdcHedgeFlagType char
static PyObject *PyCThostFtdcSyncDeltaEWarrantOffsetField_get_HedgeFlag(PyCThostFtdcSyncDeltaEWarrantOffsetField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

///投机套保标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcSyncDeltaEWarrantOffsetField_set_HedgeFlag(PyCThostFtdcSyncDeltaEWarrantOffsetField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    self->data.HedgeFlag = *buf;
    return 0;
}
            
///数量
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcSyncDeltaEWarrantOffsetField_get_Volume(PyCThostFtdcSyncDeltaEWarrantOffsetField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.Volume);
#else
    return PyInt_FromLong(self->data.Volume);
#endif
}

///数量
// TThostFtdcVolumeType int
static int PyCThostFtdcSyncDeltaEWarrantOffsetField_set_Volume(PyCThostFtdcSyncDeltaEWarrantOffsetField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Volume Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Volume Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the Volume value out of range for C int");
        return -1;
    }
    self->data.Volume = (int)buf;
    return 0;
}
        
///操作标志
// TThostFtdcActionDirectionType char
static PyObject *PyCThostFtdcSyncDeltaEWarrantOffsetField_get_ActionDirection(PyCThostFtdcSyncDeltaEWarrantOffsetField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

///操作标志
// TThostFtdcActionDirectionType char
static int PyCThostFtdcSyncDeltaEWarrantOffsetField_set_ActionDirection(PyCThostFtdcSyncDeltaEWarrantOffsetField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaEWarrantOffsetField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaEWarrantOffsetField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else
    return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif
}

///追平序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcSyncDeltaEWarrantOffsetField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaEWarrantOffsetField *self, PyObject* val, void *closure) {
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
        

static PyGetSetDef PyCThostFtdcSyncDeltaEWarrantOffsetField_getset[] = {
    ///交易日期 
    {(char *)"TradingDay", (getter)PyCThostFtdcSyncDeltaEWarrantOffsetField_get_TradingDay, (setter)PyCThostFtdcSyncDeltaEWarrantOffsetField_set_TradingDay, (char *)"TradingDay", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcSyncDeltaEWarrantOffsetField_get_BrokerID, (setter)PyCThostFtdcSyncDeltaEWarrantOffsetField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcSyncDeltaEWarrantOffsetField_get_InvestorID, (setter)PyCThostFtdcSyncDeltaEWarrantOffsetField_set_InvestorID, (char *)"InvestorID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaEWarrantOffsetField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaEWarrantOffsetField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcSyncDeltaEWarrantOffsetField_get_InstrumentID, (setter)PyCThostFtdcSyncDeltaEWarrantOffsetField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///买卖方向 
    {(char *)"Direction", (getter)PyCThostFtdcSyncDeltaEWarrantOffsetField_get_Direction, (setter)PyCThostFtdcSyncDeltaEWarrantOffsetField_set_Direction, (char *)"Direction", NULL},
    ///投机套保标志 
    {(char *)"HedgeFlag", (getter)PyCThostFtdcSyncDeltaEWarrantOffsetField_get_HedgeFlag, (setter)PyCThostFtdcSyncDeltaEWarrantOffsetField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
    ///数量 
    {(char *)"Volume", (getter)PyCThostFtdcSyncDeltaEWarrantOffsetField_get_Volume, (setter)PyCThostFtdcSyncDeltaEWarrantOffsetField_set_Volume, (char *)"Volume", NULL},
    ///操作标志 
    {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaEWarrantOffsetField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaEWarrantOffsetField_set_ActionDirection, (char *)"ActionDirection", NULL},
    ///追平序号 
    {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaEWarrantOffsetField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaEWarrantOffsetField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaEWarrantOffsetFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaEWarrantOffsetField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaEWarrantOffsetField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaEWarrantOffsetField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaEWarrantOffsetField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaEWarrantOffsetField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaEWarrantOffsetField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaEWarrantOffsetField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaEWarrantOffsetField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaEWarrantOffsetField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaEWarrantOffsetFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaEWarrantOffsetField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaEWarrantOffsetFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaEWarrantOffsetField", (PyObject *)&PyCThostFtdcSyncDeltaEWarrantOffsetFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaEWarrantOffsetField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaEWarrantOffsetFieldType);
		return -1;
    }

    return 0;
}
