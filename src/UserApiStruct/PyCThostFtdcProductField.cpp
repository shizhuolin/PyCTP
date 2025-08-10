
#include "PyCThostFtdcProductField.h"

///产品

static PyObject *PyCThostFtdcProductField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcProductField *self = (PyCThostFtdcProductField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcProductField_init(PyCThostFtdcProductField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "ProductName", "ExchangeID", "ProductClass", "VolumeMultiple", "PriceTick", "MaxMarketOrderVolume", "MinMarketOrderVolume", "MaxLimitOrderVolume", "MinLimitOrderVolume", "PositionType", "PositionDateType", "CloseDealType", "TradeCurrencyID", "MortgageFundUseRange", "reserve2", "UnderlyingMultiple", "ProductID", "ExchangeProductID", "OpenLimitControlLevel", "OrderFreqControlLevel",  NULL};


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *ProductField_reserve1 = NULL;
    Py_ssize_t ProductField_reserve1_len = 0;
            
    ///产品名称
    // TThostFtdcProductNameType char[21]
    const char *ProductField_ProductName = NULL;
    Py_ssize_t ProductField_ProductName_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *ProductField_ExchangeID = NULL;
    Py_ssize_t ProductField_ExchangeID_len = 0;
            
    ///产品类型
    // TThostFtdcProductClassType char
    char ProductField_ProductClass = 0;
            
    ///合约数量乘数
    // TThostFtdcVolumeMultipleType int
    int ProductField_VolumeMultiple = 0;
        
    ///最小变动价位
    // TThostFtdcPriceType double
    double ProductField_PriceTick = 0.0;
        
    ///市价单最大下单量
    // TThostFtdcVolumeType int
    int ProductField_MaxMarketOrderVolume = 0;
        
    ///市价单最小下单量
    // TThostFtdcVolumeType int
    int ProductField_MinMarketOrderVolume = 0;
        
    ///限价单最大下单量
    // TThostFtdcVolumeType int
    int ProductField_MaxLimitOrderVolume = 0;
        
    ///限价单最小下单量
    // TThostFtdcVolumeType int
    int ProductField_MinLimitOrderVolume = 0;
        
    ///持仓类型
    // TThostFtdcPositionTypeType char
    char ProductField_PositionType = 0;
            
    ///持仓日期类型
    // TThostFtdcPositionDateTypeType char
    char ProductField_PositionDateType = 0;
            
    ///平仓处理类型
    // TThostFtdcCloseDealTypeType char
    char ProductField_CloseDealType = 0;
            
    ///交易币种类型
    // TThostFtdcCurrencyIDType char[4]
    const char *ProductField_TradeCurrencyID = NULL;
    Py_ssize_t ProductField_TradeCurrencyID_len = 0;
            
    ///质押资金可用范围
    // TThostFtdcMortgageFundUseRangeType char
    char ProductField_MortgageFundUseRange = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *ProductField_reserve2 = NULL;
    Py_ssize_t ProductField_reserve2_len = 0;
            
    ///合约基础商品乘数
    // TThostFtdcUnderlyingMultipleType double
    double ProductField_UnderlyingMultiple = 0.0;
        
    ///产品代码
    // TThostFtdcInstrumentIDType char[81]
    const char *ProductField_ProductID = NULL;
    Py_ssize_t ProductField_ProductID_len = 0;
            
    ///交易所产品代码
    // TThostFtdcInstrumentIDType char[81]
    const char *ProductField_ExchangeProductID = NULL;
    Py_ssize_t ProductField_ExchangeProductID_len = 0;
            
    ///开仓量限制粒度
    // TThostFtdcOpenLimitControlLevelType char
    char ProductField_OpenLimitControlLevel = 0;
            
    ///报单频率控制粒度
    // TThostFtdcOrderFreqControlLevelType char
    char ProductField_OrderFreqControlLevel = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#cidiiiicccy#cy#dy#y#cc", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#cidiiiicccs#cs#ds#s#cc", (char **)kwlist
#endif

        , &ProductField_reserve1, &ProductField_reserve1_len 
        , &ProductField_ProductName, &ProductField_ProductName_len 
        , &ProductField_ExchangeID, &ProductField_ExchangeID_len 
        , &ProductField_ProductClass 
        , &ProductField_VolumeMultiple 
        , &ProductField_PriceTick 
        , &ProductField_MaxMarketOrderVolume 
        , &ProductField_MinMarketOrderVolume 
        , &ProductField_MaxLimitOrderVolume 
        , &ProductField_MinLimitOrderVolume 
        , &ProductField_PositionType 
        , &ProductField_PositionDateType 
        , &ProductField_CloseDealType 
        , &ProductField_TradeCurrencyID, &ProductField_TradeCurrencyID_len 
        , &ProductField_MortgageFundUseRange 
        , &ProductField_reserve2, &ProductField_reserve2_len 
        , &ProductField_UnderlyingMultiple 
        , &ProductField_ProductID, &ProductField_ProductID_len 
        , &ProductField_ExchangeProductID, &ProductField_ExchangeProductID_len 
        , &ProductField_OpenLimitControlLevel 
        , &ProductField_OrderFreqControlLevel 


    )) {
        return -1;
    }


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( ProductField_reserve1 != NULL ) {
        if(ProductField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", ProductField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, ProductField_reserve1, ProductField_reserve1_len);        
        strncpy(self->data.reserve1, ProductField_reserve1, sizeof(self->data.reserve1) );
        ProductField_reserve1 = NULL;
    }
            
    ///产品名称
    // TThostFtdcProductNameType char[21]
    if( ProductField_ProductName != NULL ) {
        if(ProductField_ProductName_len > (Py_ssize_t)sizeof(self->data.ProductName)) {
            PyErr_Format(PyExc_ValueError, "ProductName too long: length=%zd (max allowed is %zd)", ProductField_ProductName_len, (Py_ssize_t)sizeof(self->data.ProductName));
            return -1;
        }
        // memset(self->data.ProductName, 0, sizeof(self->data.ProductName));
        // memcpy(self->data.ProductName, ProductField_ProductName, ProductField_ProductName_len);        
        strncpy(self->data.ProductName, ProductField_ProductName, sizeof(self->data.ProductName) );
        ProductField_ProductName = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( ProductField_ExchangeID != NULL ) {
        if(ProductField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", ProductField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, ProductField_ExchangeID, ProductField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, ProductField_ExchangeID, sizeof(self->data.ExchangeID) );
        ProductField_ExchangeID = NULL;
    }
            
    ///产品类型
    // TThostFtdcProductClassType char
    self->data.ProductClass = ProductField_ProductClass;
            
    ///合约数量乘数
    // TThostFtdcVolumeMultipleType int
    self->data.VolumeMultiple = ProductField_VolumeMultiple;
        
    ///最小变动价位
    // TThostFtdcPriceType double
    self->data.PriceTick = ProductField_PriceTick;
        
    ///市价单最大下单量
    // TThostFtdcVolumeType int
    self->data.MaxMarketOrderVolume = ProductField_MaxMarketOrderVolume;
        
    ///市价单最小下单量
    // TThostFtdcVolumeType int
    self->data.MinMarketOrderVolume = ProductField_MinMarketOrderVolume;
        
    ///限价单最大下单量
    // TThostFtdcVolumeType int
    self->data.MaxLimitOrderVolume = ProductField_MaxLimitOrderVolume;
        
    ///限价单最小下单量
    // TThostFtdcVolumeType int
    self->data.MinLimitOrderVolume = ProductField_MinLimitOrderVolume;
        
    ///持仓类型
    // TThostFtdcPositionTypeType char
    self->data.PositionType = ProductField_PositionType;
            
    ///持仓日期类型
    // TThostFtdcPositionDateTypeType char
    self->data.PositionDateType = ProductField_PositionDateType;
            
    ///平仓处理类型
    // TThostFtdcCloseDealTypeType char
    self->data.CloseDealType = ProductField_CloseDealType;
            
    ///交易币种类型
    // TThostFtdcCurrencyIDType char[4]
    if( ProductField_TradeCurrencyID != NULL ) {
        if(ProductField_TradeCurrencyID_len > (Py_ssize_t)sizeof(self->data.TradeCurrencyID)) {
            PyErr_Format(PyExc_ValueError, "TradeCurrencyID too long: length=%zd (max allowed is %zd)", ProductField_TradeCurrencyID_len, (Py_ssize_t)sizeof(self->data.TradeCurrencyID));
            return -1;
        }
        // memset(self->data.TradeCurrencyID, 0, sizeof(self->data.TradeCurrencyID));
        // memcpy(self->data.TradeCurrencyID, ProductField_TradeCurrencyID, ProductField_TradeCurrencyID_len);        
        strncpy(self->data.TradeCurrencyID, ProductField_TradeCurrencyID, sizeof(self->data.TradeCurrencyID) );
        ProductField_TradeCurrencyID = NULL;
    }
            
    ///质押资金可用范围
    // TThostFtdcMortgageFundUseRangeType char
    self->data.MortgageFundUseRange = ProductField_MortgageFundUseRange;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( ProductField_reserve2 != NULL ) {
        if(ProductField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", ProductField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
            return -1;
        }
        // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
        // memcpy(self->data.reserve2, ProductField_reserve2, ProductField_reserve2_len);        
        strncpy(self->data.reserve2, ProductField_reserve2, sizeof(self->data.reserve2) );
        ProductField_reserve2 = NULL;
    }
            
    ///合约基础商品乘数
    // TThostFtdcUnderlyingMultipleType double
    self->data.UnderlyingMultiple = ProductField_UnderlyingMultiple;
        
    ///产品代码
    // TThostFtdcInstrumentIDType char[81]
    if( ProductField_ProductID != NULL ) {
        if(ProductField_ProductID_len > (Py_ssize_t)sizeof(self->data.ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is %zd)", ProductField_ProductID_len, (Py_ssize_t)sizeof(self->data.ProductID));
            return -1;
        }
        // memset(self->data.ProductID, 0, sizeof(self->data.ProductID));
        // memcpy(self->data.ProductID, ProductField_ProductID, ProductField_ProductID_len);        
        strncpy(self->data.ProductID, ProductField_ProductID, sizeof(self->data.ProductID) );
        ProductField_ProductID = NULL;
    }
            
    ///交易所产品代码
    // TThostFtdcInstrumentIDType char[81]
    if( ProductField_ExchangeProductID != NULL ) {
        if(ProductField_ExchangeProductID_len > (Py_ssize_t)sizeof(self->data.ExchangeProductID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeProductID too long: length=%zd (max allowed is %zd)", ProductField_ExchangeProductID_len, (Py_ssize_t)sizeof(self->data.ExchangeProductID));
            return -1;
        }
        // memset(self->data.ExchangeProductID, 0, sizeof(self->data.ExchangeProductID));
        // memcpy(self->data.ExchangeProductID, ProductField_ExchangeProductID, ProductField_ExchangeProductID_len);        
        strncpy(self->data.ExchangeProductID, ProductField_ExchangeProductID, sizeof(self->data.ExchangeProductID) );
        ProductField_ExchangeProductID = NULL;
    }
            
    ///开仓量限制粒度
    // TThostFtdcOpenLimitControlLevelType char
    self->data.OpenLimitControlLevel = ProductField_OpenLimitControlLevel;
            
    ///报单频率控制粒度
    // TThostFtdcOrderFreqControlLevelType char
    self->data.OrderFreqControlLevel = ProductField_OrderFreqControlLevel;
            

    return 0;
}

static void PyCThostFtdcProductField_dealloc(PyCThostFtdcProductField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcProductField_repr(PyCThostFtdcProductField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:c,s:i,s:d,s:i,s:i,s:i,s:i,s:c,s:c,s:c,s:y,s:c,s:y,s:d,s:y,s:y,s:c,s:c}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:c,s:i,s:d,s:i,s:i,s:i,s:i,s:c,s:c,s:c,s:s,s:c,s:s,s:d,s:s,s:s,s:c,s:c}"
#endif

        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"ProductName", self->data.ProductName//, (Py_ssize_t)sizeof(self->data.ProductName) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"ProductClass", self->data.ProductClass 
        ,"VolumeMultiple", self->data.VolumeMultiple 
        ,"PriceTick", self->data.PriceTick 
        ,"MaxMarketOrderVolume", self->data.MaxMarketOrderVolume 
        ,"MinMarketOrderVolume", self->data.MinMarketOrderVolume 
        ,"MaxLimitOrderVolume", self->data.MaxLimitOrderVolume 
        ,"MinLimitOrderVolume", self->data.MinLimitOrderVolume 
        ,"PositionType", self->data.PositionType 
        ,"PositionDateType", self->data.PositionDateType 
        ,"CloseDealType", self->data.CloseDealType 
        ,"TradeCurrencyID", self->data.TradeCurrencyID//, (Py_ssize_t)sizeof(self->data.TradeCurrencyID) 
        ,"MortgageFundUseRange", self->data.MortgageFundUseRange 
        ,"reserve2", self->data.reserve2//, (Py_ssize_t)sizeof(self->data.reserve2) 
        ,"UnderlyingMultiple", self->data.UnderlyingMultiple 
        ,"ProductID", self->data.ProductID//, (Py_ssize_t)sizeof(self->data.ProductID) 
        ,"ExchangeProductID", self->data.ExchangeProductID//, (Py_ssize_t)sizeof(self->data.ExchangeProductID) 
        ,"OpenLimitControlLevel", self->data.OpenLimitControlLevel 
        ,"OrderFreqControlLevel", self->data.OrderFreqControlLevel 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcProductField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcProductField_get_reserve1(PyCThostFtdcProductField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcProductField_set_reserve1(PyCThostFtdcProductField *self, PyObject* val, void *closure) {
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
            
///产品名称
// TThostFtdcProductNameType char[21]
static PyObject *PyCThostFtdcProductField_get_ProductName(PyCThostFtdcProductField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProductName, (Py_ssize_t)sizeof(self->data.ProductName));
    return PyBytes_FromString(self->data.ProductName);
}

///产品名称
// TThostFtdcProductNameType char[21]
static int PyCThostFtdcProductField_set_ProductName(PyCThostFtdcProductField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ProductName Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ProductName)) {
        PyErr_SetString(PyExc_ValueError, "ProductName must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.ProductName, 0, sizeof(self->data.ProductName));
    // memcpy(self->data.ProductName, buf, len);
    strncpy(self->data.ProductName, buf, sizeof(self->data.ProductName));
    return 0;
}
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcProductField_get_ExchangeID(PyCThostFtdcProductField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcProductField_set_ExchangeID(PyCThostFtdcProductField *self, PyObject* val, void *closure) {
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
            
///产品类型
// TThostFtdcProductClassType char
static PyObject *PyCThostFtdcProductField_get_ProductClass(PyCThostFtdcProductField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ProductClass), 1);
}

///产品类型
// TThostFtdcProductClassType char
static int PyCThostFtdcProductField_set_ProductClass(PyCThostFtdcProductField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ProductClass Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ProductClass)) {
        PyErr_SetString(PyExc_ValueError, "ProductClass must be equal 1 bytes");
        return -1;
    }
    self->data.ProductClass = *buf;
    return 0;
}
            
///合约数量乘数
// TThostFtdcVolumeMultipleType int
static PyObject *PyCThostFtdcProductField_get_VolumeMultiple(PyCThostFtdcProductField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.VolumeMultiple);
#else
    return PyInt_FromLong(self->data.VolumeMultiple);
#endif
}

///合约数量乘数
// TThostFtdcVolumeMultipleType int
static int PyCThostFtdcProductField_set_VolumeMultiple(PyCThostFtdcProductField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "VolumeMultiple Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "VolumeMultiple Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the VolumeMultiple value out of range for C int");
        return -1;
    }
    self->data.VolumeMultiple = (int)buf;
    return 0;
}
        
///最小变动价位
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcProductField_get_PriceTick(PyCThostFtdcProductField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PriceTick);
}

///最小变动价位
// TThostFtdcPriceType double
static int PyCThostFtdcProductField_set_PriceTick(PyCThostFtdcProductField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PriceTick Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PriceTick = buf;
    return 0;
}
        
///市价单最大下单量
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcProductField_get_MaxMarketOrderVolume(PyCThostFtdcProductField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.MaxMarketOrderVolume);
#else
    return PyInt_FromLong(self->data.MaxMarketOrderVolume);
#endif
}

///市价单最大下单量
// TThostFtdcVolumeType int
static int PyCThostFtdcProductField_set_MaxMarketOrderVolume(PyCThostFtdcProductField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MaxMarketOrderVolume Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MaxMarketOrderVolume Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the MaxMarketOrderVolume value out of range for C int");
        return -1;
    }
    self->data.MaxMarketOrderVolume = (int)buf;
    return 0;
}
        
///市价单最小下单量
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcProductField_get_MinMarketOrderVolume(PyCThostFtdcProductField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.MinMarketOrderVolume);
#else
    return PyInt_FromLong(self->data.MinMarketOrderVolume);
#endif
}

///市价单最小下单量
// TThostFtdcVolumeType int
static int PyCThostFtdcProductField_set_MinMarketOrderVolume(PyCThostFtdcProductField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MinMarketOrderVolume Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MinMarketOrderVolume Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the MinMarketOrderVolume value out of range for C int");
        return -1;
    }
    self->data.MinMarketOrderVolume = (int)buf;
    return 0;
}
        
///限价单最大下单量
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcProductField_get_MaxLimitOrderVolume(PyCThostFtdcProductField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.MaxLimitOrderVolume);
#else
    return PyInt_FromLong(self->data.MaxLimitOrderVolume);
#endif
}

///限价单最大下单量
// TThostFtdcVolumeType int
static int PyCThostFtdcProductField_set_MaxLimitOrderVolume(PyCThostFtdcProductField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MaxLimitOrderVolume Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MaxLimitOrderVolume Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the MaxLimitOrderVolume value out of range for C int");
        return -1;
    }
    self->data.MaxLimitOrderVolume = (int)buf;
    return 0;
}
        
///限价单最小下单量
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcProductField_get_MinLimitOrderVolume(PyCThostFtdcProductField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.MinLimitOrderVolume);
#else
    return PyInt_FromLong(self->data.MinLimitOrderVolume);
#endif
}

///限价单最小下单量
// TThostFtdcVolumeType int
static int PyCThostFtdcProductField_set_MinLimitOrderVolume(PyCThostFtdcProductField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MinLimitOrderVolume Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MinLimitOrderVolume Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the MinLimitOrderVolume value out of range for C int");
        return -1;
    }
    self->data.MinLimitOrderVolume = (int)buf;
    return 0;
}
        
///持仓类型
// TThostFtdcPositionTypeType char
static PyObject *PyCThostFtdcProductField_get_PositionType(PyCThostFtdcProductField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.PositionType), 1);
}

///持仓类型
// TThostFtdcPositionTypeType char
static int PyCThostFtdcProductField_set_PositionType(PyCThostFtdcProductField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PositionType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.PositionType)) {
        PyErr_SetString(PyExc_ValueError, "PositionType must be equal 1 bytes");
        return -1;
    }
    self->data.PositionType = *buf;
    return 0;
}
            
///持仓日期类型
// TThostFtdcPositionDateTypeType char
static PyObject *PyCThostFtdcProductField_get_PositionDateType(PyCThostFtdcProductField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.PositionDateType), 1);
}

///持仓日期类型
// TThostFtdcPositionDateTypeType char
static int PyCThostFtdcProductField_set_PositionDateType(PyCThostFtdcProductField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PositionDateType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.PositionDateType)) {
        PyErr_SetString(PyExc_ValueError, "PositionDateType must be equal 1 bytes");
        return -1;
    }
    self->data.PositionDateType = *buf;
    return 0;
}
            
///平仓处理类型
// TThostFtdcCloseDealTypeType char
static PyObject *PyCThostFtdcProductField_get_CloseDealType(PyCThostFtdcProductField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.CloseDealType), 1);
}

///平仓处理类型
// TThostFtdcCloseDealTypeType char
static int PyCThostFtdcProductField_set_CloseDealType(PyCThostFtdcProductField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CloseDealType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CloseDealType)) {
        PyErr_SetString(PyExc_ValueError, "CloseDealType must be equal 1 bytes");
        return -1;
    }
    self->data.CloseDealType = *buf;
    return 0;
}
            
///交易币种类型
// TThostFtdcCurrencyIDType char[4]
static PyObject *PyCThostFtdcProductField_get_TradeCurrencyID(PyCThostFtdcProductField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeCurrencyID, (Py_ssize_t)sizeof(self->data.TradeCurrencyID));
    return PyBytes_FromString(self->data.TradeCurrencyID);
}

///交易币种类型
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcProductField_set_TradeCurrencyID(PyCThostFtdcProductField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradeCurrencyID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TradeCurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "TradeCurrencyID must be less than 4 bytes");
        return -1;
    }
    // memset(self->data.TradeCurrencyID, 0, sizeof(self->data.TradeCurrencyID));
    // memcpy(self->data.TradeCurrencyID, buf, len);
    strncpy(self->data.TradeCurrencyID, buf, sizeof(self->data.TradeCurrencyID));
    return 0;
}
            
///质押资金可用范围
// TThostFtdcMortgageFundUseRangeType char
static PyObject *PyCThostFtdcProductField_get_MortgageFundUseRange(PyCThostFtdcProductField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.MortgageFundUseRange), 1);
}

///质押资金可用范围
// TThostFtdcMortgageFundUseRangeType char
static int PyCThostFtdcProductField_set_MortgageFundUseRange(PyCThostFtdcProductField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MortgageFundUseRange Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.MortgageFundUseRange)) {
        PyErr_SetString(PyExc_ValueError, "MortgageFundUseRange must be equal 1 bytes");
        return -1;
    }
    self->data.MortgageFundUseRange = *buf;
    return 0;
}
            
///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcProductField_get_reserve2(PyCThostFtdcProductField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve2, (Py_ssize_t)sizeof(self->data.reserve2));
    return PyBytes_FromString(self->data.reserve2);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcProductField_set_reserve2(PyCThostFtdcProductField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 31 bytes");
        return -1;
    }
    // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
    // memcpy(self->data.reserve2, buf, len);
    strncpy(self->data.reserve2, buf, sizeof(self->data.reserve2));
    return 0;
}
            
///合约基础商品乘数
// TThostFtdcUnderlyingMultipleType double
static PyObject *PyCThostFtdcProductField_get_UnderlyingMultiple(PyCThostFtdcProductField *self, void *closure) {
    return PyFloat_FromDouble(self->data.UnderlyingMultiple);
}

///合约基础商品乘数
// TThostFtdcUnderlyingMultipleType double
static int PyCThostFtdcProductField_set_UnderlyingMultiple(PyCThostFtdcProductField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UnderlyingMultiple Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.UnderlyingMultiple = buf;
    return 0;
}
        
///产品代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcProductField_get_ProductID(PyCThostFtdcProductField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProductID, (Py_ssize_t)sizeof(self->data.ProductID));
    return PyBytes_FromString(self->data.ProductID);
}

///产品代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcProductField_set_ProductID(PyCThostFtdcProductField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ProductID)) {
        PyErr_SetString(PyExc_ValueError, "ProductID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.ProductID, 0, sizeof(self->data.ProductID));
    // memcpy(self->data.ProductID, buf, len);
    strncpy(self->data.ProductID, buf, sizeof(self->data.ProductID));
    return 0;
}
            
///交易所产品代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcProductField_get_ExchangeProductID(PyCThostFtdcProductField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeProductID, (Py_ssize_t)sizeof(self->data.ExchangeProductID));
    return PyBytes_FromString(self->data.ExchangeProductID);
}

///交易所产品代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcProductField_set_ExchangeProductID(PyCThostFtdcProductField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeProductID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ExchangeProductID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeProductID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.ExchangeProductID, 0, sizeof(self->data.ExchangeProductID));
    // memcpy(self->data.ExchangeProductID, buf, len);
    strncpy(self->data.ExchangeProductID, buf, sizeof(self->data.ExchangeProductID));
    return 0;
}
            
///开仓量限制粒度
// TThostFtdcOpenLimitControlLevelType char
static PyObject *PyCThostFtdcProductField_get_OpenLimitControlLevel(PyCThostFtdcProductField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OpenLimitControlLevel), 1);
}

///开仓量限制粒度
// TThostFtdcOpenLimitControlLevelType char
static int PyCThostFtdcProductField_set_OpenLimitControlLevel(PyCThostFtdcProductField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OpenLimitControlLevel Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OpenLimitControlLevel)) {
        PyErr_SetString(PyExc_ValueError, "OpenLimitControlLevel must be equal 1 bytes");
        return -1;
    }
    self->data.OpenLimitControlLevel = *buf;
    return 0;
}
            
///报单频率控制粒度
// TThostFtdcOrderFreqControlLevelType char
static PyObject *PyCThostFtdcProductField_get_OrderFreqControlLevel(PyCThostFtdcProductField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OrderFreqControlLevel), 1);
}

///报单频率控制粒度
// TThostFtdcOrderFreqControlLevelType char
static int PyCThostFtdcProductField_set_OrderFreqControlLevel(PyCThostFtdcProductField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderFreqControlLevel Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OrderFreqControlLevel)) {
        PyErr_SetString(PyExc_ValueError, "OrderFreqControlLevel must be equal 1 bytes");
        return -1;
    }
    self->data.OrderFreqControlLevel = *buf;
    return 0;
}
            

static PyGetSetDef PyCThostFtdcProductField_getset[] = {
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcProductField_get_reserve1, (setter)PyCThostFtdcProductField_set_reserve1, (char *)"reserve1", NULL},
    ///产品名称 
    {(char *)"ProductName", (getter)PyCThostFtdcProductField_get_ProductName, (setter)PyCThostFtdcProductField_set_ProductName, (char *)"ProductName", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcProductField_get_ExchangeID, (setter)PyCThostFtdcProductField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///产品类型 
    {(char *)"ProductClass", (getter)PyCThostFtdcProductField_get_ProductClass, (setter)PyCThostFtdcProductField_set_ProductClass, (char *)"ProductClass", NULL},
    ///合约数量乘数 
    {(char *)"VolumeMultiple", (getter)PyCThostFtdcProductField_get_VolumeMultiple, (setter)PyCThostFtdcProductField_set_VolumeMultiple, (char *)"VolumeMultiple", NULL},
    ///最小变动价位 
    {(char *)"PriceTick", (getter)PyCThostFtdcProductField_get_PriceTick, (setter)PyCThostFtdcProductField_set_PriceTick, (char *)"PriceTick", NULL},
    ///市价单最大下单量 
    {(char *)"MaxMarketOrderVolume", (getter)PyCThostFtdcProductField_get_MaxMarketOrderVolume, (setter)PyCThostFtdcProductField_set_MaxMarketOrderVolume, (char *)"MaxMarketOrderVolume", NULL},
    ///市价单最小下单量 
    {(char *)"MinMarketOrderVolume", (getter)PyCThostFtdcProductField_get_MinMarketOrderVolume, (setter)PyCThostFtdcProductField_set_MinMarketOrderVolume, (char *)"MinMarketOrderVolume", NULL},
    ///限价单最大下单量 
    {(char *)"MaxLimitOrderVolume", (getter)PyCThostFtdcProductField_get_MaxLimitOrderVolume, (setter)PyCThostFtdcProductField_set_MaxLimitOrderVolume, (char *)"MaxLimitOrderVolume", NULL},
    ///限价单最小下单量 
    {(char *)"MinLimitOrderVolume", (getter)PyCThostFtdcProductField_get_MinLimitOrderVolume, (setter)PyCThostFtdcProductField_set_MinLimitOrderVolume, (char *)"MinLimitOrderVolume", NULL},
    ///持仓类型 
    {(char *)"PositionType", (getter)PyCThostFtdcProductField_get_PositionType, (setter)PyCThostFtdcProductField_set_PositionType, (char *)"PositionType", NULL},
    ///持仓日期类型 
    {(char *)"PositionDateType", (getter)PyCThostFtdcProductField_get_PositionDateType, (setter)PyCThostFtdcProductField_set_PositionDateType, (char *)"PositionDateType", NULL},
    ///平仓处理类型 
    {(char *)"CloseDealType", (getter)PyCThostFtdcProductField_get_CloseDealType, (setter)PyCThostFtdcProductField_set_CloseDealType, (char *)"CloseDealType", NULL},
    ///交易币种类型 
    {(char *)"TradeCurrencyID", (getter)PyCThostFtdcProductField_get_TradeCurrencyID, (setter)PyCThostFtdcProductField_set_TradeCurrencyID, (char *)"TradeCurrencyID", NULL},
    ///质押资金可用范围 
    {(char *)"MortgageFundUseRange", (getter)PyCThostFtdcProductField_get_MortgageFundUseRange, (setter)PyCThostFtdcProductField_set_MortgageFundUseRange, (char *)"MortgageFundUseRange", NULL},
    ///保留的无效字段 
    {(char *)"reserve2", (getter)PyCThostFtdcProductField_get_reserve2, (setter)PyCThostFtdcProductField_set_reserve2, (char *)"reserve2", NULL},
    ///合约基础商品乘数 
    {(char *)"UnderlyingMultiple", (getter)PyCThostFtdcProductField_get_UnderlyingMultiple, (setter)PyCThostFtdcProductField_set_UnderlyingMultiple, (char *)"UnderlyingMultiple", NULL},
    ///产品代码 
    {(char *)"ProductID", (getter)PyCThostFtdcProductField_get_ProductID, (setter)PyCThostFtdcProductField_set_ProductID, (char *)"ProductID", NULL},
    ///交易所产品代码 
    {(char *)"ExchangeProductID", (getter)PyCThostFtdcProductField_get_ExchangeProductID, (setter)PyCThostFtdcProductField_set_ExchangeProductID, (char *)"ExchangeProductID", NULL},
    ///开仓量限制粒度 
    {(char *)"OpenLimitControlLevel", (getter)PyCThostFtdcProductField_get_OpenLimitControlLevel, (setter)PyCThostFtdcProductField_set_OpenLimitControlLevel, (char *)"OpenLimitControlLevel", NULL},
    ///报单频率控制粒度 
    {(char *)"OrderFreqControlLevel", (getter)PyCThostFtdcProductField_get_OrderFreqControlLevel, (setter)PyCThostFtdcProductField_set_OrderFreqControlLevel, (char *)"OrderFreqControlLevel", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcProductFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcProductField",	/* tp_name */
	sizeof(PyCThostFtdcProductField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcProductField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcProductField_repr,   /* tp_repr */
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
	"CThostFtdcProductField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcProductField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcProductField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcProductField_new,       /* tp_new */
};

int PyCThostFtdcProductFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcProductField  */
	if (PyType_Ready(&PyCThostFtdcProductFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcProductField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcProductFieldType);
    if( PyModule_AddObject(module, "CThostFtdcProductField", (PyObject *)&PyCThostFtdcProductFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcProductField to module");
        Py_DECREF(&PyCThostFtdcProductFieldType);
		return -1;
    }

    return 0;
}
