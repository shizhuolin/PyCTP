
#include "PyCThostFtdcEWarrantOffsetField.h"

///仓单折抵信息

static PyObject *PyCThostFtdcEWarrantOffsetField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcEWarrantOffsetField *self = (PyCThostFtdcEWarrantOffsetField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcEWarrantOffsetField_init(PyCThostFtdcEWarrantOffsetField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "BrokerID", "InvestorID", "ExchangeID", "reserve1", "Direction", "HedgeFlag", "Volume", "InvestUnitID", "InstrumentID",  NULL};


    ///交易日期
    // TThostFtdcTradeDateType char[9]
    const char *EWarrantOffsetField_TradingDay = NULL;
    Py_ssize_t EWarrantOffsetField_TradingDay_len = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *EWarrantOffsetField_BrokerID = NULL;
    Py_ssize_t EWarrantOffsetField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *EWarrantOffsetField_InvestorID = NULL;
    Py_ssize_t EWarrantOffsetField_InvestorID_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *EWarrantOffsetField_ExchangeID = NULL;
    Py_ssize_t EWarrantOffsetField_ExchangeID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *EWarrantOffsetField_reserve1 = NULL;
    Py_ssize_t EWarrantOffsetField_reserve1_len = 0;
            
    ///买卖方向
    // TThostFtdcDirectionType char
    char EWarrantOffsetField_Direction = 0;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    char EWarrantOffsetField_HedgeFlag = 0;
            
    ///数量
    // TThostFtdcVolumeType int
    int EWarrantOffsetField_Volume = 0;
        
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *EWarrantOffsetField_InvestUnitID = NULL;
    Py_ssize_t EWarrantOffsetField_InvestUnitID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *EWarrantOffsetField_InstrumentID = NULL;
    Py_ssize_t EWarrantOffsetField_InstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#cciy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#ccis#s#", (char **)kwlist
#endif

        , &EWarrantOffsetField_TradingDay, &EWarrantOffsetField_TradingDay_len 
        , &EWarrantOffsetField_BrokerID, &EWarrantOffsetField_BrokerID_len 
        , &EWarrantOffsetField_InvestorID, &EWarrantOffsetField_InvestorID_len 
        , &EWarrantOffsetField_ExchangeID, &EWarrantOffsetField_ExchangeID_len 
        , &EWarrantOffsetField_reserve1, &EWarrantOffsetField_reserve1_len 
        , &EWarrantOffsetField_Direction 
        , &EWarrantOffsetField_HedgeFlag 
        , &EWarrantOffsetField_Volume 
        , &EWarrantOffsetField_InvestUnitID, &EWarrantOffsetField_InvestUnitID_len 
        , &EWarrantOffsetField_InstrumentID, &EWarrantOffsetField_InstrumentID_len 


    )) {
        return -1;
    }


    ///交易日期
    // TThostFtdcTradeDateType char[9]
    if( EWarrantOffsetField_TradingDay != NULL ) {
        if(EWarrantOffsetField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", EWarrantOffsetField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, EWarrantOffsetField_TradingDay, EWarrantOffsetField_TradingDay_len);        
        strncpy(self->data.TradingDay, EWarrantOffsetField_TradingDay, sizeof(self->data.TradingDay) );
        EWarrantOffsetField_TradingDay = NULL;
    }
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( EWarrantOffsetField_BrokerID != NULL ) {
        if(EWarrantOffsetField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", EWarrantOffsetField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, EWarrantOffsetField_BrokerID, EWarrantOffsetField_BrokerID_len);        
        strncpy(self->data.BrokerID, EWarrantOffsetField_BrokerID, sizeof(self->data.BrokerID) );
        EWarrantOffsetField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( EWarrantOffsetField_InvestorID != NULL ) {
        if(EWarrantOffsetField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", EWarrantOffsetField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, EWarrantOffsetField_InvestorID, EWarrantOffsetField_InvestorID_len);        
        strncpy(self->data.InvestorID, EWarrantOffsetField_InvestorID, sizeof(self->data.InvestorID) );
        EWarrantOffsetField_InvestorID = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( EWarrantOffsetField_ExchangeID != NULL ) {
        if(EWarrantOffsetField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", EWarrantOffsetField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, EWarrantOffsetField_ExchangeID, EWarrantOffsetField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, EWarrantOffsetField_ExchangeID, sizeof(self->data.ExchangeID) );
        EWarrantOffsetField_ExchangeID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( EWarrantOffsetField_reserve1 != NULL ) {
        if(EWarrantOffsetField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", EWarrantOffsetField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, EWarrantOffsetField_reserve1, EWarrantOffsetField_reserve1_len);        
        strncpy(self->data.reserve1, EWarrantOffsetField_reserve1, sizeof(self->data.reserve1) );
        EWarrantOffsetField_reserve1 = NULL;
    }
            
    ///买卖方向
    // TThostFtdcDirectionType char
    self->data.Direction = EWarrantOffsetField_Direction;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    self->data.HedgeFlag = EWarrantOffsetField_HedgeFlag;
            
    ///数量
    // TThostFtdcVolumeType int
    self->data.Volume = EWarrantOffsetField_Volume;
        
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( EWarrantOffsetField_InvestUnitID != NULL ) {
        if(EWarrantOffsetField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", EWarrantOffsetField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, EWarrantOffsetField_InvestUnitID, EWarrantOffsetField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, EWarrantOffsetField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        EWarrantOffsetField_InvestUnitID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( EWarrantOffsetField_InstrumentID != NULL ) {
        if(EWarrantOffsetField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", EWarrantOffsetField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, EWarrantOffsetField_InstrumentID, EWarrantOffsetField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, EWarrantOffsetField_InstrumentID, sizeof(self->data.InstrumentID) );
        EWarrantOffsetField_InstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcEWarrantOffsetField_dealloc(PyCThostFtdcEWarrantOffsetField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcEWarrantOffsetField_repr(PyCThostFtdcEWarrantOffsetField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:c,s:c,s:i,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:c,s:c,s:i,s:s,s:s}"
#endif

        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"Direction", self->data.Direction 
        ,"HedgeFlag", self->data.HedgeFlag 
        ,"Volume", self->data.Volume 
        ,"InvestUnitID", self->data.InvestUnitID//, (Py_ssize_t)sizeof(self->data.InvestUnitID) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcEWarrantOffsetField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易日期
// TThostFtdcTradeDateType char[9]
static PyObject *PyCThostFtdcEWarrantOffsetField_get_TradingDay(PyCThostFtdcEWarrantOffsetField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcEWarrantOffsetField_set_TradingDay(PyCThostFtdcEWarrantOffsetField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcEWarrantOffsetField_get_BrokerID(PyCThostFtdcEWarrantOffsetField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcEWarrantOffsetField_set_BrokerID(PyCThostFtdcEWarrantOffsetField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcEWarrantOffsetField_get_InvestorID(PyCThostFtdcEWarrantOffsetField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcEWarrantOffsetField_set_InvestorID(PyCThostFtdcEWarrantOffsetField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcEWarrantOffsetField_get_ExchangeID(PyCThostFtdcEWarrantOffsetField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcEWarrantOffsetField_set_ExchangeID(PyCThostFtdcEWarrantOffsetField *self, PyObject* val, void *closure) {
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
            
///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcEWarrantOffsetField_get_reserve1(PyCThostFtdcEWarrantOffsetField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcEWarrantOffsetField_set_reserve1(PyCThostFtdcEWarrantOffsetField *self, PyObject* val, void *closure) {
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
            
///买卖方向
// TThostFtdcDirectionType char
static PyObject *PyCThostFtdcEWarrantOffsetField_get_Direction(PyCThostFtdcEWarrantOffsetField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

///买卖方向
// TThostFtdcDirectionType char
static int PyCThostFtdcEWarrantOffsetField_set_Direction(PyCThostFtdcEWarrantOffsetField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcEWarrantOffsetField_get_HedgeFlag(PyCThostFtdcEWarrantOffsetField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

///投机套保标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcEWarrantOffsetField_set_HedgeFlag(PyCThostFtdcEWarrantOffsetField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcEWarrantOffsetField_get_Volume(PyCThostFtdcEWarrantOffsetField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.Volume);
#else
    return PyInt_FromLong(self->data.Volume);
#endif
}

///数量
// TThostFtdcVolumeType int
static int PyCThostFtdcEWarrantOffsetField_set_Volume(PyCThostFtdcEWarrantOffsetField *self, PyObject* val, void *closure) {
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
        
///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static PyObject *PyCThostFtdcEWarrantOffsetField_get_InvestUnitID(PyCThostFtdcEWarrantOffsetField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcEWarrantOffsetField_set_InvestUnitID(PyCThostFtdcEWarrantOffsetField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcEWarrantOffsetField_get_InstrumentID(PyCThostFtdcEWarrantOffsetField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcEWarrantOffsetField_set_InstrumentID(PyCThostFtdcEWarrantOffsetField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcEWarrantOffsetField_getset[] = {
    ///交易日期 
    {(char *)"TradingDay", (getter)PyCThostFtdcEWarrantOffsetField_get_TradingDay, (setter)PyCThostFtdcEWarrantOffsetField_set_TradingDay, (char *)"TradingDay", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcEWarrantOffsetField_get_BrokerID, (setter)PyCThostFtdcEWarrantOffsetField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcEWarrantOffsetField_get_InvestorID, (setter)PyCThostFtdcEWarrantOffsetField_set_InvestorID, (char *)"InvestorID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcEWarrantOffsetField_get_ExchangeID, (setter)PyCThostFtdcEWarrantOffsetField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcEWarrantOffsetField_get_reserve1, (setter)PyCThostFtdcEWarrantOffsetField_set_reserve1, (char *)"reserve1", NULL},
    ///买卖方向 
    {(char *)"Direction", (getter)PyCThostFtdcEWarrantOffsetField_get_Direction, (setter)PyCThostFtdcEWarrantOffsetField_set_Direction, (char *)"Direction", NULL},
    ///投机套保标志 
    {(char *)"HedgeFlag", (getter)PyCThostFtdcEWarrantOffsetField_get_HedgeFlag, (setter)PyCThostFtdcEWarrantOffsetField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
    ///数量 
    {(char *)"Volume", (getter)PyCThostFtdcEWarrantOffsetField_get_Volume, (setter)PyCThostFtdcEWarrantOffsetField_set_Volume, (char *)"Volume", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcEWarrantOffsetField_get_InvestUnitID, (setter)PyCThostFtdcEWarrantOffsetField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcEWarrantOffsetField_get_InstrumentID, (setter)PyCThostFtdcEWarrantOffsetField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcEWarrantOffsetFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcEWarrantOffsetField",	/* tp_name */
	sizeof(PyCThostFtdcEWarrantOffsetField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcEWarrantOffsetField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcEWarrantOffsetField_repr,   /* tp_repr */
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
	"CThostFtdcEWarrantOffsetField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcEWarrantOffsetField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcEWarrantOffsetField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcEWarrantOffsetField_new,       /* tp_new */
};

int PyCThostFtdcEWarrantOffsetFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcEWarrantOffsetField  */
	if (PyType_Ready(&PyCThostFtdcEWarrantOffsetFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcEWarrantOffsetField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcEWarrantOffsetFieldType);
    if( PyModule_AddObject(module, "CThostFtdcEWarrantOffsetField", (PyObject *)&PyCThostFtdcEWarrantOffsetFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcEWarrantOffsetField to module");
        Py_DECREF(&PyCThostFtdcEWarrantOffsetFieldType);
		return -1;
    }

    return 0;
}
