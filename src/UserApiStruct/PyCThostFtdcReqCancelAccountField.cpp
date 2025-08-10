
#include "PyCThostFtdcReqCancelAccountField.h"

///转帐销户请求

static PyObject *PyCThostFtdcReqCancelAccountField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcReqCancelAccountField *self = (PyCThostFtdcReqCancelAccountField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcReqCancelAccountField_init(PyCThostFtdcReqCancelAccountField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "Gender", "CountryCode", "CustType", "Address", "ZipCode", "Telephone", "MobilePhone", "Fax", "EMail", "MoneyAccountStatus", "BankAccount", "BankPassWord", "AccountID", "Password", "InstallID", "VerifyCertNoFlag", "CurrencyID", "CashExchangeCode", "Digest", "BankAccType", "DeviceID", "BankSecuAccType", "BrokerIDByBank", "BankSecuAcc", "BankPwdFlag", "SecuPwdFlag", "OperNo", "TID", "UserID", "LongCustomerName",  NULL};


    ///业务功能码
    // TThostFtdcTradeCodeType char[7]
    const char *ReqCancelAccountField_TradeCode = NULL;
    Py_ssize_t ReqCancelAccountField_TradeCode_len = 0;
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    const char *ReqCancelAccountField_BankID = NULL;
    Py_ssize_t ReqCancelAccountField_BankID_len = 0;
            
    ///银行分支机构代码
    // TThostFtdcBankBrchIDType char[5]
    const char *ReqCancelAccountField_BankBranchID = NULL;
    Py_ssize_t ReqCancelAccountField_BankBranchID_len = 0;
            
    ///期商代码
    // TThostFtdcBrokerIDType char[11]
    const char *ReqCancelAccountField_BrokerID = NULL;
    Py_ssize_t ReqCancelAccountField_BrokerID_len = 0;
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    const char *ReqCancelAccountField_BrokerBranchID = NULL;
    Py_ssize_t ReqCancelAccountField_BrokerBranchID_len = 0;
            
    ///交易日期
    // TThostFtdcTradeDateType char[9]
    const char *ReqCancelAccountField_TradeDate = NULL;
    Py_ssize_t ReqCancelAccountField_TradeDate_len = 0;
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    const char *ReqCancelAccountField_TradeTime = NULL;
    Py_ssize_t ReqCancelAccountField_TradeTime_len = 0;
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    const char *ReqCancelAccountField_BankSerial = NULL;
    Py_ssize_t ReqCancelAccountField_BankSerial_len = 0;
            
    ///交易系统日期
    // TThostFtdcTradeDateType char[9]
    const char *ReqCancelAccountField_TradingDay = NULL;
    Py_ssize_t ReqCancelAccountField_TradingDay_len = 0;
            
    ///银期平台消息流水号
    // TThostFtdcSerialType int
    int ReqCancelAccountField_PlateSerial = 0;
        
    ///最后分片标志
    // TThostFtdcLastFragmentType char
    char ReqCancelAccountField_LastFragment = 0;
            
    ///会话号
    // TThostFtdcSessionIDType int
    int ReqCancelAccountField_SessionID = 0;
        
    ///客户姓名
    // TThostFtdcIndividualNameType char[51]
    const char *ReqCancelAccountField_CustomerName = NULL;
    Py_ssize_t ReqCancelAccountField_CustomerName_len = 0;
            
    ///证件类型
    // TThostFtdcIdCardTypeType char
    char ReqCancelAccountField_IdCardType = 0;
            
    ///证件号码
    // TThostFtdcIdentifiedCardNoType char[51]
    const char *ReqCancelAccountField_IdentifiedCardNo = NULL;
    Py_ssize_t ReqCancelAccountField_IdentifiedCardNo_len = 0;
            
    ///性别
    // TThostFtdcGenderType char
    char ReqCancelAccountField_Gender = 0;
            
    ///国家代码
    // TThostFtdcCountryCodeType char[21]
    const char *ReqCancelAccountField_CountryCode = NULL;
    Py_ssize_t ReqCancelAccountField_CountryCode_len = 0;
            
    ///客户类型
    // TThostFtdcCustTypeType char
    char ReqCancelAccountField_CustType = 0;
            
    ///地址
    // TThostFtdcAddressType char[101]
    const char *ReqCancelAccountField_Address = NULL;
    Py_ssize_t ReqCancelAccountField_Address_len = 0;
            
    ///邮编
    // TThostFtdcZipCodeType char[7]
    const char *ReqCancelAccountField_ZipCode = NULL;
    Py_ssize_t ReqCancelAccountField_ZipCode_len = 0;
            
    ///电话号码
    // TThostFtdcTelephoneType char[41]
    const char *ReqCancelAccountField_Telephone = NULL;
    Py_ssize_t ReqCancelAccountField_Telephone_len = 0;
            
    ///手机
    // TThostFtdcMobilePhoneType char[21]
    const char *ReqCancelAccountField_MobilePhone = NULL;
    Py_ssize_t ReqCancelAccountField_MobilePhone_len = 0;
            
    ///传真
    // TThostFtdcFaxType char[41]
    const char *ReqCancelAccountField_Fax = NULL;
    Py_ssize_t ReqCancelAccountField_Fax_len = 0;
            
    ///电子邮件
    // TThostFtdcEMailType char[41]
    const char *ReqCancelAccountField_EMail = NULL;
    Py_ssize_t ReqCancelAccountField_EMail_len = 0;
            
    ///资金账户状态
    // TThostFtdcMoneyAccountStatusType char
    char ReqCancelAccountField_MoneyAccountStatus = 0;
            
    ///银行帐号
    // TThostFtdcBankAccountType char[41]
    const char *ReqCancelAccountField_BankAccount = NULL;
    Py_ssize_t ReqCancelAccountField_BankAccount_len = 0;
            
    ///银行密码
    // TThostFtdcPasswordType char[41]
    const char *ReqCancelAccountField_BankPassWord = NULL;
    Py_ssize_t ReqCancelAccountField_BankPassWord_len = 0;
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    const char *ReqCancelAccountField_AccountID = NULL;
    Py_ssize_t ReqCancelAccountField_AccountID_len = 0;
            
    ///期货密码
    // TThostFtdcPasswordType char[41]
    const char *ReqCancelAccountField_Password = NULL;
    Py_ssize_t ReqCancelAccountField_Password_len = 0;
            
    ///安装编号
    // TThostFtdcInstallIDType int
    int ReqCancelAccountField_InstallID = 0;
        
    ///验证客户证件号码标志
    // TThostFtdcYesNoIndicatorType char
    char ReqCancelAccountField_VerifyCertNoFlag = 0;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *ReqCancelAccountField_CurrencyID = NULL;
    Py_ssize_t ReqCancelAccountField_CurrencyID_len = 0;
            
    ///汇钞标志
    // TThostFtdcCashExchangeCodeType char
    char ReqCancelAccountField_CashExchangeCode = 0;
            
    ///摘要
    // TThostFtdcDigestType char[36]
    const char *ReqCancelAccountField_Digest = NULL;
    Py_ssize_t ReqCancelAccountField_Digest_len = 0;
            
    ///银行帐号类型
    // TThostFtdcBankAccTypeType char
    char ReqCancelAccountField_BankAccType = 0;
            
    ///渠道标志
    // TThostFtdcDeviceIDType char[3]
    const char *ReqCancelAccountField_DeviceID = NULL;
    Py_ssize_t ReqCancelAccountField_DeviceID_len = 0;
            
    ///期货单位帐号类型
    // TThostFtdcBankAccTypeType char
    char ReqCancelAccountField_BankSecuAccType = 0;
            
    ///期货公司银行编码
    // TThostFtdcBankCodingForFutureType char[33]
    const char *ReqCancelAccountField_BrokerIDByBank = NULL;
    Py_ssize_t ReqCancelAccountField_BrokerIDByBank_len = 0;
            
    ///期货单位帐号
    // TThostFtdcBankAccountType char[41]
    const char *ReqCancelAccountField_BankSecuAcc = NULL;
    Py_ssize_t ReqCancelAccountField_BankSecuAcc_len = 0;
            
    ///银行密码标志
    // TThostFtdcPwdFlagType char
    char ReqCancelAccountField_BankPwdFlag = 0;
            
    ///期货资金密码核对标志
    // TThostFtdcPwdFlagType char
    char ReqCancelAccountField_SecuPwdFlag = 0;
            
    ///交易柜员
    // TThostFtdcOperNoType char[17]
    const char *ReqCancelAccountField_OperNo = NULL;
    Py_ssize_t ReqCancelAccountField_OperNo_len = 0;
            
    ///交易ID
    // TThostFtdcTIDType int
    int ReqCancelAccountField_TID = 0;
        
    ///用户标识
    // TThostFtdcUserIDType char[16]
    const char *ReqCancelAccountField_UserID = NULL;
    Py_ssize_t ReqCancelAccountField_UserID_len = 0;
            
    ///长客户姓名
    // TThostFtdcLongIndividualNameType char[161]
    const char *ReqCancelAccountField_LongCustomerName = NULL;
    Py_ssize_t ReqCancelAccountField_LongCustomerName_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciy#cy#cy#cy#y#y#y#y#y#cy#y#y#y#icy#cy#cy#cy#y#ccy#iy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#icis#cs#cs#cs#s#s#s#s#s#cs#s#s#s#ics#cs#cs#cs#s#ccs#is#s#", (char **)kwlist
#endif

        , &ReqCancelAccountField_TradeCode, &ReqCancelAccountField_TradeCode_len 
        , &ReqCancelAccountField_BankID, &ReqCancelAccountField_BankID_len 
        , &ReqCancelAccountField_BankBranchID, &ReqCancelAccountField_BankBranchID_len 
        , &ReqCancelAccountField_BrokerID, &ReqCancelAccountField_BrokerID_len 
        , &ReqCancelAccountField_BrokerBranchID, &ReqCancelAccountField_BrokerBranchID_len 
        , &ReqCancelAccountField_TradeDate, &ReqCancelAccountField_TradeDate_len 
        , &ReqCancelAccountField_TradeTime, &ReqCancelAccountField_TradeTime_len 
        , &ReqCancelAccountField_BankSerial, &ReqCancelAccountField_BankSerial_len 
        , &ReqCancelAccountField_TradingDay, &ReqCancelAccountField_TradingDay_len 
        , &ReqCancelAccountField_PlateSerial 
        , &ReqCancelAccountField_LastFragment 
        , &ReqCancelAccountField_SessionID 
        , &ReqCancelAccountField_CustomerName, &ReqCancelAccountField_CustomerName_len 
        , &ReqCancelAccountField_IdCardType 
        , &ReqCancelAccountField_IdentifiedCardNo, &ReqCancelAccountField_IdentifiedCardNo_len 
        , &ReqCancelAccountField_Gender 
        , &ReqCancelAccountField_CountryCode, &ReqCancelAccountField_CountryCode_len 
        , &ReqCancelAccountField_CustType 
        , &ReqCancelAccountField_Address, &ReqCancelAccountField_Address_len 
        , &ReqCancelAccountField_ZipCode, &ReqCancelAccountField_ZipCode_len 
        , &ReqCancelAccountField_Telephone, &ReqCancelAccountField_Telephone_len 
        , &ReqCancelAccountField_MobilePhone, &ReqCancelAccountField_MobilePhone_len 
        , &ReqCancelAccountField_Fax, &ReqCancelAccountField_Fax_len 
        , &ReqCancelAccountField_EMail, &ReqCancelAccountField_EMail_len 
        , &ReqCancelAccountField_MoneyAccountStatus 
        , &ReqCancelAccountField_BankAccount, &ReqCancelAccountField_BankAccount_len 
        , &ReqCancelAccountField_BankPassWord, &ReqCancelAccountField_BankPassWord_len 
        , &ReqCancelAccountField_AccountID, &ReqCancelAccountField_AccountID_len 
        , &ReqCancelAccountField_Password, &ReqCancelAccountField_Password_len 
        , &ReqCancelAccountField_InstallID 
        , &ReqCancelAccountField_VerifyCertNoFlag 
        , &ReqCancelAccountField_CurrencyID, &ReqCancelAccountField_CurrencyID_len 
        , &ReqCancelAccountField_CashExchangeCode 
        , &ReqCancelAccountField_Digest, &ReqCancelAccountField_Digest_len 
        , &ReqCancelAccountField_BankAccType 
        , &ReqCancelAccountField_DeviceID, &ReqCancelAccountField_DeviceID_len 
        , &ReqCancelAccountField_BankSecuAccType 
        , &ReqCancelAccountField_BrokerIDByBank, &ReqCancelAccountField_BrokerIDByBank_len 
        , &ReqCancelAccountField_BankSecuAcc, &ReqCancelAccountField_BankSecuAcc_len 
        , &ReqCancelAccountField_BankPwdFlag 
        , &ReqCancelAccountField_SecuPwdFlag 
        , &ReqCancelAccountField_OperNo, &ReqCancelAccountField_OperNo_len 
        , &ReqCancelAccountField_TID 
        , &ReqCancelAccountField_UserID, &ReqCancelAccountField_UserID_len 
        , &ReqCancelAccountField_LongCustomerName, &ReqCancelAccountField_LongCustomerName_len 


    )) {
        return -1;
    }


    ///业务功能码
    // TThostFtdcTradeCodeType char[7]
    if( ReqCancelAccountField_TradeCode != NULL ) {
        if(ReqCancelAccountField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", ReqCancelAccountField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
            return -1;
        }
        // memset(self->data.TradeCode, 0, sizeof(self->data.TradeCode));
        // memcpy(self->data.TradeCode, ReqCancelAccountField_TradeCode, ReqCancelAccountField_TradeCode_len);        
        strncpy(self->data.TradeCode, ReqCancelAccountField_TradeCode, sizeof(self->data.TradeCode) );
        ReqCancelAccountField_TradeCode = NULL;
    }
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    if( ReqCancelAccountField_BankID != NULL ) {
        if(ReqCancelAccountField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", ReqCancelAccountField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
            return -1;
        }
        // memset(self->data.BankID, 0, sizeof(self->data.BankID));
        // memcpy(self->data.BankID, ReqCancelAccountField_BankID, ReqCancelAccountField_BankID_len);        
        strncpy(self->data.BankID, ReqCancelAccountField_BankID, sizeof(self->data.BankID) );
        ReqCancelAccountField_BankID = NULL;
    }
            
    ///银行分支机构代码
    // TThostFtdcBankBrchIDType char[5]
    if( ReqCancelAccountField_BankBranchID != NULL ) {
        if(ReqCancelAccountField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", ReqCancelAccountField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
            return -1;
        }
        // memset(self->data.BankBranchID, 0, sizeof(self->data.BankBranchID));
        // memcpy(self->data.BankBranchID, ReqCancelAccountField_BankBranchID, ReqCancelAccountField_BankBranchID_len);        
        strncpy(self->data.BankBranchID, ReqCancelAccountField_BankBranchID, sizeof(self->data.BankBranchID) );
        ReqCancelAccountField_BankBranchID = NULL;
    }
            
    ///期商代码
    // TThostFtdcBrokerIDType char[11]
    if( ReqCancelAccountField_BrokerID != NULL ) {
        if(ReqCancelAccountField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", ReqCancelAccountField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, ReqCancelAccountField_BrokerID, ReqCancelAccountField_BrokerID_len);        
        strncpy(self->data.BrokerID, ReqCancelAccountField_BrokerID, sizeof(self->data.BrokerID) );
        ReqCancelAccountField_BrokerID = NULL;
    }
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    if( ReqCancelAccountField_BrokerBranchID != NULL ) {
        if(ReqCancelAccountField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", ReqCancelAccountField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
            return -1;
        }
        // memset(self->data.BrokerBranchID, 0, sizeof(self->data.BrokerBranchID));
        // memcpy(self->data.BrokerBranchID, ReqCancelAccountField_BrokerBranchID, ReqCancelAccountField_BrokerBranchID_len);        
        strncpy(self->data.BrokerBranchID, ReqCancelAccountField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
        ReqCancelAccountField_BrokerBranchID = NULL;
    }
            
    ///交易日期
    // TThostFtdcTradeDateType char[9]
    if( ReqCancelAccountField_TradeDate != NULL ) {
        if(ReqCancelAccountField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", ReqCancelAccountField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
            return -1;
        }
        // memset(self->data.TradeDate, 0, sizeof(self->data.TradeDate));
        // memcpy(self->data.TradeDate, ReqCancelAccountField_TradeDate, ReqCancelAccountField_TradeDate_len);        
        strncpy(self->data.TradeDate, ReqCancelAccountField_TradeDate, sizeof(self->data.TradeDate) );
        ReqCancelAccountField_TradeDate = NULL;
    }
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    if( ReqCancelAccountField_TradeTime != NULL ) {
        if(ReqCancelAccountField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", ReqCancelAccountField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
            return -1;
        }
        // memset(self->data.TradeTime, 0, sizeof(self->data.TradeTime));
        // memcpy(self->data.TradeTime, ReqCancelAccountField_TradeTime, ReqCancelAccountField_TradeTime_len);        
        strncpy(self->data.TradeTime, ReqCancelAccountField_TradeTime, sizeof(self->data.TradeTime) );
        ReqCancelAccountField_TradeTime = NULL;
    }
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    if( ReqCancelAccountField_BankSerial != NULL ) {
        if(ReqCancelAccountField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", ReqCancelAccountField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
            return -1;
        }
        // memset(self->data.BankSerial, 0, sizeof(self->data.BankSerial));
        // memcpy(self->data.BankSerial, ReqCancelAccountField_BankSerial, ReqCancelAccountField_BankSerial_len);        
        strncpy(self->data.BankSerial, ReqCancelAccountField_BankSerial, sizeof(self->data.BankSerial) );
        ReqCancelAccountField_BankSerial = NULL;
    }
            
    ///交易系统日期
    // TThostFtdcTradeDateType char[9]
    if( ReqCancelAccountField_TradingDay != NULL ) {
        if(ReqCancelAccountField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", ReqCancelAccountField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, ReqCancelAccountField_TradingDay, ReqCancelAccountField_TradingDay_len);        
        strncpy(self->data.TradingDay, ReqCancelAccountField_TradingDay, sizeof(self->data.TradingDay) );
        ReqCancelAccountField_TradingDay = NULL;
    }
            
    ///银期平台消息流水号
    // TThostFtdcSerialType int
    self->data.PlateSerial = ReqCancelAccountField_PlateSerial;
        
    ///最后分片标志
    // TThostFtdcLastFragmentType char
    self->data.LastFragment = ReqCancelAccountField_LastFragment;
            
    ///会话号
    // TThostFtdcSessionIDType int
    self->data.SessionID = ReqCancelAccountField_SessionID;
        
    ///客户姓名
    // TThostFtdcIndividualNameType char[51]
    if( ReqCancelAccountField_CustomerName != NULL ) {
        if(ReqCancelAccountField_CustomerName_len > (Py_ssize_t)sizeof(self->data.CustomerName)) {
            PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is %zd)", ReqCancelAccountField_CustomerName_len, (Py_ssize_t)sizeof(self->data.CustomerName));
            return -1;
        }
        // memset(self->data.CustomerName, 0, sizeof(self->data.CustomerName));
        // memcpy(self->data.CustomerName, ReqCancelAccountField_CustomerName, ReqCancelAccountField_CustomerName_len);        
        strncpy(self->data.CustomerName, ReqCancelAccountField_CustomerName, sizeof(self->data.CustomerName) );
        ReqCancelAccountField_CustomerName = NULL;
    }
            
    ///证件类型
    // TThostFtdcIdCardTypeType char
    self->data.IdCardType = ReqCancelAccountField_IdCardType;
            
    ///证件号码
    // TThostFtdcIdentifiedCardNoType char[51]
    if( ReqCancelAccountField_IdentifiedCardNo != NULL ) {
        if(ReqCancelAccountField_IdentifiedCardNo_len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
            PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is %zd)", ReqCancelAccountField_IdentifiedCardNo_len, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
            return -1;
        }
        // memset(self->data.IdentifiedCardNo, 0, sizeof(self->data.IdentifiedCardNo));
        // memcpy(self->data.IdentifiedCardNo, ReqCancelAccountField_IdentifiedCardNo, ReqCancelAccountField_IdentifiedCardNo_len);        
        strncpy(self->data.IdentifiedCardNo, ReqCancelAccountField_IdentifiedCardNo, sizeof(self->data.IdentifiedCardNo) );
        ReqCancelAccountField_IdentifiedCardNo = NULL;
    }
            
    ///性别
    // TThostFtdcGenderType char
    self->data.Gender = ReqCancelAccountField_Gender;
            
    ///国家代码
    // TThostFtdcCountryCodeType char[21]
    if( ReqCancelAccountField_CountryCode != NULL ) {
        if(ReqCancelAccountField_CountryCode_len > (Py_ssize_t)sizeof(self->data.CountryCode)) {
            PyErr_Format(PyExc_ValueError, "CountryCode too long: length=%zd (max allowed is %zd)", ReqCancelAccountField_CountryCode_len, (Py_ssize_t)sizeof(self->data.CountryCode));
            return -1;
        }
        // memset(self->data.CountryCode, 0, sizeof(self->data.CountryCode));
        // memcpy(self->data.CountryCode, ReqCancelAccountField_CountryCode, ReqCancelAccountField_CountryCode_len);        
        strncpy(self->data.CountryCode, ReqCancelAccountField_CountryCode, sizeof(self->data.CountryCode) );
        ReqCancelAccountField_CountryCode = NULL;
    }
            
    ///客户类型
    // TThostFtdcCustTypeType char
    self->data.CustType = ReqCancelAccountField_CustType;
            
    ///地址
    // TThostFtdcAddressType char[101]
    if( ReqCancelAccountField_Address != NULL ) {
        if(ReqCancelAccountField_Address_len > (Py_ssize_t)sizeof(self->data.Address)) {
            PyErr_Format(PyExc_ValueError, "Address too long: length=%zd (max allowed is %zd)", ReqCancelAccountField_Address_len, (Py_ssize_t)sizeof(self->data.Address));
            return -1;
        }
        // memset(self->data.Address, 0, sizeof(self->data.Address));
        // memcpy(self->data.Address, ReqCancelAccountField_Address, ReqCancelAccountField_Address_len);        
        strncpy(self->data.Address, ReqCancelAccountField_Address, sizeof(self->data.Address) );
        ReqCancelAccountField_Address = NULL;
    }
            
    ///邮编
    // TThostFtdcZipCodeType char[7]
    if( ReqCancelAccountField_ZipCode != NULL ) {
        if(ReqCancelAccountField_ZipCode_len > (Py_ssize_t)sizeof(self->data.ZipCode)) {
            PyErr_Format(PyExc_ValueError, "ZipCode too long: length=%zd (max allowed is %zd)", ReqCancelAccountField_ZipCode_len, (Py_ssize_t)sizeof(self->data.ZipCode));
            return -1;
        }
        // memset(self->data.ZipCode, 0, sizeof(self->data.ZipCode));
        // memcpy(self->data.ZipCode, ReqCancelAccountField_ZipCode, ReqCancelAccountField_ZipCode_len);        
        strncpy(self->data.ZipCode, ReqCancelAccountField_ZipCode, sizeof(self->data.ZipCode) );
        ReqCancelAccountField_ZipCode = NULL;
    }
            
    ///电话号码
    // TThostFtdcTelephoneType char[41]
    if( ReqCancelAccountField_Telephone != NULL ) {
        if(ReqCancelAccountField_Telephone_len > (Py_ssize_t)sizeof(self->data.Telephone)) {
            PyErr_Format(PyExc_ValueError, "Telephone too long: length=%zd (max allowed is %zd)", ReqCancelAccountField_Telephone_len, (Py_ssize_t)sizeof(self->data.Telephone));
            return -1;
        }
        // memset(self->data.Telephone, 0, sizeof(self->data.Telephone));
        // memcpy(self->data.Telephone, ReqCancelAccountField_Telephone, ReqCancelAccountField_Telephone_len);        
        strncpy(self->data.Telephone, ReqCancelAccountField_Telephone, sizeof(self->data.Telephone) );
        ReqCancelAccountField_Telephone = NULL;
    }
            
    ///手机
    // TThostFtdcMobilePhoneType char[21]
    if( ReqCancelAccountField_MobilePhone != NULL ) {
        if(ReqCancelAccountField_MobilePhone_len > (Py_ssize_t)sizeof(self->data.MobilePhone)) {
            PyErr_Format(PyExc_ValueError, "MobilePhone too long: length=%zd (max allowed is %zd)", ReqCancelAccountField_MobilePhone_len, (Py_ssize_t)sizeof(self->data.MobilePhone));
            return -1;
        }
        // memset(self->data.MobilePhone, 0, sizeof(self->data.MobilePhone));
        // memcpy(self->data.MobilePhone, ReqCancelAccountField_MobilePhone, ReqCancelAccountField_MobilePhone_len);        
        strncpy(self->data.MobilePhone, ReqCancelAccountField_MobilePhone, sizeof(self->data.MobilePhone) );
        ReqCancelAccountField_MobilePhone = NULL;
    }
            
    ///传真
    // TThostFtdcFaxType char[41]
    if( ReqCancelAccountField_Fax != NULL ) {
        if(ReqCancelAccountField_Fax_len > (Py_ssize_t)sizeof(self->data.Fax)) {
            PyErr_Format(PyExc_ValueError, "Fax too long: length=%zd (max allowed is %zd)", ReqCancelAccountField_Fax_len, (Py_ssize_t)sizeof(self->data.Fax));
            return -1;
        }
        // memset(self->data.Fax, 0, sizeof(self->data.Fax));
        // memcpy(self->data.Fax, ReqCancelAccountField_Fax, ReqCancelAccountField_Fax_len);        
        strncpy(self->data.Fax, ReqCancelAccountField_Fax, sizeof(self->data.Fax) );
        ReqCancelAccountField_Fax = NULL;
    }
            
    ///电子邮件
    // TThostFtdcEMailType char[41]
    if( ReqCancelAccountField_EMail != NULL ) {
        if(ReqCancelAccountField_EMail_len > (Py_ssize_t)sizeof(self->data.EMail)) {
            PyErr_Format(PyExc_ValueError, "EMail too long: length=%zd (max allowed is %zd)", ReqCancelAccountField_EMail_len, (Py_ssize_t)sizeof(self->data.EMail));
            return -1;
        }
        // memset(self->data.EMail, 0, sizeof(self->data.EMail));
        // memcpy(self->data.EMail, ReqCancelAccountField_EMail, ReqCancelAccountField_EMail_len);        
        strncpy(self->data.EMail, ReqCancelAccountField_EMail, sizeof(self->data.EMail) );
        ReqCancelAccountField_EMail = NULL;
    }
            
    ///资金账户状态
    // TThostFtdcMoneyAccountStatusType char
    self->data.MoneyAccountStatus = ReqCancelAccountField_MoneyAccountStatus;
            
    ///银行帐号
    // TThostFtdcBankAccountType char[41]
    if( ReqCancelAccountField_BankAccount != NULL ) {
        if(ReqCancelAccountField_BankAccount_len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
            PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is %zd)", ReqCancelAccountField_BankAccount_len, (Py_ssize_t)sizeof(self->data.BankAccount));
            return -1;
        }
        // memset(self->data.BankAccount, 0, sizeof(self->data.BankAccount));
        // memcpy(self->data.BankAccount, ReqCancelAccountField_BankAccount, ReqCancelAccountField_BankAccount_len);        
        strncpy(self->data.BankAccount, ReqCancelAccountField_BankAccount, sizeof(self->data.BankAccount) );
        ReqCancelAccountField_BankAccount = NULL;
    }
            
    ///银行密码
    // TThostFtdcPasswordType char[41]
    if( ReqCancelAccountField_BankPassWord != NULL ) {
        if(ReqCancelAccountField_BankPassWord_len > (Py_ssize_t)sizeof(self->data.BankPassWord)) {
            PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is %zd)", ReqCancelAccountField_BankPassWord_len, (Py_ssize_t)sizeof(self->data.BankPassWord));
            return -1;
        }
        // memset(self->data.BankPassWord, 0, sizeof(self->data.BankPassWord));
        // memcpy(self->data.BankPassWord, ReqCancelAccountField_BankPassWord, ReqCancelAccountField_BankPassWord_len);        
        strncpy(self->data.BankPassWord, ReqCancelAccountField_BankPassWord, sizeof(self->data.BankPassWord) );
        ReqCancelAccountField_BankPassWord = NULL;
    }
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    if( ReqCancelAccountField_AccountID != NULL ) {
        if(ReqCancelAccountField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", ReqCancelAccountField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
            return -1;
        }
        // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
        // memcpy(self->data.AccountID, ReqCancelAccountField_AccountID, ReqCancelAccountField_AccountID_len);        
        strncpy(self->data.AccountID, ReqCancelAccountField_AccountID, sizeof(self->data.AccountID) );
        ReqCancelAccountField_AccountID = NULL;
    }
            
    ///期货密码
    // TThostFtdcPasswordType char[41]
    if( ReqCancelAccountField_Password != NULL ) {
        if(ReqCancelAccountField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", ReqCancelAccountField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
            return -1;
        }
        // memset(self->data.Password, 0, sizeof(self->data.Password));
        // memcpy(self->data.Password, ReqCancelAccountField_Password, ReqCancelAccountField_Password_len);        
        strncpy(self->data.Password, ReqCancelAccountField_Password, sizeof(self->data.Password) );
        ReqCancelAccountField_Password = NULL;
    }
            
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = ReqCancelAccountField_InstallID;
        
    ///验证客户证件号码标志
    // TThostFtdcYesNoIndicatorType char
    self->data.VerifyCertNoFlag = ReqCancelAccountField_VerifyCertNoFlag;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( ReqCancelAccountField_CurrencyID != NULL ) {
        if(ReqCancelAccountField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", ReqCancelAccountField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, ReqCancelAccountField_CurrencyID, ReqCancelAccountField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, ReqCancelAccountField_CurrencyID, sizeof(self->data.CurrencyID) );
        ReqCancelAccountField_CurrencyID = NULL;
    }
            
    ///汇钞标志
    // TThostFtdcCashExchangeCodeType char
    self->data.CashExchangeCode = ReqCancelAccountField_CashExchangeCode;
            
    ///摘要
    // TThostFtdcDigestType char[36]
    if( ReqCancelAccountField_Digest != NULL ) {
        if(ReqCancelAccountField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
            PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", ReqCancelAccountField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
            return -1;
        }
        // memset(self->data.Digest, 0, sizeof(self->data.Digest));
        // memcpy(self->data.Digest, ReqCancelAccountField_Digest, ReqCancelAccountField_Digest_len);        
        strncpy(self->data.Digest, ReqCancelAccountField_Digest, sizeof(self->data.Digest) );
        ReqCancelAccountField_Digest = NULL;
    }
            
    ///银行帐号类型
    // TThostFtdcBankAccTypeType char
    self->data.BankAccType = ReqCancelAccountField_BankAccType;
            
    ///渠道标志
    // TThostFtdcDeviceIDType char[3]
    if( ReqCancelAccountField_DeviceID != NULL ) {
        if(ReqCancelAccountField_DeviceID_len > (Py_ssize_t)sizeof(self->data.DeviceID)) {
            PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is %zd)", ReqCancelAccountField_DeviceID_len, (Py_ssize_t)sizeof(self->data.DeviceID));
            return -1;
        }
        // memset(self->data.DeviceID, 0, sizeof(self->data.DeviceID));
        // memcpy(self->data.DeviceID, ReqCancelAccountField_DeviceID, ReqCancelAccountField_DeviceID_len);        
        strncpy(self->data.DeviceID, ReqCancelAccountField_DeviceID, sizeof(self->data.DeviceID) );
        ReqCancelAccountField_DeviceID = NULL;
    }
            
    ///期货单位帐号类型
    // TThostFtdcBankAccTypeType char
    self->data.BankSecuAccType = ReqCancelAccountField_BankSecuAccType;
            
    ///期货公司银行编码
    // TThostFtdcBankCodingForFutureType char[33]
    if( ReqCancelAccountField_BrokerIDByBank != NULL ) {
        if(ReqCancelAccountField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
            PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", ReqCancelAccountField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
            return -1;
        }
        // memset(self->data.BrokerIDByBank, 0, sizeof(self->data.BrokerIDByBank));
        // memcpy(self->data.BrokerIDByBank, ReqCancelAccountField_BrokerIDByBank, ReqCancelAccountField_BrokerIDByBank_len);        
        strncpy(self->data.BrokerIDByBank, ReqCancelAccountField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
        ReqCancelAccountField_BrokerIDByBank = NULL;
    }
            
    ///期货单位帐号
    // TThostFtdcBankAccountType char[41]
    if( ReqCancelAccountField_BankSecuAcc != NULL ) {
        if(ReqCancelAccountField_BankSecuAcc_len > (Py_ssize_t)sizeof(self->data.BankSecuAcc)) {
            PyErr_Format(PyExc_ValueError, "BankSecuAcc too long: length=%zd (max allowed is %zd)", ReqCancelAccountField_BankSecuAcc_len, (Py_ssize_t)sizeof(self->data.BankSecuAcc));
            return -1;
        }
        // memset(self->data.BankSecuAcc, 0, sizeof(self->data.BankSecuAcc));
        // memcpy(self->data.BankSecuAcc, ReqCancelAccountField_BankSecuAcc, ReqCancelAccountField_BankSecuAcc_len);        
        strncpy(self->data.BankSecuAcc, ReqCancelAccountField_BankSecuAcc, sizeof(self->data.BankSecuAcc) );
        ReqCancelAccountField_BankSecuAcc = NULL;
    }
            
    ///银行密码标志
    // TThostFtdcPwdFlagType char
    self->data.BankPwdFlag = ReqCancelAccountField_BankPwdFlag;
            
    ///期货资金密码核对标志
    // TThostFtdcPwdFlagType char
    self->data.SecuPwdFlag = ReqCancelAccountField_SecuPwdFlag;
            
    ///交易柜员
    // TThostFtdcOperNoType char[17]
    if( ReqCancelAccountField_OperNo != NULL ) {
        if(ReqCancelAccountField_OperNo_len > (Py_ssize_t)sizeof(self->data.OperNo)) {
            PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is %zd)", ReqCancelAccountField_OperNo_len, (Py_ssize_t)sizeof(self->data.OperNo));
            return -1;
        }
        // memset(self->data.OperNo, 0, sizeof(self->data.OperNo));
        // memcpy(self->data.OperNo, ReqCancelAccountField_OperNo, ReqCancelAccountField_OperNo_len);        
        strncpy(self->data.OperNo, ReqCancelAccountField_OperNo, sizeof(self->data.OperNo) );
        ReqCancelAccountField_OperNo = NULL;
    }
            
    ///交易ID
    // TThostFtdcTIDType int
    self->data.TID = ReqCancelAccountField_TID;
        
    ///用户标识
    // TThostFtdcUserIDType char[16]
    if( ReqCancelAccountField_UserID != NULL ) {
        if(ReqCancelAccountField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", ReqCancelAccountField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, ReqCancelAccountField_UserID, ReqCancelAccountField_UserID_len);        
        strncpy(self->data.UserID, ReqCancelAccountField_UserID, sizeof(self->data.UserID) );
        ReqCancelAccountField_UserID = NULL;
    }
            
    ///长客户姓名
    // TThostFtdcLongIndividualNameType char[161]
    if( ReqCancelAccountField_LongCustomerName != NULL ) {
        if(ReqCancelAccountField_LongCustomerName_len > (Py_ssize_t)sizeof(self->data.LongCustomerName)) {
            PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is %zd)", ReqCancelAccountField_LongCustomerName_len, (Py_ssize_t)sizeof(self->data.LongCustomerName));
            return -1;
        }
        // memset(self->data.LongCustomerName, 0, sizeof(self->data.LongCustomerName));
        // memcpy(self->data.LongCustomerName, ReqCancelAccountField_LongCustomerName, ReqCancelAccountField_LongCustomerName_len);        
        strncpy(self->data.LongCustomerName, ReqCancelAccountField_LongCustomerName, sizeof(self->data.LongCustomerName) );
        ReqCancelAccountField_LongCustomerName = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcReqCancelAccountField_dealloc(PyCThostFtdcReqCancelAccountField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcReqCancelAccountField_repr(PyCThostFtdcReqCancelAccountField *self) {

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqCancelAccountField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///业务功能码
// TThostFtdcTradeCodeType char[7]
static PyObject *PyCThostFtdcReqCancelAccountField_get_TradeCode(PyCThostFtdcReqCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeCode, (Py_ssize_t)sizeof(self->data.TradeCode));
    return PyBytes_FromString(self->data.TradeCode);
}

///业务功能码
// TThostFtdcTradeCodeType char[7]
static int PyCThostFtdcReqCancelAccountField_set_TradeCode(PyCThostFtdcReqCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqCancelAccountField_get_BankID(PyCThostFtdcReqCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankID, (Py_ssize_t)sizeof(self->data.BankID));
    return PyBytes_FromString(self->data.BankID);
}

///银行代码
// TThostFtdcBankIDType char[4]
static int PyCThostFtdcReqCancelAccountField_set_BankID(PyCThostFtdcReqCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqCancelAccountField_get_BankBranchID(PyCThostFtdcReqCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankBranchID, (Py_ssize_t)sizeof(self->data.BankBranchID));
    return PyBytes_FromString(self->data.BankBranchID);
}

///银行分支机构代码
// TThostFtdcBankBrchIDType char[5]
static int PyCThostFtdcReqCancelAccountField_set_BankBranchID(PyCThostFtdcReqCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqCancelAccountField_get_BrokerID(PyCThostFtdcReqCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///期商代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcReqCancelAccountField_set_BrokerID(PyCThostFtdcReqCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqCancelAccountField_get_BrokerBranchID(PyCThostFtdcReqCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerBranchID, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
    return PyBytes_FromString(self->data.BrokerBranchID);
}

///期商分支机构代码
// TThostFtdcFutureBranchIDType char[31]
static int PyCThostFtdcReqCancelAccountField_set_BrokerBranchID(PyCThostFtdcReqCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqCancelAccountField_get_TradeDate(PyCThostFtdcReqCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeDate, (Py_ssize_t)sizeof(self->data.TradeDate));
    return PyBytes_FromString(self->data.TradeDate);
}

///交易日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcReqCancelAccountField_set_TradeDate(PyCThostFtdcReqCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqCancelAccountField_get_TradeTime(PyCThostFtdcReqCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeTime, (Py_ssize_t)sizeof(self->data.TradeTime));
    return PyBytes_FromString(self->data.TradeTime);
}

///交易时间
// TThostFtdcTradeTimeType char[9]
static int PyCThostFtdcReqCancelAccountField_set_TradeTime(PyCThostFtdcReqCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqCancelAccountField_get_BankSerial(PyCThostFtdcReqCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankSerial, (Py_ssize_t)sizeof(self->data.BankSerial));
    return PyBytes_FromString(self->data.BankSerial);
}

///银行流水号
// TThostFtdcBankSerialType char[13]
static int PyCThostFtdcReqCancelAccountField_set_BankSerial(PyCThostFtdcReqCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqCancelAccountField_get_TradingDay(PyCThostFtdcReqCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易系统日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcReqCancelAccountField_set_TradingDay(PyCThostFtdcReqCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqCancelAccountField_get_PlateSerial(PyCThostFtdcReqCancelAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.PlateSerial);
#else
    return PyInt_FromLong(self->data.PlateSerial);
#endif
}

///银期平台消息流水号
// TThostFtdcSerialType int
static int PyCThostFtdcReqCancelAccountField_set_PlateSerial(PyCThostFtdcReqCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqCancelAccountField_get_LastFragment(PyCThostFtdcReqCancelAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

///最后分片标志
// TThostFtdcLastFragmentType char
static int PyCThostFtdcReqCancelAccountField_set_LastFragment(PyCThostFtdcReqCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqCancelAccountField_get_SessionID(PyCThostFtdcReqCancelAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话号
// TThostFtdcSessionIDType int
static int PyCThostFtdcReqCancelAccountField_set_SessionID(PyCThostFtdcReqCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqCancelAccountField_get_CustomerName(PyCThostFtdcReqCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CustomerName, (Py_ssize_t)sizeof(self->data.CustomerName));
    return PyBytes_FromString(self->data.CustomerName);
}

///客户姓名
// TThostFtdcIndividualNameType char[51]
static int PyCThostFtdcReqCancelAccountField_set_CustomerName(PyCThostFtdcReqCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqCancelAccountField_get_IdCardType(PyCThostFtdcReqCancelAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.IdCardType), 1);
}

///证件类型
// TThostFtdcIdCardTypeType char
static int PyCThostFtdcReqCancelAccountField_set_IdCardType(PyCThostFtdcReqCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqCancelAccountField_get_IdentifiedCardNo(PyCThostFtdcReqCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IdentifiedCardNo, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
    return PyBytes_FromString(self->data.IdentifiedCardNo);
}

///证件号码
// TThostFtdcIdentifiedCardNoType char[51]
static int PyCThostFtdcReqCancelAccountField_set_IdentifiedCardNo(PyCThostFtdcReqCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqCancelAccountField_get_Gender(PyCThostFtdcReqCancelAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.Gender), 1);
}

///性别
// TThostFtdcGenderType char
static int PyCThostFtdcReqCancelAccountField_set_Gender(PyCThostFtdcReqCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqCancelAccountField_get_CountryCode(PyCThostFtdcReqCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CountryCode, (Py_ssize_t)sizeof(self->data.CountryCode));
    return PyBytes_FromString(self->data.CountryCode);
}

///国家代码
// TThostFtdcCountryCodeType char[21]
static int PyCThostFtdcReqCancelAccountField_set_CountryCode(PyCThostFtdcReqCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqCancelAccountField_get_CustType(PyCThostFtdcReqCancelAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.CustType), 1);
}

///客户类型
// TThostFtdcCustTypeType char
static int PyCThostFtdcReqCancelAccountField_set_CustType(PyCThostFtdcReqCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqCancelAccountField_get_Address(PyCThostFtdcReqCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Address, (Py_ssize_t)sizeof(self->data.Address));
    return PyBytes_FromString(self->data.Address);
}

///地址
// TThostFtdcAddressType char[101]
static int PyCThostFtdcReqCancelAccountField_set_Address(PyCThostFtdcReqCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqCancelAccountField_get_ZipCode(PyCThostFtdcReqCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ZipCode, (Py_ssize_t)sizeof(self->data.ZipCode));
    return PyBytes_FromString(self->data.ZipCode);
}

///邮编
// TThostFtdcZipCodeType char[7]
static int PyCThostFtdcReqCancelAccountField_set_ZipCode(PyCThostFtdcReqCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqCancelAccountField_get_Telephone(PyCThostFtdcReqCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Telephone, (Py_ssize_t)sizeof(self->data.Telephone));
    return PyBytes_FromString(self->data.Telephone);
}

///电话号码
// TThostFtdcTelephoneType char[41]
static int PyCThostFtdcReqCancelAccountField_set_Telephone(PyCThostFtdcReqCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqCancelAccountField_get_MobilePhone(PyCThostFtdcReqCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MobilePhone, (Py_ssize_t)sizeof(self->data.MobilePhone));
    return PyBytes_FromString(self->data.MobilePhone);
}

///手机
// TThostFtdcMobilePhoneType char[21]
static int PyCThostFtdcReqCancelAccountField_set_MobilePhone(PyCThostFtdcReqCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqCancelAccountField_get_Fax(PyCThostFtdcReqCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Fax, (Py_ssize_t)sizeof(self->data.Fax));
    return PyBytes_FromString(self->data.Fax);
}

///传真
// TThostFtdcFaxType char[41]
static int PyCThostFtdcReqCancelAccountField_set_Fax(PyCThostFtdcReqCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqCancelAccountField_get_EMail(PyCThostFtdcReqCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.EMail, (Py_ssize_t)sizeof(self->data.EMail));
    return PyBytes_FromString(self->data.EMail);
}

///电子邮件
// TThostFtdcEMailType char[41]
static int PyCThostFtdcReqCancelAccountField_set_EMail(PyCThostFtdcReqCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqCancelAccountField_get_MoneyAccountStatus(PyCThostFtdcReqCancelAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.MoneyAccountStatus), 1);
}

///资金账户状态
// TThostFtdcMoneyAccountStatusType char
static int PyCThostFtdcReqCancelAccountField_set_MoneyAccountStatus(PyCThostFtdcReqCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqCancelAccountField_get_BankAccount(PyCThostFtdcReqCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankAccount, (Py_ssize_t)sizeof(self->data.BankAccount));
    return PyBytes_FromString(self->data.BankAccount);
}

///银行帐号
// TThostFtdcBankAccountType char[41]
static int PyCThostFtdcReqCancelAccountField_set_BankAccount(PyCThostFtdcReqCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqCancelAccountField_get_BankPassWord(PyCThostFtdcReqCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankPassWord, (Py_ssize_t)sizeof(self->data.BankPassWord));
    return PyBytes_FromString(self->data.BankPassWord);
}

///银行密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcReqCancelAccountField_set_BankPassWord(PyCThostFtdcReqCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqCancelAccountField_get_AccountID(PyCThostFtdcReqCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AccountID, (Py_ssize_t)sizeof(self->data.AccountID));
    return PyBytes_FromString(self->data.AccountID);
}

///投资者帐号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcReqCancelAccountField_set_AccountID(PyCThostFtdcReqCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqCancelAccountField_get_Password(PyCThostFtdcReqCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Password, (Py_ssize_t)sizeof(self->data.Password));
    return PyBytes_FromString(self->data.Password);
}

///期货密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcReqCancelAccountField_set_Password(PyCThostFtdcReqCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqCancelAccountField_get_InstallID(PyCThostFtdcReqCancelAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcReqCancelAccountField_set_InstallID(PyCThostFtdcReqCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqCancelAccountField_get_VerifyCertNoFlag(PyCThostFtdcReqCancelAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.VerifyCertNoFlag), 1);
}

///验证客户证件号码标志
// TThostFtdcYesNoIndicatorType char
static int PyCThostFtdcReqCancelAccountField_set_VerifyCertNoFlag(PyCThostFtdcReqCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqCancelAccountField_get_CurrencyID(PyCThostFtdcReqCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcReqCancelAccountField_set_CurrencyID(PyCThostFtdcReqCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqCancelAccountField_get_CashExchangeCode(PyCThostFtdcReqCancelAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.CashExchangeCode), 1);
}

///汇钞标志
// TThostFtdcCashExchangeCodeType char
static int PyCThostFtdcReqCancelAccountField_set_CashExchangeCode(PyCThostFtdcReqCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqCancelAccountField_get_Digest(PyCThostFtdcReqCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Digest, (Py_ssize_t)sizeof(self->data.Digest));
    return PyBytes_FromString(self->data.Digest);
}

///摘要
// TThostFtdcDigestType char[36]
static int PyCThostFtdcReqCancelAccountField_set_Digest(PyCThostFtdcReqCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqCancelAccountField_get_BankAccType(PyCThostFtdcReqCancelAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BankAccType), 1);
}

///银行帐号类型
// TThostFtdcBankAccTypeType char
static int PyCThostFtdcReqCancelAccountField_set_BankAccType(PyCThostFtdcReqCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqCancelAccountField_get_DeviceID(PyCThostFtdcReqCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.DeviceID, (Py_ssize_t)sizeof(self->data.DeviceID));
    return PyBytes_FromString(self->data.DeviceID);
}

///渠道标志
// TThostFtdcDeviceIDType char[3]
static int PyCThostFtdcReqCancelAccountField_set_DeviceID(PyCThostFtdcReqCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqCancelAccountField_get_BankSecuAccType(PyCThostFtdcReqCancelAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BankSecuAccType), 1);
}

///期货单位帐号类型
// TThostFtdcBankAccTypeType char
static int PyCThostFtdcReqCancelAccountField_set_BankSecuAccType(PyCThostFtdcReqCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqCancelAccountField_get_BrokerIDByBank(PyCThostFtdcReqCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerIDByBank, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
    return PyBytes_FromString(self->data.BrokerIDByBank);
}

///期货公司银行编码
// TThostFtdcBankCodingForFutureType char[33]
static int PyCThostFtdcReqCancelAccountField_set_BrokerIDByBank(PyCThostFtdcReqCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqCancelAccountField_get_BankSecuAcc(PyCThostFtdcReqCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankSecuAcc, (Py_ssize_t)sizeof(self->data.BankSecuAcc));
    return PyBytes_FromString(self->data.BankSecuAcc);
}

///期货单位帐号
// TThostFtdcBankAccountType char[41]
static int PyCThostFtdcReqCancelAccountField_set_BankSecuAcc(PyCThostFtdcReqCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqCancelAccountField_get_BankPwdFlag(PyCThostFtdcReqCancelAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BankPwdFlag), 1);
}

///银行密码标志
// TThostFtdcPwdFlagType char
static int PyCThostFtdcReqCancelAccountField_set_BankPwdFlag(PyCThostFtdcReqCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqCancelAccountField_get_SecuPwdFlag(PyCThostFtdcReqCancelAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.SecuPwdFlag), 1);
}

///期货资金密码核对标志
// TThostFtdcPwdFlagType char
static int PyCThostFtdcReqCancelAccountField_set_SecuPwdFlag(PyCThostFtdcReqCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqCancelAccountField_get_OperNo(PyCThostFtdcReqCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OperNo, (Py_ssize_t)sizeof(self->data.OperNo));
    return PyBytes_FromString(self->data.OperNo);
}

///交易柜员
// TThostFtdcOperNoType char[17]
static int PyCThostFtdcReqCancelAccountField_set_OperNo(PyCThostFtdcReqCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqCancelAccountField_get_TID(PyCThostFtdcReqCancelAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.TID);
#else
    return PyInt_FromLong(self->data.TID);
#endif
}

///交易ID
// TThostFtdcTIDType int
static int PyCThostFtdcReqCancelAccountField_set_TID(PyCThostFtdcReqCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqCancelAccountField_get_UserID(PyCThostFtdcReqCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户标识
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcReqCancelAccountField_set_UserID(PyCThostFtdcReqCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqCancelAccountField_get_LongCustomerName(PyCThostFtdcReqCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.LongCustomerName, (Py_ssize_t)sizeof(self->data.LongCustomerName));
    return PyBytes_FromString(self->data.LongCustomerName);
}

///长客户姓名
// TThostFtdcLongIndividualNameType char[161]
static int PyCThostFtdcReqCancelAccountField_set_LongCustomerName(PyCThostFtdcReqCancelAccountField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcReqCancelAccountField_getset[] = {
    ///业务功能码 
    {(char *)"TradeCode", (getter)PyCThostFtdcReqCancelAccountField_get_TradeCode, (setter)PyCThostFtdcReqCancelAccountField_set_TradeCode, (char *)"TradeCode", NULL},
    ///银行代码 
    {(char *)"BankID", (getter)PyCThostFtdcReqCancelAccountField_get_BankID, (setter)PyCThostFtdcReqCancelAccountField_set_BankID, (char *)"BankID", NULL},
    ///银行分支机构代码 
    {(char *)"BankBranchID", (getter)PyCThostFtdcReqCancelAccountField_get_BankBranchID, (setter)PyCThostFtdcReqCancelAccountField_set_BankBranchID, (char *)"BankBranchID", NULL},
    ///期商代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcReqCancelAccountField_get_BrokerID, (setter)PyCThostFtdcReqCancelAccountField_set_BrokerID, (char *)"BrokerID", NULL},
    ///期商分支机构代码 
    {(char *)"BrokerBranchID", (getter)PyCThostFtdcReqCancelAccountField_get_BrokerBranchID, (setter)PyCThostFtdcReqCancelAccountField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
    ///交易日期 
    {(char *)"TradeDate", (getter)PyCThostFtdcReqCancelAccountField_get_TradeDate, (setter)PyCThostFtdcReqCancelAccountField_set_TradeDate, (char *)"TradeDate", NULL},
    ///交易时间 
    {(char *)"TradeTime", (getter)PyCThostFtdcReqCancelAccountField_get_TradeTime, (setter)PyCThostFtdcReqCancelAccountField_set_TradeTime, (char *)"TradeTime", NULL},
    ///银行流水号 
    {(char *)"BankSerial", (getter)PyCThostFtdcReqCancelAccountField_get_BankSerial, (setter)PyCThostFtdcReqCancelAccountField_set_BankSerial, (char *)"BankSerial", NULL},
    ///交易系统日期 
    {(char *)"TradingDay", (getter)PyCThostFtdcReqCancelAccountField_get_TradingDay, (setter)PyCThostFtdcReqCancelAccountField_set_TradingDay, (char *)"TradingDay", NULL},
    ///银期平台消息流水号 
    {(char *)"PlateSerial", (getter)PyCThostFtdcReqCancelAccountField_get_PlateSerial, (setter)PyCThostFtdcReqCancelAccountField_set_PlateSerial, (char *)"PlateSerial", NULL},
    ///最后分片标志 
    {(char *)"LastFragment", (getter)PyCThostFtdcReqCancelAccountField_get_LastFragment, (setter)PyCThostFtdcReqCancelAccountField_set_LastFragment, (char *)"LastFragment", NULL},
    ///会话号 
    {(char *)"SessionID", (getter)PyCThostFtdcReqCancelAccountField_get_SessionID, (setter)PyCThostFtdcReqCancelAccountField_set_SessionID, (char *)"SessionID", NULL},
    ///客户姓名 
    {(char *)"CustomerName", (getter)PyCThostFtdcReqCancelAccountField_get_CustomerName, (setter)PyCThostFtdcReqCancelAccountField_set_CustomerName, (char *)"CustomerName", NULL},
    ///证件类型 
    {(char *)"IdCardType", (getter)PyCThostFtdcReqCancelAccountField_get_IdCardType, (setter)PyCThostFtdcReqCancelAccountField_set_IdCardType, (char *)"IdCardType", NULL},
    ///证件号码 
    {(char *)"IdentifiedCardNo", (getter)PyCThostFtdcReqCancelAccountField_get_IdentifiedCardNo, (setter)PyCThostFtdcReqCancelAccountField_set_IdentifiedCardNo, (char *)"IdentifiedCardNo", NULL},
    ///性别 
    {(char *)"Gender", (getter)PyCThostFtdcReqCancelAccountField_get_Gender, (setter)PyCThostFtdcReqCancelAccountField_set_Gender, (char *)"Gender", NULL},
    ///国家代码 
    {(char *)"CountryCode", (getter)PyCThostFtdcReqCancelAccountField_get_CountryCode, (setter)PyCThostFtdcReqCancelAccountField_set_CountryCode, (char *)"CountryCode", NULL},
    ///客户类型 
    {(char *)"CustType", (getter)PyCThostFtdcReqCancelAccountField_get_CustType, (setter)PyCThostFtdcReqCancelAccountField_set_CustType, (char *)"CustType", NULL},
    ///地址 
    {(char *)"Address", (getter)PyCThostFtdcReqCancelAccountField_get_Address, (setter)PyCThostFtdcReqCancelAccountField_set_Address, (char *)"Address", NULL},
    ///邮编 
    {(char *)"ZipCode", (getter)PyCThostFtdcReqCancelAccountField_get_ZipCode, (setter)PyCThostFtdcReqCancelAccountField_set_ZipCode, (char *)"ZipCode", NULL},
    ///电话号码 
    {(char *)"Telephone", (getter)PyCThostFtdcReqCancelAccountField_get_Telephone, (setter)PyCThostFtdcReqCancelAccountField_set_Telephone, (char *)"Telephone", NULL},
    ///手机 
    {(char *)"MobilePhone", (getter)PyCThostFtdcReqCancelAccountField_get_MobilePhone, (setter)PyCThostFtdcReqCancelAccountField_set_MobilePhone, (char *)"MobilePhone", NULL},
    ///传真 
    {(char *)"Fax", (getter)PyCThostFtdcReqCancelAccountField_get_Fax, (setter)PyCThostFtdcReqCancelAccountField_set_Fax, (char *)"Fax", NULL},
    ///电子邮件 
    {(char *)"EMail", (getter)PyCThostFtdcReqCancelAccountField_get_EMail, (setter)PyCThostFtdcReqCancelAccountField_set_EMail, (char *)"EMail", NULL},
    ///资金账户状态 
    {(char *)"MoneyAccountStatus", (getter)PyCThostFtdcReqCancelAccountField_get_MoneyAccountStatus, (setter)PyCThostFtdcReqCancelAccountField_set_MoneyAccountStatus, (char *)"MoneyAccountStatus", NULL},
    ///银行帐号 
    {(char *)"BankAccount", (getter)PyCThostFtdcReqCancelAccountField_get_BankAccount, (setter)PyCThostFtdcReqCancelAccountField_set_BankAccount, (char *)"BankAccount", NULL},
    ///银行密码 
    {(char *)"BankPassWord", (getter)PyCThostFtdcReqCancelAccountField_get_BankPassWord, (setter)PyCThostFtdcReqCancelAccountField_set_BankPassWord, (char *)"BankPassWord", NULL},
    ///投资者帐号 
    {(char *)"AccountID", (getter)PyCThostFtdcReqCancelAccountField_get_AccountID, (setter)PyCThostFtdcReqCancelAccountField_set_AccountID, (char *)"AccountID", NULL},
    ///期货密码 
    {(char *)"Password", (getter)PyCThostFtdcReqCancelAccountField_get_Password, (setter)PyCThostFtdcReqCancelAccountField_set_Password, (char *)"Password", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcReqCancelAccountField_get_InstallID, (setter)PyCThostFtdcReqCancelAccountField_set_InstallID, (char *)"InstallID", NULL},
    ///验证客户证件号码标志 
    {(char *)"VerifyCertNoFlag", (getter)PyCThostFtdcReqCancelAccountField_get_VerifyCertNoFlag, (setter)PyCThostFtdcReqCancelAccountField_set_VerifyCertNoFlag, (char *)"VerifyCertNoFlag", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcReqCancelAccountField_get_CurrencyID, (setter)PyCThostFtdcReqCancelAccountField_set_CurrencyID, (char *)"CurrencyID", NULL},
    ///汇钞标志 
    {(char *)"CashExchangeCode", (getter)PyCThostFtdcReqCancelAccountField_get_CashExchangeCode, (setter)PyCThostFtdcReqCancelAccountField_set_CashExchangeCode, (char *)"CashExchangeCode", NULL},
    ///摘要 
    {(char *)"Digest", (getter)PyCThostFtdcReqCancelAccountField_get_Digest, (setter)PyCThostFtdcReqCancelAccountField_set_Digest, (char *)"Digest", NULL},
    ///银行帐号类型 
    {(char *)"BankAccType", (getter)PyCThostFtdcReqCancelAccountField_get_BankAccType, (setter)PyCThostFtdcReqCancelAccountField_set_BankAccType, (char *)"BankAccType", NULL},
    ///渠道标志 
    {(char *)"DeviceID", (getter)PyCThostFtdcReqCancelAccountField_get_DeviceID, (setter)PyCThostFtdcReqCancelAccountField_set_DeviceID, (char *)"DeviceID", NULL},
    ///期货单位帐号类型 
    {(char *)"BankSecuAccType", (getter)PyCThostFtdcReqCancelAccountField_get_BankSecuAccType, (setter)PyCThostFtdcReqCancelAccountField_set_BankSecuAccType, (char *)"BankSecuAccType", NULL},
    ///期货公司银行编码 
    {(char *)"BrokerIDByBank", (getter)PyCThostFtdcReqCancelAccountField_get_BrokerIDByBank, (setter)PyCThostFtdcReqCancelAccountField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
    ///期货单位帐号 
    {(char *)"BankSecuAcc", (getter)PyCThostFtdcReqCancelAccountField_get_BankSecuAcc, (setter)PyCThostFtdcReqCancelAccountField_set_BankSecuAcc, (char *)"BankSecuAcc", NULL},
    ///银行密码标志 
    {(char *)"BankPwdFlag", (getter)PyCThostFtdcReqCancelAccountField_get_BankPwdFlag, (setter)PyCThostFtdcReqCancelAccountField_set_BankPwdFlag, (char *)"BankPwdFlag", NULL},
    ///期货资金密码核对标志 
    {(char *)"SecuPwdFlag", (getter)PyCThostFtdcReqCancelAccountField_get_SecuPwdFlag, (setter)PyCThostFtdcReqCancelAccountField_set_SecuPwdFlag, (char *)"SecuPwdFlag", NULL},
    ///交易柜员 
    {(char *)"OperNo", (getter)PyCThostFtdcReqCancelAccountField_get_OperNo, (setter)PyCThostFtdcReqCancelAccountField_set_OperNo, (char *)"OperNo", NULL},
    ///交易ID 
    {(char *)"TID", (getter)PyCThostFtdcReqCancelAccountField_get_TID, (setter)PyCThostFtdcReqCancelAccountField_set_TID, (char *)"TID", NULL},
    ///用户标识 
    {(char *)"UserID", (getter)PyCThostFtdcReqCancelAccountField_get_UserID, (setter)PyCThostFtdcReqCancelAccountField_set_UserID, (char *)"UserID", NULL},
    ///长客户姓名 
    {(char *)"LongCustomerName", (getter)PyCThostFtdcReqCancelAccountField_get_LongCustomerName, (setter)PyCThostFtdcReqCancelAccountField_set_LongCustomerName, (char *)"LongCustomerName", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcReqCancelAccountFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcReqCancelAccountField",	/* tp_name */
	sizeof(PyCThostFtdcReqCancelAccountField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcReqCancelAccountField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcReqCancelAccountField_repr,   /* tp_repr */
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
	"CThostFtdcReqCancelAccountField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcReqCancelAccountField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcReqCancelAccountField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcReqCancelAccountField_new,       /* tp_new */
};

int PyCThostFtdcReqCancelAccountFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcReqCancelAccountField  */
	if (PyType_Ready(&PyCThostFtdcReqCancelAccountFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcReqCancelAccountField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcReqCancelAccountFieldType);
    if( PyModule_AddObject(module, "CThostFtdcReqCancelAccountField", (PyObject *)&PyCThostFtdcReqCancelAccountFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqCancelAccountField to module");
        Py_DECREF(&PyCThostFtdcReqCancelAccountFieldType);
		return -1;
    }

    return 0;
}
