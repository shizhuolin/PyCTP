
#include "PyCThostFtdcInvestorCommodityGroupSPMMMarginField.h"

///投资者商品群SPMM记录

static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self = (PyCThostFtdcInvestorCommodityGroupSPMMMarginField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcInvestorCommodityGroupSPMMMarginField_init(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "BrokerID", "InvestorID", "CommodityGroupID", "MarginBeforeDiscount", "MarginNoDiscount", "LongRisk", "ShortRisk", "CloseFrozenMargin", "InterCommodityRate", "MiniMarginRatio", "AdjustRatio", "IntraCommodityDiscount", "InterCommodityDiscount", "ExchMargin", "InvestorMargin", "FrozenCommission", "Commission", "FrozenCash", "CashIn", "StrikeFrozenMargin",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *InvestorCommodityGroupSPMMMarginField_ExchangeID = NULL;
    Py_ssize_t InvestorCommodityGroupSPMMMarginField_ExchangeID_len = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *InvestorCommodityGroupSPMMMarginField_BrokerID = NULL;
    Py_ssize_t InvestorCommodityGroupSPMMMarginField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *InvestorCommodityGroupSPMMMarginField_InvestorID = NULL;
    Py_ssize_t InvestorCommodityGroupSPMMMarginField_InvestorID_len = 0;
            
    ///商品群代码
    // TThostFtdcSPMMProductIDType char[41]
    const char *InvestorCommodityGroupSPMMMarginField_CommodityGroupID = NULL;
    Py_ssize_t InvestorCommodityGroupSPMMMarginField_CommodityGroupID_len = 0;
            
    ///优惠仓位应收保证金
    // TThostFtdcMoneyType double
    double InvestorCommodityGroupSPMMMarginField_MarginBeforeDiscount = 0.0;
        
    ///不优惠仓位应收保证金
    // TThostFtdcMoneyType double
    double InvestorCommodityGroupSPMMMarginField_MarginNoDiscount = 0.0;
        
    ///多头风险
    // TThostFtdcMoneyType double
    double InvestorCommodityGroupSPMMMarginField_LongRisk = 0.0;
        
    ///空头风险
    // TThostFtdcMoneyType double
    double InvestorCommodityGroupSPMMMarginField_ShortRisk = 0.0;
        
    ///商品群平仓冻结保证金
    // TThostFtdcMoneyType double
    double InvestorCommodityGroupSPMMMarginField_CloseFrozenMargin = 0.0;
        
    ///SPMM跨品种优惠系数
    // TThostFtdcSPMMDiscountRatioType double
    double InvestorCommodityGroupSPMMMarginField_InterCommodityRate = 0.0;
        
    ///商品群最小保证金比例
    // TThostFtdcSPMMDiscountRatioType double
    double InvestorCommodityGroupSPMMMarginField_MiniMarginRatio = 0.0;
        
    ///投资者保证金和交易所保证金的比例
    // TThostFtdcRatioType double
    double InvestorCommodityGroupSPMMMarginField_AdjustRatio = 0.0;
        
    ///SPMM品种内优惠汇总
    // TThostFtdcMoneyType double
    double InvestorCommodityGroupSPMMMarginField_IntraCommodityDiscount = 0.0;
        
    ///SPMM跨品种优惠
    // TThostFtdcMoneyType double
    double InvestorCommodityGroupSPMMMarginField_InterCommodityDiscount = 0.0;
        
    ///交易所保证金
    // TThostFtdcMoneyType double
    double InvestorCommodityGroupSPMMMarginField_ExchMargin = 0.0;
        
    ///投资者保证金
    // TThostFtdcMoneyType double
    double InvestorCommodityGroupSPMMMarginField_InvestorMargin = 0.0;
        
    ///冻结的手续费
    // TThostFtdcMoneyType double
    double InvestorCommodityGroupSPMMMarginField_FrozenCommission = 0.0;
        
    ///手续费
    // TThostFtdcMoneyType double
    double InvestorCommodityGroupSPMMMarginField_Commission = 0.0;
        
    ///冻结的资金
    // TThostFtdcMoneyType double
    double InvestorCommodityGroupSPMMMarginField_FrozenCash = 0.0;
        
    ///资金差额
    // TThostFtdcMoneyType double
    double InvestorCommodityGroupSPMMMarginField_CashIn = 0.0;
        
    ///行权冻结资金
    // TThostFtdcMoneyType double
    double InvestorCommodityGroupSPMMMarginField_StrikeFrozenMargin = 0.0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#ddddddddddddddddd", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#ddddddddddddddddd", (char **)kwlist
#endif

        , &InvestorCommodityGroupSPMMMarginField_ExchangeID, &InvestorCommodityGroupSPMMMarginField_ExchangeID_len 
        , &InvestorCommodityGroupSPMMMarginField_BrokerID, &InvestorCommodityGroupSPMMMarginField_BrokerID_len 
        , &InvestorCommodityGroupSPMMMarginField_InvestorID, &InvestorCommodityGroupSPMMMarginField_InvestorID_len 
        , &InvestorCommodityGroupSPMMMarginField_CommodityGroupID, &InvestorCommodityGroupSPMMMarginField_CommodityGroupID_len 
        , &InvestorCommodityGroupSPMMMarginField_MarginBeforeDiscount 
        , &InvestorCommodityGroupSPMMMarginField_MarginNoDiscount 
        , &InvestorCommodityGroupSPMMMarginField_LongRisk 
        , &InvestorCommodityGroupSPMMMarginField_ShortRisk 
        , &InvestorCommodityGroupSPMMMarginField_CloseFrozenMargin 
        , &InvestorCommodityGroupSPMMMarginField_InterCommodityRate 
        , &InvestorCommodityGroupSPMMMarginField_MiniMarginRatio 
        , &InvestorCommodityGroupSPMMMarginField_AdjustRatio 
        , &InvestorCommodityGroupSPMMMarginField_IntraCommodityDiscount 
        , &InvestorCommodityGroupSPMMMarginField_InterCommodityDiscount 
        , &InvestorCommodityGroupSPMMMarginField_ExchMargin 
        , &InvestorCommodityGroupSPMMMarginField_InvestorMargin 
        , &InvestorCommodityGroupSPMMMarginField_FrozenCommission 
        , &InvestorCommodityGroupSPMMMarginField_Commission 
        , &InvestorCommodityGroupSPMMMarginField_FrozenCash 
        , &InvestorCommodityGroupSPMMMarginField_CashIn 
        , &InvestorCommodityGroupSPMMMarginField_StrikeFrozenMargin 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( InvestorCommodityGroupSPMMMarginField_ExchangeID != NULL ) {
        if(InvestorCommodityGroupSPMMMarginField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", InvestorCommodityGroupSPMMMarginField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, InvestorCommodityGroupSPMMMarginField_ExchangeID, InvestorCommodityGroupSPMMMarginField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, InvestorCommodityGroupSPMMMarginField_ExchangeID, sizeof(self->data.ExchangeID) );
        InvestorCommodityGroupSPMMMarginField_ExchangeID = NULL;
    }
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( InvestorCommodityGroupSPMMMarginField_BrokerID != NULL ) {
        if(InvestorCommodityGroupSPMMMarginField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", InvestorCommodityGroupSPMMMarginField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, InvestorCommodityGroupSPMMMarginField_BrokerID, InvestorCommodityGroupSPMMMarginField_BrokerID_len);        
        strncpy(self->data.BrokerID, InvestorCommodityGroupSPMMMarginField_BrokerID, sizeof(self->data.BrokerID) );
        InvestorCommodityGroupSPMMMarginField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( InvestorCommodityGroupSPMMMarginField_InvestorID != NULL ) {
        if(InvestorCommodityGroupSPMMMarginField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", InvestorCommodityGroupSPMMMarginField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, InvestorCommodityGroupSPMMMarginField_InvestorID, InvestorCommodityGroupSPMMMarginField_InvestorID_len);        
        strncpy(self->data.InvestorID, InvestorCommodityGroupSPMMMarginField_InvestorID, sizeof(self->data.InvestorID) );
        InvestorCommodityGroupSPMMMarginField_InvestorID = NULL;
    }
            
    ///商品群代码
    // TThostFtdcSPMMProductIDType char[41]
    if( InvestorCommodityGroupSPMMMarginField_CommodityGroupID != NULL ) {
        if(InvestorCommodityGroupSPMMMarginField_CommodityGroupID_len > (Py_ssize_t)sizeof(self->data.CommodityGroupID)) {
            PyErr_Format(PyExc_ValueError, "CommodityGroupID too long: length=%zd (max allowed is %zd)", InvestorCommodityGroupSPMMMarginField_CommodityGroupID_len, (Py_ssize_t)sizeof(self->data.CommodityGroupID));
            return -1;
        }
        // memset(self->data.CommodityGroupID, 0, sizeof(self->data.CommodityGroupID));
        // memcpy(self->data.CommodityGroupID, InvestorCommodityGroupSPMMMarginField_CommodityGroupID, InvestorCommodityGroupSPMMMarginField_CommodityGroupID_len);        
        strncpy(self->data.CommodityGroupID, InvestorCommodityGroupSPMMMarginField_CommodityGroupID, sizeof(self->data.CommodityGroupID) );
        InvestorCommodityGroupSPMMMarginField_CommodityGroupID = NULL;
    }
            
    ///优惠仓位应收保证金
    // TThostFtdcMoneyType double
    self->data.MarginBeforeDiscount = InvestorCommodityGroupSPMMMarginField_MarginBeforeDiscount;
        
    ///不优惠仓位应收保证金
    // TThostFtdcMoneyType double
    self->data.MarginNoDiscount = InvestorCommodityGroupSPMMMarginField_MarginNoDiscount;
        
    ///多头风险
    // TThostFtdcMoneyType double
    self->data.LongRisk = InvestorCommodityGroupSPMMMarginField_LongRisk;
        
    ///空头风险
    // TThostFtdcMoneyType double
    self->data.ShortRisk = InvestorCommodityGroupSPMMMarginField_ShortRisk;
        
    ///商品群平仓冻结保证金
    // TThostFtdcMoneyType double
    self->data.CloseFrozenMargin = InvestorCommodityGroupSPMMMarginField_CloseFrozenMargin;
        
    ///SPMM跨品种优惠系数
    // TThostFtdcSPMMDiscountRatioType double
    self->data.InterCommodityRate = InvestorCommodityGroupSPMMMarginField_InterCommodityRate;
        
    ///商品群最小保证金比例
    // TThostFtdcSPMMDiscountRatioType double
    self->data.MiniMarginRatio = InvestorCommodityGroupSPMMMarginField_MiniMarginRatio;
        
    ///投资者保证金和交易所保证金的比例
    // TThostFtdcRatioType double
    self->data.AdjustRatio = InvestorCommodityGroupSPMMMarginField_AdjustRatio;
        
    ///SPMM品种内优惠汇总
    // TThostFtdcMoneyType double
    self->data.IntraCommodityDiscount = InvestorCommodityGroupSPMMMarginField_IntraCommodityDiscount;
        
    ///SPMM跨品种优惠
    // TThostFtdcMoneyType double
    self->data.InterCommodityDiscount = InvestorCommodityGroupSPMMMarginField_InterCommodityDiscount;
        
    ///交易所保证金
    // TThostFtdcMoneyType double
    self->data.ExchMargin = InvestorCommodityGroupSPMMMarginField_ExchMargin;
        
    ///投资者保证金
    // TThostFtdcMoneyType double
    self->data.InvestorMargin = InvestorCommodityGroupSPMMMarginField_InvestorMargin;
        
    ///冻结的手续费
    // TThostFtdcMoneyType double
    self->data.FrozenCommission = InvestorCommodityGroupSPMMMarginField_FrozenCommission;
        
    ///手续费
    // TThostFtdcMoneyType double
    self->data.Commission = InvestorCommodityGroupSPMMMarginField_Commission;
        
    ///冻结的资金
    // TThostFtdcMoneyType double
    self->data.FrozenCash = InvestorCommodityGroupSPMMMarginField_FrozenCash;
        
    ///资金差额
    // TThostFtdcMoneyType double
    self->data.CashIn = InvestorCommodityGroupSPMMMarginField_CashIn;
        
    ///行权冻结资金
    // TThostFtdcMoneyType double
    self->data.StrikeFrozenMargin = InvestorCommodityGroupSPMMMarginField_StrikeFrozenMargin;
        

    return 0;
}

static void PyCThostFtdcInvestorCommodityGroupSPMMMarginField_dealloc(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginField_repr(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d}"
#endif

        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"CommodityGroupID", self->data.CommodityGroupID//, (Py_ssize_t)sizeof(self->data.CommodityGroupID) 
        ,"MarginBeforeDiscount", self->data.MarginBeforeDiscount 
        ,"MarginNoDiscount", self->data.MarginNoDiscount 
        ,"LongRisk", self->data.LongRisk 
        ,"ShortRisk", self->data.ShortRisk 
        ,"CloseFrozenMargin", self->data.CloseFrozenMargin 
        ,"InterCommodityRate", self->data.InterCommodityRate 
        ,"MiniMarginRatio", self->data.MiniMarginRatio 
        ,"AdjustRatio", self->data.AdjustRatio 
        ,"IntraCommodityDiscount", self->data.IntraCommodityDiscount 
        ,"InterCommodityDiscount", self->data.InterCommodityDiscount 
        ,"ExchMargin", self->data.ExchMargin 
        ,"InvestorMargin", self->data.InvestorMargin 
        ,"FrozenCommission", self->data.FrozenCommission 
        ,"Commission", self->data.Commission 
        ,"FrozenCash", self->data.FrozenCash 
        ,"CashIn", self->data.CashIn 
        ,"StrikeFrozenMargin", self->data.StrikeFrozenMargin 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorCommodityGroupSPMMMarginField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_ExchangeID(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_ExchangeID(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_BrokerID(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_BrokerID(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_InvestorID(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_InvestorID(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, PyObject* val, void *closure) {
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
            
///商品群代码
// TThostFtdcSPMMProductIDType char[41]
static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_CommodityGroupID(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CommodityGroupID, (Py_ssize_t)sizeof(self->data.CommodityGroupID));
    return PyBytes_FromString(self->data.CommodityGroupID);
}

///商品群代码
// TThostFtdcSPMMProductIDType char[41]
static int PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_CommodityGroupID(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CommodityGroupID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CommodityGroupID)) {
        PyErr_SetString(PyExc_ValueError, "CommodityGroupID must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.CommodityGroupID, 0, sizeof(self->data.CommodityGroupID));
    // memcpy(self->data.CommodityGroupID, buf, len);
    strncpy(self->data.CommodityGroupID, buf, sizeof(self->data.CommodityGroupID));
    return 0;
}
            
///优惠仓位应收保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_MarginBeforeDiscount(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.MarginBeforeDiscount);
}

///优惠仓位应收保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_MarginBeforeDiscount(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_MarginNoDiscount(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.MarginNoDiscount);
}

///不优惠仓位应收保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_MarginNoDiscount(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, PyObject* val, void *closure) {
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
        
///多头风险
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_LongRisk(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LongRisk);
}

///多头风险
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_LongRisk(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LongRisk Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LongRisk = buf;
    return 0;
}
        
///空头风险
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_ShortRisk(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ShortRisk);
}

///空头风险
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_ShortRisk(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ShortRisk Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ShortRisk = buf;
    return 0;
}
        
///商品群平仓冻结保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_CloseFrozenMargin(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CloseFrozenMargin);
}

///商品群平仓冻结保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_CloseFrozenMargin(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, PyObject* val, void *closure) {
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
        
///SPMM跨品种优惠系数
// TThostFtdcSPMMDiscountRatioType double
static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_InterCommodityRate(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.InterCommodityRate);
}

///SPMM跨品种优惠系数
// TThostFtdcSPMMDiscountRatioType double
static int PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_InterCommodityRate(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InterCommodityRate Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.InterCommodityRate = buf;
    return 0;
}
        
///商品群最小保证金比例
// TThostFtdcSPMMDiscountRatioType double
static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_MiniMarginRatio(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.MiniMarginRatio);
}

///商品群最小保证金比例
// TThostFtdcSPMMDiscountRatioType double
static int PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_MiniMarginRatio(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MiniMarginRatio Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.MiniMarginRatio = buf;
    return 0;
}
        
///投资者保证金和交易所保证金的比例
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_AdjustRatio(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.AdjustRatio);
}

///投资者保证金和交易所保证金的比例
// TThostFtdcRatioType double
static int PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_AdjustRatio(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AdjustRatio Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AdjustRatio = buf;
    return 0;
}
        
///SPMM品种内优惠汇总
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_IntraCommodityDiscount(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.IntraCommodityDiscount);
}

///SPMM品种内优惠汇总
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_IntraCommodityDiscount(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IntraCommodityDiscount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.IntraCommodityDiscount = buf;
    return 0;
}
        
///SPMM跨品种优惠
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_InterCommodityDiscount(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.InterCommodityDiscount);
}

///SPMM跨品种优惠
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_InterCommodityDiscount(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InterCommodityDiscount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.InterCommodityDiscount = buf;
    return 0;
}
        
///交易所保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_ExchMargin(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ExchMargin);
}

///交易所保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_ExchMargin(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, PyObject* val, void *closure) {
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
        
///投资者保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_InvestorMargin(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.InvestorMargin);
}

///投资者保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_InvestorMargin(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InvestorMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.InvestorMargin = buf;
    return 0;
}
        
///冻结的手续费
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_FrozenCommission(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FrozenCommission);
}

///冻结的手续费
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_FrozenCommission(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_Commission(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Commission);
}

///手续费
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_Commission(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_FrozenCash(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FrozenCash);
}

///冻结的资金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_FrozenCash(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_CashIn(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CashIn);
}

///资金差额
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_CashIn(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_StrikeFrozenMargin(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.StrikeFrozenMargin);
}

///行权冻结资金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_StrikeFrozenMargin(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, PyObject* val, void *closure) {
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
        

static PyGetSetDef PyCThostFtdcInvestorCommodityGroupSPMMMarginField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_ExchangeID, (setter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_BrokerID, (setter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_InvestorID, (setter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_InvestorID, (char *)"InvestorID", NULL},
    ///商品群代码 
    {(char *)"CommodityGroupID", (getter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_CommodityGroupID, (setter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_CommodityGroupID, (char *)"CommodityGroupID", NULL},
    ///优惠仓位应收保证金 
    {(char *)"MarginBeforeDiscount", (getter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_MarginBeforeDiscount, (setter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_MarginBeforeDiscount, (char *)"MarginBeforeDiscount", NULL},
    ///不优惠仓位应收保证金 
    {(char *)"MarginNoDiscount", (getter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_MarginNoDiscount, (setter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_MarginNoDiscount, (char *)"MarginNoDiscount", NULL},
    ///多头风险 
    {(char *)"LongRisk", (getter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_LongRisk, (setter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_LongRisk, (char *)"LongRisk", NULL},
    ///空头风险 
    {(char *)"ShortRisk", (getter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_ShortRisk, (setter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_ShortRisk, (char *)"ShortRisk", NULL},
    ///商品群平仓冻结保证金 
    {(char *)"CloseFrozenMargin", (getter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_CloseFrozenMargin, (setter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_CloseFrozenMargin, (char *)"CloseFrozenMargin", NULL},
    ///SPMM跨品种优惠系数 
    {(char *)"InterCommodityRate", (getter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_InterCommodityRate, (setter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_InterCommodityRate, (char *)"InterCommodityRate", NULL},
    ///商品群最小保证金比例 
    {(char *)"MiniMarginRatio", (getter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_MiniMarginRatio, (setter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_MiniMarginRatio, (char *)"MiniMarginRatio", NULL},
    ///投资者保证金和交易所保证金的比例 
    {(char *)"AdjustRatio", (getter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_AdjustRatio, (setter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_AdjustRatio, (char *)"AdjustRatio", NULL},
    ///SPMM品种内优惠汇总 
    {(char *)"IntraCommodityDiscount", (getter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_IntraCommodityDiscount, (setter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_IntraCommodityDiscount, (char *)"IntraCommodityDiscount", NULL},
    ///SPMM跨品种优惠 
    {(char *)"InterCommodityDiscount", (getter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_InterCommodityDiscount, (setter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_InterCommodityDiscount, (char *)"InterCommodityDiscount", NULL},
    ///交易所保证金 
    {(char *)"ExchMargin", (getter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_ExchMargin, (setter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_ExchMargin, (char *)"ExchMargin", NULL},
    ///投资者保证金 
    {(char *)"InvestorMargin", (getter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_InvestorMargin, (setter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_InvestorMargin, (char *)"InvestorMargin", NULL},
    ///冻结的手续费 
    {(char *)"FrozenCommission", (getter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_FrozenCommission, (setter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_FrozenCommission, (char *)"FrozenCommission", NULL},
    ///手续费 
    {(char *)"Commission", (getter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_Commission, (setter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_Commission, (char *)"Commission", NULL},
    ///冻结的资金 
    {(char *)"FrozenCash", (getter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_FrozenCash, (setter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_FrozenCash, (char *)"FrozenCash", NULL},
    ///资金差额 
    {(char *)"CashIn", (getter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_CashIn, (setter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_CashIn, (char *)"CashIn", NULL},
    ///行权冻结资金 
    {(char *)"StrikeFrozenMargin", (getter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_StrikeFrozenMargin, (setter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_StrikeFrozenMargin, (char *)"StrikeFrozenMargin", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInvestorCommodityGroupSPMMMarginField",	/* tp_name */
	sizeof(PyCThostFtdcInvestorCommodityGroupSPMMMarginField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_repr,   /* tp_repr */
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
	"CThostFtdcInvestorCommodityGroupSPMMMarginField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInvestorCommodityGroupSPMMMarginField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInvestorCommodityGroupSPMMMarginField_new,       /* tp_new */
};

int PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInvestorCommodityGroupSPMMMarginField  */
	if (PyType_Ready(&PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInvestorCommodityGroupSPMMMarginField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInvestorCommodityGroupSPMMMarginField", (PyObject *)&PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorCommodityGroupSPMMMarginField to module");
        Py_DECREF(&PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType);
		return -1;
    }

    return 0;
}
