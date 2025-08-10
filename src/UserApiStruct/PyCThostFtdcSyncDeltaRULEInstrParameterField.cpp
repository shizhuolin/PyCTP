
#include "PyCThostFtdcSyncDeltaRULEInstrParameterField.h"

///风险结算追平RULE合约保证金参数

static PyObject *PyCThostFtdcSyncDeltaRULEInstrParameterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaRULEInstrParameterField *self = (PyCThostFtdcSyncDeltaRULEInstrParameterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaRULEInstrParameterField_init(PyCThostFtdcSyncDeltaRULEInstrParameterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "ExchangeID", "InstrumentID", "InstrumentClass", "StdInstrumentID", "BSpecRatio", "SSpecRatio", "BHedgeRatio", "SHedgeRatio", "BAddOnMargin", "SAddOnMargin", "CommodityGroupID", "ActionDirection", "SyncDeltaSequenceNo",  NULL};


    ///交易日
    // TThostFtdcDateType char[9]
    const char *SyncDeltaRULEInstrParameterField_TradingDay = NULL;
    Py_ssize_t SyncDeltaRULEInstrParameterField_TradingDay_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *SyncDeltaRULEInstrParameterField_ExchangeID = NULL;
    Py_ssize_t SyncDeltaRULEInstrParameterField_ExchangeID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *SyncDeltaRULEInstrParameterField_InstrumentID = NULL;
    Py_ssize_t SyncDeltaRULEInstrParameterField_InstrumentID_len = 0;
            
    ///合约类型
    // TThostFtdcInstrumentClassType char
    char SyncDeltaRULEInstrParameterField_InstrumentClass = 0;
            
    ///标准合约
    // TThostFtdcInstrumentIDType char[81]
    const char *SyncDeltaRULEInstrParameterField_StdInstrumentID = NULL;
    Py_ssize_t SyncDeltaRULEInstrParameterField_StdInstrumentID_len = 0;
            
    ///投机买折算系数
    // TThostFtdcRatioType double
    double SyncDeltaRULEInstrParameterField_BSpecRatio = 0.0;
        
    ///投机卖折算系数
    // TThostFtdcRatioType double
    double SyncDeltaRULEInstrParameterField_SSpecRatio = 0.0;
        
    ///套保买折算系数
    // TThostFtdcRatioType double
    double SyncDeltaRULEInstrParameterField_BHedgeRatio = 0.0;
        
    ///套保卖折算系数
    // TThostFtdcRatioType double
    double SyncDeltaRULEInstrParameterField_SHedgeRatio = 0.0;
        
    ///买附加风险保证金
    // TThostFtdcMoneyType double
    double SyncDeltaRULEInstrParameterField_BAddOnMargin = 0.0;
        
    ///卖附加风险保证金
    // TThostFtdcMoneyType double
    double SyncDeltaRULEInstrParameterField_SAddOnMargin = 0.0;
        
    ///商品群号
    // TThostFtdcCommodityGroupIDType int
    int SyncDeltaRULEInstrParameterField_CommodityGroupID = 0;
        
    ///操作标志
    // TThostFtdcActionDirectionType char
    char SyncDeltaRULEInstrParameterField_ActionDirection = 0;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    int SyncDeltaRULEInstrParameterField_SyncDeltaSequenceNo = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#cy#ddddddici", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#cs#ddddddici", (char **)kwlist
#endif

        , &SyncDeltaRULEInstrParameterField_TradingDay, &SyncDeltaRULEInstrParameterField_TradingDay_len 
        , &SyncDeltaRULEInstrParameterField_ExchangeID, &SyncDeltaRULEInstrParameterField_ExchangeID_len 
        , &SyncDeltaRULEInstrParameterField_InstrumentID, &SyncDeltaRULEInstrParameterField_InstrumentID_len 
        , &SyncDeltaRULEInstrParameterField_InstrumentClass 
        , &SyncDeltaRULEInstrParameterField_StdInstrumentID, &SyncDeltaRULEInstrParameterField_StdInstrumentID_len 
        , &SyncDeltaRULEInstrParameterField_BSpecRatio 
        , &SyncDeltaRULEInstrParameterField_SSpecRatio 
        , &SyncDeltaRULEInstrParameterField_BHedgeRatio 
        , &SyncDeltaRULEInstrParameterField_SHedgeRatio 
        , &SyncDeltaRULEInstrParameterField_BAddOnMargin 
        , &SyncDeltaRULEInstrParameterField_SAddOnMargin 
        , &SyncDeltaRULEInstrParameterField_CommodityGroupID 
        , &SyncDeltaRULEInstrParameterField_ActionDirection 
        , &SyncDeltaRULEInstrParameterField_SyncDeltaSequenceNo 


    )) {
        return -1;
    }


    ///交易日
    // TThostFtdcDateType char[9]
    if( SyncDeltaRULEInstrParameterField_TradingDay != NULL ) {
        if(SyncDeltaRULEInstrParameterField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", SyncDeltaRULEInstrParameterField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, SyncDeltaRULEInstrParameterField_TradingDay, SyncDeltaRULEInstrParameterField_TradingDay_len);        
        strncpy(self->data.TradingDay, SyncDeltaRULEInstrParameterField_TradingDay, sizeof(self->data.TradingDay) );
        SyncDeltaRULEInstrParameterField_TradingDay = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( SyncDeltaRULEInstrParameterField_ExchangeID != NULL ) {
        if(SyncDeltaRULEInstrParameterField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", SyncDeltaRULEInstrParameterField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, SyncDeltaRULEInstrParameterField_ExchangeID, SyncDeltaRULEInstrParameterField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, SyncDeltaRULEInstrParameterField_ExchangeID, sizeof(self->data.ExchangeID) );
        SyncDeltaRULEInstrParameterField_ExchangeID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( SyncDeltaRULEInstrParameterField_InstrumentID != NULL ) {
        if(SyncDeltaRULEInstrParameterField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", SyncDeltaRULEInstrParameterField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, SyncDeltaRULEInstrParameterField_InstrumentID, SyncDeltaRULEInstrParameterField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, SyncDeltaRULEInstrParameterField_InstrumentID, sizeof(self->data.InstrumentID) );
        SyncDeltaRULEInstrParameterField_InstrumentID = NULL;
    }
            
    ///合约类型
    // TThostFtdcInstrumentClassType char
    self->data.InstrumentClass = SyncDeltaRULEInstrParameterField_InstrumentClass;
            
    ///标准合约
    // TThostFtdcInstrumentIDType char[81]
    if( SyncDeltaRULEInstrParameterField_StdInstrumentID != NULL ) {
        if(SyncDeltaRULEInstrParameterField_StdInstrumentID_len > (Py_ssize_t)sizeof(self->data.StdInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "StdInstrumentID too long: length=%zd (max allowed is %zd)", SyncDeltaRULEInstrParameterField_StdInstrumentID_len, (Py_ssize_t)sizeof(self->data.StdInstrumentID));
            return -1;
        }
        // memset(self->data.StdInstrumentID, 0, sizeof(self->data.StdInstrumentID));
        // memcpy(self->data.StdInstrumentID, SyncDeltaRULEInstrParameterField_StdInstrumentID, SyncDeltaRULEInstrParameterField_StdInstrumentID_len);        
        strncpy(self->data.StdInstrumentID, SyncDeltaRULEInstrParameterField_StdInstrumentID, sizeof(self->data.StdInstrumentID) );
        SyncDeltaRULEInstrParameterField_StdInstrumentID = NULL;
    }
            
    ///投机买折算系数
    // TThostFtdcRatioType double
    self->data.BSpecRatio = SyncDeltaRULEInstrParameterField_BSpecRatio;
        
    ///投机卖折算系数
    // TThostFtdcRatioType double
    self->data.SSpecRatio = SyncDeltaRULEInstrParameterField_SSpecRatio;
        
    ///套保买折算系数
    // TThostFtdcRatioType double
    self->data.BHedgeRatio = SyncDeltaRULEInstrParameterField_BHedgeRatio;
        
    ///套保卖折算系数
    // TThostFtdcRatioType double
    self->data.SHedgeRatio = SyncDeltaRULEInstrParameterField_SHedgeRatio;
        
    ///买附加风险保证金
    // TThostFtdcMoneyType double
    self->data.BAddOnMargin = SyncDeltaRULEInstrParameterField_BAddOnMargin;
        
    ///卖附加风险保证金
    // TThostFtdcMoneyType double
    self->data.SAddOnMargin = SyncDeltaRULEInstrParameterField_SAddOnMargin;
        
    ///商品群号
    // TThostFtdcCommodityGroupIDType int
    self->data.CommodityGroupID = SyncDeltaRULEInstrParameterField_CommodityGroupID;
        
    ///操作标志
    // TThostFtdcActionDirectionType char
    self->data.ActionDirection = SyncDeltaRULEInstrParameterField_ActionDirection;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    self->data.SyncDeltaSequenceNo = SyncDeltaRULEInstrParameterField_SyncDeltaSequenceNo;
        

    return 0;
}

static void PyCThostFtdcSyncDeltaRULEInstrParameterField_dealloc(PyCThostFtdcSyncDeltaRULEInstrParameterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaRULEInstrParameterField_repr(PyCThostFtdcSyncDeltaRULEInstrParameterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:c,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:i,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:c,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:i,s:c,s:i}"
#endif

        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"InstrumentClass", self->data.InstrumentClass 
        ,"StdInstrumentID", self->data.StdInstrumentID//, (Py_ssize_t)sizeof(self->data.StdInstrumentID) 
        ,"BSpecRatio", self->data.BSpecRatio 
        ,"SSpecRatio", self->data.SSpecRatio 
        ,"BHedgeRatio", self->data.BHedgeRatio 
        ,"SHedgeRatio", self->data.SHedgeRatio 
        ,"BAddOnMargin", self->data.BAddOnMargin 
        ,"SAddOnMargin", self->data.SAddOnMargin 
        ,"CommodityGroupID", self->data.CommodityGroupID 
        ,"ActionDirection", self->data.ActionDirection 
        ,"SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaRULEInstrParameterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcSyncDeltaRULEInstrParameterField_get_TradingDay(PyCThostFtdcSyncDeltaRULEInstrParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcSyncDeltaRULEInstrParameterField_set_TradingDay(PyCThostFtdcSyncDeltaRULEInstrParameterField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaRULEInstrParameterField_get_ExchangeID(PyCThostFtdcSyncDeltaRULEInstrParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcSyncDeltaRULEInstrParameterField_set_ExchangeID(PyCThostFtdcSyncDeltaRULEInstrParameterField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaRULEInstrParameterField_get_InstrumentID(PyCThostFtdcSyncDeltaRULEInstrParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcSyncDeltaRULEInstrParameterField_set_InstrumentID(PyCThostFtdcSyncDeltaRULEInstrParameterField *self, PyObject* val, void *closure) {
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
            
///合约类型
// TThostFtdcInstrumentClassType char
static PyObject *PyCThostFtdcSyncDeltaRULEInstrParameterField_get_InstrumentClass(PyCThostFtdcSyncDeltaRULEInstrParameterField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.InstrumentClass), 1);
}

///合约类型
// TThostFtdcInstrumentClassType char
static int PyCThostFtdcSyncDeltaRULEInstrParameterField_set_InstrumentClass(PyCThostFtdcSyncDeltaRULEInstrParameterField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentClass Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InstrumentClass)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentClass must be equal 1 bytes");
        return -1;
    }
    self->data.InstrumentClass = *buf;
    return 0;
}
            
///标准合约
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcSyncDeltaRULEInstrParameterField_get_StdInstrumentID(PyCThostFtdcSyncDeltaRULEInstrParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.StdInstrumentID, (Py_ssize_t)sizeof(self->data.StdInstrumentID));
    return PyBytes_FromString(self->data.StdInstrumentID);
}

///标准合约
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcSyncDeltaRULEInstrParameterField_set_StdInstrumentID(PyCThostFtdcSyncDeltaRULEInstrParameterField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "StdInstrumentID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.StdInstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "StdInstrumentID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.StdInstrumentID, 0, sizeof(self->data.StdInstrumentID));
    // memcpy(self->data.StdInstrumentID, buf, len);
    strncpy(self->data.StdInstrumentID, buf, sizeof(self->data.StdInstrumentID));
    return 0;
}
            
///投机买折算系数
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcSyncDeltaRULEInstrParameterField_get_BSpecRatio(PyCThostFtdcSyncDeltaRULEInstrParameterField *self, void *closure) {
    return PyFloat_FromDouble(self->data.BSpecRatio);
}

///投机买折算系数
// TThostFtdcRatioType double
static int PyCThostFtdcSyncDeltaRULEInstrParameterField_set_BSpecRatio(PyCThostFtdcSyncDeltaRULEInstrParameterField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BSpecRatio Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BSpecRatio = buf;
    return 0;
}
        
///投机卖折算系数
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcSyncDeltaRULEInstrParameterField_get_SSpecRatio(PyCThostFtdcSyncDeltaRULEInstrParameterField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SSpecRatio);
}

///投机卖折算系数
// TThostFtdcRatioType double
static int PyCThostFtdcSyncDeltaRULEInstrParameterField_set_SSpecRatio(PyCThostFtdcSyncDeltaRULEInstrParameterField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SSpecRatio Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SSpecRatio = buf;
    return 0;
}
        
///套保买折算系数
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcSyncDeltaRULEInstrParameterField_get_BHedgeRatio(PyCThostFtdcSyncDeltaRULEInstrParameterField *self, void *closure) {
    return PyFloat_FromDouble(self->data.BHedgeRatio);
}

///套保买折算系数
// TThostFtdcRatioType double
static int PyCThostFtdcSyncDeltaRULEInstrParameterField_set_BHedgeRatio(PyCThostFtdcSyncDeltaRULEInstrParameterField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BHedgeRatio Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BHedgeRatio = buf;
    return 0;
}
        
///套保卖折算系数
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcSyncDeltaRULEInstrParameterField_get_SHedgeRatio(PyCThostFtdcSyncDeltaRULEInstrParameterField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SHedgeRatio);
}

///套保卖折算系数
// TThostFtdcRatioType double
static int PyCThostFtdcSyncDeltaRULEInstrParameterField_set_SHedgeRatio(PyCThostFtdcSyncDeltaRULEInstrParameterField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SHedgeRatio Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SHedgeRatio = buf;
    return 0;
}
        
///买附加风险保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaRULEInstrParameterField_get_BAddOnMargin(PyCThostFtdcSyncDeltaRULEInstrParameterField *self, void *closure) {
    return PyFloat_FromDouble(self->data.BAddOnMargin);
}

///买附加风险保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaRULEInstrParameterField_set_BAddOnMargin(PyCThostFtdcSyncDeltaRULEInstrParameterField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BAddOnMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BAddOnMargin = buf;
    return 0;
}
        
///卖附加风险保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaRULEInstrParameterField_get_SAddOnMargin(PyCThostFtdcSyncDeltaRULEInstrParameterField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SAddOnMargin);
}

///卖附加风险保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaRULEInstrParameterField_set_SAddOnMargin(PyCThostFtdcSyncDeltaRULEInstrParameterField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SAddOnMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SAddOnMargin = buf;
    return 0;
}
        
///商品群号
// TThostFtdcCommodityGroupIDType int
static PyObject *PyCThostFtdcSyncDeltaRULEInstrParameterField_get_CommodityGroupID(PyCThostFtdcSyncDeltaRULEInstrParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.CommodityGroupID);
#else
    return PyInt_FromLong(self->data.CommodityGroupID);
#endif
}

///商品群号
// TThostFtdcCommodityGroupIDType int
static int PyCThostFtdcSyncDeltaRULEInstrParameterField_set_CommodityGroupID(PyCThostFtdcSyncDeltaRULEInstrParameterField *self, PyObject* val, void *closure) {
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
        
///操作标志
// TThostFtdcActionDirectionType char
static PyObject *PyCThostFtdcSyncDeltaRULEInstrParameterField_get_ActionDirection(PyCThostFtdcSyncDeltaRULEInstrParameterField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

///操作标志
// TThostFtdcActionDirectionType char
static int PyCThostFtdcSyncDeltaRULEInstrParameterField_set_ActionDirection(PyCThostFtdcSyncDeltaRULEInstrParameterField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaRULEInstrParameterField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaRULEInstrParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else
    return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif
}

///追平序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcSyncDeltaRULEInstrParameterField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaRULEInstrParameterField *self, PyObject* val, void *closure) {
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
        

static PyGetSetDef PyCThostFtdcSyncDeltaRULEInstrParameterField_getset[] = {
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcSyncDeltaRULEInstrParameterField_get_TradingDay, (setter)PyCThostFtdcSyncDeltaRULEInstrParameterField_set_TradingDay, (char *)"TradingDay", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaRULEInstrParameterField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaRULEInstrParameterField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcSyncDeltaRULEInstrParameterField_get_InstrumentID, (setter)PyCThostFtdcSyncDeltaRULEInstrParameterField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///合约类型 
    {(char *)"InstrumentClass", (getter)PyCThostFtdcSyncDeltaRULEInstrParameterField_get_InstrumentClass, (setter)PyCThostFtdcSyncDeltaRULEInstrParameterField_set_InstrumentClass, (char *)"InstrumentClass", NULL},
    ///标准合约 
    {(char *)"StdInstrumentID", (getter)PyCThostFtdcSyncDeltaRULEInstrParameterField_get_StdInstrumentID, (setter)PyCThostFtdcSyncDeltaRULEInstrParameterField_set_StdInstrumentID, (char *)"StdInstrumentID", NULL},
    ///投机买折算系数 
    {(char *)"BSpecRatio", (getter)PyCThostFtdcSyncDeltaRULEInstrParameterField_get_BSpecRatio, (setter)PyCThostFtdcSyncDeltaRULEInstrParameterField_set_BSpecRatio, (char *)"BSpecRatio", NULL},
    ///投机卖折算系数 
    {(char *)"SSpecRatio", (getter)PyCThostFtdcSyncDeltaRULEInstrParameterField_get_SSpecRatio, (setter)PyCThostFtdcSyncDeltaRULEInstrParameterField_set_SSpecRatio, (char *)"SSpecRatio", NULL},
    ///套保买折算系数 
    {(char *)"BHedgeRatio", (getter)PyCThostFtdcSyncDeltaRULEInstrParameterField_get_BHedgeRatio, (setter)PyCThostFtdcSyncDeltaRULEInstrParameterField_set_BHedgeRatio, (char *)"BHedgeRatio", NULL},
    ///套保卖折算系数 
    {(char *)"SHedgeRatio", (getter)PyCThostFtdcSyncDeltaRULEInstrParameterField_get_SHedgeRatio, (setter)PyCThostFtdcSyncDeltaRULEInstrParameterField_set_SHedgeRatio, (char *)"SHedgeRatio", NULL},
    ///买附加风险保证金 
    {(char *)"BAddOnMargin", (getter)PyCThostFtdcSyncDeltaRULEInstrParameterField_get_BAddOnMargin, (setter)PyCThostFtdcSyncDeltaRULEInstrParameterField_set_BAddOnMargin, (char *)"BAddOnMargin", NULL},
    ///卖附加风险保证金 
    {(char *)"SAddOnMargin", (getter)PyCThostFtdcSyncDeltaRULEInstrParameterField_get_SAddOnMargin, (setter)PyCThostFtdcSyncDeltaRULEInstrParameterField_set_SAddOnMargin, (char *)"SAddOnMargin", NULL},
    ///商品群号 
    {(char *)"CommodityGroupID", (getter)PyCThostFtdcSyncDeltaRULEInstrParameterField_get_CommodityGroupID, (setter)PyCThostFtdcSyncDeltaRULEInstrParameterField_set_CommodityGroupID, (char *)"CommodityGroupID", NULL},
    ///操作标志 
    {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaRULEInstrParameterField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaRULEInstrParameterField_set_ActionDirection, (char *)"ActionDirection", NULL},
    ///追平序号 
    {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaRULEInstrParameterField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaRULEInstrParameterField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaRULEInstrParameterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaRULEInstrParameterField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaRULEInstrParameterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaRULEInstrParameterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaRULEInstrParameterField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaRULEInstrParameterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaRULEInstrParameterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaRULEInstrParameterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaRULEInstrParameterField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaRULEInstrParameterField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaRULEInstrParameterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaRULEInstrParameterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaRULEInstrParameterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaRULEInstrParameterField", (PyObject *)&PyCThostFtdcSyncDeltaRULEInstrParameterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaRULEInstrParameterField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaRULEInstrParameterFieldType);
		return -1;
    }

    return 0;
}
