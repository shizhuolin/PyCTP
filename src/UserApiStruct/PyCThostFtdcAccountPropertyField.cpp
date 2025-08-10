
#include "PyCThostFtdcAccountPropertyField.h"

///银行账户属性

static PyObject *PyCThostFtdcAccountPropertyField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcAccountPropertyField *self = (PyCThostFtdcAccountPropertyField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcAccountPropertyField_init(PyCThostFtdcAccountPropertyField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "AccountID", "BankID", "BankAccount", "OpenName", "OpenBank", "IsActive", "AccountSourceType", "OpenDate", "CancelDate", "OperatorID", "OperateDate", "OperateTime", "CurrencyID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *AccountPropertyField_BrokerID = NULL;
    Py_ssize_t AccountPropertyField_BrokerID_len = 0;
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    const char *AccountPropertyField_AccountID = NULL;
    Py_ssize_t AccountPropertyField_AccountID_len = 0;
            
    ///银行统一标识类型
    // TThostFtdcBankIDType char[4]
    const char *AccountPropertyField_BankID = NULL;
    Py_ssize_t AccountPropertyField_BankID_len = 0;
            
    ///银行账户
    // TThostFtdcBankAccountType char[41]
    const char *AccountPropertyField_BankAccount = NULL;
    Py_ssize_t AccountPropertyField_BankAccount_len = 0;
            
    ///银行账户的开户人名称
    // TThostFtdcInvestorFullNameType char[101]
    const char *AccountPropertyField_OpenName = NULL;
    Py_ssize_t AccountPropertyField_OpenName_len = 0;
            
    ///银行账户的开户行
    // TThostFtdcOpenBankType char[101]
    const char *AccountPropertyField_OpenBank = NULL;
    Py_ssize_t AccountPropertyField_OpenBank_len = 0;
            
    ///是否活跃
    // TThostFtdcBoolType int
    int AccountPropertyField_IsActive = 0;
        
    ///账户来源
    // TThostFtdcAccountSourceTypeType char
    char AccountPropertyField_AccountSourceType = 0;
            
    ///开户日期
    // TThostFtdcDateType char[9]
    const char *AccountPropertyField_OpenDate = NULL;
    Py_ssize_t AccountPropertyField_OpenDate_len = 0;
            
    ///注销日期
    // TThostFtdcDateType char[9]
    const char *AccountPropertyField_CancelDate = NULL;
    Py_ssize_t AccountPropertyField_CancelDate_len = 0;
            
    ///录入员代码
    // TThostFtdcOperatorIDType char[65]
    const char *AccountPropertyField_OperatorID = NULL;
    Py_ssize_t AccountPropertyField_OperatorID_len = 0;
            
    ///录入日期
    // TThostFtdcDateType char[9]
    const char *AccountPropertyField_OperateDate = NULL;
    Py_ssize_t AccountPropertyField_OperateDate_len = 0;
            
    ///录入时间
    // TThostFtdcTimeType char[9]
    const char *AccountPropertyField_OperateTime = NULL;
    Py_ssize_t AccountPropertyField_OperateTime_len = 0;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *AccountPropertyField_CurrencyID = NULL;
    Py_ssize_t AccountPropertyField_CurrencyID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#icy#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#ics#s#s#s#s#s#", (char **)kwlist
#endif

        , &AccountPropertyField_BrokerID, &AccountPropertyField_BrokerID_len 
        , &AccountPropertyField_AccountID, &AccountPropertyField_AccountID_len 
        , &AccountPropertyField_BankID, &AccountPropertyField_BankID_len 
        , &AccountPropertyField_BankAccount, &AccountPropertyField_BankAccount_len 
        , &AccountPropertyField_OpenName, &AccountPropertyField_OpenName_len 
        , &AccountPropertyField_OpenBank, &AccountPropertyField_OpenBank_len 
        , &AccountPropertyField_IsActive 
        , &AccountPropertyField_AccountSourceType 
        , &AccountPropertyField_OpenDate, &AccountPropertyField_OpenDate_len 
        , &AccountPropertyField_CancelDate, &AccountPropertyField_CancelDate_len 
        , &AccountPropertyField_OperatorID, &AccountPropertyField_OperatorID_len 
        , &AccountPropertyField_OperateDate, &AccountPropertyField_OperateDate_len 
        , &AccountPropertyField_OperateTime, &AccountPropertyField_OperateTime_len 
        , &AccountPropertyField_CurrencyID, &AccountPropertyField_CurrencyID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( AccountPropertyField_BrokerID != NULL ) {
        if(AccountPropertyField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", AccountPropertyField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, AccountPropertyField_BrokerID, AccountPropertyField_BrokerID_len);        
        strncpy(self->data.BrokerID, AccountPropertyField_BrokerID, sizeof(self->data.BrokerID) );
        AccountPropertyField_BrokerID = NULL;
    }
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    if( AccountPropertyField_AccountID != NULL ) {
        if(AccountPropertyField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", AccountPropertyField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
            return -1;
        }
        // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
        // memcpy(self->data.AccountID, AccountPropertyField_AccountID, AccountPropertyField_AccountID_len);        
        strncpy(self->data.AccountID, AccountPropertyField_AccountID, sizeof(self->data.AccountID) );
        AccountPropertyField_AccountID = NULL;
    }
            
    ///银行统一标识类型
    // TThostFtdcBankIDType char[4]
    if( AccountPropertyField_BankID != NULL ) {
        if(AccountPropertyField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", AccountPropertyField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
            return -1;
        }
        // memset(self->data.BankID, 0, sizeof(self->data.BankID));
        // memcpy(self->data.BankID, AccountPropertyField_BankID, AccountPropertyField_BankID_len);        
        strncpy(self->data.BankID, AccountPropertyField_BankID, sizeof(self->data.BankID) );
        AccountPropertyField_BankID = NULL;
    }
            
    ///银行账户
    // TThostFtdcBankAccountType char[41]
    if( AccountPropertyField_BankAccount != NULL ) {
        if(AccountPropertyField_BankAccount_len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
            PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is %zd)", AccountPropertyField_BankAccount_len, (Py_ssize_t)sizeof(self->data.BankAccount));
            return -1;
        }
        // memset(self->data.BankAccount, 0, sizeof(self->data.BankAccount));
        // memcpy(self->data.BankAccount, AccountPropertyField_BankAccount, AccountPropertyField_BankAccount_len);        
        strncpy(self->data.BankAccount, AccountPropertyField_BankAccount, sizeof(self->data.BankAccount) );
        AccountPropertyField_BankAccount = NULL;
    }
            
    ///银行账户的开户人名称
    // TThostFtdcInvestorFullNameType char[101]
    if( AccountPropertyField_OpenName != NULL ) {
        if(AccountPropertyField_OpenName_len > (Py_ssize_t)sizeof(self->data.OpenName)) {
            PyErr_Format(PyExc_ValueError, "OpenName too long: length=%zd (max allowed is %zd)", AccountPropertyField_OpenName_len, (Py_ssize_t)sizeof(self->data.OpenName));
            return -1;
        }
        // memset(self->data.OpenName, 0, sizeof(self->data.OpenName));
        // memcpy(self->data.OpenName, AccountPropertyField_OpenName, AccountPropertyField_OpenName_len);        
        strncpy(self->data.OpenName, AccountPropertyField_OpenName, sizeof(self->data.OpenName) );
        AccountPropertyField_OpenName = NULL;
    }
            
    ///银行账户的开户行
    // TThostFtdcOpenBankType char[101]
    if( AccountPropertyField_OpenBank != NULL ) {
        if(AccountPropertyField_OpenBank_len > (Py_ssize_t)sizeof(self->data.OpenBank)) {
            PyErr_Format(PyExc_ValueError, "OpenBank too long: length=%zd (max allowed is %zd)", AccountPropertyField_OpenBank_len, (Py_ssize_t)sizeof(self->data.OpenBank));
            return -1;
        }
        // memset(self->data.OpenBank, 0, sizeof(self->data.OpenBank));
        // memcpy(self->data.OpenBank, AccountPropertyField_OpenBank, AccountPropertyField_OpenBank_len);        
        strncpy(self->data.OpenBank, AccountPropertyField_OpenBank, sizeof(self->data.OpenBank) );
        AccountPropertyField_OpenBank = NULL;
    }
            
    ///是否活跃
    // TThostFtdcBoolType int
    self->data.IsActive = AccountPropertyField_IsActive;
        
    ///账户来源
    // TThostFtdcAccountSourceTypeType char
    self->data.AccountSourceType = AccountPropertyField_AccountSourceType;
            
    ///开户日期
    // TThostFtdcDateType char[9]
    if( AccountPropertyField_OpenDate != NULL ) {
        if(AccountPropertyField_OpenDate_len > (Py_ssize_t)sizeof(self->data.OpenDate)) {
            PyErr_Format(PyExc_ValueError, "OpenDate too long: length=%zd (max allowed is %zd)", AccountPropertyField_OpenDate_len, (Py_ssize_t)sizeof(self->data.OpenDate));
            return -1;
        }
        // memset(self->data.OpenDate, 0, sizeof(self->data.OpenDate));
        // memcpy(self->data.OpenDate, AccountPropertyField_OpenDate, AccountPropertyField_OpenDate_len);        
        strncpy(self->data.OpenDate, AccountPropertyField_OpenDate, sizeof(self->data.OpenDate) );
        AccountPropertyField_OpenDate = NULL;
    }
            
    ///注销日期
    // TThostFtdcDateType char[9]
    if( AccountPropertyField_CancelDate != NULL ) {
        if(AccountPropertyField_CancelDate_len > (Py_ssize_t)sizeof(self->data.CancelDate)) {
            PyErr_Format(PyExc_ValueError, "CancelDate too long: length=%zd (max allowed is %zd)", AccountPropertyField_CancelDate_len, (Py_ssize_t)sizeof(self->data.CancelDate));
            return -1;
        }
        // memset(self->data.CancelDate, 0, sizeof(self->data.CancelDate));
        // memcpy(self->data.CancelDate, AccountPropertyField_CancelDate, AccountPropertyField_CancelDate_len);        
        strncpy(self->data.CancelDate, AccountPropertyField_CancelDate, sizeof(self->data.CancelDate) );
        AccountPropertyField_CancelDate = NULL;
    }
            
    ///录入员代码
    // TThostFtdcOperatorIDType char[65]
    if( AccountPropertyField_OperatorID != NULL ) {
        if(AccountPropertyField_OperatorID_len > (Py_ssize_t)sizeof(self->data.OperatorID)) {
            PyErr_Format(PyExc_ValueError, "OperatorID too long: length=%zd (max allowed is %zd)", AccountPropertyField_OperatorID_len, (Py_ssize_t)sizeof(self->data.OperatorID));
            return -1;
        }
        // memset(self->data.OperatorID, 0, sizeof(self->data.OperatorID));
        // memcpy(self->data.OperatorID, AccountPropertyField_OperatorID, AccountPropertyField_OperatorID_len);        
        strncpy(self->data.OperatorID, AccountPropertyField_OperatorID, sizeof(self->data.OperatorID) );
        AccountPropertyField_OperatorID = NULL;
    }
            
    ///录入日期
    // TThostFtdcDateType char[9]
    if( AccountPropertyField_OperateDate != NULL ) {
        if(AccountPropertyField_OperateDate_len > (Py_ssize_t)sizeof(self->data.OperateDate)) {
            PyErr_Format(PyExc_ValueError, "OperateDate too long: length=%zd (max allowed is %zd)", AccountPropertyField_OperateDate_len, (Py_ssize_t)sizeof(self->data.OperateDate));
            return -1;
        }
        // memset(self->data.OperateDate, 0, sizeof(self->data.OperateDate));
        // memcpy(self->data.OperateDate, AccountPropertyField_OperateDate, AccountPropertyField_OperateDate_len);        
        strncpy(self->data.OperateDate, AccountPropertyField_OperateDate, sizeof(self->data.OperateDate) );
        AccountPropertyField_OperateDate = NULL;
    }
            
    ///录入时间
    // TThostFtdcTimeType char[9]
    if( AccountPropertyField_OperateTime != NULL ) {
        if(AccountPropertyField_OperateTime_len > (Py_ssize_t)sizeof(self->data.OperateTime)) {
            PyErr_Format(PyExc_ValueError, "OperateTime too long: length=%zd (max allowed is %zd)", AccountPropertyField_OperateTime_len, (Py_ssize_t)sizeof(self->data.OperateTime));
            return -1;
        }
        // memset(self->data.OperateTime, 0, sizeof(self->data.OperateTime));
        // memcpy(self->data.OperateTime, AccountPropertyField_OperateTime, AccountPropertyField_OperateTime_len);        
        strncpy(self->data.OperateTime, AccountPropertyField_OperateTime, sizeof(self->data.OperateTime) );
        AccountPropertyField_OperateTime = NULL;
    }
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( AccountPropertyField_CurrencyID != NULL ) {
        if(AccountPropertyField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", AccountPropertyField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, AccountPropertyField_CurrencyID, AccountPropertyField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, AccountPropertyField_CurrencyID, sizeof(self->data.CurrencyID) );
        AccountPropertyField_CurrencyID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcAccountPropertyField_dealloc(PyCThostFtdcAccountPropertyField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcAccountPropertyField_repr(PyCThostFtdcAccountPropertyField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"AccountID", self->data.AccountID//, (Py_ssize_t)sizeof(self->data.AccountID) 
        ,"BankID", self->data.BankID//, (Py_ssize_t)sizeof(self->data.BankID) 
        ,"BankAccount", self->data.BankAccount//, (Py_ssize_t)sizeof(self->data.BankAccount) 
        ,"OpenName", self->data.OpenName//, (Py_ssize_t)sizeof(self->data.OpenName) 
        ,"OpenBank", self->data.OpenBank//, (Py_ssize_t)sizeof(self->data.OpenBank) 
        ,"IsActive", self->data.IsActive 
        ,"AccountSourceType", self->data.AccountSourceType 
        ,"OpenDate", self->data.OpenDate//, (Py_ssize_t)sizeof(self->data.OpenDate) 
        ,"CancelDate", self->data.CancelDate//, (Py_ssize_t)sizeof(self->data.CancelDate) 
        ,"OperatorID", self->data.OperatorID//, (Py_ssize_t)sizeof(self->data.OperatorID) 
        ,"OperateDate", self->data.OperateDate//, (Py_ssize_t)sizeof(self->data.OperateDate) 
        ,"OperateTime", self->data.OperateTime//, (Py_ssize_t)sizeof(self->data.OperateTime) 
        ,"CurrencyID", self->data.CurrencyID//, (Py_ssize_t)sizeof(self->data.CurrencyID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcAccountPropertyField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcAccountPropertyField_get_BrokerID(PyCThostFtdcAccountPropertyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcAccountPropertyField_set_BrokerID(PyCThostFtdcAccountPropertyField *self, PyObject* val, void *closure) {
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
            
///投资者帐号
// TThostFtdcAccountIDType char[13]
static PyObject *PyCThostFtdcAccountPropertyField_get_AccountID(PyCThostFtdcAccountPropertyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AccountID, (Py_ssize_t)sizeof(self->data.AccountID));
    return PyBytes_FromString(self->data.AccountID);
}

///投资者帐号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcAccountPropertyField_set_AccountID(PyCThostFtdcAccountPropertyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
    // memcpy(self->data.AccountID, buf, len);
    strncpy(self->data.AccountID, buf, sizeof(self->data.AccountID));
    return 0;
}
            
///银行统一标识类型
// TThostFtdcBankIDType char[4]
static PyObject *PyCThostFtdcAccountPropertyField_get_BankID(PyCThostFtdcAccountPropertyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankID, (Py_ssize_t)sizeof(self->data.BankID));
    return PyBytes_FromString(self->data.BankID);
}

///银行统一标识类型
// TThostFtdcBankIDType char[4]
static int PyCThostFtdcAccountPropertyField_set_BankID(PyCThostFtdcAccountPropertyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BankID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BankID)) {
        PyErr_SetString(PyExc_ValueError, "BankID must be less than 4 bytes");
        return -1;
    }
    // memset(self->data.BankID, 0, sizeof(self->data.BankID));
    // memcpy(self->data.BankID, buf, len);
    strncpy(self->data.BankID, buf, sizeof(self->data.BankID));
    return 0;
}
            
///银行账户
// TThostFtdcBankAccountType char[41]
static PyObject *PyCThostFtdcAccountPropertyField_get_BankAccount(PyCThostFtdcAccountPropertyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankAccount, (Py_ssize_t)sizeof(self->data.BankAccount));
    return PyBytes_FromString(self->data.BankAccount);
}

///银行账户
// TThostFtdcBankAccountType char[41]
static int PyCThostFtdcAccountPropertyField_set_BankAccount(PyCThostFtdcAccountPropertyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BankAccount Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
        PyErr_SetString(PyExc_ValueError, "BankAccount must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.BankAccount, 0, sizeof(self->data.BankAccount));
    // memcpy(self->data.BankAccount, buf, len);
    strncpy(self->data.BankAccount, buf, sizeof(self->data.BankAccount));
    return 0;
}
            
///银行账户的开户人名称
// TThostFtdcInvestorFullNameType char[101]
static PyObject *PyCThostFtdcAccountPropertyField_get_OpenName(PyCThostFtdcAccountPropertyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OpenName, (Py_ssize_t)sizeof(self->data.OpenName));
    return PyBytes_FromString(self->data.OpenName);
}

///银行账户的开户人名称
// TThostFtdcInvestorFullNameType char[101]
static int PyCThostFtdcAccountPropertyField_set_OpenName(PyCThostFtdcAccountPropertyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OpenName Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OpenName)) {
        PyErr_SetString(PyExc_ValueError, "OpenName must be less than 101 bytes");
        return -1;
    }
    // memset(self->data.OpenName, 0, sizeof(self->data.OpenName));
    // memcpy(self->data.OpenName, buf, len);
    strncpy(self->data.OpenName, buf, sizeof(self->data.OpenName));
    return 0;
}
            
///银行账户的开户行
// TThostFtdcOpenBankType char[101]
static PyObject *PyCThostFtdcAccountPropertyField_get_OpenBank(PyCThostFtdcAccountPropertyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OpenBank, (Py_ssize_t)sizeof(self->data.OpenBank));
    return PyBytes_FromString(self->data.OpenBank);
}

///银行账户的开户行
// TThostFtdcOpenBankType char[101]
static int PyCThostFtdcAccountPropertyField_set_OpenBank(PyCThostFtdcAccountPropertyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OpenBank Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OpenBank)) {
        PyErr_SetString(PyExc_ValueError, "OpenBank must be less than 101 bytes");
        return -1;
    }
    // memset(self->data.OpenBank, 0, sizeof(self->data.OpenBank));
    // memcpy(self->data.OpenBank, buf, len);
    strncpy(self->data.OpenBank, buf, sizeof(self->data.OpenBank));
    return 0;
}
            
///是否活跃
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcAccountPropertyField_get_IsActive(PyCThostFtdcAccountPropertyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsActive);
#else
    return PyInt_FromLong(self->data.IsActive);
#endif
}

///是否活跃
// TThostFtdcBoolType int
static int PyCThostFtdcAccountPropertyField_set_IsActive(PyCThostFtdcAccountPropertyField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsActive Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsActive Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the IsActive value out of range for C int");
        return -1;
    }
    self->data.IsActive = (int)buf;
    return 0;
}
        
///账户来源
// TThostFtdcAccountSourceTypeType char
static PyObject *PyCThostFtdcAccountPropertyField_get_AccountSourceType(PyCThostFtdcAccountPropertyField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.AccountSourceType), 1);
}

///账户来源
// TThostFtdcAccountSourceTypeType char
static int PyCThostFtdcAccountPropertyField_set_AccountSourceType(PyCThostFtdcAccountPropertyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AccountSourceType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.AccountSourceType)) {
        PyErr_SetString(PyExc_ValueError, "AccountSourceType must be equal 1 bytes");
        return -1;
    }
    self->data.AccountSourceType = *buf;
    return 0;
}
            
///开户日期
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcAccountPropertyField_get_OpenDate(PyCThostFtdcAccountPropertyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OpenDate, (Py_ssize_t)sizeof(self->data.OpenDate));
    return PyBytes_FromString(self->data.OpenDate);
}

///开户日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcAccountPropertyField_set_OpenDate(PyCThostFtdcAccountPropertyField *self, PyObject* val, void *closure) {
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
            
///注销日期
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcAccountPropertyField_get_CancelDate(PyCThostFtdcAccountPropertyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CancelDate, (Py_ssize_t)sizeof(self->data.CancelDate));
    return PyBytes_FromString(self->data.CancelDate);
}

///注销日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcAccountPropertyField_set_CancelDate(PyCThostFtdcAccountPropertyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CancelDate Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CancelDate)) {
        PyErr_SetString(PyExc_ValueError, "CancelDate must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.CancelDate, 0, sizeof(self->data.CancelDate));
    // memcpy(self->data.CancelDate, buf, len);
    strncpy(self->data.CancelDate, buf, sizeof(self->data.CancelDate));
    return 0;
}
            
///录入员代码
// TThostFtdcOperatorIDType char[65]
static PyObject *PyCThostFtdcAccountPropertyField_get_OperatorID(PyCThostFtdcAccountPropertyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OperatorID, (Py_ssize_t)sizeof(self->data.OperatorID));
    return PyBytes_FromString(self->data.OperatorID);
}

///录入员代码
// TThostFtdcOperatorIDType char[65]
static int PyCThostFtdcAccountPropertyField_set_OperatorID(PyCThostFtdcAccountPropertyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OperatorID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OperatorID)) {
        PyErr_SetString(PyExc_ValueError, "OperatorID must be less than 65 bytes");
        return -1;
    }
    // memset(self->data.OperatorID, 0, sizeof(self->data.OperatorID));
    // memcpy(self->data.OperatorID, buf, len);
    strncpy(self->data.OperatorID, buf, sizeof(self->data.OperatorID));
    return 0;
}
            
///录入日期
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcAccountPropertyField_get_OperateDate(PyCThostFtdcAccountPropertyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OperateDate, (Py_ssize_t)sizeof(self->data.OperateDate));
    return PyBytes_FromString(self->data.OperateDate);
}

///录入日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcAccountPropertyField_set_OperateDate(PyCThostFtdcAccountPropertyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OperateDate Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OperateDate)) {
        PyErr_SetString(PyExc_ValueError, "OperateDate must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.OperateDate, 0, sizeof(self->data.OperateDate));
    // memcpy(self->data.OperateDate, buf, len);
    strncpy(self->data.OperateDate, buf, sizeof(self->data.OperateDate));
    return 0;
}
            
///录入时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcAccountPropertyField_get_OperateTime(PyCThostFtdcAccountPropertyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OperateTime, (Py_ssize_t)sizeof(self->data.OperateTime));
    return PyBytes_FromString(self->data.OperateTime);
}

///录入时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcAccountPropertyField_set_OperateTime(PyCThostFtdcAccountPropertyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OperateTime Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OperateTime)) {
        PyErr_SetString(PyExc_ValueError, "OperateTime must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.OperateTime, 0, sizeof(self->data.OperateTime));
    // memcpy(self->data.OperateTime, buf, len);
    strncpy(self->data.OperateTime, buf, sizeof(self->data.OperateTime));
    return 0;
}
            
///币种代码
// TThostFtdcCurrencyIDType char[4]
static PyObject *PyCThostFtdcAccountPropertyField_get_CurrencyID(PyCThostFtdcAccountPropertyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcAccountPropertyField_set_CurrencyID(PyCThostFtdcAccountPropertyField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcAccountPropertyField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcAccountPropertyField_get_BrokerID, (setter)PyCThostFtdcAccountPropertyField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者帐号 
    {(char *)"AccountID", (getter)PyCThostFtdcAccountPropertyField_get_AccountID, (setter)PyCThostFtdcAccountPropertyField_set_AccountID, (char *)"AccountID", NULL},
    ///银行统一标识类型 
    {(char *)"BankID", (getter)PyCThostFtdcAccountPropertyField_get_BankID, (setter)PyCThostFtdcAccountPropertyField_set_BankID, (char *)"BankID", NULL},
    ///银行账户 
    {(char *)"BankAccount", (getter)PyCThostFtdcAccountPropertyField_get_BankAccount, (setter)PyCThostFtdcAccountPropertyField_set_BankAccount, (char *)"BankAccount", NULL},
    ///银行账户的开户人名称 
    {(char *)"OpenName", (getter)PyCThostFtdcAccountPropertyField_get_OpenName, (setter)PyCThostFtdcAccountPropertyField_set_OpenName, (char *)"OpenName", NULL},
    ///银行账户的开户行 
    {(char *)"OpenBank", (getter)PyCThostFtdcAccountPropertyField_get_OpenBank, (setter)PyCThostFtdcAccountPropertyField_set_OpenBank, (char *)"OpenBank", NULL},
    ///是否活跃 
    {(char *)"IsActive", (getter)PyCThostFtdcAccountPropertyField_get_IsActive, (setter)PyCThostFtdcAccountPropertyField_set_IsActive, (char *)"IsActive", NULL},
    ///账户来源 
    {(char *)"AccountSourceType", (getter)PyCThostFtdcAccountPropertyField_get_AccountSourceType, (setter)PyCThostFtdcAccountPropertyField_set_AccountSourceType, (char *)"AccountSourceType", NULL},
    ///开户日期 
    {(char *)"OpenDate", (getter)PyCThostFtdcAccountPropertyField_get_OpenDate, (setter)PyCThostFtdcAccountPropertyField_set_OpenDate, (char *)"OpenDate", NULL},
    ///注销日期 
    {(char *)"CancelDate", (getter)PyCThostFtdcAccountPropertyField_get_CancelDate, (setter)PyCThostFtdcAccountPropertyField_set_CancelDate, (char *)"CancelDate", NULL},
    ///录入员代码 
    {(char *)"OperatorID", (getter)PyCThostFtdcAccountPropertyField_get_OperatorID, (setter)PyCThostFtdcAccountPropertyField_set_OperatorID, (char *)"OperatorID", NULL},
    ///录入日期 
    {(char *)"OperateDate", (getter)PyCThostFtdcAccountPropertyField_get_OperateDate, (setter)PyCThostFtdcAccountPropertyField_set_OperateDate, (char *)"OperateDate", NULL},
    ///录入时间 
    {(char *)"OperateTime", (getter)PyCThostFtdcAccountPropertyField_get_OperateTime, (setter)PyCThostFtdcAccountPropertyField_set_OperateTime, (char *)"OperateTime", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcAccountPropertyField_get_CurrencyID, (setter)PyCThostFtdcAccountPropertyField_set_CurrencyID, (char *)"CurrencyID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcAccountPropertyFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcAccountPropertyField",	/* tp_name */
	sizeof(PyCThostFtdcAccountPropertyField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcAccountPropertyField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcAccountPropertyField_repr,   /* tp_repr */
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
	"CThostFtdcAccountPropertyField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcAccountPropertyField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcAccountPropertyField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcAccountPropertyField_new,       /* tp_new */
};

int PyCThostFtdcAccountPropertyFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcAccountPropertyField  */
	if (PyType_Ready(&PyCThostFtdcAccountPropertyFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcAccountPropertyField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcAccountPropertyFieldType);
    if( PyModule_AddObject(module, "CThostFtdcAccountPropertyField", (PyObject *)&PyCThostFtdcAccountPropertyFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcAccountPropertyField to module");
        Py_DECREF(&PyCThostFtdcAccountPropertyFieldType);
		return -1;
    }

    return 0;
}
