
#include "PyCThostFtdcAccountregisterField.h"

///客户开销户信息表

static PyObject *PyCThostFtdcAccountregisterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcAccountregisterField *self = (PyCThostFtdcAccountregisterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcAccountregisterField_init(PyCThostFtdcAccountregisterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeDay", "BankID", "BankBranchID", "BankAccount", "BrokerID", "BrokerBranchID", "AccountID", "IdCardType", "IdentifiedCardNo", "CustomerName", "CurrencyID", "OpenOrDestroy", "RegDate", "OutDate", "TID", "CustType", "BankAccType", "LongCustomerName",  NULL};


    ///交易日期
    // TThostFtdcTradeDateType char[9]
    const char *AccountregisterField_TradeDay = NULL;
    Py_ssize_t AccountregisterField_TradeDay_len = 0;
            
    ///银行编码
    // TThostFtdcBankIDType char[4]
    const char *AccountregisterField_BankID = NULL;
    Py_ssize_t AccountregisterField_BankID_len = 0;
            
    ///银行分支机构编码
    // TThostFtdcBankBrchIDType char[5]
    const char *AccountregisterField_BankBranchID = NULL;
    Py_ssize_t AccountregisterField_BankBranchID_len = 0;
            
    ///银行帐号
    // TThostFtdcBankAccountType char[41]
    const char *AccountregisterField_BankAccount = NULL;
    Py_ssize_t AccountregisterField_BankAccount_len = 0;
            
    ///期货公司编码
    // TThostFtdcBrokerIDType char[11]
    const char *AccountregisterField_BrokerID = NULL;
    Py_ssize_t AccountregisterField_BrokerID_len = 0;
            
    ///期货公司分支机构编码
    // TThostFtdcFutureBranchIDType char[31]
    const char *AccountregisterField_BrokerBranchID = NULL;
    Py_ssize_t AccountregisterField_BrokerBranchID_len = 0;
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    const char *AccountregisterField_AccountID = NULL;
    Py_ssize_t AccountregisterField_AccountID_len = 0;
            
    ///证件类型
    // TThostFtdcIdCardTypeType char
    char AccountregisterField_IdCardType = 0;
            
    ///证件号码
    // TThostFtdcIdentifiedCardNoType char[51]
    const char *AccountregisterField_IdentifiedCardNo = NULL;
    Py_ssize_t AccountregisterField_IdentifiedCardNo_len = 0;
            
    ///客户姓名
    // TThostFtdcIndividualNameType char[51]
    const char *AccountregisterField_CustomerName = NULL;
    Py_ssize_t AccountregisterField_CustomerName_len = 0;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *AccountregisterField_CurrencyID = NULL;
    Py_ssize_t AccountregisterField_CurrencyID_len = 0;
            
    ///开销户类别
    // TThostFtdcOpenOrDestroyType char
    char AccountregisterField_OpenOrDestroy = 0;
            
    ///签约日期
    // TThostFtdcTradeDateType char[9]
    const char *AccountregisterField_RegDate = NULL;
    Py_ssize_t AccountregisterField_RegDate_len = 0;
            
    ///解约日期
    // TThostFtdcTradeDateType char[9]
    const char *AccountregisterField_OutDate = NULL;
    Py_ssize_t AccountregisterField_OutDate_len = 0;
            
    ///交易ID
    // TThostFtdcTIDType int
    int AccountregisterField_TID = 0;
        
    ///客户类型
    // TThostFtdcCustTypeType char
    char AccountregisterField_CustType = 0;
            
    ///银行帐号类型
    // TThostFtdcBankAccTypeType char
    char AccountregisterField_BankAccType = 0;
            
    ///长客户姓名
    // TThostFtdcLongIndividualNameType char[161]
    const char *AccountregisterField_LongCustomerName = NULL;
    Py_ssize_t AccountregisterField_LongCustomerName_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#cy#y#y#cy#y#iccy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#cs#s#s#cs#s#iccs#", (char **)kwlist
#endif

        , &AccountregisterField_TradeDay, &AccountregisterField_TradeDay_len 
        , &AccountregisterField_BankID, &AccountregisterField_BankID_len 
        , &AccountregisterField_BankBranchID, &AccountregisterField_BankBranchID_len 
        , &AccountregisterField_BankAccount, &AccountregisterField_BankAccount_len 
        , &AccountregisterField_BrokerID, &AccountregisterField_BrokerID_len 
        , &AccountregisterField_BrokerBranchID, &AccountregisterField_BrokerBranchID_len 
        , &AccountregisterField_AccountID, &AccountregisterField_AccountID_len 
        , &AccountregisterField_IdCardType 
        , &AccountregisterField_IdentifiedCardNo, &AccountregisterField_IdentifiedCardNo_len 
        , &AccountregisterField_CustomerName, &AccountregisterField_CustomerName_len 
        , &AccountregisterField_CurrencyID, &AccountregisterField_CurrencyID_len 
        , &AccountregisterField_OpenOrDestroy 
        , &AccountregisterField_RegDate, &AccountregisterField_RegDate_len 
        , &AccountregisterField_OutDate, &AccountregisterField_OutDate_len 
        , &AccountregisterField_TID 
        , &AccountregisterField_CustType 
        , &AccountregisterField_BankAccType 
        , &AccountregisterField_LongCustomerName, &AccountregisterField_LongCustomerName_len 


    )) {
        return -1;
    }


    ///交易日期
    // TThostFtdcTradeDateType char[9]
    if( AccountregisterField_TradeDay != NULL ) {
        if(AccountregisterField_TradeDay_len > (Py_ssize_t)sizeof(self->data.TradeDay)) {
            PyErr_Format(PyExc_ValueError, "TradeDay too long: length=%zd (max allowed is %zd)", AccountregisterField_TradeDay_len, (Py_ssize_t)sizeof(self->data.TradeDay));
            return -1;
        }
        // memset(self->data.TradeDay, 0, sizeof(self->data.TradeDay));
        // memcpy(self->data.TradeDay, AccountregisterField_TradeDay, AccountregisterField_TradeDay_len);        
        strncpy(self->data.TradeDay, AccountregisterField_TradeDay, sizeof(self->data.TradeDay) );
        AccountregisterField_TradeDay = NULL;
    }
            
    ///银行编码
    // TThostFtdcBankIDType char[4]
    if( AccountregisterField_BankID != NULL ) {
        if(AccountregisterField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", AccountregisterField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
            return -1;
        }
        // memset(self->data.BankID, 0, sizeof(self->data.BankID));
        // memcpy(self->data.BankID, AccountregisterField_BankID, AccountregisterField_BankID_len);        
        strncpy(self->data.BankID, AccountregisterField_BankID, sizeof(self->data.BankID) );
        AccountregisterField_BankID = NULL;
    }
            
    ///银行分支机构编码
    // TThostFtdcBankBrchIDType char[5]
    if( AccountregisterField_BankBranchID != NULL ) {
        if(AccountregisterField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", AccountregisterField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
            return -1;
        }
        // memset(self->data.BankBranchID, 0, sizeof(self->data.BankBranchID));
        // memcpy(self->data.BankBranchID, AccountregisterField_BankBranchID, AccountregisterField_BankBranchID_len);        
        strncpy(self->data.BankBranchID, AccountregisterField_BankBranchID, sizeof(self->data.BankBranchID) );
        AccountregisterField_BankBranchID = NULL;
    }
            
    ///银行帐号
    // TThostFtdcBankAccountType char[41]
    if( AccountregisterField_BankAccount != NULL ) {
        if(AccountregisterField_BankAccount_len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
            PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is %zd)", AccountregisterField_BankAccount_len, (Py_ssize_t)sizeof(self->data.BankAccount));
            return -1;
        }
        // memset(self->data.BankAccount, 0, sizeof(self->data.BankAccount));
        // memcpy(self->data.BankAccount, AccountregisterField_BankAccount, AccountregisterField_BankAccount_len);        
        strncpy(self->data.BankAccount, AccountregisterField_BankAccount, sizeof(self->data.BankAccount) );
        AccountregisterField_BankAccount = NULL;
    }
            
    ///期货公司编码
    // TThostFtdcBrokerIDType char[11]
    if( AccountregisterField_BrokerID != NULL ) {
        if(AccountregisterField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", AccountregisterField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, AccountregisterField_BrokerID, AccountregisterField_BrokerID_len);        
        strncpy(self->data.BrokerID, AccountregisterField_BrokerID, sizeof(self->data.BrokerID) );
        AccountregisterField_BrokerID = NULL;
    }
            
    ///期货公司分支机构编码
    // TThostFtdcFutureBranchIDType char[31]
    if( AccountregisterField_BrokerBranchID != NULL ) {
        if(AccountregisterField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", AccountregisterField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
            return -1;
        }
        // memset(self->data.BrokerBranchID, 0, sizeof(self->data.BrokerBranchID));
        // memcpy(self->data.BrokerBranchID, AccountregisterField_BrokerBranchID, AccountregisterField_BrokerBranchID_len);        
        strncpy(self->data.BrokerBranchID, AccountregisterField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
        AccountregisterField_BrokerBranchID = NULL;
    }
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    if( AccountregisterField_AccountID != NULL ) {
        if(AccountregisterField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", AccountregisterField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
            return -1;
        }
        // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
        // memcpy(self->data.AccountID, AccountregisterField_AccountID, AccountregisterField_AccountID_len);        
        strncpy(self->data.AccountID, AccountregisterField_AccountID, sizeof(self->data.AccountID) );
        AccountregisterField_AccountID = NULL;
    }
            
    ///证件类型
    // TThostFtdcIdCardTypeType char
    self->data.IdCardType = AccountregisterField_IdCardType;
            
    ///证件号码
    // TThostFtdcIdentifiedCardNoType char[51]
    if( AccountregisterField_IdentifiedCardNo != NULL ) {
        if(AccountregisterField_IdentifiedCardNo_len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
            PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is %zd)", AccountregisterField_IdentifiedCardNo_len, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
            return -1;
        }
        // memset(self->data.IdentifiedCardNo, 0, sizeof(self->data.IdentifiedCardNo));
        // memcpy(self->data.IdentifiedCardNo, AccountregisterField_IdentifiedCardNo, AccountregisterField_IdentifiedCardNo_len);        
        strncpy(self->data.IdentifiedCardNo, AccountregisterField_IdentifiedCardNo, sizeof(self->data.IdentifiedCardNo) );
        AccountregisterField_IdentifiedCardNo = NULL;
    }
            
    ///客户姓名
    // TThostFtdcIndividualNameType char[51]
    if( AccountregisterField_CustomerName != NULL ) {
        if(AccountregisterField_CustomerName_len > (Py_ssize_t)sizeof(self->data.CustomerName)) {
            PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is %zd)", AccountregisterField_CustomerName_len, (Py_ssize_t)sizeof(self->data.CustomerName));
            return -1;
        }
        // memset(self->data.CustomerName, 0, sizeof(self->data.CustomerName));
        // memcpy(self->data.CustomerName, AccountregisterField_CustomerName, AccountregisterField_CustomerName_len);        
        strncpy(self->data.CustomerName, AccountregisterField_CustomerName, sizeof(self->data.CustomerName) );
        AccountregisterField_CustomerName = NULL;
    }
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( AccountregisterField_CurrencyID != NULL ) {
        if(AccountregisterField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", AccountregisterField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, AccountregisterField_CurrencyID, AccountregisterField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, AccountregisterField_CurrencyID, sizeof(self->data.CurrencyID) );
        AccountregisterField_CurrencyID = NULL;
    }
            
    ///开销户类别
    // TThostFtdcOpenOrDestroyType char
    self->data.OpenOrDestroy = AccountregisterField_OpenOrDestroy;
            
    ///签约日期
    // TThostFtdcTradeDateType char[9]
    if( AccountregisterField_RegDate != NULL ) {
        if(AccountregisterField_RegDate_len > (Py_ssize_t)sizeof(self->data.RegDate)) {
            PyErr_Format(PyExc_ValueError, "RegDate too long: length=%zd (max allowed is %zd)", AccountregisterField_RegDate_len, (Py_ssize_t)sizeof(self->data.RegDate));
            return -1;
        }
        // memset(self->data.RegDate, 0, sizeof(self->data.RegDate));
        // memcpy(self->data.RegDate, AccountregisterField_RegDate, AccountregisterField_RegDate_len);        
        strncpy(self->data.RegDate, AccountregisterField_RegDate, sizeof(self->data.RegDate) );
        AccountregisterField_RegDate = NULL;
    }
            
    ///解约日期
    // TThostFtdcTradeDateType char[9]
    if( AccountregisterField_OutDate != NULL ) {
        if(AccountregisterField_OutDate_len > (Py_ssize_t)sizeof(self->data.OutDate)) {
            PyErr_Format(PyExc_ValueError, "OutDate too long: length=%zd (max allowed is %zd)", AccountregisterField_OutDate_len, (Py_ssize_t)sizeof(self->data.OutDate));
            return -1;
        }
        // memset(self->data.OutDate, 0, sizeof(self->data.OutDate));
        // memcpy(self->data.OutDate, AccountregisterField_OutDate, AccountregisterField_OutDate_len);        
        strncpy(self->data.OutDate, AccountregisterField_OutDate, sizeof(self->data.OutDate) );
        AccountregisterField_OutDate = NULL;
    }
            
    ///交易ID
    // TThostFtdcTIDType int
    self->data.TID = AccountregisterField_TID;
        
    ///客户类型
    // TThostFtdcCustTypeType char
    self->data.CustType = AccountregisterField_CustType;
            
    ///银行帐号类型
    // TThostFtdcBankAccTypeType char
    self->data.BankAccType = AccountregisterField_BankAccType;
            
    ///长客户姓名
    // TThostFtdcLongIndividualNameType char[161]
    if( AccountregisterField_LongCustomerName != NULL ) {
        if(AccountregisterField_LongCustomerName_len > (Py_ssize_t)sizeof(self->data.LongCustomerName)) {
            PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is %zd)", AccountregisterField_LongCustomerName_len, (Py_ssize_t)sizeof(self->data.LongCustomerName));
            return -1;
        }
        // memset(self->data.LongCustomerName, 0, sizeof(self->data.LongCustomerName));
        // memcpy(self->data.LongCustomerName, AccountregisterField_LongCustomerName, AccountregisterField_LongCustomerName_len);        
        strncpy(self->data.LongCustomerName, AccountregisterField_LongCustomerName, sizeof(self->data.LongCustomerName) );
        AccountregisterField_LongCustomerName = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcAccountregisterField_dealloc(PyCThostFtdcAccountregisterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcAccountregisterField_repr(PyCThostFtdcAccountregisterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:y,s:c,s:y,s:y,s:i,s:c,s:c,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:c,s:s,s:s,s:s,s:c,s:s,s:s,s:i,s:c,s:c,s:s}"
#endif

        ,"TradeDay", self->data.TradeDay//, (Py_ssize_t)sizeof(self->data.TradeDay) 
        ,"BankID", self->data.BankID//, (Py_ssize_t)sizeof(self->data.BankID) 
        ,"BankBranchID", self->data.BankBranchID//, (Py_ssize_t)sizeof(self->data.BankBranchID) 
        ,"BankAccount", self->data.BankAccount//, (Py_ssize_t)sizeof(self->data.BankAccount) 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"BrokerBranchID", self->data.BrokerBranchID//, (Py_ssize_t)sizeof(self->data.BrokerBranchID) 
        ,"AccountID", self->data.AccountID//, (Py_ssize_t)sizeof(self->data.AccountID) 
        ,"IdCardType", self->data.IdCardType 
        ,"IdentifiedCardNo", self->data.IdentifiedCardNo//, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo) 
        ,"CustomerName", self->data.CustomerName//, (Py_ssize_t)sizeof(self->data.CustomerName) 
        ,"CurrencyID", self->data.CurrencyID//, (Py_ssize_t)sizeof(self->data.CurrencyID) 
        ,"OpenOrDestroy", self->data.OpenOrDestroy 
        ,"RegDate", self->data.RegDate//, (Py_ssize_t)sizeof(self->data.RegDate) 
        ,"OutDate", self->data.OutDate//, (Py_ssize_t)sizeof(self->data.OutDate) 
        ,"TID", self->data.TID 
        ,"CustType", self->data.CustType 
        ,"BankAccType", self->data.BankAccType 
        ,"LongCustomerName", self->data.LongCustomerName//, (Py_ssize_t)sizeof(self->data.LongCustomerName) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcAccountregisterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易日期
// TThostFtdcTradeDateType char[9]
static PyObject *PyCThostFtdcAccountregisterField_get_TradeDay(PyCThostFtdcAccountregisterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeDay, (Py_ssize_t)sizeof(self->data.TradeDay));
    return PyBytes_FromString(self->data.TradeDay);
}

///交易日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcAccountregisterField_set_TradeDay(PyCThostFtdcAccountregisterField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradeDay Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TradeDay)) {
        PyErr_SetString(PyExc_ValueError, "TradeDay must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.TradeDay, 0, sizeof(self->data.TradeDay));
    // memcpy(self->data.TradeDay, buf, len);
    strncpy(self->data.TradeDay, buf, sizeof(self->data.TradeDay));
    return 0;
}
            
///银行编码
// TThostFtdcBankIDType char[4]
static PyObject *PyCThostFtdcAccountregisterField_get_BankID(PyCThostFtdcAccountregisterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankID, (Py_ssize_t)sizeof(self->data.BankID));
    return PyBytes_FromString(self->data.BankID);
}

///银行编码
// TThostFtdcBankIDType char[4]
static int PyCThostFtdcAccountregisterField_set_BankID(PyCThostFtdcAccountregisterField *self, PyObject* val, void *closure) {
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
            
///银行分支机构编码
// TThostFtdcBankBrchIDType char[5]
static PyObject *PyCThostFtdcAccountregisterField_get_BankBranchID(PyCThostFtdcAccountregisterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankBranchID, (Py_ssize_t)sizeof(self->data.BankBranchID));
    return PyBytes_FromString(self->data.BankBranchID);
}

///银行分支机构编码
// TThostFtdcBankBrchIDType char[5]
static int PyCThostFtdcAccountregisterField_set_BankBranchID(PyCThostFtdcAccountregisterField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BankBranchID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BankBranchID must be less than 5 bytes");
        return -1;
    }
    // memset(self->data.BankBranchID, 0, sizeof(self->data.BankBranchID));
    // memcpy(self->data.BankBranchID, buf, len);
    strncpy(self->data.BankBranchID, buf, sizeof(self->data.BankBranchID));
    return 0;
}
            
///银行帐号
// TThostFtdcBankAccountType char[41]
static PyObject *PyCThostFtdcAccountregisterField_get_BankAccount(PyCThostFtdcAccountregisterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankAccount, (Py_ssize_t)sizeof(self->data.BankAccount));
    return PyBytes_FromString(self->data.BankAccount);
}

///银行帐号
// TThostFtdcBankAccountType char[41]
static int PyCThostFtdcAccountregisterField_set_BankAccount(PyCThostFtdcAccountregisterField *self, PyObject* val, void *closure) {
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
            
///期货公司编码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcAccountregisterField_get_BrokerID(PyCThostFtdcAccountregisterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///期货公司编码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcAccountregisterField_set_BrokerID(PyCThostFtdcAccountregisterField *self, PyObject* val, void *closure) {
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
            
///期货公司分支机构编码
// TThostFtdcFutureBranchIDType char[31]
static PyObject *PyCThostFtdcAccountregisterField_get_BrokerBranchID(PyCThostFtdcAccountregisterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerBranchID, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
    return PyBytes_FromString(self->data.BrokerBranchID);
}

///期货公司分支机构编码
// TThostFtdcFutureBranchIDType char[31]
static int PyCThostFtdcAccountregisterField_set_BrokerBranchID(PyCThostFtdcAccountregisterField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BrokerBranchID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerBranchID must be less than 31 bytes");
        return -1;
    }
    // memset(self->data.BrokerBranchID, 0, sizeof(self->data.BrokerBranchID));
    // memcpy(self->data.BrokerBranchID, buf, len);
    strncpy(self->data.BrokerBranchID, buf, sizeof(self->data.BrokerBranchID));
    return 0;
}
            
///投资者帐号
// TThostFtdcAccountIDType char[13]
static PyObject *PyCThostFtdcAccountregisterField_get_AccountID(PyCThostFtdcAccountregisterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AccountID, (Py_ssize_t)sizeof(self->data.AccountID));
    return PyBytes_FromString(self->data.AccountID);
}

///投资者帐号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcAccountregisterField_set_AccountID(PyCThostFtdcAccountregisterField *self, PyObject* val, void *closure) {
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
            
///证件类型
// TThostFtdcIdCardTypeType char
static PyObject *PyCThostFtdcAccountregisterField_get_IdCardType(PyCThostFtdcAccountregisterField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.IdCardType), 1);
}

///证件类型
// TThostFtdcIdCardTypeType char
static int PyCThostFtdcAccountregisterField_set_IdCardType(PyCThostFtdcAccountregisterField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IdCardType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.IdCardType)) {
        PyErr_SetString(PyExc_ValueError, "IdCardType must be equal 1 bytes");
        return -1;
    }
    self->data.IdCardType = *buf;
    return 0;
}
            
///证件号码
// TThostFtdcIdentifiedCardNoType char[51]
static PyObject *PyCThostFtdcAccountregisterField_get_IdentifiedCardNo(PyCThostFtdcAccountregisterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IdentifiedCardNo, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
    return PyBytes_FromString(self->data.IdentifiedCardNo);
}

///证件号码
// TThostFtdcIdentifiedCardNoType char[51]
static int PyCThostFtdcAccountregisterField_set_IdentifiedCardNo(PyCThostFtdcAccountregisterField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IdentifiedCardNo Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
        PyErr_SetString(PyExc_ValueError, "IdentifiedCardNo must be less than 51 bytes");
        return -1;
    }
    // memset(self->data.IdentifiedCardNo, 0, sizeof(self->data.IdentifiedCardNo));
    // memcpy(self->data.IdentifiedCardNo, buf, len);
    strncpy(self->data.IdentifiedCardNo, buf, sizeof(self->data.IdentifiedCardNo));
    return 0;
}
            
///客户姓名
// TThostFtdcIndividualNameType char[51]
static PyObject *PyCThostFtdcAccountregisterField_get_CustomerName(PyCThostFtdcAccountregisterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CustomerName, (Py_ssize_t)sizeof(self->data.CustomerName));
    return PyBytes_FromString(self->data.CustomerName);
}

///客户姓名
// TThostFtdcIndividualNameType char[51]
static int PyCThostFtdcAccountregisterField_set_CustomerName(PyCThostFtdcAccountregisterField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CustomerName Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CustomerName)) {
        PyErr_SetString(PyExc_ValueError, "CustomerName must be less than 51 bytes");
        return -1;
    }
    // memset(self->data.CustomerName, 0, sizeof(self->data.CustomerName));
    // memcpy(self->data.CustomerName, buf, len);
    strncpy(self->data.CustomerName, buf, sizeof(self->data.CustomerName));
    return 0;
}
            
///币种代码
// TThostFtdcCurrencyIDType char[4]
static PyObject *PyCThostFtdcAccountregisterField_get_CurrencyID(PyCThostFtdcAccountregisterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcAccountregisterField_set_CurrencyID(PyCThostFtdcAccountregisterField *self, PyObject* val, void *closure) {
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
            
///开销户类别
// TThostFtdcOpenOrDestroyType char
static PyObject *PyCThostFtdcAccountregisterField_get_OpenOrDestroy(PyCThostFtdcAccountregisterField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OpenOrDestroy), 1);
}

///开销户类别
// TThostFtdcOpenOrDestroyType char
static int PyCThostFtdcAccountregisterField_set_OpenOrDestroy(PyCThostFtdcAccountregisterField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OpenOrDestroy Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OpenOrDestroy)) {
        PyErr_SetString(PyExc_ValueError, "OpenOrDestroy must be equal 1 bytes");
        return -1;
    }
    self->data.OpenOrDestroy = *buf;
    return 0;
}
            
///签约日期
// TThostFtdcTradeDateType char[9]
static PyObject *PyCThostFtdcAccountregisterField_get_RegDate(PyCThostFtdcAccountregisterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.RegDate, (Py_ssize_t)sizeof(self->data.RegDate));
    return PyBytes_FromString(self->data.RegDate);
}

///签约日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcAccountregisterField_set_RegDate(PyCThostFtdcAccountregisterField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "RegDate Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.RegDate)) {
        PyErr_SetString(PyExc_ValueError, "RegDate must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.RegDate, 0, sizeof(self->data.RegDate));
    // memcpy(self->data.RegDate, buf, len);
    strncpy(self->data.RegDate, buf, sizeof(self->data.RegDate));
    return 0;
}
            
///解约日期
// TThostFtdcTradeDateType char[9]
static PyObject *PyCThostFtdcAccountregisterField_get_OutDate(PyCThostFtdcAccountregisterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OutDate, (Py_ssize_t)sizeof(self->data.OutDate));
    return PyBytes_FromString(self->data.OutDate);
}

///解约日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcAccountregisterField_set_OutDate(PyCThostFtdcAccountregisterField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OutDate Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OutDate)) {
        PyErr_SetString(PyExc_ValueError, "OutDate must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.OutDate, 0, sizeof(self->data.OutDate));
    // memcpy(self->data.OutDate, buf, len);
    strncpy(self->data.OutDate, buf, sizeof(self->data.OutDate));
    return 0;
}
            
///交易ID
// TThostFtdcTIDType int
static PyObject *PyCThostFtdcAccountregisterField_get_TID(PyCThostFtdcAccountregisterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.TID);
#else
    return PyInt_FromLong(self->data.TID);
#endif
}

///交易ID
// TThostFtdcTIDType int
static int PyCThostFtdcAccountregisterField_set_TID(PyCThostFtdcAccountregisterField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TID Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the TID value out of range for C int");
        return -1;
    }
    self->data.TID = (int)buf;
    return 0;
}
        
///客户类型
// TThostFtdcCustTypeType char
static PyObject *PyCThostFtdcAccountregisterField_get_CustType(PyCThostFtdcAccountregisterField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.CustType), 1);
}

///客户类型
// TThostFtdcCustTypeType char
static int PyCThostFtdcAccountregisterField_set_CustType(PyCThostFtdcAccountregisterField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CustType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CustType)) {
        PyErr_SetString(PyExc_ValueError, "CustType must be equal 1 bytes");
        return -1;
    }
    self->data.CustType = *buf;
    return 0;
}
            
///银行帐号类型
// TThostFtdcBankAccTypeType char
static PyObject *PyCThostFtdcAccountregisterField_get_BankAccType(PyCThostFtdcAccountregisterField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BankAccType), 1);
}

///银行帐号类型
// TThostFtdcBankAccTypeType char
static int PyCThostFtdcAccountregisterField_set_BankAccType(PyCThostFtdcAccountregisterField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BankAccType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BankAccType)) {
        PyErr_SetString(PyExc_ValueError, "BankAccType must be equal 1 bytes");
        return -1;
    }
    self->data.BankAccType = *buf;
    return 0;
}
            
///长客户姓名
// TThostFtdcLongIndividualNameType char[161]
static PyObject *PyCThostFtdcAccountregisterField_get_LongCustomerName(PyCThostFtdcAccountregisterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.LongCustomerName, (Py_ssize_t)sizeof(self->data.LongCustomerName));
    return PyBytes_FromString(self->data.LongCustomerName);
}

///长客户姓名
// TThostFtdcLongIndividualNameType char[161]
static int PyCThostFtdcAccountregisterField_set_LongCustomerName(PyCThostFtdcAccountregisterField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LongCustomerName Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.LongCustomerName)) {
        PyErr_SetString(PyExc_ValueError, "LongCustomerName must be less than 161 bytes");
        return -1;
    }
    // memset(self->data.LongCustomerName, 0, sizeof(self->data.LongCustomerName));
    // memcpy(self->data.LongCustomerName, buf, len);
    strncpy(self->data.LongCustomerName, buf, sizeof(self->data.LongCustomerName));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcAccountregisterField_getset[] = {
    ///交易日期 
    {(char *)"TradeDay", (getter)PyCThostFtdcAccountregisterField_get_TradeDay, (setter)PyCThostFtdcAccountregisterField_set_TradeDay, (char *)"TradeDay", NULL},
    ///银行编码 
    {(char *)"BankID", (getter)PyCThostFtdcAccountregisterField_get_BankID, (setter)PyCThostFtdcAccountregisterField_set_BankID, (char *)"BankID", NULL},
    ///银行分支机构编码 
    {(char *)"BankBranchID", (getter)PyCThostFtdcAccountregisterField_get_BankBranchID, (setter)PyCThostFtdcAccountregisterField_set_BankBranchID, (char *)"BankBranchID", NULL},
    ///银行帐号 
    {(char *)"BankAccount", (getter)PyCThostFtdcAccountregisterField_get_BankAccount, (setter)PyCThostFtdcAccountregisterField_set_BankAccount, (char *)"BankAccount", NULL},
    ///期货公司编码 
    {(char *)"BrokerID", (getter)PyCThostFtdcAccountregisterField_get_BrokerID, (setter)PyCThostFtdcAccountregisterField_set_BrokerID, (char *)"BrokerID", NULL},
    ///期货公司分支机构编码 
    {(char *)"BrokerBranchID", (getter)PyCThostFtdcAccountregisterField_get_BrokerBranchID, (setter)PyCThostFtdcAccountregisterField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
    ///投资者帐号 
    {(char *)"AccountID", (getter)PyCThostFtdcAccountregisterField_get_AccountID, (setter)PyCThostFtdcAccountregisterField_set_AccountID, (char *)"AccountID", NULL},
    ///证件类型 
    {(char *)"IdCardType", (getter)PyCThostFtdcAccountregisterField_get_IdCardType, (setter)PyCThostFtdcAccountregisterField_set_IdCardType, (char *)"IdCardType", NULL},
    ///证件号码 
    {(char *)"IdentifiedCardNo", (getter)PyCThostFtdcAccountregisterField_get_IdentifiedCardNo, (setter)PyCThostFtdcAccountregisterField_set_IdentifiedCardNo, (char *)"IdentifiedCardNo", NULL},
    ///客户姓名 
    {(char *)"CustomerName", (getter)PyCThostFtdcAccountregisterField_get_CustomerName, (setter)PyCThostFtdcAccountregisterField_set_CustomerName, (char *)"CustomerName", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcAccountregisterField_get_CurrencyID, (setter)PyCThostFtdcAccountregisterField_set_CurrencyID, (char *)"CurrencyID", NULL},
    ///开销户类别 
    {(char *)"OpenOrDestroy", (getter)PyCThostFtdcAccountregisterField_get_OpenOrDestroy, (setter)PyCThostFtdcAccountregisterField_set_OpenOrDestroy, (char *)"OpenOrDestroy", NULL},
    ///签约日期 
    {(char *)"RegDate", (getter)PyCThostFtdcAccountregisterField_get_RegDate, (setter)PyCThostFtdcAccountregisterField_set_RegDate, (char *)"RegDate", NULL},
    ///解约日期 
    {(char *)"OutDate", (getter)PyCThostFtdcAccountregisterField_get_OutDate, (setter)PyCThostFtdcAccountregisterField_set_OutDate, (char *)"OutDate", NULL},
    ///交易ID 
    {(char *)"TID", (getter)PyCThostFtdcAccountregisterField_get_TID, (setter)PyCThostFtdcAccountregisterField_set_TID, (char *)"TID", NULL},
    ///客户类型 
    {(char *)"CustType", (getter)PyCThostFtdcAccountregisterField_get_CustType, (setter)PyCThostFtdcAccountregisterField_set_CustType, (char *)"CustType", NULL},
    ///银行帐号类型 
    {(char *)"BankAccType", (getter)PyCThostFtdcAccountregisterField_get_BankAccType, (setter)PyCThostFtdcAccountregisterField_set_BankAccType, (char *)"BankAccType", NULL},
    ///长客户姓名 
    {(char *)"LongCustomerName", (getter)PyCThostFtdcAccountregisterField_get_LongCustomerName, (setter)PyCThostFtdcAccountregisterField_set_LongCustomerName, (char *)"LongCustomerName", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcAccountregisterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcAccountregisterField",	/* tp_name */
	sizeof(PyCThostFtdcAccountregisterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcAccountregisterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcAccountregisterField_repr,   /* tp_repr */
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
	"CThostFtdcAccountregisterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcAccountregisterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcAccountregisterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcAccountregisterField_new,       /* tp_new */
};

int PyCThostFtdcAccountregisterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcAccountregisterField  */
	if (PyType_Ready(&PyCThostFtdcAccountregisterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcAccountregisterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcAccountregisterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcAccountregisterField", (PyObject *)&PyCThostFtdcAccountregisterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcAccountregisterField to module");
        Py_DECREF(&PyCThostFtdcAccountregisterFieldType);
		return -1;
    }

    return 0;
}
