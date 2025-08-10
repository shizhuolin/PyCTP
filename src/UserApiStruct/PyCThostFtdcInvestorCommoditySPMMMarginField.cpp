
#include "PyCThostFtdcInvestorCommoditySPMMMarginField.h"

///投资者商品组SPMM记录

static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInvestorCommoditySPMMMarginField *self = (PyCThostFtdcInvestorCommoditySPMMMarginField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcInvestorCommoditySPMMMarginField_init(PyCThostFtdcInvestorCommoditySPMMMarginField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "BrokerID", "InvestorID", "CommodityID", "MarginBeforeDiscount", "MarginNoDiscount", "LongPosRisk", "LongOpenFrozenRisk", "LongCloseFrozenRisk", "ShortPosRisk", "ShortOpenFrozenRisk", "ShortCloseFrozenRisk", "IntraCommodityRate", "OptionDiscountRate", "PosDiscount", "OpenFrozenDiscount", "NetRisk", "CloseFrozenMargin", "FrozenCommission", "Commission", "FrozenCash", "CashIn", "StrikeFrozenMargin",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *InvestorCommoditySPMMMarginField_ExchangeID = NULL;
    Py_ssize_t InvestorCommoditySPMMMarginField_ExchangeID_len = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *InvestorCommoditySPMMMarginField_BrokerID = NULL;
    Py_ssize_t InvestorCommoditySPMMMarginField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *InvestorCommoditySPMMMarginField_InvestorID = NULL;
    Py_ssize_t InvestorCommoditySPMMMarginField_InvestorID_len = 0;
            
    ///商品组代码
    // TThostFtdcSPMMProductIDType char[41]
    const char *InvestorCommoditySPMMMarginField_CommodityID = NULL;
    Py_ssize_t InvestorCommoditySPMMMarginField_CommodityID_len = 0;
            
    ///优惠仓位应收保证金
    // TThostFtdcMoneyType double
    double InvestorCommoditySPMMMarginField_MarginBeforeDiscount = 0.0;
        
    ///不优惠仓位应收保证金
    // TThostFtdcMoneyType double
    double InvestorCommoditySPMMMarginField_MarginNoDiscount = 0.0;
        
    ///多头实仓风险
    // TThostFtdcMoneyType double
    double InvestorCommoditySPMMMarginField_LongPosRisk = 0.0;
        
    ///多头开仓冻结风险
    // TThostFtdcMoneyType double
    double InvestorCommoditySPMMMarginField_LongOpenFrozenRisk = 0.0;
        
    ///多头被平冻结风险
    // TThostFtdcMoneyType double
    double InvestorCommoditySPMMMarginField_LongCloseFrozenRisk = 0.0;
        
    ///空头实仓风险
    // TThostFtdcMoneyType double
    double InvestorCommoditySPMMMarginField_ShortPosRisk = 0.0;
        
    ///空头开仓冻结风险
    // TThostFtdcMoneyType double
    double InvestorCommoditySPMMMarginField_ShortOpenFrozenRisk = 0.0;
        
    ///空头被平冻结风险
    // TThostFtdcMoneyType double
    double InvestorCommoditySPMMMarginField_ShortCloseFrozenRisk = 0.0;
        
    ///SPMM品种内跨期优惠系数
    // TThostFtdcSPMMDiscountRatioType double
    double InvestorCommoditySPMMMarginField_IntraCommodityRate = 0.0;
        
    ///SPMM期权优惠系数
    // TThostFtdcSPMMDiscountRatioType double
    double InvestorCommoditySPMMMarginField_OptionDiscountRate = 0.0;
        
    ///实仓对冲优惠金额
    // TThostFtdcMoneyType double
    double InvestorCommoditySPMMMarginField_PosDiscount = 0.0;
        
    ///开仓报单对冲优惠金额
    // TThostFtdcMoneyType double
    double InvestorCommoditySPMMMarginField_OpenFrozenDiscount = 0.0;
        
    ///品种风险净头
    // TThostFtdcMoneyType double
    double InvestorCommoditySPMMMarginField_NetRisk = 0.0;
        
    ///平仓冻结保证金
    // TThostFtdcMoneyType double
    double InvestorCommoditySPMMMarginField_CloseFrozenMargin = 0.0;
        
    ///冻结的手续费
    // TThostFtdcMoneyType double
    double InvestorCommoditySPMMMarginField_FrozenCommission = 0.0;
        
    ///手续费
    // TThostFtdcMoneyType double
    double InvestorCommoditySPMMMarginField_Commission = 0.0;
        
    ///冻结的资金
    // TThostFtdcMoneyType double
    double InvestorCommoditySPMMMarginField_FrozenCash = 0.0;
        
    ///资金差额
    // TThostFtdcMoneyType double
    double InvestorCommoditySPMMMarginField_CashIn = 0.0;
        
    ///行权冻结资金
    // TThostFtdcMoneyType double
    double InvestorCommoditySPMMMarginField_StrikeFrozenMargin = 0.0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#ddddddddddddddddddd", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#ddddddddddddddddddd", (char **)kwlist
#endif

        , &InvestorCommoditySPMMMarginField_ExchangeID, &InvestorCommoditySPMMMarginField_ExchangeID_len 
        , &InvestorCommoditySPMMMarginField_BrokerID, &InvestorCommoditySPMMMarginField_BrokerID_len 
        , &InvestorCommoditySPMMMarginField_InvestorID, &InvestorCommoditySPMMMarginField_InvestorID_len 
        , &InvestorCommoditySPMMMarginField_CommodityID, &InvestorCommoditySPMMMarginField_CommodityID_len 
        , &InvestorCommoditySPMMMarginField_MarginBeforeDiscount 
        , &InvestorCommoditySPMMMarginField_MarginNoDiscount 
        , &InvestorCommoditySPMMMarginField_LongPosRisk 
        , &InvestorCommoditySPMMMarginField_LongOpenFrozenRisk 
        , &InvestorCommoditySPMMMarginField_LongCloseFrozenRisk 
        , &InvestorCommoditySPMMMarginField_ShortPosRisk 
        , &InvestorCommoditySPMMMarginField_ShortOpenFrozenRisk 
        , &InvestorCommoditySPMMMarginField_ShortCloseFrozenRisk 
        , &InvestorCommoditySPMMMarginField_IntraCommodityRate 
        , &InvestorCommoditySPMMMarginField_OptionDiscountRate 
        , &InvestorCommoditySPMMMarginField_PosDiscount 
        , &InvestorCommoditySPMMMarginField_OpenFrozenDiscount 
        , &InvestorCommoditySPMMMarginField_NetRisk 
        , &InvestorCommoditySPMMMarginField_CloseFrozenMargin 
        , &InvestorCommoditySPMMMarginField_FrozenCommission 
        , &InvestorCommoditySPMMMarginField_Commission 
        , &InvestorCommoditySPMMMarginField_FrozenCash 
        , &InvestorCommoditySPMMMarginField_CashIn 
        , &InvestorCommoditySPMMMarginField_StrikeFrozenMargin 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( InvestorCommoditySPMMMarginField_ExchangeID != NULL ) {
        if(InvestorCommoditySPMMMarginField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", InvestorCommoditySPMMMarginField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, InvestorCommoditySPMMMarginField_ExchangeID, InvestorCommoditySPMMMarginField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, InvestorCommoditySPMMMarginField_ExchangeID, sizeof(self->data.ExchangeID) );
        InvestorCommoditySPMMMarginField_ExchangeID = NULL;
    }
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( InvestorCommoditySPMMMarginField_BrokerID != NULL ) {
        if(InvestorCommoditySPMMMarginField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", InvestorCommoditySPMMMarginField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, InvestorCommoditySPMMMarginField_BrokerID, InvestorCommoditySPMMMarginField_BrokerID_len);        
        strncpy(self->data.BrokerID, InvestorCommoditySPMMMarginField_BrokerID, sizeof(self->data.BrokerID) );
        InvestorCommoditySPMMMarginField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( InvestorCommoditySPMMMarginField_InvestorID != NULL ) {
        if(InvestorCommoditySPMMMarginField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", InvestorCommoditySPMMMarginField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, InvestorCommoditySPMMMarginField_InvestorID, InvestorCommoditySPMMMarginField_InvestorID_len);        
        strncpy(self->data.InvestorID, InvestorCommoditySPMMMarginField_InvestorID, sizeof(self->data.InvestorID) );
        InvestorCommoditySPMMMarginField_InvestorID = NULL;
    }
            
    ///商品组代码
    // TThostFtdcSPMMProductIDType char[41]
    if( InvestorCommoditySPMMMarginField_CommodityID != NULL ) {
        if(InvestorCommoditySPMMMarginField_CommodityID_len > (Py_ssize_t)sizeof(self->data.CommodityID)) {
            PyErr_Format(PyExc_ValueError, "CommodityID too long: length=%zd (max allowed is %zd)", InvestorCommoditySPMMMarginField_CommodityID_len, (Py_ssize_t)sizeof(self->data.CommodityID));
            return -1;
        }
        // memset(self->data.CommodityID, 0, sizeof(self->data.CommodityID));
        // memcpy(self->data.CommodityID, InvestorCommoditySPMMMarginField_CommodityID, InvestorCommoditySPMMMarginField_CommodityID_len);        
        strncpy(self->data.CommodityID, InvestorCommoditySPMMMarginField_CommodityID, sizeof(self->data.CommodityID) );
        InvestorCommoditySPMMMarginField_CommodityID = NULL;
    }
            
    ///优惠仓位应收保证金
    // TThostFtdcMoneyType double
    self->data.MarginBeforeDiscount = InvestorCommoditySPMMMarginField_MarginBeforeDiscount;
        
    ///不优惠仓位应收保证金
    // TThostFtdcMoneyType double
    self->data.MarginNoDiscount = InvestorCommoditySPMMMarginField_MarginNoDiscount;
        
    ///多头实仓风险
    // TThostFtdcMoneyType double
    self->data.LongPosRisk = InvestorCommoditySPMMMarginField_LongPosRisk;
        
    ///多头开仓冻结风险
    // TThostFtdcMoneyType double
    self->data.LongOpenFrozenRisk = InvestorCommoditySPMMMarginField_LongOpenFrozenRisk;
        
    ///多头被平冻结风险
    // TThostFtdcMoneyType double
    self->data.LongCloseFrozenRisk = InvestorCommoditySPMMMarginField_LongCloseFrozenRisk;
        
    ///空头实仓风险
    // TThostFtdcMoneyType double
    self->data.ShortPosRisk = InvestorCommoditySPMMMarginField_ShortPosRisk;
        
    ///空头开仓冻结风险
    // TThostFtdcMoneyType double
    self->data.ShortOpenFrozenRisk = InvestorCommoditySPMMMarginField_ShortOpenFrozenRisk;
        
    ///空头被平冻结风险
    // TThostFtdcMoneyType double
    self->data.ShortCloseFrozenRisk = InvestorCommoditySPMMMarginField_ShortCloseFrozenRisk;
        
    ///SPMM品种内跨期优惠系数
    // TThostFtdcSPMMDiscountRatioType double
    self->data.IntraCommodityRate = InvestorCommoditySPMMMarginField_IntraCommodityRate;
        
    ///SPMM期权优惠系数
    // TThostFtdcSPMMDiscountRatioType double
    self->data.OptionDiscountRate = InvestorCommoditySPMMMarginField_OptionDiscountRate;
        
    ///实仓对冲优惠金额
    // TThostFtdcMoneyType double
    self->data.PosDiscount = InvestorCommoditySPMMMarginField_PosDiscount;
        
    ///开仓报单对冲优惠金额
    // TThostFtdcMoneyType double
    self->data.OpenFrozenDiscount = InvestorCommoditySPMMMarginField_OpenFrozenDiscount;
        
    ///品种风险净头
    // TThostFtdcMoneyType double
    self->data.NetRisk = InvestorCommoditySPMMMarginField_NetRisk;
        
    ///平仓冻结保证金
    // TThostFtdcMoneyType double
    self->data.CloseFrozenMargin = InvestorCommoditySPMMMarginField_CloseFrozenMargin;
        
    ///冻结的手续费
    // TThostFtdcMoneyType double
    self->data.FrozenCommission = InvestorCommoditySPMMMarginField_FrozenCommission;
        
    ///手续费
    // TThostFtdcMoneyType double
    self->data.Commission = InvestorCommoditySPMMMarginField_Commission;
        
    ///冻结的资金
    // TThostFtdcMoneyType double
    self->data.FrozenCash = InvestorCommoditySPMMMarginField_FrozenCash;
        
    ///资金差额
    // TThostFtdcMoneyType double
    self->data.CashIn = InvestorCommoditySPMMMarginField_CashIn;
        
    ///行权冻结资金
    // TThostFtdcMoneyType double
    self->data.StrikeFrozenMargin = InvestorCommoditySPMMMarginField_StrikeFrozenMargin;
        

    return 0;
}

static void PyCThostFtdcInvestorCommoditySPMMMarginField_dealloc(PyCThostFtdcInvestorCommoditySPMMMarginField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_repr(PyCThostFtdcInvestorCommoditySPMMMarginField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d}"
#endif

        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"CommodityID", self->data.CommodityID//, (Py_ssize_t)sizeof(self->data.CommodityID) 
        ,"MarginBeforeDiscount", self->data.MarginBeforeDiscount 
        ,"MarginNoDiscount", self->data.MarginNoDiscount 
        ,"LongPosRisk", self->data.LongPosRisk 
        ,"LongOpenFrozenRisk", self->data.LongOpenFrozenRisk 
        ,"LongCloseFrozenRisk", self->data.LongCloseFrozenRisk 
        ,"ShortPosRisk", self->data.ShortPosRisk 
        ,"ShortOpenFrozenRisk", self->data.ShortOpenFrozenRisk 
        ,"ShortCloseFrozenRisk", self->data.ShortCloseFrozenRisk 
        ,"IntraCommodityRate", self->data.IntraCommodityRate 
        ,"OptionDiscountRate", self->data.OptionDiscountRate 
        ,"PosDiscount", self->data.PosDiscount 
        ,"OpenFrozenDiscount", self->data.OpenFrozenDiscount 
        ,"NetRisk", self->data.NetRisk 
        ,"CloseFrozenMargin", self->data.CloseFrozenMargin 
        ,"FrozenCommission", self->data.FrozenCommission 
        ,"Commission", self->data.Commission 
        ,"FrozenCash", self->data.FrozenCash 
        ,"CashIn", self->data.CashIn 
        ,"StrikeFrozenMargin", self->data.StrikeFrozenMargin 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorCommoditySPMMMarginField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_get_ExchangeID(PyCThostFtdcInvestorCommoditySPMMMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcInvestorCommoditySPMMMarginField_set_ExchangeID(PyCThostFtdcInvestorCommoditySPMMMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_get_BrokerID(PyCThostFtdcInvestorCommoditySPMMMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcInvestorCommoditySPMMMarginField_set_BrokerID(PyCThostFtdcInvestorCommoditySPMMMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_get_InvestorID(PyCThostFtdcInvestorCommoditySPMMMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcInvestorCommoditySPMMMarginField_set_InvestorID(PyCThostFtdcInvestorCommoditySPMMMarginField *self, PyObject* val, void *closure) {
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
            
///商品组代码
// TThostFtdcSPMMProductIDType char[41]
static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_get_CommodityID(PyCThostFtdcInvestorCommoditySPMMMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CommodityID, (Py_ssize_t)sizeof(self->data.CommodityID));
    return PyBytes_FromString(self->data.CommodityID);
}

///商品组代码
// TThostFtdcSPMMProductIDType char[41]
static int PyCThostFtdcInvestorCommoditySPMMMarginField_set_CommodityID(PyCThostFtdcInvestorCommoditySPMMMarginField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CommodityID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CommodityID)) {
        PyErr_SetString(PyExc_ValueError, "CommodityID must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.CommodityID, 0, sizeof(self->data.CommodityID));
    // memcpy(self->data.CommodityID, buf, len);
    strncpy(self->data.CommodityID, buf, sizeof(self->data.CommodityID));
    return 0;
}
            
///优惠仓位应收保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_get_MarginBeforeDiscount(PyCThostFtdcInvestorCommoditySPMMMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.MarginBeforeDiscount);
}

///优惠仓位应收保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorCommoditySPMMMarginField_set_MarginBeforeDiscount(PyCThostFtdcInvestorCommoditySPMMMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MarginBeforeDiscount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.MarginBeforeDiscount = buf;
    return 0;
}
        
///不优惠仓位应收保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_get_MarginNoDiscount(PyCThostFtdcInvestorCommoditySPMMMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.MarginNoDiscount);
}

///不优惠仓位应收保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorCommoditySPMMMarginField_set_MarginNoDiscount(PyCThostFtdcInvestorCommoditySPMMMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MarginNoDiscount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.MarginNoDiscount = buf;
    return 0;
}
        
///多头实仓风险
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_get_LongPosRisk(PyCThostFtdcInvestorCommoditySPMMMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LongPosRisk);
}

///多头实仓风险
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorCommoditySPMMMarginField_set_LongPosRisk(PyCThostFtdcInvestorCommoditySPMMMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LongPosRisk Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LongPosRisk = buf;
    return 0;
}
        
///多头开仓冻结风险
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_get_LongOpenFrozenRisk(PyCThostFtdcInvestorCommoditySPMMMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LongOpenFrozenRisk);
}

///多头开仓冻结风险
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorCommoditySPMMMarginField_set_LongOpenFrozenRisk(PyCThostFtdcInvestorCommoditySPMMMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LongOpenFrozenRisk Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LongOpenFrozenRisk = buf;
    return 0;
}
        
///多头被平冻结风险
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_get_LongCloseFrozenRisk(PyCThostFtdcInvestorCommoditySPMMMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LongCloseFrozenRisk);
}

///多头被平冻结风险
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorCommoditySPMMMarginField_set_LongCloseFrozenRisk(PyCThostFtdcInvestorCommoditySPMMMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LongCloseFrozenRisk Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LongCloseFrozenRisk = buf;
    return 0;
}
        
///空头实仓风险
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_get_ShortPosRisk(PyCThostFtdcInvestorCommoditySPMMMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ShortPosRisk);
}

///空头实仓风险
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorCommoditySPMMMarginField_set_ShortPosRisk(PyCThostFtdcInvestorCommoditySPMMMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ShortPosRisk Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ShortPosRisk = buf;
    return 0;
}
        
///空头开仓冻结风险
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_get_ShortOpenFrozenRisk(PyCThostFtdcInvestorCommoditySPMMMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ShortOpenFrozenRisk);
}

///空头开仓冻结风险
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorCommoditySPMMMarginField_set_ShortOpenFrozenRisk(PyCThostFtdcInvestorCommoditySPMMMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ShortOpenFrozenRisk Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ShortOpenFrozenRisk = buf;
    return 0;
}
        
///空头被平冻结风险
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_get_ShortCloseFrozenRisk(PyCThostFtdcInvestorCommoditySPMMMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ShortCloseFrozenRisk);
}

///空头被平冻结风险
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorCommoditySPMMMarginField_set_ShortCloseFrozenRisk(PyCThostFtdcInvestorCommoditySPMMMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ShortCloseFrozenRisk Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ShortCloseFrozenRisk = buf;
    return 0;
}
        
///SPMM品种内跨期优惠系数
// TThostFtdcSPMMDiscountRatioType double
static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_get_IntraCommodityRate(PyCThostFtdcInvestorCommoditySPMMMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.IntraCommodityRate);
}

///SPMM品种内跨期优惠系数
// TThostFtdcSPMMDiscountRatioType double
static int PyCThostFtdcInvestorCommoditySPMMMarginField_set_IntraCommodityRate(PyCThostFtdcInvestorCommoditySPMMMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IntraCommodityRate Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.IntraCommodityRate = buf;
    return 0;
}
        
///SPMM期权优惠系数
// TThostFtdcSPMMDiscountRatioType double
static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_get_OptionDiscountRate(PyCThostFtdcInvestorCommoditySPMMMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.OptionDiscountRate);
}

///SPMM期权优惠系数
// TThostFtdcSPMMDiscountRatioType double
static int PyCThostFtdcInvestorCommoditySPMMMarginField_set_OptionDiscountRate(PyCThostFtdcInvestorCommoditySPMMMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OptionDiscountRate Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OptionDiscountRate = buf;
    return 0;
}
        
///实仓对冲优惠金额
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_get_PosDiscount(PyCThostFtdcInvestorCommoditySPMMMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PosDiscount);
}

///实仓对冲优惠金额
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorCommoditySPMMMarginField_set_PosDiscount(PyCThostFtdcInvestorCommoditySPMMMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PosDiscount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PosDiscount = buf;
    return 0;
}
        
///开仓报单对冲优惠金额
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_get_OpenFrozenDiscount(PyCThostFtdcInvestorCommoditySPMMMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.OpenFrozenDiscount);
}

///开仓报单对冲优惠金额
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorCommoditySPMMMarginField_set_OpenFrozenDiscount(PyCThostFtdcInvestorCommoditySPMMMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OpenFrozenDiscount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OpenFrozenDiscount = buf;
    return 0;
}
        
///品种风险净头
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_get_NetRisk(PyCThostFtdcInvestorCommoditySPMMMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.NetRisk);
}

///品种风险净头
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorCommoditySPMMMarginField_set_NetRisk(PyCThostFtdcInvestorCommoditySPMMMarginField *self, PyObject* val, void *closure) {
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
        
///平仓冻结保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_get_CloseFrozenMargin(PyCThostFtdcInvestorCommoditySPMMMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CloseFrozenMargin);
}

///平仓冻结保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorCommoditySPMMMarginField_set_CloseFrozenMargin(PyCThostFtdcInvestorCommoditySPMMMarginField *self, PyObject* val, void *closure) {
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
        
///冻结的手续费
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_get_FrozenCommission(PyCThostFtdcInvestorCommoditySPMMMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FrozenCommission);
}

///冻结的手续费
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorCommoditySPMMMarginField_set_FrozenCommission(PyCThostFtdcInvestorCommoditySPMMMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_get_Commission(PyCThostFtdcInvestorCommoditySPMMMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Commission);
}

///手续费
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorCommoditySPMMMarginField_set_Commission(PyCThostFtdcInvestorCommoditySPMMMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_get_FrozenCash(PyCThostFtdcInvestorCommoditySPMMMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FrozenCash);
}

///冻结的资金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorCommoditySPMMMarginField_set_FrozenCash(PyCThostFtdcInvestorCommoditySPMMMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_get_CashIn(PyCThostFtdcInvestorCommoditySPMMMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CashIn);
}

///资金差额
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorCommoditySPMMMarginField_set_CashIn(PyCThostFtdcInvestorCommoditySPMMMarginField *self, PyObject* val, void *closure) {
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
        
///行权冻结资金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_get_StrikeFrozenMargin(PyCThostFtdcInvestorCommoditySPMMMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.StrikeFrozenMargin);
}

///行权冻结资金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorCommoditySPMMMarginField_set_StrikeFrozenMargin(PyCThostFtdcInvestorCommoditySPMMMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "StrikeFrozenMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.StrikeFrozenMargin = buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcInvestorCommoditySPMMMarginField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcInvestorCommoditySPMMMarginField_get_ExchangeID, (setter)PyCThostFtdcInvestorCommoditySPMMMarginField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcInvestorCommoditySPMMMarginField_get_BrokerID, (setter)PyCThostFtdcInvestorCommoditySPMMMarginField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcInvestorCommoditySPMMMarginField_get_InvestorID, (setter)PyCThostFtdcInvestorCommoditySPMMMarginField_set_InvestorID, (char *)"InvestorID", NULL},
    ///商品组代码 
    {(char *)"CommodityID", (getter)PyCThostFtdcInvestorCommoditySPMMMarginField_get_CommodityID, (setter)PyCThostFtdcInvestorCommoditySPMMMarginField_set_CommodityID, (char *)"CommodityID", NULL},
    ///优惠仓位应收保证金 
    {(char *)"MarginBeforeDiscount", (getter)PyCThostFtdcInvestorCommoditySPMMMarginField_get_MarginBeforeDiscount, (setter)PyCThostFtdcInvestorCommoditySPMMMarginField_set_MarginBeforeDiscount, (char *)"MarginBeforeDiscount", NULL},
    ///不优惠仓位应收保证金 
    {(char *)"MarginNoDiscount", (getter)PyCThostFtdcInvestorCommoditySPMMMarginField_get_MarginNoDiscount, (setter)PyCThostFtdcInvestorCommoditySPMMMarginField_set_MarginNoDiscount, (char *)"MarginNoDiscount", NULL},
    ///多头实仓风险 
    {(char *)"LongPosRisk", (getter)PyCThostFtdcInvestorCommoditySPMMMarginField_get_LongPosRisk, (setter)PyCThostFtdcInvestorCommoditySPMMMarginField_set_LongPosRisk, (char *)"LongPosRisk", NULL},
    ///多头开仓冻结风险 
    {(char *)"LongOpenFrozenRisk", (getter)PyCThostFtdcInvestorCommoditySPMMMarginField_get_LongOpenFrozenRisk, (setter)PyCThostFtdcInvestorCommoditySPMMMarginField_set_LongOpenFrozenRisk, (char *)"LongOpenFrozenRisk", NULL},
    ///多头被平冻结风险 
    {(char *)"LongCloseFrozenRisk", (getter)PyCThostFtdcInvestorCommoditySPMMMarginField_get_LongCloseFrozenRisk, (setter)PyCThostFtdcInvestorCommoditySPMMMarginField_set_LongCloseFrozenRisk, (char *)"LongCloseFrozenRisk", NULL},
    ///空头实仓风险 
    {(char *)"ShortPosRisk", (getter)PyCThostFtdcInvestorCommoditySPMMMarginField_get_ShortPosRisk, (setter)PyCThostFtdcInvestorCommoditySPMMMarginField_set_ShortPosRisk, (char *)"ShortPosRisk", NULL},
    ///空头开仓冻结风险 
    {(char *)"ShortOpenFrozenRisk", (getter)PyCThostFtdcInvestorCommoditySPMMMarginField_get_ShortOpenFrozenRisk, (setter)PyCThostFtdcInvestorCommoditySPMMMarginField_set_ShortOpenFrozenRisk, (char *)"ShortOpenFrozenRisk", NULL},
    ///空头被平冻结风险 
    {(char *)"ShortCloseFrozenRisk", (getter)PyCThostFtdcInvestorCommoditySPMMMarginField_get_ShortCloseFrozenRisk, (setter)PyCThostFtdcInvestorCommoditySPMMMarginField_set_ShortCloseFrozenRisk, (char *)"ShortCloseFrozenRisk", NULL},
    ///SPMM品种内跨期优惠系数 
    {(char *)"IntraCommodityRate", (getter)PyCThostFtdcInvestorCommoditySPMMMarginField_get_IntraCommodityRate, (setter)PyCThostFtdcInvestorCommoditySPMMMarginField_set_IntraCommodityRate, (char *)"IntraCommodityRate", NULL},
    ///SPMM期权优惠系数 
    {(char *)"OptionDiscountRate", (getter)PyCThostFtdcInvestorCommoditySPMMMarginField_get_OptionDiscountRate, (setter)PyCThostFtdcInvestorCommoditySPMMMarginField_set_OptionDiscountRate, (char *)"OptionDiscountRate", NULL},
    ///实仓对冲优惠金额 
    {(char *)"PosDiscount", (getter)PyCThostFtdcInvestorCommoditySPMMMarginField_get_PosDiscount, (setter)PyCThostFtdcInvestorCommoditySPMMMarginField_set_PosDiscount, (char *)"PosDiscount", NULL},
    ///开仓报单对冲优惠金额 
    {(char *)"OpenFrozenDiscount", (getter)PyCThostFtdcInvestorCommoditySPMMMarginField_get_OpenFrozenDiscount, (setter)PyCThostFtdcInvestorCommoditySPMMMarginField_set_OpenFrozenDiscount, (char *)"OpenFrozenDiscount", NULL},
    ///品种风险净头 
    {(char *)"NetRisk", (getter)PyCThostFtdcInvestorCommoditySPMMMarginField_get_NetRisk, (setter)PyCThostFtdcInvestorCommoditySPMMMarginField_set_NetRisk, (char *)"NetRisk", NULL},
    ///平仓冻结保证金 
    {(char *)"CloseFrozenMargin", (getter)PyCThostFtdcInvestorCommoditySPMMMarginField_get_CloseFrozenMargin, (setter)PyCThostFtdcInvestorCommoditySPMMMarginField_set_CloseFrozenMargin, (char *)"CloseFrozenMargin", NULL},
    ///冻结的手续费 
    {(char *)"FrozenCommission", (getter)PyCThostFtdcInvestorCommoditySPMMMarginField_get_FrozenCommission, (setter)PyCThostFtdcInvestorCommoditySPMMMarginField_set_FrozenCommission, (char *)"FrozenCommission", NULL},
    ///手续费 
    {(char *)"Commission", (getter)PyCThostFtdcInvestorCommoditySPMMMarginField_get_Commission, (setter)PyCThostFtdcInvestorCommoditySPMMMarginField_set_Commission, (char *)"Commission", NULL},
    ///冻结的资金 
    {(char *)"FrozenCash", (getter)PyCThostFtdcInvestorCommoditySPMMMarginField_get_FrozenCash, (setter)PyCThostFtdcInvestorCommoditySPMMMarginField_set_FrozenCash, (char *)"FrozenCash", NULL},
    ///资金差额 
    {(char *)"CashIn", (getter)PyCThostFtdcInvestorCommoditySPMMMarginField_get_CashIn, (setter)PyCThostFtdcInvestorCommoditySPMMMarginField_set_CashIn, (char *)"CashIn", NULL},
    ///行权冻结资金 
    {(char *)"StrikeFrozenMargin", (getter)PyCThostFtdcInvestorCommoditySPMMMarginField_get_StrikeFrozenMargin, (setter)PyCThostFtdcInvestorCommoditySPMMMarginField_set_StrikeFrozenMargin, (char *)"StrikeFrozenMargin", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInvestorCommoditySPMMMarginFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInvestorCommoditySPMMMarginField",	/* tp_name */
	sizeof(PyCThostFtdcInvestorCommoditySPMMMarginField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInvestorCommoditySPMMMarginField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInvestorCommoditySPMMMarginField_repr,   /* tp_repr */
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
	"CThostFtdcInvestorCommoditySPMMMarginField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInvestorCommoditySPMMMarginField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInvestorCommoditySPMMMarginField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInvestorCommoditySPMMMarginField_new,       /* tp_new */
};

int PyCThostFtdcInvestorCommoditySPMMMarginFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInvestorCommoditySPMMMarginField  */
	if (PyType_Ready(&PyCThostFtdcInvestorCommoditySPMMMarginFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInvestorCommoditySPMMMarginField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInvestorCommoditySPMMMarginFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInvestorCommoditySPMMMarginField", (PyObject *)&PyCThostFtdcInvestorCommoditySPMMMarginFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorCommoditySPMMMarginField to module");
        Py_DECREF(&PyCThostFtdcInvestorCommoditySPMMMarginFieldType);
		return -1;
    }

    return 0;
}
