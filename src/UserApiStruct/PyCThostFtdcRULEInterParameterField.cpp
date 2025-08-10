
#include "PyCThostFtdcRULEInterParameterField.h"

///RULE跨品种抵扣参数

static PyObject *PyCThostFtdcRULEInterParameterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRULEInterParameterField *self = (PyCThostFtdcRULEInterParameterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcRULEInterParameterField_init(PyCThostFtdcRULEInterParameterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "ExchangeID", "SpreadId", "InterRate", "Leg1ProdFamilyCode", "Leg2ProdFamilyCode", "Leg1PropFactor", "Leg2PropFactor", "CommodityGroupID", "CommodityGroupName",  NULL};


    ///交易日
    // TThostFtdcDateType char[9]
    const char *RULEInterParameterField_TradingDay = NULL;
    Py_ssize_t RULEInterParameterField_TradingDay_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *RULEInterParameterField_ExchangeID = NULL;
    Py_ssize_t RULEInterParameterField_ExchangeID_len = 0;
            
    ///优先级
    // TThostFtdcSpreadIdType int
    int RULEInterParameterField_SpreadId = 0;
        
    ///品种间对锁仓费率折扣比例
    // TThostFtdcRatioType double
    double RULEInterParameterField_InterRate = 0.0;
        
    ///第一腿构成品种
    // TThostFtdcInstrumentIDType char[81]
    const char *RULEInterParameterField_Leg1ProdFamilyCode = NULL;
    Py_ssize_t RULEInterParameterField_Leg1ProdFamilyCode_len = 0;
            
    ///第二腿构成品种
    // TThostFtdcInstrumentIDType char[81]
    const char *RULEInterParameterField_Leg2ProdFamilyCode = NULL;
    Py_ssize_t RULEInterParameterField_Leg2ProdFamilyCode_len = 0;
            
    ///腿1比例系数
    // TThostFtdcCommonIntType int
    int RULEInterParameterField_Leg1PropFactor = 0;
        
    ///腿2比例系数
    // TThostFtdcCommonIntType int
    int RULEInterParameterField_Leg2PropFactor = 0;
        
    ///商品群号
    // TThostFtdcCommodityGroupIDType int
    int RULEInterParameterField_CommodityGroupID = 0;
        
    ///商品群名称
    // TThostFtdcInstrumentNameType char[21]
    const char *RULEInterParameterField_CommodityGroupName = NULL;
    Py_ssize_t RULEInterParameterField_CommodityGroupName_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#idy#y#iiiy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#ids#s#iiis#", (char **)kwlist
#endif

        , &RULEInterParameterField_TradingDay, &RULEInterParameterField_TradingDay_len 
        , &RULEInterParameterField_ExchangeID, &RULEInterParameterField_ExchangeID_len 
        , &RULEInterParameterField_SpreadId 
        , &RULEInterParameterField_InterRate 
        , &RULEInterParameterField_Leg1ProdFamilyCode, &RULEInterParameterField_Leg1ProdFamilyCode_len 
        , &RULEInterParameterField_Leg2ProdFamilyCode, &RULEInterParameterField_Leg2ProdFamilyCode_len 
        , &RULEInterParameterField_Leg1PropFactor 
        , &RULEInterParameterField_Leg2PropFactor 
        , &RULEInterParameterField_CommodityGroupID 
        , &RULEInterParameterField_CommodityGroupName, &RULEInterParameterField_CommodityGroupName_len 


    )) {
        return -1;
    }


    ///交易日
    // TThostFtdcDateType char[9]
    if( RULEInterParameterField_TradingDay != NULL ) {
        if(RULEInterParameterField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", RULEInterParameterField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, RULEInterParameterField_TradingDay, RULEInterParameterField_TradingDay_len);        
        strncpy(self->data.TradingDay, RULEInterParameterField_TradingDay, sizeof(self->data.TradingDay) );
        RULEInterParameterField_TradingDay = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( RULEInterParameterField_ExchangeID != NULL ) {
        if(RULEInterParameterField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", RULEInterParameterField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, RULEInterParameterField_ExchangeID, RULEInterParameterField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, RULEInterParameterField_ExchangeID, sizeof(self->data.ExchangeID) );
        RULEInterParameterField_ExchangeID = NULL;
    }
            
    ///优先级
    // TThostFtdcSpreadIdType int
    self->data.SpreadId = RULEInterParameterField_SpreadId;
        
    ///品种间对锁仓费率折扣比例
    // TThostFtdcRatioType double
    self->data.InterRate = RULEInterParameterField_InterRate;
        
    ///第一腿构成品种
    // TThostFtdcInstrumentIDType char[81]
    if( RULEInterParameterField_Leg1ProdFamilyCode != NULL ) {
        if(RULEInterParameterField_Leg1ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.Leg1ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "Leg1ProdFamilyCode too long: length=%zd (max allowed is %zd)", RULEInterParameterField_Leg1ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.Leg1ProdFamilyCode));
            return -1;
        }
        // memset(self->data.Leg1ProdFamilyCode, 0, sizeof(self->data.Leg1ProdFamilyCode));
        // memcpy(self->data.Leg1ProdFamilyCode, RULEInterParameterField_Leg1ProdFamilyCode, RULEInterParameterField_Leg1ProdFamilyCode_len);        
        strncpy(self->data.Leg1ProdFamilyCode, RULEInterParameterField_Leg1ProdFamilyCode, sizeof(self->data.Leg1ProdFamilyCode) );
        RULEInterParameterField_Leg1ProdFamilyCode = NULL;
    }
            
    ///第二腿构成品种
    // TThostFtdcInstrumentIDType char[81]
    if( RULEInterParameterField_Leg2ProdFamilyCode != NULL ) {
        if(RULEInterParameterField_Leg2ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.Leg2ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "Leg2ProdFamilyCode too long: length=%zd (max allowed is %zd)", RULEInterParameterField_Leg2ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.Leg2ProdFamilyCode));
            return -1;
        }
        // memset(self->data.Leg2ProdFamilyCode, 0, sizeof(self->data.Leg2ProdFamilyCode));
        // memcpy(self->data.Leg2ProdFamilyCode, RULEInterParameterField_Leg2ProdFamilyCode, RULEInterParameterField_Leg2ProdFamilyCode_len);        
        strncpy(self->data.Leg2ProdFamilyCode, RULEInterParameterField_Leg2ProdFamilyCode, sizeof(self->data.Leg2ProdFamilyCode) );
        RULEInterParameterField_Leg2ProdFamilyCode = NULL;
    }
            
    ///腿1比例系数
    // TThostFtdcCommonIntType int
    self->data.Leg1PropFactor = RULEInterParameterField_Leg1PropFactor;
        
    ///腿2比例系数
    // TThostFtdcCommonIntType int
    self->data.Leg2PropFactor = RULEInterParameterField_Leg2PropFactor;
        
    ///商品群号
    // TThostFtdcCommodityGroupIDType int
    self->data.CommodityGroupID = RULEInterParameterField_CommodityGroupID;
        
    ///商品群名称
    // TThostFtdcInstrumentNameType char[21]
    if( RULEInterParameterField_CommodityGroupName != NULL ) {
        if(RULEInterParameterField_CommodityGroupName_len > (Py_ssize_t)sizeof(self->data.CommodityGroupName)) {
            PyErr_Format(PyExc_ValueError, "CommodityGroupName too long: length=%zd (max allowed is %zd)", RULEInterParameterField_CommodityGroupName_len, (Py_ssize_t)sizeof(self->data.CommodityGroupName));
            return -1;
        }
        // memset(self->data.CommodityGroupName, 0, sizeof(self->data.CommodityGroupName));
        // memcpy(self->data.CommodityGroupName, RULEInterParameterField_CommodityGroupName, RULEInterParameterField_CommodityGroupName_len);        
        strncpy(self->data.CommodityGroupName, RULEInterParameterField_CommodityGroupName, sizeof(self->data.CommodityGroupName) );
        RULEInterParameterField_CommodityGroupName = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcRULEInterParameterField_dealloc(PyCThostFtdcRULEInterParameterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRULEInterParameterField_repr(PyCThostFtdcRULEInterParameterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i,s:d,s:y,s:y,s:i,s:i,s:i,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i,s:d,s:s,s:s,s:i,s:i,s:i,s:s}"
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


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRULEInterParameterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcRULEInterParameterField_get_TradingDay(PyCThostFtdcRULEInterParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcRULEInterParameterField_set_TradingDay(PyCThostFtdcRULEInterParameterField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRULEInterParameterField_get_ExchangeID(PyCThostFtdcRULEInterParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcRULEInterParameterField_set_ExchangeID(PyCThostFtdcRULEInterParameterField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRULEInterParameterField_get_SpreadId(PyCThostFtdcRULEInterParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SpreadId);
#else
    return PyInt_FromLong(self->data.SpreadId);
#endif
}

///优先级
// TThostFtdcSpreadIdType int
static int PyCThostFtdcRULEInterParameterField_set_SpreadId(PyCThostFtdcRULEInterParameterField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRULEInterParameterField_get_InterRate(PyCThostFtdcRULEInterParameterField *self, void *closure) {
    return PyFloat_FromDouble(self->data.InterRate);
}

///品种间对锁仓费率折扣比例
// TThostFtdcRatioType double
static int PyCThostFtdcRULEInterParameterField_set_InterRate(PyCThostFtdcRULEInterParameterField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRULEInterParameterField_get_Leg1ProdFamilyCode(PyCThostFtdcRULEInterParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Leg1ProdFamilyCode, (Py_ssize_t)sizeof(self->data.Leg1ProdFamilyCode));
    return PyBytes_FromString(self->data.Leg1ProdFamilyCode);
}

///第一腿构成品种
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcRULEInterParameterField_set_Leg1ProdFamilyCode(PyCThostFtdcRULEInterParameterField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRULEInterParameterField_get_Leg2ProdFamilyCode(PyCThostFtdcRULEInterParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Leg2ProdFamilyCode, (Py_ssize_t)sizeof(self->data.Leg2ProdFamilyCode));
    return PyBytes_FromString(self->data.Leg2ProdFamilyCode);
}

///第二腿构成品种
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcRULEInterParameterField_set_Leg2ProdFamilyCode(PyCThostFtdcRULEInterParameterField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRULEInterParameterField_get_Leg1PropFactor(PyCThostFtdcRULEInterParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.Leg1PropFactor);
#else
    return PyInt_FromLong(self->data.Leg1PropFactor);
#endif
}

///腿1比例系数
// TThostFtdcCommonIntType int
static int PyCThostFtdcRULEInterParameterField_set_Leg1PropFactor(PyCThostFtdcRULEInterParameterField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRULEInterParameterField_get_Leg2PropFactor(PyCThostFtdcRULEInterParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.Leg2PropFactor);
#else
    return PyInt_FromLong(self->data.Leg2PropFactor);
#endif
}

///腿2比例系数
// TThostFtdcCommonIntType int
static int PyCThostFtdcRULEInterParameterField_set_Leg2PropFactor(PyCThostFtdcRULEInterParameterField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRULEInterParameterField_get_CommodityGroupID(PyCThostFtdcRULEInterParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.CommodityGroupID);
#else
    return PyInt_FromLong(self->data.CommodityGroupID);
#endif
}

///商品群号
// TThostFtdcCommodityGroupIDType int
static int PyCThostFtdcRULEInterParameterField_set_CommodityGroupID(PyCThostFtdcRULEInterParameterField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRULEInterParameterField_get_CommodityGroupName(PyCThostFtdcRULEInterParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CommodityGroupName, (Py_ssize_t)sizeof(self->data.CommodityGroupName));
    return PyBytes_FromString(self->data.CommodityGroupName);
}

///商品群名称
// TThostFtdcInstrumentNameType char[21]
static int PyCThostFtdcRULEInterParameterField_set_CommodityGroupName(PyCThostFtdcRULEInterParameterField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcRULEInterParameterField_getset[] = {
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcRULEInterParameterField_get_TradingDay, (setter)PyCThostFtdcRULEInterParameterField_set_TradingDay, (char *)"TradingDay", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcRULEInterParameterField_get_ExchangeID, (setter)PyCThostFtdcRULEInterParameterField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///优先级 
    {(char *)"SpreadId", (getter)PyCThostFtdcRULEInterParameterField_get_SpreadId, (setter)PyCThostFtdcRULEInterParameterField_set_SpreadId, (char *)"SpreadId", NULL},
    ///品种间对锁仓费率折扣比例 
    {(char *)"InterRate", (getter)PyCThostFtdcRULEInterParameterField_get_InterRate, (setter)PyCThostFtdcRULEInterParameterField_set_InterRate, (char *)"InterRate", NULL},
    ///第一腿构成品种 
    {(char *)"Leg1ProdFamilyCode", (getter)PyCThostFtdcRULEInterParameterField_get_Leg1ProdFamilyCode, (setter)PyCThostFtdcRULEInterParameterField_set_Leg1ProdFamilyCode, (char *)"Leg1ProdFamilyCode", NULL},
    ///第二腿构成品种 
    {(char *)"Leg2ProdFamilyCode", (getter)PyCThostFtdcRULEInterParameterField_get_Leg2ProdFamilyCode, (setter)PyCThostFtdcRULEInterParameterField_set_Leg2ProdFamilyCode, (char *)"Leg2ProdFamilyCode", NULL},
    ///腿1比例系数 
    {(char *)"Leg1PropFactor", (getter)PyCThostFtdcRULEInterParameterField_get_Leg1PropFactor, (setter)PyCThostFtdcRULEInterParameterField_set_Leg1PropFactor, (char *)"Leg1PropFactor", NULL},
    ///腿2比例系数 
    {(char *)"Leg2PropFactor", (getter)PyCThostFtdcRULEInterParameterField_get_Leg2PropFactor, (setter)PyCThostFtdcRULEInterParameterField_set_Leg2PropFactor, (char *)"Leg2PropFactor", NULL},
    ///商品群号 
    {(char *)"CommodityGroupID", (getter)PyCThostFtdcRULEInterParameterField_get_CommodityGroupID, (setter)PyCThostFtdcRULEInterParameterField_set_CommodityGroupID, (char *)"CommodityGroupID", NULL},
    ///商品群名称 
    {(char *)"CommodityGroupName", (getter)PyCThostFtdcRULEInterParameterField_get_CommodityGroupName, (setter)PyCThostFtdcRULEInterParameterField_set_CommodityGroupName, (char *)"CommodityGroupName", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRULEInterParameterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRULEInterParameterField",	/* tp_name */
	sizeof(PyCThostFtdcRULEInterParameterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRULEInterParameterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRULEInterParameterField_repr,   /* tp_repr */
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
	"CThostFtdcRULEInterParameterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRULEInterParameterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRULEInterParameterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRULEInterParameterField_new,       /* tp_new */
};

int PyCThostFtdcRULEInterParameterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRULEInterParameterField  */
	if (PyType_Ready(&PyCThostFtdcRULEInterParameterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRULEInterParameterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRULEInterParameterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRULEInterParameterField", (PyObject *)&PyCThostFtdcRULEInterParameterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRULEInterParameterField to module");
        Py_DECREF(&PyCThostFtdcRULEInterParameterFieldType);
		return -1;
    }

    return 0;
}
