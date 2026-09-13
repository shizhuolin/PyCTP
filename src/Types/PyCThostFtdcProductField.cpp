
#include "PyCThostFtdcProductField.h"

///产品

static int PyCThostFtdcProductFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "reserve1", "ProductName", "ExchangeID", "ProductClass", "VolumeMultiple", "PriceTick", "MaxMarketOrderVolume", "MinMarketOrderVolume", "MaxLimitOrderVolume", "MinLimitOrderVolume", "PositionType", "PositionDateType", "CloseDealType", "TradeCurrencyID", "MortgageFundUseRange", "reserve2", "UnderlyingMultiple", "ProductID", "ExchangeProductID", "OpenLimitControlLevel", "OrderFreqControlLevel", NULL };


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcProductField_reserve1 = NULL;
    Py_ssize_t CThostFtdcProductField_reserve1_length = 0;

    /// 产品名称
    /// typedef char TThostFtdcProductNameType[21]
    char *CThostFtdcProductField_ProductName = NULL;
    Py_ssize_t CThostFtdcProductField_ProductName_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcProductField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcProductField_ExchangeID_length = 0;

    /// 产品类型
    /// typedef char TThostFtdcProductClassType
    char CThostFtdcProductField_ProductClass = 0;

    /// 合约数量乘数
    /// typedef int TThostFtdcVolumeMultipleType
    int CThostFtdcProductField_VolumeMultiple = 0;

    /// 最小变动价位
    /// typedef double TThostFtdcPriceType
    double CThostFtdcProductField_PriceTick = 0.0;

    /// 市价单最大下单量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcProductField_MaxMarketOrderVolume = 0;

    /// 市价单最小下单量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcProductField_MinMarketOrderVolume = 0;

    /// 限价单最大下单量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcProductField_MaxLimitOrderVolume = 0;

    /// 限价单最小下单量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcProductField_MinLimitOrderVolume = 0;

    /// 持仓类型
    /// typedef char TThostFtdcPositionTypeType
    char CThostFtdcProductField_PositionType = 0;

    /// 持仓日期类型
    /// typedef char TThostFtdcPositionDateTypeType
    char CThostFtdcProductField_PositionDateType = 0;

    /// 平仓处理类型
    /// typedef char TThostFtdcCloseDealTypeType
    char CThostFtdcProductField_CloseDealType = 0;

    /// 交易币种类型
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcProductField_TradeCurrencyID = NULL;
    Py_ssize_t CThostFtdcProductField_TradeCurrencyID_length = 0;

    /// 质押资金可用范围
    /// typedef char TThostFtdcMortgageFundUseRangeType
    char CThostFtdcProductField_MortgageFundUseRange = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcProductField_reserve2 = NULL;
    Py_ssize_t CThostFtdcProductField_reserve2_length = 0;

    /// 合约基础商品乘数
    /// typedef double TThostFtdcUnderlyingMultipleType
    double CThostFtdcProductField_UnderlyingMultiple = 0.0;

    /// 产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcProductField_ProductID = NULL;
    Py_ssize_t CThostFtdcProductField_ProductID_length = 0;

    /// 交易所产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcProductField_ExchangeProductID = NULL;
    Py_ssize_t CThostFtdcProductField_ExchangeProductID_length = 0;

    /// 开仓量限制粒度
    /// typedef char TThostFtdcOpenLimitControlLevelType
    char CThostFtdcProductField_OpenLimitControlLevel = 0;

    /// 报单频率控制粒度
    /// typedef char TThostFtdcOrderFreqControlLevelType
    char CThostFtdcProductField_OrderFreqControlLevel = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#cidiiiicccy#cy#dy#y#cc", (char **)kwlist
        , &CThostFtdcProductField_reserve1, &CThostFtdcProductField_reserve1_length
        , &CThostFtdcProductField_ProductName, &CThostFtdcProductField_ProductName_length
        , &CThostFtdcProductField_ExchangeID, &CThostFtdcProductField_ExchangeID_length
        , &CThostFtdcProductField_ProductClass
        , &CThostFtdcProductField_VolumeMultiple
        , &CThostFtdcProductField_PriceTick
        , &CThostFtdcProductField_MaxMarketOrderVolume
        , &CThostFtdcProductField_MinMarketOrderVolume
        , &CThostFtdcProductField_MaxLimitOrderVolume
        , &CThostFtdcProductField_MinLimitOrderVolume
        , &CThostFtdcProductField_PositionType
        , &CThostFtdcProductField_PositionDateType
        , &CThostFtdcProductField_CloseDealType
        , &CThostFtdcProductField_TradeCurrencyID, &CThostFtdcProductField_TradeCurrencyID_length
        , &CThostFtdcProductField_MortgageFundUseRange
        , &CThostFtdcProductField_reserve2, &CThostFtdcProductField_reserve2_length
        , &CThostFtdcProductField_UnderlyingMultiple
        , &CThostFtdcProductField_ProductID, &CThostFtdcProductField_ProductID_length
        , &CThostFtdcProductField_ExchangeProductID, &CThostFtdcProductField_ExchangeProductID_length
        , &CThostFtdcProductField_OpenLimitControlLevel
        , &CThostFtdcProductField_OrderFreqControlLevel
    )) {
        return -1;
    }

    PyCThostFtdcProductFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductFieldData>(self);
    CThostFtdcProductField *data = &(extra->data);


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcProductField_reserve1 != NULL ) {
        if(CThostFtdcProductField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcProductField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcProductField_reserve1, CThostFtdcProductField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcProductField_reserve1, sizeof(data->reserve1));
        CThostFtdcProductField_reserve1 = NULL;
    }

    /// 产品名称
    /// typedef char TThostFtdcProductNameType[21]
    if( CThostFtdcProductField_ProductName != NULL ) {
        if(CThostFtdcProductField_ProductName_length >= (Py_ssize_t)sizeof(data->ProductName)) {
            PyErr_Format(PyExc_ValueError, "ProductName too long: length=%zd (max allowed is 20)", CThostFtdcProductField_ProductName_length);
            return -1;
        }
        // memset(data->ProductName, 0, sizeof(data->ProductName));
        // memcpy(data->ProductName, CThostFtdcProductField_ProductName, CThostFtdcProductField_ProductName_length);
        strncpy(data->ProductName, CThostFtdcProductField_ProductName, sizeof(data->ProductName));
        CThostFtdcProductField_ProductName = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcProductField_ExchangeID != NULL ) {
        if(CThostFtdcProductField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcProductField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcProductField_ExchangeID, CThostFtdcProductField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcProductField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcProductField_ExchangeID = NULL;
    }

    /// 产品类型
    /// typedef char TThostFtdcProductClassType
    data->ProductClass = CThostFtdcProductField_ProductClass;

    /// 合约数量乘数
    /// typedef int TThostFtdcVolumeMultipleType
    data->VolumeMultiple = CThostFtdcProductField_VolumeMultiple;

    /// 最小变动价位
    /// typedef double TThostFtdcPriceType
    data->PriceTick = CThostFtdcProductField_PriceTick;

    /// 市价单最大下单量
    /// typedef int TThostFtdcVolumeType
    data->MaxMarketOrderVolume = CThostFtdcProductField_MaxMarketOrderVolume;

    /// 市价单最小下单量
    /// typedef int TThostFtdcVolumeType
    data->MinMarketOrderVolume = CThostFtdcProductField_MinMarketOrderVolume;

    /// 限价单最大下单量
    /// typedef int TThostFtdcVolumeType
    data->MaxLimitOrderVolume = CThostFtdcProductField_MaxLimitOrderVolume;

    /// 限价单最小下单量
    /// typedef int TThostFtdcVolumeType
    data->MinLimitOrderVolume = CThostFtdcProductField_MinLimitOrderVolume;

    /// 持仓类型
    /// typedef char TThostFtdcPositionTypeType
    data->PositionType = CThostFtdcProductField_PositionType;

    /// 持仓日期类型
    /// typedef char TThostFtdcPositionDateTypeType
    data->PositionDateType = CThostFtdcProductField_PositionDateType;

    /// 平仓处理类型
    /// typedef char TThostFtdcCloseDealTypeType
    data->CloseDealType = CThostFtdcProductField_CloseDealType;

    /// 交易币种类型
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcProductField_TradeCurrencyID != NULL ) {
        if(CThostFtdcProductField_TradeCurrencyID_length >= (Py_ssize_t)sizeof(data->TradeCurrencyID)) {
            PyErr_Format(PyExc_ValueError, "TradeCurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcProductField_TradeCurrencyID_length);
            return -1;
        }
        // memset(data->TradeCurrencyID, 0, sizeof(data->TradeCurrencyID));
        // memcpy(data->TradeCurrencyID, CThostFtdcProductField_TradeCurrencyID, CThostFtdcProductField_TradeCurrencyID_length);
        strncpy(data->TradeCurrencyID, CThostFtdcProductField_TradeCurrencyID, sizeof(data->TradeCurrencyID));
        CThostFtdcProductField_TradeCurrencyID = NULL;
    }

    /// 质押资金可用范围
    /// typedef char TThostFtdcMortgageFundUseRangeType
    data->MortgageFundUseRange = CThostFtdcProductField_MortgageFundUseRange;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcProductField_reserve2 != NULL ) {
        if(CThostFtdcProductField_reserve2_length >= (Py_ssize_t)sizeof(data->reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is 30)", CThostFtdcProductField_reserve2_length);
            return -1;
        }
        // memset(data->reserve2, 0, sizeof(data->reserve2));
        // memcpy(data->reserve2, CThostFtdcProductField_reserve2, CThostFtdcProductField_reserve2_length);
        strncpy(data->reserve2, CThostFtdcProductField_reserve2, sizeof(data->reserve2));
        CThostFtdcProductField_reserve2 = NULL;
    }

    /// 合约基础商品乘数
    /// typedef double TThostFtdcUnderlyingMultipleType
    data->UnderlyingMultiple = CThostFtdcProductField_UnderlyingMultiple;

    /// 产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcProductField_ProductID != NULL ) {
        if(CThostFtdcProductField_ProductID_length >= (Py_ssize_t)sizeof(data->ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is 80)", CThostFtdcProductField_ProductID_length);
            return -1;
        }
        // memset(data->ProductID, 0, sizeof(data->ProductID));
        // memcpy(data->ProductID, CThostFtdcProductField_ProductID, CThostFtdcProductField_ProductID_length);
        strncpy(data->ProductID, CThostFtdcProductField_ProductID, sizeof(data->ProductID));
        CThostFtdcProductField_ProductID = NULL;
    }

    /// 交易所产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcProductField_ExchangeProductID != NULL ) {
        if(CThostFtdcProductField_ExchangeProductID_length >= (Py_ssize_t)sizeof(data->ExchangeProductID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeProductID too long: length=%zd (max allowed is 80)", CThostFtdcProductField_ExchangeProductID_length);
            return -1;
        }
        // memset(data->ExchangeProductID, 0, sizeof(data->ExchangeProductID));
        // memcpy(data->ExchangeProductID, CThostFtdcProductField_ExchangeProductID, CThostFtdcProductField_ExchangeProductID_length);
        strncpy(data->ExchangeProductID, CThostFtdcProductField_ExchangeProductID, sizeof(data->ExchangeProductID));
        CThostFtdcProductField_ExchangeProductID = NULL;
    }

    /// 开仓量限制粒度
    /// typedef char TThostFtdcOpenLimitControlLevelType
    data->OpenLimitControlLevel = CThostFtdcProductField_OpenLimitControlLevel;

    /// 报单频率控制粒度
    /// typedef char TThostFtdcOrderFreqControlLevelType
    data->OrderFreqControlLevel = CThostFtdcProductField_OrderFreqControlLevel;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcProductFieldType_repr(PyObject *self) {

    PyCThostFtdcProductFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductFieldData>(self);
    CThostFtdcProductField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:c,s:i,s:d,s:i,s:i,s:i,s:i,s:c,s:c,s:c,s:y,s:c,s:y,s:d,s:y,s:y,s:c,s:c}"
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "ProductName", data->ProductName//, (Py_ssize_t)sizeof(data->ProductName)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ProductClass", data->ProductClass
        , "VolumeMultiple", data->VolumeMultiple
        , "PriceTick", data->PriceTick
        , "MaxMarketOrderVolume", data->MaxMarketOrderVolume
        , "MinMarketOrderVolume", data->MinMarketOrderVolume
        , "MaxLimitOrderVolume", data->MaxLimitOrderVolume
        , "MinLimitOrderVolume", data->MinLimitOrderVolume
        , "PositionType", data->PositionType
        , "PositionDateType", data->PositionDateType
        , "CloseDealType", data->CloseDealType
        , "TradeCurrencyID", data->TradeCurrencyID//, (Py_ssize_t)sizeof(data->TradeCurrencyID)
        , "MortgageFundUseRange", data->MortgageFundUseRange
        , "reserve2", data->reserve2//, (Py_ssize_t)sizeof(data->reserve2)
        , "UnderlyingMultiple", data->UnderlyingMultiple
        , "ProductID", data->ProductID//, (Py_ssize_t)sizeof(data->ProductID)
        , "ExchangeProductID", data->ExchangeProductID//, (Py_ssize_t)sizeof(data->ExchangeProductID)
        , "OpenLimitControlLevel", data->OpenLimitControlLevel
        , "OrderFreqControlLevel", data->OrderFreqControlLevel
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcProductField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcProductField repr");
        return NULL;
    }

    return repr;
}


/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcProductFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcProductFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductFieldData>(self);
    CThostFtdcProductField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcProductFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcProductField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcProductFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductFieldData>(self);
    CThostFtdcProductField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 产品名称
/// typedef char TThostFtdcProductNameType[21]
static PyObject *PyCThostFtdcProductFieldType_get_ProductName(PyObject *self, void *closure) {
    PyCThostFtdcProductFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductFieldData>(self);
    CThostFtdcProductField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProductName, (Py_ssize_t)sizeof(data->ProductName));
    return PyBytes_FromString(data->ProductName);
}

static int PyCThostFtdcProductFieldType_set_ProductName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcProductField::ProductName)) {
        PyErr_SetString(PyExc_ValueError, "ProductName must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcProductFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductFieldData>(self);
    CThostFtdcProductField *data = &(extra->data);
    // memset(data->ProductName, 0, sizeof(data->ProductName));
    // memcpy(data->ProductName, buf, len);
    strncpy(data->ProductName, buf, sizeof(data->ProductName));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcProductFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcProductFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductFieldData>(self);
    CThostFtdcProductField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcProductFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcProductField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcProductFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductFieldData>(self);
    CThostFtdcProductField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 产品类型
/// typedef char TThostFtdcProductClassType
static PyObject *PyCThostFtdcProductFieldType_get_ProductClass(PyObject *self, void *closure) {
    PyCThostFtdcProductFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductFieldData>(self);
    CThostFtdcProductField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ProductClass), 1);
}

static int PyCThostFtdcProductFieldType_set_ProductClass(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductClass Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcProductField::ProductClass)) {
        PyErr_SetString(PyExc_ValueError, "ProductClass must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcProductFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductFieldData>(self);
    CThostFtdcProductField *data = &(extra->data);
    data->ProductClass = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 持仓类型
/// typedef char TThostFtdcPositionTypeType
static PyObject *PyCThostFtdcProductFieldType_get_PositionType(PyObject *self, void *closure) {
    PyCThostFtdcProductFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductFieldData>(self);
    CThostFtdcProductField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->PositionType), 1);
}

static int PyCThostFtdcProductFieldType_set_PositionType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "PositionType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcProductField::PositionType)) {
        PyErr_SetString(PyExc_ValueError, "PositionType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcProductFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductFieldData>(self);
    CThostFtdcProductField *data = &(extra->data);
    data->PositionType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 持仓日期类型
/// typedef char TThostFtdcPositionDateTypeType
static PyObject *PyCThostFtdcProductFieldType_get_PositionDateType(PyObject *self, void *closure) {
    PyCThostFtdcProductFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductFieldData>(self);
    CThostFtdcProductField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->PositionDateType), 1);
}

static int PyCThostFtdcProductFieldType_set_PositionDateType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "PositionDateType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcProductField::PositionDateType)) {
        PyErr_SetString(PyExc_ValueError, "PositionDateType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcProductFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductFieldData>(self);
    CThostFtdcProductField *data = &(extra->data);
    data->PositionDateType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 平仓处理类型
/// typedef char TThostFtdcCloseDealTypeType
static PyObject *PyCThostFtdcProductFieldType_get_CloseDealType(PyObject *self, void *closure) {
    PyCThostFtdcProductFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductFieldData>(self);
    CThostFtdcProductField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->CloseDealType), 1);
}

static int PyCThostFtdcProductFieldType_set_CloseDealType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CloseDealType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcProductField::CloseDealType)) {
        PyErr_SetString(PyExc_ValueError, "CloseDealType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcProductFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductFieldData>(self);
    CThostFtdcProductField *data = &(extra->data);
    data->CloseDealType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易币种类型
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcProductFieldType_get_TradeCurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcProductFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductFieldData>(self);
    CThostFtdcProductField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeCurrencyID, (Py_ssize_t)sizeof(data->TradeCurrencyID));
    return PyBytes_FromString(data->TradeCurrencyID);
}

static int PyCThostFtdcProductFieldType_set_TradeCurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeCurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcProductField::TradeCurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "TradeCurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcProductFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductFieldData>(self);
    CThostFtdcProductField *data = &(extra->data);
    // memset(data->TradeCurrencyID, 0, sizeof(data->TradeCurrencyID));
    // memcpy(data->TradeCurrencyID, buf, len);
    strncpy(data->TradeCurrencyID, buf, sizeof(data->TradeCurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 质押资金可用范围
/// typedef char TThostFtdcMortgageFundUseRangeType
static PyObject *PyCThostFtdcProductFieldType_get_MortgageFundUseRange(PyObject *self, void *closure) {
    PyCThostFtdcProductFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductFieldData>(self);
    CThostFtdcProductField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->MortgageFundUseRange), 1);
}

static int PyCThostFtdcProductFieldType_set_MortgageFundUseRange(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MortgageFundUseRange Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcProductField::MortgageFundUseRange)) {
        PyErr_SetString(PyExc_ValueError, "MortgageFundUseRange must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcProductFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductFieldData>(self);
    CThostFtdcProductField *data = &(extra->data);
    data->MortgageFundUseRange = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcProductFieldType_get_reserve2(PyObject *self, void *closure) {
    PyCThostFtdcProductFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductFieldData>(self);
    CThostFtdcProductField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve2, (Py_ssize_t)sizeof(data->reserve2));
    return PyBytes_FromString(data->reserve2);
}

static int PyCThostFtdcProductFieldType_set_reserve2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcProductField::reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcProductFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductFieldData>(self);
    CThostFtdcProductField *data = &(extra->data);
    // memset(data->reserve2, 0, sizeof(data->reserve2));
    // memcpy(data->reserve2, buf, len);
    strncpy(data->reserve2, buf, sizeof(data->reserve2));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 产品代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcProductFieldType_get_ProductID(PyObject *self, void *closure) {
    PyCThostFtdcProductFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductFieldData>(self);
    CThostFtdcProductField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProductID, (Py_ssize_t)sizeof(data->ProductID));
    return PyBytes_FromString(data->ProductID);
}

static int PyCThostFtdcProductFieldType_set_ProductID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcProductField::ProductID)) {
        PyErr_SetString(PyExc_ValueError, "ProductID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcProductFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductFieldData>(self);
    CThostFtdcProductField *data = &(extra->data);
    // memset(data->ProductID, 0, sizeof(data->ProductID));
    // memcpy(data->ProductID, buf, len);
    strncpy(data->ProductID, buf, sizeof(data->ProductID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所产品代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcProductFieldType_get_ExchangeProductID(PyObject *self, void *closure) {
    PyCThostFtdcProductFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductFieldData>(self);
    CThostFtdcProductField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeProductID, (Py_ssize_t)sizeof(data->ExchangeProductID));
    return PyBytes_FromString(data->ExchangeProductID);
}

static int PyCThostFtdcProductFieldType_set_ExchangeProductID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeProductID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcProductField::ExchangeProductID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeProductID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcProductFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductFieldData>(self);
    CThostFtdcProductField *data = &(extra->data);
    // memset(data->ExchangeProductID, 0, sizeof(data->ExchangeProductID));
    // memcpy(data->ExchangeProductID, buf, len);
    strncpy(data->ExchangeProductID, buf, sizeof(data->ExchangeProductID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 开仓量限制粒度
/// typedef char TThostFtdcOpenLimitControlLevelType
static PyObject *PyCThostFtdcProductFieldType_get_OpenLimitControlLevel(PyObject *self, void *closure) {
    PyCThostFtdcProductFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductFieldData>(self);
    CThostFtdcProductField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OpenLimitControlLevel), 1);
}

static int PyCThostFtdcProductFieldType_set_OpenLimitControlLevel(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OpenLimitControlLevel Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcProductField::OpenLimitControlLevel)) {
        PyErr_SetString(PyExc_ValueError, "OpenLimitControlLevel must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcProductFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductFieldData>(self);
    CThostFtdcProductField *data = &(extra->data);
    data->OpenLimitControlLevel = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单频率控制粒度
/// typedef char TThostFtdcOrderFreqControlLevelType
static PyObject *PyCThostFtdcProductFieldType_get_OrderFreqControlLevel(PyObject *self, void *closure) {
    PyCThostFtdcProductFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductFieldData>(self);
    CThostFtdcProductField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OrderFreqControlLevel), 1);
}

static int PyCThostFtdcProductFieldType_set_OrderFreqControlLevel(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderFreqControlLevel Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcProductField::OrderFreqControlLevel)) {
        PyErr_SetString(PyExc_ValueError, "OrderFreqControlLevel must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcProductFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductFieldData>(self);
    CThostFtdcProductField *data = &(extra->data);
    data->OrderFreqControlLevel = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcProductFieldType_members[] = {
    /// 合约数量乘数
    /// typedef int TThostFtdcVolumeMultipleType
    {
        .name = "VolumeMultiple",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcProductFieldData, data.VolumeMultiple),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("合约数量乘数")
    },
    /// 最小变动价位
    /// typedef double TThostFtdcPriceType
    {
        .name = "PriceTick",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcProductFieldData, data.PriceTick),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("最小变动价位")
    },
    /// 市价单最大下单量
    /// typedef int TThostFtdcVolumeType
    {
        .name = "MaxMarketOrderVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcProductFieldData, data.MaxMarketOrderVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("市价单最大下单量")
    },
    /// 市价单最小下单量
    /// typedef int TThostFtdcVolumeType
    {
        .name = "MinMarketOrderVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcProductFieldData, data.MinMarketOrderVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("市价单最小下单量")
    },
    /// 限价单最大下单量
    /// typedef int TThostFtdcVolumeType
    {
        .name = "MaxLimitOrderVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcProductFieldData, data.MaxLimitOrderVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("限价单最大下单量")
    },
    /// 限价单最小下单量
    /// typedef int TThostFtdcVolumeType
    {
        .name = "MinLimitOrderVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcProductFieldData, data.MinLimitOrderVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("限价单最小下单量")
    },
    /// 合约基础商品乘数
    /// typedef double TThostFtdcUnderlyingMultipleType
    {
        .name = "UnderlyingMultiple",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcProductFieldData, data.UnderlyingMultiple),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("合约基础商品乘数")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcProductFieldType_getsets[] = {
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcProductFieldType_get_reserve1,
    .set = PyCThostFtdcProductFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 产品名称
    /// typedef char TThostFtdcProductNameType[21]
    {
    .name = "ProductName",
    .get = PyCThostFtdcProductFieldType_get_ProductName,
    .set = PyCThostFtdcProductFieldType_set_ProductName,
    .doc = PyDoc_STR("产品名称"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcProductFieldType_get_ExchangeID,
    .set = PyCThostFtdcProductFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 产品类型
    /// typedef char TThostFtdcProductClassType
    {
    .name = "ProductClass",
    .get = PyCThostFtdcProductFieldType_get_ProductClass,
    .set = PyCThostFtdcProductFieldType_set_ProductClass,
    .doc = PyDoc_STR("产品类型"),
    },
    /// 持仓类型
    /// typedef char TThostFtdcPositionTypeType
    {
    .name = "PositionType",
    .get = PyCThostFtdcProductFieldType_get_PositionType,
    .set = PyCThostFtdcProductFieldType_set_PositionType,
    .doc = PyDoc_STR("持仓类型"),
    },
    /// 持仓日期类型
    /// typedef char TThostFtdcPositionDateTypeType
    {
    .name = "PositionDateType",
    .get = PyCThostFtdcProductFieldType_get_PositionDateType,
    .set = PyCThostFtdcProductFieldType_set_PositionDateType,
    .doc = PyDoc_STR("持仓日期类型"),
    },
    /// 平仓处理类型
    /// typedef char TThostFtdcCloseDealTypeType
    {
    .name = "CloseDealType",
    .get = PyCThostFtdcProductFieldType_get_CloseDealType,
    .set = PyCThostFtdcProductFieldType_set_CloseDealType,
    .doc = PyDoc_STR("平仓处理类型"),
    },
    /// 交易币种类型
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "TradeCurrencyID",
    .get = PyCThostFtdcProductFieldType_get_TradeCurrencyID,
    .set = PyCThostFtdcProductFieldType_set_TradeCurrencyID,
    .doc = PyDoc_STR("交易币种类型"),
    },
    /// 质押资金可用范围
    /// typedef char TThostFtdcMortgageFundUseRangeType
    {
    .name = "MortgageFundUseRange",
    .get = PyCThostFtdcProductFieldType_get_MortgageFundUseRange,
    .set = PyCThostFtdcProductFieldType_set_MortgageFundUseRange,
    .doc = PyDoc_STR("质押资金可用范围"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve2",
    .get = PyCThostFtdcProductFieldType_get_reserve2,
    .set = PyCThostFtdcProductFieldType_set_reserve2,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "ProductID",
    .get = PyCThostFtdcProductFieldType_get_ProductID,
    .set = PyCThostFtdcProductFieldType_set_ProductID,
    .doc = PyDoc_STR("产品代码"),
    },
    /// 交易所产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "ExchangeProductID",
    .get = PyCThostFtdcProductFieldType_get_ExchangeProductID,
    .set = PyCThostFtdcProductFieldType_set_ExchangeProductID,
    .doc = PyDoc_STR("交易所产品代码"),
    },
    /// 开仓量限制粒度
    /// typedef char TThostFtdcOpenLimitControlLevelType
    {
    .name = "OpenLimitControlLevel",
    .get = PyCThostFtdcProductFieldType_get_OpenLimitControlLevel,
    .set = PyCThostFtdcProductFieldType_set_OpenLimitControlLevel,
    .doc = PyDoc_STR("开仓量限制粒度"),
    },
    /// 报单频率控制粒度
    /// typedef char TThostFtdcOrderFreqControlLevelType
    {
    .name = "OrderFreqControlLevel",
    .get = PyCThostFtdcProductFieldType_get_OrderFreqControlLevel,
    .set = PyCThostFtdcProductFieldType_set_OrderFreqControlLevel,
    .doc = PyDoc_STR("报单频率控制粒度"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcProductFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcProductField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("产品")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcProductFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcProductFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcProductFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcProductFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcProductFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcProductFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("产品")},
    {Py_tp_members, PyCThostFtdcProductFieldType_members},
    {Py_tp_getset, PyCThostFtdcProductFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcProductFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcProductFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcProductFieldType_spec = {
    .name = "PyCTP.CThostFtdcProductField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcProductFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcProductFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcProductFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcProductFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcProductFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcProductFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcProductFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcProductFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcProductField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcProductField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}