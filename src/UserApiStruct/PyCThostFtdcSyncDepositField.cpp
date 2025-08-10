
#include "PyCThostFtdcSyncDepositField.h"

///出入金同步

static PyObject *PyCThostFtdcSyncDepositField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDepositField *self = (PyCThostFtdcSyncDepositField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDepositField_init(PyCThostFtdcSyncDepositField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"DepositSeqNo", "BrokerID", "InvestorID", "Deposit", "IsForce", "CurrencyID", "IsFromSopt", "TradingPassword", "IsSecAgentTranfer",  NULL};


    ///出入金流水号
    // TThostFtdcDepositSeqNoType char[15]
    const char *SyncDepositField_DepositSeqNo = NULL;
    Py_ssize_t SyncDepositField_DepositSeqNo_len = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *SyncDepositField_BrokerID = NULL;
    Py_ssize_t SyncDepositField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *SyncDepositField_InvestorID = NULL;
    Py_ssize_t SyncDepositField_InvestorID_len = 0;
            
    ///入金金额
    // TThostFtdcMoneyType double
    double SyncDepositField_Deposit = 0.0;
        
    ///是否强制进行
    // TThostFtdcBoolType int
    int SyncDepositField_IsForce = 0;
        
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *SyncDepositField_CurrencyID = NULL;
    Py_ssize_t SyncDepositField_CurrencyID_len = 0;
            
    ///是否是个股期权内转
    // TThostFtdcBoolType int
    int SyncDepositField_IsFromSopt = 0;
        
    ///资金密码
    // TThostFtdcPasswordType char[41]
    const char *SyncDepositField_TradingPassword = NULL;
    Py_ssize_t SyncDepositField_TradingPassword_len = 0;
            
    ///是否二级代理商的内转
    // TThostFtdcBoolType int
    int SyncDepositField_IsSecAgentTranfer = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#diy#iy#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#dis#is#i", (char **)kwlist
#endif

        , &SyncDepositField_DepositSeqNo, &SyncDepositField_DepositSeqNo_len 
        , &SyncDepositField_BrokerID, &SyncDepositField_BrokerID_len 
        , &SyncDepositField_InvestorID, &SyncDepositField_InvestorID_len 
        , &SyncDepositField_Deposit 
        , &SyncDepositField_IsForce 
        , &SyncDepositField_CurrencyID, &SyncDepositField_CurrencyID_len 
        , &SyncDepositField_IsFromSopt 
        , &SyncDepositField_TradingPassword, &SyncDepositField_TradingPassword_len 
        , &SyncDepositField_IsSecAgentTranfer 


    )) {
        return -1;
    }


    ///出入金流水号
    // TThostFtdcDepositSeqNoType char[15]
    if( SyncDepositField_DepositSeqNo != NULL ) {
        if(SyncDepositField_DepositSeqNo_len > (Py_ssize_t)sizeof(self->data.DepositSeqNo)) {
            PyErr_Format(PyExc_ValueError, "DepositSeqNo too long: length=%zd (max allowed is %zd)", SyncDepositField_DepositSeqNo_len, (Py_ssize_t)sizeof(self->data.DepositSeqNo));
            return -1;
        }
        // memset(self->data.DepositSeqNo, 0, sizeof(self->data.DepositSeqNo));
        // memcpy(self->data.DepositSeqNo, SyncDepositField_DepositSeqNo, SyncDepositField_DepositSeqNo_len);        
        strncpy(self->data.DepositSeqNo, SyncDepositField_DepositSeqNo, sizeof(self->data.DepositSeqNo) );
        SyncDepositField_DepositSeqNo = NULL;
    }
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( SyncDepositField_BrokerID != NULL ) {
        if(SyncDepositField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", SyncDepositField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, SyncDepositField_BrokerID, SyncDepositField_BrokerID_len);        
        strncpy(self->data.BrokerID, SyncDepositField_BrokerID, sizeof(self->data.BrokerID) );
        SyncDepositField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( SyncDepositField_InvestorID != NULL ) {
        if(SyncDepositField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", SyncDepositField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, SyncDepositField_InvestorID, SyncDepositField_InvestorID_len);        
        strncpy(self->data.InvestorID, SyncDepositField_InvestorID, sizeof(self->data.InvestorID) );
        SyncDepositField_InvestorID = NULL;
    }
            
    ///入金金额
    // TThostFtdcMoneyType double
    self->data.Deposit = SyncDepositField_Deposit;
        
    ///是否强制进行
    // TThostFtdcBoolType int
    self->data.IsForce = SyncDepositField_IsForce;
        
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( SyncDepositField_CurrencyID != NULL ) {
        if(SyncDepositField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", SyncDepositField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, SyncDepositField_CurrencyID, SyncDepositField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, SyncDepositField_CurrencyID, sizeof(self->data.CurrencyID) );
        SyncDepositField_CurrencyID = NULL;
    }
            
    ///是否是个股期权内转
    // TThostFtdcBoolType int
    self->data.IsFromSopt = SyncDepositField_IsFromSopt;
        
    ///资金密码
    // TThostFtdcPasswordType char[41]
    if( SyncDepositField_TradingPassword != NULL ) {
        if(SyncDepositField_TradingPassword_len > (Py_ssize_t)sizeof(self->data.TradingPassword)) {
            PyErr_Format(PyExc_ValueError, "TradingPassword too long: length=%zd (max allowed is %zd)", SyncDepositField_TradingPassword_len, (Py_ssize_t)sizeof(self->data.TradingPassword));
            return -1;
        }
        // memset(self->data.TradingPassword, 0, sizeof(self->data.TradingPassword));
        // memcpy(self->data.TradingPassword, SyncDepositField_TradingPassword, SyncDepositField_TradingPassword_len);        
        strncpy(self->data.TradingPassword, SyncDepositField_TradingPassword, sizeof(self->data.TradingPassword) );
        SyncDepositField_TradingPassword = NULL;
    }
            
    ///是否二级代理商的内转
    // TThostFtdcBoolType int
    self->data.IsSecAgentTranfer = SyncDepositField_IsSecAgentTranfer;
        

    return 0;
}

static void PyCThostFtdcSyncDepositField_dealloc(PyCThostFtdcSyncDepositField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDepositField_repr(PyCThostFtdcSyncDepositField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:d,s:i,s:y,s:i,s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:d,s:i,s:s,s:i,s:s,s:i}"
#endif

        ,"DepositSeqNo", self->data.DepositSeqNo//, (Py_ssize_t)sizeof(self->data.DepositSeqNo) 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"Deposit", self->data.Deposit 
        ,"IsForce", self->data.IsForce 
        ,"CurrencyID", self->data.CurrencyID//, (Py_ssize_t)sizeof(self->data.CurrencyID) 
        ,"IsFromSopt", self->data.IsFromSopt 
        ,"TradingPassword", self->data.TradingPassword//, (Py_ssize_t)sizeof(self->data.TradingPassword) 
        ,"IsSecAgentTranfer", self->data.IsSecAgentTranfer 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDepositField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///出入金流水号
// TThostFtdcDepositSeqNoType char[15]
static PyObject *PyCThostFtdcSyncDepositField_get_DepositSeqNo(PyCThostFtdcSyncDepositField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.DepositSeqNo, (Py_ssize_t)sizeof(self->data.DepositSeqNo));
    return PyBytes_FromString(self->data.DepositSeqNo);
}

///出入金流水号
// TThostFtdcDepositSeqNoType char[15]
static int PyCThostFtdcSyncDepositField_set_DepositSeqNo(PyCThostFtdcSyncDepositField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DepositSeqNo Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.DepositSeqNo)) {
        PyErr_SetString(PyExc_ValueError, "DepositSeqNo must be less than 15 bytes");
        return -1;
    }
    // memset(self->data.DepositSeqNo, 0, sizeof(self->data.DepositSeqNo));
    // memcpy(self->data.DepositSeqNo, buf, len);
    strncpy(self->data.DepositSeqNo, buf, sizeof(self->data.DepositSeqNo));
    return 0;
}
            
///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcSyncDepositField_get_BrokerID(PyCThostFtdcSyncDepositField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcSyncDepositField_set_BrokerID(PyCThostFtdcSyncDepositField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDepositField_get_InvestorID(PyCThostFtdcSyncDepositField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcSyncDepositField_set_InvestorID(PyCThostFtdcSyncDepositField *self, PyObject* val, void *closure) {
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
            
///入金金额
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDepositField_get_Deposit(PyCThostFtdcSyncDepositField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Deposit);
}

///入金金额
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDepositField_set_Deposit(PyCThostFtdcSyncDepositField *self, PyObject* val, void *closure) {
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
        
///是否强制进行
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcSyncDepositField_get_IsForce(PyCThostFtdcSyncDepositField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsForce);
#else
    return PyInt_FromLong(self->data.IsForce);
#endif
}

///是否强制进行
// TThostFtdcBoolType int
static int PyCThostFtdcSyncDepositField_set_IsForce(PyCThostFtdcSyncDepositField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsForce Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsForce Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the IsForce value out of range for C int");
        return -1;
    }
    self->data.IsForce = (int)buf;
    return 0;
}
        
///币种代码
// TThostFtdcCurrencyIDType char[4]
static PyObject *PyCThostFtdcSyncDepositField_get_CurrencyID(PyCThostFtdcSyncDepositField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcSyncDepositField_set_CurrencyID(PyCThostFtdcSyncDepositField *self, PyObject* val, void *closure) {
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
            
///是否是个股期权内转
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcSyncDepositField_get_IsFromSopt(PyCThostFtdcSyncDepositField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsFromSopt);
#else
    return PyInt_FromLong(self->data.IsFromSopt);
#endif
}

///是否是个股期权内转
// TThostFtdcBoolType int
static int PyCThostFtdcSyncDepositField_set_IsFromSopt(PyCThostFtdcSyncDepositField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsFromSopt Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsFromSopt Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the IsFromSopt value out of range for C int");
        return -1;
    }
    self->data.IsFromSopt = (int)buf;
    return 0;
}
        
///资金密码
// TThostFtdcPasswordType char[41]
static PyObject *PyCThostFtdcSyncDepositField_get_TradingPassword(PyCThostFtdcSyncDepositField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingPassword, (Py_ssize_t)sizeof(self->data.TradingPassword));
    return PyBytes_FromString(self->data.TradingPassword);
}

///资金密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcSyncDepositField_set_TradingPassword(PyCThostFtdcSyncDepositField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradingPassword Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TradingPassword)) {
        PyErr_SetString(PyExc_ValueError, "TradingPassword must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.TradingPassword, 0, sizeof(self->data.TradingPassword));
    // memcpy(self->data.TradingPassword, buf, len);
    strncpy(self->data.TradingPassword, buf, sizeof(self->data.TradingPassword));
    return 0;
}
            
///是否二级代理商的内转
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcSyncDepositField_get_IsSecAgentTranfer(PyCThostFtdcSyncDepositField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsSecAgentTranfer);
#else
    return PyInt_FromLong(self->data.IsSecAgentTranfer);
#endif
}

///是否二级代理商的内转
// TThostFtdcBoolType int
static int PyCThostFtdcSyncDepositField_set_IsSecAgentTranfer(PyCThostFtdcSyncDepositField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsSecAgentTranfer Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsSecAgentTranfer Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the IsSecAgentTranfer value out of range for C int");
        return -1;
    }
    self->data.IsSecAgentTranfer = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcSyncDepositField_getset[] = {
    ///出入金流水号 
    {(char *)"DepositSeqNo", (getter)PyCThostFtdcSyncDepositField_get_DepositSeqNo, (setter)PyCThostFtdcSyncDepositField_set_DepositSeqNo, (char *)"DepositSeqNo", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcSyncDepositField_get_BrokerID, (setter)PyCThostFtdcSyncDepositField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcSyncDepositField_get_InvestorID, (setter)PyCThostFtdcSyncDepositField_set_InvestorID, (char *)"InvestorID", NULL},
    ///入金金额 
    {(char *)"Deposit", (getter)PyCThostFtdcSyncDepositField_get_Deposit, (setter)PyCThostFtdcSyncDepositField_set_Deposit, (char *)"Deposit", NULL},
    ///是否强制进行 
    {(char *)"IsForce", (getter)PyCThostFtdcSyncDepositField_get_IsForce, (setter)PyCThostFtdcSyncDepositField_set_IsForce, (char *)"IsForce", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcSyncDepositField_get_CurrencyID, (setter)PyCThostFtdcSyncDepositField_set_CurrencyID, (char *)"CurrencyID", NULL},
    ///是否是个股期权内转 
    {(char *)"IsFromSopt", (getter)PyCThostFtdcSyncDepositField_get_IsFromSopt, (setter)PyCThostFtdcSyncDepositField_set_IsFromSopt, (char *)"IsFromSopt", NULL},
    ///资金密码 
    {(char *)"TradingPassword", (getter)PyCThostFtdcSyncDepositField_get_TradingPassword, (setter)PyCThostFtdcSyncDepositField_set_TradingPassword, (char *)"TradingPassword", NULL},
    ///是否二级代理商的内转 
    {(char *)"IsSecAgentTranfer", (getter)PyCThostFtdcSyncDepositField_get_IsSecAgentTranfer, (setter)PyCThostFtdcSyncDepositField_set_IsSecAgentTranfer, (char *)"IsSecAgentTranfer", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDepositFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDepositField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDepositField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDepositField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDepositField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDepositField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDepositField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDepositField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDepositField_new,       /* tp_new */
};

int PyCThostFtdcSyncDepositFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDepositField  */
	if (PyType_Ready(&PyCThostFtdcSyncDepositFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDepositField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDepositFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDepositField", (PyObject *)&PyCThostFtdcSyncDepositFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDepositField to module");
        Py_DECREF(&PyCThostFtdcSyncDepositFieldType);
		return -1;
    }

    return 0;
}
