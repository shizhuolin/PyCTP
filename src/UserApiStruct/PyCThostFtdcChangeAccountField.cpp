
#include "PyCThostFtdcChangeAccountField.h"

///银期变更银行账号信息

static PyObject *PyCThostFtdcChangeAccountField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcChangeAccountField *self = (PyCThostFtdcChangeAccountField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcChangeAccountField_init(PyCThostFtdcChangeAccountField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "Gender", "CountryCode", "CustType", "Address", "ZipCode", "Telephone", "MobilePhone", "Fax", "EMail", "MoneyAccountStatus", "BankAccount", "BankPassWord", "NewBankAccount", "NewBankPassWord", "AccountID", "Password", "BankAccType", "InstallID", "VerifyCertNoFlag", "CurrencyID", "BrokerIDByBank", "BankPwdFlag", "SecuPwdFlag", "TID", "Digest", "ErrorID", "ErrorMsg", "LongCustomerName",  NULL};


    ///业务功能码
    // TThostFtdcTradeCodeType char[7]
    const char *ChangeAccountField_TradeCode = NULL;
    Py_ssize_t ChangeAccountField_TradeCode_len = 0;
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    const char *ChangeAccountField_BankID = NULL;
    Py_ssize_t ChangeAccountField_BankID_len = 0;
            
    ///银行分支机构代码
    // TThostFtdcBankBrchIDType char[5]
    const char *ChangeAccountField_BankBranchID = NULL;
    Py_ssize_t ChangeAccountField_BankBranchID_len = 0;
            
    ///期商代码
    // TThostFtdcBrokerIDType char[11]
    const char *ChangeAccountField_BrokerID = NULL;
    Py_ssize_t ChangeAccountField_BrokerID_len = 0;
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    const char *ChangeAccountField_BrokerBranchID = NULL;
    Py_ssize_t ChangeAccountField_BrokerBranchID_len = 0;
            
    ///交易日期
    // TThostFtdcTradeDateType char[9]
    const char *ChangeAccountField_TradeDate = NULL;
    Py_ssize_t ChangeAccountField_TradeDate_len = 0;
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    const char *ChangeAccountField_TradeTime = NULL;
    Py_ssize_t ChangeAccountField_TradeTime_len = 0;
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    const char *ChangeAccountField_BankSerial = NULL;
    Py_ssize_t ChangeAccountField_BankSerial_len = 0;
            
    ///交易系统日期
    // TThostFtdcTradeDateType char[9]
    const char *ChangeAccountField_TradingDay = NULL;
    Py_ssize_t ChangeAccountField_TradingDay_len = 0;
            
    ///银期平台消息流水号
    // TThostFtdcSerialType int
    int ChangeAccountField_PlateSerial = 0;
        
    ///最后分片标志
    // TThostFtdcLastFragmentType char
    char ChangeAccountField_LastFragment = 0;
            
    ///会话号
    // TThostFtdcSessionIDType int
    int ChangeAccountField_SessionID = 0;
        
    ///客户姓名
    // TThostFtdcIndividualNameType char[51]
    const char *ChangeAccountField_CustomerName = NULL;
    Py_ssize_t ChangeAccountField_CustomerName_len = 0;
            
    ///证件类型
    // TThostFtdcIdCardTypeType char
    char ChangeAccountField_IdCardType = 0;
            
    ///证件号码
    // TThostFtdcIdentifiedCardNoType char[51]
    const char *ChangeAccountField_IdentifiedCardNo = NULL;
    Py_ssize_t ChangeAccountField_IdentifiedCardNo_len = 0;
            
    ///性别
    // TThostFtdcGenderType char
    char ChangeAccountField_Gender = 0;
            
    ///国家代码
    // TThostFtdcCountryCodeType char[21]
    const char *ChangeAccountField_CountryCode = NULL;
    Py_ssize_t ChangeAccountField_CountryCode_len = 0;
            
    ///客户类型
    // TThostFtdcCustTypeType char
    char ChangeAccountField_CustType = 0;
            
    ///地址
    // TThostFtdcAddressType char[101]
    const char *ChangeAccountField_Address = NULL;
    Py_ssize_t ChangeAccountField_Address_len = 0;
            
    ///邮编
    // TThostFtdcZipCodeType char[7]
    const char *ChangeAccountField_ZipCode = NULL;
    Py_ssize_t ChangeAccountField_ZipCode_len = 0;
            
    ///电话号码
    // TThostFtdcTelephoneType char[41]
    const char *ChangeAccountField_Telephone = NULL;
    Py_ssize_t ChangeAccountField_Telephone_len = 0;
            
    ///手机
    // TThostFtdcMobilePhoneType char[21]
    const char *ChangeAccountField_MobilePhone = NULL;
    Py_ssize_t ChangeAccountField_MobilePhone_len = 0;
            
    ///传真
    // TThostFtdcFaxType char[41]
    const char *ChangeAccountField_Fax = NULL;
    Py_ssize_t ChangeAccountField_Fax_len = 0;
            
    ///电子邮件
    // TThostFtdcEMailType char[41]
    const char *ChangeAccountField_EMail = NULL;
    Py_ssize_t ChangeAccountField_EMail_len = 0;
            
    ///资金账户状态
    // TThostFtdcMoneyAccountStatusType char
    char ChangeAccountField_MoneyAccountStatus = 0;
            
    ///银行帐号
    // TThostFtdcBankAccountType char[41]
    const char *ChangeAccountField_BankAccount = NULL;
    Py_ssize_t ChangeAccountField_BankAccount_len = 0;
            
    ///银行密码
    // TThostFtdcPasswordType char[41]
    const char *ChangeAccountField_BankPassWord = NULL;
    Py_ssize_t ChangeAccountField_BankPassWord_len = 0;
            
    ///新银行帐号
    // TThostFtdcBankAccountType char[41]
    const char *ChangeAccountField_NewBankAccount = NULL;
    Py_ssize_t ChangeAccountField_NewBankAccount_len = 0;
            
    ///新银行密码
    // TThostFtdcPasswordType char[41]
    const char *ChangeAccountField_NewBankPassWord = NULL;
    Py_ssize_t ChangeAccountField_NewBankPassWord_len = 0;
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    const char *ChangeAccountField_AccountID = NULL;
    Py_ssize_t ChangeAccountField_AccountID_len = 0;
            
    ///期货密码
    // TThostFtdcPasswordType char[41]
    const char *ChangeAccountField_Password = NULL;
    Py_ssize_t ChangeAccountField_Password_len = 0;
            
    ///银行帐号类型
    // TThostFtdcBankAccTypeType char
    char ChangeAccountField_BankAccType = 0;
            
    ///安装编号
    // TThostFtdcInstallIDType int
    int ChangeAccountField_InstallID = 0;
        
    ///验证客户证件号码标志
    // TThostFtdcYesNoIndicatorType char
    char ChangeAccountField_VerifyCertNoFlag = 0;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *ChangeAccountField_CurrencyID = NULL;
    Py_ssize_t ChangeAccountField_CurrencyID_len = 0;
            
    ///期货公司银行编码
    // TThostFtdcBankCodingForFutureType char[33]
    const char *ChangeAccountField_BrokerIDByBank = NULL;
    Py_ssize_t ChangeAccountField_BrokerIDByBank_len = 0;
            
    ///银行密码标志
    // TThostFtdcPwdFlagType char
    char ChangeAccountField_BankPwdFlag = 0;
            
    ///期货资金密码核对标志
    // TThostFtdcPwdFlagType char
    char ChangeAccountField_SecuPwdFlag = 0;
            
    ///交易ID
    // TThostFtdcTIDType int
    int ChangeAccountField_TID = 0;
        
    ///摘要
    // TThostFtdcDigestType char[36]
    const char *ChangeAccountField_Digest = NULL;
    Py_ssize_t ChangeAccountField_Digest_len = 0;
            
    ///错误代码
    // TThostFtdcErrorIDType int
    int ChangeAccountField_ErrorID = 0;
        
    ///错误信息
    // TThostFtdcErrorMsgType char[81]
    const char *ChangeAccountField_ErrorMsg = NULL;
    Py_ssize_t ChangeAccountField_ErrorMsg_len = 0;
            
    ///长客户姓名
    // TThostFtdcLongIndividualNameType char[161]
    const char *ChangeAccountField_LongCustomerName = NULL;
    Py_ssize_t ChangeAccountField_LongCustomerName_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciy#cy#cy#cy#y#y#y#y#y#cy#y#y#y#y#y#cicy#y#cciy#iy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#icis#cs#cs#cs#s#s#s#s#s#cs#s#s#s#s#s#cics#s#ccis#is#s#", (char **)kwlist
#endif

        , &ChangeAccountField_TradeCode, &ChangeAccountField_TradeCode_len 
        , &ChangeAccountField_BankID, &ChangeAccountField_BankID_len 
        , &ChangeAccountField_BankBranchID, &ChangeAccountField_BankBranchID_len 
        , &ChangeAccountField_BrokerID, &ChangeAccountField_BrokerID_len 
        , &ChangeAccountField_BrokerBranchID, &ChangeAccountField_BrokerBranchID_len 
        , &ChangeAccountField_TradeDate, &ChangeAccountField_TradeDate_len 
        , &ChangeAccountField_TradeTime, &ChangeAccountField_TradeTime_len 
        , &ChangeAccountField_BankSerial, &ChangeAccountField_BankSerial_len 
        , &ChangeAccountField_TradingDay, &ChangeAccountField_TradingDay_len 
        , &ChangeAccountField_PlateSerial 
        , &ChangeAccountField_LastFragment 
        , &ChangeAccountField_SessionID 
        , &ChangeAccountField_CustomerName, &ChangeAccountField_CustomerName_len 
        , &ChangeAccountField_IdCardType 
        , &ChangeAccountField_IdentifiedCardNo, &ChangeAccountField_IdentifiedCardNo_len 
        , &ChangeAccountField_Gender 
        , &ChangeAccountField_CountryCode, &ChangeAccountField_CountryCode_len 
        , &ChangeAccountField_CustType 
        , &ChangeAccountField_Address, &ChangeAccountField_Address_len 
        , &ChangeAccountField_ZipCode, &ChangeAccountField_ZipCode_len 
        , &ChangeAccountField_Telephone, &ChangeAccountField_Telephone_len 
        , &ChangeAccountField_MobilePhone, &ChangeAccountField_MobilePhone_len 
        , &ChangeAccountField_Fax, &ChangeAccountField_Fax_len 
        , &ChangeAccountField_EMail, &ChangeAccountField_EMail_len 
        , &ChangeAccountField_MoneyAccountStatus 
        , &ChangeAccountField_BankAccount, &ChangeAccountField_BankAccount_len 
        , &ChangeAccountField_BankPassWord, &ChangeAccountField_BankPassWord_len 
        , &ChangeAccountField_NewBankAccount, &ChangeAccountField_NewBankAccount_len 
        , &ChangeAccountField_NewBankPassWord, &ChangeAccountField_NewBankPassWord_len 
        , &ChangeAccountField_AccountID, &ChangeAccountField_AccountID_len 
        , &ChangeAccountField_Password, &ChangeAccountField_Password_len 
        , &ChangeAccountField_BankAccType 
        , &ChangeAccountField_InstallID 
        , &ChangeAccountField_VerifyCertNoFlag 
        , &ChangeAccountField_CurrencyID, &ChangeAccountField_CurrencyID_len 
        , &ChangeAccountField_BrokerIDByBank, &ChangeAccountField_BrokerIDByBank_len 
        , &ChangeAccountField_BankPwdFlag 
        , &ChangeAccountField_SecuPwdFlag 
        , &ChangeAccountField_TID 
        , &ChangeAccountField_Digest, &ChangeAccountField_Digest_len 
        , &ChangeAccountField_ErrorID 
        , &ChangeAccountField_ErrorMsg, &ChangeAccountField_ErrorMsg_len 
        , &ChangeAccountField_LongCustomerName, &ChangeAccountField_LongCustomerName_len 


    )) {
        return -1;
    }


    ///业务功能码
    // TThostFtdcTradeCodeType char[7]
    if( ChangeAccountField_TradeCode != NULL ) {
        if(ChangeAccountField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", ChangeAccountField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
            return -1;
        }
        // memset(self->data.TradeCode, 0, sizeof(self->data.TradeCode));
        // memcpy(self->data.TradeCode, ChangeAccountField_TradeCode, ChangeAccountField_TradeCode_len);        
        strncpy(self->data.TradeCode, ChangeAccountField_TradeCode, sizeof(self->data.TradeCode) );
        ChangeAccountField_TradeCode = NULL;
    }
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    if( ChangeAccountField_BankID != NULL ) {
        if(ChangeAccountField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", ChangeAccountField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
            return -1;
        }
        // memset(self->data.BankID, 0, sizeof(self->data.BankID));
        // memcpy(self->data.BankID, ChangeAccountField_BankID, ChangeAccountField_BankID_len);        
        strncpy(self->data.BankID, ChangeAccountField_BankID, sizeof(self->data.BankID) );
        ChangeAccountField_BankID = NULL;
    }
            
    ///银行分支机构代码
    // TThostFtdcBankBrchIDType char[5]
    if( ChangeAccountField_BankBranchID != NULL ) {
        if(ChangeAccountField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", ChangeAccountField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
            return -1;
        }
        // memset(self->data.BankBranchID, 0, sizeof(self->data.BankBranchID));
        // memcpy(self->data.BankBranchID, ChangeAccountField_BankBranchID, ChangeAccountField_BankBranchID_len);        
        strncpy(self->data.BankBranchID, ChangeAccountField_BankBranchID, sizeof(self->data.BankBranchID) );
        ChangeAccountField_BankBranchID = NULL;
    }
            
    ///期商代码
    // TThostFtdcBrokerIDType char[11]
    if( ChangeAccountField_BrokerID != NULL ) {
        if(ChangeAccountField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", ChangeAccountField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, ChangeAccountField_BrokerID, ChangeAccountField_BrokerID_len);        
        strncpy(self->data.BrokerID, ChangeAccountField_BrokerID, sizeof(self->data.BrokerID) );
        ChangeAccountField_BrokerID = NULL;
    }
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    if( ChangeAccountField_BrokerBranchID != NULL ) {
        if(ChangeAccountField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", ChangeAccountField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
            return -1;
        }
        // memset(self->data.BrokerBranchID, 0, sizeof(self->data.BrokerBranchID));
        // memcpy(self->data.BrokerBranchID, ChangeAccountField_BrokerBranchID, ChangeAccountField_BrokerBranchID_len);        
        strncpy(self->data.BrokerBranchID, ChangeAccountField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
        ChangeAccountField_BrokerBranchID = NULL;
    }
            
    ///交易日期
    // TThostFtdcTradeDateType char[9]
    if( ChangeAccountField_TradeDate != NULL ) {
        if(ChangeAccountField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", ChangeAccountField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
            return -1;
        }
        // memset(self->data.TradeDate, 0, sizeof(self->data.TradeDate));
        // memcpy(self->data.TradeDate, ChangeAccountField_TradeDate, ChangeAccountField_TradeDate_len);        
        strncpy(self->data.TradeDate, ChangeAccountField_TradeDate, sizeof(self->data.TradeDate) );
        ChangeAccountField_TradeDate = NULL;
    }
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    if( ChangeAccountField_TradeTime != NULL ) {
        if(ChangeAccountField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", ChangeAccountField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
            return -1;
        }
        // memset(self->data.TradeTime, 0, sizeof(self->data.TradeTime));
        // memcpy(self->data.TradeTime, ChangeAccountField_TradeTime, ChangeAccountField_TradeTime_len);        
        strncpy(self->data.TradeTime, ChangeAccountField_TradeTime, sizeof(self->data.TradeTime) );
        ChangeAccountField_TradeTime = NULL;
    }
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    if( ChangeAccountField_BankSerial != NULL ) {
        if(ChangeAccountField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", ChangeAccountField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
            return -1;
        }
        // memset(self->data.BankSerial, 0, sizeof(self->data.BankSerial));
        // memcpy(self->data.BankSerial, ChangeAccountField_BankSerial, ChangeAccountField_BankSerial_len);        
        strncpy(self->data.BankSerial, ChangeAccountField_BankSerial, sizeof(self->data.BankSerial) );
        ChangeAccountField_BankSerial = NULL;
    }
            
    ///交易系统日期
    // TThostFtdcTradeDateType char[9]
    if( ChangeAccountField_TradingDay != NULL ) {
        if(ChangeAccountField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", ChangeAccountField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, ChangeAccountField_TradingDay, ChangeAccountField_TradingDay_len);        
        strncpy(self->data.TradingDay, ChangeAccountField_TradingDay, sizeof(self->data.TradingDay) );
        ChangeAccountField_TradingDay = NULL;
    }
            
    ///银期平台消息流水号
    // TThostFtdcSerialType int
    self->data.PlateSerial = ChangeAccountField_PlateSerial;
        
    ///最后分片标志
    // TThostFtdcLastFragmentType char
    self->data.LastFragment = ChangeAccountField_LastFragment;
            
    ///会话号
    // TThostFtdcSessionIDType int
    self->data.SessionID = ChangeAccountField_SessionID;
        
    ///客户姓名
    // TThostFtdcIndividualNameType char[51]
    if( ChangeAccountField_CustomerName != NULL ) {
        if(ChangeAccountField_CustomerName_len > (Py_ssize_t)sizeof(self->data.CustomerName)) {
            PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is %zd)", ChangeAccountField_CustomerName_len, (Py_ssize_t)sizeof(self->data.CustomerName));
            return -1;
        }
        // memset(self->data.CustomerName, 0, sizeof(self->data.CustomerName));
        // memcpy(self->data.CustomerName, ChangeAccountField_CustomerName, ChangeAccountField_CustomerName_len);        
        strncpy(self->data.CustomerName, ChangeAccountField_CustomerName, sizeof(self->data.CustomerName) );
        ChangeAccountField_CustomerName = NULL;
    }
            
    ///证件类型
    // TThostFtdcIdCardTypeType char
    self->data.IdCardType = ChangeAccountField_IdCardType;
            
    ///证件号码
    // TThostFtdcIdentifiedCardNoType char[51]
    if( ChangeAccountField_IdentifiedCardNo != NULL ) {
        if(ChangeAccountField_IdentifiedCardNo_len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
            PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is %zd)", ChangeAccountField_IdentifiedCardNo_len, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
            return -1;
        }
        // memset(self->data.IdentifiedCardNo, 0, sizeof(self->data.IdentifiedCardNo));
        // memcpy(self->data.IdentifiedCardNo, ChangeAccountField_IdentifiedCardNo, ChangeAccountField_IdentifiedCardNo_len);        
        strncpy(self->data.IdentifiedCardNo, ChangeAccountField_IdentifiedCardNo, sizeof(self->data.IdentifiedCardNo) );
        ChangeAccountField_IdentifiedCardNo = NULL;
    }
            
    ///性别
    // TThostFtdcGenderType char
    self->data.Gender = ChangeAccountField_Gender;
            
    ///国家代码
    // TThostFtdcCountryCodeType char[21]
    if( ChangeAccountField_CountryCode != NULL ) {
        if(ChangeAccountField_CountryCode_len > (Py_ssize_t)sizeof(self->data.CountryCode)) {
            PyErr_Format(PyExc_ValueError, "CountryCode too long: length=%zd (max allowed is %zd)", ChangeAccountField_CountryCode_len, (Py_ssize_t)sizeof(self->data.CountryCode));
            return -1;
        }
        // memset(self->data.CountryCode, 0, sizeof(self->data.CountryCode));
        // memcpy(self->data.CountryCode, ChangeAccountField_CountryCode, ChangeAccountField_CountryCode_len);        
        strncpy(self->data.CountryCode, ChangeAccountField_CountryCode, sizeof(self->data.CountryCode) );
        ChangeAccountField_CountryCode = NULL;
    }
            
    ///客户类型
    // TThostFtdcCustTypeType char
    self->data.CustType = ChangeAccountField_CustType;
            
    ///地址
    // TThostFtdcAddressType char[101]
    if( ChangeAccountField_Address != NULL ) {
        if(ChangeAccountField_Address_len > (Py_ssize_t)sizeof(self->data.Address)) {
            PyErr_Format(PyExc_ValueError, "Address too long: length=%zd (max allowed is %zd)", ChangeAccountField_Address_len, (Py_ssize_t)sizeof(self->data.Address));
            return -1;
        }
        // memset(self->data.Address, 0, sizeof(self->data.Address));
        // memcpy(self->data.Address, ChangeAccountField_Address, ChangeAccountField_Address_len);        
        strncpy(self->data.Address, ChangeAccountField_Address, sizeof(self->data.Address) );
        ChangeAccountField_Address = NULL;
    }
            
    ///邮编
    // TThostFtdcZipCodeType char[7]
    if( ChangeAccountField_ZipCode != NULL ) {
        if(ChangeAccountField_ZipCode_len > (Py_ssize_t)sizeof(self->data.ZipCode)) {
            PyErr_Format(PyExc_ValueError, "ZipCode too long: length=%zd (max allowed is %zd)", ChangeAccountField_ZipCode_len, (Py_ssize_t)sizeof(self->data.ZipCode));
            return -1;
        }
        // memset(self->data.ZipCode, 0, sizeof(self->data.ZipCode));
        // memcpy(self->data.ZipCode, ChangeAccountField_ZipCode, ChangeAccountField_ZipCode_len);        
        strncpy(self->data.ZipCode, ChangeAccountField_ZipCode, sizeof(self->data.ZipCode) );
        ChangeAccountField_ZipCode = NULL;
    }
            
    ///电话号码
    // TThostFtdcTelephoneType char[41]
    if( ChangeAccountField_Telephone != NULL ) {
        if(ChangeAccountField_Telephone_len > (Py_ssize_t)sizeof(self->data.Telephone)) {
            PyErr_Format(PyExc_ValueError, "Telephone too long: length=%zd (max allowed is %zd)", ChangeAccountField_Telephone_len, (Py_ssize_t)sizeof(self->data.Telephone));
            return -1;
        }
        // memset(self->data.Telephone, 0, sizeof(self->data.Telephone));
        // memcpy(self->data.Telephone, ChangeAccountField_Telephone, ChangeAccountField_Telephone_len);        
        strncpy(self->data.Telephone, ChangeAccountField_Telephone, sizeof(self->data.Telephone) );
        ChangeAccountField_Telephone = NULL;
    }
            
    ///手机
    // TThostFtdcMobilePhoneType char[21]
    if( ChangeAccountField_MobilePhone != NULL ) {
        if(ChangeAccountField_MobilePhone_len > (Py_ssize_t)sizeof(self->data.MobilePhone)) {
            PyErr_Format(PyExc_ValueError, "MobilePhone too long: length=%zd (max allowed is %zd)", ChangeAccountField_MobilePhone_len, (Py_ssize_t)sizeof(self->data.MobilePhone));
            return -1;
        }
        // memset(self->data.MobilePhone, 0, sizeof(self->data.MobilePhone));
        // memcpy(self->data.MobilePhone, ChangeAccountField_MobilePhone, ChangeAccountField_MobilePhone_len);        
        strncpy(self->data.MobilePhone, ChangeAccountField_MobilePhone, sizeof(self->data.MobilePhone) );
        ChangeAccountField_MobilePhone = NULL;
    }
            
    ///传真
    // TThostFtdcFaxType char[41]
    if( ChangeAccountField_Fax != NULL ) {
        if(ChangeAccountField_Fax_len > (Py_ssize_t)sizeof(self->data.Fax)) {
            PyErr_Format(PyExc_ValueError, "Fax too long: length=%zd (max allowed is %zd)", ChangeAccountField_Fax_len, (Py_ssize_t)sizeof(self->data.Fax));
            return -1;
        }
        // memset(self->data.Fax, 0, sizeof(self->data.Fax));
        // memcpy(self->data.Fax, ChangeAccountField_Fax, ChangeAccountField_Fax_len);        
        strncpy(self->data.Fax, ChangeAccountField_Fax, sizeof(self->data.Fax) );
        ChangeAccountField_Fax = NULL;
    }
            
    ///电子邮件
    // TThostFtdcEMailType char[41]
    if( ChangeAccountField_EMail != NULL ) {
        if(ChangeAccountField_EMail_len > (Py_ssize_t)sizeof(self->data.EMail)) {
            PyErr_Format(PyExc_ValueError, "EMail too long: length=%zd (max allowed is %zd)", ChangeAccountField_EMail_len, (Py_ssize_t)sizeof(self->data.EMail));
            return -1;
        }
        // memset(self->data.EMail, 0, sizeof(self->data.EMail));
        // memcpy(self->data.EMail, ChangeAccountField_EMail, ChangeAccountField_EMail_len);        
        strncpy(self->data.EMail, ChangeAccountField_EMail, sizeof(self->data.EMail) );
        ChangeAccountField_EMail = NULL;
    }
            
    ///资金账户状态
    // TThostFtdcMoneyAccountStatusType char
    self->data.MoneyAccountStatus = ChangeAccountField_MoneyAccountStatus;
            
    ///银行帐号
    // TThostFtdcBankAccountType char[41]
    if( ChangeAccountField_BankAccount != NULL ) {
        if(ChangeAccountField_BankAccount_len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
            PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is %zd)", ChangeAccountField_BankAccount_len, (Py_ssize_t)sizeof(self->data.BankAccount));
            return -1;
        }
        // memset(self->data.BankAccount, 0, sizeof(self->data.BankAccount));
        // memcpy(self->data.BankAccount, ChangeAccountField_BankAccount, ChangeAccountField_BankAccount_len);        
        strncpy(self->data.BankAccount, ChangeAccountField_BankAccount, sizeof(self->data.BankAccount) );
        ChangeAccountField_BankAccount = NULL;
    }
            
    ///银行密码
    // TThostFtdcPasswordType char[41]
    if( ChangeAccountField_BankPassWord != NULL ) {
        if(ChangeAccountField_BankPassWord_len > (Py_ssize_t)sizeof(self->data.BankPassWord)) {
            PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is %zd)", ChangeAccountField_BankPassWord_len, (Py_ssize_t)sizeof(self->data.BankPassWord));
            return -1;
        }
        // memset(self->data.BankPassWord, 0, sizeof(self->data.BankPassWord));
        // memcpy(self->data.BankPassWord, ChangeAccountField_BankPassWord, ChangeAccountField_BankPassWord_len);        
        strncpy(self->data.BankPassWord, ChangeAccountField_BankPassWord, sizeof(self->data.BankPassWord) );
        ChangeAccountField_BankPassWord = NULL;
    }
            
    ///新银行帐号
    // TThostFtdcBankAccountType char[41]
    if( ChangeAccountField_NewBankAccount != NULL ) {
        if(ChangeAccountField_NewBankAccount_len > (Py_ssize_t)sizeof(self->data.NewBankAccount)) {
            PyErr_Format(PyExc_ValueError, "NewBankAccount too long: length=%zd (max allowed is %zd)", ChangeAccountField_NewBankAccount_len, (Py_ssize_t)sizeof(self->data.NewBankAccount));
            return -1;
        }
        // memset(self->data.NewBankAccount, 0, sizeof(self->data.NewBankAccount));
        // memcpy(self->data.NewBankAccount, ChangeAccountField_NewBankAccount, ChangeAccountField_NewBankAccount_len);        
        strncpy(self->data.NewBankAccount, ChangeAccountField_NewBankAccount, sizeof(self->data.NewBankAccount) );
        ChangeAccountField_NewBankAccount = NULL;
    }
            
    ///新银行密码
    // TThostFtdcPasswordType char[41]
    if( ChangeAccountField_NewBankPassWord != NULL ) {
        if(ChangeAccountField_NewBankPassWord_len > (Py_ssize_t)sizeof(self->data.NewBankPassWord)) {
            PyErr_Format(PyExc_ValueError, "NewBankPassWord too long: length=%zd (max allowed is %zd)", ChangeAccountField_NewBankPassWord_len, (Py_ssize_t)sizeof(self->data.NewBankPassWord));
            return -1;
        }
        // memset(self->data.NewBankPassWord, 0, sizeof(self->data.NewBankPassWord));
        // memcpy(self->data.NewBankPassWord, ChangeAccountField_NewBankPassWord, ChangeAccountField_NewBankPassWord_len);        
        strncpy(self->data.NewBankPassWord, ChangeAccountField_NewBankPassWord, sizeof(self->data.NewBankPassWord) );
        ChangeAccountField_NewBankPassWord = NULL;
    }
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    if( ChangeAccountField_AccountID != NULL ) {
        if(ChangeAccountField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", ChangeAccountField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
            return -1;
        }
        // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
        // memcpy(self->data.AccountID, ChangeAccountField_AccountID, ChangeAccountField_AccountID_len);        
        strncpy(self->data.AccountID, ChangeAccountField_AccountID, sizeof(self->data.AccountID) );
        ChangeAccountField_AccountID = NULL;
    }
            
    ///期货密码
    // TThostFtdcPasswordType char[41]
    if( ChangeAccountField_Password != NULL ) {
        if(ChangeAccountField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", ChangeAccountField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
            return -1;
        }
        // memset(self->data.Password, 0, sizeof(self->data.Password));
        // memcpy(self->data.Password, ChangeAccountField_Password, ChangeAccountField_Password_len);        
        strncpy(self->data.Password, ChangeAccountField_Password, sizeof(self->data.Password) );
        ChangeAccountField_Password = NULL;
    }
            
    ///银行帐号类型
    // TThostFtdcBankAccTypeType char
    self->data.BankAccType = ChangeAccountField_BankAccType;
            
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = ChangeAccountField_InstallID;
        
    ///验证客户证件号码标志
    // TThostFtdcYesNoIndicatorType char
    self->data.VerifyCertNoFlag = ChangeAccountField_VerifyCertNoFlag;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( ChangeAccountField_CurrencyID != NULL ) {
        if(ChangeAccountField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", ChangeAccountField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, ChangeAccountField_CurrencyID, ChangeAccountField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, ChangeAccountField_CurrencyID, sizeof(self->data.CurrencyID) );
        ChangeAccountField_CurrencyID = NULL;
    }
            
    ///期货公司银行编码
    // TThostFtdcBankCodingForFutureType char[33]
    if( ChangeAccountField_BrokerIDByBank != NULL ) {
        if(ChangeAccountField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
            PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", ChangeAccountField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
            return -1;
        }
        // memset(self->data.BrokerIDByBank, 0, sizeof(self->data.BrokerIDByBank));
        // memcpy(self->data.BrokerIDByBank, ChangeAccountField_BrokerIDByBank, ChangeAccountField_BrokerIDByBank_len);        
        strncpy(self->data.BrokerIDByBank, ChangeAccountField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
        ChangeAccountField_BrokerIDByBank = NULL;
    }
            
    ///银行密码标志
    // TThostFtdcPwdFlagType char
    self->data.BankPwdFlag = ChangeAccountField_BankPwdFlag;
            
    ///期货资金密码核对标志
    // TThostFtdcPwdFlagType char
    self->data.SecuPwdFlag = ChangeAccountField_SecuPwdFlag;
            
    ///交易ID
    // TThostFtdcTIDType int
    self->data.TID = ChangeAccountField_TID;
        
    ///摘要
    // TThostFtdcDigestType char[36]
    if( ChangeAccountField_Digest != NULL ) {
        if(ChangeAccountField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
            PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", ChangeAccountField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
            return -1;
        }
        // memset(self->data.Digest, 0, sizeof(self->data.Digest));
        // memcpy(self->data.Digest, ChangeAccountField_Digest, ChangeAccountField_Digest_len);        
        strncpy(self->data.Digest, ChangeAccountField_Digest, sizeof(self->data.Digest) );
        ChangeAccountField_Digest = NULL;
    }
            
    ///错误代码
    // TThostFtdcErrorIDType int
    self->data.ErrorID = ChangeAccountField_ErrorID;
        
    ///错误信息
    // TThostFtdcErrorMsgType char[81]
    if( ChangeAccountField_ErrorMsg != NULL ) {
        if(ChangeAccountField_ErrorMsg_len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
            PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is %zd)", ChangeAccountField_ErrorMsg_len, (Py_ssize_t)sizeof(self->data.ErrorMsg));
            return -1;
        }
        // memset(self->data.ErrorMsg, 0, sizeof(self->data.ErrorMsg));
        // memcpy(self->data.ErrorMsg, ChangeAccountField_ErrorMsg, ChangeAccountField_ErrorMsg_len);        
        strncpy(self->data.ErrorMsg, ChangeAccountField_ErrorMsg, sizeof(self->data.ErrorMsg) );
        ChangeAccountField_ErrorMsg = NULL;
    }
            
    ///长客户姓名
    // TThostFtdcLongIndividualNameType char[161]
    if( ChangeAccountField_LongCustomerName != NULL ) {
        if(ChangeAccountField_LongCustomerName_len > (Py_ssize_t)sizeof(self->data.LongCustomerName)) {
            PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is %zd)", ChangeAccountField_LongCustomerName_len, (Py_ssize_t)sizeof(self->data.LongCustomerName));
            return -1;
        }
        // memset(self->data.LongCustomerName, 0, sizeof(self->data.LongCustomerName));
        // memcpy(self->data.LongCustomerName, ChangeAccountField_LongCustomerName, ChangeAccountField_LongCustomerName_len);        
        strncpy(self->data.LongCustomerName, ChangeAccountField_LongCustomerName, sizeof(self->data.LongCustomerName) );
        ChangeAccountField_LongCustomerName = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcChangeAccountField_dealloc(PyCThostFtdcChangeAccountField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcChangeAccountField_repr(PyCThostFtdcChangeAccountField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:c,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:c,s:i,s:c,s:y,s:y,s:c,s:c,s:i,s:y,s:i,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:c,s:s,s:c,s:s,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:c,s:i,s:c,s:s,s:s,s:c,s:c,s:i,s:s,s:i,s:s,s:s}"
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
        ,"CustomerName", self->data.CustomerName//, (Py_ssize_t)sizeof(self->data.CustomerName) 
        ,"IdCardType", self->data.IdCardType 
        ,"IdentifiedCardNo", self->data.IdentifiedCardNo//, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo) 
        ,"Gender", self->data.Gender 
        ,"CountryCode", self->data.CountryCode//, (Py_ssize_t)sizeof(self->data.CountryCode) 
        ,"CustType", self->data.CustType 
        ,"Address", self->data.Address//, (Py_ssize_t)sizeof(self->data.Address) 
        ,"ZipCode", self->data.ZipCode//, (Py_ssize_t)sizeof(self->data.ZipCode) 
        ,"Telephone", self->data.Telephone//, (Py_ssize_t)sizeof(self->data.Telephone) 
        ,"MobilePhone", self->data.MobilePhone//, (Py_ssize_t)sizeof(self->data.MobilePhone) 
        ,"Fax", self->data.Fax//, (Py_ssize_t)sizeof(self->data.Fax) 
        ,"EMail", self->data.EMail//, (Py_ssize_t)sizeof(self->data.EMail) 
        ,"MoneyAccountStatus", self->data.MoneyAccountStatus 
        ,"BankAccount", self->data.BankAccount//, (Py_ssize_t)sizeof(self->data.BankAccount) 
        ,"BankPassWord", self->data.BankPassWord//, (Py_ssize_t)sizeof(self->data.BankPassWord) 
        ,"NewBankAccount", self->data.NewBankAccount//, (Py_ssize_t)sizeof(self->data.NewBankAccount) 
        ,"NewBankPassWord", self->data.NewBankPassWord//, (Py_ssize_t)sizeof(self->data.NewBankPassWord) 
        ,"AccountID", self->data.AccountID//, (Py_ssize_t)sizeof(self->data.AccountID) 
        ,"Password", self->data.Password//, (Py_ssize_t)sizeof(self->data.Password) 
        ,"BankAccType", self->data.BankAccType 
        ,"InstallID", self->data.InstallID 
        ,"VerifyCertNoFlag", self->data.VerifyCertNoFlag 
        ,"CurrencyID", self->data.CurrencyID//, (Py_ssize_t)sizeof(self->data.CurrencyID) 
        ,"BrokerIDByBank", self->data.BrokerIDByBank//, (Py_ssize_t)sizeof(self->data.BrokerIDByBank) 
        ,"BankPwdFlag", self->data.BankPwdFlag 
        ,"SecuPwdFlag", self->data.SecuPwdFlag 
        ,"TID", self->data.TID 
        ,"Digest", self->data.Digest//, (Py_ssize_t)sizeof(self->data.Digest) 
        ,"ErrorID", self->data.ErrorID 
        ,"ErrorMsg", self->data.ErrorMsg//, (Py_ssize_t)sizeof(self->data.ErrorMsg) 
        ,"LongCustomerName", self->data.LongCustomerName//, (Py_ssize_t)sizeof(self->data.LongCustomerName) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcChangeAccountField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///业务功能码
// TThostFtdcTradeCodeType char[7]
static PyObject *PyCThostFtdcChangeAccountField_get_TradeCode(PyCThostFtdcChangeAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeCode, (Py_ssize_t)sizeof(self->data.TradeCode));
    return PyBytes_FromString(self->data.TradeCode);
}

///业务功能码
// TThostFtdcTradeCodeType char[7]
static int PyCThostFtdcChangeAccountField_set_TradeCode(PyCThostFtdcChangeAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcChangeAccountField_get_BankID(PyCThostFtdcChangeAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankID, (Py_ssize_t)sizeof(self->data.BankID));
    return PyBytes_FromString(self->data.BankID);
}

///银行代码
// TThostFtdcBankIDType char[4]
static int PyCThostFtdcChangeAccountField_set_BankID(PyCThostFtdcChangeAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcChangeAccountField_get_BankBranchID(PyCThostFtdcChangeAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankBranchID, (Py_ssize_t)sizeof(self->data.BankBranchID));
    return PyBytes_FromString(self->data.BankBranchID);
}

///银行分支机构代码
// TThostFtdcBankBrchIDType char[5]
static int PyCThostFtdcChangeAccountField_set_BankBranchID(PyCThostFtdcChangeAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcChangeAccountField_get_BrokerID(PyCThostFtdcChangeAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///期商代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcChangeAccountField_set_BrokerID(PyCThostFtdcChangeAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcChangeAccountField_get_BrokerBranchID(PyCThostFtdcChangeAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerBranchID, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
    return PyBytes_FromString(self->data.BrokerBranchID);
}

///期商分支机构代码
// TThostFtdcFutureBranchIDType char[31]
static int PyCThostFtdcChangeAccountField_set_BrokerBranchID(PyCThostFtdcChangeAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcChangeAccountField_get_TradeDate(PyCThostFtdcChangeAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeDate, (Py_ssize_t)sizeof(self->data.TradeDate));
    return PyBytes_FromString(self->data.TradeDate);
}

///交易日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcChangeAccountField_set_TradeDate(PyCThostFtdcChangeAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcChangeAccountField_get_TradeTime(PyCThostFtdcChangeAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeTime, (Py_ssize_t)sizeof(self->data.TradeTime));
    return PyBytes_FromString(self->data.TradeTime);
}

///交易时间
// TThostFtdcTradeTimeType char[9]
static int PyCThostFtdcChangeAccountField_set_TradeTime(PyCThostFtdcChangeAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcChangeAccountField_get_BankSerial(PyCThostFtdcChangeAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankSerial, (Py_ssize_t)sizeof(self->data.BankSerial));
    return PyBytes_FromString(self->data.BankSerial);
}

///银行流水号
// TThostFtdcBankSerialType char[13]
static int PyCThostFtdcChangeAccountField_set_BankSerial(PyCThostFtdcChangeAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcChangeAccountField_get_TradingDay(PyCThostFtdcChangeAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易系统日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcChangeAccountField_set_TradingDay(PyCThostFtdcChangeAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcChangeAccountField_get_PlateSerial(PyCThostFtdcChangeAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.PlateSerial);
#else
    return PyInt_FromLong(self->data.PlateSerial);
#endif
}

///银期平台消息流水号
// TThostFtdcSerialType int
static int PyCThostFtdcChangeAccountField_set_PlateSerial(PyCThostFtdcChangeAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcChangeAccountField_get_LastFragment(PyCThostFtdcChangeAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

///最后分片标志
// TThostFtdcLastFragmentType char
static int PyCThostFtdcChangeAccountField_set_LastFragment(PyCThostFtdcChangeAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcChangeAccountField_get_SessionID(PyCThostFtdcChangeAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话号
// TThostFtdcSessionIDType int
static int PyCThostFtdcChangeAccountField_set_SessionID(PyCThostFtdcChangeAccountField *self, PyObject* val, void *closure) {
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
        
///客户姓名
// TThostFtdcIndividualNameType char[51]
static PyObject *PyCThostFtdcChangeAccountField_get_CustomerName(PyCThostFtdcChangeAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CustomerName, (Py_ssize_t)sizeof(self->data.CustomerName));
    return PyBytes_FromString(self->data.CustomerName);
}

///客户姓名
// TThostFtdcIndividualNameType char[51]
static int PyCThostFtdcChangeAccountField_set_CustomerName(PyCThostFtdcChangeAccountField *self, PyObject* val, void *closure) {
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
            
///证件类型
// TThostFtdcIdCardTypeType char
static PyObject *PyCThostFtdcChangeAccountField_get_IdCardType(PyCThostFtdcChangeAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.IdCardType), 1);
}

///证件类型
// TThostFtdcIdCardTypeType char
static int PyCThostFtdcChangeAccountField_set_IdCardType(PyCThostFtdcChangeAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcChangeAccountField_get_IdentifiedCardNo(PyCThostFtdcChangeAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IdentifiedCardNo, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
    return PyBytes_FromString(self->data.IdentifiedCardNo);
}

///证件号码
// TThostFtdcIdentifiedCardNoType char[51]
static int PyCThostFtdcChangeAccountField_set_IdentifiedCardNo(PyCThostFtdcChangeAccountField *self, PyObject* val, void *closure) {
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
            
///性别
// TThostFtdcGenderType char
static PyObject *PyCThostFtdcChangeAccountField_get_Gender(PyCThostFtdcChangeAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.Gender), 1);
}

///性别
// TThostFtdcGenderType char
static int PyCThostFtdcChangeAccountField_set_Gender(PyCThostFtdcChangeAccountField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Gender Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Gender)) {
        PyErr_SetString(PyExc_ValueError, "Gender must be equal 1 bytes");
        return -1;
    }
    self->data.Gender = *buf;
    return 0;
}
            
///国家代码
// TThostFtdcCountryCodeType char[21]
static PyObject *PyCThostFtdcChangeAccountField_get_CountryCode(PyCThostFtdcChangeAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CountryCode, (Py_ssize_t)sizeof(self->data.CountryCode));
    return PyBytes_FromString(self->data.CountryCode);
}

///国家代码
// TThostFtdcCountryCodeType char[21]
static int PyCThostFtdcChangeAccountField_set_CountryCode(PyCThostFtdcChangeAccountField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CountryCode Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CountryCode)) {
        PyErr_SetString(PyExc_ValueError, "CountryCode must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.CountryCode, 0, sizeof(self->data.CountryCode));
    // memcpy(self->data.CountryCode, buf, len);
    strncpy(self->data.CountryCode, buf, sizeof(self->data.CountryCode));
    return 0;
}
            
///客户类型
// TThostFtdcCustTypeType char
static PyObject *PyCThostFtdcChangeAccountField_get_CustType(PyCThostFtdcChangeAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.CustType), 1);
}

///客户类型
// TThostFtdcCustTypeType char
static int PyCThostFtdcChangeAccountField_set_CustType(PyCThostFtdcChangeAccountField *self, PyObject* val, void *closure) {
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
            
///地址
// TThostFtdcAddressType char[101]
static PyObject *PyCThostFtdcChangeAccountField_get_Address(PyCThostFtdcChangeAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Address, (Py_ssize_t)sizeof(self->data.Address));
    return PyBytes_FromString(self->data.Address);
}

///地址
// TThostFtdcAddressType char[101]
static int PyCThostFtdcChangeAccountField_set_Address(PyCThostFtdcChangeAccountField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Address Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Address)) {
        PyErr_SetString(PyExc_ValueError, "Address must be less than 101 bytes");
        return -1;
    }
    // memset(self->data.Address, 0, sizeof(self->data.Address));
    // memcpy(self->data.Address, buf, len);
    strncpy(self->data.Address, buf, sizeof(self->data.Address));
    return 0;
}
            
///邮编
// TThostFtdcZipCodeType char[7]
static PyObject *PyCThostFtdcChangeAccountField_get_ZipCode(PyCThostFtdcChangeAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ZipCode, (Py_ssize_t)sizeof(self->data.ZipCode));
    return PyBytes_FromString(self->data.ZipCode);
}

///邮编
// TThostFtdcZipCodeType char[7]
static int PyCThostFtdcChangeAccountField_set_ZipCode(PyCThostFtdcChangeAccountField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ZipCode Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ZipCode)) {
        PyErr_SetString(PyExc_ValueError, "ZipCode must be less than 7 bytes");
        return -1;
    }
    // memset(self->data.ZipCode, 0, sizeof(self->data.ZipCode));
    // memcpy(self->data.ZipCode, buf, len);
    strncpy(self->data.ZipCode, buf, sizeof(self->data.ZipCode));
    return 0;
}
            
///电话号码
// TThostFtdcTelephoneType char[41]
static PyObject *PyCThostFtdcChangeAccountField_get_Telephone(PyCThostFtdcChangeAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Telephone, (Py_ssize_t)sizeof(self->data.Telephone));
    return PyBytes_FromString(self->data.Telephone);
}

///电话号码
// TThostFtdcTelephoneType char[41]
static int PyCThostFtdcChangeAccountField_set_Telephone(PyCThostFtdcChangeAccountField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Telephone Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Telephone)) {
        PyErr_SetString(PyExc_ValueError, "Telephone must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.Telephone, 0, sizeof(self->data.Telephone));
    // memcpy(self->data.Telephone, buf, len);
    strncpy(self->data.Telephone, buf, sizeof(self->data.Telephone));
    return 0;
}
            
///手机
// TThostFtdcMobilePhoneType char[21]
static PyObject *PyCThostFtdcChangeAccountField_get_MobilePhone(PyCThostFtdcChangeAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MobilePhone, (Py_ssize_t)sizeof(self->data.MobilePhone));
    return PyBytes_FromString(self->data.MobilePhone);
}

///手机
// TThostFtdcMobilePhoneType char[21]
static int PyCThostFtdcChangeAccountField_set_MobilePhone(PyCThostFtdcChangeAccountField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MobilePhone Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.MobilePhone)) {
        PyErr_SetString(PyExc_ValueError, "MobilePhone must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.MobilePhone, 0, sizeof(self->data.MobilePhone));
    // memcpy(self->data.MobilePhone, buf, len);
    strncpy(self->data.MobilePhone, buf, sizeof(self->data.MobilePhone));
    return 0;
}
            
///传真
// TThostFtdcFaxType char[41]
static PyObject *PyCThostFtdcChangeAccountField_get_Fax(PyCThostFtdcChangeAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Fax, (Py_ssize_t)sizeof(self->data.Fax));
    return PyBytes_FromString(self->data.Fax);
}

///传真
// TThostFtdcFaxType char[41]
static int PyCThostFtdcChangeAccountField_set_Fax(PyCThostFtdcChangeAccountField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Fax Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Fax)) {
        PyErr_SetString(PyExc_ValueError, "Fax must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.Fax, 0, sizeof(self->data.Fax));
    // memcpy(self->data.Fax, buf, len);
    strncpy(self->data.Fax, buf, sizeof(self->data.Fax));
    return 0;
}
            
///电子邮件
// TThostFtdcEMailType char[41]
static PyObject *PyCThostFtdcChangeAccountField_get_EMail(PyCThostFtdcChangeAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.EMail, (Py_ssize_t)sizeof(self->data.EMail));
    return PyBytes_FromString(self->data.EMail);
}

///电子邮件
// TThostFtdcEMailType char[41]
static int PyCThostFtdcChangeAccountField_set_EMail(PyCThostFtdcChangeAccountField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "EMail Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.EMail)) {
        PyErr_SetString(PyExc_ValueError, "EMail must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.EMail, 0, sizeof(self->data.EMail));
    // memcpy(self->data.EMail, buf, len);
    strncpy(self->data.EMail, buf, sizeof(self->data.EMail));
    return 0;
}
            
///资金账户状态
// TThostFtdcMoneyAccountStatusType char
static PyObject *PyCThostFtdcChangeAccountField_get_MoneyAccountStatus(PyCThostFtdcChangeAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.MoneyAccountStatus), 1);
}

///资金账户状态
// TThostFtdcMoneyAccountStatusType char
static int PyCThostFtdcChangeAccountField_set_MoneyAccountStatus(PyCThostFtdcChangeAccountField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MoneyAccountStatus Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.MoneyAccountStatus)) {
        PyErr_SetString(PyExc_ValueError, "MoneyAccountStatus must be equal 1 bytes");
        return -1;
    }
    self->data.MoneyAccountStatus = *buf;
    return 0;
}
            
///银行帐号
// TThostFtdcBankAccountType char[41]
static PyObject *PyCThostFtdcChangeAccountField_get_BankAccount(PyCThostFtdcChangeAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankAccount, (Py_ssize_t)sizeof(self->data.BankAccount));
    return PyBytes_FromString(self->data.BankAccount);
}

///银行帐号
// TThostFtdcBankAccountType char[41]
static int PyCThostFtdcChangeAccountField_set_BankAccount(PyCThostFtdcChangeAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcChangeAccountField_get_BankPassWord(PyCThostFtdcChangeAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankPassWord, (Py_ssize_t)sizeof(self->data.BankPassWord));
    return PyBytes_FromString(self->data.BankPassWord);
}

///银行密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcChangeAccountField_set_BankPassWord(PyCThostFtdcChangeAccountField *self, PyObject* val, void *closure) {
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
            
///新银行帐号
// TThostFtdcBankAccountType char[41]
static PyObject *PyCThostFtdcChangeAccountField_get_NewBankAccount(PyCThostFtdcChangeAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.NewBankAccount, (Py_ssize_t)sizeof(self->data.NewBankAccount));
    return PyBytes_FromString(self->data.NewBankAccount);
}

///新银行帐号
// TThostFtdcBankAccountType char[41]
static int PyCThostFtdcChangeAccountField_set_NewBankAccount(PyCThostFtdcChangeAccountField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "NewBankAccount Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.NewBankAccount)) {
        PyErr_SetString(PyExc_ValueError, "NewBankAccount must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.NewBankAccount, 0, sizeof(self->data.NewBankAccount));
    // memcpy(self->data.NewBankAccount, buf, len);
    strncpy(self->data.NewBankAccount, buf, sizeof(self->data.NewBankAccount));
    return 0;
}
            
///新银行密码
// TThostFtdcPasswordType char[41]
static PyObject *PyCThostFtdcChangeAccountField_get_NewBankPassWord(PyCThostFtdcChangeAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.NewBankPassWord, (Py_ssize_t)sizeof(self->data.NewBankPassWord));
    return PyBytes_FromString(self->data.NewBankPassWord);
}

///新银行密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcChangeAccountField_set_NewBankPassWord(PyCThostFtdcChangeAccountField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "NewBankPassWord Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.NewBankPassWord)) {
        PyErr_SetString(PyExc_ValueError, "NewBankPassWord must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.NewBankPassWord, 0, sizeof(self->data.NewBankPassWord));
    // memcpy(self->data.NewBankPassWord, buf, len);
    strncpy(self->data.NewBankPassWord, buf, sizeof(self->data.NewBankPassWord));
    return 0;
}
            
///投资者帐号
// TThostFtdcAccountIDType char[13]
static PyObject *PyCThostFtdcChangeAccountField_get_AccountID(PyCThostFtdcChangeAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AccountID, (Py_ssize_t)sizeof(self->data.AccountID));
    return PyBytes_FromString(self->data.AccountID);
}

///投资者帐号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcChangeAccountField_set_AccountID(PyCThostFtdcChangeAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcChangeAccountField_get_Password(PyCThostFtdcChangeAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Password, (Py_ssize_t)sizeof(self->data.Password));
    return PyBytes_FromString(self->data.Password);
}

///期货密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcChangeAccountField_set_Password(PyCThostFtdcChangeAccountField *self, PyObject* val, void *closure) {
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
            
///银行帐号类型
// TThostFtdcBankAccTypeType char
static PyObject *PyCThostFtdcChangeAccountField_get_BankAccType(PyCThostFtdcChangeAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BankAccType), 1);
}

///银行帐号类型
// TThostFtdcBankAccTypeType char
static int PyCThostFtdcChangeAccountField_set_BankAccType(PyCThostFtdcChangeAccountField *self, PyObject* val, void *closure) {
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
            
///安装编号
// TThostFtdcInstallIDType int
static PyObject *PyCThostFtdcChangeAccountField_get_InstallID(PyCThostFtdcChangeAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcChangeAccountField_set_InstallID(PyCThostFtdcChangeAccountField *self, PyObject* val, void *closure) {
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
        
///验证客户证件号码标志
// TThostFtdcYesNoIndicatorType char
static PyObject *PyCThostFtdcChangeAccountField_get_VerifyCertNoFlag(PyCThostFtdcChangeAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.VerifyCertNoFlag), 1);
}

///验证客户证件号码标志
// TThostFtdcYesNoIndicatorType char
static int PyCThostFtdcChangeAccountField_set_VerifyCertNoFlag(PyCThostFtdcChangeAccountField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "VerifyCertNoFlag Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.VerifyCertNoFlag)) {
        PyErr_SetString(PyExc_ValueError, "VerifyCertNoFlag must be equal 1 bytes");
        return -1;
    }
    self->data.VerifyCertNoFlag = *buf;
    return 0;
}
            
///币种代码
// TThostFtdcCurrencyIDType char[4]
static PyObject *PyCThostFtdcChangeAccountField_get_CurrencyID(PyCThostFtdcChangeAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcChangeAccountField_set_CurrencyID(PyCThostFtdcChangeAccountField *self, PyObject* val, void *closure) {
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
            
///期货公司银行编码
// TThostFtdcBankCodingForFutureType char[33]
static PyObject *PyCThostFtdcChangeAccountField_get_BrokerIDByBank(PyCThostFtdcChangeAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerIDByBank, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
    return PyBytes_FromString(self->data.BrokerIDByBank);
}

///期货公司银行编码
// TThostFtdcBankCodingForFutureType char[33]
static int PyCThostFtdcChangeAccountField_set_BrokerIDByBank(PyCThostFtdcChangeAccountField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BrokerIDByBank Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
        PyErr_SetString(PyExc_ValueError, "BrokerIDByBank must be less than 33 bytes");
        return -1;
    }
    // memset(self->data.BrokerIDByBank, 0, sizeof(self->data.BrokerIDByBank));
    // memcpy(self->data.BrokerIDByBank, buf, len);
    strncpy(self->data.BrokerIDByBank, buf, sizeof(self->data.BrokerIDByBank));
    return 0;
}
            
///银行密码标志
// TThostFtdcPwdFlagType char
static PyObject *PyCThostFtdcChangeAccountField_get_BankPwdFlag(PyCThostFtdcChangeAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BankPwdFlag), 1);
}

///银行密码标志
// TThostFtdcPwdFlagType char
static int PyCThostFtdcChangeAccountField_set_BankPwdFlag(PyCThostFtdcChangeAccountField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BankPwdFlag Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BankPwdFlag)) {
        PyErr_SetString(PyExc_ValueError, "BankPwdFlag must be equal 1 bytes");
        return -1;
    }
    self->data.BankPwdFlag = *buf;
    return 0;
}
            
///期货资金密码核对标志
// TThostFtdcPwdFlagType char
static PyObject *PyCThostFtdcChangeAccountField_get_SecuPwdFlag(PyCThostFtdcChangeAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.SecuPwdFlag), 1);
}

///期货资金密码核对标志
// TThostFtdcPwdFlagType char
static int PyCThostFtdcChangeAccountField_set_SecuPwdFlag(PyCThostFtdcChangeAccountField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SecuPwdFlag Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.SecuPwdFlag)) {
        PyErr_SetString(PyExc_ValueError, "SecuPwdFlag must be equal 1 bytes");
        return -1;
    }
    self->data.SecuPwdFlag = *buf;
    return 0;
}
            
///交易ID
// TThostFtdcTIDType int
static PyObject *PyCThostFtdcChangeAccountField_get_TID(PyCThostFtdcChangeAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.TID);
#else
    return PyInt_FromLong(self->data.TID);
#endif
}

///交易ID
// TThostFtdcTIDType int
static int PyCThostFtdcChangeAccountField_set_TID(PyCThostFtdcChangeAccountField *self, PyObject* val, void *closure) {
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
        
///摘要
// TThostFtdcDigestType char[36]
static PyObject *PyCThostFtdcChangeAccountField_get_Digest(PyCThostFtdcChangeAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Digest, (Py_ssize_t)sizeof(self->data.Digest));
    return PyBytes_FromString(self->data.Digest);
}

///摘要
// TThostFtdcDigestType char[36]
static int PyCThostFtdcChangeAccountField_set_Digest(PyCThostFtdcChangeAccountField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Digest Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Digest)) {
        PyErr_SetString(PyExc_ValueError, "Digest must be less than 36 bytes");
        return -1;
    }
    // memset(self->data.Digest, 0, sizeof(self->data.Digest));
    // memcpy(self->data.Digest, buf, len);
    strncpy(self->data.Digest, buf, sizeof(self->data.Digest));
    return 0;
}
            
///错误代码
// TThostFtdcErrorIDType int
static PyObject *PyCThostFtdcChangeAccountField_get_ErrorID(PyCThostFtdcChangeAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.ErrorID);
#else
    return PyInt_FromLong(self->data.ErrorID);
#endif
}

///错误代码
// TThostFtdcErrorIDType int
static int PyCThostFtdcChangeAccountField_set_ErrorID(PyCThostFtdcChangeAccountField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ErrorID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ErrorID Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the ErrorID value out of range for C int");
        return -1;
    }
    self->data.ErrorID = (int)buf;
    return 0;
}
        
///错误信息
// TThostFtdcErrorMsgType char[81]
static PyObject *PyCThostFtdcChangeAccountField_get_ErrorMsg(PyCThostFtdcChangeAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ErrorMsg, (Py_ssize_t)sizeof(self->data.ErrorMsg));
    return PyBytes_FromString(self->data.ErrorMsg);
}

///错误信息
// TThostFtdcErrorMsgType char[81]
static int PyCThostFtdcChangeAccountField_set_ErrorMsg(PyCThostFtdcChangeAccountField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ErrorMsg Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
        PyErr_SetString(PyExc_ValueError, "ErrorMsg must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.ErrorMsg, 0, sizeof(self->data.ErrorMsg));
    // memcpy(self->data.ErrorMsg, buf, len);
    strncpy(self->data.ErrorMsg, buf, sizeof(self->data.ErrorMsg));
    return 0;
}
            
///长客户姓名
// TThostFtdcLongIndividualNameType char[161]
static PyObject *PyCThostFtdcChangeAccountField_get_LongCustomerName(PyCThostFtdcChangeAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.LongCustomerName, (Py_ssize_t)sizeof(self->data.LongCustomerName));
    return PyBytes_FromString(self->data.LongCustomerName);
}

///长客户姓名
// TThostFtdcLongIndividualNameType char[161]
static int PyCThostFtdcChangeAccountField_set_LongCustomerName(PyCThostFtdcChangeAccountField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcChangeAccountField_getset[] = {
    ///业务功能码 
    {(char *)"TradeCode", (getter)PyCThostFtdcChangeAccountField_get_TradeCode, (setter)PyCThostFtdcChangeAccountField_set_TradeCode, (char *)"TradeCode", NULL},
    ///银行代码 
    {(char *)"BankID", (getter)PyCThostFtdcChangeAccountField_get_BankID, (setter)PyCThostFtdcChangeAccountField_set_BankID, (char *)"BankID", NULL},
    ///银行分支机构代码 
    {(char *)"BankBranchID", (getter)PyCThostFtdcChangeAccountField_get_BankBranchID, (setter)PyCThostFtdcChangeAccountField_set_BankBranchID, (char *)"BankBranchID", NULL},
    ///期商代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcChangeAccountField_get_BrokerID, (setter)PyCThostFtdcChangeAccountField_set_BrokerID, (char *)"BrokerID", NULL},
    ///期商分支机构代码 
    {(char *)"BrokerBranchID", (getter)PyCThostFtdcChangeAccountField_get_BrokerBranchID, (setter)PyCThostFtdcChangeAccountField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
    ///交易日期 
    {(char *)"TradeDate", (getter)PyCThostFtdcChangeAccountField_get_TradeDate, (setter)PyCThostFtdcChangeAccountField_set_TradeDate, (char *)"TradeDate", NULL},
    ///交易时间 
    {(char *)"TradeTime", (getter)PyCThostFtdcChangeAccountField_get_TradeTime, (setter)PyCThostFtdcChangeAccountField_set_TradeTime, (char *)"TradeTime", NULL},
    ///银行流水号 
    {(char *)"BankSerial", (getter)PyCThostFtdcChangeAccountField_get_BankSerial, (setter)PyCThostFtdcChangeAccountField_set_BankSerial, (char *)"BankSerial", NULL},
    ///交易系统日期 
    {(char *)"TradingDay", (getter)PyCThostFtdcChangeAccountField_get_TradingDay, (setter)PyCThostFtdcChangeAccountField_set_TradingDay, (char *)"TradingDay", NULL},
    ///银期平台消息流水号 
    {(char *)"PlateSerial", (getter)PyCThostFtdcChangeAccountField_get_PlateSerial, (setter)PyCThostFtdcChangeAccountField_set_PlateSerial, (char *)"PlateSerial", NULL},
    ///最后分片标志 
    {(char *)"LastFragment", (getter)PyCThostFtdcChangeAccountField_get_LastFragment, (setter)PyCThostFtdcChangeAccountField_set_LastFragment, (char *)"LastFragment", NULL},
    ///会话号 
    {(char *)"SessionID", (getter)PyCThostFtdcChangeAccountField_get_SessionID, (setter)PyCThostFtdcChangeAccountField_set_SessionID, (char *)"SessionID", NULL},
    ///客户姓名 
    {(char *)"CustomerName", (getter)PyCThostFtdcChangeAccountField_get_CustomerName, (setter)PyCThostFtdcChangeAccountField_set_CustomerName, (char *)"CustomerName", NULL},
    ///证件类型 
    {(char *)"IdCardType", (getter)PyCThostFtdcChangeAccountField_get_IdCardType, (setter)PyCThostFtdcChangeAccountField_set_IdCardType, (char *)"IdCardType", NULL},
    ///证件号码 
    {(char *)"IdentifiedCardNo", (getter)PyCThostFtdcChangeAccountField_get_IdentifiedCardNo, (setter)PyCThostFtdcChangeAccountField_set_IdentifiedCardNo, (char *)"IdentifiedCardNo", NULL},
    ///性别 
    {(char *)"Gender", (getter)PyCThostFtdcChangeAccountField_get_Gender, (setter)PyCThostFtdcChangeAccountField_set_Gender, (char *)"Gender", NULL},
    ///国家代码 
    {(char *)"CountryCode", (getter)PyCThostFtdcChangeAccountField_get_CountryCode, (setter)PyCThostFtdcChangeAccountField_set_CountryCode, (char *)"CountryCode", NULL},
    ///客户类型 
    {(char *)"CustType", (getter)PyCThostFtdcChangeAccountField_get_CustType, (setter)PyCThostFtdcChangeAccountField_set_CustType, (char *)"CustType", NULL},
    ///地址 
    {(char *)"Address", (getter)PyCThostFtdcChangeAccountField_get_Address, (setter)PyCThostFtdcChangeAccountField_set_Address, (char *)"Address", NULL},
    ///邮编 
    {(char *)"ZipCode", (getter)PyCThostFtdcChangeAccountField_get_ZipCode, (setter)PyCThostFtdcChangeAccountField_set_ZipCode, (char *)"ZipCode", NULL},
    ///电话号码 
    {(char *)"Telephone", (getter)PyCThostFtdcChangeAccountField_get_Telephone, (setter)PyCThostFtdcChangeAccountField_set_Telephone, (char *)"Telephone", NULL},
    ///手机 
    {(char *)"MobilePhone", (getter)PyCThostFtdcChangeAccountField_get_MobilePhone, (setter)PyCThostFtdcChangeAccountField_set_MobilePhone, (char *)"MobilePhone", NULL},
    ///传真 
    {(char *)"Fax", (getter)PyCThostFtdcChangeAccountField_get_Fax, (setter)PyCThostFtdcChangeAccountField_set_Fax, (char *)"Fax", NULL},
    ///电子邮件 
    {(char *)"EMail", (getter)PyCThostFtdcChangeAccountField_get_EMail, (setter)PyCThostFtdcChangeAccountField_set_EMail, (char *)"EMail", NULL},
    ///资金账户状态 
    {(char *)"MoneyAccountStatus", (getter)PyCThostFtdcChangeAccountField_get_MoneyAccountStatus, (setter)PyCThostFtdcChangeAccountField_set_MoneyAccountStatus, (char *)"MoneyAccountStatus", NULL},
    ///银行帐号 
    {(char *)"BankAccount", (getter)PyCThostFtdcChangeAccountField_get_BankAccount, (setter)PyCThostFtdcChangeAccountField_set_BankAccount, (char *)"BankAccount", NULL},
    ///银行密码 
    {(char *)"BankPassWord", (getter)PyCThostFtdcChangeAccountField_get_BankPassWord, (setter)PyCThostFtdcChangeAccountField_set_BankPassWord, (char *)"BankPassWord", NULL},
    ///新银行帐号 
    {(char *)"NewBankAccount", (getter)PyCThostFtdcChangeAccountField_get_NewBankAccount, (setter)PyCThostFtdcChangeAccountField_set_NewBankAccount, (char *)"NewBankAccount", NULL},
    ///新银行密码 
    {(char *)"NewBankPassWord", (getter)PyCThostFtdcChangeAccountField_get_NewBankPassWord, (setter)PyCThostFtdcChangeAccountField_set_NewBankPassWord, (char *)"NewBankPassWord", NULL},
    ///投资者帐号 
    {(char *)"AccountID", (getter)PyCThostFtdcChangeAccountField_get_AccountID, (setter)PyCThostFtdcChangeAccountField_set_AccountID, (char *)"AccountID", NULL},
    ///期货密码 
    {(char *)"Password", (getter)PyCThostFtdcChangeAccountField_get_Password, (setter)PyCThostFtdcChangeAccountField_set_Password, (char *)"Password", NULL},
    ///银行帐号类型 
    {(char *)"BankAccType", (getter)PyCThostFtdcChangeAccountField_get_BankAccType, (setter)PyCThostFtdcChangeAccountField_set_BankAccType, (char *)"BankAccType", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcChangeAccountField_get_InstallID, (setter)PyCThostFtdcChangeAccountField_set_InstallID, (char *)"InstallID", NULL},
    ///验证客户证件号码标志 
    {(char *)"VerifyCertNoFlag", (getter)PyCThostFtdcChangeAccountField_get_VerifyCertNoFlag, (setter)PyCThostFtdcChangeAccountField_set_VerifyCertNoFlag, (char *)"VerifyCertNoFlag", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcChangeAccountField_get_CurrencyID, (setter)PyCThostFtdcChangeAccountField_set_CurrencyID, (char *)"CurrencyID", NULL},
    ///期货公司银行编码 
    {(char *)"BrokerIDByBank", (getter)PyCThostFtdcChangeAccountField_get_BrokerIDByBank, (setter)PyCThostFtdcChangeAccountField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
    ///银行密码标志 
    {(char *)"BankPwdFlag", (getter)PyCThostFtdcChangeAccountField_get_BankPwdFlag, (setter)PyCThostFtdcChangeAccountField_set_BankPwdFlag, (char *)"BankPwdFlag", NULL},
    ///期货资金密码核对标志 
    {(char *)"SecuPwdFlag", (getter)PyCThostFtdcChangeAccountField_get_SecuPwdFlag, (setter)PyCThostFtdcChangeAccountField_set_SecuPwdFlag, (char *)"SecuPwdFlag", NULL},
    ///交易ID 
    {(char *)"TID", (getter)PyCThostFtdcChangeAccountField_get_TID, (setter)PyCThostFtdcChangeAccountField_set_TID, (char *)"TID", NULL},
    ///摘要 
    {(char *)"Digest", (getter)PyCThostFtdcChangeAccountField_get_Digest, (setter)PyCThostFtdcChangeAccountField_set_Digest, (char *)"Digest", NULL},
    ///错误代码 
    {(char *)"ErrorID", (getter)PyCThostFtdcChangeAccountField_get_ErrorID, (setter)PyCThostFtdcChangeAccountField_set_ErrorID, (char *)"ErrorID", NULL},
    ///错误信息 
    {(char *)"ErrorMsg", (getter)PyCThostFtdcChangeAccountField_get_ErrorMsg, (setter)PyCThostFtdcChangeAccountField_set_ErrorMsg, (char *)"ErrorMsg", NULL},
    ///长客户姓名 
    {(char *)"LongCustomerName", (getter)PyCThostFtdcChangeAccountField_get_LongCustomerName, (setter)PyCThostFtdcChangeAccountField_set_LongCustomerName, (char *)"LongCustomerName", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcChangeAccountFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcChangeAccountField",	/* tp_name */
	sizeof(PyCThostFtdcChangeAccountField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcChangeAccountField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcChangeAccountField_repr,   /* tp_repr */
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
	"CThostFtdcChangeAccountField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcChangeAccountField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcChangeAccountField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcChangeAccountField_new,       /* tp_new */
};

int PyCThostFtdcChangeAccountFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcChangeAccountField  */
	if (PyType_Ready(&PyCThostFtdcChangeAccountFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcChangeAccountField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcChangeAccountFieldType);
    if( PyModule_AddObject(module, "CThostFtdcChangeAccountField", (PyObject *)&PyCThostFtdcChangeAccountFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcChangeAccountField to module");
        Py_DECREF(&PyCThostFtdcChangeAccountFieldType);
		return -1;
    }

    return 0;
}
