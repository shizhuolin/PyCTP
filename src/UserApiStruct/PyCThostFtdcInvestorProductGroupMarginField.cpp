
#include "PyCThostFtdcInvestorProductGroupMarginField.h"

///投资者品种/跨品种保证金

static PyObject *PyCThostFtdcInvestorProductGroupMarginField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInvestorProductGroupMarginField *self = (PyCThostFtdcInvestorProductGroupMarginField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcInvestorProductGroupMarginField_init(PyCThostFtdcInvestorProductGroupMarginField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "BrokerID", "InvestorID", "TradingDay", "SettlementID", "FrozenMargin", "LongFrozenMargin", "ShortFrozenMargin", "UseMargin", "LongUseMargin", "ShortUseMargin", "ExchMargin", "LongExchMargin", "ShortExchMargin", "CloseProfit", "FrozenCommission", "Commission", "FrozenCash", "CashIn", "PositionProfit", "OffsetAmount", "LongOffsetAmount", "ShortOffsetAmount", "ExchOffsetAmount", "LongExchOffsetAmount", "ShortExchOffsetAmount", "HedgeFlag", "ExchangeID", "InvestUnitID", "ProductGroupID",  NULL};


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *InvestorProductGroupMarginField_reserve1 = NULL;
    Py_ssize_t InvestorProductGroupMarginField_reserve1_len = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *InvestorProductGroupMarginField_BrokerID = NULL;
    Py_ssize_t InvestorProductGroupMarginField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *InvestorProductGroupMarginField_InvestorID = NULL;
    Py_ssize_t InvestorProductGroupMarginField_InvestorID_len = 0;
            
    ///交易日
    // TThostFtdcDateType char[9]
    const char *InvestorProductGroupMarginField_TradingDay = NULL;
    Py_ssize_t InvestorProductGroupMarginField_TradingDay_len = 0;
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    int InvestorProductGroupMarginField_SettlementID = 0;
        
    ///冻结的保证金
    // TThostFtdcMoneyType double
    double InvestorProductGroupMarginField_FrozenMargin = 0.0;
        
    ///多头冻结的保证金
    // TThostFtdcMoneyType double
    double InvestorProductGroupMarginField_LongFrozenMargin = 0.0;
        
    ///空头冻结的保证金
    // TThostFtdcMoneyType double
    double InvestorProductGroupMarginField_ShortFrozenMargin = 0.0;
        
    ///占用的保证金
    // TThostFtdcMoneyType double
    double InvestorProductGroupMarginField_UseMargin = 0.0;
        
    ///多头保证金
    // TThostFtdcMoneyType double
    double InvestorProductGroupMarginField_LongUseMargin = 0.0;
        
    ///空头保证金
    // TThostFtdcMoneyType double
    double InvestorProductGroupMarginField_ShortUseMargin = 0.0;
        
    ///交易所保证金
    // TThostFtdcMoneyType double
    double InvestorProductGroupMarginField_ExchMargin = 0.0;
        
    ///交易所多头保证金
    // TThostFtdcMoneyType double
    double InvestorProductGroupMarginField_LongExchMargin = 0.0;
        
    ///交易所空头保证金
    // TThostFtdcMoneyType double
    double InvestorProductGroupMarginField_ShortExchMargin = 0.0;
        
    ///平仓盈亏
    // TThostFtdcMoneyType double
    double InvestorProductGroupMarginField_CloseProfit = 0.0;
        
    ///冻结的手续费
    // TThostFtdcMoneyType double
    double InvestorProductGroupMarginField_FrozenCommission = 0.0;
        
    ///手续费
    // TThostFtdcMoneyType double
    double InvestorProductGroupMarginField_Commission = 0.0;
        
    ///冻结的资金
    // TThostFtdcMoneyType double
    double InvestorProductGroupMarginField_FrozenCash = 0.0;
        
    ///资金差额
    // TThostFtdcMoneyType double
    double InvestorProductGroupMarginField_CashIn = 0.0;
        
    ///持仓盈亏
    // TThostFtdcMoneyType double
    double InvestorProductGroupMarginField_PositionProfit = 0.0;
        
    ///折抵总金额
    // TThostFtdcMoneyType double
    double InvestorProductGroupMarginField_OffsetAmount = 0.0;
        
    ///多头折抵总金额
    // TThostFtdcMoneyType double
    double InvestorProductGroupMarginField_LongOffsetAmount = 0.0;
        
    ///空头折抵总金额
    // TThostFtdcMoneyType double
    double InvestorProductGroupMarginField_ShortOffsetAmount = 0.0;
        
    ///交易所折抵总金额
    // TThostFtdcMoneyType double
    double InvestorProductGroupMarginField_ExchOffsetAmount = 0.0;
        
    ///交易所多头折抵总金额
    // TThostFtdcMoneyType double
    double InvestorProductGroupMarginField_LongExchOffsetAmount = 0.0;
        
    ///交易所空头折抵总金额
    // TThostFtdcMoneyType double
    double InvestorProductGroupMarginField_ShortExchOffsetAmount = 0.0;
        
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    char InvestorProductGroupMarginField_HedgeFlag = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *InvestorProductGroupMarginField_ExchangeID = NULL;
    Py_ssize_t InvestorProductGroupMarginField_ExchangeID_len = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *InvestorProductGroupMarginField_InvestUnitID = NULL;
    Py_ssize_t InvestorProductGroupMarginField_InvestUnitID_len = 0;
            
    ///品种/跨品种标示
    // TThostFtdcInstrumentIDType char[81]
    const char *InvestorProductGroupMarginField_ProductGroupID = NULL;
    Py_ssize_t InvestorProductGroupMarginField_ProductGroupID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#idddddddddddddddddddddcy#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#idddddddddddddddddddddcs#s#s#", (char **)kwlist
#endif

        , &InvestorProductGroupMarginField_reserve1, &InvestorProductGroupMarginField_reserve1_len 
        , &InvestorProductGroupMarginField_BrokerID, &InvestorProductGroupMarginField_BrokerID_len 
        , &InvestorProductGroupMarginField_InvestorID, &InvestorProductGroupMarginField_InvestorID_len 
        , &InvestorProductGroupMarginField_TradingDay, &InvestorProductGroupMarginField_TradingDay_len 
        , &InvestorProductGroupMarginField_SettlementID 
        , &InvestorProductGroupMarginField_FrozenMargin 
        , &InvestorProductGroupMarginField_LongFrozenMargin 
        , &InvestorProductGroupMarginField_ShortFrozenMargin 
        , &InvestorProductGroupMarginField_UseMargin 
        , &InvestorProductGroupMarginField_LongUseMargin 
        , &InvestorProductGroupMarginField_ShortUseMargin 
        , &InvestorProductGroupMarginField_ExchMargin 
        , &InvestorProductGroupMarginField_LongExchMargin 
        , &InvestorProductGroupMarginField_ShortExchMargin 
        , &InvestorProductGroupMarginField_CloseProfit 
        , &InvestorProductGroupMarginField_FrozenCommission 
        , &InvestorProductGroupMarginField_Commission 
        , &InvestorProductGroupMarginField_FrozenCash 
        , &InvestorProductGroupMarginField_CashIn 
        , &InvestorProductGroupMarginField_PositionProfit 
        , &InvestorProductGroupMarginField_OffsetAmount 
        , &InvestorProductGroupMarginField_LongOffsetAmount 
        , &InvestorProductGroupMarginField_ShortOffsetAmount 
        , &InvestorProductGroupMarginField_ExchOffsetAmount 
        , &InvestorProductGroupMarginField_LongExchOffsetAmount 
        , &InvestorProductGroupMarginField_ShortExchOffsetAmount 
        , &InvestorProductGroupMarginField_HedgeFlag 
        , &InvestorProductGroupMarginField_ExchangeID, &InvestorProductGroupMarginField_ExchangeID_len 
        , &InvestorProductGroupMarginField_InvestUnitID, &InvestorProductGroupMarginField_InvestUnitID_len 
        , &InvestorProductGroupMarginField_ProductGroupID, &InvestorProductGroupMarginField_ProductGroupID_len 


    )) {
        return -1;
    }


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( InvestorProductGroupMarginField_reserve1 != NULL ) {
        if(InvestorProductGroupMarginField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", InvestorProductGroupMarginField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, InvestorProductGroupMarginField_reserve1, InvestorProductGroupMarginField_reserve1_len);        
        strncpy(self->data.reserve1, InvestorProductGroupMarginField_reserve1, sizeof(self->data.reserve1) );
        InvestorProductGroupMarginField_reserve1 = NULL;
    }
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( InvestorProductGroupMarginField_BrokerID != NULL ) {
        if(InvestorProductGroupMarginField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", InvestorProductGroupMarginField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, InvestorProductGroupMarginField_BrokerID, InvestorProductGroupMarginField_BrokerID_len);        
        strncpy(self->data.BrokerID, InvestorProductGroupMarginField_BrokerID, sizeof(self->data.BrokerID) );
        InvestorProductGroupMarginField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( InvestorProductGroupMarginField_InvestorID != NULL ) {
        if(InvestorProductGroupMarginField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", InvestorProductGroupMarginField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, InvestorProductGroupMarginField_InvestorID, InvestorProductGroupMarginField_InvestorID_len);        
        strncpy(self->data.InvestorID, InvestorProductGroupMarginField_InvestorID, sizeof(self->data.InvestorID) );
        InvestorProductGroupMarginField_InvestorID = NULL;
    }
            
    ///交易日
    // TThostFtdcDateType char[9]
    if( InvestorProductGroupMarginField_TradingDay != NULL ) {
        if(InvestorProductGroupMarginField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", InvestorProductGroupMarginField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, InvestorProductGroupMarginField_TradingDay, InvestorProductGroupMarginField_TradingDay_len);        
        strncpy(self->data.TradingDay, InvestorProductGroupMarginField_TradingDay, sizeof(self->data.TradingDay) );
        InvestorProductGroupMarginField_TradingDay = NULL;
    }
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    self->data.SettlementID = InvestorProductGroupMarginField_SettlementID;
        
    ///冻结的保证金
    // TThostFtdcMoneyType double
    self->data.FrozenMargin = InvestorProductGroupMarginField_FrozenMargin;
        
    ///多头冻结的保证金
    // TThostFtdcMoneyType double
    self->data.LongFrozenMargin = InvestorProductGroupMarginField_LongFrozenMargin;
        
    ///空头冻结的保证金
    // TThostFtdcMoneyType double
    self->data.ShortFrozenMargin = InvestorProductGroupMarginField_ShortFrozenMargin;
        
    ///占用的保证金
    // TThostFtdcMoneyType double
    self->data.UseMargin = InvestorProductGroupMarginField_UseMargin;
        
    ///多头保证金
    // TThostFtdcMoneyType double
    self->data.LongUseMargin = InvestorProductGroupMarginField_LongUseMargin;
        
    ///空头保证金
    // TThostFtdcMoneyType double
    self->data.ShortUseMargin = InvestorProductGroupMarginField_ShortUseMargin;
        
    ///交易所保证金
    // TThostFtdcMoneyType double
    self->data.ExchMargin = InvestorProductGroupMarginField_ExchMargin;
        
    ///交易所多头保证金
    // TThostFtdcMoneyType double
    self->data.LongExchMargin = InvestorProductGroupMarginField_LongExchMargin;
        
    ///交易所空头保证金
    // TThostFtdcMoneyType double
    self->data.ShortExchMargin = InvestorProductGroupMarginField_ShortExchMargin;
        
    ///平仓盈亏
    // TThostFtdcMoneyType double
    self->data.CloseProfit = InvestorProductGroupMarginField_CloseProfit;
        
    ///冻结的手续费
    // TThostFtdcMoneyType double
    self->data.FrozenCommission = InvestorProductGroupMarginField_FrozenCommission;
        
    ///手续费
    // TThostFtdcMoneyType double
    self->data.Commission = InvestorProductGroupMarginField_Commission;
        
    ///冻结的资金
    // TThostFtdcMoneyType double
    self->data.FrozenCash = InvestorProductGroupMarginField_FrozenCash;
        
    ///资金差额
    // TThostFtdcMoneyType double
    self->data.CashIn = InvestorProductGroupMarginField_CashIn;
        
    ///持仓盈亏
    // TThostFtdcMoneyType double
    self->data.PositionProfit = InvestorProductGroupMarginField_PositionProfit;
        
    ///折抵总金额
    // TThostFtdcMoneyType double
    self->data.OffsetAmount = InvestorProductGroupMarginField_OffsetAmount;
        
    ///多头折抵总金额
    // TThostFtdcMoneyType double
    self->data.LongOffsetAmount = InvestorProductGroupMarginField_LongOffsetAmount;
        
    ///空头折抵总金额
    // TThostFtdcMoneyType double
    self->data.ShortOffsetAmount = InvestorProductGroupMarginField_ShortOffsetAmount;
        
    ///交易所折抵总金额
    // TThostFtdcMoneyType double
    self->data.ExchOffsetAmount = InvestorProductGroupMarginField_ExchOffsetAmount;
        
    ///交易所多头折抵总金额
    // TThostFtdcMoneyType double
    self->data.LongExchOffsetAmount = InvestorProductGroupMarginField_LongExchOffsetAmount;
        
    ///交易所空头折抵总金额
    // TThostFtdcMoneyType double
    self->data.ShortExchOffsetAmount = InvestorProductGroupMarginField_ShortExchOffsetAmount;
        
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    self->data.HedgeFlag = InvestorProductGroupMarginField_HedgeFlag;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( InvestorProductGroupMarginField_ExchangeID != NULL ) {
        if(InvestorProductGroupMarginField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", InvestorProductGroupMarginField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, InvestorProductGroupMarginField_ExchangeID, InvestorProductGroupMarginField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, InvestorProductGroupMarginField_ExchangeID, sizeof(self->data.ExchangeID) );
        InvestorProductGroupMarginField_ExchangeID = NULL;
    }
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( InvestorProductGroupMarginField_InvestUnitID != NULL ) {
        if(InvestorProductGroupMarginField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", InvestorProductGroupMarginField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, InvestorProductGroupMarginField_InvestUnitID, InvestorProductGroupMarginField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, InvestorProductGroupMarginField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        InvestorProductGroupMarginField_InvestUnitID = NULL;
    }
            
    ///品种/跨品种标示
    // TThostFtdcInstrumentIDType char[81]
    if( InvestorProductGroupMarginField_ProductGroupID != NULL ) {
        if(InvestorProductGroupMarginField_ProductGroupID_len > (Py_ssize_t)sizeof(self->data.ProductGroupID)) {
            PyErr_Format(PyExc_ValueError, "ProductGroupID too long: length=%zd (max allowed is %zd)", InvestorProductGroupMarginField_ProductGroupID_len, (Py_ssize_t)sizeof(self->data.ProductGroupID));
            return -1;
        }
        // memset(self->data.ProductGroupID, 0, sizeof(self->data.ProductGroupID));
        // memcpy(self->data.ProductGroupID, InvestorProductGroupMarginField_ProductGroupID, InvestorProductGroupMarginField_ProductGroupID_len);        
        strncpy(self->data.ProductGroupID, InvestorProductGroupMarginField_ProductGroupID, sizeof(self->data.ProductGroupID) );
        InvestorProductGroupMarginField_ProductGroupID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcInvestorProductGroupMarginField_dealloc(PyCThostFtdcInvestorProductGroupMarginField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInvestorProductGroupMarginField_repr(PyCThostFtdcInvestorProductGroupMarginField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:c,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:c,s:s,s:s,s:s}"
#endif

        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"SettlementID", self->data.SettlementID 
        ,"FrozenMargin", self->data.FrozenMargin 
        ,"LongFrozenMargin", self->data.LongFrozenMargin 
        ,"ShortFrozenMargin", self->data.ShortFrozenMargin 
        ,"UseMargin", self->data.UseMargin 
        ,"LongUseMargin", self->data.LongUseMargin 
        ,"ShortUseMargin", self->data.ShortUseMargin 
        ,"ExchMargin", self->data.ExchMargin 
        ,"LongExchMargin", self->data.LongExchMargin 
        ,"ShortExchMargin", self->data.ShortExchMargin 
        ,"CloseProfit", self->data.CloseProfit 
        ,"FrozenCommission", self->data.FrozenCommission 
        ,"Commission", self->data.Commission 
        ,"FrozenCash", self->data.FrozenCash 
        ,"CashIn", self->data.CashIn 
        ,"PositionProfit", self->data.PositionProfit 
        ,"OffsetAmount", self->data.OffsetAmount 
        ,"LongOffsetAmount", self->data.LongOffsetAmount 
        ,"ShortOffsetAmount", self->data.ShortOffsetAmount 
        ,"ExchOffsetAmount", self->data.ExchOffsetAmount 
        ,"LongExchOffsetAmount", self->data.LongExchOffsetAmount 
        ,"ShortExchOffsetAmount", self->data.ShortExchOffsetAmount 
        ,"HedgeFlag", self->data.HedgeFlag 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"InvestUnitID", self->data.InvestUnitID//, (Py_ssize_t)sizeof(self->data.InvestUnitID) 
        ,"ProductGroupID", self->data.ProductGroupID//, (Py_ssize_t)sizeof(self->data.ProductGroupID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorProductGroupMarginField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_reserve1(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcInvestorProductGroupMarginField_set_reserve1(PyCThostFtdcInvestorProductGroupMarginField *self, PyObject* val, void *closure) {
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
            
///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_BrokerID(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcInvestorProductGroupMarginField_set_BrokerID(PyCThostFtdcInvestorProductGroupMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_InvestorID(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcInvestorProductGroupMarginField_set_InvestorID(PyCThostFtdcInvestorProductGroupMarginField *self, PyObject* val, void *closure) {
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
            
///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_TradingDay(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcInvestorProductGroupMarginField_set_TradingDay(PyCThostFtdcInvestorProductGroupMarginField *self, PyObject* val, void *closure) {
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
            
///结算编号
// TThostFtdcSettlementIDType int
static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_SettlementID(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SettlementID);
#else
    return PyInt_FromLong(self->data.SettlementID);
#endif
}

///结算编号
// TThostFtdcSettlementIDType int
static int PyCThostFtdcInvestorProductGroupMarginField_set_SettlementID(PyCThostFtdcInvestorProductGroupMarginField *self, PyObject* val, void *closure) {
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
        
///冻结的保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_FrozenMargin(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FrozenMargin);
}

///冻结的保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProductGroupMarginField_set_FrozenMargin(PyCThostFtdcInvestorProductGroupMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FrozenMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.FrozenMargin = buf;
    return 0;
}
        
///多头冻结的保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_LongFrozenMargin(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LongFrozenMargin);
}

///多头冻结的保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProductGroupMarginField_set_LongFrozenMargin(PyCThostFtdcInvestorProductGroupMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LongFrozenMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LongFrozenMargin = buf;
    return 0;
}
        
///空头冻结的保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_ShortFrozenMargin(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ShortFrozenMargin);
}

///空头冻结的保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProductGroupMarginField_set_ShortFrozenMargin(PyCThostFtdcInvestorProductGroupMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ShortFrozenMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ShortFrozenMargin = buf;
    return 0;
}
        
///占用的保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_UseMargin(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.UseMargin);
}

///占用的保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProductGroupMarginField_set_UseMargin(PyCThostFtdcInvestorProductGroupMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UseMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.UseMargin = buf;
    return 0;
}
        
///多头保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_LongUseMargin(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LongUseMargin);
}

///多头保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProductGroupMarginField_set_LongUseMargin(PyCThostFtdcInvestorProductGroupMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LongUseMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LongUseMargin = buf;
    return 0;
}
        
///空头保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_ShortUseMargin(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ShortUseMargin);
}

///空头保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProductGroupMarginField_set_ShortUseMargin(PyCThostFtdcInvestorProductGroupMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ShortUseMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ShortUseMargin = buf;
    return 0;
}
        
///交易所保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_ExchMargin(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ExchMargin);
}

///交易所保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProductGroupMarginField_set_ExchMargin(PyCThostFtdcInvestorProductGroupMarginField *self, PyObject* val, void *closure) {
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
        
///交易所多头保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_LongExchMargin(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LongExchMargin);
}

///交易所多头保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProductGroupMarginField_set_LongExchMargin(PyCThostFtdcInvestorProductGroupMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LongExchMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LongExchMargin = buf;
    return 0;
}
        
///交易所空头保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_ShortExchMargin(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ShortExchMargin);
}

///交易所空头保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProductGroupMarginField_set_ShortExchMargin(PyCThostFtdcInvestorProductGroupMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ShortExchMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ShortExchMargin = buf;
    return 0;
}
        
///平仓盈亏
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_CloseProfit(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CloseProfit);
}

///平仓盈亏
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProductGroupMarginField_set_CloseProfit(PyCThostFtdcInvestorProductGroupMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CloseProfit Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CloseProfit = buf;
    return 0;
}
        
///冻结的手续费
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_FrozenCommission(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FrozenCommission);
}

///冻结的手续费
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProductGroupMarginField_set_FrozenCommission(PyCThostFtdcInvestorProductGroupMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FrozenCommission Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.FrozenCommission = buf;
    return 0;
}
        
///手续费
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_Commission(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Commission);
}

///手续费
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProductGroupMarginField_set_Commission(PyCThostFtdcInvestorProductGroupMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Commission Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Commission = buf;
    return 0;
}
        
///冻结的资金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_FrozenCash(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FrozenCash);
}

///冻结的资金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProductGroupMarginField_set_FrozenCash(PyCThostFtdcInvestorProductGroupMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FrozenCash Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.FrozenCash = buf;
    return 0;
}
        
///资金差额
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_CashIn(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CashIn);
}

///资金差额
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProductGroupMarginField_set_CashIn(PyCThostFtdcInvestorProductGroupMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CashIn Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CashIn = buf;
    return 0;
}
        
///持仓盈亏
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_PositionProfit(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PositionProfit);
}

///持仓盈亏
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProductGroupMarginField_set_PositionProfit(PyCThostFtdcInvestorProductGroupMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PositionProfit Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PositionProfit = buf;
    return 0;
}
        
///折抵总金额
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_OffsetAmount(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.OffsetAmount);
}

///折抵总金额
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProductGroupMarginField_set_OffsetAmount(PyCThostFtdcInvestorProductGroupMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OffsetAmount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OffsetAmount = buf;
    return 0;
}
        
///多头折抵总金额
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_LongOffsetAmount(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LongOffsetAmount);
}

///多头折抵总金额
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProductGroupMarginField_set_LongOffsetAmount(PyCThostFtdcInvestorProductGroupMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LongOffsetAmount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LongOffsetAmount = buf;
    return 0;
}
        
///空头折抵总金额
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_ShortOffsetAmount(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ShortOffsetAmount);
}

///空头折抵总金额
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProductGroupMarginField_set_ShortOffsetAmount(PyCThostFtdcInvestorProductGroupMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ShortOffsetAmount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ShortOffsetAmount = buf;
    return 0;
}
        
///交易所折抵总金额
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_ExchOffsetAmount(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ExchOffsetAmount);
}

///交易所折抵总金额
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProductGroupMarginField_set_ExchOffsetAmount(PyCThostFtdcInvestorProductGroupMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchOffsetAmount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ExchOffsetAmount = buf;
    return 0;
}
        
///交易所多头折抵总金额
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_LongExchOffsetAmount(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LongExchOffsetAmount);
}

///交易所多头折抵总金额
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProductGroupMarginField_set_LongExchOffsetAmount(PyCThostFtdcInvestorProductGroupMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LongExchOffsetAmount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LongExchOffsetAmount = buf;
    return 0;
}
        
///交易所空头折抵总金额
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_ShortExchOffsetAmount(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ShortExchOffsetAmount);
}

///交易所空头折抵总金额
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProductGroupMarginField_set_ShortExchOffsetAmount(PyCThostFtdcInvestorProductGroupMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ShortExchOffsetAmount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ShortExchOffsetAmount = buf;
    return 0;
}
        
///投机套保标志
// TThostFtdcHedgeFlagType char
static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_HedgeFlag(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

///投机套保标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcInvestorProductGroupMarginField_set_HedgeFlag(PyCThostFtdcInvestorProductGroupMarginField *self, PyObject* val, void *closure) {
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
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_ExchangeID(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcInvestorProductGroupMarginField_set_ExchangeID(PyCThostFtdcInvestorProductGroupMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_InvestUnitID(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcInvestorProductGroupMarginField_set_InvestUnitID(PyCThostFtdcInvestorProductGroupMarginField *self, PyObject* val, void *closure) {
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
            
///品种/跨品种标示
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_ProductGroupID(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProductGroupID, (Py_ssize_t)sizeof(self->data.ProductGroupID));
    return PyBytes_FromString(self->data.ProductGroupID);
}

///品种/跨品种标示
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcInvestorProductGroupMarginField_set_ProductGroupID(PyCThostFtdcInvestorProductGroupMarginField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ProductGroupID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ProductGroupID)) {
        PyErr_SetString(PyExc_ValueError, "ProductGroupID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.ProductGroupID, 0, sizeof(self->data.ProductGroupID));
    // memcpy(self->data.ProductGroupID, buf, len);
    strncpy(self->data.ProductGroupID, buf, sizeof(self->data.ProductGroupID));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcInvestorProductGroupMarginField_getset[] = {
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_reserve1, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_reserve1, (char *)"reserve1", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_BrokerID, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_InvestorID, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_InvestorID, (char *)"InvestorID", NULL},
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_TradingDay, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_TradingDay, (char *)"TradingDay", NULL},
    ///结算编号 
    {(char *)"SettlementID", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_SettlementID, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_SettlementID, (char *)"SettlementID", NULL},
    ///冻结的保证金 
    {(char *)"FrozenMargin", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_FrozenMargin, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_FrozenMargin, (char *)"FrozenMargin", NULL},
    ///多头冻结的保证金 
    {(char *)"LongFrozenMargin", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_LongFrozenMargin, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_LongFrozenMargin, (char *)"LongFrozenMargin", NULL},
    ///空头冻结的保证金 
    {(char *)"ShortFrozenMargin", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_ShortFrozenMargin, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_ShortFrozenMargin, (char *)"ShortFrozenMargin", NULL},
    ///占用的保证金 
    {(char *)"UseMargin", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_UseMargin, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_UseMargin, (char *)"UseMargin", NULL},
    ///多头保证金 
    {(char *)"LongUseMargin", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_LongUseMargin, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_LongUseMargin, (char *)"LongUseMargin", NULL},
    ///空头保证金 
    {(char *)"ShortUseMargin", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_ShortUseMargin, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_ShortUseMargin, (char *)"ShortUseMargin", NULL},
    ///交易所保证金 
    {(char *)"ExchMargin", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_ExchMargin, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_ExchMargin, (char *)"ExchMargin", NULL},
    ///交易所多头保证金 
    {(char *)"LongExchMargin", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_LongExchMargin, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_LongExchMargin, (char *)"LongExchMargin", NULL},
    ///交易所空头保证金 
    {(char *)"ShortExchMargin", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_ShortExchMargin, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_ShortExchMargin, (char *)"ShortExchMargin", NULL},
    ///平仓盈亏 
    {(char *)"CloseProfit", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_CloseProfit, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_CloseProfit, (char *)"CloseProfit", NULL},
    ///冻结的手续费 
    {(char *)"FrozenCommission", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_FrozenCommission, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_FrozenCommission, (char *)"FrozenCommission", NULL},
    ///手续费 
    {(char *)"Commission", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_Commission, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_Commission, (char *)"Commission", NULL},
    ///冻结的资金 
    {(char *)"FrozenCash", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_FrozenCash, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_FrozenCash, (char *)"FrozenCash", NULL},
    ///资金差额 
    {(char *)"CashIn", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_CashIn, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_CashIn, (char *)"CashIn", NULL},
    ///持仓盈亏 
    {(char *)"PositionProfit", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_PositionProfit, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_PositionProfit, (char *)"PositionProfit", NULL},
    ///折抵总金额 
    {(char *)"OffsetAmount", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_OffsetAmount, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_OffsetAmount, (char *)"OffsetAmount", NULL},
    ///多头折抵总金额 
    {(char *)"LongOffsetAmount", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_LongOffsetAmount, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_LongOffsetAmount, (char *)"LongOffsetAmount", NULL},
    ///空头折抵总金额 
    {(char *)"ShortOffsetAmount", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_ShortOffsetAmount, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_ShortOffsetAmount, (char *)"ShortOffsetAmount", NULL},
    ///交易所折抵总金额 
    {(char *)"ExchOffsetAmount", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_ExchOffsetAmount, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_ExchOffsetAmount, (char *)"ExchOffsetAmount", NULL},
    ///交易所多头折抵总金额 
    {(char *)"LongExchOffsetAmount", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_LongExchOffsetAmount, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_LongExchOffsetAmount, (char *)"LongExchOffsetAmount", NULL},
    ///交易所空头折抵总金额 
    {(char *)"ShortExchOffsetAmount", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_ShortExchOffsetAmount, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_ShortExchOffsetAmount, (char *)"ShortExchOffsetAmount", NULL},
    ///投机套保标志 
    {(char *)"HedgeFlag", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_HedgeFlag, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_ExchangeID, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_InvestUnitID, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///品种/跨品种标示 
    {(char *)"ProductGroupID", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_ProductGroupID, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_ProductGroupID, (char *)"ProductGroupID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInvestorProductGroupMarginFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInvestorProductGroupMarginField",	/* tp_name */
	sizeof(PyCThostFtdcInvestorProductGroupMarginField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInvestorProductGroupMarginField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInvestorProductGroupMarginField_repr,   /* tp_repr */
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
	"CThostFtdcInvestorProductGroupMarginField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInvestorProductGroupMarginField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInvestorProductGroupMarginField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInvestorProductGroupMarginField_new,       /* tp_new */
};

int PyCThostFtdcInvestorProductGroupMarginFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInvestorProductGroupMarginField  */
	if (PyType_Ready(&PyCThostFtdcInvestorProductGroupMarginFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInvestorProductGroupMarginField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInvestorProductGroupMarginFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInvestorProductGroupMarginField", (PyObject *)&PyCThostFtdcInvestorProductGroupMarginFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorProductGroupMarginField to module");
        Py_DECREF(&PyCThostFtdcInvestorProductGroupMarginFieldType);
		return -1;
    }

    return 0;
}
