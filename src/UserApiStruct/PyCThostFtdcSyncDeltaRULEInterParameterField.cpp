
#include "PyCThostFtdcSyncDeltaRULEInterParameterField.h"

///风险结算追平RULE跨品种抵扣参数

static PyObject *PyCThostFtdcSyncDeltaRULEInterParameterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaRULEInterParameterField *self = (PyCThostFtdcSyncDeltaRULEInterParameterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaRULEInterParameterField_init(PyCThostFtdcSyncDeltaRULEInterParameterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "ExchangeID", "SpreadId", "InterRate", "Leg1ProdFamilyCode", "Leg2ProdFamilyCode", "Leg1PropFactor", "Leg2PropFactor", "CommodityGroupID", "CommodityGroupName", "ActionDirection", "SyncDeltaSequenceNo",  NULL};


    ///交易日
    // TThostFtdcDateType char[9]
    const char *SyncDeltaRULEInterParameterField_TradingDay = NULL;
    Py_ssize_t SyncDeltaRULEInterParameterField_TradingDay_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *SyncDeltaRULEInterParameterField_ExchangeID = NULL;
    Py_ssize_t SyncDeltaRULEInterParameterField_ExchangeID_len = 0;
            
    ///优先级
    // TThostFtdcSpreadIdType int
    int SyncDeltaRULEInterParameterField_SpreadId = 0;
        
    ///品种间对锁仓费率折扣比例
    // TThostFtdcRatioType double
    double SyncDeltaRULEInterParameterField_InterRate = 0.0;
        
    ///第一腿构成品种
    // TThostFtdcInstrumentIDType char[81]
    const char *SyncDeltaRULEInterParameterField_Leg1ProdFamilyCode = NULL;
    Py_ssize_t SyncDeltaRULEInterParameterField_Leg1ProdFamilyCode_len = 0;
            
    ///第二腿构成品种
    // TThostFtdcInstrumentIDType char[81]
    const char *SyncDeltaRULEInterParameterField_Leg2ProdFamilyCode = NULL;
    Py_ssize_t SyncDeltaRULEInterParameterField_Leg2ProdFamilyCode_len = 0;
            
    ///腿1比例系数
    // TThostFtdcCommonIntType int
    int SyncDeltaRULEInterParameterField_Leg1PropFactor = 0;
        
    ///腿2比例系数
    // TThostFtdcCommonIntType int
    int SyncDeltaRULEInterParameterField_Leg2PropFactor = 0;
        
    ///商品群号
    // TThostFtdcCommodityGroupIDType int
    int SyncDeltaRULEInterParameterField_CommodityGroupID = 0;
        
    ///商品群名称
    // TThostFtdcInstrumentNameType char[21]
    const char *SyncDeltaRULEInterParameterField_CommodityGroupName = NULL;
    Py_ssize_t SyncDeltaRULEInterParameterField_CommodityGroupName_len = 0;
            
    ///操作标志
    // TThostFtdcActionDirectionType char
    char SyncDeltaRULEInterParameterField_ActionDirection = 0;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    int SyncDeltaRULEInterParameterField_SyncDeltaSequenceNo = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#idy#y#iiiy#ci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#ids#s#iiis#ci", (char **)kwlist
#endif

        , &SyncDeltaRULEInterParameterField_TradingDay, &SyncDeltaRULEInterParameterField_TradingDay_len 
        , &SyncDeltaRULEInterParameterField_ExchangeID, &SyncDeltaRULEInterParameterField_ExchangeID_len 
        , &SyncDeltaRULEInterParameterField_SpreadId 
        , &SyncDeltaRULEInterParameterField_InterRate 
        , &SyncDeltaRULEInterParameterField_Leg1ProdFamilyCode, &SyncDeltaRULEInterParameterField_Leg1ProdFamilyCode_len 
        , &SyncDeltaRULEInterParameterField_Leg2ProdFamilyCode, &SyncDeltaRULEInterParameterField_Leg2ProdFamilyCode_len 
        , &SyncDeltaRULEInterParameterField_Leg1PropFactor 
        , &SyncDeltaRULEInterParameterField_Leg2PropFactor 
        , &SyncDeltaRULEInterParameterField_CommodityGroupID 
        , &SyncDeltaRULEInterParameterField_CommodityGroupName, &SyncDeltaRULEInterParameterField_CommodityGroupName_len 
        , &SyncDeltaRULEInterParameterField_ActionDirection 
        , &SyncDeltaRULEInterParameterField_SyncDeltaSequenceNo 


    )) {
        return -1;
    }


    ///交易日
    // TThostFtdcDateType char[9]
    if( SyncDeltaRULEInterParameterField_TradingDay != NULL ) {
        if(SyncDeltaRULEInterParameterField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", SyncDeltaRULEInterParameterField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, SyncDeltaRULEInterParameterField_TradingDay, SyncDeltaRULEInterParameterField_TradingDay_len);        
        strncpy(self->data.TradingDay, SyncDeltaRULEInterParameterField_TradingDay, sizeof(self->data.TradingDay) );
        SyncDeltaRULEInterParameterField_TradingDay = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( SyncDeltaRULEInterParameterField_ExchangeID != NULL ) {
        if(SyncDeltaRULEInterParameterField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", SyncDeltaRULEInterParameterField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, SyncDeltaRULEInterParameterField_ExchangeID, SyncDeltaRULEInterParameterField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, SyncDeltaRULEInterParameterField_ExchangeID, sizeof(self->data.ExchangeID) );
        SyncDeltaRULEInterParameterField_ExchangeID = NULL;
    }
            
    ///优先级
    // TThostFtdcSpreadIdType int
    self->data.SpreadId = SyncDeltaRULEInterParameterField_SpreadId;
        
    ///品种间对锁仓费率折扣比例
    // TThostFtdcRatioType double
    self->data.InterRate = SyncDeltaRULEInterParameterField_InterRate;
        
    ///第一腿构成品种
    // TThostFtdcInstrumentIDType char[81]
    if( SyncDeltaRULEInterParameterField_Leg1ProdFamilyCode != NULL ) {
        if(SyncDeltaRULEInterParameterField_Leg1ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.Leg1ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "Leg1ProdFamilyCode too long: length=%zd (max allowed is %zd)", SyncDeltaRULEInterParameterField_Leg1ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.Leg1ProdFamilyCode));
            return -1;
        }
        // memset(self->data.Leg1ProdFamilyCode, 0, sizeof(self->data.Leg1ProdFamilyCode));
        // memcpy(self->data.Leg1ProdFamilyCode, SyncDeltaRULEInterParameterField_Leg1ProdFamilyCode, SyncDeltaRULEInterParameterField_Leg1ProdFamilyCode_len);        
        strncpy(self->data.Leg1ProdFamilyCode, SyncDeltaRULEInterParameterField_Leg1ProdFamilyCode, sizeof(self->data.Leg1ProdFamilyCode) );
        SyncDeltaRULEInterParameterField_Leg1ProdFamilyCode = NULL;
    }
            
    ///第二腿构成品种
    // TThostFtdcInstrumentIDType char[81]
    if( SyncDeltaRULEInterParameterField_Leg2ProdFamilyCode != NULL ) {
        if(SyncDeltaRULEInterParameterField_Leg2ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.Leg2ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "Leg2ProdFamilyCode too long: length=%zd (max allowed is %zd)", SyncDeltaRULEInterParameterField_Leg2ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.Leg2ProdFamilyCode));
            return -1;
        }
        // memset(self->data.Leg2ProdFamilyCode, 0, sizeof(self->data.Leg2ProdFamilyCode));
        // memcpy(self->data.Leg2ProdFamilyCode, SyncDeltaRULEInterParameterField_Leg2ProdFamilyCode, SyncDeltaRULEInterParameterField_Leg2ProdFamilyCode_len);        
        strncpy(self->data.Leg2ProdFamilyCode, SyncDeltaRULEInterParameterField_Leg2ProdFamilyCode, sizeof(self->data.Leg2ProdFamilyCode) );
        SyncDeltaRULEInterParameterField_Leg2ProdFamilyCode = NULL;
    }
            
    ///腿1比例系数
    // TThostFtdcCommonIntType int
    self->data.Leg1PropFactor = SyncDeltaRULEInterParameterField_Leg1PropFactor;
        
    ///腿2比例系数
    // TThostFtdcCommonIntType int
    self->data.Leg2PropFactor = SyncDeltaRULEInterParameterField_Leg2PropFactor;
        
    ///商品群号
    // TThostFtdcCommodityGroupIDType int
    self->data.CommodityGroupID = SyncDeltaRULEInterParameterField_CommodityGroupID;
        
    ///商品群名称
    // TThostFtdcInstrumentNameType char[21]
    if( SyncDeltaRULEInterParameterField_CommodityGroupName != NULL ) {
        if(SyncDeltaRULEInterParameterField_CommodityGroupName_len > (Py_ssize_t)sizeof(self->data.CommodityGroupName)) {
            PyErr_Format(PyExc_ValueError, "CommodityGroupName too long: length=%zd (max allowed is %zd)", SyncDeltaRULEInterParameterField_CommodityGroupName_len, (Py_ssize_t)sizeof(self->data.CommodityGroupName));
            return -1;
        }
        // memset(self->data.CommodityGroupName, 0, sizeof(self->data.CommodityGroupName));
        // memcpy(self->data.CommodityGroupName, SyncDeltaRULEInterParameterField_CommodityGroupName, SyncDeltaRULEInterParameterField_CommodityGroupName_len);        
        strncpy(self->data.CommodityGroupName, SyncDeltaRULEInterParameterField_CommodityGroupName, sizeof(self->data.CommodityGroupName) );
        SyncDeltaRULEInterParameterField_CommodityGroupName = NULL;
    }
            
    ///操作标志
    // TThostFtdcActionDirectionType char
    self->data.ActionDirection = SyncDeltaRULEInterParameterField_ActionDirection;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    self->data.SyncDeltaSequenceNo = SyncDeltaRULEInterParameterField_SyncDeltaSequenceNo;
        

    return 0;
}

static void PyCThostFtdcSyncDeltaRULEInterParameterField_dealloc(PyCThostFtdcSyncDeltaRULEInterParameterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaRULEInterParameterField_repr(PyCThostFtdcSyncDeltaRULEInterParameterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i,s:d,s:y,s:y,s:i,s:i,s:i,s:y,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i,s:d,s:s,s:s,s:i,s:i,s:i,s:s,s:c,s:i}"
#endif

        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"SpreadId", self->data.SpreadId 
        ,"InterRate", self->data.InterRate 
        ,"Leg1ProdFamilyCode", self->data.Leg1ProdFamilyCode//, (Py_ssize_t)sizeof(self->data.Leg1ProdFamilyCode) 
        ,"Leg2ProdFamilyCode", self->data.Leg2ProdFamilyCode//, (Py_ssize_t)sizeof(self->data.Leg2ProdFamilyCode) 
        ,"Leg1PropFactor", self->data.Leg1PropFactor 
        ,"Leg2PropFactor", self->data.Leg2PropFactor 
        ,"CommodityGroupID", self->data.CommodityGroupID 
        ,"CommodityGroupName", self->data.CommodityGroupName//, (Py_ssize_t)sizeof(self->data.CommodityGroupName) 
        ,"ActionDirection", self->data.ActionDirection 
        ,"SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaRULEInterParameterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcSyncDeltaRULEInterParameterField_get_TradingDay(PyCThostFtdcSyncDeltaRULEInterParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcSyncDeltaRULEInterParameterField_set_TradingDay(PyCThostFtdcSyncDeltaRULEInterParameterField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaRULEInterParameterField_get_ExchangeID(PyCThostFtdcSyncDeltaRULEInterParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcSyncDeltaRULEInterParameterField_set_ExchangeID(PyCThostFtdcSyncDeltaRULEInterParameterField *self, PyObject* val, void *closure) {
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
            
///优先级
// TThostFtdcSpreadIdType int
static PyObject *PyCThostFtdcSyncDeltaRULEInterParameterField_get_SpreadId(PyCThostFtdcSyncDeltaRULEInterParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SpreadId);
#else
    return PyInt_FromLong(self->data.SpreadId);
#endif
}

///优先级
// TThostFtdcSpreadIdType int
static int PyCThostFtdcSyncDeltaRULEInterParameterField_set_SpreadId(PyCThostFtdcSyncDeltaRULEInterParameterField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SpreadId Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SpreadId Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the SpreadId value out of range for C int");
        return -1;
    }
    self->data.SpreadId = (int)buf;
    return 0;
}
        
///品种间对锁仓费率折扣比例
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcSyncDeltaRULEInterParameterField_get_InterRate(PyCThostFtdcSyncDeltaRULEInterParameterField *self, void *closure) {
    return PyFloat_FromDouble(self->data.InterRate);
}

///品种间对锁仓费率折扣比例
// TThostFtdcRatioType double
static int PyCThostFtdcSyncDeltaRULEInterParameterField_set_InterRate(PyCThostFtdcSyncDeltaRULEInterParameterField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InterRate Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.InterRate = buf;
    return 0;
}
        
///第一腿构成品种
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcSyncDeltaRULEInterParameterField_get_Leg1ProdFamilyCode(PyCThostFtdcSyncDeltaRULEInterParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Leg1ProdFamilyCode, (Py_ssize_t)sizeof(self->data.Leg1ProdFamilyCode));
    return PyBytes_FromString(self->data.Leg1ProdFamilyCode);
}

///第一腿构成品种
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcSyncDeltaRULEInterParameterField_set_Leg1ProdFamilyCode(PyCThostFtdcSyncDeltaRULEInterParameterField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Leg1ProdFamilyCode Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Leg1ProdFamilyCode)) {
        PyErr_SetString(PyExc_ValueError, "Leg1ProdFamilyCode must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.Leg1ProdFamilyCode, 0, sizeof(self->data.Leg1ProdFamilyCode));
    // memcpy(self->data.Leg1ProdFamilyCode, buf, len);
    strncpy(self->data.Leg1ProdFamilyCode, buf, sizeof(self->data.Leg1ProdFamilyCode));
    return 0;
}
            
///第二腿构成品种
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcSyncDeltaRULEInterParameterField_get_Leg2ProdFamilyCode(PyCThostFtdcSyncDeltaRULEInterParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Leg2ProdFamilyCode, (Py_ssize_t)sizeof(self->data.Leg2ProdFamilyCode));
    return PyBytes_FromString(self->data.Leg2ProdFamilyCode);
}

///第二腿构成品种
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcSyncDeltaRULEInterParameterField_set_Leg2ProdFamilyCode(PyCThostFtdcSyncDeltaRULEInterParameterField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Leg2ProdFamilyCode Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Leg2ProdFamilyCode)) {
        PyErr_SetString(PyExc_ValueError, "Leg2ProdFamilyCode must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.Leg2ProdFamilyCode, 0, sizeof(self->data.Leg2ProdFamilyCode));
    // memcpy(self->data.Leg2ProdFamilyCode, buf, len);
    strncpy(self->data.Leg2ProdFamilyCode, buf, sizeof(self->data.Leg2ProdFamilyCode));
    return 0;
}
            
///腿1比例系数
// TThostFtdcCommonIntType int
static PyObject *PyCThostFtdcSyncDeltaRULEInterParameterField_get_Leg1PropFactor(PyCThostFtdcSyncDeltaRULEInterParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.Leg1PropFactor);
#else
    return PyInt_FromLong(self->data.Leg1PropFactor);
#endif
}

///腿1比例系数
// TThostFtdcCommonIntType int
static int PyCThostFtdcSyncDeltaRULEInterParameterField_set_Leg1PropFactor(PyCThostFtdcSyncDeltaRULEInterParameterField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Leg1PropFactor Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Leg1PropFactor Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the Leg1PropFactor value out of range for C int");
        return -1;
    }
    self->data.Leg1PropFactor = (int)buf;
    return 0;
}
        
///腿2比例系数
// TThostFtdcCommonIntType int
static PyObject *PyCThostFtdcSyncDeltaRULEInterParameterField_get_Leg2PropFactor(PyCThostFtdcSyncDeltaRULEInterParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.Leg2PropFactor);
#else
    return PyInt_FromLong(self->data.Leg2PropFactor);
#endif
}

///腿2比例系数
// TThostFtdcCommonIntType int
static int PyCThostFtdcSyncDeltaRULEInterParameterField_set_Leg2PropFactor(PyCThostFtdcSyncDeltaRULEInterParameterField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Leg2PropFactor Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Leg2PropFactor Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the Leg2PropFactor value out of range for C int");
        return -1;
    }
    self->data.Leg2PropFactor = (int)buf;
    return 0;
}
        
///商品群号
// TThostFtdcCommodityGroupIDType int
static PyObject *PyCThostFtdcSyncDeltaRULEInterParameterField_get_CommodityGroupID(PyCThostFtdcSyncDeltaRULEInterParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.CommodityGroupID);
#else
    return PyInt_FromLong(self->data.CommodityGroupID);
#endif
}

///商品群号
// TThostFtdcCommodityGroupIDType int
static int PyCThostFtdcSyncDeltaRULEInterParameterField_set_CommodityGroupID(PyCThostFtdcSyncDeltaRULEInterParameterField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CommodityGroupID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CommodityGroupID Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the CommodityGroupID value out of range for C int");
        return -1;
    }
    self->data.CommodityGroupID = (int)buf;
    return 0;
}
        
///商品群名称
// TThostFtdcInstrumentNameType char[21]
static PyObject *PyCThostFtdcSyncDeltaRULEInterParameterField_get_CommodityGroupName(PyCThostFtdcSyncDeltaRULEInterParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CommodityGroupName, (Py_ssize_t)sizeof(self->data.CommodityGroupName));
    return PyBytes_FromString(self->data.CommodityGroupName);
}

///商品群名称
// TThostFtdcInstrumentNameType char[21]
static int PyCThostFtdcSyncDeltaRULEInterParameterField_set_CommodityGroupName(PyCThostFtdcSyncDeltaRULEInterParameterField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CommodityGroupName Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CommodityGroupName)) {
        PyErr_SetString(PyExc_ValueError, "CommodityGroupName must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.CommodityGroupName, 0, sizeof(self->data.CommodityGroupName));
    // memcpy(self->data.CommodityGroupName, buf, len);
    strncpy(self->data.CommodityGroupName, buf, sizeof(self->data.CommodityGroupName));
    return 0;
}
            
///操作标志
// TThostFtdcActionDirectionType char
static PyObject *PyCThostFtdcSyncDeltaRULEInterParameterField_get_ActionDirection(PyCThostFtdcSyncDeltaRULEInterParameterField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

///操作标志
// TThostFtdcActionDirectionType char
static int PyCThostFtdcSyncDeltaRULEInterParameterField_set_ActionDirection(PyCThostFtdcSyncDeltaRULEInterParameterField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaRULEInterParameterField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaRULEInterParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else
    return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif
}

///追平序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcSyncDeltaRULEInterParameterField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaRULEInterParameterField *self, PyObject* val, void *closure) {
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
        

static PyGetSetDef PyCThostFtdcSyncDeltaRULEInterParameterField_getset[] = {
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcSyncDeltaRULEInterParameterField_get_TradingDay, (setter)PyCThostFtdcSyncDeltaRULEInterParameterField_set_TradingDay, (char *)"TradingDay", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaRULEInterParameterField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaRULEInterParameterField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///优先级 
    {(char *)"SpreadId", (getter)PyCThostFtdcSyncDeltaRULEInterParameterField_get_SpreadId, (setter)PyCThostFtdcSyncDeltaRULEInterParameterField_set_SpreadId, (char *)"SpreadId", NULL},
    ///品种间对锁仓费率折扣比例 
    {(char *)"InterRate", (getter)PyCThostFtdcSyncDeltaRULEInterParameterField_get_InterRate, (setter)PyCThostFtdcSyncDeltaRULEInterParameterField_set_InterRate, (char *)"InterRate", NULL},
    ///第一腿构成品种 
    {(char *)"Leg1ProdFamilyCode", (getter)PyCThostFtdcSyncDeltaRULEInterParameterField_get_Leg1ProdFamilyCode, (setter)PyCThostFtdcSyncDeltaRULEInterParameterField_set_Leg1ProdFamilyCode, (char *)"Leg1ProdFamilyCode", NULL},
    ///第二腿构成品种 
    {(char *)"Leg2ProdFamilyCode", (getter)PyCThostFtdcSyncDeltaRULEInterParameterField_get_Leg2ProdFamilyCode, (setter)PyCThostFtdcSyncDeltaRULEInterParameterField_set_Leg2ProdFamilyCode, (char *)"Leg2ProdFamilyCode", NULL},
    ///腿1比例系数 
    {(char *)"Leg1PropFactor", (getter)PyCThostFtdcSyncDeltaRULEInterParameterField_get_Leg1PropFactor, (setter)PyCThostFtdcSyncDeltaRULEInterParameterField_set_Leg1PropFactor, (char *)"Leg1PropFactor", NULL},
    ///腿2比例系数 
    {(char *)"Leg2PropFactor", (getter)PyCThostFtdcSyncDeltaRULEInterParameterField_get_Leg2PropFactor, (setter)PyCThostFtdcSyncDeltaRULEInterParameterField_set_Leg2PropFactor, (char *)"Leg2PropFactor", NULL},
    ///商品群号 
    {(char *)"CommodityGroupID", (getter)PyCThostFtdcSyncDeltaRULEInterParameterField_get_CommodityGroupID, (setter)PyCThostFtdcSyncDeltaRULEInterParameterField_set_CommodityGroupID, (char *)"CommodityGroupID", NULL},
    ///商品群名称 
    {(char *)"CommodityGroupName", (getter)PyCThostFtdcSyncDeltaRULEInterParameterField_get_CommodityGroupName, (setter)PyCThostFtdcSyncDeltaRULEInterParameterField_set_CommodityGroupName, (char *)"CommodityGroupName", NULL},
    ///操作标志 
    {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaRULEInterParameterField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaRULEInterParameterField_set_ActionDirection, (char *)"ActionDirection", NULL},
    ///追平序号 
    {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaRULEInterParameterField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaRULEInterParameterField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaRULEInterParameterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaRULEInterParameterField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaRULEInterParameterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaRULEInterParameterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaRULEInterParameterField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaRULEInterParameterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaRULEInterParameterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaRULEInterParameterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaRULEInterParameterField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaRULEInterParameterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaRULEInterParameterField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaRULEInterParameterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaRULEInterParameterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaRULEInterParameterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaRULEInterParameterField", (PyObject *)&PyCThostFtdcSyncDeltaRULEInterParameterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaRULEInterParameterField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaRULEInterParameterFieldType);
		return -1;
    }

    return 0;
}
