
#include "PyCThostFtdcVerifyFuturePasswordField.h"

///验证期货资金密码

static PyObject *PyCThostFtdcVerifyFuturePasswordField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcVerifyFuturePasswordField *self = (PyCThostFtdcVerifyFuturePasswordField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcVerifyFuturePasswordField_init(PyCThostFtdcVerifyFuturePasswordField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "AccountID", "Password", "BankAccount", "BankPassWord", "InstallID", "TID", "CurrencyID",  NULL};


    ///业务功能码
    // TThostFtdcTradeCodeType char[7]
    const char *VerifyFuturePasswordField_TradeCode = NULL;
    Py_ssize_t VerifyFuturePasswordField_TradeCode_len = 0;
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    const char *VerifyFuturePasswordField_BankID = NULL;
    Py_ssize_t VerifyFuturePasswordField_BankID_len = 0;
            
    ///银行分支机构代码
    // TThostFtdcBankBrchIDType char[5]
    const char *VerifyFuturePasswordField_BankBranchID = NULL;
    Py_ssize_t VerifyFuturePasswordField_BankBranchID_len = 0;
            
    ///期商代码
    // TThostFtdcBrokerIDType char[11]
    const char *VerifyFuturePasswordField_BrokerID = NULL;
    Py_ssize_t VerifyFuturePasswordField_BrokerID_len = 0;
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    const char *VerifyFuturePasswordField_BrokerBranchID = NULL;
    Py_ssize_t VerifyFuturePasswordField_BrokerBranchID_len = 0;
            
    ///交易日期
    // TThostFtdcTradeDateType char[9]
    const char *VerifyFuturePasswordField_TradeDate = NULL;
    Py_ssize_t VerifyFuturePasswordField_TradeDate_len = 0;
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    const char *VerifyFuturePasswordField_TradeTime = NULL;
    Py_ssize_t VerifyFuturePasswordField_TradeTime_len = 0;
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    const char *VerifyFuturePasswordField_BankSerial = NULL;
    Py_ssize_t VerifyFuturePasswordField_BankSerial_len = 0;
            
    ///交易系统日期
    // TThostFtdcTradeDateType char[9]
    const char *VerifyFuturePasswordField_TradingDay = NULL;
    Py_ssize_t VerifyFuturePasswordField_TradingDay_len = 0;
            
    ///银期平台消息流水号
    // TThostFtdcSerialType int
    int VerifyFuturePasswordField_PlateSerial = 0;
        
    ///最后分片标志
    // TThostFtdcLastFragmentType char
    char VerifyFuturePasswordField_LastFragment = 0;
            
    ///会话号
    // TThostFtdcSessionIDType int
    int VerifyFuturePasswordField_SessionID = 0;
        
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    const char *VerifyFuturePasswordField_AccountID = NULL;
    Py_ssize_t VerifyFuturePasswordField_AccountID_len = 0;
            
    ///期货密码
    // TThostFtdcPasswordType char[41]
    const char *VerifyFuturePasswordField_Password = NULL;
    Py_ssize_t VerifyFuturePasswordField_Password_len = 0;
            
    ///银行帐号
    // TThostFtdcBankAccountType char[41]
    const char *VerifyFuturePasswordField_BankAccount = NULL;
    Py_ssize_t VerifyFuturePasswordField_BankAccount_len = 0;
            
    ///银行密码
    // TThostFtdcPasswordType char[41]
    const char *VerifyFuturePasswordField_BankPassWord = NULL;
    Py_ssize_t VerifyFuturePasswordField_BankPassWord_len = 0;
            
    ///安装编号
    // TThostFtdcInstallIDType int
    int VerifyFuturePasswordField_InstallID = 0;
        
    ///交易ID
    // TThostFtdcTIDType int
    int VerifyFuturePasswordField_TID = 0;
        
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *VerifyFuturePasswordField_CurrencyID = NULL;
    Py_ssize_t VerifyFuturePasswordField_CurrencyID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciy#y#y#y#iiy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#icis#s#s#s#iis#", (char **)kwlist
#endif

        , &VerifyFuturePasswordField_TradeCode, &VerifyFuturePasswordField_TradeCode_len 
        , &VerifyFuturePasswordField_BankID, &VerifyFuturePasswordField_BankID_len 
        , &VerifyFuturePasswordField_BankBranchID, &VerifyFuturePasswordField_BankBranchID_len 
        , &VerifyFuturePasswordField_BrokerID, &VerifyFuturePasswordField_BrokerID_len 
        , &VerifyFuturePasswordField_BrokerBranchID, &VerifyFuturePasswordField_BrokerBranchID_len 
        , &VerifyFuturePasswordField_TradeDate, &VerifyFuturePasswordField_TradeDate_len 
        , &VerifyFuturePasswordField_TradeTime, &VerifyFuturePasswordField_TradeTime_len 
        , &VerifyFuturePasswordField_BankSerial, &VerifyFuturePasswordField_BankSerial_len 
        , &VerifyFuturePasswordField_TradingDay, &VerifyFuturePasswordField_TradingDay_len 
        , &VerifyFuturePasswordField_PlateSerial 
        , &VerifyFuturePasswordField_LastFragment 
        , &VerifyFuturePasswordField_SessionID 
        , &VerifyFuturePasswordField_AccountID, &VerifyFuturePasswordField_AccountID_len 
        , &VerifyFuturePasswordField_Password, &VerifyFuturePasswordField_Password_len 
        , &VerifyFuturePasswordField_BankAccount, &VerifyFuturePasswordField_BankAccount_len 
        , &VerifyFuturePasswordField_BankPassWord, &VerifyFuturePasswordField_BankPassWord_len 
        , &VerifyFuturePasswordField_InstallID 
        , &VerifyFuturePasswordField_TID 
        , &VerifyFuturePasswordField_CurrencyID, &VerifyFuturePasswordField_CurrencyID_len 


    )) {
        return -1;
    }


    ///业务功能码
    // TThostFtdcTradeCodeType char[7]
    if( VerifyFuturePasswordField_TradeCode != NULL ) {
        if(VerifyFuturePasswordField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", VerifyFuturePasswordField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
            return -1;
        }
        // memset(self->data.TradeCode, 0, sizeof(self->data.TradeCode));
        // memcpy(self->data.TradeCode, VerifyFuturePasswordField_TradeCode, VerifyFuturePasswordField_TradeCode_len);        
        strncpy(self->data.TradeCode, VerifyFuturePasswordField_TradeCode, sizeof(self->data.TradeCode) );
        VerifyFuturePasswordField_TradeCode = NULL;
    }
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    if( VerifyFuturePasswordField_BankID != NULL ) {
        if(VerifyFuturePasswordField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", VerifyFuturePasswordField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
            return -1;
        }
        // memset(self->data.BankID, 0, sizeof(self->data.BankID));
        // memcpy(self->data.BankID, VerifyFuturePasswordField_BankID, VerifyFuturePasswordField_BankID_len);        
        strncpy(self->data.BankID, VerifyFuturePasswordField_BankID, sizeof(self->data.BankID) );
        VerifyFuturePasswordField_BankID = NULL;
    }
            
    ///银行分支机构代码
    // TThostFtdcBankBrchIDType char[5]
    if( VerifyFuturePasswordField_BankBranchID != NULL ) {
        if(VerifyFuturePasswordField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", VerifyFuturePasswordField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
            return -1;
        }
        // memset(self->data.BankBranchID, 0, sizeof(self->data.BankBranchID));
        // memcpy(self->data.BankBranchID, VerifyFuturePasswordField_BankBranchID, VerifyFuturePasswordField_BankBranchID_len);        
        strncpy(self->data.BankBranchID, VerifyFuturePasswordField_BankBranchID, sizeof(self->data.BankBranchID) );
        VerifyFuturePasswordField_BankBranchID = NULL;
    }
            
    ///期商代码
    // TThostFtdcBrokerIDType char[11]
    if( VerifyFuturePasswordField_BrokerID != NULL ) {
        if(VerifyFuturePasswordField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", VerifyFuturePasswordField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, VerifyFuturePasswordField_BrokerID, VerifyFuturePasswordField_BrokerID_len);        
        strncpy(self->data.BrokerID, VerifyFuturePasswordField_BrokerID, sizeof(self->data.BrokerID) );
        VerifyFuturePasswordField_BrokerID = NULL;
    }
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    if( VerifyFuturePasswordField_BrokerBranchID != NULL ) {
        if(VerifyFuturePasswordField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", VerifyFuturePasswordField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
            return -1;
        }
        // memset(self->data.BrokerBranchID, 0, sizeof(self->data.BrokerBranchID));
        // memcpy(self->data.BrokerBranchID, VerifyFuturePasswordField_BrokerBranchID, VerifyFuturePasswordField_BrokerBranchID_len);        
        strncpy(self->data.BrokerBranchID, VerifyFuturePasswordField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
        VerifyFuturePasswordField_BrokerBranchID = NULL;
    }
            
    ///交易日期
    // TThostFtdcTradeDateType char[9]
    if( VerifyFuturePasswordField_TradeDate != NULL ) {
        if(VerifyFuturePasswordField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", VerifyFuturePasswordField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
            return -1;
        }
        // memset(self->data.TradeDate, 0, sizeof(self->data.TradeDate));
        // memcpy(self->data.TradeDate, VerifyFuturePasswordField_TradeDate, VerifyFuturePasswordField_TradeDate_len);        
        strncpy(self->data.TradeDate, VerifyFuturePasswordField_TradeDate, sizeof(self->data.TradeDate) );
        VerifyFuturePasswordField_TradeDate = NULL;
    }
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    if( VerifyFuturePasswordField_TradeTime != NULL ) {
        if(VerifyFuturePasswordField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", VerifyFuturePasswordField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
            return -1;
        }
        // memset(self->data.TradeTime, 0, sizeof(self->data.TradeTime));
        // memcpy(self->data.TradeTime, VerifyFuturePasswordField_TradeTime, VerifyFuturePasswordField_TradeTime_len);        
        strncpy(self->data.TradeTime, VerifyFuturePasswordField_TradeTime, sizeof(self->data.TradeTime) );
        VerifyFuturePasswordField_TradeTime = NULL;
    }
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    if( VerifyFuturePasswordField_BankSerial != NULL ) {
        if(VerifyFuturePasswordField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", VerifyFuturePasswordField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
            return -1;
        }
        // memset(self->data.BankSerial, 0, sizeof(self->data.BankSerial));
        // memcpy(self->data.BankSerial, VerifyFuturePasswordField_BankSerial, VerifyFuturePasswordField_BankSerial_len);        
        strncpy(self->data.BankSerial, VerifyFuturePasswordField_BankSerial, sizeof(self->data.BankSerial) );
        VerifyFuturePasswordField_BankSerial = NULL;
    }
            
    ///交易系统日期
    // TThostFtdcTradeDateType char[9]
    if( VerifyFuturePasswordField_TradingDay != NULL ) {
        if(VerifyFuturePasswordField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", VerifyFuturePasswordField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, VerifyFuturePasswordField_TradingDay, VerifyFuturePasswordField_TradingDay_len);        
        strncpy(self->data.TradingDay, VerifyFuturePasswordField_TradingDay, sizeof(self->data.TradingDay) );
        VerifyFuturePasswordField_TradingDay = NULL;
    }
            
    ///银期平台消息流水号
    // TThostFtdcSerialType int
    self->data.PlateSerial = VerifyFuturePasswordField_PlateSerial;
        
    ///最后分片标志
    // TThostFtdcLastFragmentType char
    self->data.LastFragment = VerifyFuturePasswordField_LastFragment;
            
    ///会话号
    // TThostFtdcSessionIDType int
    self->data.SessionID = VerifyFuturePasswordField_SessionID;
        
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    if( VerifyFuturePasswordField_AccountID != NULL ) {
        if(VerifyFuturePasswordField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", VerifyFuturePasswordField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
            return -1;
        }
        // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
        // memcpy(self->data.AccountID, VerifyFuturePasswordField_AccountID, VerifyFuturePasswordField_AccountID_len);        
        strncpy(self->data.AccountID, VerifyFuturePasswordField_AccountID, sizeof(self->data.AccountID) );
        VerifyFuturePasswordField_AccountID = NULL;
    }
            
    ///期货密码
    // TThostFtdcPasswordType char[41]
    if( VerifyFuturePasswordField_Password != NULL ) {
        if(VerifyFuturePasswordField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", VerifyFuturePasswordField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
            return -1;
        }
        // memset(self->data.Password, 0, sizeof(self->data.Password));
        // memcpy(self->data.Password, VerifyFuturePasswordField_Password, VerifyFuturePasswordField_Password_len);        
        strncpy(self->data.Password, VerifyFuturePasswordField_Password, sizeof(self->data.Password) );
        VerifyFuturePasswordField_Password = NULL;
    }
            
    ///银行帐号
    // TThostFtdcBankAccountType char[41]
    if( VerifyFuturePasswordField_BankAccount != NULL ) {
        if(VerifyFuturePasswordField_BankAccount_len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
            PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is %zd)", VerifyFuturePasswordField_BankAccount_len, (Py_ssize_t)sizeof(self->data.BankAccount));
            return -1;
        }
        // memset(self->data.BankAccount, 0, sizeof(self->data.BankAccount));
        // memcpy(self->data.BankAccount, VerifyFuturePasswordField_BankAccount, VerifyFuturePasswordField_BankAccount_len);        
        strncpy(self->data.BankAccount, VerifyFuturePasswordField_BankAccount, sizeof(self->data.BankAccount) );
        VerifyFuturePasswordField_BankAccount = NULL;
    }
            
    ///银行密码
    // TThostFtdcPasswordType char[41]
    if( VerifyFuturePasswordField_BankPassWord != NULL ) {
        if(VerifyFuturePasswordField_BankPassWord_len > (Py_ssize_t)sizeof(self->data.BankPassWord)) {
            PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is %zd)", VerifyFuturePasswordField_BankPassWord_len, (Py_ssize_t)sizeof(self->data.BankPassWord));
            return -1;
        }
        // memset(self->data.BankPassWord, 0, sizeof(self->data.BankPassWord));
        // memcpy(self->data.BankPassWord, VerifyFuturePasswordField_BankPassWord, VerifyFuturePasswordField_BankPassWord_len);        
        strncpy(self->data.BankPassWord, VerifyFuturePasswordField_BankPassWord, sizeof(self->data.BankPassWord) );
        VerifyFuturePasswordField_BankPassWord = NULL;
    }
            
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = VerifyFuturePasswordField_InstallID;
        
    ///交易ID
    // TThostFtdcTIDType int
    self->data.TID = VerifyFuturePasswordField_TID;
        
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( VerifyFuturePasswordField_CurrencyID != NULL ) {
        if(VerifyFuturePasswordField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", VerifyFuturePasswordField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, VerifyFuturePasswordField_CurrencyID, VerifyFuturePasswordField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, VerifyFuturePasswordField_CurrencyID, sizeof(self->data.CurrencyID) );
        VerifyFuturePasswordField_CurrencyID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcVerifyFuturePasswordField_dealloc(PyCThostFtdcVerifyFuturePasswordField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcVerifyFuturePasswordField_repr(PyCThostFtdcVerifyFuturePasswordField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:y,s:y,s:y,s:i,s:i,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:s,s:s,s:s,s:i,s:i,s:s}"
#endif

        ,"TradeCode", self->data.TradeCode//, (Py_ssize_t)sizeof(self->data.TradeCode) 
        ,"BankID", self->data.BankID//, (Py_ssize_t)sizeof(self->data.BankID) 
        ,"BankBranchID", self->data.BankBranchID//, (Py_ssize_t)sizeof(self->data.BankBranchID) 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"BrokerBranchID", self->data.BrokerBranchID//, (Py_ssize_t)sizeof(self->data.BrokerBranchID) 
        ,"TradeDate", self->data.TradeDate//, (Py_ssize_t)sizeof(self->data.TradeDate) 
        ,"TradeTime", self->data.TradeTime//, (Py_ssize_t)sizeof(self->data.TradeTime) 
        ,"BankSerial", self->data.BankSerial//, (Py_ssize_t)sizeof(self->data.BankSerial) 
        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"PlateSerial", self->data.PlateSerial 
        ,"LastFragment", self->data.LastFragment 
        ,"SessionID", self->data.SessionID 
        ,"AccountID", self->data.AccountID//, (Py_ssize_t)sizeof(self->data.AccountID) 
        ,"Password", self->data.Password//, (Py_ssize_t)sizeof(self->data.Password) 
        ,"BankAccount", self->data.BankAccount//, (Py_ssize_t)sizeof(self->data.BankAccount) 
        ,"BankPassWord", self->data.BankPassWord//, (Py_ssize_t)sizeof(self->data.BankPassWord) 
        ,"InstallID", self->data.InstallID 
        ,"TID", self->data.TID 
        ,"CurrencyID", self->data.CurrencyID//, (Py_ssize_t)sizeof(self->data.CurrencyID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcVerifyFuturePasswordField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///业务功能码
// TThostFtdcTradeCodeType char[7]
static PyObject *PyCThostFtdcVerifyFuturePasswordField_get_TradeCode(PyCThostFtdcVerifyFuturePasswordField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeCode, (Py_ssize_t)sizeof(self->data.TradeCode));
    return PyBytes_FromString(self->data.TradeCode);
}

///业务功能码
// TThostFtdcTradeCodeType char[7]
static int PyCThostFtdcVerifyFuturePasswordField_set_TradeCode(PyCThostFtdcVerifyFuturePasswordField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradeCode Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
        PyErr_SetString(PyExc_ValueError, "TradeCode must be less than 7 bytes");
        return -1;
    }
    // memset(self->data.TradeCode, 0, sizeof(self->data.TradeCode));
    // memcpy(self->data.TradeCode, buf, len);
    strncpy(self->data.TradeCode, buf, sizeof(self->data.TradeCode));
    return 0;
}
            
///银行代码
// TThostFtdcBankIDType char[4]
static PyObject *PyCThostFtdcVerifyFuturePasswordField_get_BankID(PyCThostFtdcVerifyFuturePasswordField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankID, (Py_ssize_t)sizeof(self->data.BankID));
    return PyBytes_FromString(self->data.BankID);
}

///银行代码
// TThostFtdcBankIDType char[4]
static int PyCThostFtdcVerifyFuturePasswordField_set_BankID(PyCThostFtdcVerifyFuturePasswordField *self, PyObject* val, void *closure) {
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
            
///银行分支机构代码
// TThostFtdcBankBrchIDType char[5]
static PyObject *PyCThostFtdcVerifyFuturePasswordField_get_BankBranchID(PyCThostFtdcVerifyFuturePasswordField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankBranchID, (Py_ssize_t)sizeof(self->data.BankBranchID));
    return PyBytes_FromString(self->data.BankBranchID);
}

///银行分支机构代码
// TThostFtdcBankBrchIDType char[5]
static int PyCThostFtdcVerifyFuturePasswordField_set_BankBranchID(PyCThostFtdcVerifyFuturePasswordField *self, PyObject* val, void *closure) {
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
            
///期商代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcVerifyFuturePasswordField_get_BrokerID(PyCThostFtdcVerifyFuturePasswordField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///期商代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcVerifyFuturePasswordField_set_BrokerID(PyCThostFtdcVerifyFuturePasswordField *self, PyObject* val, void *closure) {
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
            
///期商分支机构代码
// TThostFtdcFutureBranchIDType char[31]
static PyObject *PyCThostFtdcVerifyFuturePasswordField_get_BrokerBranchID(PyCThostFtdcVerifyFuturePasswordField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerBranchID, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
    return PyBytes_FromString(self->data.BrokerBranchID);
}

///期商分支机构代码
// TThostFtdcFutureBranchIDType char[31]
static int PyCThostFtdcVerifyFuturePasswordField_set_BrokerBranchID(PyCThostFtdcVerifyFuturePasswordField *self, PyObject* val, void *closure) {
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
            
///交易日期
// TThostFtdcTradeDateType char[9]
static PyObject *PyCThostFtdcVerifyFuturePasswordField_get_TradeDate(PyCThostFtdcVerifyFuturePasswordField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeDate, (Py_ssize_t)sizeof(self->data.TradeDate));
    return PyBytes_FromString(self->data.TradeDate);
}

///交易日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcVerifyFuturePasswordField_set_TradeDate(PyCThostFtdcVerifyFuturePasswordField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradeDate Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
        PyErr_SetString(PyExc_ValueError, "TradeDate must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.TradeDate, 0, sizeof(self->data.TradeDate));
    // memcpy(self->data.TradeDate, buf, len);
    strncpy(self->data.TradeDate, buf, sizeof(self->data.TradeDate));
    return 0;
}
            
///交易时间
// TThostFtdcTradeTimeType char[9]
static PyObject *PyCThostFtdcVerifyFuturePasswordField_get_TradeTime(PyCThostFtdcVerifyFuturePasswordField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeTime, (Py_ssize_t)sizeof(self->data.TradeTime));
    return PyBytes_FromString(self->data.TradeTime);
}

///交易时间
// TThostFtdcTradeTimeType char[9]
static int PyCThostFtdcVerifyFuturePasswordField_set_TradeTime(PyCThostFtdcVerifyFuturePasswordField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradeTime Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
        PyErr_SetString(PyExc_ValueError, "TradeTime must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.TradeTime, 0, sizeof(self->data.TradeTime));
    // memcpy(self->data.TradeTime, buf, len);
    strncpy(self->data.TradeTime, buf, sizeof(self->data.TradeTime));
    return 0;
}
            
///银行流水号
// TThostFtdcBankSerialType char[13]
static PyObject *PyCThostFtdcVerifyFuturePasswordField_get_BankSerial(PyCThostFtdcVerifyFuturePasswordField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankSerial, (Py_ssize_t)sizeof(self->data.BankSerial));
    return PyBytes_FromString(self->data.BankSerial);
}

///银行流水号
// TThostFtdcBankSerialType char[13]
static int PyCThostFtdcVerifyFuturePasswordField_set_BankSerial(PyCThostFtdcVerifyFuturePasswordField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BankSerial Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
        PyErr_SetString(PyExc_ValueError, "BankSerial must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.BankSerial, 0, sizeof(self->data.BankSerial));
    // memcpy(self->data.BankSerial, buf, len);
    strncpy(self->data.BankSerial, buf, sizeof(self->data.BankSerial));
    return 0;
}
            
///交易系统日期
// TThostFtdcTradeDateType char[9]
static PyObject *PyCThostFtdcVerifyFuturePasswordField_get_TradingDay(PyCThostFtdcVerifyFuturePasswordField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易系统日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcVerifyFuturePasswordField_set_TradingDay(PyCThostFtdcVerifyFuturePasswordField *self, PyObject* val, void *closure) {
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
            
///银期平台消息流水号
// TThostFtdcSerialType int
static PyObject *PyCThostFtdcVerifyFuturePasswordField_get_PlateSerial(PyCThostFtdcVerifyFuturePasswordField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.PlateSerial);
#else
    return PyInt_FromLong(self->data.PlateSerial);
#endif
}

///银期平台消息流水号
// TThostFtdcSerialType int
static int PyCThostFtdcVerifyFuturePasswordField_set_PlateSerial(PyCThostFtdcVerifyFuturePasswordField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PlateSerial Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PlateSerial Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the PlateSerial value out of range for C int");
        return -1;
    }
    self->data.PlateSerial = (int)buf;
    return 0;
}
        
///最后分片标志
// TThostFtdcLastFragmentType char
static PyObject *PyCThostFtdcVerifyFuturePasswordField_get_LastFragment(PyCThostFtdcVerifyFuturePasswordField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

///最后分片标志
// TThostFtdcLastFragmentType char
static int PyCThostFtdcVerifyFuturePasswordField_set_LastFragment(PyCThostFtdcVerifyFuturePasswordField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LastFragment Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.LastFragment)) {
        PyErr_SetString(PyExc_ValueError, "LastFragment must be equal 1 bytes");
        return -1;
    }
    self->data.LastFragment = *buf;
    return 0;
}
            
///会话号
// TThostFtdcSessionIDType int
static PyObject *PyCThostFtdcVerifyFuturePasswordField_get_SessionID(PyCThostFtdcVerifyFuturePasswordField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话号
// TThostFtdcSessionIDType int
static int PyCThostFtdcVerifyFuturePasswordField_set_SessionID(PyCThostFtdcVerifyFuturePasswordField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SessionID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SessionID Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the SessionID value out of range for C int");
        return -1;
    }
    self->data.SessionID = (int)buf;
    return 0;
}
        
///投资者帐号
// TThostFtdcAccountIDType char[13]
static PyObject *PyCThostFtdcVerifyFuturePasswordField_get_AccountID(PyCThostFtdcVerifyFuturePasswordField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AccountID, (Py_ssize_t)sizeof(self->data.AccountID));
    return PyBytes_FromString(self->data.AccountID);
}

///投资者帐号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcVerifyFuturePasswordField_set_AccountID(PyCThostFtdcVerifyFuturePasswordField *self, PyObject* val, void *closure) {
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
            
///期货密码
// TThostFtdcPasswordType char[41]
static PyObject *PyCThostFtdcVerifyFuturePasswordField_get_Password(PyCThostFtdcVerifyFuturePasswordField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Password, (Py_ssize_t)sizeof(self->data.Password));
    return PyBytes_FromString(self->data.Password);
}

///期货密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcVerifyFuturePasswordField_set_Password(PyCThostFtdcVerifyFuturePasswordField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Password Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Password)) {
        PyErr_SetString(PyExc_ValueError, "Password must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.Password, 0, sizeof(self->data.Password));
    // memcpy(self->data.Password, buf, len);
    strncpy(self->data.Password, buf, sizeof(self->data.Password));
    return 0;
}
            
///银行帐号
// TThostFtdcBankAccountType char[41]
static PyObject *PyCThostFtdcVerifyFuturePasswordField_get_BankAccount(PyCThostFtdcVerifyFuturePasswordField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankAccount, (Py_ssize_t)sizeof(self->data.BankAccount));
    return PyBytes_FromString(self->data.BankAccount);
}

///银行帐号
// TThostFtdcBankAccountType char[41]
static int PyCThostFtdcVerifyFuturePasswordField_set_BankAccount(PyCThostFtdcVerifyFuturePasswordField *self, PyObject* val, void *closure) {
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
            
///银行密码
// TThostFtdcPasswordType char[41]
static PyObject *PyCThostFtdcVerifyFuturePasswordField_get_BankPassWord(PyCThostFtdcVerifyFuturePasswordField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankPassWord, (Py_ssize_t)sizeof(self->data.BankPassWord));
    return PyBytes_FromString(self->data.BankPassWord);
}

///银行密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcVerifyFuturePasswordField_set_BankPassWord(PyCThostFtdcVerifyFuturePasswordField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BankPassWord Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BankPassWord)) {
        PyErr_SetString(PyExc_ValueError, "BankPassWord must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.BankPassWord, 0, sizeof(self->data.BankPassWord));
    // memcpy(self->data.BankPassWord, buf, len);
    strncpy(self->data.BankPassWord, buf, sizeof(self->data.BankPassWord));
    return 0;
}
            
///安装编号
// TThostFtdcInstallIDType int
static PyObject *PyCThostFtdcVerifyFuturePasswordField_get_InstallID(PyCThostFtdcVerifyFuturePasswordField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcVerifyFuturePasswordField_set_InstallID(PyCThostFtdcVerifyFuturePasswordField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InstallID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InstallID Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the InstallID value out of range for C int");
        return -1;
    }
    self->data.InstallID = (int)buf;
    return 0;
}
        
///交易ID
// TThostFtdcTIDType int
static PyObject *PyCThostFtdcVerifyFuturePasswordField_get_TID(PyCThostFtdcVerifyFuturePasswordField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.TID);
#else
    return PyInt_FromLong(self->data.TID);
#endif
}

///交易ID
// TThostFtdcTIDType int
static int PyCThostFtdcVerifyFuturePasswordField_set_TID(PyCThostFtdcVerifyFuturePasswordField *self, PyObject* val, void *closure) {
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
        
///币种代码
// TThostFtdcCurrencyIDType char[4]
static PyObject *PyCThostFtdcVerifyFuturePasswordField_get_CurrencyID(PyCThostFtdcVerifyFuturePasswordField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcVerifyFuturePasswordField_set_CurrencyID(PyCThostFtdcVerifyFuturePasswordField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcVerifyFuturePasswordField_getset[] = {
    ///业务功能码 
    {(char *)"TradeCode", (getter)PyCThostFtdcVerifyFuturePasswordField_get_TradeCode, (setter)PyCThostFtdcVerifyFuturePasswordField_set_TradeCode, (char *)"TradeCode", NULL},
    ///银行代码 
    {(char *)"BankID", (getter)PyCThostFtdcVerifyFuturePasswordField_get_BankID, (setter)PyCThostFtdcVerifyFuturePasswordField_set_BankID, (char *)"BankID", NULL},
    ///银行分支机构代码 
    {(char *)"BankBranchID", (getter)PyCThostFtdcVerifyFuturePasswordField_get_BankBranchID, (setter)PyCThostFtdcVerifyFuturePasswordField_set_BankBranchID, (char *)"BankBranchID", NULL},
    ///期商代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcVerifyFuturePasswordField_get_BrokerID, (setter)PyCThostFtdcVerifyFuturePasswordField_set_BrokerID, (char *)"BrokerID", NULL},
    ///期商分支机构代码 
    {(char *)"BrokerBranchID", (getter)PyCThostFtdcVerifyFuturePasswordField_get_BrokerBranchID, (setter)PyCThostFtdcVerifyFuturePasswordField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
    ///交易日期 
    {(char *)"TradeDate", (getter)PyCThostFtdcVerifyFuturePasswordField_get_TradeDate, (setter)PyCThostFtdcVerifyFuturePasswordField_set_TradeDate, (char *)"TradeDate", NULL},
    ///交易时间 
    {(char *)"TradeTime", (getter)PyCThostFtdcVerifyFuturePasswordField_get_TradeTime, (setter)PyCThostFtdcVerifyFuturePasswordField_set_TradeTime, (char *)"TradeTime", NULL},
    ///银行流水号 
    {(char *)"BankSerial", (getter)PyCThostFtdcVerifyFuturePasswordField_get_BankSerial, (setter)PyCThostFtdcVerifyFuturePasswordField_set_BankSerial, (char *)"BankSerial", NULL},
    ///交易系统日期 
    {(char *)"TradingDay", (getter)PyCThostFtdcVerifyFuturePasswordField_get_TradingDay, (setter)PyCThostFtdcVerifyFuturePasswordField_set_TradingDay, (char *)"TradingDay", NULL},
    ///银期平台消息流水号 
    {(char *)"PlateSerial", (getter)PyCThostFtdcVerifyFuturePasswordField_get_PlateSerial, (setter)PyCThostFtdcVerifyFuturePasswordField_set_PlateSerial, (char *)"PlateSerial", NULL},
    ///最后分片标志 
    {(char *)"LastFragment", (getter)PyCThostFtdcVerifyFuturePasswordField_get_LastFragment, (setter)PyCThostFtdcVerifyFuturePasswordField_set_LastFragment, (char *)"LastFragment", NULL},
    ///会话号 
    {(char *)"SessionID", (getter)PyCThostFtdcVerifyFuturePasswordField_get_SessionID, (setter)PyCThostFtdcVerifyFuturePasswordField_set_SessionID, (char *)"SessionID", NULL},
    ///投资者帐号 
    {(char *)"AccountID", (getter)PyCThostFtdcVerifyFuturePasswordField_get_AccountID, (setter)PyCThostFtdcVerifyFuturePasswordField_set_AccountID, (char *)"AccountID", NULL},
    ///期货密码 
    {(char *)"Password", (getter)PyCThostFtdcVerifyFuturePasswordField_get_Password, (setter)PyCThostFtdcVerifyFuturePasswordField_set_Password, (char *)"Password", NULL},
    ///银行帐号 
    {(char *)"BankAccount", (getter)PyCThostFtdcVerifyFuturePasswordField_get_BankAccount, (setter)PyCThostFtdcVerifyFuturePasswordField_set_BankAccount, (char *)"BankAccount", NULL},
    ///银行密码 
    {(char *)"BankPassWord", (getter)PyCThostFtdcVerifyFuturePasswordField_get_BankPassWord, (setter)PyCThostFtdcVerifyFuturePasswordField_set_BankPassWord, (char *)"BankPassWord", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcVerifyFuturePasswordField_get_InstallID, (setter)PyCThostFtdcVerifyFuturePasswordField_set_InstallID, (char *)"InstallID", NULL},
    ///交易ID 
    {(char *)"TID", (getter)PyCThostFtdcVerifyFuturePasswordField_get_TID, (setter)PyCThostFtdcVerifyFuturePasswordField_set_TID, (char *)"TID", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcVerifyFuturePasswordField_get_CurrencyID, (setter)PyCThostFtdcVerifyFuturePasswordField_set_CurrencyID, (char *)"CurrencyID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcVerifyFuturePasswordFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcVerifyFuturePasswordField",	/* tp_name */
	sizeof(PyCThostFtdcVerifyFuturePasswordField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcVerifyFuturePasswordField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcVerifyFuturePasswordField_repr,   /* tp_repr */
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
	"CThostFtdcVerifyFuturePasswordField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcVerifyFuturePasswordField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcVerifyFuturePasswordField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcVerifyFuturePasswordField_new,       /* tp_new */
};

int PyCThostFtdcVerifyFuturePasswordFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcVerifyFuturePasswordField  */
	if (PyType_Ready(&PyCThostFtdcVerifyFuturePasswordFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcVerifyFuturePasswordField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcVerifyFuturePasswordFieldType);
    if( PyModule_AddObject(module, "CThostFtdcVerifyFuturePasswordField", (PyObject *)&PyCThostFtdcVerifyFuturePasswordFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcVerifyFuturePasswordField to module");
        Py_DECREF(&PyCThostFtdcVerifyFuturePasswordFieldType);
		return -1;
    }

    return 0;
}
