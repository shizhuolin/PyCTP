
#include "PyCThostFtdcQryMaxOrderVolumeWithPriceField.h"

///根据价格查询最大报单数量

static PyObject *PyCThostFtdcQryMaxOrderVolumeWithPriceField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryMaxOrderVolumeWithPriceField *self = (PyCThostFtdcQryMaxOrderVolumeWithPriceField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryMaxOrderVolumeWithPriceField_init(PyCThostFtdcQryMaxOrderVolumeWithPriceField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "Direction", "OffsetFlag", "HedgeFlag", "MaxVolume", "Price", "ExchangeID", "InvestUnitID", "InstrumentID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QryMaxOrderVolumeWithPriceField_BrokerID = NULL;
    Py_ssize_t QryMaxOrderVolumeWithPriceField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *QryMaxOrderVolumeWithPriceField_InvestorID = NULL;
    Py_ssize_t QryMaxOrderVolumeWithPriceField_InvestorID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *QryMaxOrderVolumeWithPriceField_reserve1 = NULL;
    Py_ssize_t QryMaxOrderVolumeWithPriceField_reserve1_len = 0;
            
    ///买卖方向
    // TThostFtdcDirectionType char
    char QryMaxOrderVolumeWithPriceField_Direction = 0;
            
    ///开平标志
    // TThostFtdcOffsetFlagType char
    char QryMaxOrderVolumeWithPriceField_OffsetFlag = 0;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    char QryMaxOrderVolumeWithPriceField_HedgeFlag = 0;
            
    ///最大允许报单数量
    // TThostFtdcVolumeType int
    int QryMaxOrderVolumeWithPriceField_MaxVolume = 0;
        
    ///报单价格
    // TThostFtdcPriceType double
    double QryMaxOrderVolumeWithPriceField_Price = 0.0;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *QryMaxOrderVolumeWithPriceField_ExchangeID = NULL;
    Py_ssize_t QryMaxOrderVolumeWithPriceField_ExchangeID_len = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *QryMaxOrderVolumeWithPriceField_InvestUnitID = NULL;
    Py_ssize_t QryMaxOrderVolumeWithPriceField_InvestUnitID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *QryMaxOrderVolumeWithPriceField_InstrumentID = NULL;
    Py_ssize_t QryMaxOrderVolumeWithPriceField_InstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#cccidy#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#cccids#s#s#", (char **)kwlist
#endif

        , &QryMaxOrderVolumeWithPriceField_BrokerID, &QryMaxOrderVolumeWithPriceField_BrokerID_len 
        , &QryMaxOrderVolumeWithPriceField_InvestorID, &QryMaxOrderVolumeWithPriceField_InvestorID_len 
        , &QryMaxOrderVolumeWithPriceField_reserve1, &QryMaxOrderVolumeWithPriceField_reserve1_len 
        , &QryMaxOrderVolumeWithPriceField_Direction 
        , &QryMaxOrderVolumeWithPriceField_OffsetFlag 
        , &QryMaxOrderVolumeWithPriceField_HedgeFlag 
        , &QryMaxOrderVolumeWithPriceField_MaxVolume 
        , &QryMaxOrderVolumeWithPriceField_Price 
        , &QryMaxOrderVolumeWithPriceField_ExchangeID, &QryMaxOrderVolumeWithPriceField_ExchangeID_len 
        , &QryMaxOrderVolumeWithPriceField_InvestUnitID, &QryMaxOrderVolumeWithPriceField_InvestUnitID_len 
        , &QryMaxOrderVolumeWithPriceField_InstrumentID, &QryMaxOrderVolumeWithPriceField_InstrumentID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QryMaxOrderVolumeWithPriceField_BrokerID != NULL ) {
        if(QryMaxOrderVolumeWithPriceField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QryMaxOrderVolumeWithPriceField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QryMaxOrderVolumeWithPriceField_BrokerID, QryMaxOrderVolumeWithPriceField_BrokerID_len);        
        strncpy(self->data.BrokerID, QryMaxOrderVolumeWithPriceField_BrokerID, sizeof(self->data.BrokerID) );
        QryMaxOrderVolumeWithPriceField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( QryMaxOrderVolumeWithPriceField_InvestorID != NULL ) {
        if(QryMaxOrderVolumeWithPriceField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", QryMaxOrderVolumeWithPriceField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, QryMaxOrderVolumeWithPriceField_InvestorID, QryMaxOrderVolumeWithPriceField_InvestorID_len);        
        strncpy(self->data.InvestorID, QryMaxOrderVolumeWithPriceField_InvestorID, sizeof(self->data.InvestorID) );
        QryMaxOrderVolumeWithPriceField_InvestorID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( QryMaxOrderVolumeWithPriceField_reserve1 != NULL ) {
        if(QryMaxOrderVolumeWithPriceField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", QryMaxOrderVolumeWithPriceField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, QryMaxOrderVolumeWithPriceField_reserve1, QryMaxOrderVolumeWithPriceField_reserve1_len);        
        strncpy(self->data.reserve1, QryMaxOrderVolumeWithPriceField_reserve1, sizeof(self->data.reserve1) );
        QryMaxOrderVolumeWithPriceField_reserve1 = NULL;
    }
            
    ///买卖方向
    // TThostFtdcDirectionType char
    self->data.Direction = QryMaxOrderVolumeWithPriceField_Direction;
            
    ///开平标志
    // TThostFtdcOffsetFlagType char
    self->data.OffsetFlag = QryMaxOrderVolumeWithPriceField_OffsetFlag;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    self->data.HedgeFlag = QryMaxOrderVolumeWithPriceField_HedgeFlag;
            
    ///最大允许报单数量
    // TThostFtdcVolumeType int
    self->data.MaxVolume = QryMaxOrderVolumeWithPriceField_MaxVolume;
        
    ///报单价格
    // TThostFtdcPriceType double
    self->data.Price = QryMaxOrderVolumeWithPriceField_Price;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( QryMaxOrderVolumeWithPriceField_ExchangeID != NULL ) {
        if(QryMaxOrderVolumeWithPriceField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", QryMaxOrderVolumeWithPriceField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, QryMaxOrderVolumeWithPriceField_ExchangeID, QryMaxOrderVolumeWithPriceField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, QryMaxOrderVolumeWithPriceField_ExchangeID, sizeof(self->data.ExchangeID) );
        QryMaxOrderVolumeWithPriceField_ExchangeID = NULL;
    }
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( QryMaxOrderVolumeWithPriceField_InvestUnitID != NULL ) {
        if(QryMaxOrderVolumeWithPriceField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", QryMaxOrderVolumeWithPriceField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, QryMaxOrderVolumeWithPriceField_InvestUnitID, QryMaxOrderVolumeWithPriceField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, QryMaxOrderVolumeWithPriceField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        QryMaxOrderVolumeWithPriceField_InvestUnitID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( QryMaxOrderVolumeWithPriceField_InstrumentID != NULL ) {
        if(QryMaxOrderVolumeWithPriceField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", QryMaxOrderVolumeWithPriceField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, QryMaxOrderVolumeWithPriceField_InstrumentID, QryMaxOrderVolumeWithPriceField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, QryMaxOrderVolumeWithPriceField_InstrumentID, sizeof(self->data.InstrumentID) );
        QryMaxOrderVolumeWithPriceField_InstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryMaxOrderVolumeWithPriceField_dealloc(PyCThostFtdcQryMaxOrderVolumeWithPriceField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryMaxOrderVolumeWithPriceField_repr(PyCThostFtdcQryMaxOrderVolumeWithPriceField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:c,s:c,s:c,s:i,s:d,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:c,s:c,s:c,s:i,s:d,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"Direction", self->data.Direction 
        ,"OffsetFlag", self->data.OffsetFlag 
        ,"HedgeFlag", self->data.HedgeFlag 
        ,"MaxVolume", self->data.MaxVolume 
        ,"Price", self->data.Price 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"InvestUnitID", self->data.InvestUnitID//, (Py_ssize_t)sizeof(self->data.InvestUnitID) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryMaxOrderVolumeWithPriceField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQryMaxOrderVolumeWithPriceField_get_BrokerID(PyCThostFtdcQryMaxOrderVolumeWithPriceField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQryMaxOrderVolumeWithPriceField_set_BrokerID(PyCThostFtdcQryMaxOrderVolumeWithPriceField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryMaxOrderVolumeWithPriceField_get_InvestorID(PyCThostFtdcQryMaxOrderVolumeWithPriceField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcQryMaxOrderVolumeWithPriceField_set_InvestorID(PyCThostFtdcQryMaxOrderVolumeWithPriceField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryMaxOrderVolumeWithPriceField_get_reserve1(PyCThostFtdcQryMaxOrderVolumeWithPriceField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcQryMaxOrderVolumeWithPriceField_set_reserve1(PyCThostFtdcQryMaxOrderVolumeWithPriceField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryMaxOrderVolumeWithPriceField_get_Direction(PyCThostFtdcQryMaxOrderVolumeWithPriceField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

///买卖方向
// TThostFtdcDirectionType char
static int PyCThostFtdcQryMaxOrderVolumeWithPriceField_set_Direction(PyCThostFtdcQryMaxOrderVolumeWithPriceField *self, PyObject* val, void *closure) {
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
            
///开平标志
// TThostFtdcOffsetFlagType char
static PyObject *PyCThostFtdcQryMaxOrderVolumeWithPriceField_get_OffsetFlag(PyCThostFtdcQryMaxOrderVolumeWithPriceField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OffsetFlag), 1);
}

///开平标志
// TThostFtdcOffsetFlagType char
static int PyCThostFtdcQryMaxOrderVolumeWithPriceField_set_OffsetFlag(PyCThostFtdcQryMaxOrderVolumeWithPriceField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OffsetFlag Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OffsetFlag)) {
        PyErr_SetString(PyExc_ValueError, "OffsetFlag must be equal 1 bytes");
        return -1;
    }
    self->data.OffsetFlag = *buf;
    return 0;
}
            
///投机套保标志
// TThostFtdcHedgeFlagType char
static PyObject *PyCThostFtdcQryMaxOrderVolumeWithPriceField_get_HedgeFlag(PyCThostFtdcQryMaxOrderVolumeWithPriceField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

///投机套保标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcQryMaxOrderVolumeWithPriceField_set_HedgeFlag(PyCThostFtdcQryMaxOrderVolumeWithPriceField *self, PyObject* val, void *closure) {
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
            
///最大允许报单数量
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcQryMaxOrderVolumeWithPriceField_get_MaxVolume(PyCThostFtdcQryMaxOrderVolumeWithPriceField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.MaxVolume);
#else
    return PyInt_FromLong(self->data.MaxVolume);
#endif
}

///最大允许报单数量
// TThostFtdcVolumeType int
static int PyCThostFtdcQryMaxOrderVolumeWithPriceField_set_MaxVolume(PyCThostFtdcQryMaxOrderVolumeWithPriceField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MaxVolume Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MaxVolume Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the MaxVolume value out of range for C int");
        return -1;
    }
    self->data.MaxVolume = (int)buf;
    return 0;
}
        
///报单价格
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcQryMaxOrderVolumeWithPriceField_get_Price(PyCThostFtdcQryMaxOrderVolumeWithPriceField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Price);
}

///报单价格
// TThostFtdcPriceType double
static int PyCThostFtdcQryMaxOrderVolumeWithPriceField_set_Price(PyCThostFtdcQryMaxOrderVolumeWithPriceField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Price Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Price = buf;
    return 0;
}
        
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcQryMaxOrderVolumeWithPriceField_get_ExchangeID(PyCThostFtdcQryMaxOrderVolumeWithPriceField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcQryMaxOrderVolumeWithPriceField_set_ExchangeID(PyCThostFtdcQryMaxOrderVolumeWithPriceField *self, PyObject* val, void *closure) {
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
            
///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static PyObject *PyCThostFtdcQryMaxOrderVolumeWithPriceField_get_InvestUnitID(PyCThostFtdcQryMaxOrderVolumeWithPriceField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcQryMaxOrderVolumeWithPriceField_set_InvestUnitID(PyCThostFtdcQryMaxOrderVolumeWithPriceField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryMaxOrderVolumeWithPriceField_get_InstrumentID(PyCThostFtdcQryMaxOrderVolumeWithPriceField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcQryMaxOrderVolumeWithPriceField_set_InstrumentID(PyCThostFtdcQryMaxOrderVolumeWithPriceField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQryMaxOrderVolumeWithPriceField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQryMaxOrderVolumeWithPriceField_get_BrokerID, (setter)PyCThostFtdcQryMaxOrderVolumeWithPriceField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcQryMaxOrderVolumeWithPriceField_get_InvestorID, (setter)PyCThostFtdcQryMaxOrderVolumeWithPriceField_set_InvestorID, (char *)"InvestorID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcQryMaxOrderVolumeWithPriceField_get_reserve1, (setter)PyCThostFtdcQryMaxOrderVolumeWithPriceField_set_reserve1, (char *)"reserve1", NULL},
    ///买卖方向 
    {(char *)"Direction", (getter)PyCThostFtdcQryMaxOrderVolumeWithPriceField_get_Direction, (setter)PyCThostFtdcQryMaxOrderVolumeWithPriceField_set_Direction, (char *)"Direction", NULL},
    ///开平标志 
    {(char *)"OffsetFlag", (getter)PyCThostFtdcQryMaxOrderVolumeWithPriceField_get_OffsetFlag, (setter)PyCThostFtdcQryMaxOrderVolumeWithPriceField_set_OffsetFlag, (char *)"OffsetFlag", NULL},
    ///投机套保标志 
    {(char *)"HedgeFlag", (getter)PyCThostFtdcQryMaxOrderVolumeWithPriceField_get_HedgeFlag, (setter)PyCThostFtdcQryMaxOrderVolumeWithPriceField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
    ///最大允许报单数量 
    {(char *)"MaxVolume", (getter)PyCThostFtdcQryMaxOrderVolumeWithPriceField_get_MaxVolume, (setter)PyCThostFtdcQryMaxOrderVolumeWithPriceField_set_MaxVolume, (char *)"MaxVolume", NULL},
    ///报单价格 
    {(char *)"Price", (getter)PyCThostFtdcQryMaxOrderVolumeWithPriceField_get_Price, (setter)PyCThostFtdcQryMaxOrderVolumeWithPriceField_set_Price, (char *)"Price", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcQryMaxOrderVolumeWithPriceField_get_ExchangeID, (setter)PyCThostFtdcQryMaxOrderVolumeWithPriceField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcQryMaxOrderVolumeWithPriceField_get_InvestUnitID, (setter)PyCThostFtdcQryMaxOrderVolumeWithPriceField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcQryMaxOrderVolumeWithPriceField_get_InstrumentID, (setter)PyCThostFtdcQryMaxOrderVolumeWithPriceField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryMaxOrderVolumeWithPriceField",	/* tp_name */
	sizeof(PyCThostFtdcQryMaxOrderVolumeWithPriceField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryMaxOrderVolumeWithPriceField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryMaxOrderVolumeWithPriceField_repr,   /* tp_repr */
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
	"CThostFtdcQryMaxOrderVolumeWithPriceField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryMaxOrderVolumeWithPriceField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryMaxOrderVolumeWithPriceField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryMaxOrderVolumeWithPriceField_new,       /* tp_new */
};

int PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryMaxOrderVolumeWithPriceField  */
	if (PyType_Ready(&PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryMaxOrderVolumeWithPriceField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryMaxOrderVolumeWithPriceField", (PyObject *)&PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryMaxOrderVolumeWithPriceField to module");
        Py_DECREF(&PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType);
		return -1;
    }

    return 0;
}
