
#include "PyCThostFtdcInvestorProdRCAMSMarginField.h"

///投资者品种RCAMS保证金

static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInvestorProdRCAMSMarginField *self = (PyCThostFtdcInvestorProdRCAMSMarginField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcInvestorProdRCAMSMarginField_init(PyCThostFtdcInvestorProdRCAMSMarginField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "BrokerID", "InvestorID", "CombProductID", "HedgeFlag", "ProductGroupID", "RiskBeforeDiscount", "IntraInstrRisk", "BPosRisk", "SPosRisk", "IntraProdRisk", "NetRisk", "InterProdRisk", "ShortOptRiskAdj", "OptionRoyalty", "MMSACloseFrozenMargin", "CloseCombFrozenMargin", "CloseFrozenMargin", "MMSAOpenFrozenMargin", "DeliveryOpenFrozenMargin", "OpenFrozenMargin", "UseFrozenMargin", "MMSAExchMargin", "DeliveryExchMargin", "CombExchMargin", "ExchMargin", "UseMargin",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *InvestorProdRCAMSMarginField_ExchangeID = NULL;
    Py_ssize_t InvestorProdRCAMSMarginField_ExchangeID_len = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *InvestorProdRCAMSMarginField_BrokerID = NULL;
    Py_ssize_t InvestorProdRCAMSMarginField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *InvestorProdRCAMSMarginField_InvestorID = NULL;
    Py_ssize_t InvestorProdRCAMSMarginField_InvestorID_len = 0;
            
    ///产品组合代码
    // TThostFtdcProductIDType char[41]
    const char *InvestorProdRCAMSMarginField_CombProductID = NULL;
    Py_ssize_t InvestorProdRCAMSMarginField_CombProductID_len = 0;
            
    ///投套标志
    // TThostFtdcHedgeFlagType char
    char InvestorProdRCAMSMarginField_HedgeFlag = 0;
            
    ///商品群代码
    // TThostFtdcProductIDType char[41]
    const char *InvestorProdRCAMSMarginField_ProductGroupID = NULL;
    Py_ssize_t InvestorProdRCAMSMarginField_ProductGroupID_len = 0;
            
    ///品种组合前风险
    // TThostFtdcMoneyType double
    double InvestorProdRCAMSMarginField_RiskBeforeDiscount = 0.0;
        
    ///同合约对冲风险
    // TThostFtdcMoneyType double
    double InvestorProdRCAMSMarginField_IntraInstrRisk = 0.0;
        
    ///品种买持仓风险
    // TThostFtdcMoneyType double
    double InvestorProdRCAMSMarginField_BPosRisk = 0.0;
        
    ///品种卖持仓风险
    // TThostFtdcMoneyType double
    double InvestorProdRCAMSMarginField_SPosRisk = 0.0;
        
    ///品种内对冲风险
    // TThostFtdcMoneyType double
    double InvestorProdRCAMSMarginField_IntraProdRisk = 0.0;
        
    ///品种净持仓风险
    // TThostFtdcMoneyType double
    double InvestorProdRCAMSMarginField_NetRisk = 0.0;
        
    ///品种间对冲风险
    // TThostFtdcMoneyType double
    double InvestorProdRCAMSMarginField_InterProdRisk = 0.0;
        
    ///空头期权风险调整
    // TThostFtdcMoneyType double
    double InvestorProdRCAMSMarginField_ShortOptRiskAdj = 0.0;
        
    ///空头期权权利金
    // TThostFtdcMoneyType double
    double InvestorProdRCAMSMarginField_OptionRoyalty = 0.0;
        
    ///大边组合平仓冻结保证金
    // TThostFtdcMoneyType double
    double InvestorProdRCAMSMarginField_MMSACloseFrozenMargin = 0.0;
        
    ///策略组合平仓/行权冻结保证金
    // TThostFtdcMoneyType double
    double InvestorProdRCAMSMarginField_CloseCombFrozenMargin = 0.0;
        
    ///平仓/行权冻结保证金
    // TThostFtdcMoneyType double
    double InvestorProdRCAMSMarginField_CloseFrozenMargin = 0.0;
        
    ///大边组合开仓冻结保证金
    // TThostFtdcMoneyType double
    double InvestorProdRCAMSMarginField_MMSAOpenFrozenMargin = 0.0;
        
    ///交割月期货开仓冻结保证金
    // TThostFtdcMoneyType double
    double InvestorProdRCAMSMarginField_DeliveryOpenFrozenMargin = 0.0;
        
    ///开仓冻结保证金
    // TThostFtdcMoneyType double
    double InvestorProdRCAMSMarginField_OpenFrozenMargin = 0.0;
        
    ///投资者冻结保证金
    // TThostFtdcMoneyType double
    double InvestorProdRCAMSMarginField_UseFrozenMargin = 0.0;
        
    ///大边组合交易所持仓保证金
    // TThostFtdcMoneyType double
    double InvestorProdRCAMSMarginField_MMSAExchMargin = 0.0;
        
    ///交割月期货交易所持仓保证金
    // TThostFtdcMoneyType double
    double InvestorProdRCAMSMarginField_DeliveryExchMargin = 0.0;
        
    ///策略组合交易所保证金
    // TThostFtdcMoneyType double
    double InvestorProdRCAMSMarginField_CombExchMargin = 0.0;
        
    ///交易所持仓保证金
    // TThostFtdcMoneyType double
    double InvestorProdRCAMSMarginField_ExchMargin = 0.0;
        
    ///投资者持仓保证金
    // TThostFtdcMoneyType double
    double InvestorProdRCAMSMarginField_UseMargin = 0.0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#cy#ddddddddddddddddddddd", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#cs#ddddddddddddddddddddd", (char **)kwlist
#endif

        , &InvestorProdRCAMSMarginField_ExchangeID, &InvestorProdRCAMSMarginField_ExchangeID_len 
        , &InvestorProdRCAMSMarginField_BrokerID, &InvestorProdRCAMSMarginField_BrokerID_len 
        , &InvestorProdRCAMSMarginField_InvestorID, &InvestorProdRCAMSMarginField_InvestorID_len 
        , &InvestorProdRCAMSMarginField_CombProductID, &InvestorProdRCAMSMarginField_CombProductID_len 
        , &InvestorProdRCAMSMarginField_HedgeFlag 
        , &InvestorProdRCAMSMarginField_ProductGroupID, &InvestorProdRCAMSMarginField_ProductGroupID_len 
        , &InvestorProdRCAMSMarginField_RiskBeforeDiscount 
        , &InvestorProdRCAMSMarginField_IntraInstrRisk 
        , &InvestorProdRCAMSMarginField_BPosRisk 
        , &InvestorProdRCAMSMarginField_SPosRisk 
        , &InvestorProdRCAMSMarginField_IntraProdRisk 
        , &InvestorProdRCAMSMarginField_NetRisk 
        , &InvestorProdRCAMSMarginField_InterProdRisk 
        , &InvestorProdRCAMSMarginField_ShortOptRiskAdj 
        , &InvestorProdRCAMSMarginField_OptionRoyalty 
        , &InvestorProdRCAMSMarginField_MMSACloseFrozenMargin 
        , &InvestorProdRCAMSMarginField_CloseCombFrozenMargin 
        , &InvestorProdRCAMSMarginField_CloseFrozenMargin 
        , &InvestorProdRCAMSMarginField_MMSAOpenFrozenMargin 
        , &InvestorProdRCAMSMarginField_DeliveryOpenFrozenMargin 
        , &InvestorProdRCAMSMarginField_OpenFrozenMargin 
        , &InvestorProdRCAMSMarginField_UseFrozenMargin 
        , &InvestorProdRCAMSMarginField_MMSAExchMargin 
        , &InvestorProdRCAMSMarginField_DeliveryExchMargin 
        , &InvestorProdRCAMSMarginField_CombExchMargin 
        , &InvestorProdRCAMSMarginField_ExchMargin 
        , &InvestorProdRCAMSMarginField_UseMargin 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( InvestorProdRCAMSMarginField_ExchangeID != NULL ) {
        if(InvestorProdRCAMSMarginField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", InvestorProdRCAMSMarginField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, InvestorProdRCAMSMarginField_ExchangeID, InvestorProdRCAMSMarginField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, InvestorProdRCAMSMarginField_ExchangeID, sizeof(self->data.ExchangeID) );
        InvestorProdRCAMSMarginField_ExchangeID = NULL;
    }
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( InvestorProdRCAMSMarginField_BrokerID != NULL ) {
        if(InvestorProdRCAMSMarginField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", InvestorProdRCAMSMarginField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, InvestorProdRCAMSMarginField_BrokerID, InvestorProdRCAMSMarginField_BrokerID_len);        
        strncpy(self->data.BrokerID, InvestorProdRCAMSMarginField_BrokerID, sizeof(self->data.BrokerID) );
        InvestorProdRCAMSMarginField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( InvestorProdRCAMSMarginField_InvestorID != NULL ) {
        if(InvestorProdRCAMSMarginField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", InvestorProdRCAMSMarginField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, InvestorProdRCAMSMarginField_InvestorID, InvestorProdRCAMSMarginField_InvestorID_len);        
        strncpy(self->data.InvestorID, InvestorProdRCAMSMarginField_InvestorID, sizeof(self->data.InvestorID) );
        InvestorProdRCAMSMarginField_InvestorID = NULL;
    }
            
    ///产品组合代码
    // TThostFtdcProductIDType char[41]
    if( InvestorProdRCAMSMarginField_CombProductID != NULL ) {
        if(InvestorProdRCAMSMarginField_CombProductID_len > (Py_ssize_t)sizeof(self->data.CombProductID)) {
            PyErr_Format(PyExc_ValueError, "CombProductID too long: length=%zd (max allowed is %zd)", InvestorProdRCAMSMarginField_CombProductID_len, (Py_ssize_t)sizeof(self->data.CombProductID));
            return -1;
        }
        // memset(self->data.CombProductID, 0, sizeof(self->data.CombProductID));
        // memcpy(self->data.CombProductID, InvestorProdRCAMSMarginField_CombProductID, InvestorProdRCAMSMarginField_CombProductID_len);        
        strncpy(self->data.CombProductID, InvestorProdRCAMSMarginField_CombProductID, sizeof(self->data.CombProductID) );
        InvestorProdRCAMSMarginField_CombProductID = NULL;
    }
            
    ///投套标志
    // TThostFtdcHedgeFlagType char
    self->data.HedgeFlag = InvestorProdRCAMSMarginField_HedgeFlag;
            
    ///商品群代码
    // TThostFtdcProductIDType char[41]
    if( InvestorProdRCAMSMarginField_ProductGroupID != NULL ) {
        if(InvestorProdRCAMSMarginField_ProductGroupID_len > (Py_ssize_t)sizeof(self->data.ProductGroupID)) {
            PyErr_Format(PyExc_ValueError, "ProductGroupID too long: length=%zd (max allowed is %zd)", InvestorProdRCAMSMarginField_ProductGroupID_len, (Py_ssize_t)sizeof(self->data.ProductGroupID));
            return -1;
        }
        // memset(self->data.ProductGroupID, 0, sizeof(self->data.ProductGroupID));
        // memcpy(self->data.ProductGroupID, InvestorProdRCAMSMarginField_ProductGroupID, InvestorProdRCAMSMarginField_ProductGroupID_len);        
        strncpy(self->data.ProductGroupID, InvestorProdRCAMSMarginField_ProductGroupID, sizeof(self->data.ProductGroupID) );
        InvestorProdRCAMSMarginField_ProductGroupID = NULL;
    }
            
    ///品种组合前风险
    // TThostFtdcMoneyType double
    self->data.RiskBeforeDiscount = InvestorProdRCAMSMarginField_RiskBeforeDiscount;
        
    ///同合约对冲风险
    // TThostFtdcMoneyType double
    self->data.IntraInstrRisk = InvestorProdRCAMSMarginField_IntraInstrRisk;
        
    ///品种买持仓风险
    // TThostFtdcMoneyType double
    self->data.BPosRisk = InvestorProdRCAMSMarginField_BPosRisk;
        
    ///品种卖持仓风险
    // TThostFtdcMoneyType double
    self->data.SPosRisk = InvestorProdRCAMSMarginField_SPosRisk;
        
    ///品种内对冲风险
    // TThostFtdcMoneyType double
    self->data.IntraProdRisk = InvestorProdRCAMSMarginField_IntraProdRisk;
        
    ///品种净持仓风险
    // TThostFtdcMoneyType double
    self->data.NetRisk = InvestorProdRCAMSMarginField_NetRisk;
        
    ///品种间对冲风险
    // TThostFtdcMoneyType double
    self->data.InterProdRisk = InvestorProdRCAMSMarginField_InterProdRisk;
        
    ///空头期权风险调整
    // TThostFtdcMoneyType double
    self->data.ShortOptRiskAdj = InvestorProdRCAMSMarginField_ShortOptRiskAdj;
        
    ///空头期权权利金
    // TThostFtdcMoneyType double
    self->data.OptionRoyalty = InvestorProdRCAMSMarginField_OptionRoyalty;
        
    ///大边组合平仓冻结保证金
    // TThostFtdcMoneyType double
    self->data.MMSACloseFrozenMargin = InvestorProdRCAMSMarginField_MMSACloseFrozenMargin;
        
    ///策略组合平仓/行权冻结保证金
    // TThostFtdcMoneyType double
    self->data.CloseCombFrozenMargin = InvestorProdRCAMSMarginField_CloseCombFrozenMargin;
        
    ///平仓/行权冻结保证金
    // TThostFtdcMoneyType double
    self->data.CloseFrozenMargin = InvestorProdRCAMSMarginField_CloseFrozenMargin;
        
    ///大边组合开仓冻结保证金
    // TThostFtdcMoneyType double
    self->data.MMSAOpenFrozenMargin = InvestorProdRCAMSMarginField_MMSAOpenFrozenMargin;
        
    ///交割月期货开仓冻结保证金
    // TThostFtdcMoneyType double
    self->data.DeliveryOpenFrozenMargin = InvestorProdRCAMSMarginField_DeliveryOpenFrozenMargin;
        
    ///开仓冻结保证金
    // TThostFtdcMoneyType double
    self->data.OpenFrozenMargin = InvestorProdRCAMSMarginField_OpenFrozenMargin;
        
    ///投资者冻结保证金
    // TThostFtdcMoneyType double
    self->data.UseFrozenMargin = InvestorProdRCAMSMarginField_UseFrozenMargin;
        
    ///大边组合交易所持仓保证金
    // TThostFtdcMoneyType double
    self->data.MMSAExchMargin = InvestorProdRCAMSMarginField_MMSAExchMargin;
        
    ///交割月期货交易所持仓保证金
    // TThostFtdcMoneyType double
    self->data.DeliveryExchMargin = InvestorProdRCAMSMarginField_DeliveryExchMargin;
        
    ///策略组合交易所保证金
    // TThostFtdcMoneyType double
    self->data.CombExchMargin = InvestorProdRCAMSMarginField_CombExchMargin;
        
    ///交易所持仓保证金
    // TThostFtdcMoneyType double
    self->data.ExchMargin = InvestorProdRCAMSMarginField_ExchMargin;
        
    ///投资者持仓保证金
    // TThostFtdcMoneyType double
    self->data.UseMargin = InvestorProdRCAMSMarginField_UseMargin;
        

    return 0;
}

static void PyCThostFtdcInvestorProdRCAMSMarginField_dealloc(PyCThostFtdcInvestorProdRCAMSMarginField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_repr(PyCThostFtdcInvestorProdRCAMSMarginField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:c,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:c,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d}"
#endif

        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"CombProductID", self->data.CombProductID//, (Py_ssize_t)sizeof(self->data.CombProductID) 
        ,"HedgeFlag", self->data.HedgeFlag 
        ,"ProductGroupID", self->data.ProductGroupID//, (Py_ssize_t)sizeof(self->data.ProductGroupID) 
        ,"RiskBeforeDiscount", self->data.RiskBeforeDiscount 
        ,"IntraInstrRisk", self->data.IntraInstrRisk 
        ,"BPosRisk", self->data.BPosRisk 
        ,"SPosRisk", self->data.SPosRisk 
        ,"IntraProdRisk", self->data.IntraProdRisk 
        ,"NetRisk", self->data.NetRisk 
        ,"InterProdRisk", self->data.InterProdRisk 
        ,"ShortOptRiskAdj", self->data.ShortOptRiskAdj 
        ,"OptionRoyalty", self->data.OptionRoyalty 
        ,"MMSACloseFrozenMargin", self->data.MMSACloseFrozenMargin 
        ,"CloseCombFrozenMargin", self->data.CloseCombFrozenMargin 
        ,"CloseFrozenMargin", self->data.CloseFrozenMargin 
        ,"MMSAOpenFrozenMargin", self->data.MMSAOpenFrozenMargin 
        ,"DeliveryOpenFrozenMargin", self->data.DeliveryOpenFrozenMargin 
        ,"OpenFrozenMargin", self->data.OpenFrozenMargin 
        ,"UseFrozenMargin", self->data.UseFrozenMargin 
        ,"MMSAExchMargin", self->data.MMSAExchMargin 
        ,"DeliveryExchMargin", self->data.DeliveryExchMargin 
        ,"CombExchMargin", self->data.CombExchMargin 
        ,"ExchMargin", self->data.ExchMargin 
        ,"UseMargin", self->data.UseMargin 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorProdRCAMSMarginField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_ExchangeID(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcInvestorProdRCAMSMarginField_set_ExchangeID(PyCThostFtdcInvestorProdRCAMSMarginField *self, PyObject* val, void *closure) {
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
            
///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_BrokerID(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcInvestorProdRCAMSMarginField_set_BrokerID(PyCThostFtdcInvestorProdRCAMSMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_InvestorID(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcInvestorProdRCAMSMarginField_set_InvestorID(PyCThostFtdcInvestorProdRCAMSMarginField *self, PyObject* val, void *closure) {
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
            
///产品组合代码
// TThostFtdcProductIDType char[41]
static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_CombProductID(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CombProductID, (Py_ssize_t)sizeof(self->data.CombProductID));
    return PyBytes_FromString(self->data.CombProductID);
}

///产品组合代码
// TThostFtdcProductIDType char[41]
static int PyCThostFtdcInvestorProdRCAMSMarginField_set_CombProductID(PyCThostFtdcInvestorProdRCAMSMarginField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CombProductID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CombProductID)) {
        PyErr_SetString(PyExc_ValueError, "CombProductID must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.CombProductID, 0, sizeof(self->data.CombProductID));
    // memcpy(self->data.CombProductID, buf, len);
    strncpy(self->data.CombProductID, buf, sizeof(self->data.CombProductID));
    return 0;
}
            
///投套标志
// TThostFtdcHedgeFlagType char
static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_HedgeFlag(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

///投套标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcInvestorProdRCAMSMarginField_set_HedgeFlag(PyCThostFtdcInvestorProdRCAMSMarginField *self, PyObject* val, void *closure) {
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
            
///商品群代码
// TThostFtdcProductIDType char[41]
static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_ProductGroupID(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProductGroupID, (Py_ssize_t)sizeof(self->data.ProductGroupID));
    return PyBytes_FromString(self->data.ProductGroupID);
}

///商品群代码
// TThostFtdcProductIDType char[41]
static int PyCThostFtdcInvestorProdRCAMSMarginField_set_ProductGroupID(PyCThostFtdcInvestorProdRCAMSMarginField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ProductGroupID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ProductGroupID)) {
        PyErr_SetString(PyExc_ValueError, "ProductGroupID must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.ProductGroupID, 0, sizeof(self->data.ProductGroupID));
    // memcpy(self->data.ProductGroupID, buf, len);
    strncpy(self->data.ProductGroupID, buf, sizeof(self->data.ProductGroupID));
    return 0;
}
            
///品种组合前风险
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_RiskBeforeDiscount(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.RiskBeforeDiscount);
}

///品种组合前风险
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdRCAMSMarginField_set_RiskBeforeDiscount(PyCThostFtdcInvestorProdRCAMSMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "RiskBeforeDiscount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.RiskBeforeDiscount = buf;
    return 0;
}
        
///同合约对冲风险
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_IntraInstrRisk(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.IntraInstrRisk);
}

///同合约对冲风险
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdRCAMSMarginField_set_IntraInstrRisk(PyCThostFtdcInvestorProdRCAMSMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IntraInstrRisk Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.IntraInstrRisk = buf;
    return 0;
}
        
///品种买持仓风险
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_BPosRisk(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.BPosRisk);
}

///品种买持仓风险
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdRCAMSMarginField_set_BPosRisk(PyCThostFtdcInvestorProdRCAMSMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BPosRisk Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BPosRisk = buf;
    return 0;
}
        
///品种卖持仓风险
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_SPosRisk(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SPosRisk);
}

///品种卖持仓风险
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdRCAMSMarginField_set_SPosRisk(PyCThostFtdcInvestorProdRCAMSMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SPosRisk Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SPosRisk = buf;
    return 0;
}
        
///品种内对冲风险
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_IntraProdRisk(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.IntraProdRisk);
}

///品种内对冲风险
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdRCAMSMarginField_set_IntraProdRisk(PyCThostFtdcInvestorProdRCAMSMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IntraProdRisk Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.IntraProdRisk = buf;
    return 0;
}
        
///品种净持仓风险
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_NetRisk(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.NetRisk);
}

///品种净持仓风险
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdRCAMSMarginField_set_NetRisk(PyCThostFtdcInvestorProdRCAMSMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "NetRisk Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.NetRisk = buf;
    return 0;
}
        
///品种间对冲风险
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_InterProdRisk(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.InterProdRisk);
}

///品种间对冲风险
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdRCAMSMarginField_set_InterProdRisk(PyCThostFtdcInvestorProdRCAMSMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InterProdRisk Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.InterProdRisk = buf;
    return 0;
}
        
///空头期权风险调整
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_ShortOptRiskAdj(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ShortOptRiskAdj);
}

///空头期权风险调整
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdRCAMSMarginField_set_ShortOptRiskAdj(PyCThostFtdcInvestorProdRCAMSMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ShortOptRiskAdj Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ShortOptRiskAdj = buf;
    return 0;
}
        
///空头期权权利金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_OptionRoyalty(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.OptionRoyalty);
}

///空头期权权利金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdRCAMSMarginField_set_OptionRoyalty(PyCThostFtdcInvestorProdRCAMSMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OptionRoyalty Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OptionRoyalty = buf;
    return 0;
}
        
///大边组合平仓冻结保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_MMSACloseFrozenMargin(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.MMSACloseFrozenMargin);
}

///大边组合平仓冻结保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdRCAMSMarginField_set_MMSACloseFrozenMargin(PyCThostFtdcInvestorProdRCAMSMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MMSACloseFrozenMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.MMSACloseFrozenMargin = buf;
    return 0;
}
        
///策略组合平仓/行权冻结保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_CloseCombFrozenMargin(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CloseCombFrozenMargin);
}

///策略组合平仓/行权冻结保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdRCAMSMarginField_set_CloseCombFrozenMargin(PyCThostFtdcInvestorProdRCAMSMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CloseCombFrozenMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CloseCombFrozenMargin = buf;
    return 0;
}
        
///平仓/行权冻结保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_CloseFrozenMargin(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CloseFrozenMargin);
}

///平仓/行权冻结保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdRCAMSMarginField_set_CloseFrozenMargin(PyCThostFtdcInvestorProdRCAMSMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CloseFrozenMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CloseFrozenMargin = buf;
    return 0;
}
        
///大边组合开仓冻结保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_MMSAOpenFrozenMargin(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.MMSAOpenFrozenMargin);
}

///大边组合开仓冻结保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdRCAMSMarginField_set_MMSAOpenFrozenMargin(PyCThostFtdcInvestorProdRCAMSMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MMSAOpenFrozenMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.MMSAOpenFrozenMargin = buf;
    return 0;
}
        
///交割月期货开仓冻结保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_DeliveryOpenFrozenMargin(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.DeliveryOpenFrozenMargin);
}

///交割月期货开仓冻结保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdRCAMSMarginField_set_DeliveryOpenFrozenMargin(PyCThostFtdcInvestorProdRCAMSMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DeliveryOpenFrozenMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.DeliveryOpenFrozenMargin = buf;
    return 0;
}
        
///开仓冻结保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_OpenFrozenMargin(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.OpenFrozenMargin);
}

///开仓冻结保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdRCAMSMarginField_set_OpenFrozenMargin(PyCThostFtdcInvestorProdRCAMSMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OpenFrozenMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OpenFrozenMargin = buf;
    return 0;
}
        
///投资者冻结保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_UseFrozenMargin(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.UseFrozenMargin);
}

///投资者冻结保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdRCAMSMarginField_set_UseFrozenMargin(PyCThostFtdcInvestorProdRCAMSMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UseFrozenMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.UseFrozenMargin = buf;
    return 0;
}
        
///大边组合交易所持仓保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_MMSAExchMargin(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.MMSAExchMargin);
}

///大边组合交易所持仓保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdRCAMSMarginField_set_MMSAExchMargin(PyCThostFtdcInvestorProdRCAMSMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MMSAExchMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.MMSAExchMargin = buf;
    return 0;
}
        
///交割月期货交易所持仓保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_DeliveryExchMargin(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.DeliveryExchMargin);
}

///交割月期货交易所持仓保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdRCAMSMarginField_set_DeliveryExchMargin(PyCThostFtdcInvestorProdRCAMSMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DeliveryExchMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.DeliveryExchMargin = buf;
    return 0;
}
        
///策略组合交易所保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_CombExchMargin(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CombExchMargin);
}

///策略组合交易所保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdRCAMSMarginField_set_CombExchMargin(PyCThostFtdcInvestorProdRCAMSMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CombExchMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CombExchMargin = buf;
    return 0;
}
        
///交易所持仓保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_ExchMargin(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ExchMargin);
}

///交易所持仓保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdRCAMSMarginField_set_ExchMargin(PyCThostFtdcInvestorProdRCAMSMarginField *self, PyObject* val, void *closure) {
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
        
///投资者持仓保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_UseMargin(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.UseMargin);
}

///投资者持仓保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorProdRCAMSMarginField_set_UseMargin(PyCThostFtdcInvestorProdRCAMSMarginField *self, PyObject* val, void *closure) {
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
        

static PyGetSetDef PyCThostFtdcInvestorProdRCAMSMarginField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_ExchangeID, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_BrokerID, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_InvestorID, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_InvestorID, (char *)"InvestorID", NULL},
    ///产品组合代码 
    {(char *)"CombProductID", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_CombProductID, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_CombProductID, (char *)"CombProductID", NULL},
    ///投套标志 
    {(char *)"HedgeFlag", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_HedgeFlag, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
    ///商品群代码 
    {(char *)"ProductGroupID", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_ProductGroupID, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_ProductGroupID, (char *)"ProductGroupID", NULL},
    ///品种组合前风险 
    {(char *)"RiskBeforeDiscount", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_RiskBeforeDiscount, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_RiskBeforeDiscount, (char *)"RiskBeforeDiscount", NULL},
    ///同合约对冲风险 
    {(char *)"IntraInstrRisk", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_IntraInstrRisk, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_IntraInstrRisk, (char *)"IntraInstrRisk", NULL},
    ///品种买持仓风险 
    {(char *)"BPosRisk", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_BPosRisk, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_BPosRisk, (char *)"BPosRisk", NULL},
    ///品种卖持仓风险 
    {(char *)"SPosRisk", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_SPosRisk, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_SPosRisk, (char *)"SPosRisk", NULL},
    ///品种内对冲风险 
    {(char *)"IntraProdRisk", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_IntraProdRisk, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_IntraProdRisk, (char *)"IntraProdRisk", NULL},
    ///品种净持仓风险 
    {(char *)"NetRisk", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_NetRisk, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_NetRisk, (char *)"NetRisk", NULL},
    ///品种间对冲风险 
    {(char *)"InterProdRisk", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_InterProdRisk, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_InterProdRisk, (char *)"InterProdRisk", NULL},
    ///空头期权风险调整 
    {(char *)"ShortOptRiskAdj", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_ShortOptRiskAdj, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_ShortOptRiskAdj, (char *)"ShortOptRiskAdj", NULL},
    ///空头期权权利金 
    {(char *)"OptionRoyalty", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_OptionRoyalty, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_OptionRoyalty, (char *)"OptionRoyalty", NULL},
    ///大边组合平仓冻结保证金 
    {(char *)"MMSACloseFrozenMargin", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_MMSACloseFrozenMargin, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_MMSACloseFrozenMargin, (char *)"MMSACloseFrozenMargin", NULL},
    ///策略组合平仓/行权冻结保证金 
    {(char *)"CloseCombFrozenMargin", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_CloseCombFrozenMargin, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_CloseCombFrozenMargin, (char *)"CloseCombFrozenMargin", NULL},
    ///平仓/行权冻结保证金 
    {(char *)"CloseFrozenMargin", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_CloseFrozenMargin, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_CloseFrozenMargin, (char *)"CloseFrozenMargin", NULL},
    ///大边组合开仓冻结保证金 
    {(char *)"MMSAOpenFrozenMargin", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_MMSAOpenFrozenMargin, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_MMSAOpenFrozenMargin, (char *)"MMSAOpenFrozenMargin", NULL},
    ///交割月期货开仓冻结保证金 
    {(char *)"DeliveryOpenFrozenMargin", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_DeliveryOpenFrozenMargin, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_DeliveryOpenFrozenMargin, (char *)"DeliveryOpenFrozenMargin", NULL},
    ///开仓冻结保证金 
    {(char *)"OpenFrozenMargin", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_OpenFrozenMargin, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_OpenFrozenMargin, (char *)"OpenFrozenMargin", NULL},
    ///投资者冻结保证金 
    {(char *)"UseFrozenMargin", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_UseFrozenMargin, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_UseFrozenMargin, (char *)"UseFrozenMargin", NULL},
    ///大边组合交易所持仓保证金 
    {(char *)"MMSAExchMargin", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_MMSAExchMargin, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_MMSAExchMargin, (char *)"MMSAExchMargin", NULL},
    ///交割月期货交易所持仓保证金 
    {(char *)"DeliveryExchMargin", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_DeliveryExchMargin, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_DeliveryExchMargin, (char *)"DeliveryExchMargin", NULL},
    ///策略组合交易所保证金 
    {(char *)"CombExchMargin", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_CombExchMargin, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_CombExchMargin, (char *)"CombExchMargin", NULL},
    ///交易所持仓保证金 
    {(char *)"ExchMargin", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_ExchMargin, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_ExchMargin, (char *)"ExchMargin", NULL},
    ///投资者持仓保证金 
    {(char *)"UseMargin", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_UseMargin, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_UseMargin, (char *)"UseMargin", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInvestorProdRCAMSMarginFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInvestorProdRCAMSMarginField",	/* tp_name */
	sizeof(PyCThostFtdcInvestorProdRCAMSMarginField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInvestorProdRCAMSMarginField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInvestorProdRCAMSMarginField_repr,   /* tp_repr */
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
	"CThostFtdcInvestorProdRCAMSMarginField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInvestorProdRCAMSMarginField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInvestorProdRCAMSMarginField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInvestorProdRCAMSMarginField_new,       /* tp_new */
};

int PyCThostFtdcInvestorProdRCAMSMarginFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInvestorProdRCAMSMarginField  */
	if (PyType_Ready(&PyCThostFtdcInvestorProdRCAMSMarginFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInvestorProdRCAMSMarginField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInvestorProdRCAMSMarginFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInvestorProdRCAMSMarginField", (PyObject *)&PyCThostFtdcInvestorProdRCAMSMarginFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorProdRCAMSMarginField to module");
        Py_DECREF(&PyCThostFtdcInvestorProdRCAMSMarginFieldType);
		return -1;
    }

    return 0;
}
