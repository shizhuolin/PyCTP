
#include "PyCThostFtdcCancelAccountField.h"

///银期销户信息

static PyObject *PyCThostFtdcCancelAccountField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcCancelAccountField *self = (PyCThostFtdcCancelAccountField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcCancelAccountField_init(PyCThostFtdcCancelAccountField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "Gender", "CountryCode", "CustType", "Address", "ZipCode", "Telephone", "MobilePhone", "Fax", "EMail", "MoneyAccountStatus", "BankAccount", "BankPassWord", "AccountID", "Password", "InstallID", "VerifyCertNoFlag", "CurrencyID", "CashExchangeCode", "Digest", "BankAccType", "DeviceID", "BankSecuAccType", "BrokerIDByBank", "BankSecuAcc", "BankPwdFlag", "SecuPwdFlag", "OperNo", "TID", "UserID", "ErrorID", "ErrorMsg", "LongCustomerName",  NULL};


    ///业务功能码
    // TThostFtdcTradeCodeType char[7]
    const char *CancelAccountField_TradeCode = NULL;
    Py_ssize_t CancelAccountField_TradeCode_len = 0;
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    const char *CancelAccountField_BankID = NULL;
    Py_ssize_t CancelAccountField_BankID_len = 0;
            
    ///银行分支机构代码
    // TThostFtdcBankBrchIDType char[5]
    const char *CancelAccountField_BankBranchID = NULL;
    Py_ssize_t CancelAccountField_BankBranchID_len = 0;
            
    ///期商代码
    // TThostFtdcBrokerIDType char[11]
    const char *CancelAccountField_BrokerID = NULL;
    Py_ssize_t CancelAccountField_BrokerID_len = 0;
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    const char *CancelAccountField_BrokerBranchID = NULL;
    Py_ssize_t CancelAccountField_BrokerBranchID_len = 0;
            
    ///交易日期
    // TThostFtdcTradeDateType char[9]
    const char *CancelAccountField_TradeDate = NULL;
    Py_ssize_t CancelAccountField_TradeDate_len = 0;
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    const char *CancelAccountField_TradeTime = NULL;
    Py_ssize_t CancelAccountField_TradeTime_len = 0;
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    const char *CancelAccountField_BankSerial = NULL;
    Py_ssize_t CancelAccountField_BankSerial_len = 0;
            
    ///交易系统日期
    // TThostFtdcTradeDateType char[9]
    const char *CancelAccountField_TradingDay = NULL;
    Py_ssize_t CancelAccountField_TradingDay_len = 0;
            
    ///银期平台消息流水号
    // TThostFtdcSerialType int
    int CancelAccountField_PlateSerial = 0;
        
    ///最后分片标志
    // TThostFtdcLastFragmentType char
    char CancelAccountField_LastFragment = 0;
            
    ///会话号
    // TThostFtdcSessionIDType int
    int CancelAccountField_SessionID = 0;
        
    ///客户姓名
    // TThostFtdcIndividualNameType char[51]
    const char *CancelAccountField_CustomerName = NULL;
    Py_ssize_t CancelAccountField_CustomerName_len = 0;
            
    ///证件类型
    // TThostFtdcIdCardTypeType char
    char CancelAccountField_IdCardType = 0;
            
    ///证件号码
    // TThostFtdcIdentifiedCardNoType char[51]
    const char *CancelAccountField_IdentifiedCardNo = NULL;
    Py_ssize_t CancelAccountField_IdentifiedCardNo_len = 0;
            
    ///性别
    // TThostFtdcGenderType char
    char CancelAccountField_Gender = 0;
            
    ///国家代码
    // TThostFtdcCountryCodeType char[21]
    const char *CancelAccountField_CountryCode = NULL;
    Py_ssize_t CancelAccountField_CountryCode_len = 0;
            
    ///客户类型
    // TThostFtdcCustTypeType char
    char CancelAccountField_CustType = 0;
            
    ///地址
    // TThostFtdcAddressType char[101]
    const char *CancelAccountField_Address = NULL;
    Py_ssize_t CancelAccountField_Address_len = 0;
            
    ///邮编
    // TThostFtdcZipCodeType char[7]
    const char *CancelAccountField_ZipCode = NULL;
    Py_ssize_t CancelAccountField_ZipCode_len = 0;
            
    ///电话号码
    // TThostFtdcTelephoneType char[41]
    const char *CancelAccountField_Telephone = NULL;
    Py_ssize_t CancelAccountField_Telephone_len = 0;
            
    ///手机
    // TThostFtdcMobilePhoneType char[21]
    const char *CancelAccountField_MobilePhone = NULL;
    Py_ssize_t CancelAccountField_MobilePhone_len = 0;
            
    ///传真
    // TThostFtdcFaxType char[41]
    const char *CancelAccountField_Fax = NULL;
    Py_ssize_t CancelAccountField_Fax_len = 0;
            
    ///电子邮件
    // TThostFtdcEMailType char[41]
    const char *CancelAccountField_EMail = NULL;
    Py_ssize_t CancelAccountField_EMail_len = 0;
            
    ///资金账户状态
    // TThostFtdcMoneyAccountStatusType char
    char CancelAccountField_MoneyAccountStatus = 0;
            
    ///银行帐号
    // TThostFtdcBankAccountType char[41]
    const char *CancelAccountField_BankAccount = NULL;
    Py_ssize_t CancelAccountField_BankAccount_len = 0;
            
    ///银行密码
    // TThostFtdcPasswordType char[41]
    const char *CancelAccountField_BankPassWord = NULL;
    Py_ssize_t CancelAccountField_BankPassWord_len = 0;
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    const char *CancelAccountField_AccountID = NULL;
    Py_ssize_t CancelAccountField_AccountID_len = 0;
            
    ///期货密码
    // TThostFtdcPasswordType char[41]
    const char *CancelAccountField_Password = NULL;
    Py_ssize_t CancelAccountField_Password_len = 0;
            
    ///安装编号
    // TThostFtdcInstallIDType int
    int CancelAccountField_InstallID = 0;
        
    ///验证客户证件号码标志
    // TThostFtdcYesNoIndicatorType char
    char CancelAccountField_VerifyCertNoFlag = 0;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *CancelAccountField_CurrencyID = NULL;
    Py_ssize_t CancelAccountField_CurrencyID_len = 0;
            
    ///汇钞标志
    // TThostFtdcCashExchangeCodeType char
    char CancelAccountField_CashExchangeCode = 0;
            
    ///摘要
    // TThostFtdcDigestType char[36]
    const char *CancelAccountField_Digest = NULL;
    Py_ssize_t CancelAccountField_Digest_len = 0;
            
    ///银行帐号类型
    // TThostFtdcBankAccTypeType char
    char CancelAccountField_BankAccType = 0;
            
    ///渠道标志
    // TThostFtdcDeviceIDType char[3]
    const char *CancelAccountField_DeviceID = NULL;
    Py_ssize_t CancelAccountField_DeviceID_len = 0;
            
    ///期货单位帐号类型
    // TThostFtdcBankAccTypeType char
    char CancelAccountField_BankSecuAccType = 0;
            
    ///期货公司银行编码
    // TThostFtdcBankCodingForFutureType char[33]
    const char *CancelAccountField_BrokerIDByBank = NULL;
    Py_ssize_t CancelAccountField_BrokerIDByBank_len = 0;
            
    ///期货单位帐号
    // TThostFtdcBankAccountType char[41]
    const char *CancelAccountField_BankSecuAcc = NULL;
    Py_ssize_t CancelAccountField_BankSecuAcc_len = 0;
            
    ///银行密码标志
    // TThostFtdcPwdFlagType char
    char CancelAccountField_BankPwdFlag = 0;
            
    ///期货资金密码核对标志
    // TThostFtdcPwdFlagType char
    char CancelAccountField_SecuPwdFlag = 0;
            
    ///交易柜员
    // TThostFtdcOperNoType char[17]
    const char *CancelAccountField_OperNo = NULL;
    Py_ssize_t CancelAccountField_OperNo_len = 0;
            
    ///交易ID
    // TThostFtdcTIDType int
    int CancelAccountField_TID = 0;
        
    ///用户标识
    // TThostFtdcUserIDType char[16]
    const char *CancelAccountField_UserID = NULL;
    Py_ssize_t CancelAccountField_UserID_len = 0;
            
    ///错误代码
    // TThostFtdcErrorIDType int
    int CancelAccountField_ErrorID = 0;
        
    ///错误信息
    // TThostFtdcErrorMsgType char[81]
    const char *CancelAccountField_ErrorMsg = NULL;
    Py_ssize_t CancelAccountField_ErrorMsg_len = 0;
            
    ///长客户姓名
    // TThostFtdcLongIndividualNameType char[161]
    const char *CancelAccountField_LongCustomerName = NULL;
    Py_ssize_t CancelAccountField_LongCustomerName_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciy#cy#cy#cy#y#y#y#y#y#cy#y#y#y#icy#cy#cy#cy#y#ccy#iy#iy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#icis#cs#cs#cs#s#s#s#s#s#cs#s#s#s#ics#cs#cs#cs#s#ccs#is#is#s#", (char **)kwlist
#endif

        , &CancelAccountField_TradeCode, &CancelAccountField_TradeCode_len 
        , &CancelAccountField_BankID, &CancelAccountField_BankID_len 
        , &CancelAccountField_BankBranchID, &CancelAccountField_BankBranchID_len 
        , &CancelAccountField_BrokerID, &CancelAccountField_BrokerID_len 
        , &CancelAccountField_BrokerBranchID, &CancelAccountField_BrokerBranchID_len 
        , &CancelAccountField_TradeDate, &CancelAccountField_TradeDate_len 
        , &CancelAccountField_TradeTime, &CancelAccountField_TradeTime_len 
        , &CancelAccountField_BankSerial, &CancelAccountField_BankSerial_len 
        , &CancelAccountField_TradingDay, &CancelAccountField_TradingDay_len 
        , &CancelAccountField_PlateSerial 
        , &CancelAccountField_LastFragment 
        , &CancelAccountField_SessionID 
        , &CancelAccountField_CustomerName, &CancelAccountField_CustomerName_len 
        , &CancelAccountField_IdCardType 
        , &CancelAccountField_IdentifiedCardNo, &CancelAccountField_IdentifiedCardNo_len 
        , &CancelAccountField_Gender 
        , &CancelAccountField_CountryCode, &CancelAccountField_CountryCode_len 
        , &CancelAccountField_CustType 
        , &CancelAccountField_Address, &CancelAccountField_Address_len 
        , &CancelAccountField_ZipCode, &CancelAccountField_ZipCode_len 
        , &CancelAccountField_Telephone, &CancelAccountField_Telephone_len 
        , &CancelAccountField_MobilePhone, &CancelAccountField_MobilePhone_len 
        , &CancelAccountField_Fax, &CancelAccountField_Fax_len 
        , &CancelAccountField_EMail, &CancelAccountField_EMail_len 
        , &CancelAccountField_MoneyAccountStatus 
        , &CancelAccountField_BankAccount, &CancelAccountField_BankAccount_len 
        , &CancelAccountField_BankPassWord, &CancelAccountField_BankPassWord_len 
        , &CancelAccountField_AccountID, &CancelAccountField_AccountID_len 
        , &CancelAccountField_Password, &CancelAccountField_Password_len 
        , &CancelAccountField_InstallID 
        , &CancelAccountField_VerifyCertNoFlag 
        , &CancelAccountField_CurrencyID, &CancelAccountField_CurrencyID_len 
        , &CancelAccountField_CashExchangeCode 
        , &CancelAccountField_Digest, &CancelAccountField_Digest_len 
        , &CancelAccountField_BankAccType 
        , &CancelAccountField_DeviceID, &CancelAccountField_DeviceID_len 
        , &CancelAccountField_BankSecuAccType 
        , &CancelAccountField_BrokerIDByBank, &CancelAccountField_BrokerIDByBank_len 
        , &CancelAccountField_BankSecuAcc, &CancelAccountField_BankSecuAcc_len 
        , &CancelAccountField_BankPwdFlag 
        , &CancelAccountField_SecuPwdFlag 
        , &CancelAccountField_OperNo, &CancelAccountField_OperNo_len 
        , &CancelAccountField_TID 
        , &CancelAccountField_UserID, &CancelAccountField_UserID_len 
        , &CancelAccountField_ErrorID 
        , &CancelAccountField_ErrorMsg, &CancelAccountField_ErrorMsg_len 
        , &CancelAccountField_LongCustomerName, &CancelAccountField_LongCustomerName_len 


    )) {
        return -1;
    }


    ///业务功能码
    // TThostFtdcTradeCodeType char[7]
    if( CancelAccountField_TradeCode != NULL ) {
        if(CancelAccountField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", CancelAccountField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
            return -1;
        }
        // memset(self->data.TradeCode, 0, sizeof(self->data.TradeCode));
        // memcpy(self->data.TradeCode, CancelAccountField_TradeCode, CancelAccountField_TradeCode_len);        
        strncpy(self->data.TradeCode, CancelAccountField_TradeCode, sizeof(self->data.TradeCode) );
        CancelAccountField_TradeCode = NULL;
    }
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    if( CancelAccountField_BankID != NULL ) {
        if(CancelAccountField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", CancelAccountField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
            return -1;
        }
        // memset(self->data.BankID, 0, sizeof(self->data.BankID));
        // memcpy(self->data.BankID, CancelAccountField_BankID, CancelAccountField_BankID_len);        
        strncpy(self->data.BankID, CancelAccountField_BankID, sizeof(self->data.BankID) );
        CancelAccountField_BankID = NULL;
    }
            
    ///银行分支机构代码
    // TThostFtdcBankBrchIDType char[5]
    if( CancelAccountField_BankBranchID != NULL ) {
        if(CancelAccountField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", CancelAccountField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
            return -1;
        }
        // memset(self->data.BankBranchID, 0, sizeof(self->data.BankBranchID));
        // memcpy(self->data.BankBranchID, CancelAccountField_BankBranchID, CancelAccountField_BankBranchID_len);        
        strncpy(self->data.BankBranchID, CancelAccountField_BankBranchID, sizeof(self->data.BankBranchID) );
        CancelAccountField_BankBranchID = NULL;
    }
            
    ///期商代码
    // TThostFtdcBrokerIDType char[11]
    if( CancelAccountField_BrokerID != NULL ) {
        if(CancelAccountField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", CancelAccountField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, CancelAccountField_BrokerID, CancelAccountField_BrokerID_len);        
        strncpy(self->data.BrokerID, CancelAccountField_BrokerID, sizeof(self->data.BrokerID) );
        CancelAccountField_BrokerID = NULL;
    }
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    if( CancelAccountField_BrokerBranchID != NULL ) {
        if(CancelAccountField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", CancelAccountField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
            return -1;
        }
        // memset(self->data.BrokerBranchID, 0, sizeof(self->data.BrokerBranchID));
        // memcpy(self->data.BrokerBranchID, CancelAccountField_BrokerBranchID, CancelAccountField_BrokerBranchID_len);        
        strncpy(self->data.BrokerBranchID, CancelAccountField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
        CancelAccountField_BrokerBranchID = NULL;
    }
            
    ///交易日期
    // TThostFtdcTradeDateType char[9]
    if( CancelAccountField_TradeDate != NULL ) {
        if(CancelAccountField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", CancelAccountField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
            return -1;
        }
        // memset(self->data.TradeDate, 0, sizeof(self->data.TradeDate));
        // memcpy(self->data.TradeDate, CancelAccountField_TradeDate, CancelAccountField_TradeDate_len);        
        strncpy(self->data.TradeDate, CancelAccountField_TradeDate, sizeof(self->data.TradeDate) );
        CancelAccountField_TradeDate = NULL;
    }
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    if( CancelAccountField_TradeTime != NULL ) {
        if(CancelAccountField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", CancelAccountField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
            return -1;
        }
        // memset(self->data.TradeTime, 0, sizeof(self->data.TradeTime));
        // memcpy(self->data.TradeTime, CancelAccountField_TradeTime, CancelAccountField_TradeTime_len);        
        strncpy(self->data.TradeTime, CancelAccountField_TradeTime, sizeof(self->data.TradeTime) );
        CancelAccountField_TradeTime = NULL;
    }
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    if( CancelAccountField_BankSerial != NULL ) {
        if(CancelAccountField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", CancelAccountField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
            return -1;
        }
        // memset(self->data.BankSerial, 0, sizeof(self->data.BankSerial));
        // memcpy(self->data.BankSerial, CancelAccountField_BankSerial, CancelAccountField_BankSerial_len);        
        strncpy(self->data.BankSerial, CancelAccountField_BankSerial, sizeof(self->data.BankSerial) );
        CancelAccountField_BankSerial = NULL;
    }
            
    ///交易系统日期
    // TThostFtdcTradeDateType char[9]
    if( CancelAccountField_TradingDay != NULL ) {
        if(CancelAccountField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", CancelAccountField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, CancelAccountField_TradingDay, CancelAccountField_TradingDay_len);        
        strncpy(self->data.TradingDay, CancelAccountField_TradingDay, sizeof(self->data.TradingDay) );
        CancelAccountField_TradingDay = NULL;
    }
            
    ///银期平台消息流水号
    // TThostFtdcSerialType int
    self->data.PlateSerial = CancelAccountField_PlateSerial;
        
    ///最后分片标志
    // TThostFtdcLastFragmentType char
    self->data.LastFragment = CancelAccountField_LastFragment;
            
    ///会话号
    // TThostFtdcSessionIDType int
    self->data.SessionID = CancelAccountField_SessionID;
        
    ///客户姓名
    // TThostFtdcIndividualNameType char[51]
    if( CancelAccountField_CustomerName != NULL ) {
        if(CancelAccountField_CustomerName_len > (Py_ssize_t)sizeof(self->data.CustomerName)) {
            PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is %zd)", CancelAccountField_CustomerName_len, (Py_ssize_t)sizeof(self->data.CustomerName));
            return -1;
        }
        // memset(self->data.CustomerName, 0, sizeof(self->data.CustomerName));
        // memcpy(self->data.CustomerName, CancelAccountField_CustomerName, CancelAccountField_CustomerName_len);        
        strncpy(self->data.CustomerName, CancelAccountField_CustomerName, sizeof(self->data.CustomerName) );
        CancelAccountField_CustomerName = NULL;
    }
            
    ///证件类型
    // TThostFtdcIdCardTypeType char
    self->data.IdCardType = CancelAccountField_IdCardType;
            
    ///证件号码
    // TThostFtdcIdentifiedCardNoType char[51]
    if( CancelAccountField_IdentifiedCardNo != NULL ) {
        if(CancelAccountField_IdentifiedCardNo_len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
            PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is %zd)", CancelAccountField_IdentifiedCardNo_len, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
            return -1;
        }
        // memset(self->data.IdentifiedCardNo, 0, sizeof(self->data.IdentifiedCardNo));
        // memcpy(self->data.IdentifiedCardNo, CancelAccountField_IdentifiedCardNo, CancelAccountField_IdentifiedCardNo_len);        
        strncpy(self->data.IdentifiedCardNo, CancelAccountField_IdentifiedCardNo, sizeof(self->data.IdentifiedCardNo) );
        CancelAccountField_IdentifiedCardNo = NULL;
    }
            
    ///性别
    // TThostFtdcGenderType char
    self->data.Gender = CancelAccountField_Gender;
            
    ///国家代码
    // TThostFtdcCountryCodeType char[21]
    if( CancelAccountField_CountryCode != NULL ) {
        if(CancelAccountField_CountryCode_len > (Py_ssize_t)sizeof(self->data.CountryCode)) {
            PyErr_Format(PyExc_ValueError, "CountryCode too long: length=%zd (max allowed is %zd)", CancelAccountField_CountryCode_len, (Py_ssize_t)sizeof(self->data.CountryCode));
            return -1;
        }
        // memset(self->data.CountryCode, 0, sizeof(self->data.CountryCode));
        // memcpy(self->data.CountryCode, CancelAccountField_CountryCode, CancelAccountField_CountryCode_len);        
        strncpy(self->data.CountryCode, CancelAccountField_CountryCode, sizeof(self->data.CountryCode) );
        CancelAccountField_CountryCode = NULL;
    }
            
    ///客户类型
    // TThostFtdcCustTypeType char
    self->data.CustType = CancelAccountField_CustType;
            
    ///地址
    // TThostFtdcAddressType char[101]
    if( CancelAccountField_Address != NULL ) {
        if(CancelAccountField_Address_len > (Py_ssize_t)sizeof(self->data.Address)) {
            PyErr_Format(PyExc_ValueError, "Address too long: length=%zd (max allowed is %zd)", CancelAccountField_Address_len, (Py_ssize_t)sizeof(self->data.Address));
            return -1;
        }
        // memset(self->data.Address, 0, sizeof(self->data.Address));
        // memcpy(self->data.Address, CancelAccountField_Address, CancelAccountField_Address_len);        
        strncpy(self->data.Address, CancelAccountField_Address, sizeof(self->data.Address) );
        CancelAccountField_Address = NULL;
    }
            
    ///邮编
    // TThostFtdcZipCodeType char[7]
    if( CancelAccountField_ZipCode != NULL ) {
        if(CancelAccountField_ZipCode_len > (Py_ssize_t)sizeof(self->data.ZipCode)) {
            PyErr_Format(PyExc_ValueError, "ZipCode too long: length=%zd (max allowed is %zd)", CancelAccountField_ZipCode_len, (Py_ssize_t)sizeof(self->data.ZipCode));
            return -1;
        }
        // memset(self->data.ZipCode, 0, sizeof(self->data.ZipCode));
        // memcpy(self->data.ZipCode, CancelAccountField_ZipCode, CancelAccountField_ZipCode_len);        
        strncpy(self->data.ZipCode, CancelAccountField_ZipCode, sizeof(self->data.ZipCode) );
        CancelAccountField_ZipCode = NULL;
    }
            
    ///电话号码
    // TThostFtdcTelephoneType char[41]
    if( CancelAccountField_Telephone != NULL ) {
        if(CancelAccountField_Telephone_len > (Py_ssize_t)sizeof(self->data.Telephone)) {
            PyErr_Format(PyExc_ValueError, "Telephone too long: length=%zd (max allowed is %zd)", CancelAccountField_Telephone_len, (Py_ssize_t)sizeof(self->data.Telephone));
            return -1;
        }
        // memset(self->data.Telephone, 0, sizeof(self->data.Telephone));
        // memcpy(self->data.Telephone, CancelAccountField_Telephone, CancelAccountField_Telephone_len);        
        strncpy(self->data.Telephone, CancelAccountField_Telephone, sizeof(self->data.Telephone) );
        CancelAccountField_Telephone = NULL;
    }
            
    ///手机
    // TThostFtdcMobilePhoneType char[21]
    if( CancelAccountField_MobilePhone != NULL ) {
        if(CancelAccountField_MobilePhone_len > (Py_ssize_t)sizeof(self->data.MobilePhone)) {
            PyErr_Format(PyExc_ValueError, "MobilePhone too long: length=%zd (max allowed is %zd)", CancelAccountField_MobilePhone_len, (Py_ssize_t)sizeof(self->data.MobilePhone));
            return -1;
        }
        // memset(self->data.MobilePhone, 0, sizeof(self->data.MobilePhone));
        // memcpy(self->data.MobilePhone, CancelAccountField_MobilePhone, CancelAccountField_MobilePhone_len);        
        strncpy(self->data.MobilePhone, CancelAccountField_MobilePhone, sizeof(self->data.MobilePhone) );
        CancelAccountField_MobilePhone = NULL;
    }
            
    ///传真
    // TThostFtdcFaxType char[41]
    if( CancelAccountField_Fax != NULL ) {
        if(CancelAccountField_Fax_len > (Py_ssize_t)sizeof(self->data.Fax)) {
            PyErr_Format(PyExc_ValueError, "Fax too long: length=%zd (max allowed is %zd)", CancelAccountField_Fax_len, (Py_ssize_t)sizeof(self->data.Fax));
            return -1;
        }
        // memset(self->data.Fax, 0, sizeof(self->data.Fax));
        // memcpy(self->data.Fax, CancelAccountField_Fax, CancelAccountField_Fax_len);        
        strncpy(self->data.Fax, CancelAccountField_Fax, sizeof(self->data.Fax) );
        CancelAccountField_Fax = NULL;
    }
            
    ///电子邮件
    // TThostFtdcEMailType char[41]
    if( CancelAccountField_EMail != NULL ) {
        if(CancelAccountField_EMail_len > (Py_ssize_t)sizeof(self->data.EMail)) {
            PyErr_Format(PyExc_ValueError, "EMail too long: length=%zd (max allowed is %zd)", CancelAccountField_EMail_len, (Py_ssize_t)sizeof(self->data.EMail));
            return -1;
        }
        // memset(self->data.EMail, 0, sizeof(self->data.EMail));
        // memcpy(self->data.EMail, CancelAccountField_EMail, CancelAccountField_EMail_len);        
        strncpy(self->data.EMail, CancelAccountField_EMail, sizeof(self->data.EMail) );
        CancelAccountField_EMail = NULL;
    }
            
    ///资金账户状态
    // TThostFtdcMoneyAccountStatusType char
    self->data.MoneyAccountStatus = CancelAccountField_MoneyAccountStatus;
            
    ///银行帐号
    // TThostFtdcBankAccountType char[41]
    if( CancelAccountField_BankAccount != NULL ) {
        if(CancelAccountField_BankAccount_len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
            PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is %zd)", CancelAccountField_BankAccount_len, (Py_ssize_t)sizeof(self->data.BankAccount));
            return -1;
        }
        // memset(self->data.BankAccount, 0, sizeof(self->data.BankAccount));
        // memcpy(self->data.BankAccount, CancelAccountField_BankAccount, CancelAccountField_BankAccount_len);        
        strncpy(self->data.BankAccount, CancelAccountField_BankAccount, sizeof(self->data.BankAccount) );
        CancelAccountField_BankAccount = NULL;
    }
            
    ///银行密码
    // TThostFtdcPasswordType char[41]
    if( CancelAccountField_BankPassWord != NULL ) {
        if(CancelAccountField_BankPassWord_len > (Py_ssize_t)sizeof(self->data.BankPassWord)) {
            PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is %zd)", CancelAccountField_BankPassWord_len, (Py_ssize_t)sizeof(self->data.BankPassWord));
            return -1;
        }
        // memset(self->data.BankPassWord, 0, sizeof(self->data.BankPassWord));
        // memcpy(self->data.BankPassWord, CancelAccountField_BankPassWord, CancelAccountField_BankPassWord_len);        
        strncpy(self->data.BankPassWord, CancelAccountField_BankPassWord, sizeof(self->data.BankPassWord) );
        CancelAccountField_BankPassWord = NULL;
    }
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    if( CancelAccountField_AccountID != NULL ) {
        if(CancelAccountField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", CancelAccountField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
            return -1;
        }
        // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
        // memcpy(self->data.AccountID, CancelAccountField_AccountID, CancelAccountField_AccountID_len);        
        strncpy(self->data.AccountID, CancelAccountField_AccountID, sizeof(self->data.AccountID) );
        CancelAccountField_AccountID = NULL;
    }
            
    ///期货密码
    // TThostFtdcPasswordType char[41]
    if( CancelAccountField_Password != NULL ) {
        if(CancelAccountField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", CancelAccountField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
            return -1;
        }
        // memset(self->data.Password, 0, sizeof(self->data.Password));
        // memcpy(self->data.Password, CancelAccountField_Password, CancelAccountField_Password_len);        
        strncpy(self->data.Password, CancelAccountField_Password, sizeof(self->data.Password) );
        CancelAccountField_Password = NULL;
    }
            
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = CancelAccountField_InstallID;
        
    ///验证客户证件号码标志
    // TThostFtdcYesNoIndicatorType char
    self->data.VerifyCertNoFlag = CancelAccountField_VerifyCertNoFlag;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( CancelAccountField_CurrencyID != NULL ) {
        if(CancelAccountField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", CancelAccountField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, CancelAccountField_CurrencyID, CancelAccountField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, CancelAccountField_CurrencyID, sizeof(self->data.CurrencyID) );
        CancelAccountField_CurrencyID = NULL;
    }
            
    ///汇钞标志
    // TThostFtdcCashExchangeCodeType char
    self->data.CashExchangeCode = CancelAccountField_CashExchangeCode;
            
    ///摘要
    // TThostFtdcDigestType char[36]
    if( CancelAccountField_Digest != NULL ) {
        if(CancelAccountField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
            PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", CancelAccountField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
            return -1;
        }
        // memset(self->data.Digest, 0, sizeof(self->data.Digest));
        // memcpy(self->data.Digest, CancelAccountField_Digest, CancelAccountField_Digest_len);        
        strncpy(self->data.Digest, CancelAccountField_Digest, sizeof(self->data.Digest) );
        CancelAccountField_Digest = NULL;
    }
            
    ///银行帐号类型
    // TThostFtdcBankAccTypeType char
    self->data.BankAccType = CancelAccountField_BankAccType;
            
    ///渠道标志
    // TThostFtdcDeviceIDType char[3]
    if( CancelAccountField_DeviceID != NULL ) {
        if(CancelAccountField_DeviceID_len > (Py_ssize_t)sizeof(self->data.DeviceID)) {
            PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is %zd)", CancelAccountField_DeviceID_len, (Py_ssize_t)sizeof(self->data.DeviceID));
            return -1;
        }
        // memset(self->data.DeviceID, 0, sizeof(self->data.DeviceID));
        // memcpy(self->data.DeviceID, CancelAccountField_DeviceID, CancelAccountField_DeviceID_len);        
        strncpy(self->data.DeviceID, CancelAccountField_DeviceID, sizeof(self->data.DeviceID) );
        CancelAccountField_DeviceID = NULL;
    }
            
    ///期货单位帐号类型
    // TThostFtdcBankAccTypeType char
    self->data.BankSecuAccType = CancelAccountField_BankSecuAccType;
            
    ///期货公司银行编码
    // TThostFtdcBankCodingForFutureType char[33]
    if( CancelAccountField_BrokerIDByBank != NULL ) {
        if(CancelAccountField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
            PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", CancelAccountField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
            return -1;
        }
        // memset(self->data.BrokerIDByBank, 0, sizeof(self->data.BrokerIDByBank));
        // memcpy(self->data.BrokerIDByBank, CancelAccountField_BrokerIDByBank, CancelAccountField_BrokerIDByBank_len);        
        strncpy(self->data.BrokerIDByBank, CancelAccountField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
        CancelAccountField_BrokerIDByBank = NULL;
    }
            
    ///期货单位帐号
    // TThostFtdcBankAccountType char[41]
    if( CancelAccountField_BankSecuAcc != NULL ) {
        if(CancelAccountField_BankSecuAcc_len > (Py_ssize_t)sizeof(self->data.BankSecuAcc)) {
            PyErr_Format(PyExc_ValueError, "BankSecuAcc too long: length=%zd (max allowed is %zd)", CancelAccountField_BankSecuAcc_len, (Py_ssize_t)sizeof(self->data.BankSecuAcc));
            return -1;
        }
        // memset(self->data.BankSecuAcc, 0, sizeof(self->data.BankSecuAcc));
        // memcpy(self->data.BankSecuAcc, CancelAccountField_BankSecuAcc, CancelAccountField_BankSecuAcc_len);        
        strncpy(self->data.BankSecuAcc, CancelAccountField_BankSecuAcc, sizeof(self->data.BankSecuAcc) );
        CancelAccountField_BankSecuAcc = NULL;
    }
            
    ///银行密码标志
    // TThostFtdcPwdFlagType char
    self->data.BankPwdFlag = CancelAccountField_BankPwdFlag;
            
    ///期货资金密码核对标志
    // TThostFtdcPwdFlagType char
    self->data.SecuPwdFlag = CancelAccountField_SecuPwdFlag;
            
    ///交易柜员
    // TThostFtdcOperNoType char[17]
    if( CancelAccountField_OperNo != NULL ) {
        if(CancelAccountField_OperNo_len > (Py_ssize_t)sizeof(self->data.OperNo)) {
            PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is %zd)", CancelAccountField_OperNo_len, (Py_ssize_t)sizeof(self->data.OperNo));
            return -1;
        }
        // memset(self->data.OperNo, 0, sizeof(self->data.OperNo));
        // memcpy(self->data.OperNo, CancelAccountField_OperNo, CancelAccountField_OperNo_len);        
        strncpy(self->data.OperNo, CancelAccountField_OperNo, sizeof(self->data.OperNo) );
        CancelAccountField_OperNo = NULL;
    }
            
    ///交易ID
    // TThostFtdcTIDType int
    self->data.TID = CancelAccountField_TID;
        
    ///用户标识
    // TThostFtdcUserIDType char[16]
    if( CancelAccountField_UserID != NULL ) {
        if(CancelAccountField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", CancelAccountField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, CancelAccountField_UserID, CancelAccountField_UserID_len);        
        strncpy(self->data.UserID, CancelAccountField_UserID, sizeof(self->data.UserID) );
        CancelAccountField_UserID = NULL;
    }
            
    ///错误代码
    // TThostFtdcErrorIDType int
    self->data.ErrorID = CancelAccountField_ErrorID;
        
    ///错误信息
    // TThostFtdcErrorMsgType char[81]
    if( CancelAccountField_ErrorMsg != NULL ) {
        if(CancelAccountField_ErrorMsg_len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
            PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is %zd)", CancelAccountField_ErrorMsg_len, (Py_ssize_t)sizeof(self->data.ErrorMsg));
            return -1;
        }
        // memset(self->data.ErrorMsg, 0, sizeof(self->data.ErrorMsg));
        // memcpy(self->data.ErrorMsg, CancelAccountField_ErrorMsg, CancelAccountField_ErrorMsg_len);        
        strncpy(self->data.ErrorMsg, CancelAccountField_ErrorMsg, sizeof(self->data.ErrorMsg) );
        CancelAccountField_ErrorMsg = NULL;
    }
            
    ///长客户姓名
    // TThostFtdcLongIndividualNameType char[161]
    if( CancelAccountField_LongCustomerName != NULL ) {
        if(CancelAccountField_LongCustomerName_len > (Py_ssize_t)sizeof(self->data.LongCustomerName)) {
            PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is %zd)", CancelAccountField_LongCustomerName_len, (Py_ssize_t)sizeof(self->data.LongCustomerName));
            return -1;
        }
        // memset(self->data.LongCustomerName, 0, sizeof(self->data.LongCustomerName));
        // memcpy(self->data.LongCustomerName, CancelAccountField_LongCustomerName, CancelAccountField_LongCustomerName_len);        
        strncpy(self->data.LongCustomerName, CancelAccountField_LongCustomerName, sizeof(self->data.LongCustomerName) );
        CancelAccountField_LongCustomerName = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcCancelAccountField_dealloc(PyCThostFtdcCancelAccountField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcCancelAccountField_repr(PyCThostFtdcCancelAccountField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:c,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:y,s:y,s:i,s:c,s:y,s:c,s:y,s:c,s:y,s:c,s:y,s:y,s:c,s:c,s:y,s:i,s:y,s:i,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:c,s:s,s:c,s:s,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:c,s:s,s:s,s:s,s:s,s:i,s:c,s:s,s:c,s:s,s:c,s:s,s:c,s:s,s:s,s:c,s:c,s:s,s:i,s:s,s:i,s:s,s:s}"
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
        ,"ErrorID", self->data.ErrorID 
        ,"ErrorMsg", self->data.ErrorMsg//, (Py_ssize_t)sizeof(self->data.ErrorMsg) 
        ,"LongCustomerName", self->data.LongCustomerName//, (Py_ssize_t)sizeof(self->data.LongCustomerName) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCancelAccountField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///业务功能码
// TThostFtdcTradeCodeType char[7]
static PyObject *PyCThostFtdcCancelAccountField_get_TradeCode(PyCThostFtdcCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeCode, (Py_ssize_t)sizeof(self->data.TradeCode));
    return PyBytes_FromString(self->data.TradeCode);
}

///业务功能码
// TThostFtdcTradeCodeType char[7]
static int PyCThostFtdcCancelAccountField_set_TradeCode(PyCThostFtdcCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCancelAccountField_get_BankID(PyCThostFtdcCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankID, (Py_ssize_t)sizeof(self->data.BankID));
    return PyBytes_FromString(self->data.BankID);
}

///银行代码
// TThostFtdcBankIDType char[4]
static int PyCThostFtdcCancelAccountField_set_BankID(PyCThostFtdcCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCancelAccountField_get_BankBranchID(PyCThostFtdcCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankBranchID, (Py_ssize_t)sizeof(self->data.BankBranchID));
    return PyBytes_FromString(self->data.BankBranchID);
}

///银行分支机构代码
// TThostFtdcBankBrchIDType char[5]
static int PyCThostFtdcCancelAccountField_set_BankBranchID(PyCThostFtdcCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCancelAccountField_get_BrokerID(PyCThostFtdcCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///期商代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcCancelAccountField_set_BrokerID(PyCThostFtdcCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCancelAccountField_get_BrokerBranchID(PyCThostFtdcCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerBranchID, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
    return PyBytes_FromString(self->data.BrokerBranchID);
}

///期商分支机构代码
// TThostFtdcFutureBranchIDType char[31]
static int PyCThostFtdcCancelAccountField_set_BrokerBranchID(PyCThostFtdcCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCancelAccountField_get_TradeDate(PyCThostFtdcCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeDate, (Py_ssize_t)sizeof(self->data.TradeDate));
    return PyBytes_FromString(self->data.TradeDate);
}

///交易日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcCancelAccountField_set_TradeDate(PyCThostFtdcCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCancelAccountField_get_TradeTime(PyCThostFtdcCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeTime, (Py_ssize_t)sizeof(self->data.TradeTime));
    return PyBytes_FromString(self->data.TradeTime);
}

///交易时间
// TThostFtdcTradeTimeType char[9]
static int PyCThostFtdcCancelAccountField_set_TradeTime(PyCThostFtdcCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCancelAccountField_get_BankSerial(PyCThostFtdcCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankSerial, (Py_ssize_t)sizeof(self->data.BankSerial));
    return PyBytes_FromString(self->data.BankSerial);
}

///银行流水号
// TThostFtdcBankSerialType char[13]
static int PyCThostFtdcCancelAccountField_set_BankSerial(PyCThostFtdcCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCancelAccountField_get_TradingDay(PyCThostFtdcCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易系统日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcCancelAccountField_set_TradingDay(PyCThostFtdcCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCancelAccountField_get_PlateSerial(PyCThostFtdcCancelAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.PlateSerial);
#else
    return PyInt_FromLong(self->data.PlateSerial);
#endif
}

///银期平台消息流水号
// TThostFtdcSerialType int
static int PyCThostFtdcCancelAccountField_set_PlateSerial(PyCThostFtdcCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCancelAccountField_get_LastFragment(PyCThostFtdcCancelAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

///最后分片标志
// TThostFtdcLastFragmentType char
static int PyCThostFtdcCancelAccountField_set_LastFragment(PyCThostFtdcCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCancelAccountField_get_SessionID(PyCThostFtdcCancelAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话号
// TThostFtdcSessionIDType int
static int PyCThostFtdcCancelAccountField_set_SessionID(PyCThostFtdcCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCancelAccountField_get_CustomerName(PyCThostFtdcCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CustomerName, (Py_ssize_t)sizeof(self->data.CustomerName));
    return PyBytes_FromString(self->data.CustomerName);
}

///客户姓名
// TThostFtdcIndividualNameType char[51]
static int PyCThostFtdcCancelAccountField_set_CustomerName(PyCThostFtdcCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCancelAccountField_get_IdCardType(PyCThostFtdcCancelAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.IdCardType), 1);
}

///证件类型
// TThostFtdcIdCardTypeType char
static int PyCThostFtdcCancelAccountField_set_IdCardType(PyCThostFtdcCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCancelAccountField_get_IdentifiedCardNo(PyCThostFtdcCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IdentifiedCardNo, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
    return PyBytes_FromString(self->data.IdentifiedCardNo);
}

///证件号码
// TThostFtdcIdentifiedCardNoType char[51]
static int PyCThostFtdcCancelAccountField_set_IdentifiedCardNo(PyCThostFtdcCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCancelAccountField_get_Gender(PyCThostFtdcCancelAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.Gender), 1);
}

///性别
// TThostFtdcGenderType char
static int PyCThostFtdcCancelAccountField_set_Gender(PyCThostFtdcCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCancelAccountField_get_CountryCode(PyCThostFtdcCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CountryCode, (Py_ssize_t)sizeof(self->data.CountryCode));
    return PyBytes_FromString(self->data.CountryCode);
}

///国家代码
// TThostFtdcCountryCodeType char[21]
static int PyCThostFtdcCancelAccountField_set_CountryCode(PyCThostFtdcCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCancelAccountField_get_CustType(PyCThostFtdcCancelAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.CustType), 1);
}

///客户类型
// TThostFtdcCustTypeType char
static int PyCThostFtdcCancelAccountField_set_CustType(PyCThostFtdcCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCancelAccountField_get_Address(PyCThostFtdcCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Address, (Py_ssize_t)sizeof(self->data.Address));
    return PyBytes_FromString(self->data.Address);
}

///地址
// TThostFtdcAddressType char[101]
static int PyCThostFtdcCancelAccountField_set_Address(PyCThostFtdcCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCancelAccountField_get_ZipCode(PyCThostFtdcCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ZipCode, (Py_ssize_t)sizeof(self->data.ZipCode));
    return PyBytes_FromString(self->data.ZipCode);
}

///邮编
// TThostFtdcZipCodeType char[7]
static int PyCThostFtdcCancelAccountField_set_ZipCode(PyCThostFtdcCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCancelAccountField_get_Telephone(PyCThostFtdcCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Telephone, (Py_ssize_t)sizeof(self->data.Telephone));
    return PyBytes_FromString(self->data.Telephone);
}

///电话号码
// TThostFtdcTelephoneType char[41]
static int PyCThostFtdcCancelAccountField_set_Telephone(PyCThostFtdcCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCancelAccountField_get_MobilePhone(PyCThostFtdcCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MobilePhone, (Py_ssize_t)sizeof(self->data.MobilePhone));
    return PyBytes_FromString(self->data.MobilePhone);
}

///手机
// TThostFtdcMobilePhoneType char[21]
static int PyCThostFtdcCancelAccountField_set_MobilePhone(PyCThostFtdcCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCancelAccountField_get_Fax(PyCThostFtdcCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Fax, (Py_ssize_t)sizeof(self->data.Fax));
    return PyBytes_FromString(self->data.Fax);
}

///传真
// TThostFtdcFaxType char[41]
static int PyCThostFtdcCancelAccountField_set_Fax(PyCThostFtdcCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCancelAccountField_get_EMail(PyCThostFtdcCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.EMail, (Py_ssize_t)sizeof(self->data.EMail));
    return PyBytes_FromString(self->data.EMail);
}

///电子邮件
// TThostFtdcEMailType char[41]
static int PyCThostFtdcCancelAccountField_set_EMail(PyCThostFtdcCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCancelAccountField_get_MoneyAccountStatus(PyCThostFtdcCancelAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.MoneyAccountStatus), 1);
}

///资金账户状态
// TThostFtdcMoneyAccountStatusType char
static int PyCThostFtdcCancelAccountField_set_MoneyAccountStatus(PyCThostFtdcCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCancelAccountField_get_BankAccount(PyCThostFtdcCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankAccount, (Py_ssize_t)sizeof(self->data.BankAccount));
    return PyBytes_FromString(self->data.BankAccount);
}

///银行帐号
// TThostFtdcBankAccountType char[41]
static int PyCThostFtdcCancelAccountField_set_BankAccount(PyCThostFtdcCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCancelAccountField_get_BankPassWord(PyCThostFtdcCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankPassWord, (Py_ssize_t)sizeof(self->data.BankPassWord));
    return PyBytes_FromString(self->data.BankPassWord);
}

///银行密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcCancelAccountField_set_BankPassWord(PyCThostFtdcCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCancelAccountField_get_AccountID(PyCThostFtdcCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AccountID, (Py_ssize_t)sizeof(self->data.AccountID));
    return PyBytes_FromString(self->data.AccountID);
}

///投资者帐号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcCancelAccountField_set_AccountID(PyCThostFtdcCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCancelAccountField_get_Password(PyCThostFtdcCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Password, (Py_ssize_t)sizeof(self->data.Password));
    return PyBytes_FromString(self->data.Password);
}

///期货密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcCancelAccountField_set_Password(PyCThostFtdcCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCancelAccountField_get_InstallID(PyCThostFtdcCancelAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcCancelAccountField_set_InstallID(PyCThostFtdcCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCancelAccountField_get_VerifyCertNoFlag(PyCThostFtdcCancelAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.VerifyCertNoFlag), 1);
}

///验证客户证件号码标志
// TThostFtdcYesNoIndicatorType char
static int PyCThostFtdcCancelAccountField_set_VerifyCertNoFlag(PyCThostFtdcCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCancelAccountField_get_CurrencyID(PyCThostFtdcCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcCancelAccountField_set_CurrencyID(PyCThostFtdcCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCancelAccountField_get_CashExchangeCode(PyCThostFtdcCancelAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.CashExchangeCode), 1);
}

///汇钞标志
// TThostFtdcCashExchangeCodeType char
static int PyCThostFtdcCancelAccountField_set_CashExchangeCode(PyCThostFtdcCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCancelAccountField_get_Digest(PyCThostFtdcCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Digest, (Py_ssize_t)sizeof(self->data.Digest));
    return PyBytes_FromString(self->data.Digest);
}

///摘要
// TThostFtdcDigestType char[36]
static int PyCThostFtdcCancelAccountField_set_Digest(PyCThostFtdcCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCancelAccountField_get_BankAccType(PyCThostFtdcCancelAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BankAccType), 1);
}

///银行帐号类型
// TThostFtdcBankAccTypeType char
static int PyCThostFtdcCancelAccountField_set_BankAccType(PyCThostFtdcCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCancelAccountField_get_DeviceID(PyCThostFtdcCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.DeviceID, (Py_ssize_t)sizeof(self->data.DeviceID));
    return PyBytes_FromString(self->data.DeviceID);
}

///渠道标志
// TThostFtdcDeviceIDType char[3]
static int PyCThostFtdcCancelAccountField_set_DeviceID(PyCThostFtdcCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCancelAccountField_get_BankSecuAccType(PyCThostFtdcCancelAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BankSecuAccType), 1);
}

///期货单位帐号类型
// TThostFtdcBankAccTypeType char
static int PyCThostFtdcCancelAccountField_set_BankSecuAccType(PyCThostFtdcCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCancelAccountField_get_BrokerIDByBank(PyCThostFtdcCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerIDByBank, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
    return PyBytes_FromString(self->data.BrokerIDByBank);
}

///期货公司银行编码
// TThostFtdcBankCodingForFutureType char[33]
static int PyCThostFtdcCancelAccountField_set_BrokerIDByBank(PyCThostFtdcCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCancelAccountField_get_BankSecuAcc(PyCThostFtdcCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankSecuAcc, (Py_ssize_t)sizeof(self->data.BankSecuAcc));
    return PyBytes_FromString(self->data.BankSecuAcc);
}

///期货单位帐号
// TThostFtdcBankAccountType char[41]
static int PyCThostFtdcCancelAccountField_set_BankSecuAcc(PyCThostFtdcCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCancelAccountField_get_BankPwdFlag(PyCThostFtdcCancelAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BankPwdFlag), 1);
}

///银行密码标志
// TThostFtdcPwdFlagType char
static int PyCThostFtdcCancelAccountField_set_BankPwdFlag(PyCThostFtdcCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCancelAccountField_get_SecuPwdFlag(PyCThostFtdcCancelAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.SecuPwdFlag), 1);
}

///期货资金密码核对标志
// TThostFtdcPwdFlagType char
static int PyCThostFtdcCancelAccountField_set_SecuPwdFlag(PyCThostFtdcCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCancelAccountField_get_OperNo(PyCThostFtdcCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OperNo, (Py_ssize_t)sizeof(self->data.OperNo));
    return PyBytes_FromString(self->data.OperNo);
}

///交易柜员
// TThostFtdcOperNoType char[17]
static int PyCThostFtdcCancelAccountField_set_OperNo(PyCThostFtdcCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCancelAccountField_get_TID(PyCThostFtdcCancelAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.TID);
#else
    return PyInt_FromLong(self->data.TID);
#endif
}

///交易ID
// TThostFtdcTIDType int
static int PyCThostFtdcCancelAccountField_set_TID(PyCThostFtdcCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCancelAccountField_get_UserID(PyCThostFtdcCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户标识
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcCancelAccountField_set_UserID(PyCThostFtdcCancelAccountField *self, PyObject* val, void *closure) {
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
            
///错误代码
// TThostFtdcErrorIDType int
static PyObject *PyCThostFtdcCancelAccountField_get_ErrorID(PyCThostFtdcCancelAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.ErrorID);
#else
    return PyInt_FromLong(self->data.ErrorID);
#endif
}

///错误代码
// TThostFtdcErrorIDType int
static int PyCThostFtdcCancelAccountField_set_ErrorID(PyCThostFtdcCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCancelAccountField_get_ErrorMsg(PyCThostFtdcCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ErrorMsg, (Py_ssize_t)sizeof(self->data.ErrorMsg));
    return PyBytes_FromString(self->data.ErrorMsg);
}

///错误信息
// TThostFtdcErrorMsgType char[81]
static int PyCThostFtdcCancelAccountField_set_ErrorMsg(PyCThostFtdcCancelAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCancelAccountField_get_LongCustomerName(PyCThostFtdcCancelAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.LongCustomerName, (Py_ssize_t)sizeof(self->data.LongCustomerName));
    return PyBytes_FromString(self->data.LongCustomerName);
}

///长客户姓名
// TThostFtdcLongIndividualNameType char[161]
static int PyCThostFtdcCancelAccountField_set_LongCustomerName(PyCThostFtdcCancelAccountField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcCancelAccountField_getset[] = {
    ///业务功能码 
    {(char *)"TradeCode", (getter)PyCThostFtdcCancelAccountField_get_TradeCode, (setter)PyCThostFtdcCancelAccountField_set_TradeCode, (char *)"TradeCode", NULL},
    ///银行代码 
    {(char *)"BankID", (getter)PyCThostFtdcCancelAccountField_get_BankID, (setter)PyCThostFtdcCancelAccountField_set_BankID, (char *)"BankID", NULL},
    ///银行分支机构代码 
    {(char *)"BankBranchID", (getter)PyCThostFtdcCancelAccountField_get_BankBranchID, (setter)PyCThostFtdcCancelAccountField_set_BankBranchID, (char *)"BankBranchID", NULL},
    ///期商代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcCancelAccountField_get_BrokerID, (setter)PyCThostFtdcCancelAccountField_set_BrokerID, (char *)"BrokerID", NULL},
    ///期商分支机构代码 
    {(char *)"BrokerBranchID", (getter)PyCThostFtdcCancelAccountField_get_BrokerBranchID, (setter)PyCThostFtdcCancelAccountField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
    ///交易日期 
    {(char *)"TradeDate", (getter)PyCThostFtdcCancelAccountField_get_TradeDate, (setter)PyCThostFtdcCancelAccountField_set_TradeDate, (char *)"TradeDate", NULL},
    ///交易时间 
    {(char *)"TradeTime", (getter)PyCThostFtdcCancelAccountField_get_TradeTime, (setter)PyCThostFtdcCancelAccountField_set_TradeTime, (char *)"TradeTime", NULL},
    ///银行流水号 
    {(char *)"BankSerial", (getter)PyCThostFtdcCancelAccountField_get_BankSerial, (setter)PyCThostFtdcCancelAccountField_set_BankSerial, (char *)"BankSerial", NULL},
    ///交易系统日期 
    {(char *)"TradingDay", (getter)PyCThostFtdcCancelAccountField_get_TradingDay, (setter)PyCThostFtdcCancelAccountField_set_TradingDay, (char *)"TradingDay", NULL},
    ///银期平台消息流水号 
    {(char *)"PlateSerial", (getter)PyCThostFtdcCancelAccountField_get_PlateSerial, (setter)PyCThostFtdcCancelAccountField_set_PlateSerial, (char *)"PlateSerial", NULL},
    ///最后分片标志 
    {(char *)"LastFragment", (getter)PyCThostFtdcCancelAccountField_get_LastFragment, (setter)PyCThostFtdcCancelAccountField_set_LastFragment, (char *)"LastFragment", NULL},
    ///会话号 
    {(char *)"SessionID", (getter)PyCThostFtdcCancelAccountField_get_SessionID, (setter)PyCThostFtdcCancelAccountField_set_SessionID, (char *)"SessionID", NULL},
    ///客户姓名 
    {(char *)"CustomerName", (getter)PyCThostFtdcCancelAccountField_get_CustomerName, (setter)PyCThostFtdcCancelAccountField_set_CustomerName, (char *)"CustomerName", NULL},
    ///证件类型 
    {(char *)"IdCardType", (getter)PyCThostFtdcCancelAccountField_get_IdCardType, (setter)PyCThostFtdcCancelAccountField_set_IdCardType, (char *)"IdCardType", NULL},
    ///证件号码 
    {(char *)"IdentifiedCardNo", (getter)PyCThostFtdcCancelAccountField_get_IdentifiedCardNo, (setter)PyCThostFtdcCancelAccountField_set_IdentifiedCardNo, (char *)"IdentifiedCardNo", NULL},
    ///性别 
    {(char *)"Gender", (getter)PyCThostFtdcCancelAccountField_get_Gender, (setter)PyCThostFtdcCancelAccountField_set_Gender, (char *)"Gender", NULL},
    ///国家代码 
    {(char *)"CountryCode", (getter)PyCThostFtdcCancelAccountField_get_CountryCode, (setter)PyCThostFtdcCancelAccountField_set_CountryCode, (char *)"CountryCode", NULL},
    ///客户类型 
    {(char *)"CustType", (getter)PyCThostFtdcCancelAccountField_get_CustType, (setter)PyCThostFtdcCancelAccountField_set_CustType, (char *)"CustType", NULL},
    ///地址 
    {(char *)"Address", (getter)PyCThostFtdcCancelAccountField_get_Address, (setter)PyCThostFtdcCancelAccountField_set_Address, (char *)"Address", NULL},
    ///邮编 
    {(char *)"ZipCode", (getter)PyCThostFtdcCancelAccountField_get_ZipCode, (setter)PyCThostFtdcCancelAccountField_set_ZipCode, (char *)"ZipCode", NULL},
    ///电话号码 
    {(char *)"Telephone", (getter)PyCThostFtdcCancelAccountField_get_Telephone, (setter)PyCThostFtdcCancelAccountField_set_Telephone, (char *)"Telephone", NULL},
    ///手机 
    {(char *)"MobilePhone", (getter)PyCThostFtdcCancelAccountField_get_MobilePhone, (setter)PyCThostFtdcCancelAccountField_set_MobilePhone, (char *)"MobilePhone", NULL},
    ///传真 
    {(char *)"Fax", (getter)PyCThostFtdcCancelAccountField_get_Fax, (setter)PyCThostFtdcCancelAccountField_set_Fax, (char *)"Fax", NULL},
    ///电子邮件 
    {(char *)"EMail", (getter)PyCThostFtdcCancelAccountField_get_EMail, (setter)PyCThostFtdcCancelAccountField_set_EMail, (char *)"EMail", NULL},
    ///资金账户状态 
    {(char *)"MoneyAccountStatus", (getter)PyCThostFtdcCancelAccountField_get_MoneyAccountStatus, (setter)PyCThostFtdcCancelAccountField_set_MoneyAccountStatus, (char *)"MoneyAccountStatus", NULL},
    ///银行帐号 
    {(char *)"BankAccount", (getter)PyCThostFtdcCancelAccountField_get_BankAccount, (setter)PyCThostFtdcCancelAccountField_set_BankAccount, (char *)"BankAccount", NULL},
    ///银行密码 
    {(char *)"BankPassWord", (getter)PyCThostFtdcCancelAccountField_get_BankPassWord, (setter)PyCThostFtdcCancelAccountField_set_BankPassWord, (char *)"BankPassWord", NULL},
    ///投资者帐号 
    {(char *)"AccountID", (getter)PyCThostFtdcCancelAccountField_get_AccountID, (setter)PyCThostFtdcCancelAccountField_set_AccountID, (char *)"AccountID", NULL},
    ///期货密码 
    {(char *)"Password", (getter)PyCThostFtdcCancelAccountField_get_Password, (setter)PyCThostFtdcCancelAccountField_set_Password, (char *)"Password", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcCancelAccountField_get_InstallID, (setter)PyCThostFtdcCancelAccountField_set_InstallID, (char *)"InstallID", NULL},
    ///验证客户证件号码标志 
    {(char *)"VerifyCertNoFlag", (getter)PyCThostFtdcCancelAccountField_get_VerifyCertNoFlag, (setter)PyCThostFtdcCancelAccountField_set_VerifyCertNoFlag, (char *)"VerifyCertNoFlag", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcCancelAccountField_get_CurrencyID, (setter)PyCThostFtdcCancelAccountField_set_CurrencyID, (char *)"CurrencyID", NULL},
    ///汇钞标志 
    {(char *)"CashExchangeCode", (getter)PyCThostFtdcCancelAccountField_get_CashExchangeCode, (setter)PyCThostFtdcCancelAccountField_set_CashExchangeCode, (char *)"CashExchangeCode", NULL},
    ///摘要 
    {(char *)"Digest", (getter)PyCThostFtdcCancelAccountField_get_Digest, (setter)PyCThostFtdcCancelAccountField_set_Digest, (char *)"Digest", NULL},
    ///银行帐号类型 
    {(char *)"BankAccType", (getter)PyCThostFtdcCancelAccountField_get_BankAccType, (setter)PyCThostFtdcCancelAccountField_set_BankAccType, (char *)"BankAccType", NULL},
    ///渠道标志 
    {(char *)"DeviceID", (getter)PyCThostFtdcCancelAccountField_get_DeviceID, (setter)PyCThostFtdcCancelAccountField_set_DeviceID, (char *)"DeviceID", NULL},
    ///期货单位帐号类型 
    {(char *)"BankSecuAccType", (getter)PyCThostFtdcCancelAccountField_get_BankSecuAccType, (setter)PyCThostFtdcCancelAccountField_set_BankSecuAccType, (char *)"BankSecuAccType", NULL},
    ///期货公司银行编码 
    {(char *)"BrokerIDByBank", (getter)PyCThostFtdcCancelAccountField_get_BrokerIDByBank, (setter)PyCThostFtdcCancelAccountField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
    ///期货单位帐号 
    {(char *)"BankSecuAcc", (getter)PyCThostFtdcCancelAccountField_get_BankSecuAcc, (setter)PyCThostFtdcCancelAccountField_set_BankSecuAcc, (char *)"BankSecuAcc", NULL},
    ///银行密码标志 
    {(char *)"BankPwdFlag", (getter)PyCThostFtdcCancelAccountField_get_BankPwdFlag, (setter)PyCThostFtdcCancelAccountField_set_BankPwdFlag, (char *)"BankPwdFlag", NULL},
    ///期货资金密码核对标志 
    {(char *)"SecuPwdFlag", (getter)PyCThostFtdcCancelAccountField_get_SecuPwdFlag, (setter)PyCThostFtdcCancelAccountField_set_SecuPwdFlag, (char *)"SecuPwdFlag", NULL},
    ///交易柜员 
    {(char *)"OperNo", (getter)PyCThostFtdcCancelAccountField_get_OperNo, (setter)PyCThostFtdcCancelAccountField_set_OperNo, (char *)"OperNo", NULL},
    ///交易ID 
    {(char *)"TID", (getter)PyCThostFtdcCancelAccountField_get_TID, (setter)PyCThostFtdcCancelAccountField_set_TID, (char *)"TID", NULL},
    ///用户标识 
    {(char *)"UserID", (getter)PyCThostFtdcCancelAccountField_get_UserID, (setter)PyCThostFtdcCancelAccountField_set_UserID, (char *)"UserID", NULL},
    ///错误代码 
    {(char *)"ErrorID", (getter)PyCThostFtdcCancelAccountField_get_ErrorID, (setter)PyCThostFtdcCancelAccountField_set_ErrorID, (char *)"ErrorID", NULL},
    ///错误信息 
    {(char *)"ErrorMsg", (getter)PyCThostFtdcCancelAccountField_get_ErrorMsg, (setter)PyCThostFtdcCancelAccountField_set_ErrorMsg, (char *)"ErrorMsg", NULL},
    ///长客户姓名 
    {(char *)"LongCustomerName", (getter)PyCThostFtdcCancelAccountField_get_LongCustomerName, (setter)PyCThostFtdcCancelAccountField_set_LongCustomerName, (char *)"LongCustomerName", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcCancelAccountFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcCancelAccountField",	/* tp_name */
	sizeof(PyCThostFtdcCancelAccountField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcCancelAccountField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcCancelAccountField_repr,   /* tp_repr */
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
	"CThostFtdcCancelAccountField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcCancelAccountField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcCancelAccountField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcCancelAccountField_new,       /* tp_new */
};

int PyCThostFtdcCancelAccountFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcCancelAccountField  */
	if (PyType_Ready(&PyCThostFtdcCancelAccountFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcCancelAccountField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcCancelAccountFieldType);
    if( PyModule_AddObject(module, "CThostFtdcCancelAccountField", (PyObject *)&PyCThostFtdcCancelAccountFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcCancelAccountField to module");
        Py_DECREF(&PyCThostFtdcCancelAccountFieldType);
		return -1;
    }

    return 0;
}
