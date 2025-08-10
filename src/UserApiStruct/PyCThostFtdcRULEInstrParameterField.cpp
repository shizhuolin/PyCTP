
#include "PyCThostFtdcRULEInstrParameterField.h"

///RULE合约保证金参数

static PyObject *PyCThostFtdcRULEInstrParameterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRULEInstrParameterField *self = (PyCThostFtdcRULEInstrParameterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcRULEInstrParameterField_init(PyCThostFtdcRULEInstrParameterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "ExchangeID", "InstrumentID", "InstrumentClass", "StdInstrumentID", "BSpecRatio", "SSpecRatio", "BHedgeRatio", "SHedgeRatio", "BAddOnMargin", "SAddOnMargin", "CommodityGroupID",  NULL};


    ///交易日
    // TThostFtdcDateType char[9]
    const char *RULEInstrParameterField_TradingDay = NULL;
    Py_ssize_t RULEInstrParameterField_TradingDay_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *RULEInstrParameterField_ExchangeID = NULL;
    Py_ssize_t RULEInstrParameterField_ExchangeID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *RULEInstrParameterField_InstrumentID = NULL;
    Py_ssize_t RULEInstrParameterField_InstrumentID_len = 0;
            
    ///合约类型
    // TThostFtdcInstrumentClassType char
    char RULEInstrParameterField_InstrumentClass = 0;
            
    ///标准合约
    // TThostFtdcInstrumentIDType char[81]
    const char *RULEInstrParameterField_StdInstrumentID = NULL;
    Py_ssize_t RULEInstrParameterField_StdInstrumentID_len = 0;
            
    ///投机买折算系数
    // TThostFtdcRatioType double
    double RULEInstrParameterField_BSpecRatio = 0.0;
        
    ///投机卖折算系数
    // TThostFtdcRatioType double
    double RULEInstrParameterField_SSpecRatio = 0.0;
        
    ///套保买折算系数
    // TThostFtdcRatioType double
    double RULEInstrParameterField_BHedgeRatio = 0.0;
        
    ///套保卖折算系数
    // TThostFtdcRatioType double
    double RULEInstrParameterField_SHedgeRatio = 0.0;
        
    ///买附加风险保证金
    // TThostFtdcMoneyType double
    double RULEInstrParameterField_BAddOnMargin = 0.0;
        
    ///卖附加风险保证金
    // TThostFtdcMoneyType double
    double RULEInstrParameterField_SAddOnMargin = 0.0;
        
    ///商品群号
    // TThostFtdcCommodityGroupIDType int
    int RULEInstrParameterField_CommodityGroupID = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#cy#ddddddi", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#cs#ddddddi", (char **)kwlist
#endif

        , &RULEInstrParameterField_TradingDay, &RULEInstrParameterField_TradingDay_len 
        , &RULEInstrParameterField_ExchangeID, &RULEInstrParameterField_ExchangeID_len 
        , &RULEInstrParameterField_InstrumentID, &RULEInstrParameterField_InstrumentID_len 
        , &RULEInstrParameterField_InstrumentClass 
        , &RULEInstrParameterField_StdInstrumentID, &RULEInstrParameterField_StdInstrumentID_len 
        , &RULEInstrParameterField_BSpecRatio 
        , &RULEInstrParameterField_SSpecRatio 
        , &RULEInstrParameterField_BHedgeRatio 
        , &RULEInstrParameterField_SHedgeRatio 
        , &RULEInstrParameterField_BAddOnMargin 
        , &RULEInstrParameterField_SAddOnMargin 
        , &RULEInstrParameterField_CommodityGroupID 


    )) {
        return -1;
    }


    ///交易日
    // TThostFtdcDateType char[9]
    if( RULEInstrParameterField_TradingDay != NULL ) {
        if(RULEInstrParameterField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", RULEInstrParameterField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, RULEInstrParameterField_TradingDay, RULEInstrParameterField_TradingDay_len);        
        strncpy(self->data.TradingDay, RULEInstrParameterField_TradingDay, sizeof(self->data.TradingDay) );
        RULEInstrParameterField_TradingDay = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( RULEInstrParameterField_ExchangeID != NULL ) {
        if(RULEInstrParameterField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", RULEInstrParameterField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, RULEInstrParameterField_ExchangeID, RULEInstrParameterField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, RULEInstrParameterField_ExchangeID, sizeof(self->data.ExchangeID) );
        RULEInstrParameterField_ExchangeID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( RULEInstrParameterField_InstrumentID != NULL ) {
        if(RULEInstrParameterField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", RULEInstrParameterField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, RULEInstrParameterField_InstrumentID, RULEInstrParameterField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, RULEInstrParameterField_InstrumentID, sizeof(self->data.InstrumentID) );
        RULEInstrParameterField_InstrumentID = NULL;
    }
            
    ///合约类型
    // TThostFtdcInstrumentClassType char
    self->data.InstrumentClass = RULEInstrParameterField_InstrumentClass;
            
    ///标准合约
    // TThostFtdcInstrumentIDType char[81]
    if( RULEInstrParameterField_StdInstrumentID != NULL ) {
        if(RULEInstrParameterField_StdInstrumentID_len > (Py_ssize_t)sizeof(self->data.StdInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "StdInstrumentID too long: length=%zd (max allowed is %zd)", RULEInstrParameterField_StdInstrumentID_len, (Py_ssize_t)sizeof(self->data.StdInstrumentID));
            return -1;
        }
        // memset(self->data.StdInstrumentID, 0, sizeof(self->data.StdInstrumentID));
        // memcpy(self->data.StdInstrumentID, RULEInstrParameterField_StdInstrumentID, RULEInstrParameterField_StdInstrumentID_len);        
        strncpy(self->data.StdInstrumentID, RULEInstrParameterField_StdInstrumentID, sizeof(self->data.StdInstrumentID) );
        RULEInstrParameterField_StdInstrumentID = NULL;
    }
            
    ///投机买折算系数
    // TThostFtdcRatioType double
    self->data.BSpecRatio = RULEInstrParameterField_BSpecRatio;
        
    ///投机卖折算系数
    // TThostFtdcRatioType double
    self->data.SSpecRatio = RULEInstrParameterField_SSpecRatio;
        
    ///套保买折算系数
    // TThostFtdcRatioType double
    self->data.BHedgeRatio = RULEInstrParameterField_BHedgeRatio;
        
    ///套保卖折算系数
    // TThostFtdcRatioType double
    self->data.SHedgeRatio = RULEInstrParameterField_SHedgeRatio;
        
    ///买附加风险保证金
    // TThostFtdcMoneyType double
    self->data.BAddOnMargin = RULEInstrParameterField_BAddOnMargin;
        
    ///卖附加风险保证金
    // TThostFtdcMoneyType double
    self->data.SAddOnMargin = RULEInstrParameterField_SAddOnMargin;
        
    ///商品群号
    // TThostFtdcCommodityGroupIDType int
    self->data.CommodityGroupID = RULEInstrParameterField_CommodityGroupID;
        

    return 0;
}

static void PyCThostFtdcRULEInstrParameterField_dealloc(PyCThostFtdcRULEInstrParameterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRULEInstrParameterField_repr(PyCThostFtdcRULEInstrParameterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:c,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:c,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:i}"
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


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRULEInstrParameterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcRULEInstrParameterField_get_TradingDay(PyCThostFtdcRULEInstrParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcRULEInstrParameterField_set_TradingDay(PyCThostFtdcRULEInstrParameterField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRULEInstrParameterField_get_ExchangeID(PyCThostFtdcRULEInstrParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcRULEInstrParameterField_set_ExchangeID(PyCThostFtdcRULEInstrParameterField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRULEInstrParameterField_get_InstrumentID(PyCThostFtdcRULEInstrParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcRULEInstrParameterField_set_InstrumentID(PyCThostFtdcRULEInstrParameterField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRULEInstrParameterField_get_InstrumentClass(PyCThostFtdcRULEInstrParameterField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.InstrumentClass), 1);
}

///合约类型
// TThostFtdcInstrumentClassType char
static int PyCThostFtdcRULEInstrParameterField_set_InstrumentClass(PyCThostFtdcRULEInstrParameterField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRULEInstrParameterField_get_StdInstrumentID(PyCThostFtdcRULEInstrParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.StdInstrumentID, (Py_ssize_t)sizeof(self->data.StdInstrumentID));
    return PyBytes_FromString(self->data.StdInstrumentID);
}

///标准合约
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcRULEInstrParameterField_set_StdInstrumentID(PyCThostFtdcRULEInstrParameterField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRULEInstrParameterField_get_BSpecRatio(PyCThostFtdcRULEInstrParameterField *self, void *closure) {
    return PyFloat_FromDouble(self->data.BSpecRatio);
}

///投机买折算系数
// TThostFtdcRatioType double
static int PyCThostFtdcRULEInstrParameterField_set_BSpecRatio(PyCThostFtdcRULEInstrParameterField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRULEInstrParameterField_get_SSpecRatio(PyCThostFtdcRULEInstrParameterField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SSpecRatio);
}

///投机卖折算系数
// TThostFtdcRatioType double
static int PyCThostFtdcRULEInstrParameterField_set_SSpecRatio(PyCThostFtdcRULEInstrParameterField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRULEInstrParameterField_get_BHedgeRatio(PyCThostFtdcRULEInstrParameterField *self, void *closure) {
    return PyFloat_FromDouble(self->data.BHedgeRatio);
}

///套保买折算系数
// TThostFtdcRatioType double
static int PyCThostFtdcRULEInstrParameterField_set_BHedgeRatio(PyCThostFtdcRULEInstrParameterField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRULEInstrParameterField_get_SHedgeRatio(PyCThostFtdcRULEInstrParameterField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SHedgeRatio);
}

///套保卖折算系数
// TThostFtdcRatioType double
static int PyCThostFtdcRULEInstrParameterField_set_SHedgeRatio(PyCThostFtdcRULEInstrParameterField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRULEInstrParameterField_get_BAddOnMargin(PyCThostFtdcRULEInstrParameterField *self, void *closure) {
    return PyFloat_FromDouble(self->data.BAddOnMargin);
}

///买附加风险保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcRULEInstrParameterField_set_BAddOnMargin(PyCThostFtdcRULEInstrParameterField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRULEInstrParameterField_get_SAddOnMargin(PyCThostFtdcRULEInstrParameterField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SAddOnMargin);
}

///卖附加风险保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcRULEInstrParameterField_set_SAddOnMargin(PyCThostFtdcRULEInstrParameterField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRULEInstrParameterField_get_CommodityGroupID(PyCThostFtdcRULEInstrParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.CommodityGroupID);
#else
    return PyInt_FromLong(self->data.CommodityGroupID);
#endif
}

///商品群号
// TThostFtdcCommodityGroupIDType int
static int PyCThostFtdcRULEInstrParameterField_set_CommodityGroupID(PyCThostFtdcRULEInstrParameterField *self, PyObject* val, void *closure) {
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
        

static PyGetSetDef PyCThostFtdcRULEInstrParameterField_getset[] = {
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcRULEInstrParameterField_get_TradingDay, (setter)PyCThostFtdcRULEInstrParameterField_set_TradingDay, (char *)"TradingDay", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcRULEInstrParameterField_get_ExchangeID, (setter)PyCThostFtdcRULEInstrParameterField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcRULEInstrParameterField_get_InstrumentID, (setter)PyCThostFtdcRULEInstrParameterField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///合约类型 
    {(char *)"InstrumentClass", (getter)PyCThostFtdcRULEInstrParameterField_get_InstrumentClass, (setter)PyCThostFtdcRULEInstrParameterField_set_InstrumentClass, (char *)"InstrumentClass", NULL},
    ///标准合约 
    {(char *)"StdInstrumentID", (getter)PyCThostFtdcRULEInstrParameterField_get_StdInstrumentID, (setter)PyCThostFtdcRULEInstrParameterField_set_StdInstrumentID, (char *)"StdInstrumentID", NULL},
    ///投机买折算系数 
    {(char *)"BSpecRatio", (getter)PyCThostFtdcRULEInstrParameterField_get_BSpecRatio, (setter)PyCThostFtdcRULEInstrParameterField_set_BSpecRatio, (char *)"BSpecRatio", NULL},
    ///投机卖折算系数 
    {(char *)"SSpecRatio", (getter)PyCThostFtdcRULEInstrParameterField_get_SSpecRatio, (setter)PyCThostFtdcRULEInstrParameterField_set_SSpecRatio, (char *)"SSpecRatio", NULL},
    ///套保买折算系数 
    {(char *)"BHedgeRatio", (getter)PyCThostFtdcRULEInstrParameterField_get_BHedgeRatio, (setter)PyCThostFtdcRULEInstrParameterField_set_BHedgeRatio, (char *)"BHedgeRatio", NULL},
    ///套保卖折算系数 
    {(char *)"SHedgeRatio", (getter)PyCThostFtdcRULEInstrParameterField_get_SHedgeRatio, (setter)PyCThostFtdcRULEInstrParameterField_set_SHedgeRatio, (char *)"SHedgeRatio", NULL},
    ///买附加风险保证金 
    {(char *)"BAddOnMargin", (getter)PyCThostFtdcRULEInstrParameterField_get_BAddOnMargin, (setter)PyCThostFtdcRULEInstrParameterField_set_BAddOnMargin, (char *)"BAddOnMargin", NULL},
    ///卖附加风险保证金 
    {(char *)"SAddOnMargin", (getter)PyCThostFtdcRULEInstrParameterField_get_SAddOnMargin, (setter)PyCThostFtdcRULEInstrParameterField_set_SAddOnMargin, (char *)"SAddOnMargin", NULL},
    ///商品群号 
    {(char *)"CommodityGroupID", (getter)PyCThostFtdcRULEInstrParameterField_get_CommodityGroupID, (setter)PyCThostFtdcRULEInstrParameterField_set_CommodityGroupID, (char *)"CommodityGroupID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRULEInstrParameterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRULEInstrParameterField",	/* tp_name */
	sizeof(PyCThostFtdcRULEInstrParameterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRULEInstrParameterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRULEInstrParameterField_repr,   /* tp_repr */
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
	"CThostFtdcRULEInstrParameterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRULEInstrParameterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRULEInstrParameterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRULEInstrParameterField_new,       /* tp_new */
};

int PyCThostFtdcRULEInstrParameterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRULEInstrParameterField  */
	if (PyType_Ready(&PyCThostFtdcRULEInstrParameterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRULEInstrParameterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRULEInstrParameterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRULEInstrParameterField", (PyObject *)&PyCThostFtdcRULEInstrParameterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRULEInstrParameterField to module");
        Py_DECREF(&PyCThostFtdcRULEInstrParameterFieldType);
		return -1;
    }

    return 0;
}
