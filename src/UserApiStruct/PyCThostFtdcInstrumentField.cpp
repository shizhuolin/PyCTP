
#include "PyCThostFtdcInstrumentField.h"

///合约

static PyObject *PyCThostFtdcInstrumentField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInstrumentField *self = (PyCThostFtdcInstrumentField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcInstrumentField_init(PyCThostFtdcInstrumentField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "ExchangeID", "InstrumentName", "reserve2", "reserve3", "ProductClass", "DeliveryYear", "DeliveryMonth", "MaxMarketOrderVolume", "MinMarketOrderVolume", "MaxLimitOrderVolume", "MinLimitOrderVolume", "VolumeMultiple", "PriceTick", "CreateDate", "OpenDate", "ExpireDate", "StartDelivDate", "EndDelivDate", "InstLifePhase", "IsTrading", "PositionType", "PositionDateType", "LongMarginRatio", "ShortMarginRatio", "MaxMarginSideAlgorithm", "reserve4", "StrikePrice", "OptionsType", "UnderlyingMultiple", "CombinationType", "InstrumentID", "ExchangeInstID", "ProductID", "UnderlyingInstrID",  NULL};


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *InstrumentField_reserve1 = NULL;
    Py_ssize_t InstrumentField_reserve1_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *InstrumentField_ExchangeID = NULL;
    Py_ssize_t InstrumentField_ExchangeID_len = 0;
            
    ///合约名称
    // TThostFtdcInstrumentNameType char[21]
    const char *InstrumentField_InstrumentName = NULL;
    Py_ssize_t InstrumentField_InstrumentName_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    const char *InstrumentField_reserve2 = NULL;
    Py_ssize_t InstrumentField_reserve2_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *InstrumentField_reserve3 = NULL;
    Py_ssize_t InstrumentField_reserve3_len = 0;
            
    ///产品类型
    // TThostFtdcProductClassType char
    char InstrumentField_ProductClass = 0;
            
    ///交割年份
    // TThostFtdcYearType int
    int InstrumentField_DeliveryYear = 0;
        
    ///交割月
    // TThostFtdcMonthType int
    int InstrumentField_DeliveryMonth = 0;
        
    ///市价单最大下单量
    // TThostFtdcVolumeType int
    int InstrumentField_MaxMarketOrderVolume = 0;
        
    ///市价单最小下单量
    // TThostFtdcVolumeType int
    int InstrumentField_MinMarketOrderVolume = 0;
        
    ///限价单最大下单量
    // TThostFtdcVolumeType int
    int InstrumentField_MaxLimitOrderVolume = 0;
        
    ///限价单最小下单量
    // TThostFtdcVolumeType int
    int InstrumentField_MinLimitOrderVolume = 0;
        
    ///合约数量乘数
    // TThostFtdcVolumeMultipleType int
    int InstrumentField_VolumeMultiple = 0;
        
    ///最小变动价位
    // TThostFtdcPriceType double
    double InstrumentField_PriceTick = 0.0;
        
    ///创建日
    // TThostFtdcDateType char[9]
    const char *InstrumentField_CreateDate = NULL;
    Py_ssize_t InstrumentField_CreateDate_len = 0;
            
    ///上市日
    // TThostFtdcDateType char[9]
    const char *InstrumentField_OpenDate = NULL;
    Py_ssize_t InstrumentField_OpenDate_len = 0;
            
    ///到期日
    // TThostFtdcDateType char[9]
    const char *InstrumentField_ExpireDate = NULL;
    Py_ssize_t InstrumentField_ExpireDate_len = 0;
            
    ///开始交割日
    // TThostFtdcDateType char[9]
    const char *InstrumentField_StartDelivDate = NULL;
    Py_ssize_t InstrumentField_StartDelivDate_len = 0;
            
    ///结束交割日
    // TThostFtdcDateType char[9]
    const char *InstrumentField_EndDelivDate = NULL;
    Py_ssize_t InstrumentField_EndDelivDate_len = 0;
            
    ///合约生命周期状态
    // TThostFtdcInstLifePhaseType char
    char InstrumentField_InstLifePhase = 0;
            
    ///当前是否交易
    // TThostFtdcBoolType int
    int InstrumentField_IsTrading = 0;
        
    ///持仓类型
    // TThostFtdcPositionTypeType char
    char InstrumentField_PositionType = 0;
            
    ///持仓日期类型
    // TThostFtdcPositionDateTypeType char
    char InstrumentField_PositionDateType = 0;
            
    ///多头保证金率
    // TThostFtdcRatioType double
    double InstrumentField_LongMarginRatio = 0.0;
        
    ///空头保证金率
    // TThostFtdcRatioType double
    double InstrumentField_ShortMarginRatio = 0.0;
        
    ///是否使用大额单边保证金算法
    // TThostFtdcMaxMarginSideAlgorithmType char
    char InstrumentField_MaxMarginSideAlgorithm = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *InstrumentField_reserve4 = NULL;
    Py_ssize_t InstrumentField_reserve4_len = 0;
            
    ///执行价
    // TThostFtdcPriceType double
    double InstrumentField_StrikePrice = 0.0;
        
    ///期权类型
    // TThostFtdcOptionsTypeType char
    char InstrumentField_OptionsType = 0;
            
    ///合约基础商品乘数
    // TThostFtdcUnderlyingMultipleType double
    double InstrumentField_UnderlyingMultiple = 0.0;
        
    ///组合类型
    // TThostFtdcCombinationTypeType char
    char InstrumentField_CombinationType = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *InstrumentField_InstrumentID = NULL;
    Py_ssize_t InstrumentField_InstrumentID_len = 0;
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    const char *InstrumentField_ExchangeInstID = NULL;
    Py_ssize_t InstrumentField_ExchangeInstID_len = 0;
            
    ///产品代码
    // TThostFtdcInstrumentIDType char[81]
    const char *InstrumentField_ProductID = NULL;
    Py_ssize_t InstrumentField_ProductID_len = 0;
            
    ///基础商品代码
    // TThostFtdcInstrumentIDType char[81]
    const char *InstrumentField_UnderlyingInstrID = NULL;
    Py_ssize_t InstrumentField_UnderlyingInstrID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#ciiiiiiidy#y#y#y#y#ciccddcy#dcdcy#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#ciiiiiiids#s#s#s#s#ciccddcs#dcdcs#s#s#s#", (char **)kwlist
#endif

        , &InstrumentField_reserve1, &InstrumentField_reserve1_len 
        , &InstrumentField_ExchangeID, &InstrumentField_ExchangeID_len 
        , &InstrumentField_InstrumentName, &InstrumentField_InstrumentName_len 
        , &InstrumentField_reserve2, &InstrumentField_reserve2_len 
        , &InstrumentField_reserve3, &InstrumentField_reserve3_len 
        , &InstrumentField_ProductClass 
        , &InstrumentField_DeliveryYear 
        , &InstrumentField_DeliveryMonth 
        , &InstrumentField_MaxMarketOrderVolume 
        , &InstrumentField_MinMarketOrderVolume 
        , &InstrumentField_MaxLimitOrderVolume 
        , &InstrumentField_MinLimitOrderVolume 
        , &InstrumentField_VolumeMultiple 
        , &InstrumentField_PriceTick 
        , &InstrumentField_CreateDate, &InstrumentField_CreateDate_len 
        , &InstrumentField_OpenDate, &InstrumentField_OpenDate_len 
        , &InstrumentField_ExpireDate, &InstrumentField_ExpireDate_len 
        , &InstrumentField_StartDelivDate, &InstrumentField_StartDelivDate_len 
        , &InstrumentField_EndDelivDate, &InstrumentField_EndDelivDate_len 
        , &InstrumentField_InstLifePhase 
        , &InstrumentField_IsTrading 
        , &InstrumentField_PositionType 
        , &InstrumentField_PositionDateType 
        , &InstrumentField_LongMarginRatio 
        , &InstrumentField_ShortMarginRatio 
        , &InstrumentField_MaxMarginSideAlgorithm 
        , &InstrumentField_reserve4, &InstrumentField_reserve4_len 
        , &InstrumentField_StrikePrice 
        , &InstrumentField_OptionsType 
        , &InstrumentField_UnderlyingMultiple 
        , &InstrumentField_CombinationType 
        , &InstrumentField_InstrumentID, &InstrumentField_InstrumentID_len 
        , &InstrumentField_ExchangeInstID, &InstrumentField_ExchangeInstID_len 
        , &InstrumentField_ProductID, &InstrumentField_ProductID_len 
        , &InstrumentField_UnderlyingInstrID, &InstrumentField_UnderlyingInstrID_len 


    )) {
        return -1;
    }


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( InstrumentField_reserve1 != NULL ) {
        if(InstrumentField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", InstrumentField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, InstrumentField_reserve1, InstrumentField_reserve1_len);        
        strncpy(self->data.reserve1, InstrumentField_reserve1, sizeof(self->data.reserve1) );
        InstrumentField_reserve1 = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( InstrumentField_ExchangeID != NULL ) {
        if(InstrumentField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", InstrumentField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, InstrumentField_ExchangeID, InstrumentField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, InstrumentField_ExchangeID, sizeof(self->data.ExchangeID) );
        InstrumentField_ExchangeID = NULL;
    }
            
    ///合约名称
    // TThostFtdcInstrumentNameType char[21]
    if( InstrumentField_InstrumentName != NULL ) {
        if(InstrumentField_InstrumentName_len > (Py_ssize_t)sizeof(self->data.InstrumentName)) {
            PyErr_Format(PyExc_ValueError, "InstrumentName too long: length=%zd (max allowed is %zd)", InstrumentField_InstrumentName_len, (Py_ssize_t)sizeof(self->data.InstrumentName));
            return -1;
        }
        // memset(self->data.InstrumentName, 0, sizeof(self->data.InstrumentName));
        // memcpy(self->data.InstrumentName, InstrumentField_InstrumentName, InstrumentField_InstrumentName_len);        
        strncpy(self->data.InstrumentName, InstrumentField_InstrumentName, sizeof(self->data.InstrumentName) );
        InstrumentField_InstrumentName = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    if( InstrumentField_reserve2 != NULL ) {
        if(InstrumentField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", InstrumentField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
            return -1;
        }
        // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
        // memcpy(self->data.reserve2, InstrumentField_reserve2, InstrumentField_reserve2_len);        
        strncpy(self->data.reserve2, InstrumentField_reserve2, sizeof(self->data.reserve2) );
        InstrumentField_reserve2 = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( InstrumentField_reserve3 != NULL ) {
        if(InstrumentField_reserve3_len > (Py_ssize_t)sizeof(self->data.reserve3)) {
            PyErr_Format(PyExc_ValueError, "reserve3 too long: length=%zd (max allowed is %zd)", InstrumentField_reserve3_len, (Py_ssize_t)sizeof(self->data.reserve3));
            return -1;
        }
        // memset(self->data.reserve3, 0, sizeof(self->data.reserve3));
        // memcpy(self->data.reserve3, InstrumentField_reserve3, InstrumentField_reserve3_len);        
        strncpy(self->data.reserve3, InstrumentField_reserve3, sizeof(self->data.reserve3) );
        InstrumentField_reserve3 = NULL;
    }
            
    ///产品类型
    // TThostFtdcProductClassType char
    self->data.ProductClass = InstrumentField_ProductClass;
            
    ///交割年份
    // TThostFtdcYearType int
    self->data.DeliveryYear = InstrumentField_DeliveryYear;
        
    ///交割月
    // TThostFtdcMonthType int
    self->data.DeliveryMonth = InstrumentField_DeliveryMonth;
        
    ///市价单最大下单量
    // TThostFtdcVolumeType int
    self->data.MaxMarketOrderVolume = InstrumentField_MaxMarketOrderVolume;
        
    ///市价单最小下单量
    // TThostFtdcVolumeType int
    self->data.MinMarketOrderVolume = InstrumentField_MinMarketOrderVolume;
        
    ///限价单最大下单量
    // TThostFtdcVolumeType int
    self->data.MaxLimitOrderVolume = InstrumentField_MaxLimitOrderVolume;
        
    ///限价单最小下单量
    // TThostFtdcVolumeType int
    self->data.MinLimitOrderVolume = InstrumentField_MinLimitOrderVolume;
        
    ///合约数量乘数
    // TThostFtdcVolumeMultipleType int
    self->data.VolumeMultiple = InstrumentField_VolumeMultiple;
        
    ///最小变动价位
    // TThostFtdcPriceType double
    self->data.PriceTick = InstrumentField_PriceTick;
        
    ///创建日
    // TThostFtdcDateType char[9]
    if( InstrumentField_CreateDate != NULL ) {
        if(InstrumentField_CreateDate_len > (Py_ssize_t)sizeof(self->data.CreateDate)) {
            PyErr_Format(PyExc_ValueError, "CreateDate too long: length=%zd (max allowed is %zd)", InstrumentField_CreateDate_len, (Py_ssize_t)sizeof(self->data.CreateDate));
            return -1;
        }
        // memset(self->data.CreateDate, 0, sizeof(self->data.CreateDate));
        // memcpy(self->data.CreateDate, InstrumentField_CreateDate, InstrumentField_CreateDate_len);        
        strncpy(self->data.CreateDate, InstrumentField_CreateDate, sizeof(self->data.CreateDate) );
        InstrumentField_CreateDate = NULL;
    }
            
    ///上市日
    // TThostFtdcDateType char[9]
    if( InstrumentField_OpenDate != NULL ) {
        if(InstrumentField_OpenDate_len > (Py_ssize_t)sizeof(self->data.OpenDate)) {
            PyErr_Format(PyExc_ValueError, "OpenDate too long: length=%zd (max allowed is %zd)", InstrumentField_OpenDate_len, (Py_ssize_t)sizeof(self->data.OpenDate));
            return -1;
        }
        // memset(self->data.OpenDate, 0, sizeof(self->data.OpenDate));
        // memcpy(self->data.OpenDate, InstrumentField_OpenDate, InstrumentField_OpenDate_len);        
        strncpy(self->data.OpenDate, InstrumentField_OpenDate, sizeof(self->data.OpenDate) );
        InstrumentField_OpenDate = NULL;
    }
            
    ///到期日
    // TThostFtdcDateType char[9]
    if( InstrumentField_ExpireDate != NULL ) {
        if(InstrumentField_ExpireDate_len > (Py_ssize_t)sizeof(self->data.ExpireDate)) {
            PyErr_Format(PyExc_ValueError, "ExpireDate too long: length=%zd (max allowed is %zd)", InstrumentField_ExpireDate_len, (Py_ssize_t)sizeof(self->data.ExpireDate));
            return -1;
        }
        // memset(self->data.ExpireDate, 0, sizeof(self->data.ExpireDate));
        // memcpy(self->data.ExpireDate, InstrumentField_ExpireDate, InstrumentField_ExpireDate_len);        
        strncpy(self->data.ExpireDate, InstrumentField_ExpireDate, sizeof(self->data.ExpireDate) );
        InstrumentField_ExpireDate = NULL;
    }
            
    ///开始交割日
    // TThostFtdcDateType char[9]
    if( InstrumentField_StartDelivDate != NULL ) {
        if(InstrumentField_StartDelivDate_len > (Py_ssize_t)sizeof(self->data.StartDelivDate)) {
            PyErr_Format(PyExc_ValueError, "StartDelivDate too long: length=%zd (max allowed is %zd)", InstrumentField_StartDelivDate_len, (Py_ssize_t)sizeof(self->data.StartDelivDate));
            return -1;
        }
        // memset(self->data.StartDelivDate, 0, sizeof(self->data.StartDelivDate));
        // memcpy(self->data.StartDelivDate, InstrumentField_StartDelivDate, InstrumentField_StartDelivDate_len);        
        strncpy(self->data.StartDelivDate, InstrumentField_StartDelivDate, sizeof(self->data.StartDelivDate) );
        InstrumentField_StartDelivDate = NULL;
    }
            
    ///结束交割日
    // TThostFtdcDateType char[9]
    if( InstrumentField_EndDelivDate != NULL ) {
        if(InstrumentField_EndDelivDate_len > (Py_ssize_t)sizeof(self->data.EndDelivDate)) {
            PyErr_Format(PyExc_ValueError, "EndDelivDate too long: length=%zd (max allowed is %zd)", InstrumentField_EndDelivDate_len, (Py_ssize_t)sizeof(self->data.EndDelivDate));
            return -1;
        }
        // memset(self->data.EndDelivDate, 0, sizeof(self->data.EndDelivDate));
        // memcpy(self->data.EndDelivDate, InstrumentField_EndDelivDate, InstrumentField_EndDelivDate_len);        
        strncpy(self->data.EndDelivDate, InstrumentField_EndDelivDate, sizeof(self->data.EndDelivDate) );
        InstrumentField_EndDelivDate = NULL;
    }
            
    ///合约生命周期状态
    // TThostFtdcInstLifePhaseType char
    self->data.InstLifePhase = InstrumentField_InstLifePhase;
            
    ///当前是否交易
    // TThostFtdcBoolType int
    self->data.IsTrading = InstrumentField_IsTrading;
        
    ///持仓类型
    // TThostFtdcPositionTypeType char
    self->data.PositionType = InstrumentField_PositionType;
            
    ///持仓日期类型
    // TThostFtdcPositionDateTypeType char
    self->data.PositionDateType = InstrumentField_PositionDateType;
            
    ///多头保证金率
    // TThostFtdcRatioType double
    self->data.LongMarginRatio = InstrumentField_LongMarginRatio;
        
    ///空头保证金率
    // TThostFtdcRatioType double
    self->data.ShortMarginRatio = InstrumentField_ShortMarginRatio;
        
    ///是否使用大额单边保证金算法
    // TThostFtdcMaxMarginSideAlgorithmType char
    self->data.MaxMarginSideAlgorithm = InstrumentField_MaxMarginSideAlgorithm;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( InstrumentField_reserve4 != NULL ) {
        if(InstrumentField_reserve4_len > (Py_ssize_t)sizeof(self->data.reserve4)) {
            PyErr_Format(PyExc_ValueError, "reserve4 too long: length=%zd (max allowed is %zd)", InstrumentField_reserve4_len, (Py_ssize_t)sizeof(self->data.reserve4));
            return -1;
        }
        // memset(self->data.reserve4, 0, sizeof(self->data.reserve4));
        // memcpy(self->data.reserve4, InstrumentField_reserve4, InstrumentField_reserve4_len);        
        strncpy(self->data.reserve4, InstrumentField_reserve4, sizeof(self->data.reserve4) );
        InstrumentField_reserve4 = NULL;
    }
            
    ///执行价
    // TThostFtdcPriceType double
    self->data.StrikePrice = InstrumentField_StrikePrice;
        
    ///期权类型
    // TThostFtdcOptionsTypeType char
    self->data.OptionsType = InstrumentField_OptionsType;
            
    ///合约基础商品乘数
    // TThostFtdcUnderlyingMultipleType double
    self->data.UnderlyingMultiple = InstrumentField_UnderlyingMultiple;
        
    ///组合类型
    // TThostFtdcCombinationTypeType char
    self->data.CombinationType = InstrumentField_CombinationType;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( InstrumentField_InstrumentID != NULL ) {
        if(InstrumentField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", InstrumentField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, InstrumentField_InstrumentID, InstrumentField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, InstrumentField_InstrumentID, sizeof(self->data.InstrumentID) );
        InstrumentField_InstrumentID = NULL;
    }
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    if( InstrumentField_ExchangeInstID != NULL ) {
        if(InstrumentField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", InstrumentField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
            return -1;
        }
        // memset(self->data.ExchangeInstID, 0, sizeof(self->data.ExchangeInstID));
        // memcpy(self->data.ExchangeInstID, InstrumentField_ExchangeInstID, InstrumentField_ExchangeInstID_len);        
        strncpy(self->data.ExchangeInstID, InstrumentField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
        InstrumentField_ExchangeInstID = NULL;
    }
            
    ///产品代码
    // TThostFtdcInstrumentIDType char[81]
    if( InstrumentField_ProductID != NULL ) {
        if(InstrumentField_ProductID_len > (Py_ssize_t)sizeof(self->data.ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is %zd)", InstrumentField_ProductID_len, (Py_ssize_t)sizeof(self->data.ProductID));
            return -1;
        }
        // memset(self->data.ProductID, 0, sizeof(self->data.ProductID));
        // memcpy(self->data.ProductID, InstrumentField_ProductID, InstrumentField_ProductID_len);        
        strncpy(self->data.ProductID, InstrumentField_ProductID, sizeof(self->data.ProductID) );
        InstrumentField_ProductID = NULL;
    }
            
    ///基础商品代码
    // TThostFtdcInstrumentIDType char[81]
    if( InstrumentField_UnderlyingInstrID != NULL ) {
        if(InstrumentField_UnderlyingInstrID_len > (Py_ssize_t)sizeof(self->data.UnderlyingInstrID)) {
            PyErr_Format(PyExc_ValueError, "UnderlyingInstrID too long: length=%zd (max allowed is %zd)", InstrumentField_UnderlyingInstrID_len, (Py_ssize_t)sizeof(self->data.UnderlyingInstrID));
            return -1;
        }
        // memset(self->data.UnderlyingInstrID, 0, sizeof(self->data.UnderlyingInstrID));
        // memcpy(self->data.UnderlyingInstrID, InstrumentField_UnderlyingInstrID, InstrumentField_UnderlyingInstrID_len);        
        strncpy(self->data.UnderlyingInstrID, InstrumentField_UnderlyingInstrID, sizeof(self->data.UnderlyingInstrID) );
        InstrumentField_UnderlyingInstrID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcInstrumentField_dealloc(PyCThostFtdcInstrumentField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInstrumentField_repr(PyCThostFtdcInstrumentField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:c,s:i,s:i,s:i,s:i,s:i,s:i,s:i,s:d,s:y,s:y,s:y,s:y,s:y,s:c,s:i,s:c,s:c,s:d,s:d,s:c,s:y,s:d,s:c,s:d,s:c,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:c,s:i,s:i,s:i,s:i,s:i,s:i,s:i,s:d,s:s,s:s,s:s,s:s,s:s,s:c,s:i,s:c,s:c,s:d,s:d,s:c,s:s,s:d,s:c,s:d,s:c,s:s,s:s,s:s,s:s}"
#endif

        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"InstrumentName", self->data.InstrumentName//, (Py_ssize_t)sizeof(self->data.InstrumentName) 
        ,"reserve2", self->data.reserve2//, (Py_ssize_t)sizeof(self->data.reserve2) 
        ,"reserve3", self->data.reserve3//, (Py_ssize_t)sizeof(self->data.reserve3) 
        ,"ProductClass", self->data.ProductClass 
        ,"DeliveryYear", self->data.DeliveryYear 
        ,"DeliveryMonth", self->data.DeliveryMonth 
        ,"MaxMarketOrderVolume", self->data.MaxMarketOrderVolume 
        ,"MinMarketOrderVolume", self->data.MinMarketOrderVolume 
        ,"MaxLimitOrderVolume", self->data.MaxLimitOrderVolume 
        ,"MinLimitOrderVolume", self->data.MinLimitOrderVolume 
        ,"VolumeMultiple", self->data.VolumeMultiple 
        ,"PriceTick", self->data.PriceTick 
        ,"CreateDate", self->data.CreateDate//, (Py_ssize_t)sizeof(self->data.CreateDate) 
        ,"OpenDate", self->data.OpenDate//, (Py_ssize_t)sizeof(self->data.OpenDate) 
        ,"ExpireDate", self->data.ExpireDate//, (Py_ssize_t)sizeof(self->data.ExpireDate) 
        ,"StartDelivDate", self->data.StartDelivDate//, (Py_ssize_t)sizeof(self->data.StartDelivDate) 
        ,"EndDelivDate", self->data.EndDelivDate//, (Py_ssize_t)sizeof(self->data.EndDelivDate) 
        ,"InstLifePhase", self->data.InstLifePhase 
        ,"IsTrading", self->data.IsTrading 
        ,"PositionType", self->data.PositionType 
        ,"PositionDateType", self->data.PositionDateType 
        ,"LongMarginRatio", self->data.LongMarginRatio 
        ,"ShortMarginRatio", self->data.ShortMarginRatio 
        ,"MaxMarginSideAlgorithm", self->data.MaxMarginSideAlgorithm 
        ,"reserve4", self->data.reserve4//, (Py_ssize_t)sizeof(self->data.reserve4) 
        ,"StrikePrice", self->data.StrikePrice 
        ,"OptionsType", self->data.OptionsType 
        ,"UnderlyingMultiple", self->data.UnderlyingMultiple 
        ,"CombinationType", self->data.CombinationType 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"ExchangeInstID", self->data.ExchangeInstID//, (Py_ssize_t)sizeof(self->data.ExchangeInstID) 
        ,"ProductID", self->data.ProductID//, (Py_ssize_t)sizeof(self->data.ProductID) 
        ,"UnderlyingInstrID", self->data.UnderlyingInstrID//, (Py_ssize_t)sizeof(self->data.UnderlyingInstrID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInstrumentField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcInstrumentField_get_reserve1(PyCThostFtdcInstrumentField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcInstrumentField_set_reserve1(PyCThostFtdcInstrumentField *self, PyObject* val, void *closure) {
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
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcInstrumentField_get_ExchangeID(PyCThostFtdcInstrumentField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcInstrumentField_set_ExchangeID(PyCThostFtdcInstrumentField *self, PyObject* val, void *closure) {
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
            
///合约名称
// TThostFtdcInstrumentNameType char[21]
static PyObject *PyCThostFtdcInstrumentField_get_InstrumentName(PyCThostFtdcInstrumentField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentName, (Py_ssize_t)sizeof(self->data.InstrumentName));
    return PyBytes_FromString(self->data.InstrumentName);
}

///合约名称
// TThostFtdcInstrumentNameType char[21]
static int PyCThostFtdcInstrumentField_set_InstrumentName(PyCThostFtdcInstrumentField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentName Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InstrumentName)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentName must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.InstrumentName, 0, sizeof(self->data.InstrumentName));
    // memcpy(self->data.InstrumentName, buf, len);
    strncpy(self->data.InstrumentName, buf, sizeof(self->data.InstrumentName));
    return 0;
}
            
///保留的无效字段
// TThostFtdcOldExchangeInstIDType char[31]
static PyObject *PyCThostFtdcInstrumentField_get_reserve2(PyCThostFtdcInstrumentField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve2, (Py_ssize_t)sizeof(self->data.reserve2));
    return PyBytes_FromString(self->data.reserve2);
}

///保留的无效字段
// TThostFtdcOldExchangeInstIDType char[31]
static int PyCThostFtdcInstrumentField_set_reserve2(PyCThostFtdcInstrumentField *self, PyObject* val, void *closure) {
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
            
///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcInstrumentField_get_reserve3(PyCThostFtdcInstrumentField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve3, (Py_ssize_t)sizeof(self->data.reserve3));
    return PyBytes_FromString(self->data.reserve3);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcInstrumentField_set_reserve3(PyCThostFtdcInstrumentField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "reserve3 Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.reserve3)) {
        PyErr_SetString(PyExc_ValueError, "reserve3 must be less than 31 bytes");
        return -1;
    }
    // memset(self->data.reserve3, 0, sizeof(self->data.reserve3));
    // memcpy(self->data.reserve3, buf, len);
    strncpy(self->data.reserve3, buf, sizeof(self->data.reserve3));
    return 0;
}
            
///产品类型
// TThostFtdcProductClassType char
static PyObject *PyCThostFtdcInstrumentField_get_ProductClass(PyCThostFtdcInstrumentField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ProductClass), 1);
}

///产品类型
// TThostFtdcProductClassType char
static int PyCThostFtdcInstrumentField_set_ProductClass(PyCThostFtdcInstrumentField *self, PyObject* val, void *closure) {
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
            
///交割年份
// TThostFtdcYearType int
static PyObject *PyCThostFtdcInstrumentField_get_DeliveryYear(PyCThostFtdcInstrumentField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.DeliveryYear);
#else
    return PyInt_FromLong(self->data.DeliveryYear);
#endif
}

///交割年份
// TThostFtdcYearType int
static int PyCThostFtdcInstrumentField_set_DeliveryYear(PyCThostFtdcInstrumentField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DeliveryYear Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DeliveryYear Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the DeliveryYear value out of range for C int");
        return -1;
    }
    self->data.DeliveryYear = (int)buf;
    return 0;
}
        
///交割月
// TThostFtdcMonthType int
static PyObject *PyCThostFtdcInstrumentField_get_DeliveryMonth(PyCThostFtdcInstrumentField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.DeliveryMonth);
#else
    return PyInt_FromLong(self->data.DeliveryMonth);
#endif
}

///交割月
// TThostFtdcMonthType int
static int PyCThostFtdcInstrumentField_set_DeliveryMonth(PyCThostFtdcInstrumentField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DeliveryMonth Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DeliveryMonth Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the DeliveryMonth value out of range for C int");
        return -1;
    }
    self->data.DeliveryMonth = (int)buf;
    return 0;
}
        
///市价单最大下单量
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcInstrumentField_get_MaxMarketOrderVolume(PyCThostFtdcInstrumentField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.MaxMarketOrderVolume);
#else
    return PyInt_FromLong(self->data.MaxMarketOrderVolume);
#endif
}

///市价单最大下单量
// TThostFtdcVolumeType int
static int PyCThostFtdcInstrumentField_set_MaxMarketOrderVolume(PyCThostFtdcInstrumentField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInstrumentField_get_MinMarketOrderVolume(PyCThostFtdcInstrumentField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.MinMarketOrderVolume);
#else
    return PyInt_FromLong(self->data.MinMarketOrderVolume);
#endif
}

///市价单最小下单量
// TThostFtdcVolumeType int
static int PyCThostFtdcInstrumentField_set_MinMarketOrderVolume(PyCThostFtdcInstrumentField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInstrumentField_get_MaxLimitOrderVolume(PyCThostFtdcInstrumentField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.MaxLimitOrderVolume);
#else
    return PyInt_FromLong(self->data.MaxLimitOrderVolume);
#endif
}

///限价单最大下单量
// TThostFtdcVolumeType int
static int PyCThostFtdcInstrumentField_set_MaxLimitOrderVolume(PyCThostFtdcInstrumentField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInstrumentField_get_MinLimitOrderVolume(PyCThostFtdcInstrumentField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.MinLimitOrderVolume);
#else
    return PyInt_FromLong(self->data.MinLimitOrderVolume);
#endif
}

///限价单最小下单量
// TThostFtdcVolumeType int
static int PyCThostFtdcInstrumentField_set_MinLimitOrderVolume(PyCThostFtdcInstrumentField *self, PyObject* val, void *closure) {
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
        
///合约数量乘数
// TThostFtdcVolumeMultipleType int
static PyObject *PyCThostFtdcInstrumentField_get_VolumeMultiple(PyCThostFtdcInstrumentField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.VolumeMultiple);
#else
    return PyInt_FromLong(self->data.VolumeMultiple);
#endif
}

///合约数量乘数
// TThostFtdcVolumeMultipleType int
static int PyCThostFtdcInstrumentField_set_VolumeMultiple(PyCThostFtdcInstrumentField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInstrumentField_get_PriceTick(PyCThostFtdcInstrumentField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PriceTick);
}

///最小变动价位
// TThostFtdcPriceType double
static int PyCThostFtdcInstrumentField_set_PriceTick(PyCThostFtdcInstrumentField *self, PyObject* val, void *closure) {
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
        
///创建日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcInstrumentField_get_CreateDate(PyCThostFtdcInstrumentField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CreateDate, (Py_ssize_t)sizeof(self->data.CreateDate));
    return PyBytes_FromString(self->data.CreateDate);
}

///创建日
// TThostFtdcDateType char[9]
static int PyCThostFtdcInstrumentField_set_CreateDate(PyCThostFtdcInstrumentField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CreateDate Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CreateDate)) {
        PyErr_SetString(PyExc_ValueError, "CreateDate must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.CreateDate, 0, sizeof(self->data.CreateDate));
    // memcpy(self->data.CreateDate, buf, len);
    strncpy(self->data.CreateDate, buf, sizeof(self->data.CreateDate));
    return 0;
}
            
///上市日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcInstrumentField_get_OpenDate(PyCThostFtdcInstrumentField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OpenDate, (Py_ssize_t)sizeof(self->data.OpenDate));
    return PyBytes_FromString(self->data.OpenDate);
}

///上市日
// TThostFtdcDateType char[9]
static int PyCThostFtdcInstrumentField_set_OpenDate(PyCThostFtdcInstrumentField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OpenDate Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OpenDate)) {
        PyErr_SetString(PyExc_ValueError, "OpenDate must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.OpenDate, 0, sizeof(self->data.OpenDate));
    // memcpy(self->data.OpenDate, buf, len);
    strncpy(self->data.OpenDate, buf, sizeof(self->data.OpenDate));
    return 0;
}
            
///到期日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcInstrumentField_get_ExpireDate(PyCThostFtdcInstrumentField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExpireDate, (Py_ssize_t)sizeof(self->data.ExpireDate));
    return PyBytes_FromString(self->data.ExpireDate);
}

///到期日
// TThostFtdcDateType char[9]
static int PyCThostFtdcInstrumentField_set_ExpireDate(PyCThostFtdcInstrumentField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExpireDate Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ExpireDate)) {
        PyErr_SetString(PyExc_ValueError, "ExpireDate must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.ExpireDate, 0, sizeof(self->data.ExpireDate));
    // memcpy(self->data.ExpireDate, buf, len);
    strncpy(self->data.ExpireDate, buf, sizeof(self->data.ExpireDate));
    return 0;
}
            
///开始交割日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcInstrumentField_get_StartDelivDate(PyCThostFtdcInstrumentField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.StartDelivDate, (Py_ssize_t)sizeof(self->data.StartDelivDate));
    return PyBytes_FromString(self->data.StartDelivDate);
}

///开始交割日
// TThostFtdcDateType char[9]
static int PyCThostFtdcInstrumentField_set_StartDelivDate(PyCThostFtdcInstrumentField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "StartDelivDate Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.StartDelivDate)) {
        PyErr_SetString(PyExc_ValueError, "StartDelivDate must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.StartDelivDate, 0, sizeof(self->data.StartDelivDate));
    // memcpy(self->data.StartDelivDate, buf, len);
    strncpy(self->data.StartDelivDate, buf, sizeof(self->data.StartDelivDate));
    return 0;
}
            
///结束交割日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcInstrumentField_get_EndDelivDate(PyCThostFtdcInstrumentField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.EndDelivDate, (Py_ssize_t)sizeof(self->data.EndDelivDate));
    return PyBytes_FromString(self->data.EndDelivDate);
}

///结束交割日
// TThostFtdcDateType char[9]
static int PyCThostFtdcInstrumentField_set_EndDelivDate(PyCThostFtdcInstrumentField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "EndDelivDate Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.EndDelivDate)) {
        PyErr_SetString(PyExc_ValueError, "EndDelivDate must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.EndDelivDate, 0, sizeof(self->data.EndDelivDate));
    // memcpy(self->data.EndDelivDate, buf, len);
    strncpy(self->data.EndDelivDate, buf, sizeof(self->data.EndDelivDate));
    return 0;
}
            
///合约生命周期状态
// TThostFtdcInstLifePhaseType char
static PyObject *PyCThostFtdcInstrumentField_get_InstLifePhase(PyCThostFtdcInstrumentField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.InstLifePhase), 1);
}

///合约生命周期状态
// TThostFtdcInstLifePhaseType char
static int PyCThostFtdcInstrumentField_set_InstLifePhase(PyCThostFtdcInstrumentField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InstLifePhase Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InstLifePhase)) {
        PyErr_SetString(PyExc_ValueError, "InstLifePhase must be equal 1 bytes");
        return -1;
    }
    self->data.InstLifePhase = *buf;
    return 0;
}
            
///当前是否交易
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcInstrumentField_get_IsTrading(PyCThostFtdcInstrumentField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsTrading);
#else
    return PyInt_FromLong(self->data.IsTrading);
#endif
}

///当前是否交易
// TThostFtdcBoolType int
static int PyCThostFtdcInstrumentField_set_IsTrading(PyCThostFtdcInstrumentField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsTrading Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsTrading Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the IsTrading value out of range for C int");
        return -1;
    }
    self->data.IsTrading = (int)buf;
    return 0;
}
        
///持仓类型
// TThostFtdcPositionTypeType char
static PyObject *PyCThostFtdcInstrumentField_get_PositionType(PyCThostFtdcInstrumentField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.PositionType), 1);
}

///持仓类型
// TThostFtdcPositionTypeType char
static int PyCThostFtdcInstrumentField_set_PositionType(PyCThostFtdcInstrumentField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInstrumentField_get_PositionDateType(PyCThostFtdcInstrumentField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.PositionDateType), 1);
}

///持仓日期类型
// TThostFtdcPositionDateTypeType char
static int PyCThostFtdcInstrumentField_set_PositionDateType(PyCThostFtdcInstrumentField *self, PyObject* val, void *closure) {
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
            
///多头保证金率
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcInstrumentField_get_LongMarginRatio(PyCThostFtdcInstrumentField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LongMarginRatio);
}

///多头保证金率
// TThostFtdcRatioType double
static int PyCThostFtdcInstrumentField_set_LongMarginRatio(PyCThostFtdcInstrumentField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LongMarginRatio Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LongMarginRatio = buf;
    return 0;
}
        
///空头保证金率
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcInstrumentField_get_ShortMarginRatio(PyCThostFtdcInstrumentField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ShortMarginRatio);
}

///空头保证金率
// TThostFtdcRatioType double
static int PyCThostFtdcInstrumentField_set_ShortMarginRatio(PyCThostFtdcInstrumentField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ShortMarginRatio Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ShortMarginRatio = buf;
    return 0;
}
        
///是否使用大额单边保证金算法
// TThostFtdcMaxMarginSideAlgorithmType char
static PyObject *PyCThostFtdcInstrumentField_get_MaxMarginSideAlgorithm(PyCThostFtdcInstrumentField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.MaxMarginSideAlgorithm), 1);
}

///是否使用大额单边保证金算法
// TThostFtdcMaxMarginSideAlgorithmType char
static int PyCThostFtdcInstrumentField_set_MaxMarginSideAlgorithm(PyCThostFtdcInstrumentField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MaxMarginSideAlgorithm Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.MaxMarginSideAlgorithm)) {
        PyErr_SetString(PyExc_ValueError, "MaxMarginSideAlgorithm must be equal 1 bytes");
        return -1;
    }
    self->data.MaxMarginSideAlgorithm = *buf;
    return 0;
}
            
///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcInstrumentField_get_reserve4(PyCThostFtdcInstrumentField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve4, (Py_ssize_t)sizeof(self->data.reserve4));
    return PyBytes_FromString(self->data.reserve4);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcInstrumentField_set_reserve4(PyCThostFtdcInstrumentField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "reserve4 Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.reserve4)) {
        PyErr_SetString(PyExc_ValueError, "reserve4 must be less than 31 bytes");
        return -1;
    }
    // memset(self->data.reserve4, 0, sizeof(self->data.reserve4));
    // memcpy(self->data.reserve4, buf, len);
    strncpy(self->data.reserve4, buf, sizeof(self->data.reserve4));
    return 0;
}
            
///执行价
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcInstrumentField_get_StrikePrice(PyCThostFtdcInstrumentField *self, void *closure) {
    return PyFloat_FromDouble(self->data.StrikePrice);
}

///执行价
// TThostFtdcPriceType double
static int PyCThostFtdcInstrumentField_set_StrikePrice(PyCThostFtdcInstrumentField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "StrikePrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.StrikePrice = buf;
    return 0;
}
        
///期权类型
// TThostFtdcOptionsTypeType char
static PyObject *PyCThostFtdcInstrumentField_get_OptionsType(PyCThostFtdcInstrumentField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OptionsType), 1);
}

///期权类型
// TThostFtdcOptionsTypeType char
static int PyCThostFtdcInstrumentField_set_OptionsType(PyCThostFtdcInstrumentField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OptionsType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OptionsType)) {
        PyErr_SetString(PyExc_ValueError, "OptionsType must be equal 1 bytes");
        return -1;
    }
    self->data.OptionsType = *buf;
    return 0;
}
            
///合约基础商品乘数
// TThostFtdcUnderlyingMultipleType double
static PyObject *PyCThostFtdcInstrumentField_get_UnderlyingMultiple(PyCThostFtdcInstrumentField *self, void *closure) {
    return PyFloat_FromDouble(self->data.UnderlyingMultiple);
}

///合约基础商品乘数
// TThostFtdcUnderlyingMultipleType double
static int PyCThostFtdcInstrumentField_set_UnderlyingMultiple(PyCThostFtdcInstrumentField *self, PyObject* val, void *closure) {
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
        
///组合类型
// TThostFtdcCombinationTypeType char
static PyObject *PyCThostFtdcInstrumentField_get_CombinationType(PyCThostFtdcInstrumentField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.CombinationType), 1);
}

///组合类型
// TThostFtdcCombinationTypeType char
static int PyCThostFtdcInstrumentField_set_CombinationType(PyCThostFtdcInstrumentField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CombinationType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CombinationType)) {
        PyErr_SetString(PyExc_ValueError, "CombinationType must be equal 1 bytes");
        return -1;
    }
    self->data.CombinationType = *buf;
    return 0;
}
            
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcInstrumentField_get_InstrumentID(PyCThostFtdcInstrumentField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcInstrumentField_set_InstrumentID(PyCThostFtdcInstrumentField *self, PyObject* val, void *closure) {
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
            
///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static PyObject *PyCThostFtdcInstrumentField_get_ExchangeInstID(PyCThostFtdcInstrumentField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeInstID, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
    return PyBytes_FromString(self->data.ExchangeInstID);
}

///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static int PyCThostFtdcInstrumentField_set_ExchangeInstID(PyCThostFtdcInstrumentField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.ExchangeInstID, 0, sizeof(self->data.ExchangeInstID));
    // memcpy(self->data.ExchangeInstID, buf, len);
    strncpy(self->data.ExchangeInstID, buf, sizeof(self->data.ExchangeInstID));
    return 0;
}
            
///产品代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcInstrumentField_get_ProductID(PyCThostFtdcInstrumentField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProductID, (Py_ssize_t)sizeof(self->data.ProductID));
    return PyBytes_FromString(self->data.ProductID);
}

///产品代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcInstrumentField_set_ProductID(PyCThostFtdcInstrumentField *self, PyObject* val, void *closure) {
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
            
///基础商品代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcInstrumentField_get_UnderlyingInstrID(PyCThostFtdcInstrumentField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UnderlyingInstrID, (Py_ssize_t)sizeof(self->data.UnderlyingInstrID));
    return PyBytes_FromString(self->data.UnderlyingInstrID);
}

///基础商品代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcInstrumentField_set_UnderlyingInstrID(PyCThostFtdcInstrumentField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UnderlyingInstrID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.UnderlyingInstrID)) {
        PyErr_SetString(PyExc_ValueError, "UnderlyingInstrID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.UnderlyingInstrID, 0, sizeof(self->data.UnderlyingInstrID));
    // memcpy(self->data.UnderlyingInstrID, buf, len);
    strncpy(self->data.UnderlyingInstrID, buf, sizeof(self->data.UnderlyingInstrID));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcInstrumentField_getset[] = {
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcInstrumentField_get_reserve1, (setter)PyCThostFtdcInstrumentField_set_reserve1, (char *)"reserve1", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcInstrumentField_get_ExchangeID, (setter)PyCThostFtdcInstrumentField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///合约名称 
    {(char *)"InstrumentName", (getter)PyCThostFtdcInstrumentField_get_InstrumentName, (setter)PyCThostFtdcInstrumentField_set_InstrumentName, (char *)"InstrumentName", NULL},
    ///保留的无效字段 
    {(char *)"reserve2", (getter)PyCThostFtdcInstrumentField_get_reserve2, (setter)PyCThostFtdcInstrumentField_set_reserve2, (char *)"reserve2", NULL},
    ///保留的无效字段 
    {(char *)"reserve3", (getter)PyCThostFtdcInstrumentField_get_reserve3, (setter)PyCThostFtdcInstrumentField_set_reserve3, (char *)"reserve3", NULL},
    ///产品类型 
    {(char *)"ProductClass", (getter)PyCThostFtdcInstrumentField_get_ProductClass, (setter)PyCThostFtdcInstrumentField_set_ProductClass, (char *)"ProductClass", NULL},
    ///交割年份 
    {(char *)"DeliveryYear", (getter)PyCThostFtdcInstrumentField_get_DeliveryYear, (setter)PyCThostFtdcInstrumentField_set_DeliveryYear, (char *)"DeliveryYear", NULL},
    ///交割月 
    {(char *)"DeliveryMonth", (getter)PyCThostFtdcInstrumentField_get_DeliveryMonth, (setter)PyCThostFtdcInstrumentField_set_DeliveryMonth, (char *)"DeliveryMonth", NULL},
    ///市价单最大下单量 
    {(char *)"MaxMarketOrderVolume", (getter)PyCThostFtdcInstrumentField_get_MaxMarketOrderVolume, (setter)PyCThostFtdcInstrumentField_set_MaxMarketOrderVolume, (char *)"MaxMarketOrderVolume", NULL},
    ///市价单最小下单量 
    {(char *)"MinMarketOrderVolume", (getter)PyCThostFtdcInstrumentField_get_MinMarketOrderVolume, (setter)PyCThostFtdcInstrumentField_set_MinMarketOrderVolume, (char *)"MinMarketOrderVolume", NULL},
    ///限价单最大下单量 
    {(char *)"MaxLimitOrderVolume", (getter)PyCThostFtdcInstrumentField_get_MaxLimitOrderVolume, (setter)PyCThostFtdcInstrumentField_set_MaxLimitOrderVolume, (char *)"MaxLimitOrderVolume", NULL},
    ///限价单最小下单量 
    {(char *)"MinLimitOrderVolume", (getter)PyCThostFtdcInstrumentField_get_MinLimitOrderVolume, (setter)PyCThostFtdcInstrumentField_set_MinLimitOrderVolume, (char *)"MinLimitOrderVolume", NULL},
    ///合约数量乘数 
    {(char *)"VolumeMultiple", (getter)PyCThostFtdcInstrumentField_get_VolumeMultiple, (setter)PyCThostFtdcInstrumentField_set_VolumeMultiple, (char *)"VolumeMultiple", NULL},
    ///最小变动价位 
    {(char *)"PriceTick", (getter)PyCThostFtdcInstrumentField_get_PriceTick, (setter)PyCThostFtdcInstrumentField_set_PriceTick, (char *)"PriceTick", NULL},
    ///创建日 
    {(char *)"CreateDate", (getter)PyCThostFtdcInstrumentField_get_CreateDate, (setter)PyCThostFtdcInstrumentField_set_CreateDate, (char *)"CreateDate", NULL},
    ///上市日 
    {(char *)"OpenDate", (getter)PyCThostFtdcInstrumentField_get_OpenDate, (setter)PyCThostFtdcInstrumentField_set_OpenDate, (char *)"OpenDate", NULL},
    ///到期日 
    {(char *)"ExpireDate", (getter)PyCThostFtdcInstrumentField_get_ExpireDate, (setter)PyCThostFtdcInstrumentField_set_ExpireDate, (char *)"ExpireDate", NULL},
    ///开始交割日 
    {(char *)"StartDelivDate", (getter)PyCThostFtdcInstrumentField_get_StartDelivDate, (setter)PyCThostFtdcInstrumentField_set_StartDelivDate, (char *)"StartDelivDate", NULL},
    ///结束交割日 
    {(char *)"EndDelivDate", (getter)PyCThostFtdcInstrumentField_get_EndDelivDate, (setter)PyCThostFtdcInstrumentField_set_EndDelivDate, (char *)"EndDelivDate", NULL},
    ///合约生命周期状态 
    {(char *)"InstLifePhase", (getter)PyCThostFtdcInstrumentField_get_InstLifePhase, (setter)PyCThostFtdcInstrumentField_set_InstLifePhase, (char *)"InstLifePhase", NULL},
    ///当前是否交易 
    {(char *)"IsTrading", (getter)PyCThostFtdcInstrumentField_get_IsTrading, (setter)PyCThostFtdcInstrumentField_set_IsTrading, (char *)"IsTrading", NULL},
    ///持仓类型 
    {(char *)"PositionType", (getter)PyCThostFtdcInstrumentField_get_PositionType, (setter)PyCThostFtdcInstrumentField_set_PositionType, (char *)"PositionType", NULL},
    ///持仓日期类型 
    {(char *)"PositionDateType", (getter)PyCThostFtdcInstrumentField_get_PositionDateType, (setter)PyCThostFtdcInstrumentField_set_PositionDateType, (char *)"PositionDateType", NULL},
    ///多头保证金率 
    {(char *)"LongMarginRatio", (getter)PyCThostFtdcInstrumentField_get_LongMarginRatio, (setter)PyCThostFtdcInstrumentField_set_LongMarginRatio, (char *)"LongMarginRatio", NULL},
    ///空头保证金率 
    {(char *)"ShortMarginRatio", (getter)PyCThostFtdcInstrumentField_get_ShortMarginRatio, (setter)PyCThostFtdcInstrumentField_set_ShortMarginRatio, (char *)"ShortMarginRatio", NULL},
    ///是否使用大额单边保证金算法 
    {(char *)"MaxMarginSideAlgorithm", (getter)PyCThostFtdcInstrumentField_get_MaxMarginSideAlgorithm, (setter)PyCThostFtdcInstrumentField_set_MaxMarginSideAlgorithm, (char *)"MaxMarginSideAlgorithm", NULL},
    ///保留的无效字段 
    {(char *)"reserve4", (getter)PyCThostFtdcInstrumentField_get_reserve4, (setter)PyCThostFtdcInstrumentField_set_reserve4, (char *)"reserve4", NULL},
    ///执行价 
    {(char *)"StrikePrice", (getter)PyCThostFtdcInstrumentField_get_StrikePrice, (setter)PyCThostFtdcInstrumentField_set_StrikePrice, (char *)"StrikePrice", NULL},
    ///期权类型 
    {(char *)"OptionsType", (getter)PyCThostFtdcInstrumentField_get_OptionsType, (setter)PyCThostFtdcInstrumentField_set_OptionsType, (char *)"OptionsType", NULL},
    ///合约基础商品乘数 
    {(char *)"UnderlyingMultiple", (getter)PyCThostFtdcInstrumentField_get_UnderlyingMultiple, (setter)PyCThostFtdcInstrumentField_set_UnderlyingMultiple, (char *)"UnderlyingMultiple", NULL},
    ///组合类型 
    {(char *)"CombinationType", (getter)PyCThostFtdcInstrumentField_get_CombinationType, (setter)PyCThostFtdcInstrumentField_set_CombinationType, (char *)"CombinationType", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcInstrumentField_get_InstrumentID, (setter)PyCThostFtdcInstrumentField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///合约在交易所的代码 
    {(char *)"ExchangeInstID", (getter)PyCThostFtdcInstrumentField_get_ExchangeInstID, (setter)PyCThostFtdcInstrumentField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
    ///产品代码 
    {(char *)"ProductID", (getter)PyCThostFtdcInstrumentField_get_ProductID, (setter)PyCThostFtdcInstrumentField_set_ProductID, (char *)"ProductID", NULL},
    ///基础商品代码 
    {(char *)"UnderlyingInstrID", (getter)PyCThostFtdcInstrumentField_get_UnderlyingInstrID, (setter)PyCThostFtdcInstrumentField_set_UnderlyingInstrID, (char *)"UnderlyingInstrID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInstrumentFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInstrumentField",	/* tp_name */
	sizeof(PyCThostFtdcInstrumentField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInstrumentField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInstrumentField_repr,   /* tp_repr */
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
	"CThostFtdcInstrumentField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInstrumentField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInstrumentField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInstrumentField_new,       /* tp_new */
};

int PyCThostFtdcInstrumentFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInstrumentField  */
	if (PyType_Ready(&PyCThostFtdcInstrumentFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInstrumentField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInstrumentFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInstrumentField", (PyObject *)&PyCThostFtdcInstrumentFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInstrumentField to module");
        Py_DECREF(&PyCThostFtdcInstrumentFieldType);
		return -1;
    }

    return 0;
}
