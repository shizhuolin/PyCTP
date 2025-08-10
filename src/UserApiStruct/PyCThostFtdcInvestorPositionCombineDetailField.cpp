
#include "PyCThostFtdcInvestorPositionCombineDetailField.h"

///投资者组合持仓明细

static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInvestorPositionCombineDetailField *self = (PyCThostFtdcInvestorPositionCombineDetailField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcInvestorPositionCombineDetailField_init(PyCThostFtdcInvestorPositionCombineDetailField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "OpenDate", "ExchangeID", "SettlementID", "BrokerID", "InvestorID", "ComTradeID", "TradeID", "reserve1", "HedgeFlag", "Direction", "TotalAmt", "Margin", "ExchMargin", "MarginRateByMoney", "MarginRateByVolume", "LegID", "LegMultiple", "reserve2", "TradeGroupID", "InvestUnitID", "InstrumentID", "CombInstrumentID",  NULL};


    ///交易日
    // TThostFtdcDateType char[9]
    const char *InvestorPositionCombineDetailField_TradingDay = NULL;
    Py_ssize_t InvestorPositionCombineDetailField_TradingDay_len = 0;
            
    ///开仓日期
    // TThostFtdcDateType char[9]
    const char *InvestorPositionCombineDetailField_OpenDate = NULL;
    Py_ssize_t InvestorPositionCombineDetailField_OpenDate_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *InvestorPositionCombineDetailField_ExchangeID = NULL;
    Py_ssize_t InvestorPositionCombineDetailField_ExchangeID_len = 0;
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    int InvestorPositionCombineDetailField_SettlementID = 0;
        
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *InvestorPositionCombineDetailField_BrokerID = NULL;
    Py_ssize_t InvestorPositionCombineDetailField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *InvestorPositionCombineDetailField_InvestorID = NULL;
    Py_ssize_t InvestorPositionCombineDetailField_InvestorID_len = 0;
            
    ///组合编号
    // TThostFtdcTradeIDType char[21]
    const char *InvestorPositionCombineDetailField_ComTradeID = NULL;
    Py_ssize_t InvestorPositionCombineDetailField_ComTradeID_len = 0;
            
    ///撮合编号
    // TThostFtdcTradeIDType char[21]
    const char *InvestorPositionCombineDetailField_TradeID = NULL;
    Py_ssize_t InvestorPositionCombineDetailField_TradeID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *InvestorPositionCombineDetailField_reserve1 = NULL;
    Py_ssize_t InvestorPositionCombineDetailField_reserve1_len = 0;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    char InvestorPositionCombineDetailField_HedgeFlag = 0;
            
    ///买卖
    // TThostFtdcDirectionType char
    char InvestorPositionCombineDetailField_Direction = 0;
            
    ///持仓量
    // TThostFtdcVolumeType int
    int InvestorPositionCombineDetailField_TotalAmt = 0;
        
    ///投资者保证金
    // TThostFtdcMoneyType double
    double InvestorPositionCombineDetailField_Margin = 0.0;
        
    ///交易所保证金
    // TThostFtdcMoneyType double
    double InvestorPositionCombineDetailField_ExchMargin = 0.0;
        
    ///保证金率
    // TThostFtdcRatioType double
    double InvestorPositionCombineDetailField_MarginRateByMoney = 0.0;
        
    ///保证金率(按手数)
    // TThostFtdcRatioType double
    double InvestorPositionCombineDetailField_MarginRateByVolume = 0.0;
        
    ///单腿编号
    // TThostFtdcLegIDType int
    int InvestorPositionCombineDetailField_LegID = 0;
        
    ///单腿乘数
    // TThostFtdcLegMultipleType int
    int InvestorPositionCombineDetailField_LegMultiple = 0;
        
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *InvestorPositionCombineDetailField_reserve2 = NULL;
    Py_ssize_t InvestorPositionCombineDetailField_reserve2_len = 0;
            
    ///成交组号
    // TThostFtdcTradeGroupIDType int
    int InvestorPositionCombineDetailField_TradeGroupID = 0;
        
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *InvestorPositionCombineDetailField_InvestUnitID = NULL;
    Py_ssize_t InvestorPositionCombineDetailField_InvestUnitID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *InvestorPositionCombineDetailField_InstrumentID = NULL;
    Py_ssize_t InvestorPositionCombineDetailField_InstrumentID_len = 0;
            
    ///组合持仓合约编码
    // TThostFtdcInstrumentIDType char[81]
    const char *InvestorPositionCombineDetailField_CombInstrumentID = NULL;
    Py_ssize_t InvestorPositionCombineDetailField_CombInstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#iy#y#y#y#y#cciddddiiy#iy#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#is#s#s#s#s#cciddddiis#is#s#s#", (char **)kwlist
#endif

        , &InvestorPositionCombineDetailField_TradingDay, &InvestorPositionCombineDetailField_TradingDay_len 
        , &InvestorPositionCombineDetailField_OpenDate, &InvestorPositionCombineDetailField_OpenDate_len 
        , &InvestorPositionCombineDetailField_ExchangeID, &InvestorPositionCombineDetailField_ExchangeID_len 
        , &InvestorPositionCombineDetailField_SettlementID 
        , &InvestorPositionCombineDetailField_BrokerID, &InvestorPositionCombineDetailField_BrokerID_len 
        , &InvestorPositionCombineDetailField_InvestorID, &InvestorPositionCombineDetailField_InvestorID_len 
        , &InvestorPositionCombineDetailField_ComTradeID, &InvestorPositionCombineDetailField_ComTradeID_len 
        , &InvestorPositionCombineDetailField_TradeID, &InvestorPositionCombineDetailField_TradeID_len 
        , &InvestorPositionCombineDetailField_reserve1, &InvestorPositionCombineDetailField_reserve1_len 
        , &InvestorPositionCombineDetailField_HedgeFlag 
        , &InvestorPositionCombineDetailField_Direction 
        , &InvestorPositionCombineDetailField_TotalAmt 
        , &InvestorPositionCombineDetailField_Margin 
        , &InvestorPositionCombineDetailField_ExchMargin 
        , &InvestorPositionCombineDetailField_MarginRateByMoney 
        , &InvestorPositionCombineDetailField_MarginRateByVolume 
        , &InvestorPositionCombineDetailField_LegID 
        , &InvestorPositionCombineDetailField_LegMultiple 
        , &InvestorPositionCombineDetailField_reserve2, &InvestorPositionCombineDetailField_reserve2_len 
        , &InvestorPositionCombineDetailField_TradeGroupID 
        , &InvestorPositionCombineDetailField_InvestUnitID, &InvestorPositionCombineDetailField_InvestUnitID_len 
        , &InvestorPositionCombineDetailField_InstrumentID, &InvestorPositionCombineDetailField_InstrumentID_len 
        , &InvestorPositionCombineDetailField_CombInstrumentID, &InvestorPositionCombineDetailField_CombInstrumentID_len 


    )) {
        return -1;
    }


    ///交易日
    // TThostFtdcDateType char[9]
    if( InvestorPositionCombineDetailField_TradingDay != NULL ) {
        if(InvestorPositionCombineDetailField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", InvestorPositionCombineDetailField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, InvestorPositionCombineDetailField_TradingDay, InvestorPositionCombineDetailField_TradingDay_len);        
        strncpy(self->data.TradingDay, InvestorPositionCombineDetailField_TradingDay, sizeof(self->data.TradingDay) );
        InvestorPositionCombineDetailField_TradingDay = NULL;
    }
            
    ///开仓日期
    // TThostFtdcDateType char[9]
    if( InvestorPositionCombineDetailField_OpenDate != NULL ) {
        if(InvestorPositionCombineDetailField_OpenDate_len > (Py_ssize_t)sizeof(self->data.OpenDate)) {
            PyErr_Format(PyExc_ValueError, "OpenDate too long: length=%zd (max allowed is %zd)", InvestorPositionCombineDetailField_OpenDate_len, (Py_ssize_t)sizeof(self->data.OpenDate));
            return -1;
        }
        // memset(self->data.OpenDate, 0, sizeof(self->data.OpenDate));
        // memcpy(self->data.OpenDate, InvestorPositionCombineDetailField_OpenDate, InvestorPositionCombineDetailField_OpenDate_len);        
        strncpy(self->data.OpenDate, InvestorPositionCombineDetailField_OpenDate, sizeof(self->data.OpenDate) );
        InvestorPositionCombineDetailField_OpenDate = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( InvestorPositionCombineDetailField_ExchangeID != NULL ) {
        if(InvestorPositionCombineDetailField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", InvestorPositionCombineDetailField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, InvestorPositionCombineDetailField_ExchangeID, InvestorPositionCombineDetailField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, InvestorPositionCombineDetailField_ExchangeID, sizeof(self->data.ExchangeID) );
        InvestorPositionCombineDetailField_ExchangeID = NULL;
    }
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    self->data.SettlementID = InvestorPositionCombineDetailField_SettlementID;
        
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( InvestorPositionCombineDetailField_BrokerID != NULL ) {
        if(InvestorPositionCombineDetailField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", InvestorPositionCombineDetailField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, InvestorPositionCombineDetailField_BrokerID, InvestorPositionCombineDetailField_BrokerID_len);        
        strncpy(self->data.BrokerID, InvestorPositionCombineDetailField_BrokerID, sizeof(self->data.BrokerID) );
        InvestorPositionCombineDetailField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( InvestorPositionCombineDetailField_InvestorID != NULL ) {
        if(InvestorPositionCombineDetailField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", InvestorPositionCombineDetailField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, InvestorPositionCombineDetailField_InvestorID, InvestorPositionCombineDetailField_InvestorID_len);        
        strncpy(self->data.InvestorID, InvestorPositionCombineDetailField_InvestorID, sizeof(self->data.InvestorID) );
        InvestorPositionCombineDetailField_InvestorID = NULL;
    }
            
    ///组合编号
    // TThostFtdcTradeIDType char[21]
    if( InvestorPositionCombineDetailField_ComTradeID != NULL ) {
        if(InvestorPositionCombineDetailField_ComTradeID_len > (Py_ssize_t)sizeof(self->data.ComTradeID)) {
            PyErr_Format(PyExc_ValueError, "ComTradeID too long: length=%zd (max allowed is %zd)", InvestorPositionCombineDetailField_ComTradeID_len, (Py_ssize_t)sizeof(self->data.ComTradeID));
            return -1;
        }
        // memset(self->data.ComTradeID, 0, sizeof(self->data.ComTradeID));
        // memcpy(self->data.ComTradeID, InvestorPositionCombineDetailField_ComTradeID, InvestorPositionCombineDetailField_ComTradeID_len);        
        strncpy(self->data.ComTradeID, InvestorPositionCombineDetailField_ComTradeID, sizeof(self->data.ComTradeID) );
        InvestorPositionCombineDetailField_ComTradeID = NULL;
    }
            
    ///撮合编号
    // TThostFtdcTradeIDType char[21]
    if( InvestorPositionCombineDetailField_TradeID != NULL ) {
        if(InvestorPositionCombineDetailField_TradeID_len > (Py_ssize_t)sizeof(self->data.TradeID)) {
            PyErr_Format(PyExc_ValueError, "TradeID too long: length=%zd (max allowed is %zd)", InvestorPositionCombineDetailField_TradeID_len, (Py_ssize_t)sizeof(self->data.TradeID));
            return -1;
        }
        // memset(self->data.TradeID, 0, sizeof(self->data.TradeID));
        // memcpy(self->data.TradeID, InvestorPositionCombineDetailField_TradeID, InvestorPositionCombineDetailField_TradeID_len);        
        strncpy(self->data.TradeID, InvestorPositionCombineDetailField_TradeID, sizeof(self->data.TradeID) );
        InvestorPositionCombineDetailField_TradeID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( InvestorPositionCombineDetailField_reserve1 != NULL ) {
        if(InvestorPositionCombineDetailField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", InvestorPositionCombineDetailField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, InvestorPositionCombineDetailField_reserve1, InvestorPositionCombineDetailField_reserve1_len);        
        strncpy(self->data.reserve1, InvestorPositionCombineDetailField_reserve1, sizeof(self->data.reserve1) );
        InvestorPositionCombineDetailField_reserve1 = NULL;
    }
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    self->data.HedgeFlag = InvestorPositionCombineDetailField_HedgeFlag;
            
    ///买卖
    // TThostFtdcDirectionType char
    self->data.Direction = InvestorPositionCombineDetailField_Direction;
            
    ///持仓量
    // TThostFtdcVolumeType int
    self->data.TotalAmt = InvestorPositionCombineDetailField_TotalAmt;
        
    ///投资者保证金
    // TThostFtdcMoneyType double
    self->data.Margin = InvestorPositionCombineDetailField_Margin;
        
    ///交易所保证金
    // TThostFtdcMoneyType double
    self->data.ExchMargin = InvestorPositionCombineDetailField_ExchMargin;
        
    ///保证金率
    // TThostFtdcRatioType double
    self->data.MarginRateByMoney = InvestorPositionCombineDetailField_MarginRateByMoney;
        
    ///保证金率(按手数)
    // TThostFtdcRatioType double
    self->data.MarginRateByVolume = InvestorPositionCombineDetailField_MarginRateByVolume;
        
    ///单腿编号
    // TThostFtdcLegIDType int
    self->data.LegID = InvestorPositionCombineDetailField_LegID;
        
    ///单腿乘数
    // TThostFtdcLegMultipleType int
    self->data.LegMultiple = InvestorPositionCombineDetailField_LegMultiple;
        
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( InvestorPositionCombineDetailField_reserve2 != NULL ) {
        if(InvestorPositionCombineDetailField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", InvestorPositionCombineDetailField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
            return -1;
        }
        // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
        // memcpy(self->data.reserve2, InvestorPositionCombineDetailField_reserve2, InvestorPositionCombineDetailField_reserve2_len);        
        strncpy(self->data.reserve2, InvestorPositionCombineDetailField_reserve2, sizeof(self->data.reserve2) );
        InvestorPositionCombineDetailField_reserve2 = NULL;
    }
            
    ///成交组号
    // TThostFtdcTradeGroupIDType int
    self->data.TradeGroupID = InvestorPositionCombineDetailField_TradeGroupID;
        
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( InvestorPositionCombineDetailField_InvestUnitID != NULL ) {
        if(InvestorPositionCombineDetailField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", InvestorPositionCombineDetailField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, InvestorPositionCombineDetailField_InvestUnitID, InvestorPositionCombineDetailField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, InvestorPositionCombineDetailField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        InvestorPositionCombineDetailField_InvestUnitID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( InvestorPositionCombineDetailField_InstrumentID != NULL ) {
        if(InvestorPositionCombineDetailField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", InvestorPositionCombineDetailField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, InvestorPositionCombineDetailField_InstrumentID, InvestorPositionCombineDetailField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, InvestorPositionCombineDetailField_InstrumentID, sizeof(self->data.InstrumentID) );
        InvestorPositionCombineDetailField_InstrumentID = NULL;
    }
            
    ///组合持仓合约编码
    // TThostFtdcInstrumentIDType char[81]
    if( InvestorPositionCombineDetailField_CombInstrumentID != NULL ) {
        if(InvestorPositionCombineDetailField_CombInstrumentID_len > (Py_ssize_t)sizeof(self->data.CombInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "CombInstrumentID too long: length=%zd (max allowed is %zd)", InvestorPositionCombineDetailField_CombInstrumentID_len, (Py_ssize_t)sizeof(self->data.CombInstrumentID));
            return -1;
        }
        // memset(self->data.CombInstrumentID, 0, sizeof(self->data.CombInstrumentID));
        // memcpy(self->data.CombInstrumentID, InvestorPositionCombineDetailField_CombInstrumentID, InvestorPositionCombineDetailField_CombInstrumentID_len);        
        strncpy(self->data.CombInstrumentID, InvestorPositionCombineDetailField_CombInstrumentID, sizeof(self->data.CombInstrumentID) );
        InvestorPositionCombineDetailField_CombInstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcInvestorPositionCombineDetailField_dealloc(PyCThostFtdcInvestorPositionCombineDetailField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_repr(PyCThostFtdcInvestorPositionCombineDetailField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:c,s:c,s:i,s:d,s:d,s:d,s:d,s:i,s:i,s:y,s:i,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:c,s:c,s:i,s:d,s:d,s:d,s:d,s:i,s:i,s:s,s:i,s:s,s:s,s:s}"
#endif

        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"OpenDate", self->data.OpenDate//, (Py_ssize_t)sizeof(self->data.OpenDate) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"SettlementID", self->data.SettlementID 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"ComTradeID", self->data.ComTradeID//, (Py_ssize_t)sizeof(self->data.ComTradeID) 
        ,"TradeID", self->data.TradeID//, (Py_ssize_t)sizeof(self->data.TradeID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"HedgeFlag", self->data.HedgeFlag 
        ,"Direction", self->data.Direction 
        ,"TotalAmt", self->data.TotalAmt 
        ,"Margin", self->data.Margin 
        ,"ExchMargin", self->data.ExchMargin 
        ,"MarginRateByMoney", self->data.MarginRateByMoney 
        ,"MarginRateByVolume", self->data.MarginRateByVolume 
        ,"LegID", self->data.LegID 
        ,"LegMultiple", self->data.LegMultiple 
        ,"reserve2", self->data.reserve2//, (Py_ssize_t)sizeof(self->data.reserve2) 
        ,"TradeGroupID", self->data.TradeGroupID 
        ,"InvestUnitID", self->data.InvestUnitID//, (Py_ssize_t)sizeof(self->data.InvestUnitID) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"CombInstrumentID", self->data.CombInstrumentID//, (Py_ssize_t)sizeof(self->data.CombInstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorPositionCombineDetailField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_get_TradingDay(PyCThostFtdcInvestorPositionCombineDetailField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcInvestorPositionCombineDetailField_set_TradingDay(PyCThostFtdcInvestorPositionCombineDetailField *self, PyObject* val, void *closure) {
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
            
///开仓日期
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_get_OpenDate(PyCThostFtdcInvestorPositionCombineDetailField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OpenDate, (Py_ssize_t)sizeof(self->data.OpenDate));
    return PyBytes_FromString(self->data.OpenDate);
}

///开仓日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcInvestorPositionCombineDetailField_set_OpenDate(PyCThostFtdcInvestorPositionCombineDetailField *self, PyObject* val, void *closure) {
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
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_get_ExchangeID(PyCThostFtdcInvestorPositionCombineDetailField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcInvestorPositionCombineDetailField_set_ExchangeID(PyCThostFtdcInvestorPositionCombineDetailField *self, PyObject* val, void *closure) {
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
            
///结算编号
// TThostFtdcSettlementIDType int
static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_get_SettlementID(PyCThostFtdcInvestorPositionCombineDetailField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SettlementID);
#else
    return PyInt_FromLong(self->data.SettlementID);
#endif
}

///结算编号
// TThostFtdcSettlementIDType int
static int PyCThostFtdcInvestorPositionCombineDetailField_set_SettlementID(PyCThostFtdcInvestorPositionCombineDetailField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SettlementID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SettlementID Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the SettlementID value out of range for C int");
        return -1;
    }
    self->data.SettlementID = (int)buf;
    return 0;
}
        
///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_get_BrokerID(PyCThostFtdcInvestorPositionCombineDetailField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcInvestorPositionCombineDetailField_set_BrokerID(PyCThostFtdcInvestorPositionCombineDetailField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_get_InvestorID(PyCThostFtdcInvestorPositionCombineDetailField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcInvestorPositionCombineDetailField_set_InvestorID(PyCThostFtdcInvestorPositionCombineDetailField *self, PyObject* val, void *closure) {
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
            
///组合编号
// TThostFtdcTradeIDType char[21]
static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_get_ComTradeID(PyCThostFtdcInvestorPositionCombineDetailField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ComTradeID, (Py_ssize_t)sizeof(self->data.ComTradeID));
    return PyBytes_FromString(self->data.ComTradeID);
}

///组合编号
// TThostFtdcTradeIDType char[21]
static int PyCThostFtdcInvestorPositionCombineDetailField_set_ComTradeID(PyCThostFtdcInvestorPositionCombineDetailField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ComTradeID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ComTradeID)) {
        PyErr_SetString(PyExc_ValueError, "ComTradeID must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.ComTradeID, 0, sizeof(self->data.ComTradeID));
    // memcpy(self->data.ComTradeID, buf, len);
    strncpy(self->data.ComTradeID, buf, sizeof(self->data.ComTradeID));
    return 0;
}
            
///撮合编号
// TThostFtdcTradeIDType char[21]
static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_get_TradeID(PyCThostFtdcInvestorPositionCombineDetailField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeID, (Py_ssize_t)sizeof(self->data.TradeID));
    return PyBytes_FromString(self->data.TradeID);
}

///撮合编号
// TThostFtdcTradeIDType char[21]
static int PyCThostFtdcInvestorPositionCombineDetailField_set_TradeID(PyCThostFtdcInvestorPositionCombineDetailField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradeID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TradeID)) {
        PyErr_SetString(PyExc_ValueError, "TradeID must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.TradeID, 0, sizeof(self->data.TradeID));
    // memcpy(self->data.TradeID, buf, len);
    strncpy(self->data.TradeID, buf, sizeof(self->data.TradeID));
    return 0;
}
            
///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_get_reserve1(PyCThostFtdcInvestorPositionCombineDetailField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcInvestorPositionCombineDetailField_set_reserve1(PyCThostFtdcInvestorPositionCombineDetailField *self, PyObject* val, void *closure) {
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
            
///投机套保标志
// TThostFtdcHedgeFlagType char
static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_get_HedgeFlag(PyCThostFtdcInvestorPositionCombineDetailField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

///投机套保标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcInvestorPositionCombineDetailField_set_HedgeFlag(PyCThostFtdcInvestorPositionCombineDetailField *self, PyObject* val, void *closure) {
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
            
///买卖
// TThostFtdcDirectionType char
static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_get_Direction(PyCThostFtdcInvestorPositionCombineDetailField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

///买卖
// TThostFtdcDirectionType char
static int PyCThostFtdcInvestorPositionCombineDetailField_set_Direction(PyCThostFtdcInvestorPositionCombineDetailField *self, PyObject* val, void *closure) {
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
            
///持仓量
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_get_TotalAmt(PyCThostFtdcInvestorPositionCombineDetailField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.TotalAmt);
#else
    return PyInt_FromLong(self->data.TotalAmt);
#endif
}

///持仓量
// TThostFtdcVolumeType int
static int PyCThostFtdcInvestorPositionCombineDetailField_set_TotalAmt(PyCThostFtdcInvestorPositionCombineDetailField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TotalAmt Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TotalAmt Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the TotalAmt value out of range for C int");
        return -1;
    }
    self->data.TotalAmt = (int)buf;
    return 0;
}
        
///投资者保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_get_Margin(PyCThostFtdcInvestorPositionCombineDetailField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Margin);
}

///投资者保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorPositionCombineDetailField_set_Margin(PyCThostFtdcInvestorPositionCombineDetailField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Margin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Margin = buf;
    return 0;
}
        
///交易所保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_get_ExchMargin(PyCThostFtdcInvestorPositionCombineDetailField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ExchMargin);
}

///交易所保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorPositionCombineDetailField_set_ExchMargin(PyCThostFtdcInvestorPositionCombineDetailField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ExchMargin = buf;
    return 0;
}
        
///保证金率
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_get_MarginRateByMoney(PyCThostFtdcInvestorPositionCombineDetailField *self, void *closure) {
    return PyFloat_FromDouble(self->data.MarginRateByMoney);
}

///保证金率
// TThostFtdcRatioType double
static int PyCThostFtdcInvestorPositionCombineDetailField_set_MarginRateByMoney(PyCThostFtdcInvestorPositionCombineDetailField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MarginRateByMoney Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.MarginRateByMoney = buf;
    return 0;
}
        
///保证金率(按手数)
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_get_MarginRateByVolume(PyCThostFtdcInvestorPositionCombineDetailField *self, void *closure) {
    return PyFloat_FromDouble(self->data.MarginRateByVolume);
}

///保证金率(按手数)
// TThostFtdcRatioType double
static int PyCThostFtdcInvestorPositionCombineDetailField_set_MarginRateByVolume(PyCThostFtdcInvestorPositionCombineDetailField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MarginRateByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.MarginRateByVolume = buf;
    return 0;
}
        
///单腿编号
// TThostFtdcLegIDType int
static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_get_LegID(PyCThostFtdcInvestorPositionCombineDetailField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.LegID);
#else
    return PyInt_FromLong(self->data.LegID);
#endif
}

///单腿编号
// TThostFtdcLegIDType int
static int PyCThostFtdcInvestorPositionCombineDetailField_set_LegID(PyCThostFtdcInvestorPositionCombineDetailField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LegID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LegID Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the LegID value out of range for C int");
        return -1;
    }
    self->data.LegID = (int)buf;
    return 0;
}
        
///单腿乘数
// TThostFtdcLegMultipleType int
static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_get_LegMultiple(PyCThostFtdcInvestorPositionCombineDetailField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.LegMultiple);
#else
    return PyInt_FromLong(self->data.LegMultiple);
#endif
}

///单腿乘数
// TThostFtdcLegMultipleType int
static int PyCThostFtdcInvestorPositionCombineDetailField_set_LegMultiple(PyCThostFtdcInvestorPositionCombineDetailField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LegMultiple Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LegMultiple Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the LegMultiple value out of range for C int");
        return -1;
    }
    self->data.LegMultiple = (int)buf;
    return 0;
}
        
///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_get_reserve2(PyCThostFtdcInvestorPositionCombineDetailField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve2, (Py_ssize_t)sizeof(self->data.reserve2));
    return PyBytes_FromString(self->data.reserve2);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcInvestorPositionCombineDetailField_set_reserve2(PyCThostFtdcInvestorPositionCombineDetailField *self, PyObject* val, void *closure) {
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
            
///成交组号
// TThostFtdcTradeGroupIDType int
static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_get_TradeGroupID(PyCThostFtdcInvestorPositionCombineDetailField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.TradeGroupID);
#else
    return PyInt_FromLong(self->data.TradeGroupID);
#endif
}

///成交组号
// TThostFtdcTradeGroupIDType int
static int PyCThostFtdcInvestorPositionCombineDetailField_set_TradeGroupID(PyCThostFtdcInvestorPositionCombineDetailField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradeGroupID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradeGroupID Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the TradeGroupID value out of range for C int");
        return -1;
    }
    self->data.TradeGroupID = (int)buf;
    return 0;
}
        
///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_get_InvestUnitID(PyCThostFtdcInvestorPositionCombineDetailField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcInvestorPositionCombineDetailField_set_InvestUnitID(PyCThostFtdcInvestorPositionCombineDetailField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_get_InstrumentID(PyCThostFtdcInvestorPositionCombineDetailField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcInvestorPositionCombineDetailField_set_InstrumentID(PyCThostFtdcInvestorPositionCombineDetailField *self, PyObject* val, void *closure) {
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
            
///组合持仓合约编码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_get_CombInstrumentID(PyCThostFtdcInvestorPositionCombineDetailField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CombInstrumentID, (Py_ssize_t)sizeof(self->data.CombInstrumentID));
    return PyBytes_FromString(self->data.CombInstrumentID);
}

///组合持仓合约编码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcInvestorPositionCombineDetailField_set_CombInstrumentID(PyCThostFtdcInvestorPositionCombineDetailField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CombInstrumentID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CombInstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "CombInstrumentID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.CombInstrumentID, 0, sizeof(self->data.CombInstrumentID));
    // memcpy(self->data.CombInstrumentID, buf, len);
    strncpy(self->data.CombInstrumentID, buf, sizeof(self->data.CombInstrumentID));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcInvestorPositionCombineDetailField_getset[] = {
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcInvestorPositionCombineDetailField_get_TradingDay, (setter)PyCThostFtdcInvestorPositionCombineDetailField_set_TradingDay, (char *)"TradingDay", NULL},
    ///开仓日期 
    {(char *)"OpenDate", (getter)PyCThostFtdcInvestorPositionCombineDetailField_get_OpenDate, (setter)PyCThostFtdcInvestorPositionCombineDetailField_set_OpenDate, (char *)"OpenDate", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcInvestorPositionCombineDetailField_get_ExchangeID, (setter)PyCThostFtdcInvestorPositionCombineDetailField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///结算编号 
    {(char *)"SettlementID", (getter)PyCThostFtdcInvestorPositionCombineDetailField_get_SettlementID, (setter)PyCThostFtdcInvestorPositionCombineDetailField_set_SettlementID, (char *)"SettlementID", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcInvestorPositionCombineDetailField_get_BrokerID, (setter)PyCThostFtdcInvestorPositionCombineDetailField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcInvestorPositionCombineDetailField_get_InvestorID, (setter)PyCThostFtdcInvestorPositionCombineDetailField_set_InvestorID, (char *)"InvestorID", NULL},
    ///组合编号 
    {(char *)"ComTradeID", (getter)PyCThostFtdcInvestorPositionCombineDetailField_get_ComTradeID, (setter)PyCThostFtdcInvestorPositionCombineDetailField_set_ComTradeID, (char *)"ComTradeID", NULL},
    ///撮合编号 
    {(char *)"TradeID", (getter)PyCThostFtdcInvestorPositionCombineDetailField_get_TradeID, (setter)PyCThostFtdcInvestorPositionCombineDetailField_set_TradeID, (char *)"TradeID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcInvestorPositionCombineDetailField_get_reserve1, (setter)PyCThostFtdcInvestorPositionCombineDetailField_set_reserve1, (char *)"reserve1", NULL},
    ///投机套保标志 
    {(char *)"HedgeFlag", (getter)PyCThostFtdcInvestorPositionCombineDetailField_get_HedgeFlag, (setter)PyCThostFtdcInvestorPositionCombineDetailField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
    ///买卖 
    {(char *)"Direction", (getter)PyCThostFtdcInvestorPositionCombineDetailField_get_Direction, (setter)PyCThostFtdcInvestorPositionCombineDetailField_set_Direction, (char *)"Direction", NULL},
    ///持仓量 
    {(char *)"TotalAmt", (getter)PyCThostFtdcInvestorPositionCombineDetailField_get_TotalAmt, (setter)PyCThostFtdcInvestorPositionCombineDetailField_set_TotalAmt, (char *)"TotalAmt", NULL},
    ///投资者保证金 
    {(char *)"Margin", (getter)PyCThostFtdcInvestorPositionCombineDetailField_get_Margin, (setter)PyCThostFtdcInvestorPositionCombineDetailField_set_Margin, (char *)"Margin", NULL},
    ///交易所保证金 
    {(char *)"ExchMargin", (getter)PyCThostFtdcInvestorPositionCombineDetailField_get_ExchMargin, (setter)PyCThostFtdcInvestorPositionCombineDetailField_set_ExchMargin, (char *)"ExchMargin", NULL},
    ///保证金率 
    {(char *)"MarginRateByMoney", (getter)PyCThostFtdcInvestorPositionCombineDetailField_get_MarginRateByMoney, (setter)PyCThostFtdcInvestorPositionCombineDetailField_set_MarginRateByMoney, (char *)"MarginRateByMoney", NULL},
    ///保证金率(按手数) 
    {(char *)"MarginRateByVolume", (getter)PyCThostFtdcInvestorPositionCombineDetailField_get_MarginRateByVolume, (setter)PyCThostFtdcInvestorPositionCombineDetailField_set_MarginRateByVolume, (char *)"MarginRateByVolume", NULL},
    ///单腿编号 
    {(char *)"LegID", (getter)PyCThostFtdcInvestorPositionCombineDetailField_get_LegID, (setter)PyCThostFtdcInvestorPositionCombineDetailField_set_LegID, (char *)"LegID", NULL},
    ///单腿乘数 
    {(char *)"LegMultiple", (getter)PyCThostFtdcInvestorPositionCombineDetailField_get_LegMultiple, (setter)PyCThostFtdcInvestorPositionCombineDetailField_set_LegMultiple, (char *)"LegMultiple", NULL},
    ///保留的无效字段 
    {(char *)"reserve2", (getter)PyCThostFtdcInvestorPositionCombineDetailField_get_reserve2, (setter)PyCThostFtdcInvestorPositionCombineDetailField_set_reserve2, (char *)"reserve2", NULL},
    ///成交组号 
    {(char *)"TradeGroupID", (getter)PyCThostFtdcInvestorPositionCombineDetailField_get_TradeGroupID, (setter)PyCThostFtdcInvestorPositionCombineDetailField_set_TradeGroupID, (char *)"TradeGroupID", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcInvestorPositionCombineDetailField_get_InvestUnitID, (setter)PyCThostFtdcInvestorPositionCombineDetailField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcInvestorPositionCombineDetailField_get_InstrumentID, (setter)PyCThostFtdcInvestorPositionCombineDetailField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///组合持仓合约编码 
    {(char *)"CombInstrumentID", (getter)PyCThostFtdcInvestorPositionCombineDetailField_get_CombInstrumentID, (setter)PyCThostFtdcInvestorPositionCombineDetailField_set_CombInstrumentID, (char *)"CombInstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInvestorPositionCombineDetailFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInvestorPositionCombineDetailField",	/* tp_name */
	sizeof(PyCThostFtdcInvestorPositionCombineDetailField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInvestorPositionCombineDetailField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInvestorPositionCombineDetailField_repr,   /* tp_repr */
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
	"CThostFtdcInvestorPositionCombineDetailField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInvestorPositionCombineDetailField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInvestorPositionCombineDetailField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInvestorPositionCombineDetailField_new,       /* tp_new */
};

int PyCThostFtdcInvestorPositionCombineDetailFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInvestorPositionCombineDetailField  */
	if (PyType_Ready(&PyCThostFtdcInvestorPositionCombineDetailFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInvestorPositionCombineDetailField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInvestorPositionCombineDetailFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInvestorPositionCombineDetailField", (PyObject *)&PyCThostFtdcInvestorPositionCombineDetailFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorPositionCombineDetailField to module");
        Py_DECREF(&PyCThostFtdcInvestorPositionCombineDetailFieldType);
		return -1;
    }

    return 0;
}
