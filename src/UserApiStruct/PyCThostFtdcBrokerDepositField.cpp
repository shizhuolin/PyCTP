
#include "PyCThostFtdcBrokerDepositField.h"

///经纪公司资金

static PyObject *PyCThostFtdcBrokerDepositField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcBrokerDepositField *self = (PyCThostFtdcBrokerDepositField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcBrokerDepositField_init(PyCThostFtdcBrokerDepositField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "BrokerID", "ParticipantID", "ExchangeID", "PreBalance", "CurrMargin", "CloseProfit", "Balance", "Deposit", "Withdraw", "Available", "Reserve", "FrozenMargin",  NULL};


    ///交易日期
    // TThostFtdcTradeDateType char[9]
    const char *BrokerDepositField_TradingDay = NULL;
    Py_ssize_t BrokerDepositField_TradingDay_len = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *BrokerDepositField_BrokerID = NULL;
    Py_ssize_t BrokerDepositField_BrokerID_len = 0;
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    const char *BrokerDepositField_ParticipantID = NULL;
    Py_ssize_t BrokerDepositField_ParticipantID_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *BrokerDepositField_ExchangeID = NULL;
    Py_ssize_t BrokerDepositField_ExchangeID_len = 0;
            
    ///上次结算准备金
    // TThostFtdcMoneyType double
    double BrokerDepositField_PreBalance = 0.0;
        
    ///当前保证金总额
    // TThostFtdcMoneyType double
    double BrokerDepositField_CurrMargin = 0.0;
        
    ///平仓盈亏
    // TThostFtdcMoneyType double
    double BrokerDepositField_CloseProfit = 0.0;
        
    ///期货结算准备金
    // TThostFtdcMoneyType double
    double BrokerDepositField_Balance = 0.0;
        
    ///入金金额
    // TThostFtdcMoneyType double
    double BrokerDepositField_Deposit = 0.0;
        
    ///出金金额
    // TThostFtdcMoneyType double
    double BrokerDepositField_Withdraw = 0.0;
        
    ///可提资金
    // TThostFtdcMoneyType double
    double BrokerDepositField_Available = 0.0;
        
    ///基本准备金
    // TThostFtdcMoneyType double
    double BrokerDepositField_Reserve = 0.0;
        
    ///冻结的保证金
    // TThostFtdcMoneyType double
    double BrokerDepositField_FrozenMargin = 0.0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#ddddddddd", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#ddddddddd", (char **)kwlist
#endif

        , &BrokerDepositField_TradingDay, &BrokerDepositField_TradingDay_len 
        , &BrokerDepositField_BrokerID, &BrokerDepositField_BrokerID_len 
        , &BrokerDepositField_ParticipantID, &BrokerDepositField_ParticipantID_len 
        , &BrokerDepositField_ExchangeID, &BrokerDepositField_ExchangeID_len 
        , &BrokerDepositField_PreBalance 
        , &BrokerDepositField_CurrMargin 
        , &BrokerDepositField_CloseProfit 
        , &BrokerDepositField_Balance 
        , &BrokerDepositField_Deposit 
        , &BrokerDepositField_Withdraw 
        , &BrokerDepositField_Available 
        , &BrokerDepositField_Reserve 
        , &BrokerDepositField_FrozenMargin 


    )) {
        return -1;
    }


    ///交易日期
    // TThostFtdcTradeDateType char[9]
    if( BrokerDepositField_TradingDay != NULL ) {
        if(BrokerDepositField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", BrokerDepositField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, BrokerDepositField_TradingDay, BrokerDepositField_TradingDay_len);        
        strncpy(self->data.TradingDay, BrokerDepositField_TradingDay, sizeof(self->data.TradingDay) );
        BrokerDepositField_TradingDay = NULL;
    }
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( BrokerDepositField_BrokerID != NULL ) {
        if(BrokerDepositField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", BrokerDepositField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, BrokerDepositField_BrokerID, BrokerDepositField_BrokerID_len);        
        strncpy(self->data.BrokerID, BrokerDepositField_BrokerID, sizeof(self->data.BrokerID) );
        BrokerDepositField_BrokerID = NULL;
    }
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    if( BrokerDepositField_ParticipantID != NULL ) {
        if(BrokerDepositField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", BrokerDepositField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
            return -1;
        }
        // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
        // memcpy(self->data.ParticipantID, BrokerDepositField_ParticipantID, BrokerDepositField_ParticipantID_len);        
        strncpy(self->data.ParticipantID, BrokerDepositField_ParticipantID, sizeof(self->data.ParticipantID) );
        BrokerDepositField_ParticipantID = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( BrokerDepositField_ExchangeID != NULL ) {
        if(BrokerDepositField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", BrokerDepositField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, BrokerDepositField_ExchangeID, BrokerDepositField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, BrokerDepositField_ExchangeID, sizeof(self->data.ExchangeID) );
        BrokerDepositField_ExchangeID = NULL;
    }
            
    ///上次结算准备金
    // TThostFtdcMoneyType double
    self->data.PreBalance = BrokerDepositField_PreBalance;
        
    ///当前保证金总额
    // TThostFtdcMoneyType double
    self->data.CurrMargin = BrokerDepositField_CurrMargin;
        
    ///平仓盈亏
    // TThostFtdcMoneyType double
    self->data.CloseProfit = BrokerDepositField_CloseProfit;
        
    ///期货结算准备金
    // TThostFtdcMoneyType double
    self->data.Balance = BrokerDepositField_Balance;
        
    ///入金金额
    // TThostFtdcMoneyType double
    self->data.Deposit = BrokerDepositField_Deposit;
        
    ///出金金额
    // TThostFtdcMoneyType double
    self->data.Withdraw = BrokerDepositField_Withdraw;
        
    ///可提资金
    // TThostFtdcMoneyType double
    self->data.Available = BrokerDepositField_Available;
        
    ///基本准备金
    // TThostFtdcMoneyType double
    self->data.Reserve = BrokerDepositField_Reserve;
        
    ///冻结的保证金
    // TThostFtdcMoneyType double
    self->data.FrozenMargin = BrokerDepositField_FrozenMargin;
        

    return 0;
}

static void PyCThostFtdcBrokerDepositField_dealloc(PyCThostFtdcBrokerDepositField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcBrokerDepositField_repr(PyCThostFtdcBrokerDepositField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d}"
#endif

        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"ParticipantID", self->data.ParticipantID//, (Py_ssize_t)sizeof(self->data.ParticipantID) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"PreBalance", self->data.PreBalance 
        ,"CurrMargin", self->data.CurrMargin 
        ,"CloseProfit", self->data.CloseProfit 
        ,"Balance", self->data.Balance 
        ,"Deposit", self->data.Deposit 
        ,"Withdraw", self->data.Withdraw 
        ,"Available", self->data.Available 
        ,"Reserve", self->data.Reserve 
        ,"FrozenMargin", self->data.FrozenMargin 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBrokerDepositField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易日期
// TThostFtdcTradeDateType char[9]
static PyObject *PyCThostFtdcBrokerDepositField_get_TradingDay(PyCThostFtdcBrokerDepositField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcBrokerDepositField_set_TradingDay(PyCThostFtdcBrokerDepositField *self, PyObject* val, void *closure) {
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
            
///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcBrokerDepositField_get_BrokerID(PyCThostFtdcBrokerDepositField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcBrokerDepositField_set_BrokerID(PyCThostFtdcBrokerDepositField *self, PyObject* val, void *closure) {
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
            
///会员代码
// TThostFtdcParticipantIDType char[11]
static PyObject *PyCThostFtdcBrokerDepositField_get_ParticipantID(PyCThostFtdcBrokerDepositField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParticipantID, (Py_ssize_t)sizeof(self->data.ParticipantID));
    return PyBytes_FromString(self->data.ParticipantID);
}

///会员代码
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcBrokerDepositField_set_ParticipantID(PyCThostFtdcBrokerDepositField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 11 bytes");
        return -1;
    }
    // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
    // memcpy(self->data.ParticipantID, buf, len);
    strncpy(self->data.ParticipantID, buf, sizeof(self->data.ParticipantID));
    return 0;
}
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcBrokerDepositField_get_ExchangeID(PyCThostFtdcBrokerDepositField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcBrokerDepositField_set_ExchangeID(PyCThostFtdcBrokerDepositField *self, PyObject* val, void *closure) {
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
            
///上次结算准备金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcBrokerDepositField_get_PreBalance(PyCThostFtdcBrokerDepositField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PreBalance);
}

///上次结算准备金
// TThostFtdcMoneyType double
static int PyCThostFtdcBrokerDepositField_set_PreBalance(PyCThostFtdcBrokerDepositField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PreBalance Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PreBalance = buf;
    return 0;
}
        
///当前保证金总额
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcBrokerDepositField_get_CurrMargin(PyCThostFtdcBrokerDepositField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CurrMargin);
}

///当前保证金总额
// TThostFtdcMoneyType double
static int PyCThostFtdcBrokerDepositField_set_CurrMargin(PyCThostFtdcBrokerDepositField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CurrMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CurrMargin = buf;
    return 0;
}
        
///平仓盈亏
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcBrokerDepositField_get_CloseProfit(PyCThostFtdcBrokerDepositField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CloseProfit);
}

///平仓盈亏
// TThostFtdcMoneyType double
static int PyCThostFtdcBrokerDepositField_set_CloseProfit(PyCThostFtdcBrokerDepositField *self, PyObject* val, void *closure) {
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
        
///期货结算准备金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcBrokerDepositField_get_Balance(PyCThostFtdcBrokerDepositField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Balance);
}

///期货结算准备金
// TThostFtdcMoneyType double
static int PyCThostFtdcBrokerDepositField_set_Balance(PyCThostFtdcBrokerDepositField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Balance Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Balance = buf;
    return 0;
}
        
///入金金额
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcBrokerDepositField_get_Deposit(PyCThostFtdcBrokerDepositField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Deposit);
}

///入金金额
// TThostFtdcMoneyType double
static int PyCThostFtdcBrokerDepositField_set_Deposit(PyCThostFtdcBrokerDepositField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Deposit Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Deposit = buf;
    return 0;
}
        
///出金金额
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcBrokerDepositField_get_Withdraw(PyCThostFtdcBrokerDepositField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Withdraw);
}

///出金金额
// TThostFtdcMoneyType double
static int PyCThostFtdcBrokerDepositField_set_Withdraw(PyCThostFtdcBrokerDepositField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Withdraw Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Withdraw = buf;
    return 0;
}
        
///可提资金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcBrokerDepositField_get_Available(PyCThostFtdcBrokerDepositField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Available);
}

///可提资金
// TThostFtdcMoneyType double
static int PyCThostFtdcBrokerDepositField_set_Available(PyCThostFtdcBrokerDepositField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Available Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Available = buf;
    return 0;
}
        
///基本准备金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcBrokerDepositField_get_Reserve(PyCThostFtdcBrokerDepositField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Reserve);
}

///基本准备金
// TThostFtdcMoneyType double
static int PyCThostFtdcBrokerDepositField_set_Reserve(PyCThostFtdcBrokerDepositField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Reserve Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Reserve = buf;
    return 0;
}
        
///冻结的保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcBrokerDepositField_get_FrozenMargin(PyCThostFtdcBrokerDepositField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FrozenMargin);
}

///冻结的保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcBrokerDepositField_set_FrozenMargin(PyCThostFtdcBrokerDepositField *self, PyObject* val, void *closure) {
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
        

static PyGetSetDef PyCThostFtdcBrokerDepositField_getset[] = {
    ///交易日期 
    {(char *)"TradingDay", (getter)PyCThostFtdcBrokerDepositField_get_TradingDay, (setter)PyCThostFtdcBrokerDepositField_set_TradingDay, (char *)"TradingDay", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcBrokerDepositField_get_BrokerID, (setter)PyCThostFtdcBrokerDepositField_set_BrokerID, (char *)"BrokerID", NULL},
    ///会员代码 
    {(char *)"ParticipantID", (getter)PyCThostFtdcBrokerDepositField_get_ParticipantID, (setter)PyCThostFtdcBrokerDepositField_set_ParticipantID, (char *)"ParticipantID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcBrokerDepositField_get_ExchangeID, (setter)PyCThostFtdcBrokerDepositField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///上次结算准备金 
    {(char *)"PreBalance", (getter)PyCThostFtdcBrokerDepositField_get_PreBalance, (setter)PyCThostFtdcBrokerDepositField_set_PreBalance, (char *)"PreBalance", NULL},
    ///当前保证金总额 
    {(char *)"CurrMargin", (getter)PyCThostFtdcBrokerDepositField_get_CurrMargin, (setter)PyCThostFtdcBrokerDepositField_set_CurrMargin, (char *)"CurrMargin", NULL},
    ///平仓盈亏 
    {(char *)"CloseProfit", (getter)PyCThostFtdcBrokerDepositField_get_CloseProfit, (setter)PyCThostFtdcBrokerDepositField_set_CloseProfit, (char *)"CloseProfit", NULL},
    ///期货结算准备金 
    {(char *)"Balance", (getter)PyCThostFtdcBrokerDepositField_get_Balance, (setter)PyCThostFtdcBrokerDepositField_set_Balance, (char *)"Balance", NULL},
    ///入金金额 
    {(char *)"Deposit", (getter)PyCThostFtdcBrokerDepositField_get_Deposit, (setter)PyCThostFtdcBrokerDepositField_set_Deposit, (char *)"Deposit", NULL},
    ///出金金额 
    {(char *)"Withdraw", (getter)PyCThostFtdcBrokerDepositField_get_Withdraw, (setter)PyCThostFtdcBrokerDepositField_set_Withdraw, (char *)"Withdraw", NULL},
    ///可提资金 
    {(char *)"Available", (getter)PyCThostFtdcBrokerDepositField_get_Available, (setter)PyCThostFtdcBrokerDepositField_set_Available, (char *)"Available", NULL},
    ///基本准备金 
    {(char *)"Reserve", (getter)PyCThostFtdcBrokerDepositField_get_Reserve, (setter)PyCThostFtdcBrokerDepositField_set_Reserve, (char *)"Reserve", NULL},
    ///冻结的保证金 
    {(char *)"FrozenMargin", (getter)PyCThostFtdcBrokerDepositField_get_FrozenMargin, (setter)PyCThostFtdcBrokerDepositField_set_FrozenMargin, (char *)"FrozenMargin", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcBrokerDepositFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcBrokerDepositField",	/* tp_name */
	sizeof(PyCThostFtdcBrokerDepositField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcBrokerDepositField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcBrokerDepositField_repr,   /* tp_repr */
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
	"CThostFtdcBrokerDepositField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcBrokerDepositField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcBrokerDepositField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcBrokerDepositField_new,       /* tp_new */
};

int PyCThostFtdcBrokerDepositFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcBrokerDepositField  */
	if (PyType_Ready(&PyCThostFtdcBrokerDepositFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcBrokerDepositField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcBrokerDepositFieldType);
    if( PyModule_AddObject(module, "CThostFtdcBrokerDepositField", (PyObject *)&PyCThostFtdcBrokerDepositFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcBrokerDepositField to module");
        Py_DECREF(&PyCThostFtdcBrokerDepositFieldType);
		return -1;
    }

    return 0;
}
