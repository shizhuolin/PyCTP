
#include "PyCThostFtdcInstrumentField.h"

///合约

static int PyCThostFtdcInstrumentFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "reserve1", "ExchangeID", "InstrumentName", "reserve2", "reserve3", "ProductClass", "DeliveryYear", "DeliveryMonth", "MaxMarketOrderVolume", "MinMarketOrderVolume", "MaxLimitOrderVolume", "MinLimitOrderVolume", "VolumeMultiple", "PriceTick", "CreateDate", "OpenDate", "ExpireDate", "StartDelivDate", "EndDelivDate", "InstLifePhase", "IsTrading", "PositionType", "PositionDateType", "LongMarginRatio", "ShortMarginRatio", "MaxMarginSideAlgorithm", "reserve4", "StrikePrice", "OptionsType", "UnderlyingMultiple", "CombinationType", "InstrumentID", "ExchangeInstID", "ProductID", "UnderlyingInstrID", NULL };


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcInstrumentField_reserve1 = NULL;
    Py_ssize_t CThostFtdcInstrumentField_reserve1_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcInstrumentField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcInstrumentField_ExchangeID_length = 0;

    /// 合约名称
    /// typedef char TThostFtdcInstrumentNameType[21]
    char *CThostFtdcInstrumentField_InstrumentName = NULL;
    Py_ssize_t CThostFtdcInstrumentField_InstrumentName_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    char *CThostFtdcInstrumentField_reserve2 = NULL;
    Py_ssize_t CThostFtdcInstrumentField_reserve2_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcInstrumentField_reserve3 = NULL;
    Py_ssize_t CThostFtdcInstrumentField_reserve3_length = 0;

    /// 产品类型
    /// typedef char TThostFtdcProductClassType
    char CThostFtdcInstrumentField_ProductClass = 0;

    /// 交割年份
    /// typedef int TThostFtdcYearType
    int CThostFtdcInstrumentField_DeliveryYear = 0;

    /// 交割月
    /// typedef int TThostFtdcMonthType
    int CThostFtdcInstrumentField_DeliveryMonth = 0;

    /// 市价单最大下单量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcInstrumentField_MaxMarketOrderVolume = 0;

    /// 市价单最小下单量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcInstrumentField_MinMarketOrderVolume = 0;

    /// 限价单最大下单量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcInstrumentField_MaxLimitOrderVolume = 0;

    /// 限价单最小下单量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcInstrumentField_MinLimitOrderVolume = 0;

    /// 合约数量乘数
    /// typedef int TThostFtdcVolumeMultipleType
    int CThostFtdcInstrumentField_VolumeMultiple = 0;

    /// 最小变动价位
    /// typedef double TThostFtdcPriceType
    double CThostFtdcInstrumentField_PriceTick = 0.0;

    /// 创建日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcInstrumentField_CreateDate = NULL;
    Py_ssize_t CThostFtdcInstrumentField_CreateDate_length = 0;

    /// 上市日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcInstrumentField_OpenDate = NULL;
    Py_ssize_t CThostFtdcInstrumentField_OpenDate_length = 0;

    /// 到期日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcInstrumentField_ExpireDate = NULL;
    Py_ssize_t CThostFtdcInstrumentField_ExpireDate_length = 0;

    /// 开始交割日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcInstrumentField_StartDelivDate = NULL;
    Py_ssize_t CThostFtdcInstrumentField_StartDelivDate_length = 0;

    /// 结束交割日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcInstrumentField_EndDelivDate = NULL;
    Py_ssize_t CThostFtdcInstrumentField_EndDelivDate_length = 0;

    /// 合约生命周期状态
    /// typedef char TThostFtdcInstLifePhaseType
    char CThostFtdcInstrumentField_InstLifePhase = 0;

    /// 当前是否交易
    /// typedef int TThostFtdcBoolType
    int CThostFtdcInstrumentField_IsTrading = 0;

    /// 持仓类型
    /// typedef char TThostFtdcPositionTypeType
    char CThostFtdcInstrumentField_PositionType = 0;

    /// 持仓日期类型
    /// typedef char TThostFtdcPositionDateTypeType
    char CThostFtdcInstrumentField_PositionDateType = 0;

    /// 多头保证金率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcInstrumentField_LongMarginRatio = 0.0;

    /// 空头保证金率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcInstrumentField_ShortMarginRatio = 0.0;

    /// 是否使用大额单边保证金算法
    /// typedef char TThostFtdcMaxMarginSideAlgorithmType
    char CThostFtdcInstrumentField_MaxMarginSideAlgorithm = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcInstrumentField_reserve4 = NULL;
    Py_ssize_t CThostFtdcInstrumentField_reserve4_length = 0;

    /// 执行价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcInstrumentField_StrikePrice = 0.0;

    /// 期权类型
    /// typedef char TThostFtdcOptionsTypeType
    char CThostFtdcInstrumentField_OptionsType = 0;

    /// 合约基础商品乘数
    /// typedef double TThostFtdcUnderlyingMultipleType
    double CThostFtdcInstrumentField_UnderlyingMultiple = 0.0;

    /// 组合类型
    /// typedef char TThostFtdcCombinationTypeType
    char CThostFtdcInstrumentField_CombinationType = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcInstrumentField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcInstrumentField_InstrumentID_length = 0;

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    char *CThostFtdcInstrumentField_ExchangeInstID = NULL;
    Py_ssize_t CThostFtdcInstrumentField_ExchangeInstID_length = 0;

    /// 产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcInstrumentField_ProductID = NULL;
    Py_ssize_t CThostFtdcInstrumentField_ProductID_length = 0;

    /// 基础商品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcInstrumentField_UnderlyingInstrID = NULL;
    Py_ssize_t CThostFtdcInstrumentField_UnderlyingInstrID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#ciiiiiiidy#y#y#y#y#ciccddcy#dcdcy#y#y#y#", (char **)kwlist
        , &CThostFtdcInstrumentField_reserve1, &CThostFtdcInstrumentField_reserve1_length
        , &CThostFtdcInstrumentField_ExchangeID, &CThostFtdcInstrumentField_ExchangeID_length
        , &CThostFtdcInstrumentField_InstrumentName, &CThostFtdcInstrumentField_InstrumentName_length
        , &CThostFtdcInstrumentField_reserve2, &CThostFtdcInstrumentField_reserve2_length
        , &CThostFtdcInstrumentField_reserve3, &CThostFtdcInstrumentField_reserve3_length
        , &CThostFtdcInstrumentField_ProductClass
        , &CThostFtdcInstrumentField_DeliveryYear
        , &CThostFtdcInstrumentField_DeliveryMonth
        , &CThostFtdcInstrumentField_MaxMarketOrderVolume
        , &CThostFtdcInstrumentField_MinMarketOrderVolume
        , &CThostFtdcInstrumentField_MaxLimitOrderVolume
        , &CThostFtdcInstrumentField_MinLimitOrderVolume
        , &CThostFtdcInstrumentField_VolumeMultiple
        , &CThostFtdcInstrumentField_PriceTick
        , &CThostFtdcInstrumentField_CreateDate, &CThostFtdcInstrumentField_CreateDate_length
        , &CThostFtdcInstrumentField_OpenDate, &CThostFtdcInstrumentField_OpenDate_length
        , &CThostFtdcInstrumentField_ExpireDate, &CThostFtdcInstrumentField_ExpireDate_length
        , &CThostFtdcInstrumentField_StartDelivDate, &CThostFtdcInstrumentField_StartDelivDate_length
        , &CThostFtdcInstrumentField_EndDelivDate, &CThostFtdcInstrumentField_EndDelivDate_length
        , &CThostFtdcInstrumentField_InstLifePhase
        , &CThostFtdcInstrumentField_IsTrading
        , &CThostFtdcInstrumentField_PositionType
        , &CThostFtdcInstrumentField_PositionDateType
        , &CThostFtdcInstrumentField_LongMarginRatio
        , &CThostFtdcInstrumentField_ShortMarginRatio
        , &CThostFtdcInstrumentField_MaxMarginSideAlgorithm
        , &CThostFtdcInstrumentField_reserve4, &CThostFtdcInstrumentField_reserve4_length
        , &CThostFtdcInstrumentField_StrikePrice
        , &CThostFtdcInstrumentField_OptionsType
        , &CThostFtdcInstrumentField_UnderlyingMultiple
        , &CThostFtdcInstrumentField_CombinationType
        , &CThostFtdcInstrumentField_InstrumentID, &CThostFtdcInstrumentField_InstrumentID_length
        , &CThostFtdcInstrumentField_ExchangeInstID, &CThostFtdcInstrumentField_ExchangeInstID_length
        , &CThostFtdcInstrumentField_ProductID, &CThostFtdcInstrumentField_ProductID_length
        , &CThostFtdcInstrumentField_UnderlyingInstrID, &CThostFtdcInstrumentField_UnderlyingInstrID_length
    )) {
        return -1;
    }

    PyCThostFtdcInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(self);
    CThostFtdcInstrumentField *data = &(extra->data);


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcInstrumentField_reserve1 != NULL ) {
        if(CThostFtdcInstrumentField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcInstrumentField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcInstrumentField_reserve1, CThostFtdcInstrumentField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcInstrumentField_reserve1, sizeof(data->reserve1));
        CThostFtdcInstrumentField_reserve1 = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcInstrumentField_ExchangeID != NULL ) {
        if(CThostFtdcInstrumentField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcInstrumentField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcInstrumentField_ExchangeID, CThostFtdcInstrumentField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcInstrumentField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcInstrumentField_ExchangeID = NULL;
    }

    /// 合约名称
    /// typedef char TThostFtdcInstrumentNameType[21]
    if( CThostFtdcInstrumentField_InstrumentName != NULL ) {
        if(CThostFtdcInstrumentField_InstrumentName_length >= (Py_ssize_t)sizeof(data->InstrumentName)) {
            PyErr_Format(PyExc_ValueError, "InstrumentName too long: length=%zd (max allowed is 20)", CThostFtdcInstrumentField_InstrumentName_length);
            return -1;
        }
        // memset(data->InstrumentName, 0, sizeof(data->InstrumentName));
        // memcpy(data->InstrumentName, CThostFtdcInstrumentField_InstrumentName, CThostFtdcInstrumentField_InstrumentName_length);
        strncpy(data->InstrumentName, CThostFtdcInstrumentField_InstrumentName, sizeof(data->InstrumentName));
        CThostFtdcInstrumentField_InstrumentName = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    if( CThostFtdcInstrumentField_reserve2 != NULL ) {
        if(CThostFtdcInstrumentField_reserve2_length >= (Py_ssize_t)sizeof(data->reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is 30)", CThostFtdcInstrumentField_reserve2_length);
            return -1;
        }
        // memset(data->reserve2, 0, sizeof(data->reserve2));
        // memcpy(data->reserve2, CThostFtdcInstrumentField_reserve2, CThostFtdcInstrumentField_reserve2_length);
        strncpy(data->reserve2, CThostFtdcInstrumentField_reserve2, sizeof(data->reserve2));
        CThostFtdcInstrumentField_reserve2 = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcInstrumentField_reserve3 != NULL ) {
        if(CThostFtdcInstrumentField_reserve3_length >= (Py_ssize_t)sizeof(data->reserve3)) {
            PyErr_Format(PyExc_ValueError, "reserve3 too long: length=%zd (max allowed is 30)", CThostFtdcInstrumentField_reserve3_length);
            return -1;
        }
        // memset(data->reserve3, 0, sizeof(data->reserve3));
        // memcpy(data->reserve3, CThostFtdcInstrumentField_reserve3, CThostFtdcInstrumentField_reserve3_length);
        strncpy(data->reserve3, CThostFtdcInstrumentField_reserve3, sizeof(data->reserve3));
        CThostFtdcInstrumentField_reserve3 = NULL;
    }

    /// 产品类型
    /// typedef char TThostFtdcProductClassType
    data->ProductClass = CThostFtdcInstrumentField_ProductClass;

    /// 交割年份
    /// typedef int TThostFtdcYearType
    data->DeliveryYear = CThostFtdcInstrumentField_DeliveryYear;

    /// 交割月
    /// typedef int TThostFtdcMonthType
    data->DeliveryMonth = CThostFtdcInstrumentField_DeliveryMonth;

    /// 市价单最大下单量
    /// typedef int TThostFtdcVolumeType
    data->MaxMarketOrderVolume = CThostFtdcInstrumentField_MaxMarketOrderVolume;

    /// 市价单最小下单量
    /// typedef int TThostFtdcVolumeType
    data->MinMarketOrderVolume = CThostFtdcInstrumentField_MinMarketOrderVolume;

    /// 限价单最大下单量
    /// typedef int TThostFtdcVolumeType
    data->MaxLimitOrderVolume = CThostFtdcInstrumentField_MaxLimitOrderVolume;

    /// 限价单最小下单量
    /// typedef int TThostFtdcVolumeType
    data->MinLimitOrderVolume = CThostFtdcInstrumentField_MinLimitOrderVolume;

    /// 合约数量乘数
    /// typedef int TThostFtdcVolumeMultipleType
    data->VolumeMultiple = CThostFtdcInstrumentField_VolumeMultiple;

    /// 最小变动价位
    /// typedef double TThostFtdcPriceType
    data->PriceTick = CThostFtdcInstrumentField_PriceTick;

    /// 创建日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcInstrumentField_CreateDate != NULL ) {
        if(CThostFtdcInstrumentField_CreateDate_length >= (Py_ssize_t)sizeof(data->CreateDate)) {
            PyErr_Format(PyExc_ValueError, "CreateDate too long: length=%zd (max allowed is 8)", CThostFtdcInstrumentField_CreateDate_length);
            return -1;
        }
        // memset(data->CreateDate, 0, sizeof(data->CreateDate));
        // memcpy(data->CreateDate, CThostFtdcInstrumentField_CreateDate, CThostFtdcInstrumentField_CreateDate_length);
        strncpy(data->CreateDate, CThostFtdcInstrumentField_CreateDate, sizeof(data->CreateDate));
        CThostFtdcInstrumentField_CreateDate = NULL;
    }

    /// 上市日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcInstrumentField_OpenDate != NULL ) {
        if(CThostFtdcInstrumentField_OpenDate_length >= (Py_ssize_t)sizeof(data->OpenDate)) {
            PyErr_Format(PyExc_ValueError, "OpenDate too long: length=%zd (max allowed is 8)", CThostFtdcInstrumentField_OpenDate_length);
            return -1;
        }
        // memset(data->OpenDate, 0, sizeof(data->OpenDate));
        // memcpy(data->OpenDate, CThostFtdcInstrumentField_OpenDate, CThostFtdcInstrumentField_OpenDate_length);
        strncpy(data->OpenDate, CThostFtdcInstrumentField_OpenDate, sizeof(data->OpenDate));
        CThostFtdcInstrumentField_OpenDate = NULL;
    }

    /// 到期日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcInstrumentField_ExpireDate != NULL ) {
        if(CThostFtdcInstrumentField_ExpireDate_length >= (Py_ssize_t)sizeof(data->ExpireDate)) {
            PyErr_Format(PyExc_ValueError, "ExpireDate too long: length=%zd (max allowed is 8)", CThostFtdcInstrumentField_ExpireDate_length);
            return -1;
        }
        // memset(data->ExpireDate, 0, sizeof(data->ExpireDate));
        // memcpy(data->ExpireDate, CThostFtdcInstrumentField_ExpireDate, CThostFtdcInstrumentField_ExpireDate_length);
        strncpy(data->ExpireDate, CThostFtdcInstrumentField_ExpireDate, sizeof(data->ExpireDate));
        CThostFtdcInstrumentField_ExpireDate = NULL;
    }

    /// 开始交割日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcInstrumentField_StartDelivDate != NULL ) {
        if(CThostFtdcInstrumentField_StartDelivDate_length >= (Py_ssize_t)sizeof(data->StartDelivDate)) {
            PyErr_Format(PyExc_ValueError, "StartDelivDate too long: length=%zd (max allowed is 8)", CThostFtdcInstrumentField_StartDelivDate_length);
            return -1;
        }
        // memset(data->StartDelivDate, 0, sizeof(data->StartDelivDate));
        // memcpy(data->StartDelivDate, CThostFtdcInstrumentField_StartDelivDate, CThostFtdcInstrumentField_StartDelivDate_length);
        strncpy(data->StartDelivDate, CThostFtdcInstrumentField_StartDelivDate, sizeof(data->StartDelivDate));
        CThostFtdcInstrumentField_StartDelivDate = NULL;
    }

    /// 结束交割日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcInstrumentField_EndDelivDate != NULL ) {
        if(CThostFtdcInstrumentField_EndDelivDate_length >= (Py_ssize_t)sizeof(data->EndDelivDate)) {
            PyErr_Format(PyExc_ValueError, "EndDelivDate too long: length=%zd (max allowed is 8)", CThostFtdcInstrumentField_EndDelivDate_length);
            return -1;
        }
        // memset(data->EndDelivDate, 0, sizeof(data->EndDelivDate));
        // memcpy(data->EndDelivDate, CThostFtdcInstrumentField_EndDelivDate, CThostFtdcInstrumentField_EndDelivDate_length);
        strncpy(data->EndDelivDate, CThostFtdcInstrumentField_EndDelivDate, sizeof(data->EndDelivDate));
        CThostFtdcInstrumentField_EndDelivDate = NULL;
    }

    /// 合约生命周期状态
    /// typedef char TThostFtdcInstLifePhaseType
    data->InstLifePhase = CThostFtdcInstrumentField_InstLifePhase;

    /// 当前是否交易
    /// typedef int TThostFtdcBoolType
    data->IsTrading = CThostFtdcInstrumentField_IsTrading;

    /// 持仓类型
    /// typedef char TThostFtdcPositionTypeType
    data->PositionType = CThostFtdcInstrumentField_PositionType;

    /// 持仓日期类型
    /// typedef char TThostFtdcPositionDateTypeType
    data->PositionDateType = CThostFtdcInstrumentField_PositionDateType;

    /// 多头保证金率
    /// typedef double TThostFtdcRatioType
    data->LongMarginRatio = CThostFtdcInstrumentField_LongMarginRatio;

    /// 空头保证金率
    /// typedef double TThostFtdcRatioType
    data->ShortMarginRatio = CThostFtdcInstrumentField_ShortMarginRatio;

    /// 是否使用大额单边保证金算法
    /// typedef char TThostFtdcMaxMarginSideAlgorithmType
    data->MaxMarginSideAlgorithm = CThostFtdcInstrumentField_MaxMarginSideAlgorithm;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcInstrumentField_reserve4 != NULL ) {
        if(CThostFtdcInstrumentField_reserve4_length >= (Py_ssize_t)sizeof(data->reserve4)) {
            PyErr_Format(PyExc_ValueError, "reserve4 too long: length=%zd (max allowed is 30)", CThostFtdcInstrumentField_reserve4_length);
            return -1;
        }
        // memset(data->reserve4, 0, sizeof(data->reserve4));
        // memcpy(data->reserve4, CThostFtdcInstrumentField_reserve4, CThostFtdcInstrumentField_reserve4_length);
        strncpy(data->reserve4, CThostFtdcInstrumentField_reserve4, sizeof(data->reserve4));
        CThostFtdcInstrumentField_reserve4 = NULL;
    }

    /// 执行价
    /// typedef double TThostFtdcPriceType
    data->StrikePrice = CThostFtdcInstrumentField_StrikePrice;

    /// 期权类型
    /// typedef char TThostFtdcOptionsTypeType
    data->OptionsType = CThostFtdcInstrumentField_OptionsType;

    /// 合约基础商品乘数
    /// typedef double TThostFtdcUnderlyingMultipleType
    data->UnderlyingMultiple = CThostFtdcInstrumentField_UnderlyingMultiple;

    /// 组合类型
    /// typedef char TThostFtdcCombinationTypeType
    data->CombinationType = CThostFtdcInstrumentField_CombinationType;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcInstrumentField_InstrumentID != NULL ) {
        if(CThostFtdcInstrumentField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcInstrumentField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcInstrumentField_InstrumentID, CThostFtdcInstrumentField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcInstrumentField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcInstrumentField_InstrumentID = NULL;
    }

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    if( CThostFtdcInstrumentField_ExchangeInstID != NULL ) {
        if(CThostFtdcInstrumentField_ExchangeInstID_length >= (Py_ssize_t)sizeof(data->ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is 80)", CThostFtdcInstrumentField_ExchangeInstID_length);
            return -1;
        }
        // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
        // memcpy(data->ExchangeInstID, CThostFtdcInstrumentField_ExchangeInstID, CThostFtdcInstrumentField_ExchangeInstID_length);
        strncpy(data->ExchangeInstID, CThostFtdcInstrumentField_ExchangeInstID, sizeof(data->ExchangeInstID));
        CThostFtdcInstrumentField_ExchangeInstID = NULL;
    }

    /// 产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcInstrumentField_ProductID != NULL ) {
        if(CThostFtdcInstrumentField_ProductID_length >= (Py_ssize_t)sizeof(data->ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is 80)", CThostFtdcInstrumentField_ProductID_length);
            return -1;
        }
        // memset(data->ProductID, 0, sizeof(data->ProductID));
        // memcpy(data->ProductID, CThostFtdcInstrumentField_ProductID, CThostFtdcInstrumentField_ProductID_length);
        strncpy(data->ProductID, CThostFtdcInstrumentField_ProductID, sizeof(data->ProductID));
        CThostFtdcInstrumentField_ProductID = NULL;
    }

    /// 基础商品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcInstrumentField_UnderlyingInstrID != NULL ) {
        if(CThostFtdcInstrumentField_UnderlyingInstrID_length >= (Py_ssize_t)sizeof(data->UnderlyingInstrID)) {
            PyErr_Format(PyExc_ValueError, "UnderlyingInstrID too long: length=%zd (max allowed is 80)", CThostFtdcInstrumentField_UnderlyingInstrID_length);
            return -1;
        }
        // memset(data->UnderlyingInstrID, 0, sizeof(data->UnderlyingInstrID));
        // memcpy(data->UnderlyingInstrID, CThostFtdcInstrumentField_UnderlyingInstrID, CThostFtdcInstrumentField_UnderlyingInstrID_length);
        strncpy(data->UnderlyingInstrID, CThostFtdcInstrumentField_UnderlyingInstrID, sizeof(data->UnderlyingInstrID));
        CThostFtdcInstrumentField_UnderlyingInstrID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcInstrumentFieldType_repr(PyObject *self) {

    PyCThostFtdcInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(self);
    CThostFtdcInstrumentField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:c,s:i,s:i,s:i,s:i,s:i,s:i,s:i,s:d,s:y,s:y,s:y,s:y,s:y,s:c,s:i,s:c,s:c,s:d,s:d,s:c,s:y,s:d,s:c,s:d,s:c,s:y,s:y,s:y,s:y}"
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "InstrumentName", data->InstrumentName//, (Py_ssize_t)sizeof(data->InstrumentName)
        , "reserve2", data->reserve2//, (Py_ssize_t)sizeof(data->reserve2)
        , "reserve3", data->reserve3//, (Py_ssize_t)sizeof(data->reserve3)
        , "ProductClass", data->ProductClass
        , "DeliveryYear", data->DeliveryYear
        , "DeliveryMonth", data->DeliveryMonth
        , "MaxMarketOrderVolume", data->MaxMarketOrderVolume
        , "MinMarketOrderVolume", data->MinMarketOrderVolume
        , "MaxLimitOrderVolume", data->MaxLimitOrderVolume
        , "MinLimitOrderVolume", data->MinLimitOrderVolume
        , "VolumeMultiple", data->VolumeMultiple
        , "PriceTick", data->PriceTick
        , "CreateDate", data->CreateDate//, (Py_ssize_t)sizeof(data->CreateDate)
        , "OpenDate", data->OpenDate//, (Py_ssize_t)sizeof(data->OpenDate)
        , "ExpireDate", data->ExpireDate//, (Py_ssize_t)sizeof(data->ExpireDate)
        , "StartDelivDate", data->StartDelivDate//, (Py_ssize_t)sizeof(data->StartDelivDate)
        , "EndDelivDate", data->EndDelivDate//, (Py_ssize_t)sizeof(data->EndDelivDate)
        , "InstLifePhase", data->InstLifePhase
        , "IsTrading", data->IsTrading
        , "PositionType", data->PositionType
        , "PositionDateType", data->PositionDateType
        , "LongMarginRatio", data->LongMarginRatio
        , "ShortMarginRatio", data->ShortMarginRatio
        , "MaxMarginSideAlgorithm", data->MaxMarginSideAlgorithm
        , "reserve4", data->reserve4//, (Py_ssize_t)sizeof(data->reserve4)
        , "StrikePrice", data->StrikePrice
        , "OptionsType", data->OptionsType
        , "UnderlyingMultiple", data->UnderlyingMultiple
        , "CombinationType", data->CombinationType
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "ExchangeInstID", data->ExchangeInstID//, (Py_ssize_t)sizeof(data->ExchangeInstID)
        , "ProductID", data->ProductID//, (Py_ssize_t)sizeof(data->ProductID)
        , "UnderlyingInstrID", data->UnderlyingInstrID//, (Py_ssize_t)sizeof(data->UnderlyingInstrID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInstrumentField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInstrumentField repr");
        return NULL;
    }

    return repr;
}


/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcInstrumentFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(self);
    CThostFtdcInstrumentField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcInstrumentFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(self);
    CThostFtdcInstrumentField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcInstrumentFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(self);
    CThostFtdcInstrumentField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcInstrumentFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(self);
    CThostFtdcInstrumentField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约名称
/// typedef char TThostFtdcInstrumentNameType[21]
static PyObject *PyCThostFtdcInstrumentFieldType_get_InstrumentName(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(self);
    CThostFtdcInstrumentField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentName, (Py_ssize_t)sizeof(data->InstrumentName));
    return PyBytes_FromString(data->InstrumentName);
}

static int PyCThostFtdcInstrumentFieldType_set_InstrumentName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentField::InstrumentName)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentName must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(self);
    CThostFtdcInstrumentField *data = &(extra->data);
    // memset(data->InstrumentName, 0, sizeof(data->InstrumentName));
    // memcpy(data->InstrumentName, buf, len);
    strncpy(data->InstrumentName, buf, sizeof(data->InstrumentName));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldExchangeInstIDType[31]
static PyObject *PyCThostFtdcInstrumentFieldType_get_reserve2(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(self);
    CThostFtdcInstrumentField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve2, (Py_ssize_t)sizeof(data->reserve2));
    return PyBytes_FromString(data->reserve2);
}

static int PyCThostFtdcInstrumentFieldType_set_reserve2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentField::reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(self);
    CThostFtdcInstrumentField *data = &(extra->data);
    // memset(data->reserve2, 0, sizeof(data->reserve2));
    // memcpy(data->reserve2, buf, len);
    strncpy(data->reserve2, buf, sizeof(data->reserve2));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcInstrumentFieldType_get_reserve3(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(self);
    CThostFtdcInstrumentField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve3, (Py_ssize_t)sizeof(data->reserve3));
    return PyBytes_FromString(data->reserve3);
}

static int PyCThostFtdcInstrumentFieldType_set_reserve3(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve3 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentField::reserve3)) {
        PyErr_SetString(PyExc_ValueError, "reserve3 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(self);
    CThostFtdcInstrumentField *data = &(extra->data);
    // memset(data->reserve3, 0, sizeof(data->reserve3));
    // memcpy(data->reserve3, buf, len);
    strncpy(data->reserve3, buf, sizeof(data->reserve3));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 产品类型
/// typedef char TThostFtdcProductClassType
static PyObject *PyCThostFtdcInstrumentFieldType_get_ProductClass(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(self);
    CThostFtdcInstrumentField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ProductClass), 1);
}

static int PyCThostFtdcInstrumentFieldType_set_ProductClass(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductClass Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInstrumentField::ProductClass)) {
        PyErr_SetString(PyExc_ValueError, "ProductClass must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(self);
    CThostFtdcInstrumentField *data = &(extra->data);
    data->ProductClass = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 创建日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcInstrumentFieldType_get_CreateDate(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(self);
    CThostFtdcInstrumentField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CreateDate, (Py_ssize_t)sizeof(data->CreateDate));
    return PyBytes_FromString(data->CreateDate);
}

static int PyCThostFtdcInstrumentFieldType_set_CreateDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CreateDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentField::CreateDate)) {
        PyErr_SetString(PyExc_ValueError, "CreateDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(self);
    CThostFtdcInstrumentField *data = &(extra->data);
    // memset(data->CreateDate, 0, sizeof(data->CreateDate));
    // memcpy(data->CreateDate, buf, len);
    strncpy(data->CreateDate, buf, sizeof(data->CreateDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 上市日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcInstrumentFieldType_get_OpenDate(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(self);
    CThostFtdcInstrumentField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OpenDate, (Py_ssize_t)sizeof(data->OpenDate));
    return PyBytes_FromString(data->OpenDate);
}

static int PyCThostFtdcInstrumentFieldType_set_OpenDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OpenDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentField::OpenDate)) {
        PyErr_SetString(PyExc_ValueError, "OpenDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(self);
    CThostFtdcInstrumentField *data = &(extra->data);
    // memset(data->OpenDate, 0, sizeof(data->OpenDate));
    // memcpy(data->OpenDate, buf, len);
    strncpy(data->OpenDate, buf, sizeof(data->OpenDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 到期日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcInstrumentFieldType_get_ExpireDate(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(self);
    CThostFtdcInstrumentField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExpireDate, (Py_ssize_t)sizeof(data->ExpireDate));
    return PyBytes_FromString(data->ExpireDate);
}

static int PyCThostFtdcInstrumentFieldType_set_ExpireDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExpireDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentField::ExpireDate)) {
        PyErr_SetString(PyExc_ValueError, "ExpireDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(self);
    CThostFtdcInstrumentField *data = &(extra->data);
    // memset(data->ExpireDate, 0, sizeof(data->ExpireDate));
    // memcpy(data->ExpireDate, buf, len);
    strncpy(data->ExpireDate, buf, sizeof(data->ExpireDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 开始交割日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcInstrumentFieldType_get_StartDelivDate(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(self);
    CThostFtdcInstrumentField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->StartDelivDate, (Py_ssize_t)sizeof(data->StartDelivDate));
    return PyBytes_FromString(data->StartDelivDate);
}

static int PyCThostFtdcInstrumentFieldType_set_StartDelivDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "StartDelivDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentField::StartDelivDate)) {
        PyErr_SetString(PyExc_ValueError, "StartDelivDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(self);
    CThostFtdcInstrumentField *data = &(extra->data);
    // memset(data->StartDelivDate, 0, sizeof(data->StartDelivDate));
    // memcpy(data->StartDelivDate, buf, len);
    strncpy(data->StartDelivDate, buf, sizeof(data->StartDelivDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 结束交割日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcInstrumentFieldType_get_EndDelivDate(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(self);
    CThostFtdcInstrumentField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->EndDelivDate, (Py_ssize_t)sizeof(data->EndDelivDate));
    return PyBytes_FromString(data->EndDelivDate);
}

static int PyCThostFtdcInstrumentFieldType_set_EndDelivDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "EndDelivDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentField::EndDelivDate)) {
        PyErr_SetString(PyExc_ValueError, "EndDelivDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(self);
    CThostFtdcInstrumentField *data = &(extra->data);
    // memset(data->EndDelivDate, 0, sizeof(data->EndDelivDate));
    // memcpy(data->EndDelivDate, buf, len);
    strncpy(data->EndDelivDate, buf, sizeof(data->EndDelivDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约生命周期状态
/// typedef char TThostFtdcInstLifePhaseType
static PyObject *PyCThostFtdcInstrumentFieldType_get_InstLifePhase(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(self);
    CThostFtdcInstrumentField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->InstLifePhase), 1);
}

static int PyCThostFtdcInstrumentFieldType_set_InstLifePhase(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstLifePhase Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInstrumentField::InstLifePhase)) {
        PyErr_SetString(PyExc_ValueError, "InstLifePhase must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(self);
    CThostFtdcInstrumentField *data = &(extra->data);
    data->InstLifePhase = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 持仓类型
/// typedef char TThostFtdcPositionTypeType
static PyObject *PyCThostFtdcInstrumentFieldType_get_PositionType(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(self);
    CThostFtdcInstrumentField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->PositionType), 1);
}

static int PyCThostFtdcInstrumentFieldType_set_PositionType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "PositionType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInstrumentField::PositionType)) {
        PyErr_SetString(PyExc_ValueError, "PositionType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(self);
    CThostFtdcInstrumentField *data = &(extra->data);
    data->PositionType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 持仓日期类型
/// typedef char TThostFtdcPositionDateTypeType
static PyObject *PyCThostFtdcInstrumentFieldType_get_PositionDateType(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(self);
    CThostFtdcInstrumentField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->PositionDateType), 1);
}

static int PyCThostFtdcInstrumentFieldType_set_PositionDateType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "PositionDateType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInstrumentField::PositionDateType)) {
        PyErr_SetString(PyExc_ValueError, "PositionDateType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(self);
    CThostFtdcInstrumentField *data = &(extra->data);
    data->PositionDateType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 是否使用大额单边保证金算法
/// typedef char TThostFtdcMaxMarginSideAlgorithmType
static PyObject *PyCThostFtdcInstrumentFieldType_get_MaxMarginSideAlgorithm(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(self);
    CThostFtdcInstrumentField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->MaxMarginSideAlgorithm), 1);
}

static int PyCThostFtdcInstrumentFieldType_set_MaxMarginSideAlgorithm(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MaxMarginSideAlgorithm Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInstrumentField::MaxMarginSideAlgorithm)) {
        PyErr_SetString(PyExc_ValueError, "MaxMarginSideAlgorithm must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(self);
    CThostFtdcInstrumentField *data = &(extra->data);
    data->MaxMarginSideAlgorithm = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcInstrumentFieldType_get_reserve4(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(self);
    CThostFtdcInstrumentField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve4, (Py_ssize_t)sizeof(data->reserve4));
    return PyBytes_FromString(data->reserve4);
}

static int PyCThostFtdcInstrumentFieldType_set_reserve4(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve4 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentField::reserve4)) {
        PyErr_SetString(PyExc_ValueError, "reserve4 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(self);
    CThostFtdcInstrumentField *data = &(extra->data);
    // memset(data->reserve4, 0, sizeof(data->reserve4));
    // memcpy(data->reserve4, buf, len);
    strncpy(data->reserve4, buf, sizeof(data->reserve4));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期权类型
/// typedef char TThostFtdcOptionsTypeType
static PyObject *PyCThostFtdcInstrumentFieldType_get_OptionsType(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(self);
    CThostFtdcInstrumentField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OptionsType), 1);
}

static int PyCThostFtdcInstrumentFieldType_set_OptionsType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OptionsType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInstrumentField::OptionsType)) {
        PyErr_SetString(PyExc_ValueError, "OptionsType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(self);
    CThostFtdcInstrumentField *data = &(extra->data);
    data->OptionsType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 组合类型
/// typedef char TThostFtdcCombinationTypeType
static PyObject *PyCThostFtdcInstrumentFieldType_get_CombinationType(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(self);
    CThostFtdcInstrumentField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->CombinationType), 1);
}

static int PyCThostFtdcInstrumentFieldType_set_CombinationType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CombinationType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInstrumentField::CombinationType)) {
        PyErr_SetString(PyExc_ValueError, "CombinationType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(self);
    CThostFtdcInstrumentField *data = &(extra->data);
    data->CombinationType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcInstrumentFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(self);
    CThostFtdcInstrumentField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcInstrumentFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(self);
    CThostFtdcInstrumentField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约在交易所的代码
/// typedef char TThostFtdcExchangeInstIDType[81]
static PyObject *PyCThostFtdcInstrumentFieldType_get_ExchangeInstID(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(self);
    CThostFtdcInstrumentField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeInstID, (Py_ssize_t)sizeof(data->ExchangeInstID));
    return PyBytes_FromString(data->ExchangeInstID);
}

static int PyCThostFtdcInstrumentFieldType_set_ExchangeInstID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentField::ExchangeInstID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(self);
    CThostFtdcInstrumentField *data = &(extra->data);
    // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
    // memcpy(data->ExchangeInstID, buf, len);
    strncpy(data->ExchangeInstID, buf, sizeof(data->ExchangeInstID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 产品代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcInstrumentFieldType_get_ProductID(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(self);
    CThostFtdcInstrumentField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProductID, (Py_ssize_t)sizeof(data->ProductID));
    return PyBytes_FromString(data->ProductID);
}

static int PyCThostFtdcInstrumentFieldType_set_ProductID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentField::ProductID)) {
        PyErr_SetString(PyExc_ValueError, "ProductID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(self);
    CThostFtdcInstrumentField *data = &(extra->data);
    // memset(data->ProductID, 0, sizeof(data->ProductID));
    // memcpy(data->ProductID, buf, len);
    strncpy(data->ProductID, buf, sizeof(data->ProductID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 基础商品代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcInstrumentFieldType_get_UnderlyingInstrID(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(self);
    CThostFtdcInstrumentField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UnderlyingInstrID, (Py_ssize_t)sizeof(data->UnderlyingInstrID));
    return PyBytes_FromString(data->UnderlyingInstrID);
}

static int PyCThostFtdcInstrumentFieldType_set_UnderlyingInstrID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UnderlyingInstrID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentField::UnderlyingInstrID)) {
        PyErr_SetString(PyExc_ValueError, "UnderlyingInstrID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(self);
    CThostFtdcInstrumentField *data = &(extra->data);
    // memset(data->UnderlyingInstrID, 0, sizeof(data->UnderlyingInstrID));
    // memcpy(data->UnderlyingInstrID, buf, len);
    strncpy(data->UnderlyingInstrID, buf, sizeof(data->UnderlyingInstrID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcInstrumentFieldType_members[] = {
    /// 交割年份
    /// typedef int TThostFtdcYearType
    {
        .name = "DeliveryYear",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInstrumentFieldData, data.DeliveryYear),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交割年份")
    },
    /// 交割月
    /// typedef int TThostFtdcMonthType
    {
        .name = "DeliveryMonth",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInstrumentFieldData, data.DeliveryMonth),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交割月")
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
        .offset = offsetof(PyCThostFtdcInstrumentFieldData, data.MaxMarketOrderVolume),
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
        .offset = offsetof(PyCThostFtdcInstrumentFieldData, data.MinMarketOrderVolume),
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
        .offset = offsetof(PyCThostFtdcInstrumentFieldData, data.MaxLimitOrderVolume),
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
        .offset = offsetof(PyCThostFtdcInstrumentFieldData, data.MinLimitOrderVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("限价单最小下单量")
    },
    /// 合约数量乘数
    /// typedef int TThostFtdcVolumeMultipleType
    {
        .name = "VolumeMultiple",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInstrumentFieldData, data.VolumeMultiple),
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
        .offset = offsetof(PyCThostFtdcInstrumentFieldData, data.PriceTick),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("最小变动价位")
    },
    /// 当前是否交易
    /// typedef int TThostFtdcBoolType
    {
        .name = "IsTrading",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInstrumentFieldData, data.IsTrading),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("当前是否交易")
    },
    /// 多头保证金率
    /// typedef double TThostFtdcRatioType
    {
        .name = "LongMarginRatio",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInstrumentFieldData, data.LongMarginRatio),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("多头保证金率")
    },
    /// 空头保证金率
    /// typedef double TThostFtdcRatioType
    {
        .name = "ShortMarginRatio",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInstrumentFieldData, data.ShortMarginRatio),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("空头保证金率")
    },
    /// 执行价
    /// typedef double TThostFtdcPriceType
    {
        .name = "StrikePrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInstrumentFieldData, data.StrikePrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("执行价")
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
        .offset = offsetof(PyCThostFtdcInstrumentFieldData, data.UnderlyingMultiple),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("合约基础商品乘数")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcInstrumentFieldType_getsets[] = {
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcInstrumentFieldType_get_reserve1,
    .set = PyCThostFtdcInstrumentFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcInstrumentFieldType_get_ExchangeID,
    .set = PyCThostFtdcInstrumentFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 合约名称
    /// typedef char TThostFtdcInstrumentNameType[21]
    {
    .name = "InstrumentName",
    .get = PyCThostFtdcInstrumentFieldType_get_InstrumentName,
    .set = PyCThostFtdcInstrumentFieldType_set_InstrumentName,
    .doc = PyDoc_STR("合约名称"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    {
    .name = "reserve2",
    .get = PyCThostFtdcInstrumentFieldType_get_reserve2,
    .set = PyCThostFtdcInstrumentFieldType_set_reserve2,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve3",
    .get = PyCThostFtdcInstrumentFieldType_get_reserve3,
    .set = PyCThostFtdcInstrumentFieldType_set_reserve3,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 产品类型
    /// typedef char TThostFtdcProductClassType
    {
    .name = "ProductClass",
    .get = PyCThostFtdcInstrumentFieldType_get_ProductClass,
    .set = PyCThostFtdcInstrumentFieldType_set_ProductClass,
    .doc = PyDoc_STR("产品类型"),
    },
    /// 创建日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "CreateDate",
    .get = PyCThostFtdcInstrumentFieldType_get_CreateDate,
    .set = PyCThostFtdcInstrumentFieldType_set_CreateDate,
    .doc = PyDoc_STR("创建日"),
    },
    /// 上市日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "OpenDate",
    .get = PyCThostFtdcInstrumentFieldType_get_OpenDate,
    .set = PyCThostFtdcInstrumentFieldType_set_OpenDate,
    .doc = PyDoc_STR("上市日"),
    },
    /// 到期日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "ExpireDate",
    .get = PyCThostFtdcInstrumentFieldType_get_ExpireDate,
    .set = PyCThostFtdcInstrumentFieldType_set_ExpireDate,
    .doc = PyDoc_STR("到期日"),
    },
    /// 开始交割日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "StartDelivDate",
    .get = PyCThostFtdcInstrumentFieldType_get_StartDelivDate,
    .set = PyCThostFtdcInstrumentFieldType_set_StartDelivDate,
    .doc = PyDoc_STR("开始交割日"),
    },
    /// 结束交割日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "EndDelivDate",
    .get = PyCThostFtdcInstrumentFieldType_get_EndDelivDate,
    .set = PyCThostFtdcInstrumentFieldType_set_EndDelivDate,
    .doc = PyDoc_STR("结束交割日"),
    },
    /// 合约生命周期状态
    /// typedef char TThostFtdcInstLifePhaseType
    {
    .name = "InstLifePhase",
    .get = PyCThostFtdcInstrumentFieldType_get_InstLifePhase,
    .set = PyCThostFtdcInstrumentFieldType_set_InstLifePhase,
    .doc = PyDoc_STR("合约生命周期状态"),
    },
    /// 持仓类型
    /// typedef char TThostFtdcPositionTypeType
    {
    .name = "PositionType",
    .get = PyCThostFtdcInstrumentFieldType_get_PositionType,
    .set = PyCThostFtdcInstrumentFieldType_set_PositionType,
    .doc = PyDoc_STR("持仓类型"),
    },
    /// 持仓日期类型
    /// typedef char TThostFtdcPositionDateTypeType
    {
    .name = "PositionDateType",
    .get = PyCThostFtdcInstrumentFieldType_get_PositionDateType,
    .set = PyCThostFtdcInstrumentFieldType_set_PositionDateType,
    .doc = PyDoc_STR("持仓日期类型"),
    },
    /// 是否使用大额单边保证金算法
    /// typedef char TThostFtdcMaxMarginSideAlgorithmType
    {
    .name = "MaxMarginSideAlgorithm",
    .get = PyCThostFtdcInstrumentFieldType_get_MaxMarginSideAlgorithm,
    .set = PyCThostFtdcInstrumentFieldType_set_MaxMarginSideAlgorithm,
    .doc = PyDoc_STR("是否使用大额单边保证金算法"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve4",
    .get = PyCThostFtdcInstrumentFieldType_get_reserve4,
    .set = PyCThostFtdcInstrumentFieldType_set_reserve4,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 期权类型
    /// typedef char TThostFtdcOptionsTypeType
    {
    .name = "OptionsType",
    .get = PyCThostFtdcInstrumentFieldType_get_OptionsType,
    .set = PyCThostFtdcInstrumentFieldType_set_OptionsType,
    .doc = PyDoc_STR("期权类型"),
    },
    /// 组合类型
    /// typedef char TThostFtdcCombinationTypeType
    {
    .name = "CombinationType",
    .get = PyCThostFtdcInstrumentFieldType_get_CombinationType,
    .set = PyCThostFtdcInstrumentFieldType_set_CombinationType,
    .doc = PyDoc_STR("组合类型"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcInstrumentFieldType_get_InstrumentID,
    .set = PyCThostFtdcInstrumentFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    {
    .name = "ExchangeInstID",
    .get = PyCThostFtdcInstrumentFieldType_get_ExchangeInstID,
    .set = PyCThostFtdcInstrumentFieldType_set_ExchangeInstID,
    .doc = PyDoc_STR("合约在交易所的代码"),
    },
    /// 产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "ProductID",
    .get = PyCThostFtdcInstrumentFieldType_get_ProductID,
    .set = PyCThostFtdcInstrumentFieldType_set_ProductID,
    .doc = PyDoc_STR("产品代码"),
    },
    /// 基础商品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "UnderlyingInstrID",
    .get = PyCThostFtdcInstrumentFieldType_get_UnderlyingInstrID,
    .set = PyCThostFtdcInstrumentFieldType_set_UnderlyingInstrID,
    .doc = PyDoc_STR("基础商品代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcInstrumentFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcInstrumentField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("合约")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcInstrumentFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcInstrumentFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcInstrumentFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcInstrumentFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcInstrumentFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcInstrumentFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("合约")},
    {Py_tp_members, PyCThostFtdcInstrumentFieldType_members},
    {Py_tp_getset, PyCThostFtdcInstrumentFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcInstrumentFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcInstrumentFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcInstrumentFieldType_spec = {
    .name = "PyCTP.CThostFtdcInstrumentField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcInstrumentFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcInstrumentFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcInstrumentFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcInstrumentFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcInstrumentFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcInstrumentFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcInstrumentFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcInstrumentFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcInstrumentField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInstrumentField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}