
#include "PyCThostFtdcReqOpenAccountField.h"

///转帐开户请求

static PyObject *PyCThostFtdcReqOpenAccountField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcReqOpenAccountField *self = (PyCThostFtdcReqOpenAccountField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcReqOpenAccountField_init(PyCThostFtdcReqOpenAccountField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "Gender", "CountryCode", "CustType", "Address", "ZipCode", "Telephone", "MobilePhone", "Fax", "EMail", "MoneyAccountStatus", "BankAccount", "BankPassWord", "AccountID", "Password", "InstallID", "VerifyCertNoFlag", "CurrencyID", "CashExchangeCode", "Digest", "BankAccType", "DeviceID", "BankSecuAccType", "BrokerIDByBank", "BankSecuAcc", "BankPwdFlag", "SecuPwdFlag", "OperNo", "TID", "UserID", "LongCustomerName",  NULL};


    ///业务功能码
    // TThostFtdcTradeCodeType char[7]
    const char *ReqOpenAccountField_TradeCode = NULL;
    Py_ssize_t ReqOpenAccountField_TradeCode_len = 0;
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    const char *ReqOpenAccountField_BankID = NULL;
    Py_ssize_t ReqOpenAccountField_BankID_len = 0;
            
    ///银行分支机构代码
    // TThostFtdcBankBrchIDType char[5]
    const char *ReqOpenAccountField_BankBranchID = NULL;
    Py_ssize_t ReqOpenAccountField_BankBranchID_len = 0;
            
    ///期商代码
    // TThostFtdcBrokerIDType char[11]
    const char *ReqOpenAccountField_BrokerID = NULL;
    Py_ssize_t ReqOpenAccountField_BrokerID_len = 0;
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    const char *ReqOpenAccountField_BrokerBranchID = NULL;
    Py_ssize_t ReqOpenAccountField_BrokerBranchID_len = 0;
            
    ///交易日期
    // TThostFtdcTradeDateType char[9]
    const char *ReqOpenAccountField_TradeDate = NULL;
    Py_ssize_t ReqOpenAccountField_TradeDate_len = 0;
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    const char *ReqOpenAccountField_TradeTime = NULL;
    Py_ssize_t ReqOpenAccountField_TradeTime_len = 0;
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    const char *ReqOpenAccountField_BankSerial = NULL;
    Py_ssize_t ReqOpenAccountField_BankSerial_len = 0;
            
    ///交易系统日期
    // TThostFtdcTradeDateType char[9]
    const char *ReqOpenAccountField_TradingDay = NULL;
    Py_ssize_t ReqOpenAccountField_TradingDay_len = 0;
            
    ///银期平台消息流水号
    // TThostFtdcSerialType int
    int ReqOpenAccountField_PlateSerial = 0;
        
    ///最后分片标志
    // TThostFtdcLastFragmentType char
    char ReqOpenAccountField_LastFragment = 0;
            
    ///会话号
    // TThostFtdcSessionIDType int
    int ReqOpenAccountField_SessionID = 0;
        
    ///客户姓名
    // TThostFtdcIndividualNameType char[51]
    const char *ReqOpenAccountField_CustomerName = NULL;
    Py_ssize_t ReqOpenAccountField_CustomerName_len = 0;
            
    ///证件类型
    // TThostFtdcIdCardTypeType char
    char ReqOpenAccountField_IdCardType = 0;
            
    ///证件号码
    // TThostFtdcIdentifiedCardNoType char[51]
    const char *ReqOpenAccountField_IdentifiedCardNo = NULL;
    Py_ssize_t ReqOpenAccountField_IdentifiedCardNo_len = 0;
            
    ///性别
    // TThostFtdcGenderType char
    char ReqOpenAccountField_Gender = 0;
            
    ///国家代码
    // TThostFtdcCountryCodeType char[21]
    const char *ReqOpenAccountField_CountryCode = NULL;
    Py_ssize_t ReqOpenAccountField_CountryCode_len = 0;
            
    ///客户类型
    // TThostFtdcCustTypeType char
    char ReqOpenAccountField_CustType = 0;
            
    ///地址
    // TThostFtdcAddressType char[101]
    const char *ReqOpenAccountField_Address = NULL;
    Py_ssize_t ReqOpenAccountField_Address_len = 0;
            
    ///邮编
    // TThostFtdcZipCodeType char[7]
    const char *ReqOpenAccountField_ZipCode = NULL;
    Py_ssize_t ReqOpenAccountField_ZipCode_len = 0;
            
    ///电话号码
    // TThostFtdcTelephoneType char[41]
    const char *ReqOpenAccountField_Telephone = NULL;
    Py_ssize_t ReqOpenAccountField_Telephone_len = 0;
            
    ///手机
    // TThostFtdcMobilePhoneType char[21]
    const char *ReqOpenAccountField_MobilePhone = NULL;
    Py_ssize_t ReqOpenAccountField_MobilePhone_len = 0;
            
    ///传真
    // TThostFtdcFaxType char[41]
    const char *ReqOpenAccountField_Fax = NULL;
    Py_ssize_t ReqOpenAccountField_Fax_len = 0;
            
    ///电子邮件
    // TThostFtdcEMailType char[41]
    const char *ReqOpenAccountField_EMail = NULL;
    Py_ssize_t ReqOpenAccountField_EMail_len = 0;
            
    ///资金账户状态
    // TThostFtdcMoneyAccountStatusType char
    char ReqOpenAccountField_MoneyAccountStatus = 0;
            
    ///银行帐号
    // TThostFtdcBankAccountType char[41]
    const char *ReqOpenAccountField_BankAccount = NULL;
    Py_ssize_t ReqOpenAccountField_BankAccount_len = 0;
            
    ///银行密码
    // TThostFtdcPasswordType char[41]
    const char *ReqOpenAccountField_BankPassWord = NULL;
    Py_ssize_t ReqOpenAccountField_BankPassWord_len = 0;
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    const char *ReqOpenAccountField_AccountID = NULL;
    Py_ssize_t ReqOpenAccountField_AccountID_len = 0;
            
    ///期货密码
    // TThostFtdcPasswordType char[41]
    const char *ReqOpenAccountField_Password = NULL;
    Py_ssize_t ReqOpenAccountField_Password_len = 0;
            
    ///安装编号
    // TThostFtdcInstallIDType int
    int ReqOpenAccountField_InstallID = 0;
        
    ///验证客户证件号码标志
    // TThostFtdcYesNoIndicatorType char
    char ReqOpenAccountField_VerifyCertNoFlag = 0;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *ReqOpenAccountField_CurrencyID = NULL;
    Py_ssize_t ReqOpenAccountField_CurrencyID_len = 0;
            
    ///汇钞标志
    // TThostFtdcCashExchangeCodeType char
    char ReqOpenAccountField_CashExchangeCode = 0;
            
    ///摘要
    // TThostFtdcDigestType char[36]
    const char *ReqOpenAccountField_Digest = NULL;
    Py_ssize_t ReqOpenAccountField_Digest_len = 0;
            
    ///银行帐号类型
    // TThostFtdcBankAccTypeType char
    char ReqOpenAccountField_BankAccType = 0;
            
    ///渠道标志
    // TThostFtdcDeviceIDType char[3]
    const char *ReqOpenAccountField_DeviceID = NULL;
    Py_ssize_t ReqOpenAccountField_DeviceID_len = 0;
            
    ///期货单位帐号类型
    // TThostFtdcBankAccTypeType char
    char ReqOpenAccountField_BankSecuAccType = 0;
            
    ///期货公司银行编码
    // TThostFtdcBankCodingForFutureType char[33]
    const char *ReqOpenAccountField_BrokerIDByBank = NULL;
    Py_ssize_t ReqOpenAccountField_BrokerIDByBank_len = 0;
            
    ///期货单位帐号
    // TThostFtdcBankAccountType char[41]
    const char *ReqOpenAccountField_BankSecuAcc = NULL;
    Py_ssize_t ReqOpenAccountField_BankSecuAcc_len = 0;
            
    ///银行密码标志
    // TThostFtdcPwdFlagType char
    char ReqOpenAccountField_BankPwdFlag = 0;
            
    ///期货资金密码核对标志
    // TThostFtdcPwdFlagType char
    char ReqOpenAccountField_SecuPwdFlag = 0;
            
    ///交易柜员
    // TThostFtdcOperNoType char[17]
    const char *ReqOpenAccountField_OperNo = NULL;
    Py_ssize_t ReqOpenAccountField_OperNo_len = 0;
            
    ///交易ID
    // TThostFtdcTIDType int
    int ReqOpenAccountField_TID = 0;
        
    ///用户标识
    // TThostFtdcUserIDType char[16]
    const char *ReqOpenAccountField_UserID = NULL;
    Py_ssize_t ReqOpenAccountField_UserID_len = 0;
            
    ///长客户姓名
    // TThostFtdcLongIndividualNameType char[161]
    const char *ReqOpenAccountField_LongCustomerName = NULL;
    Py_ssize_t ReqOpenAccountField_LongCustomerName_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciy#cy#cy#cy#y#y#y#y#y#cy#y#y#y#icy#cy#cy#cy#y#ccy#iy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#icis#cs#cs#cs#s#s#s#s#s#cs#s#s#s#ics#cs#cs#cs#s#ccs#is#s#", (char **)kwlist
#endif

        , &ReqOpenAccountField_TradeCode, &ReqOpenAccountField_TradeCode_len 
        , &ReqOpenAccountField_BankID, &ReqOpenAccountField_BankID_len 
        , &ReqOpenAccountField_BankBranchID, &ReqOpenAccountField_BankBranchID_len 
        , &ReqOpenAccountField_BrokerID, &ReqOpenAccountField_BrokerID_len 
        , &ReqOpenAccountField_BrokerBranchID, &ReqOpenAccountField_BrokerBranchID_len 
        , &ReqOpenAccountField_TradeDate, &ReqOpenAccountField_TradeDate_len 
        , &ReqOpenAccountField_TradeTime, &ReqOpenAccountField_TradeTime_len 
        , &ReqOpenAccountField_BankSerial, &ReqOpenAccountField_BankSerial_len 
        , &ReqOpenAccountField_TradingDay, &ReqOpenAccountField_TradingDay_len 
        , &ReqOpenAccountField_PlateSerial 
        , &ReqOpenAccountField_LastFragment 
        , &ReqOpenAccountField_SessionID 
        , &ReqOpenAccountField_CustomerName, &ReqOpenAccountField_CustomerName_len 
        , &ReqOpenAccountField_IdCardType 
        , &ReqOpenAccountField_IdentifiedCardNo, &ReqOpenAccountField_IdentifiedCardNo_len 
        , &ReqOpenAccountField_Gender 
        , &ReqOpenAccountField_CountryCode, &ReqOpenAccountField_CountryCode_len 
        , &ReqOpenAccountField_CustType 
        , &ReqOpenAccountField_Address, &ReqOpenAccountField_Address_len 
        , &ReqOpenAccountField_ZipCode, &ReqOpenAccountField_ZipCode_len 
        , &ReqOpenAccountField_Telephone, &ReqOpenAccountField_Telephone_len 
        , &ReqOpenAccountField_MobilePhone, &ReqOpenAccountField_MobilePhone_len 
        , &ReqOpenAccountField_Fax, &ReqOpenAccountField_Fax_len 
        , &ReqOpenAccountField_EMail, &ReqOpenAccountField_EMail_len 
        , &ReqOpenAccountField_MoneyAccountStatus 
        , &ReqOpenAccountField_BankAccount, &ReqOpenAccountField_BankAccount_len 
        , &ReqOpenAccountField_BankPassWord, &ReqOpenAccountField_BankPassWord_len 
        , &ReqOpenAccountField_AccountID, &ReqOpenAccountField_AccountID_len 
        , &ReqOpenAccountField_Password, &ReqOpenAccountField_Password_len 
        , &ReqOpenAccountField_InstallID 
        , &ReqOpenAccountField_VerifyCertNoFlag 
        , &ReqOpenAccountField_CurrencyID, &ReqOpenAccountField_CurrencyID_len 
        , &ReqOpenAccountField_CashExchangeCode 
        , &ReqOpenAccountField_Digest, &ReqOpenAccountField_Digest_len 
        , &ReqOpenAccountField_BankAccType 
        , &ReqOpenAccountField_DeviceID, &ReqOpenAccountField_DeviceID_len 
        , &ReqOpenAccountField_BankSecuAccType 
        , &ReqOpenAccountField_BrokerIDByBank, &ReqOpenAccountField_BrokerIDByBank_len 
        , &ReqOpenAccountField_BankSecuAcc, &ReqOpenAccountField_BankSecuAcc_len 
        , &ReqOpenAccountField_BankPwdFlag 
        , &ReqOpenAccountField_SecuPwdFlag 
        , &ReqOpenAccountField_OperNo, &ReqOpenAccountField_OperNo_len 
        , &ReqOpenAccountField_TID 
        , &ReqOpenAccountField_UserID, &ReqOpenAccountField_UserID_len 
        , &ReqOpenAccountField_LongCustomerName, &ReqOpenAccountField_LongCustomerName_len 


    )) {
        return -1;
    }


    ///业务功能码
    // TThostFtdcTradeCodeType char[7]
    if( ReqOpenAccountField_TradeCode != NULL ) {
        if(ReqOpenAccountField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", ReqOpenAccountField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
            return -1;
        }
        // memset(self->data.TradeCode, 0, sizeof(self->data.TradeCode));
        // memcpy(self->data.TradeCode, ReqOpenAccountField_TradeCode, ReqOpenAccountField_TradeCode_len);        
        strncpy(self->data.TradeCode, ReqOpenAccountField_TradeCode, sizeof(self->data.TradeCode) );
        ReqOpenAccountField_TradeCode = NULL;
    }
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    if( ReqOpenAccountField_BankID != NULL ) {
        if(ReqOpenAccountField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", ReqOpenAccountField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
            return -1;
        }
        // memset(self->data.BankID, 0, sizeof(self->data.BankID));
        // memcpy(self->data.BankID, ReqOpenAccountField_BankID, ReqOpenAccountField_BankID_len);        
        strncpy(self->data.BankID, ReqOpenAccountField_BankID, sizeof(self->data.BankID) );
        ReqOpenAccountField_BankID = NULL;
    }
            
    ///银行分支机构代码
    // TThostFtdcBankBrchIDType char[5]
    if( ReqOpenAccountField_BankBranchID != NULL ) {
        if(ReqOpenAccountField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", ReqOpenAccountField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
            return -1;
        }
        // memset(self->data.BankBranchID, 0, sizeof(self->data.BankBranchID));
        // memcpy(self->data.BankBranchID, ReqOpenAccountField_BankBranchID, ReqOpenAccountField_BankBranchID_len);        
        strncpy(self->data.BankBranchID, ReqOpenAccountField_BankBranchID, sizeof(self->data.BankBranchID) );
        ReqOpenAccountField_BankBranchID = NULL;
    }
            
    ///期商代码
    // TThostFtdcBrokerIDType char[11]
    if( ReqOpenAccountField_BrokerID != NULL ) {
        if(ReqOpenAccountField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", ReqOpenAccountField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, ReqOpenAccountField_BrokerID, ReqOpenAccountField_BrokerID_len);        
        strncpy(self->data.BrokerID, ReqOpenAccountField_BrokerID, sizeof(self->data.BrokerID) );
        ReqOpenAccountField_BrokerID = NULL;
    }
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    if( ReqOpenAccountField_BrokerBranchID != NULL ) {
        if(ReqOpenAccountField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", ReqOpenAccountField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
            return -1;
        }
        // memset(self->data.BrokerBranchID, 0, sizeof(self->data.BrokerBranchID));
        // memcpy(self->data.BrokerBranchID, ReqOpenAccountField_BrokerBranchID, ReqOpenAccountField_BrokerBranchID_len);        
        strncpy(self->data.BrokerBranchID, ReqOpenAccountField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
        ReqOpenAccountField_BrokerBranchID = NULL;
    }
            
    ///交易日期
    // TThostFtdcTradeDateType char[9]
    if( ReqOpenAccountField_TradeDate != NULL ) {
        if(ReqOpenAccountField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", ReqOpenAccountField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
            return -1;
        }
        // memset(self->data.TradeDate, 0, sizeof(self->data.TradeDate));
        // memcpy(self->data.TradeDate, ReqOpenAccountField_TradeDate, ReqOpenAccountField_TradeDate_len);        
        strncpy(self->data.TradeDate, ReqOpenAccountField_TradeDate, sizeof(self->data.TradeDate) );
        ReqOpenAccountField_TradeDate = NULL;
    }
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    if( ReqOpenAccountField_TradeTime != NULL ) {
        if(ReqOpenAccountField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", ReqOpenAccountField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
            return -1;
        }
        // memset(self->data.TradeTime, 0, sizeof(self->data.TradeTime));
        // memcpy(self->data.TradeTime, ReqOpenAccountField_TradeTime, ReqOpenAccountField_TradeTime_len);        
        strncpy(self->data.TradeTime, ReqOpenAccountField_TradeTime, sizeof(self->data.TradeTime) );
        ReqOpenAccountField_TradeTime = NULL;
    }
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    if( ReqOpenAccountField_BankSerial != NULL ) {
        if(ReqOpenAccountField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", ReqOpenAccountField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
            return -1;
        }
        // memset(self->data.BankSerial, 0, sizeof(self->data.BankSerial));
        // memcpy(self->data.BankSerial, ReqOpenAccountField_BankSerial, ReqOpenAccountField_BankSerial_len);        
        strncpy(self->data.BankSerial, ReqOpenAccountField_BankSerial, sizeof(self->data.BankSerial) );
        ReqOpenAccountField_BankSerial = NULL;
    }
            
    ///交易系统日期
    // TThostFtdcTradeDateType char[9]
    if( ReqOpenAccountField_TradingDay != NULL ) {
        if(ReqOpenAccountField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", ReqOpenAccountField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, ReqOpenAccountField_TradingDay, ReqOpenAccountField_TradingDay_len);        
        strncpy(self->data.TradingDay, ReqOpenAccountField_TradingDay, sizeof(self->data.TradingDay) );
        ReqOpenAccountField_TradingDay = NULL;
    }
            
    ///银期平台消息流水号
    // TThostFtdcSerialType int
    self->data.PlateSerial = ReqOpenAccountField_PlateSerial;
        
    ///最后分片标志
    // TThostFtdcLastFragmentType char
    self->data.LastFragment = ReqOpenAccountField_LastFragment;
            
    ///会话号
    // TThostFtdcSessionIDType int
    self->data.SessionID = ReqOpenAccountField_SessionID;
        
    ///客户姓名
    // TThostFtdcIndividualNameType char[51]
    if( ReqOpenAccountField_CustomerName != NULL ) {
        if(ReqOpenAccountField_CustomerName_len > (Py_ssize_t)sizeof(self->data.CustomerName)) {
            PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is %zd)", ReqOpenAccountField_CustomerName_len, (Py_ssize_t)sizeof(self->data.CustomerName));
            return -1;
        }
        // memset(self->data.CustomerName, 0, sizeof(self->data.CustomerName));
        // memcpy(self->data.CustomerName, ReqOpenAccountField_CustomerName, ReqOpenAccountField_CustomerName_len);        
        strncpy(self->data.CustomerName, ReqOpenAccountField_CustomerName, sizeof(self->data.CustomerName) );
        ReqOpenAccountField_CustomerName = NULL;
    }
            
    ///证件类型
    // TThostFtdcIdCardTypeType char
    self->data.IdCardType = ReqOpenAccountField_IdCardType;
            
    ///证件号码
    // TThostFtdcIdentifiedCardNoType char[51]
    if( ReqOpenAccountField_IdentifiedCardNo != NULL ) {
        if(ReqOpenAccountField_IdentifiedCardNo_len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
            PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is %zd)", ReqOpenAccountField_IdentifiedCardNo_len, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
            return -1;
        }
        // memset(self->data.IdentifiedCardNo, 0, sizeof(self->data.IdentifiedCardNo));
        // memcpy(self->data.IdentifiedCardNo, ReqOpenAccountField_IdentifiedCardNo, ReqOpenAccountField_IdentifiedCardNo_len);        
        strncpy(self->data.IdentifiedCardNo, ReqOpenAccountField_IdentifiedCardNo, sizeof(self->data.IdentifiedCardNo) );
        ReqOpenAccountField_IdentifiedCardNo = NULL;
    }
            
    ///性别
    // TThostFtdcGenderType char
    self->data.Gender = ReqOpenAccountField_Gender;
            
    ///国家代码
    // TThostFtdcCountryCodeType char[21]
    if( ReqOpenAccountField_CountryCode != NULL ) {
        if(ReqOpenAccountField_CountryCode_len > (Py_ssize_t)sizeof(self->data.CountryCode)) {
            PyErr_Format(PyExc_ValueError, "CountryCode too long: length=%zd (max allowed is %zd)", ReqOpenAccountField_CountryCode_len, (Py_ssize_t)sizeof(self->data.CountryCode));
            return -1;
        }
        // memset(self->data.CountryCode, 0, sizeof(self->data.CountryCode));
        // memcpy(self->data.CountryCode, ReqOpenAccountField_CountryCode, ReqOpenAccountField_CountryCode_len);        
        strncpy(self->data.CountryCode, ReqOpenAccountField_CountryCode, sizeof(self->data.CountryCode) );
        ReqOpenAccountField_CountryCode = NULL;
    }
            
    ///客户类型
    // TThostFtdcCustTypeType char
    self->data.CustType = ReqOpenAccountField_CustType;
            
    ///地址
    // TThostFtdcAddressType char[101]
    if( ReqOpenAccountField_Address != NULL ) {
        if(ReqOpenAccountField_Address_len > (Py_ssize_t)sizeof(self->data.Address)) {
            PyErr_Format(PyExc_ValueError, "Address too long: length=%zd (max allowed is %zd)", ReqOpenAccountField_Address_len, (Py_ssize_t)sizeof(self->data.Address));
            return -1;
        }
        // memset(self->data.Address, 0, sizeof(self->data.Address));
        // memcpy(self->data.Address, ReqOpenAccountField_Address, ReqOpenAccountField_Address_len);        
        strncpy(self->data.Address, ReqOpenAccountField_Address, sizeof(self->data.Address) );
        ReqOpenAccountField_Address = NULL;
    }
            
    ///邮编
    // TThostFtdcZipCodeType char[7]
    if( ReqOpenAccountField_ZipCode != NULL ) {
        if(ReqOpenAccountField_ZipCode_len > (Py_ssize_t)sizeof(self->data.ZipCode)) {
            PyErr_Format(PyExc_ValueError, "ZipCode too long: length=%zd (max allowed is %zd)", ReqOpenAccountField_ZipCode_len, (Py_ssize_t)sizeof(self->data.ZipCode));
            return -1;
        }
        // memset(self->data.ZipCode, 0, sizeof(self->data.ZipCode));
        // memcpy(self->data.ZipCode, ReqOpenAccountField_ZipCode, ReqOpenAccountField_ZipCode_len);        
        strncpy(self->data.ZipCode, ReqOpenAccountField_ZipCode, sizeof(self->data.ZipCode) );
        ReqOpenAccountField_ZipCode = NULL;
    }
            
    ///电话号码
    // TThostFtdcTelephoneType char[41]
    if( ReqOpenAccountField_Telephone != NULL ) {
        if(ReqOpenAccountField_Telephone_len > (Py_ssize_t)sizeof(self->data.Telephone)) {
            PyErr_Format(PyExc_ValueError, "Telephone too long: length=%zd (max allowed is %zd)", ReqOpenAccountField_Telephone_len, (Py_ssize_t)sizeof(self->data.Telephone));
            return -1;
        }
        // memset(self->data.Telephone, 0, sizeof(self->data.Telephone));
        // memcpy(self->data.Telephone, ReqOpenAccountField_Telephone, ReqOpenAccountField_Telephone_len);        
        strncpy(self->data.Telephone, ReqOpenAccountField_Telephone, sizeof(self->data.Telephone) );
        ReqOpenAccountField_Telephone = NULL;
    }
            
    ///手机
    // TThostFtdcMobilePhoneType char[21]
    if( ReqOpenAccountField_MobilePhone != NULL ) {
        if(ReqOpenAccountField_MobilePhone_len > (Py_ssize_t)sizeof(self->data.MobilePhone)) {
            PyErr_Format(PyExc_ValueError, "MobilePhone too long: length=%zd (max allowed is %zd)", ReqOpenAccountField_MobilePhone_len, (Py_ssize_t)sizeof(self->data.MobilePhone));
            return -1;
        }
        // memset(self->data.MobilePhone, 0, sizeof(self->data.MobilePhone));
        // memcpy(self->data.MobilePhone, ReqOpenAccountField_MobilePhone, ReqOpenAccountField_MobilePhone_len);        
        strncpy(self->data.MobilePhone, ReqOpenAccountField_MobilePhone, sizeof(self->data.MobilePhone) );
        ReqOpenAccountField_MobilePhone = NULL;
    }
            
    ///传真
    // TThostFtdcFaxType char[41]
    if( ReqOpenAccountField_Fax != NULL ) {
        if(ReqOpenAccountField_Fax_len > (Py_ssize_t)sizeof(self->data.Fax)) {
            PyErr_Format(PyExc_ValueError, "Fax too long: length=%zd (max allowed is %zd)", ReqOpenAccountField_Fax_len, (Py_ssize_t)sizeof(self->data.Fax));
            return -1;
        }
        // memset(self->data.Fax, 0, sizeof(self->data.Fax));
        // memcpy(self->data.Fax, ReqOpenAccountField_Fax, ReqOpenAccountField_Fax_len);        
        strncpy(self->data.Fax, ReqOpenAccountField_Fax, sizeof(self->data.Fax) );
        ReqOpenAccountField_Fax = NULL;
    }
            
    ///电子邮件
    // TThostFtdcEMailType char[41]
    if( ReqOpenAccountField_EMail != NULL ) {
        if(ReqOpenAccountField_EMail_len > (Py_ssize_t)sizeof(self->data.EMail)) {
            PyErr_Format(PyExc_ValueError, "EMail too long: length=%zd (max allowed is %zd)", ReqOpenAccountField_EMail_len, (Py_ssize_t)sizeof(self->data.EMail));
            return -1;
        }
        // memset(self->data.EMail, 0, sizeof(self->data.EMail));
        // memcpy(self->data.EMail, ReqOpenAccountField_EMail, ReqOpenAccountField_EMail_len);        
        strncpy(self->data.EMail, ReqOpenAccountField_EMail, sizeof(self->data.EMail) );
        ReqOpenAccountField_EMail = NULL;
    }
            
    ///资金账户状态
    // TThostFtdcMoneyAccountStatusType char
    self->data.MoneyAccountStatus = ReqOpenAccountField_MoneyAccountStatus;
            
    ///银行帐号
    // TThostFtdcBankAccountType char[41]
    if( ReqOpenAccountField_BankAccount != NULL ) {
        if(ReqOpenAccountField_BankAccount_len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
            PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is %zd)", ReqOpenAccountField_BankAccount_len, (Py_ssize_t)sizeof(self->data.BankAccount));
            return -1;
        }
        // memset(self->data.BankAccount, 0, sizeof(self->data.BankAccount));
        // memcpy(self->data.BankAccount, ReqOpenAccountField_BankAccount, ReqOpenAccountField_BankAccount_len);        
        strncpy(self->data.BankAccount, ReqOpenAccountField_BankAccount, sizeof(self->data.BankAccount) );
        ReqOpenAccountField_BankAccount = NULL;
    }
            
    ///银行密码
    // TThostFtdcPasswordType char[41]
    if( ReqOpenAccountField_BankPassWord != NULL ) {
        if(ReqOpenAccountField_BankPassWord_len > (Py_ssize_t)sizeof(self->data.BankPassWord)) {
            PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is %zd)", ReqOpenAccountField_BankPassWord_len, (Py_ssize_t)sizeof(self->data.BankPassWord));
            return -1;
        }
        // memset(self->data.BankPassWord, 0, sizeof(self->data.BankPassWord));
        // memcpy(self->data.BankPassWord, ReqOpenAccountField_BankPassWord, ReqOpenAccountField_BankPassWord_len);        
        strncpy(self->data.BankPassWord, ReqOpenAccountField_BankPassWord, sizeof(self->data.BankPassWord) );
        ReqOpenAccountField_BankPassWord = NULL;
    }
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    if( ReqOpenAccountField_AccountID != NULL ) {
        if(ReqOpenAccountField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", ReqOpenAccountField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
            return -1;
        }
        // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
        // memcpy(self->data.AccountID, ReqOpenAccountField_AccountID, ReqOpenAccountField_AccountID_len);        
        strncpy(self->data.AccountID, ReqOpenAccountField_AccountID, sizeof(self->data.AccountID) );
        ReqOpenAccountField_AccountID = NULL;
    }
            
    ///期货密码
    // TThostFtdcPasswordType char[41]
    if( ReqOpenAccountField_Password != NULL ) {
        if(ReqOpenAccountField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", ReqOpenAccountField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
            return -1;
        }
        // memset(self->data.Password, 0, sizeof(self->data.Password));
        // memcpy(self->data.Password, ReqOpenAccountField_Password, ReqOpenAccountField_Password_len);        
        strncpy(self->data.Password, ReqOpenAccountField_Password, sizeof(self->data.Password) );
        ReqOpenAccountField_Password = NULL;
    }
            
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = ReqOpenAccountField_InstallID;
        
    ///验证客户证件号码标志
    // TThostFtdcYesNoIndicatorType char
    self->data.VerifyCertNoFlag = ReqOpenAccountField_VerifyCertNoFlag;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( ReqOpenAccountField_CurrencyID != NULL ) {
        if(ReqOpenAccountField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", ReqOpenAccountField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, ReqOpenAccountField_CurrencyID, ReqOpenAccountField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, ReqOpenAccountField_CurrencyID, sizeof(self->data.CurrencyID) );
        ReqOpenAccountField_CurrencyID = NULL;
    }
            
    ///汇钞标志
    // TThostFtdcCashExchangeCodeType char
    self->data.CashExchangeCode = ReqOpenAccountField_CashExchangeCode;
            
    ///摘要
    // TThostFtdcDigestType char[36]
    if( ReqOpenAccountField_Digest != NULL ) {
        if(ReqOpenAccountField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
            PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", ReqOpenAccountField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
            return -1;
        }
        // memset(self->data.Digest, 0, sizeof(self->data.Digest));
        // memcpy(self->data.Digest, ReqOpenAccountField_Digest, ReqOpenAccountField_Digest_len);        
        strncpy(self->data.Digest, ReqOpenAccountField_Digest, sizeof(self->data.Digest) );
        ReqOpenAccountField_Digest = NULL;
    }
            
    ///银行帐号类型
    // TThostFtdcBankAccTypeType char
    self->data.BankAccType = ReqOpenAccountField_BankAccType;
            
    ///渠道标志
    // TThostFtdcDeviceIDType char[3]
    if( ReqOpenAccountField_DeviceID != NULL ) {
        if(ReqOpenAccountField_DeviceID_len > (Py_ssize_t)sizeof(self->data.DeviceID)) {
            PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is %zd)", ReqOpenAccountField_DeviceID_len, (Py_ssize_t)sizeof(self->data.DeviceID));
            return -1;
        }
        // memset(self->data.DeviceID, 0, sizeof(self->data.DeviceID));
        // memcpy(self->data.DeviceID, ReqOpenAccountField_DeviceID, ReqOpenAccountField_DeviceID_len);        
        strncpy(self->data.DeviceID, ReqOpenAccountField_DeviceID, sizeof(self->data.DeviceID) );
        ReqOpenAccountField_DeviceID = NULL;
    }
            
    ///期货单位帐号类型
    // TThostFtdcBankAccTypeType char
    self->data.BankSecuAccType = ReqOpenAccountField_BankSecuAccType;
            
    ///期货公司银行编码
    // TThostFtdcBankCodingForFutureType char[33]
    if( ReqOpenAccountField_BrokerIDByBank != NULL ) {
        if(ReqOpenAccountField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
            PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", ReqOpenAccountField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
            return -1;
        }
        // memset(self->data.BrokerIDByBank, 0, sizeof(self->data.BrokerIDByBank));
        // memcpy(self->data.BrokerIDByBank, ReqOpenAccountField_BrokerIDByBank, ReqOpenAccountField_BrokerIDByBank_len);        
        strncpy(self->data.BrokerIDByBank, ReqOpenAccountField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
        ReqOpenAccountField_BrokerIDByBank = NULL;
    }
            
    ///期货单位帐号
    // TThostFtdcBankAccountType char[41]
    if( ReqOpenAccountField_BankSecuAcc != NULL ) {
        if(ReqOpenAccountField_BankSecuAcc_len > (Py_ssize_t)sizeof(self->data.BankSecuAcc)) {
            PyErr_Format(PyExc_ValueError, "BankSecuAcc too long: length=%zd (max allowed is %zd)", ReqOpenAccountField_BankSecuAcc_len, (Py_ssize_t)sizeof(self->data.BankSecuAcc));
            return -1;
        }
        // memset(self->data.BankSecuAcc, 0, sizeof(self->data.BankSecuAcc));
        // memcpy(self->data.BankSecuAcc, ReqOpenAccountField_BankSecuAcc, ReqOpenAccountField_BankSecuAcc_len);        
        strncpy(self->data.BankSecuAcc, ReqOpenAccountField_BankSecuAcc, sizeof(self->data.BankSecuAcc) );
        ReqOpenAccountField_BankSecuAcc = NULL;
    }
            
    ///银行密码标志
    // TThostFtdcPwdFlagType char
    self->data.BankPwdFlag = ReqOpenAccountField_BankPwdFlag;
            
    ///期货资金密码核对标志
    // TThostFtdcPwdFlagType char
    self->data.SecuPwdFlag = ReqOpenAccountField_SecuPwdFlag;
            
    ///交易柜员
    // TThostFtdcOperNoType char[17]
    if( ReqOpenAccountField_OperNo != NULL ) {
        if(ReqOpenAccountField_OperNo_len > (Py_ssize_t)sizeof(self->data.OperNo)) {
            PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is %zd)", ReqOpenAccountField_OperNo_len, (Py_ssize_t)sizeof(self->data.OperNo));
            return -1;
        }
        // memset(self->data.OperNo, 0, sizeof(self->data.OperNo));
        // memcpy(self->data.OperNo, ReqOpenAccountField_OperNo, ReqOpenAccountField_OperNo_len);        
        strncpy(self->data.OperNo, ReqOpenAccountField_OperNo, sizeof(self->data.OperNo) );
        ReqOpenAccountField_OperNo = NULL;
    }
            
    ///交易ID
    // TThostFtdcTIDType int
    self->data.TID = ReqOpenAccountField_TID;
        
    ///用户标识
    // TThostFtdcUserIDType char[16]
    if( ReqOpenAccountField_UserID != NULL ) {
        if(ReqOpenAccountField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", ReqOpenAccountField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, ReqOpenAccountField_UserID, ReqOpenAccountField_UserID_len);        
        strncpy(self->data.UserID, ReqOpenAccountField_UserID, sizeof(self->data.UserID) );
        ReqOpenAccountField_UserID = NULL;
    }
            
    ///长客户姓名
    // TThostFtdcLongIndividualNameType char[161]
    if( ReqOpenAccountField_LongCustomerName != NULL ) {
        if(ReqOpenAccountField_LongCustomerName_len > (Py_ssize_t)sizeof(self->data.LongCustomerName)) {
            PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is %zd)", ReqOpenAccountField_LongCustomerName_len, (Py_ssize_t)sizeof(self->data.LongCustomerName));
            return -1;
        }
        // memset(self->data.LongCustomerName, 0, sizeof(self->data.LongCustomerName));
        // memcpy(self->data.LongCustomerName, ReqOpenAccountField_LongCustomerName, ReqOpenAccountField_LongCustomerName_len);        
        strncpy(self->data.LongCustomerName, ReqOpenAccountField_LongCustomerName, sizeof(self->data.LongCustomerName) );
        ReqOpenAccountField_LongCustomerName = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcReqOpenAccountField_dealloc(PyCThostFtdcReqOpenAccountField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcReqOpenAccountField_repr(PyCThostFtdcReqOpenAccountField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:c,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:y,s:y,s:i,s:c,s:y,s:c,s:y,s:c,s:y,s:c,s:y,s:y,s:c,s:c,s:y,s:i,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:c,s:s,s:c,s:s,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:c,s:s,s:s,s:s,s:s,s:i,s:c,s:s,s:c,s:s,s:c,s:s,s:c,s:s,s:s,s:c,s:c,s:s,s:i,s:s,s:s}"
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
        ,"AccountID", self->data.AccountID//, (Py_ssize_t)sizeof(self->data.AccountID) 
        ,"Password", self->data.Password//, (Py_ssize_t)sizeof(self->data.Password) 
        ,"InstallID", self->data.InstallID 
        ,"VerifyCertNoFlag", self->data.VerifyCertNoFlag 
        ,"CurrencyID", self->data.CurrencyID//, (Py_ssize_t)sizeof(self->data.CurrencyID) 
        ,"CashExchangeCode", self->data.CashExchangeCode 
        ,"Digest", self->data.Digest//, (Py_ssize_t)sizeof(self->data.Digest) 
        ,"BankAccType", self->data.BankAccType 
        ,"DeviceID", self->data.DeviceID//, (Py_ssize_t)sizeof(self->data.DeviceID) 
        ,"BankSecuAccType", self->data.BankSecuAccType 
        ,"BrokerIDByBank", self->data.BrokerIDByBank//, (Py_ssize_t)sizeof(self->data.BrokerIDByBank) 
        ,"BankSecuAcc", self->data.BankSecuAcc//, (Py_ssize_t)sizeof(self->data.BankSecuAcc) 
        ,"BankPwdFlag", self->data.BankPwdFlag 
        ,"SecuPwdFlag", self->data.SecuPwdFlag 
        ,"OperNo", self->data.OperNo//, (Py_ssize_t)sizeof(self->data.OperNo) 
        ,"TID", self->data.TID 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"LongCustomerName", self->data.LongCustomerName//, (Py_ssize_t)sizeof(self->data.LongCustomerName) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqOpenAccountField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///业务功能码
// TThostFtdcTradeCodeType char[7]
static PyObject *PyCThostFtdcReqOpenAccountField_get_TradeCode(PyCThostFtdcReqOpenAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeCode, (Py_ssize_t)sizeof(self->data.TradeCode));
    return PyBytes_FromString(self->data.TradeCode);
}

///业务功能码
// TThostFtdcTradeCodeType char[7]
static int PyCThostFtdcReqOpenAccountField_set_TradeCode(PyCThostFtdcReqOpenAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqOpenAccountField_get_BankID(PyCThostFtdcReqOpenAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankID, (Py_ssize_t)sizeof(self->data.BankID));
    return PyBytes_FromString(self->data.BankID);
}

///银行代码
// TThostFtdcBankIDType char[4]
static int PyCThostFtdcReqOpenAccountField_set_BankID(PyCThostFtdcReqOpenAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqOpenAccountField_get_BankBranchID(PyCThostFtdcReqOpenAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankBranchID, (Py_ssize_t)sizeof(self->data.BankBranchID));
    return PyBytes_FromString(self->data.BankBranchID);
}

///银行分支机构代码
// TThostFtdcBankBrchIDType char[5]
static int PyCThostFtdcReqOpenAccountField_set_BankBranchID(PyCThostFtdcReqOpenAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqOpenAccountField_get_BrokerID(PyCThostFtdcReqOpenAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///期商代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcReqOpenAccountField_set_BrokerID(PyCThostFtdcReqOpenAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqOpenAccountField_get_BrokerBranchID(PyCThostFtdcReqOpenAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerBranchID, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
    return PyBytes_FromString(self->data.BrokerBranchID);
}

///期商分支机构代码
// TThostFtdcFutureBranchIDType char[31]
static int PyCThostFtdcReqOpenAccountField_set_BrokerBranchID(PyCThostFtdcReqOpenAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqOpenAccountField_get_TradeDate(PyCThostFtdcReqOpenAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeDate, (Py_ssize_t)sizeof(self->data.TradeDate));
    return PyBytes_FromString(self->data.TradeDate);
}

///交易日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcReqOpenAccountField_set_TradeDate(PyCThostFtdcReqOpenAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqOpenAccountField_get_TradeTime(PyCThostFtdcReqOpenAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeTime, (Py_ssize_t)sizeof(self->data.TradeTime));
    return PyBytes_FromString(self->data.TradeTime);
}

///交易时间
// TThostFtdcTradeTimeType char[9]
static int PyCThostFtdcReqOpenAccountField_set_TradeTime(PyCThostFtdcReqOpenAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqOpenAccountField_get_BankSerial(PyCThostFtdcReqOpenAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankSerial, (Py_ssize_t)sizeof(self->data.BankSerial));
    return PyBytes_FromString(self->data.BankSerial);
}

///银行流水号
// TThostFtdcBankSerialType char[13]
static int PyCThostFtdcReqOpenAccountField_set_BankSerial(PyCThostFtdcReqOpenAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqOpenAccountField_get_TradingDay(PyCThostFtdcReqOpenAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易系统日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcReqOpenAccountField_set_TradingDay(PyCThostFtdcReqOpenAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqOpenAccountField_get_PlateSerial(PyCThostFtdcReqOpenAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.PlateSerial);
#else
    return PyInt_FromLong(self->data.PlateSerial);
#endif
}

///银期平台消息流水号
// TThostFtdcSerialType int
static int PyCThostFtdcReqOpenAccountField_set_PlateSerial(PyCThostFtdcReqOpenAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqOpenAccountField_get_LastFragment(PyCThostFtdcReqOpenAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

///最后分片标志
// TThostFtdcLastFragmentType char
static int PyCThostFtdcReqOpenAccountField_set_LastFragment(PyCThostFtdcReqOpenAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqOpenAccountField_get_SessionID(PyCThostFtdcReqOpenAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话号
// TThostFtdcSessionIDType int
static int PyCThostFtdcReqOpenAccountField_set_SessionID(PyCThostFtdcReqOpenAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqOpenAccountField_get_CustomerName(PyCThostFtdcReqOpenAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CustomerName, (Py_ssize_t)sizeof(self->data.CustomerName));
    return PyBytes_FromString(self->data.CustomerName);
}

///客户姓名
// TThostFtdcIndividualNameType char[51]
static int PyCThostFtdcReqOpenAccountField_set_CustomerName(PyCThostFtdcReqOpenAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqOpenAccountField_get_IdCardType(PyCThostFtdcReqOpenAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.IdCardType), 1);
}

///证件类型
// TThostFtdcIdCardTypeType char
static int PyCThostFtdcReqOpenAccountField_set_IdCardType(PyCThostFtdcReqOpenAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqOpenAccountField_get_IdentifiedCardNo(PyCThostFtdcReqOpenAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IdentifiedCardNo, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
    return PyBytes_FromString(self->data.IdentifiedCardNo);
}

///证件号码
// TThostFtdcIdentifiedCardNoType char[51]
static int PyCThostFtdcReqOpenAccountField_set_IdentifiedCardNo(PyCThostFtdcReqOpenAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqOpenAccountField_get_Gender(PyCThostFtdcReqOpenAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.Gender), 1);
}

///性别
// TThostFtdcGenderType char
static int PyCThostFtdcReqOpenAccountField_set_Gender(PyCThostFtdcReqOpenAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqOpenAccountField_get_CountryCode(PyCThostFtdcReqOpenAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CountryCode, (Py_ssize_t)sizeof(self->data.CountryCode));
    return PyBytes_FromString(self->data.CountryCode);
}

///国家代码
// TThostFtdcCountryCodeType char[21]
static int PyCThostFtdcReqOpenAccountField_set_CountryCode(PyCThostFtdcReqOpenAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqOpenAccountField_get_CustType(PyCThostFtdcReqOpenAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.CustType), 1);
}

///客户类型
// TThostFtdcCustTypeType char
static int PyCThostFtdcReqOpenAccountField_set_CustType(PyCThostFtdcReqOpenAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqOpenAccountField_get_Address(PyCThostFtdcReqOpenAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Address, (Py_ssize_t)sizeof(self->data.Address));
    return PyBytes_FromString(self->data.Address);
}

///地址
// TThostFtdcAddressType char[101]
static int PyCThostFtdcReqOpenAccountField_set_Address(PyCThostFtdcReqOpenAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqOpenAccountField_get_ZipCode(PyCThostFtdcReqOpenAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ZipCode, (Py_ssize_t)sizeof(self->data.ZipCode));
    return PyBytes_FromString(self->data.ZipCode);
}

///邮编
// TThostFtdcZipCodeType char[7]
static int PyCThostFtdcReqOpenAccountField_set_ZipCode(PyCThostFtdcReqOpenAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqOpenAccountField_get_Telephone(PyCThostFtdcReqOpenAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Telephone, (Py_ssize_t)sizeof(self->data.Telephone));
    return PyBytes_FromString(self->data.Telephone);
}

///电话号码
// TThostFtdcTelephoneType char[41]
static int PyCThostFtdcReqOpenAccountField_set_Telephone(PyCThostFtdcReqOpenAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqOpenAccountField_get_MobilePhone(PyCThostFtdcReqOpenAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MobilePhone, (Py_ssize_t)sizeof(self->data.MobilePhone));
    return PyBytes_FromString(self->data.MobilePhone);
}

///手机
// TThostFtdcMobilePhoneType char[21]
static int PyCThostFtdcReqOpenAccountField_set_MobilePhone(PyCThostFtdcReqOpenAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqOpenAccountField_get_Fax(PyCThostFtdcReqOpenAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Fax, (Py_ssize_t)sizeof(self->data.Fax));
    return PyBytes_FromString(self->data.Fax);
}

///传真
// TThostFtdcFaxType char[41]
static int PyCThostFtdcReqOpenAccountField_set_Fax(PyCThostFtdcReqOpenAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqOpenAccountField_get_EMail(PyCThostFtdcReqOpenAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.EMail, (Py_ssize_t)sizeof(self->data.EMail));
    return PyBytes_FromString(self->data.EMail);
}

///电子邮件
// TThostFtdcEMailType char[41]
static int PyCThostFtdcReqOpenAccountField_set_EMail(PyCThostFtdcReqOpenAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqOpenAccountField_get_MoneyAccountStatus(PyCThostFtdcReqOpenAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.MoneyAccountStatus), 1);
}

///资金账户状态
// TThostFtdcMoneyAccountStatusType char
static int PyCThostFtdcReqOpenAccountField_set_MoneyAccountStatus(PyCThostFtdcReqOpenAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqOpenAccountField_get_BankAccount(PyCThostFtdcReqOpenAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankAccount, (Py_ssize_t)sizeof(self->data.BankAccount));
    return PyBytes_FromString(self->data.BankAccount);
}

///银行帐号
// TThostFtdcBankAccountType char[41]
static int PyCThostFtdcReqOpenAccountField_set_BankAccount(PyCThostFtdcReqOpenAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqOpenAccountField_get_BankPassWord(PyCThostFtdcReqOpenAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankPassWord, (Py_ssize_t)sizeof(self->data.BankPassWord));
    return PyBytes_FromString(self->data.BankPassWord);
}

///银行密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcReqOpenAccountField_set_BankPassWord(PyCThostFtdcReqOpenAccountField *self, PyObject* val, void *closure) {
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
            
///投资者帐号
// TThostFtdcAccountIDType char[13]
static PyObject *PyCThostFtdcReqOpenAccountField_get_AccountID(PyCThostFtdcReqOpenAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AccountID, (Py_ssize_t)sizeof(self->data.AccountID));
    return PyBytes_FromString(self->data.AccountID);
}

///投资者帐号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcReqOpenAccountField_set_AccountID(PyCThostFtdcReqOpenAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqOpenAccountField_get_Password(PyCThostFtdcReqOpenAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Password, (Py_ssize_t)sizeof(self->data.Password));
    return PyBytes_FromString(self->data.Password);
}

///期货密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcReqOpenAccountField_set_Password(PyCThostFtdcReqOpenAccountField *self, PyObject* val, void *closure) {
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
            
///安装编号
// TThostFtdcInstallIDType int
static PyObject *PyCThostFtdcReqOpenAccountField_get_InstallID(PyCThostFtdcReqOpenAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcReqOpenAccountField_set_InstallID(PyCThostFtdcReqOpenAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqOpenAccountField_get_VerifyCertNoFlag(PyCThostFtdcReqOpenAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.VerifyCertNoFlag), 1);
}

///验证客户证件号码标志
// TThostFtdcYesNoIndicatorType char
static int PyCThostFtdcReqOpenAccountField_set_VerifyCertNoFlag(PyCThostFtdcReqOpenAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqOpenAccountField_get_CurrencyID(PyCThostFtdcReqOpenAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcReqOpenAccountField_set_CurrencyID(PyCThostFtdcReqOpenAccountField *self, PyObject* val, void *closure) {
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
            
///汇钞标志
// TThostFtdcCashExchangeCodeType char
static PyObject *PyCThostFtdcReqOpenAccountField_get_CashExchangeCode(PyCThostFtdcReqOpenAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.CashExchangeCode), 1);
}

///汇钞标志
// TThostFtdcCashExchangeCodeType char
static int PyCThostFtdcReqOpenAccountField_set_CashExchangeCode(PyCThostFtdcReqOpenAccountField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CashExchangeCode Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CashExchangeCode)) {
        PyErr_SetString(PyExc_ValueError, "CashExchangeCode must be equal 1 bytes");
        return -1;
    }
    self->data.CashExchangeCode = *buf;
    return 0;
}
            
///摘要
// TThostFtdcDigestType char[36]
static PyObject *PyCThostFtdcReqOpenAccountField_get_Digest(PyCThostFtdcReqOpenAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Digest, (Py_ssize_t)sizeof(self->data.Digest));
    return PyBytes_FromString(self->data.Digest);
}

///摘要
// TThostFtdcDigestType char[36]
static int PyCThostFtdcReqOpenAccountField_set_Digest(PyCThostFtdcReqOpenAccountField *self, PyObject* val, void *closure) {
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
            
///银行帐号类型
// TThostFtdcBankAccTypeType char
static PyObject *PyCThostFtdcReqOpenAccountField_get_BankAccType(PyCThostFtdcReqOpenAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BankAccType), 1);
}

///银行帐号类型
// TThostFtdcBankAccTypeType char
static int PyCThostFtdcReqOpenAccountField_set_BankAccType(PyCThostFtdcReqOpenAccountField *self, PyObject* val, void *closure) {
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
            
///渠道标志
// TThostFtdcDeviceIDType char[3]
static PyObject *PyCThostFtdcReqOpenAccountField_get_DeviceID(PyCThostFtdcReqOpenAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.DeviceID, (Py_ssize_t)sizeof(self->data.DeviceID));
    return PyBytes_FromString(self->data.DeviceID);
}

///渠道标志
// TThostFtdcDeviceIDType char[3]
static int PyCThostFtdcReqOpenAccountField_set_DeviceID(PyCThostFtdcReqOpenAccountField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DeviceID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.DeviceID)) {
        PyErr_SetString(PyExc_ValueError, "DeviceID must be less than 3 bytes");
        return -1;
    }
    // memset(self->data.DeviceID, 0, sizeof(self->data.DeviceID));
    // memcpy(self->data.DeviceID, buf, len);
    strncpy(self->data.DeviceID, buf, sizeof(self->data.DeviceID));
    return 0;
}
            
///期货单位帐号类型
// TThostFtdcBankAccTypeType char
static PyObject *PyCThostFtdcReqOpenAccountField_get_BankSecuAccType(PyCThostFtdcReqOpenAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BankSecuAccType), 1);
}

///期货单位帐号类型
// TThostFtdcBankAccTypeType char
static int PyCThostFtdcReqOpenAccountField_set_BankSecuAccType(PyCThostFtdcReqOpenAccountField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BankSecuAccType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BankSecuAccType)) {
        PyErr_SetString(PyExc_ValueError, "BankSecuAccType must be equal 1 bytes");
        return -1;
    }
    self->data.BankSecuAccType = *buf;
    return 0;
}
            
///期货公司银行编码
// TThostFtdcBankCodingForFutureType char[33]
static PyObject *PyCThostFtdcReqOpenAccountField_get_BrokerIDByBank(PyCThostFtdcReqOpenAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerIDByBank, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
    return PyBytes_FromString(self->data.BrokerIDByBank);
}

///期货公司银行编码
// TThostFtdcBankCodingForFutureType char[33]
static int PyCThostFtdcReqOpenAccountField_set_BrokerIDByBank(PyCThostFtdcReqOpenAccountField *self, PyObject* val, void *closure) {
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
            
///期货单位帐号
// TThostFtdcBankAccountType char[41]
static PyObject *PyCThostFtdcReqOpenAccountField_get_BankSecuAcc(PyCThostFtdcReqOpenAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankSecuAcc, (Py_ssize_t)sizeof(self->data.BankSecuAcc));
    return PyBytes_FromString(self->data.BankSecuAcc);
}

///期货单位帐号
// TThostFtdcBankAccountType char[41]
static int PyCThostFtdcReqOpenAccountField_set_BankSecuAcc(PyCThostFtdcReqOpenAccountField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BankSecuAcc Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BankSecuAcc)) {
        PyErr_SetString(PyExc_ValueError, "BankSecuAcc must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.BankSecuAcc, 0, sizeof(self->data.BankSecuAcc));
    // memcpy(self->data.BankSecuAcc, buf, len);
    strncpy(self->data.BankSecuAcc, buf, sizeof(self->data.BankSecuAcc));
    return 0;
}
            
///银行密码标志
// TThostFtdcPwdFlagType char
static PyObject *PyCThostFtdcReqOpenAccountField_get_BankPwdFlag(PyCThostFtdcReqOpenAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BankPwdFlag), 1);
}

///银行密码标志
// TThostFtdcPwdFlagType char
static int PyCThostFtdcReqOpenAccountField_set_BankPwdFlag(PyCThostFtdcReqOpenAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqOpenAccountField_get_SecuPwdFlag(PyCThostFtdcReqOpenAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.SecuPwdFlag), 1);
}

///期货资金密码核对标志
// TThostFtdcPwdFlagType char
static int PyCThostFtdcReqOpenAccountField_set_SecuPwdFlag(PyCThostFtdcReqOpenAccountField *self, PyObject* val, void *closure) {
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
            
///交易柜员
// TThostFtdcOperNoType char[17]
static PyObject *PyCThostFtdcReqOpenAccountField_get_OperNo(PyCThostFtdcReqOpenAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OperNo, (Py_ssize_t)sizeof(self->data.OperNo));
    return PyBytes_FromString(self->data.OperNo);
}

///交易柜员
// TThostFtdcOperNoType char[17]
static int PyCThostFtdcReqOpenAccountField_set_OperNo(PyCThostFtdcReqOpenAccountField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OperNo Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OperNo)) {
        PyErr_SetString(PyExc_ValueError, "OperNo must be less than 17 bytes");
        return -1;
    }
    // memset(self->data.OperNo, 0, sizeof(self->data.OperNo));
    // memcpy(self->data.OperNo, buf, len);
    strncpy(self->data.OperNo, buf, sizeof(self->data.OperNo));
    return 0;
}
            
///交易ID
// TThostFtdcTIDType int
static PyObject *PyCThostFtdcReqOpenAccountField_get_TID(PyCThostFtdcReqOpenAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.TID);
#else
    return PyInt_FromLong(self->data.TID);
#endif
}

///交易ID
// TThostFtdcTIDType int
static int PyCThostFtdcReqOpenAccountField_set_TID(PyCThostFtdcReqOpenAccountField *self, PyObject* val, void *closure) {
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
        
///用户标识
// TThostFtdcUserIDType char[16]
static PyObject *PyCThostFtdcReqOpenAccountField_get_UserID(PyCThostFtdcReqOpenAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户标识
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcReqOpenAccountField_set_UserID(PyCThostFtdcReqOpenAccountField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 16 bytes");
        return -1;
    }
    // memset(self->data.UserID, 0, sizeof(self->data.UserID));
    // memcpy(self->data.UserID, buf, len);
    strncpy(self->data.UserID, buf, sizeof(self->data.UserID));
    return 0;
}
            
///长客户姓名
// TThostFtdcLongIndividualNameType char[161]
static PyObject *PyCThostFtdcReqOpenAccountField_get_LongCustomerName(PyCThostFtdcReqOpenAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.LongCustomerName, (Py_ssize_t)sizeof(self->data.LongCustomerName));
    return PyBytes_FromString(self->data.LongCustomerName);
}

///长客户姓名
// TThostFtdcLongIndividualNameType char[161]
static int PyCThostFtdcReqOpenAccountField_set_LongCustomerName(PyCThostFtdcReqOpenAccountField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcReqOpenAccountField_getset[] = {
    ///业务功能码 
    {(char *)"TradeCode", (getter)PyCThostFtdcReqOpenAccountField_get_TradeCode, (setter)PyCThostFtdcReqOpenAccountField_set_TradeCode, (char *)"TradeCode", NULL},
    ///银行代码 
    {(char *)"BankID", (getter)PyCThostFtdcReqOpenAccountField_get_BankID, (setter)PyCThostFtdcReqOpenAccountField_set_BankID, (char *)"BankID", NULL},
    ///银行分支机构代码 
    {(char *)"BankBranchID", (getter)PyCThostFtdcReqOpenAccountField_get_BankBranchID, (setter)PyCThostFtdcReqOpenAccountField_set_BankBranchID, (char *)"BankBranchID", NULL},
    ///期商代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcReqOpenAccountField_get_BrokerID, (setter)PyCThostFtdcReqOpenAccountField_set_BrokerID, (char *)"BrokerID", NULL},
    ///期商分支机构代码 
    {(char *)"BrokerBranchID", (getter)PyCThostFtdcReqOpenAccountField_get_BrokerBranchID, (setter)PyCThostFtdcReqOpenAccountField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
    ///交易日期 
    {(char *)"TradeDate", (getter)PyCThostFtdcReqOpenAccountField_get_TradeDate, (setter)PyCThostFtdcReqOpenAccountField_set_TradeDate, (char *)"TradeDate", NULL},
    ///交易时间 
    {(char *)"TradeTime", (getter)PyCThostFtdcReqOpenAccountField_get_TradeTime, (setter)PyCThostFtdcReqOpenAccountField_set_TradeTime, (char *)"TradeTime", NULL},
    ///银行流水号 
    {(char *)"BankSerial", (getter)PyCThostFtdcReqOpenAccountField_get_BankSerial, (setter)PyCThostFtdcReqOpenAccountField_set_BankSerial, (char *)"BankSerial", NULL},
    ///交易系统日期 
    {(char *)"TradingDay", (getter)PyCThostFtdcReqOpenAccountField_get_TradingDay, (setter)PyCThostFtdcReqOpenAccountField_set_TradingDay, (char *)"TradingDay", NULL},
    ///银期平台消息流水号 
    {(char *)"PlateSerial", (getter)PyCThostFtdcReqOpenAccountField_get_PlateSerial, (setter)PyCThostFtdcReqOpenAccountField_set_PlateSerial, (char *)"PlateSerial", NULL},
    ///最后分片标志 
    {(char *)"LastFragment", (getter)PyCThostFtdcReqOpenAccountField_get_LastFragment, (setter)PyCThostFtdcReqOpenAccountField_set_LastFragment, (char *)"LastFragment", NULL},
    ///会话号 
    {(char *)"SessionID", (getter)PyCThostFtdcReqOpenAccountField_get_SessionID, (setter)PyCThostFtdcReqOpenAccountField_set_SessionID, (char *)"SessionID", NULL},
    ///客户姓名 
    {(char *)"CustomerName", (getter)PyCThostFtdcReqOpenAccountField_get_CustomerName, (setter)PyCThostFtdcReqOpenAccountField_set_CustomerName, (char *)"CustomerName", NULL},
    ///证件类型 
    {(char *)"IdCardType", (getter)PyCThostFtdcReqOpenAccountField_get_IdCardType, (setter)PyCThostFtdcReqOpenAccountField_set_IdCardType, (char *)"IdCardType", NULL},
    ///证件号码 
    {(char *)"IdentifiedCardNo", (getter)PyCThostFtdcReqOpenAccountField_get_IdentifiedCardNo, (setter)PyCThostFtdcReqOpenAccountField_set_IdentifiedCardNo, (char *)"IdentifiedCardNo", NULL},
    ///性别 
    {(char *)"Gender", (getter)PyCThostFtdcReqOpenAccountField_get_Gender, (setter)PyCThostFtdcReqOpenAccountField_set_Gender, (char *)"Gender", NULL},
    ///国家代码 
    {(char *)"CountryCode", (getter)PyCThostFtdcReqOpenAccountField_get_CountryCode, (setter)PyCThostFtdcReqOpenAccountField_set_CountryCode, (char *)"CountryCode", NULL},
    ///客户类型 
    {(char *)"CustType", (getter)PyCThostFtdcReqOpenAccountField_get_CustType, (setter)PyCThostFtdcReqOpenAccountField_set_CustType, (char *)"CustType", NULL},
    ///地址 
    {(char *)"Address", (getter)PyCThostFtdcReqOpenAccountField_get_Address, (setter)PyCThostFtdcReqOpenAccountField_set_Address, (char *)"Address", NULL},
    ///邮编 
    {(char *)"ZipCode", (getter)PyCThostFtdcReqOpenAccountField_get_ZipCode, (setter)PyCThostFtdcReqOpenAccountField_set_ZipCode, (char *)"ZipCode", NULL},
    ///电话号码 
    {(char *)"Telephone", (getter)PyCThostFtdcReqOpenAccountField_get_Telephone, (setter)PyCThostFtdcReqOpenAccountField_set_Telephone, (char *)"Telephone", NULL},
    ///手机 
    {(char *)"MobilePhone", (getter)PyCThostFtdcReqOpenAccountField_get_MobilePhone, (setter)PyCThostFtdcReqOpenAccountField_set_MobilePhone, (char *)"MobilePhone", NULL},
    ///传真 
    {(char *)"Fax", (getter)PyCThostFtdcReqOpenAccountField_get_Fax, (setter)PyCThostFtdcReqOpenAccountField_set_Fax, (char *)"Fax", NULL},
    ///电子邮件 
    {(char *)"EMail", (getter)PyCThostFtdcReqOpenAccountField_get_EMail, (setter)PyCThostFtdcReqOpenAccountField_set_EMail, (char *)"EMail", NULL},
    ///资金账户状态 
    {(char *)"MoneyAccountStatus", (getter)PyCThostFtdcReqOpenAccountField_get_MoneyAccountStatus, (setter)PyCThostFtdcReqOpenAccountField_set_MoneyAccountStatus, (char *)"MoneyAccountStatus", NULL},
    ///银行帐号 
    {(char *)"BankAccount", (getter)PyCThostFtdcReqOpenAccountField_get_BankAccount, (setter)PyCThostFtdcReqOpenAccountField_set_BankAccount, (char *)"BankAccount", NULL},
    ///银行密码 
    {(char *)"BankPassWord", (getter)PyCThostFtdcReqOpenAccountField_get_BankPassWord, (setter)PyCThostFtdcReqOpenAccountField_set_BankPassWord, (char *)"BankPassWord", NULL},
    ///投资者帐号 
    {(char *)"AccountID", (getter)PyCThostFtdcReqOpenAccountField_get_AccountID, (setter)PyCThostFtdcReqOpenAccountField_set_AccountID, (char *)"AccountID", NULL},
    ///期货密码 
    {(char *)"Password", (getter)PyCThostFtdcReqOpenAccountField_get_Password, (setter)PyCThostFtdcReqOpenAccountField_set_Password, (char *)"Password", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcReqOpenAccountField_get_InstallID, (setter)PyCThostFtdcReqOpenAccountField_set_InstallID, (char *)"InstallID", NULL},
    ///验证客户证件号码标志 
    {(char *)"VerifyCertNoFlag", (getter)PyCThostFtdcReqOpenAccountField_get_VerifyCertNoFlag, (setter)PyCThostFtdcReqOpenAccountField_set_VerifyCertNoFlag, (char *)"VerifyCertNoFlag", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcReqOpenAccountField_get_CurrencyID, (setter)PyCThostFtdcReqOpenAccountField_set_CurrencyID, (char *)"CurrencyID", NULL},
    ///汇钞标志 
    {(char *)"CashExchangeCode", (getter)PyCThostFtdcReqOpenAccountField_get_CashExchangeCode, (setter)PyCThostFtdcReqOpenAccountField_set_CashExchangeCode, (char *)"CashExchangeCode", NULL},
    ///摘要 
    {(char *)"Digest", (getter)PyCThostFtdcReqOpenAccountField_get_Digest, (setter)PyCThostFtdcReqOpenAccountField_set_Digest, (char *)"Digest", NULL},
    ///银行帐号类型 
    {(char *)"BankAccType", (getter)PyCThostFtdcReqOpenAccountField_get_BankAccType, (setter)PyCThostFtdcReqOpenAccountField_set_BankAccType, (char *)"BankAccType", NULL},
    ///渠道标志 
    {(char *)"DeviceID", (getter)PyCThostFtdcReqOpenAccountField_get_DeviceID, (setter)PyCThostFtdcReqOpenAccountField_set_DeviceID, (char *)"DeviceID", NULL},
    ///期货单位帐号类型 
    {(char *)"BankSecuAccType", (getter)PyCThostFtdcReqOpenAccountField_get_BankSecuAccType, (setter)PyCThostFtdcReqOpenAccountField_set_BankSecuAccType, (char *)"BankSecuAccType", NULL},
    ///期货公司银行编码 
    {(char *)"BrokerIDByBank", (getter)PyCThostFtdcReqOpenAccountField_get_BrokerIDByBank, (setter)PyCThostFtdcReqOpenAccountField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
    ///期货单位帐号 
    {(char *)"BankSecuAcc", (getter)PyCThostFtdcReqOpenAccountField_get_BankSecuAcc, (setter)PyCThostFtdcReqOpenAccountField_set_BankSecuAcc, (char *)"BankSecuAcc", NULL},
    ///银行密码标志 
    {(char *)"BankPwdFlag", (getter)PyCThostFtdcReqOpenAccountField_get_BankPwdFlag, (setter)PyCThostFtdcReqOpenAccountField_set_BankPwdFlag, (char *)"BankPwdFlag", NULL},
    ///期货资金密码核对标志 
    {(char *)"SecuPwdFlag", (getter)PyCThostFtdcReqOpenAccountField_get_SecuPwdFlag, (setter)PyCThostFtdcReqOpenAccountField_set_SecuPwdFlag, (char *)"SecuPwdFlag", NULL},
    ///交易柜员 
    {(char *)"OperNo", (getter)PyCThostFtdcReqOpenAccountField_get_OperNo, (setter)PyCThostFtdcReqOpenAccountField_set_OperNo, (char *)"OperNo", NULL},
    ///交易ID 
    {(char *)"TID", (getter)PyCThostFtdcReqOpenAccountField_get_TID, (setter)PyCThostFtdcReqOpenAccountField_set_TID, (char *)"TID", NULL},
    ///用户标识 
    {(char *)"UserID", (getter)PyCThostFtdcReqOpenAccountField_get_UserID, (setter)PyCThostFtdcReqOpenAccountField_set_UserID, (char *)"UserID", NULL},
    ///长客户姓名 
    {(char *)"LongCustomerName", (getter)PyCThostFtdcReqOpenAccountField_get_LongCustomerName, (setter)PyCThostFtdcReqOpenAccountField_set_LongCustomerName, (char *)"LongCustomerName", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcReqOpenAccountFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcReqOpenAccountField",	/* tp_name */
	sizeof(PyCThostFtdcReqOpenAccountField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcReqOpenAccountField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcReqOpenAccountField_repr,   /* tp_repr */
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
	"CThostFtdcReqOpenAccountField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcReqOpenAccountField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcReqOpenAccountField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcReqOpenAccountField_new,       /* tp_new */
};

int PyCThostFtdcReqOpenAccountFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcReqOpenAccountField  */
	if (PyType_Ready(&PyCThostFtdcReqOpenAccountFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcReqOpenAccountField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcReqOpenAccountFieldType);
    if( PyModule_AddObject(module, "CThostFtdcReqOpenAccountField", (PyObject *)&PyCThostFtdcReqOpenAccountFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqOpenAccountField to module");
        Py_DECREF(&PyCThostFtdcReqOpenAccountFieldType);
		return -1;
    }

    return 0;
}
