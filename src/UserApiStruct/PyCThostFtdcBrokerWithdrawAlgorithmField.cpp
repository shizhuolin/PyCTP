
#include "PyCThostFtdcBrokerWithdrawAlgorithmField.h"

///经纪公司可提资金算法表

static PyObject *PyCThostFtdcBrokerWithdrawAlgorithmField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcBrokerWithdrawAlgorithmField *self = (PyCThostFtdcBrokerWithdrawAlgorithmField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcBrokerWithdrawAlgorithmField_init(PyCThostFtdcBrokerWithdrawAlgorithmField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "WithdrawAlgorithm", "UsingRatio", "IncludeCloseProfit", "AllWithoutTrade", "AvailIncludeCloseProfit", "IsBrokerUserEvent", "CurrencyID", "FundMortgageRatio", "BalanceAlgorithm",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *BrokerWithdrawAlgorithmField_BrokerID = NULL;
    Py_ssize_t BrokerWithdrawAlgorithmField_BrokerID_len = 0;
            
    ///可提资金算法
    // TThostFtdcAlgorithmType char
    char BrokerWithdrawAlgorithmField_WithdrawAlgorithm = 0;
            
    ///资金使用率
    // TThostFtdcRatioType double
    double BrokerWithdrawAlgorithmField_UsingRatio = 0.0;
        
    ///可提是否包含平仓盈利
    // TThostFtdcIncludeCloseProfitType char
    char BrokerWithdrawAlgorithmField_IncludeCloseProfit = 0;
            
    ///本日无仓且无成交客户是否受可提比例限制
    // TThostFtdcAllWithoutTradeType char
    char BrokerWithdrawAlgorithmField_AllWithoutTrade = 0;
            
    ///可用是否包含平仓盈利
    // TThostFtdcIncludeCloseProfitType char
    char BrokerWithdrawAlgorithmField_AvailIncludeCloseProfit = 0;
            
    ///是否启用用户事件
    // TThostFtdcBoolType int
    int BrokerWithdrawAlgorithmField_IsBrokerUserEvent = 0;
        
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *BrokerWithdrawAlgorithmField_CurrencyID = NULL;
    Py_ssize_t BrokerWithdrawAlgorithmField_CurrencyID_len = 0;
            
    ///货币质押比率
    // TThostFtdcRatioType double
    double BrokerWithdrawAlgorithmField_FundMortgageRatio = 0.0;
        
    ///权益算法
    // TThostFtdcBalanceAlgorithmType char
    char BrokerWithdrawAlgorithmField_BalanceAlgorithm = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cdccciy#dc", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cdcccis#dc", (char **)kwlist
#endif

        , &BrokerWithdrawAlgorithmField_BrokerID, &BrokerWithdrawAlgorithmField_BrokerID_len 
        , &BrokerWithdrawAlgorithmField_WithdrawAlgorithm 
        , &BrokerWithdrawAlgorithmField_UsingRatio 
        , &BrokerWithdrawAlgorithmField_IncludeCloseProfit 
        , &BrokerWithdrawAlgorithmField_AllWithoutTrade 
        , &BrokerWithdrawAlgorithmField_AvailIncludeCloseProfit 
        , &BrokerWithdrawAlgorithmField_IsBrokerUserEvent 
        , &BrokerWithdrawAlgorithmField_CurrencyID, &BrokerWithdrawAlgorithmField_CurrencyID_len 
        , &BrokerWithdrawAlgorithmField_FundMortgageRatio 
        , &BrokerWithdrawAlgorithmField_BalanceAlgorithm 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( BrokerWithdrawAlgorithmField_BrokerID != NULL ) {
        if(BrokerWithdrawAlgorithmField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", BrokerWithdrawAlgorithmField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, BrokerWithdrawAlgorithmField_BrokerID, BrokerWithdrawAlgorithmField_BrokerID_len);        
        strncpy(self->data.BrokerID, BrokerWithdrawAlgorithmField_BrokerID, sizeof(self->data.BrokerID) );
        BrokerWithdrawAlgorithmField_BrokerID = NULL;
    }
            
    ///可提资金算法
    // TThostFtdcAlgorithmType char
    self->data.WithdrawAlgorithm = BrokerWithdrawAlgorithmField_WithdrawAlgorithm;
            
    ///资金使用率
    // TThostFtdcRatioType double
    self->data.UsingRatio = BrokerWithdrawAlgorithmField_UsingRatio;
        
    ///可提是否包含平仓盈利
    // TThostFtdcIncludeCloseProfitType char
    self->data.IncludeCloseProfit = BrokerWithdrawAlgorithmField_IncludeCloseProfit;
            
    ///本日无仓且无成交客户是否受可提比例限制
    // TThostFtdcAllWithoutTradeType char
    self->data.AllWithoutTrade = BrokerWithdrawAlgorithmField_AllWithoutTrade;
            
    ///可用是否包含平仓盈利
    // TThostFtdcIncludeCloseProfitType char
    self->data.AvailIncludeCloseProfit = BrokerWithdrawAlgorithmField_AvailIncludeCloseProfit;
            
    ///是否启用用户事件
    // TThostFtdcBoolType int
    self->data.IsBrokerUserEvent = BrokerWithdrawAlgorithmField_IsBrokerUserEvent;
        
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( BrokerWithdrawAlgorithmField_CurrencyID != NULL ) {
        if(BrokerWithdrawAlgorithmField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", BrokerWithdrawAlgorithmField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, BrokerWithdrawAlgorithmField_CurrencyID, BrokerWithdrawAlgorithmField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, BrokerWithdrawAlgorithmField_CurrencyID, sizeof(self->data.CurrencyID) );
        BrokerWithdrawAlgorithmField_CurrencyID = NULL;
    }
            
    ///货币质押比率
    // TThostFtdcRatioType double
    self->data.FundMortgageRatio = BrokerWithdrawAlgorithmField_FundMortgageRatio;
        
    ///权益算法
    // TThostFtdcBalanceAlgorithmType char
    self->data.BalanceAlgorithm = BrokerWithdrawAlgorithmField_BalanceAlgorithm;
            

    return 0;
}

static void PyCThostFtdcBrokerWithdrawAlgorithmField_dealloc(PyCThostFtdcBrokerWithdrawAlgorithmField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcBrokerWithdrawAlgorithmField_repr(PyCThostFtdcBrokerWithdrawAlgorithmField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:d,s:c,s:c,s:c,s:i,s:y,s:d,s:c}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:d,s:c,s:c,s:c,s:i,s:s,s:d,s:c}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"WithdrawAlgorithm", self->data.WithdrawAlgorithm 
        ,"UsingRatio", self->data.UsingRatio 
        ,"IncludeCloseProfit", self->data.IncludeCloseProfit 
        ,"AllWithoutTrade", self->data.AllWithoutTrade 
        ,"AvailIncludeCloseProfit", self->data.AvailIncludeCloseProfit 
        ,"IsBrokerUserEvent", self->data.IsBrokerUserEvent 
        ,"CurrencyID", self->data.CurrencyID//, (Py_ssize_t)sizeof(self->data.CurrencyID) 
        ,"FundMortgageRatio", self->data.FundMortgageRatio 
        ,"BalanceAlgorithm", self->data.BalanceAlgorithm 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBrokerWithdrawAlgorithmField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcBrokerWithdrawAlgorithmField_get_BrokerID(PyCThostFtdcBrokerWithdrawAlgorithmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcBrokerWithdrawAlgorithmField_set_BrokerID(PyCThostFtdcBrokerWithdrawAlgorithmField *self, PyObject* val, void *closure) {
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
            
///可提资金算法
// TThostFtdcAlgorithmType char
static PyObject *PyCThostFtdcBrokerWithdrawAlgorithmField_get_WithdrawAlgorithm(PyCThostFtdcBrokerWithdrawAlgorithmField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.WithdrawAlgorithm), 1);
}

///可提资金算法
// TThostFtdcAlgorithmType char
static int PyCThostFtdcBrokerWithdrawAlgorithmField_set_WithdrawAlgorithm(PyCThostFtdcBrokerWithdrawAlgorithmField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "WithdrawAlgorithm Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.WithdrawAlgorithm)) {
        PyErr_SetString(PyExc_ValueError, "WithdrawAlgorithm must be equal 1 bytes");
        return -1;
    }
    self->data.WithdrawAlgorithm = *buf;
    return 0;
}
            
///资金使用率
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcBrokerWithdrawAlgorithmField_get_UsingRatio(PyCThostFtdcBrokerWithdrawAlgorithmField *self, void *closure) {
    return PyFloat_FromDouble(self->data.UsingRatio);
}

///资金使用率
// TThostFtdcRatioType double
static int PyCThostFtdcBrokerWithdrawAlgorithmField_set_UsingRatio(PyCThostFtdcBrokerWithdrawAlgorithmField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UsingRatio Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.UsingRatio = buf;
    return 0;
}
        
///可提是否包含平仓盈利
// TThostFtdcIncludeCloseProfitType char
static PyObject *PyCThostFtdcBrokerWithdrawAlgorithmField_get_IncludeCloseProfit(PyCThostFtdcBrokerWithdrawAlgorithmField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.IncludeCloseProfit), 1);
}

///可提是否包含平仓盈利
// TThostFtdcIncludeCloseProfitType char
static int PyCThostFtdcBrokerWithdrawAlgorithmField_set_IncludeCloseProfit(PyCThostFtdcBrokerWithdrawAlgorithmField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IncludeCloseProfit Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.IncludeCloseProfit)) {
        PyErr_SetString(PyExc_ValueError, "IncludeCloseProfit must be equal 1 bytes");
        return -1;
    }
    self->data.IncludeCloseProfit = *buf;
    return 0;
}
            
///本日无仓且无成交客户是否受可提比例限制
// TThostFtdcAllWithoutTradeType char
static PyObject *PyCThostFtdcBrokerWithdrawAlgorithmField_get_AllWithoutTrade(PyCThostFtdcBrokerWithdrawAlgorithmField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.AllWithoutTrade), 1);
}

///本日无仓且无成交客户是否受可提比例限制
// TThostFtdcAllWithoutTradeType char
static int PyCThostFtdcBrokerWithdrawAlgorithmField_set_AllWithoutTrade(PyCThostFtdcBrokerWithdrawAlgorithmField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AllWithoutTrade Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.AllWithoutTrade)) {
        PyErr_SetString(PyExc_ValueError, "AllWithoutTrade must be equal 1 bytes");
        return -1;
    }
    self->data.AllWithoutTrade = *buf;
    return 0;
}
            
///可用是否包含平仓盈利
// TThostFtdcIncludeCloseProfitType char
static PyObject *PyCThostFtdcBrokerWithdrawAlgorithmField_get_AvailIncludeCloseProfit(PyCThostFtdcBrokerWithdrawAlgorithmField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.AvailIncludeCloseProfit), 1);
}

///可用是否包含平仓盈利
// TThostFtdcIncludeCloseProfitType char
static int PyCThostFtdcBrokerWithdrawAlgorithmField_set_AvailIncludeCloseProfit(PyCThostFtdcBrokerWithdrawAlgorithmField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AvailIncludeCloseProfit Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.AvailIncludeCloseProfit)) {
        PyErr_SetString(PyExc_ValueError, "AvailIncludeCloseProfit must be equal 1 bytes");
        return -1;
    }
    self->data.AvailIncludeCloseProfit = *buf;
    return 0;
}
            
///是否启用用户事件
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcBrokerWithdrawAlgorithmField_get_IsBrokerUserEvent(PyCThostFtdcBrokerWithdrawAlgorithmField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsBrokerUserEvent);
#else
    return PyInt_FromLong(self->data.IsBrokerUserEvent);
#endif
}

///是否启用用户事件
// TThostFtdcBoolType int
static int PyCThostFtdcBrokerWithdrawAlgorithmField_set_IsBrokerUserEvent(PyCThostFtdcBrokerWithdrawAlgorithmField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsBrokerUserEvent Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsBrokerUserEvent Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the IsBrokerUserEvent value out of range for C int");
        return -1;
    }
    self->data.IsBrokerUserEvent = (int)buf;
    return 0;
}
        
///币种代码
// TThostFtdcCurrencyIDType char[4]
static PyObject *PyCThostFtdcBrokerWithdrawAlgorithmField_get_CurrencyID(PyCThostFtdcBrokerWithdrawAlgorithmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcBrokerWithdrawAlgorithmField_set_CurrencyID(PyCThostFtdcBrokerWithdrawAlgorithmField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 4 bytes");
        return -1;
    }
    // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
    // memcpy(self->data.CurrencyID, buf, len);
    strncpy(self->data.CurrencyID, buf, sizeof(self->data.CurrencyID));
    return 0;
}
            
///货币质押比率
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcBrokerWithdrawAlgorithmField_get_FundMortgageRatio(PyCThostFtdcBrokerWithdrawAlgorithmField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FundMortgageRatio);
}

///货币质押比率
// TThostFtdcRatioType double
static int PyCThostFtdcBrokerWithdrawAlgorithmField_set_FundMortgageRatio(PyCThostFtdcBrokerWithdrawAlgorithmField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FundMortgageRatio Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.FundMortgageRatio = buf;
    return 0;
}
        
///权益算法
// TThostFtdcBalanceAlgorithmType char
static PyObject *PyCThostFtdcBrokerWithdrawAlgorithmField_get_BalanceAlgorithm(PyCThostFtdcBrokerWithdrawAlgorithmField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BalanceAlgorithm), 1);
}

///权益算法
// TThostFtdcBalanceAlgorithmType char
static int PyCThostFtdcBrokerWithdrawAlgorithmField_set_BalanceAlgorithm(PyCThostFtdcBrokerWithdrawAlgorithmField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BalanceAlgorithm Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BalanceAlgorithm)) {
        PyErr_SetString(PyExc_ValueError, "BalanceAlgorithm must be equal 1 bytes");
        return -1;
    }
    self->data.BalanceAlgorithm = *buf;
    return 0;
}
            

static PyGetSetDef PyCThostFtdcBrokerWithdrawAlgorithmField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcBrokerWithdrawAlgorithmField_get_BrokerID, (setter)PyCThostFtdcBrokerWithdrawAlgorithmField_set_BrokerID, (char *)"BrokerID", NULL},
    ///可提资金算法 
    {(char *)"WithdrawAlgorithm", (getter)PyCThostFtdcBrokerWithdrawAlgorithmField_get_WithdrawAlgorithm, (setter)PyCThostFtdcBrokerWithdrawAlgorithmField_set_WithdrawAlgorithm, (char *)"WithdrawAlgorithm", NULL},
    ///资金使用率 
    {(char *)"UsingRatio", (getter)PyCThostFtdcBrokerWithdrawAlgorithmField_get_UsingRatio, (setter)PyCThostFtdcBrokerWithdrawAlgorithmField_set_UsingRatio, (char *)"UsingRatio", NULL},
    ///可提是否包含平仓盈利 
    {(char *)"IncludeCloseProfit", (getter)PyCThostFtdcBrokerWithdrawAlgorithmField_get_IncludeCloseProfit, (setter)PyCThostFtdcBrokerWithdrawAlgorithmField_set_IncludeCloseProfit, (char *)"IncludeCloseProfit", NULL},
    ///本日无仓且无成交客户是否受可提比例限制 
    {(char *)"AllWithoutTrade", (getter)PyCThostFtdcBrokerWithdrawAlgorithmField_get_AllWithoutTrade, (setter)PyCThostFtdcBrokerWithdrawAlgorithmField_set_AllWithoutTrade, (char *)"AllWithoutTrade", NULL},
    ///可用是否包含平仓盈利 
    {(char *)"AvailIncludeCloseProfit", (getter)PyCThostFtdcBrokerWithdrawAlgorithmField_get_AvailIncludeCloseProfit, (setter)PyCThostFtdcBrokerWithdrawAlgorithmField_set_AvailIncludeCloseProfit, (char *)"AvailIncludeCloseProfit", NULL},
    ///是否启用用户事件 
    {(char *)"IsBrokerUserEvent", (getter)PyCThostFtdcBrokerWithdrawAlgorithmField_get_IsBrokerUserEvent, (setter)PyCThostFtdcBrokerWithdrawAlgorithmField_set_IsBrokerUserEvent, (char *)"IsBrokerUserEvent", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcBrokerWithdrawAlgorithmField_get_CurrencyID, (setter)PyCThostFtdcBrokerWithdrawAlgorithmField_set_CurrencyID, (char *)"CurrencyID", NULL},
    ///货币质押比率 
    {(char *)"FundMortgageRatio", (getter)PyCThostFtdcBrokerWithdrawAlgorithmField_get_FundMortgageRatio, (setter)PyCThostFtdcBrokerWithdrawAlgorithmField_set_FundMortgageRatio, (char *)"FundMortgageRatio", NULL},
    ///权益算法 
    {(char *)"BalanceAlgorithm", (getter)PyCThostFtdcBrokerWithdrawAlgorithmField_get_BalanceAlgorithm, (setter)PyCThostFtdcBrokerWithdrawAlgorithmField_set_BalanceAlgorithm, (char *)"BalanceAlgorithm", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcBrokerWithdrawAlgorithmFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcBrokerWithdrawAlgorithmField",	/* tp_name */
	sizeof(PyCThostFtdcBrokerWithdrawAlgorithmField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcBrokerWithdrawAlgorithmField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcBrokerWithdrawAlgorithmField_repr,   /* tp_repr */
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
	"CThostFtdcBrokerWithdrawAlgorithmField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcBrokerWithdrawAlgorithmField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcBrokerWithdrawAlgorithmField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcBrokerWithdrawAlgorithmField_new,       /* tp_new */
};

int PyCThostFtdcBrokerWithdrawAlgorithmFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcBrokerWithdrawAlgorithmField  */
	if (PyType_Ready(&PyCThostFtdcBrokerWithdrawAlgorithmFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcBrokerWithdrawAlgorithmField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcBrokerWithdrawAlgorithmFieldType);
    if( PyModule_AddObject(module, "CThostFtdcBrokerWithdrawAlgorithmField", (PyObject *)&PyCThostFtdcBrokerWithdrawAlgorithmFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcBrokerWithdrawAlgorithmField to module");
        Py_DECREF(&PyCThostFtdcBrokerWithdrawAlgorithmFieldType);
		return -1;
    }

    return 0;
}
