
#include "PyCThostFtdcQryMaxOrderVolumeField.h"

///查询最大报单数量

static PyObject *PyCThostFtdcQryMaxOrderVolumeField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryMaxOrderVolumeField *self = (PyCThostFtdcQryMaxOrderVolumeField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryMaxOrderVolumeField_init(PyCThostFtdcQryMaxOrderVolumeField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "Direction", "OffsetFlag", "HedgeFlag", "MaxVolume", "ExchangeID", "InvestUnitID", "InstrumentID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QryMaxOrderVolumeField_BrokerID = NULL;
    Py_ssize_t QryMaxOrderVolumeField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *QryMaxOrderVolumeField_InvestorID = NULL;
    Py_ssize_t QryMaxOrderVolumeField_InvestorID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *QryMaxOrderVolumeField_reserve1 = NULL;
    Py_ssize_t QryMaxOrderVolumeField_reserve1_len = 0;
            
    ///买卖方向
    // TThostFtdcDirectionType char
    char QryMaxOrderVolumeField_Direction = 0;
            
    ///开平标志
    // TThostFtdcOffsetFlagType char
    char QryMaxOrderVolumeField_OffsetFlag = 0;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    char QryMaxOrderVolumeField_HedgeFlag = 0;
            
    ///最大允许报单数量
    // TThostFtdcVolumeType int
    int QryMaxOrderVolumeField_MaxVolume = 0;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *QryMaxOrderVolumeField_ExchangeID = NULL;
    Py_ssize_t QryMaxOrderVolumeField_ExchangeID_len = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *QryMaxOrderVolumeField_InvestUnitID = NULL;
    Py_ssize_t QryMaxOrderVolumeField_InvestUnitID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *QryMaxOrderVolumeField_InstrumentID = NULL;
    Py_ssize_t QryMaxOrderVolumeField_InstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#ccciy#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#cccis#s#s#", (char **)kwlist
#endif

        , &QryMaxOrderVolumeField_BrokerID, &QryMaxOrderVolumeField_BrokerID_len 
        , &QryMaxOrderVolumeField_InvestorID, &QryMaxOrderVolumeField_InvestorID_len 
        , &QryMaxOrderVolumeField_reserve1, &QryMaxOrderVolumeField_reserve1_len 
        , &QryMaxOrderVolumeField_Direction 
        , &QryMaxOrderVolumeField_OffsetFlag 
        , &QryMaxOrderVolumeField_HedgeFlag 
        , &QryMaxOrderVolumeField_MaxVolume 
        , &QryMaxOrderVolumeField_ExchangeID, &QryMaxOrderVolumeField_ExchangeID_len 
        , &QryMaxOrderVolumeField_InvestUnitID, &QryMaxOrderVolumeField_InvestUnitID_len 
        , &QryMaxOrderVolumeField_InstrumentID, &QryMaxOrderVolumeField_InstrumentID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QryMaxOrderVolumeField_BrokerID != NULL ) {
        if(QryMaxOrderVolumeField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QryMaxOrderVolumeField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QryMaxOrderVolumeField_BrokerID, QryMaxOrderVolumeField_BrokerID_len);        
        strncpy(self->data.BrokerID, QryMaxOrderVolumeField_BrokerID, sizeof(self->data.BrokerID) );
        QryMaxOrderVolumeField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( QryMaxOrderVolumeField_InvestorID != NULL ) {
        if(QryMaxOrderVolumeField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", QryMaxOrderVolumeField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, QryMaxOrderVolumeField_InvestorID, QryMaxOrderVolumeField_InvestorID_len);        
        strncpy(self->data.InvestorID, QryMaxOrderVolumeField_InvestorID, sizeof(self->data.InvestorID) );
        QryMaxOrderVolumeField_InvestorID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( QryMaxOrderVolumeField_reserve1 != NULL ) {
        if(QryMaxOrderVolumeField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", QryMaxOrderVolumeField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, QryMaxOrderVolumeField_reserve1, QryMaxOrderVolumeField_reserve1_len);        
        strncpy(self->data.reserve1, QryMaxOrderVolumeField_reserve1, sizeof(self->data.reserve1) );
        QryMaxOrderVolumeField_reserve1 = NULL;
    }
            
    ///买卖方向
    // TThostFtdcDirectionType char
    self->data.Direction = QryMaxOrderVolumeField_Direction;
            
    ///开平标志
    // TThostFtdcOffsetFlagType char
    self->data.OffsetFlag = QryMaxOrderVolumeField_OffsetFlag;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    self->data.HedgeFlag = QryMaxOrderVolumeField_HedgeFlag;
            
    ///最大允许报单数量
    // TThostFtdcVolumeType int
    self->data.MaxVolume = QryMaxOrderVolumeField_MaxVolume;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( QryMaxOrderVolumeField_ExchangeID != NULL ) {
        if(QryMaxOrderVolumeField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", QryMaxOrderVolumeField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, QryMaxOrderVolumeField_ExchangeID, QryMaxOrderVolumeField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, QryMaxOrderVolumeField_ExchangeID, sizeof(self->data.ExchangeID) );
        QryMaxOrderVolumeField_ExchangeID = NULL;
    }
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( QryMaxOrderVolumeField_InvestUnitID != NULL ) {
        if(QryMaxOrderVolumeField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", QryMaxOrderVolumeField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, QryMaxOrderVolumeField_InvestUnitID, QryMaxOrderVolumeField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, QryMaxOrderVolumeField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        QryMaxOrderVolumeField_InvestUnitID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( QryMaxOrderVolumeField_InstrumentID != NULL ) {
        if(QryMaxOrderVolumeField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", QryMaxOrderVolumeField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, QryMaxOrderVolumeField_InstrumentID, QryMaxOrderVolumeField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, QryMaxOrderVolumeField_InstrumentID, sizeof(self->data.InstrumentID) );
        QryMaxOrderVolumeField_InstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryMaxOrderVolumeField_dealloc(PyCThostFtdcQryMaxOrderVolumeField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryMaxOrderVolumeField_repr(PyCThostFtdcQryMaxOrderVolumeField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:c,s:c,s:c,s:i,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:c,s:c,s:c,s:i,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"Direction", self->data.Direction 
        ,"OffsetFlag", self->data.OffsetFlag 
        ,"HedgeFlag", self->data.HedgeFlag 
        ,"MaxVolume", self->data.MaxVolume 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"InvestUnitID", self->data.InvestUnitID//, (Py_ssize_t)sizeof(self->data.InvestUnitID) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryMaxOrderVolumeField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQryMaxOrderVolumeField_get_BrokerID(PyCThostFtdcQryMaxOrderVolumeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQryMaxOrderVolumeField_set_BrokerID(PyCThostFtdcQryMaxOrderVolumeField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryMaxOrderVolumeField_get_InvestorID(PyCThostFtdcQryMaxOrderVolumeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcQryMaxOrderVolumeField_set_InvestorID(PyCThostFtdcQryMaxOrderVolumeField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryMaxOrderVolumeField_get_reserve1(PyCThostFtdcQryMaxOrderVolumeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcQryMaxOrderVolumeField_set_reserve1(PyCThostFtdcQryMaxOrderVolumeField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryMaxOrderVolumeField_get_Direction(PyCThostFtdcQryMaxOrderVolumeField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

///买卖方向
// TThostFtdcDirectionType char
static int PyCThostFtdcQryMaxOrderVolumeField_set_Direction(PyCThostFtdcQryMaxOrderVolumeField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryMaxOrderVolumeField_get_OffsetFlag(PyCThostFtdcQryMaxOrderVolumeField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OffsetFlag), 1);
}

///开平标志
// TThostFtdcOffsetFlagType char
static int PyCThostFtdcQryMaxOrderVolumeField_set_OffsetFlag(PyCThostFtdcQryMaxOrderVolumeField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryMaxOrderVolumeField_get_HedgeFlag(PyCThostFtdcQryMaxOrderVolumeField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

///投机套保标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcQryMaxOrderVolumeField_set_HedgeFlag(PyCThostFtdcQryMaxOrderVolumeField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryMaxOrderVolumeField_get_MaxVolume(PyCThostFtdcQryMaxOrderVolumeField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.MaxVolume);
#else
    return PyInt_FromLong(self->data.MaxVolume);
#endif
}

///最大允许报单数量
// TThostFtdcVolumeType int
static int PyCThostFtdcQryMaxOrderVolumeField_set_MaxVolume(PyCThostFtdcQryMaxOrderVolumeField *self, PyObject* val, void *closure) {
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
        
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcQryMaxOrderVolumeField_get_ExchangeID(PyCThostFtdcQryMaxOrderVolumeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcQryMaxOrderVolumeField_set_ExchangeID(PyCThostFtdcQryMaxOrderVolumeField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryMaxOrderVolumeField_get_InvestUnitID(PyCThostFtdcQryMaxOrderVolumeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcQryMaxOrderVolumeField_set_InvestUnitID(PyCThostFtdcQryMaxOrderVolumeField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryMaxOrderVolumeField_get_InstrumentID(PyCThostFtdcQryMaxOrderVolumeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcQryMaxOrderVolumeField_set_InstrumentID(PyCThostFtdcQryMaxOrderVolumeField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQryMaxOrderVolumeField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQryMaxOrderVolumeField_get_BrokerID, (setter)PyCThostFtdcQryMaxOrderVolumeField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcQryMaxOrderVolumeField_get_InvestorID, (setter)PyCThostFtdcQryMaxOrderVolumeField_set_InvestorID, (char *)"InvestorID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcQryMaxOrderVolumeField_get_reserve1, (setter)PyCThostFtdcQryMaxOrderVolumeField_set_reserve1, (char *)"reserve1", NULL},
    ///买卖方向 
    {(char *)"Direction", (getter)PyCThostFtdcQryMaxOrderVolumeField_get_Direction, (setter)PyCThostFtdcQryMaxOrderVolumeField_set_Direction, (char *)"Direction", NULL},
    ///开平标志 
    {(char *)"OffsetFlag", (getter)PyCThostFtdcQryMaxOrderVolumeField_get_OffsetFlag, (setter)PyCThostFtdcQryMaxOrderVolumeField_set_OffsetFlag, (char *)"OffsetFlag", NULL},
    ///投机套保标志 
    {(char *)"HedgeFlag", (getter)PyCThostFtdcQryMaxOrderVolumeField_get_HedgeFlag, (setter)PyCThostFtdcQryMaxOrderVolumeField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
    ///最大允许报单数量 
    {(char *)"MaxVolume", (getter)PyCThostFtdcQryMaxOrderVolumeField_get_MaxVolume, (setter)PyCThostFtdcQryMaxOrderVolumeField_set_MaxVolume, (char *)"MaxVolume", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcQryMaxOrderVolumeField_get_ExchangeID, (setter)PyCThostFtdcQryMaxOrderVolumeField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcQryMaxOrderVolumeField_get_InvestUnitID, (setter)PyCThostFtdcQryMaxOrderVolumeField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcQryMaxOrderVolumeField_get_InstrumentID, (setter)PyCThostFtdcQryMaxOrderVolumeField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryMaxOrderVolumeFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryMaxOrderVolumeField",	/* tp_name */
	sizeof(PyCThostFtdcQryMaxOrderVolumeField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryMaxOrderVolumeField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryMaxOrderVolumeField_repr,   /* tp_repr */
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
	"CThostFtdcQryMaxOrderVolumeField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryMaxOrderVolumeField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryMaxOrderVolumeField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryMaxOrderVolumeField_new,       /* tp_new */
};

int PyCThostFtdcQryMaxOrderVolumeFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryMaxOrderVolumeField  */
	if (PyType_Ready(&PyCThostFtdcQryMaxOrderVolumeFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryMaxOrderVolumeField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryMaxOrderVolumeFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryMaxOrderVolumeField", (PyObject *)&PyCThostFtdcQryMaxOrderVolumeFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryMaxOrderVolumeField to module");
        Py_DECREF(&PyCThostFtdcQryMaxOrderVolumeFieldType);
		return -1;
    }

    return 0;
}
