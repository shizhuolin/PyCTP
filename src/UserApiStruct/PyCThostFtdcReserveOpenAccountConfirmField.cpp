
#include "PyCThostFtdcReserveOpenAccountConfirmField.h"

///银期预约开户确认请求

static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcReserveOpenAccountConfirmField *self = (PyCThostFtdcReserveOpenAccountConfirmField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcReserveOpenAccountConfirmField_init(PyCThostFtdcReserveOpenAccountConfirmField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "Gender", "CountryCode", "CustType", "Address", "ZipCode", "Telephone", "MobilePhone", "Fax", "EMail", "MoneyAccountStatus", "BankAccount", "BankPassWord", "InstallID", "VerifyCertNoFlag", "CurrencyID", "Digest", "BankAccType", "BrokerIDByBank", "TID", "AccountID", "Password", "BankReserveOpenSeq", "BookDate", "BookPsw", "ErrorID", "ErrorMsg",  NULL};


    ///业务功能码
    // TThostFtdcTradeCodeType char[7]
    const char *ReserveOpenAccountConfirmField_TradeCode = NULL;
    Py_ssize_t ReserveOpenAccountConfirmField_TradeCode_len = 0;
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    const char *ReserveOpenAccountConfirmField_BankID = NULL;
    Py_ssize_t ReserveOpenAccountConfirmField_BankID_len = 0;
            
    ///银行分支机构代码
    // TThostFtdcBankBrchIDType char[5]
    const char *ReserveOpenAccountConfirmField_BankBranchID = NULL;
    Py_ssize_t ReserveOpenAccountConfirmField_BankBranchID_len = 0;
            
    ///期商代码
    // TThostFtdcBrokerIDType char[11]
    const char *ReserveOpenAccountConfirmField_BrokerID = NULL;
    Py_ssize_t ReserveOpenAccountConfirmField_BrokerID_len = 0;
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    const char *ReserveOpenAccountConfirmField_BrokerBranchID = NULL;
    Py_ssize_t ReserveOpenAccountConfirmField_BrokerBranchID_len = 0;
            
    ///交易日期
    // TThostFtdcTradeDateType char[9]
    const char *ReserveOpenAccountConfirmField_TradeDate = NULL;
    Py_ssize_t ReserveOpenAccountConfirmField_TradeDate_len = 0;
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    const char *ReserveOpenAccountConfirmField_TradeTime = NULL;
    Py_ssize_t ReserveOpenAccountConfirmField_TradeTime_len = 0;
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    const char *ReserveOpenAccountConfirmField_BankSerial = NULL;
    Py_ssize_t ReserveOpenAccountConfirmField_BankSerial_len = 0;
            
    ///交易系统日期
    // TThostFtdcTradeDateType char[9]
    const char *ReserveOpenAccountConfirmField_TradingDay = NULL;
    Py_ssize_t ReserveOpenAccountConfirmField_TradingDay_len = 0;
            
    ///银期平台消息流水号
    // TThostFtdcSerialType int
    int ReserveOpenAccountConfirmField_PlateSerial = 0;
        
    ///最后分片标志
    // TThostFtdcLastFragmentType char
    char ReserveOpenAccountConfirmField_LastFragment = 0;
            
    ///会话号
    // TThostFtdcSessionIDType int
    int ReserveOpenAccountConfirmField_SessionID = 0;
        
    ///客户姓名
    // TThostFtdcLongIndividualNameType char[161]
    const char *ReserveOpenAccountConfirmField_CustomerName = NULL;
    Py_ssize_t ReserveOpenAccountConfirmField_CustomerName_len = 0;
            
    ///证件类型
    // TThostFtdcIdCardTypeType char
    char ReserveOpenAccountConfirmField_IdCardType = 0;
            
    ///证件号码
    // TThostFtdcIdentifiedCardNoType char[51]
    const char *ReserveOpenAccountConfirmField_IdentifiedCardNo = NULL;
    Py_ssize_t ReserveOpenAccountConfirmField_IdentifiedCardNo_len = 0;
            
    ///性别
    // TThostFtdcGenderType char
    char ReserveOpenAccountConfirmField_Gender = 0;
            
    ///国家代码
    // TThostFtdcCountryCodeType char[21]
    const char *ReserveOpenAccountConfirmField_CountryCode = NULL;
    Py_ssize_t ReserveOpenAccountConfirmField_CountryCode_len = 0;
            
    ///客户类型
    // TThostFtdcCustTypeType char
    char ReserveOpenAccountConfirmField_CustType = 0;
            
    ///地址
    // TThostFtdcAddressType char[101]
    const char *ReserveOpenAccountConfirmField_Address = NULL;
    Py_ssize_t ReserveOpenAccountConfirmField_Address_len = 0;
            
    ///邮编
    // TThostFtdcZipCodeType char[7]
    const char *ReserveOpenAccountConfirmField_ZipCode = NULL;
    Py_ssize_t ReserveOpenAccountConfirmField_ZipCode_len = 0;
            
    ///电话号码
    // TThostFtdcTelephoneType char[41]
    const char *ReserveOpenAccountConfirmField_Telephone = NULL;
    Py_ssize_t ReserveOpenAccountConfirmField_Telephone_len = 0;
            
    ///手机
    // TThostFtdcMobilePhoneType char[21]
    const char *ReserveOpenAccountConfirmField_MobilePhone = NULL;
    Py_ssize_t ReserveOpenAccountConfirmField_MobilePhone_len = 0;
            
    ///传真
    // TThostFtdcFaxType char[41]
    const char *ReserveOpenAccountConfirmField_Fax = NULL;
    Py_ssize_t ReserveOpenAccountConfirmField_Fax_len = 0;
            
    ///电子邮件
    // TThostFtdcEMailType char[41]
    const char *ReserveOpenAccountConfirmField_EMail = NULL;
    Py_ssize_t ReserveOpenAccountConfirmField_EMail_len = 0;
            
    ///资金账户状态
    // TThostFtdcMoneyAccountStatusType char
    char ReserveOpenAccountConfirmField_MoneyAccountStatus = 0;
            
    ///银行帐号
    // TThostFtdcBankAccountType char[41]
    const char *ReserveOpenAccountConfirmField_BankAccount = NULL;
    Py_ssize_t ReserveOpenAccountConfirmField_BankAccount_len = 0;
            
    ///银行密码
    // TThostFtdcPasswordType char[41]
    const char *ReserveOpenAccountConfirmField_BankPassWord = NULL;
    Py_ssize_t ReserveOpenAccountConfirmField_BankPassWord_len = 0;
            
    ///安装编号
    // TThostFtdcInstallIDType int
    int ReserveOpenAccountConfirmField_InstallID = 0;
        
    ///验证客户证件号码标志
    // TThostFtdcYesNoIndicatorType char
    char ReserveOpenAccountConfirmField_VerifyCertNoFlag = 0;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *ReserveOpenAccountConfirmField_CurrencyID = NULL;
    Py_ssize_t ReserveOpenAccountConfirmField_CurrencyID_len = 0;
            
    ///摘要
    // TThostFtdcDigestType char[36]
    const char *ReserveOpenAccountConfirmField_Digest = NULL;
    Py_ssize_t ReserveOpenAccountConfirmField_Digest_len = 0;
            
    ///银行帐号类型
    // TThostFtdcBankAccTypeType char
    char ReserveOpenAccountConfirmField_BankAccType = 0;
            
    ///期货公司银行编码
    // TThostFtdcBankCodingForFutureType char[33]
    const char *ReserveOpenAccountConfirmField_BrokerIDByBank = NULL;
    Py_ssize_t ReserveOpenAccountConfirmField_BrokerIDByBank_len = 0;
            
    ///交易ID
    // TThostFtdcTIDType int
    int ReserveOpenAccountConfirmField_TID = 0;
        
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    const char *ReserveOpenAccountConfirmField_AccountID = NULL;
    Py_ssize_t ReserveOpenAccountConfirmField_AccountID_len = 0;
            
    ///期货密码
    // TThostFtdcPasswordType char[41]
    const char *ReserveOpenAccountConfirmField_Password = NULL;
    Py_ssize_t ReserveOpenAccountConfirmField_Password_len = 0;
            
    ///预约开户银行流水号
    // TThostFtdcBankSerialType char[13]
    const char *ReserveOpenAccountConfirmField_BankReserveOpenSeq = NULL;
    Py_ssize_t ReserveOpenAccountConfirmField_BankReserveOpenSeq_len = 0;
            
    ///预约开户日期
    // TThostFtdcTradeDateType char[9]
    const char *ReserveOpenAccountConfirmField_BookDate = NULL;
    Py_ssize_t ReserveOpenAccountConfirmField_BookDate_len = 0;
            
    ///预约开户验证密码
    // TThostFtdcPasswordType char[41]
    const char *ReserveOpenAccountConfirmField_BookPsw = NULL;
    Py_ssize_t ReserveOpenAccountConfirmField_BookPsw_len = 0;
            
    ///错误代码
    // TThostFtdcErrorIDType int
    int ReserveOpenAccountConfirmField_ErrorID = 0;
        
    ///错误信息
    // TThostFtdcErrorMsgType char[81]
    const char *ReserveOpenAccountConfirmField_ErrorMsg = NULL;
    Py_ssize_t ReserveOpenAccountConfirmField_ErrorMsg_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciy#cy#cy#cy#y#y#y#y#y#cy#y#icy#y#cy#iy#y#y#y#y#iy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#icis#cs#cs#cs#s#s#s#s#s#cs#s#ics#s#cs#is#s#s#s#s#is#", (char **)kwlist
#endif

        , &ReserveOpenAccountConfirmField_TradeCode, &ReserveOpenAccountConfirmField_TradeCode_len 
        , &ReserveOpenAccountConfirmField_BankID, &ReserveOpenAccountConfirmField_BankID_len 
        , &ReserveOpenAccountConfirmField_BankBranchID, &ReserveOpenAccountConfirmField_BankBranchID_len 
        , &ReserveOpenAccountConfirmField_BrokerID, &ReserveOpenAccountConfirmField_BrokerID_len 
        , &ReserveOpenAccountConfirmField_BrokerBranchID, &ReserveOpenAccountConfirmField_BrokerBranchID_len 
        , &ReserveOpenAccountConfirmField_TradeDate, &ReserveOpenAccountConfirmField_TradeDate_len 
        , &ReserveOpenAccountConfirmField_TradeTime, &ReserveOpenAccountConfirmField_TradeTime_len 
        , &ReserveOpenAccountConfirmField_BankSerial, &ReserveOpenAccountConfirmField_BankSerial_len 
        , &ReserveOpenAccountConfirmField_TradingDay, &ReserveOpenAccountConfirmField_TradingDay_len 
        , &ReserveOpenAccountConfirmField_PlateSerial 
        , &ReserveOpenAccountConfirmField_LastFragment 
        , &ReserveOpenAccountConfirmField_SessionID 
        , &ReserveOpenAccountConfirmField_CustomerName, &ReserveOpenAccountConfirmField_CustomerName_len 
        , &ReserveOpenAccountConfirmField_IdCardType 
        , &ReserveOpenAccountConfirmField_IdentifiedCardNo, &ReserveOpenAccountConfirmField_IdentifiedCardNo_len 
        , &ReserveOpenAccountConfirmField_Gender 
        , &ReserveOpenAccountConfirmField_CountryCode, &ReserveOpenAccountConfirmField_CountryCode_len 
        , &ReserveOpenAccountConfirmField_CustType 
        , &ReserveOpenAccountConfirmField_Address, &ReserveOpenAccountConfirmField_Address_len 
        , &ReserveOpenAccountConfirmField_ZipCode, &ReserveOpenAccountConfirmField_ZipCode_len 
        , &ReserveOpenAccountConfirmField_Telephone, &ReserveOpenAccountConfirmField_Telephone_len 
        , &ReserveOpenAccountConfirmField_MobilePhone, &ReserveOpenAccountConfirmField_MobilePhone_len 
        , &ReserveOpenAccountConfirmField_Fax, &ReserveOpenAccountConfirmField_Fax_len 
        , &ReserveOpenAccountConfirmField_EMail, &ReserveOpenAccountConfirmField_EMail_len 
        , &ReserveOpenAccountConfirmField_MoneyAccountStatus 
        , &ReserveOpenAccountConfirmField_BankAccount, &ReserveOpenAccountConfirmField_BankAccount_len 
        , &ReserveOpenAccountConfirmField_BankPassWord, &ReserveOpenAccountConfirmField_BankPassWord_len 
        , &ReserveOpenAccountConfirmField_InstallID 
        , &ReserveOpenAccountConfirmField_VerifyCertNoFlag 
        , &ReserveOpenAccountConfirmField_CurrencyID, &ReserveOpenAccountConfirmField_CurrencyID_len 
        , &ReserveOpenAccountConfirmField_Digest, &ReserveOpenAccountConfirmField_Digest_len 
        , &ReserveOpenAccountConfirmField_BankAccType 
        , &ReserveOpenAccountConfirmField_BrokerIDByBank, &ReserveOpenAccountConfirmField_BrokerIDByBank_len 
        , &ReserveOpenAccountConfirmField_TID 
        , &ReserveOpenAccountConfirmField_AccountID, &ReserveOpenAccountConfirmField_AccountID_len 
        , &ReserveOpenAccountConfirmField_Password, &ReserveOpenAccountConfirmField_Password_len 
        , &ReserveOpenAccountConfirmField_BankReserveOpenSeq, &ReserveOpenAccountConfirmField_BankReserveOpenSeq_len 
        , &ReserveOpenAccountConfirmField_BookDate, &ReserveOpenAccountConfirmField_BookDate_len 
        , &ReserveOpenAccountConfirmField_BookPsw, &ReserveOpenAccountConfirmField_BookPsw_len 
        , &ReserveOpenAccountConfirmField_ErrorID 
        , &ReserveOpenAccountConfirmField_ErrorMsg, &ReserveOpenAccountConfirmField_ErrorMsg_len 


    )) {
        return -1;
    }


    ///业务功能码
    // TThostFtdcTradeCodeType char[7]
    if( ReserveOpenAccountConfirmField_TradeCode != NULL ) {
        if(ReserveOpenAccountConfirmField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", ReserveOpenAccountConfirmField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
            return -1;
        }
        // memset(self->data.TradeCode, 0, sizeof(self->data.TradeCode));
        // memcpy(self->data.TradeCode, ReserveOpenAccountConfirmField_TradeCode, ReserveOpenAccountConfirmField_TradeCode_len);        
        strncpy(self->data.TradeCode, ReserveOpenAccountConfirmField_TradeCode, sizeof(self->data.TradeCode) );
        ReserveOpenAccountConfirmField_TradeCode = NULL;
    }
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    if( ReserveOpenAccountConfirmField_BankID != NULL ) {
        if(ReserveOpenAccountConfirmField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", ReserveOpenAccountConfirmField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
            return -1;
        }
        // memset(self->data.BankID, 0, sizeof(self->data.BankID));
        // memcpy(self->data.BankID, ReserveOpenAccountConfirmField_BankID, ReserveOpenAccountConfirmField_BankID_len);        
        strncpy(self->data.BankID, ReserveOpenAccountConfirmField_BankID, sizeof(self->data.BankID) );
        ReserveOpenAccountConfirmField_BankID = NULL;
    }
            
    ///银行分支机构代码
    // TThostFtdcBankBrchIDType char[5]
    if( ReserveOpenAccountConfirmField_BankBranchID != NULL ) {
        if(ReserveOpenAccountConfirmField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", ReserveOpenAccountConfirmField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
            return -1;
        }
        // memset(self->data.BankBranchID, 0, sizeof(self->data.BankBranchID));
        // memcpy(self->data.BankBranchID, ReserveOpenAccountConfirmField_BankBranchID, ReserveOpenAccountConfirmField_BankBranchID_len);        
        strncpy(self->data.BankBranchID, ReserveOpenAccountConfirmField_BankBranchID, sizeof(self->data.BankBranchID) );
        ReserveOpenAccountConfirmField_BankBranchID = NULL;
    }
            
    ///期商代码
    // TThostFtdcBrokerIDType char[11]
    if( ReserveOpenAccountConfirmField_BrokerID != NULL ) {
        if(ReserveOpenAccountConfirmField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", ReserveOpenAccountConfirmField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, ReserveOpenAccountConfirmField_BrokerID, ReserveOpenAccountConfirmField_BrokerID_len);        
        strncpy(self->data.BrokerID, ReserveOpenAccountConfirmField_BrokerID, sizeof(self->data.BrokerID) );
        ReserveOpenAccountConfirmField_BrokerID = NULL;
    }
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    if( ReserveOpenAccountConfirmField_BrokerBranchID != NULL ) {
        if(ReserveOpenAccountConfirmField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", ReserveOpenAccountConfirmField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
            return -1;
        }
        // memset(self->data.BrokerBranchID, 0, sizeof(self->data.BrokerBranchID));
        // memcpy(self->data.BrokerBranchID, ReserveOpenAccountConfirmField_BrokerBranchID, ReserveOpenAccountConfirmField_BrokerBranchID_len);        
        strncpy(self->data.BrokerBranchID, ReserveOpenAccountConfirmField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
        ReserveOpenAccountConfirmField_BrokerBranchID = NULL;
    }
            
    ///交易日期
    // TThostFtdcTradeDateType char[9]
    if( ReserveOpenAccountConfirmField_TradeDate != NULL ) {
        if(ReserveOpenAccountConfirmField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", ReserveOpenAccountConfirmField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
            return -1;
        }
        // memset(self->data.TradeDate, 0, sizeof(self->data.TradeDate));
        // memcpy(self->data.TradeDate, ReserveOpenAccountConfirmField_TradeDate, ReserveOpenAccountConfirmField_TradeDate_len);        
        strncpy(self->data.TradeDate, ReserveOpenAccountConfirmField_TradeDate, sizeof(self->data.TradeDate) );
        ReserveOpenAccountConfirmField_TradeDate = NULL;
    }
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    if( ReserveOpenAccountConfirmField_TradeTime != NULL ) {
        if(ReserveOpenAccountConfirmField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", ReserveOpenAccountConfirmField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
            return -1;
        }
        // memset(self->data.TradeTime, 0, sizeof(self->data.TradeTime));
        // memcpy(self->data.TradeTime, ReserveOpenAccountConfirmField_TradeTime, ReserveOpenAccountConfirmField_TradeTime_len);        
        strncpy(self->data.TradeTime, ReserveOpenAccountConfirmField_TradeTime, sizeof(self->data.TradeTime) );
        ReserveOpenAccountConfirmField_TradeTime = NULL;
    }
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    if( ReserveOpenAccountConfirmField_BankSerial != NULL ) {
        if(ReserveOpenAccountConfirmField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", ReserveOpenAccountConfirmField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
            return -1;
        }
        // memset(self->data.BankSerial, 0, sizeof(self->data.BankSerial));
        // memcpy(self->data.BankSerial, ReserveOpenAccountConfirmField_BankSerial, ReserveOpenAccountConfirmField_BankSerial_len);        
        strncpy(self->data.BankSerial, ReserveOpenAccountConfirmField_BankSerial, sizeof(self->data.BankSerial) );
        ReserveOpenAccountConfirmField_BankSerial = NULL;
    }
            
    ///交易系统日期
    // TThostFtdcTradeDateType char[9]
    if( ReserveOpenAccountConfirmField_TradingDay != NULL ) {
        if(ReserveOpenAccountConfirmField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", ReserveOpenAccountConfirmField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, ReserveOpenAccountConfirmField_TradingDay, ReserveOpenAccountConfirmField_TradingDay_len);        
        strncpy(self->data.TradingDay, ReserveOpenAccountConfirmField_TradingDay, sizeof(self->data.TradingDay) );
        ReserveOpenAccountConfirmField_TradingDay = NULL;
    }
            
    ///银期平台消息流水号
    // TThostFtdcSerialType int
    self->data.PlateSerial = ReserveOpenAccountConfirmField_PlateSerial;
        
    ///最后分片标志
    // TThostFtdcLastFragmentType char
    self->data.LastFragment = ReserveOpenAccountConfirmField_LastFragment;
            
    ///会话号
    // TThostFtdcSessionIDType int
    self->data.SessionID = ReserveOpenAccountConfirmField_SessionID;
        
    ///客户姓名
    // TThostFtdcLongIndividualNameType char[161]
    if( ReserveOpenAccountConfirmField_CustomerName != NULL ) {
        if(ReserveOpenAccountConfirmField_CustomerName_len > (Py_ssize_t)sizeof(self->data.CustomerName)) {
            PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is %zd)", ReserveOpenAccountConfirmField_CustomerName_len, (Py_ssize_t)sizeof(self->data.CustomerName));
            return -1;
        }
        // memset(self->data.CustomerName, 0, sizeof(self->data.CustomerName));
        // memcpy(self->data.CustomerName, ReserveOpenAccountConfirmField_CustomerName, ReserveOpenAccountConfirmField_CustomerName_len);        
        strncpy(self->data.CustomerName, ReserveOpenAccountConfirmField_CustomerName, sizeof(self->data.CustomerName) );
        ReserveOpenAccountConfirmField_CustomerName = NULL;
    }
            
    ///证件类型
    // TThostFtdcIdCardTypeType char
    self->data.IdCardType = ReserveOpenAccountConfirmField_IdCardType;
            
    ///证件号码
    // TThostFtdcIdentifiedCardNoType char[51]
    if( ReserveOpenAccountConfirmField_IdentifiedCardNo != NULL ) {
        if(ReserveOpenAccountConfirmField_IdentifiedCardNo_len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
            PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is %zd)", ReserveOpenAccountConfirmField_IdentifiedCardNo_len, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
            return -1;
        }
        // memset(self->data.IdentifiedCardNo, 0, sizeof(self->data.IdentifiedCardNo));
        // memcpy(self->data.IdentifiedCardNo, ReserveOpenAccountConfirmField_IdentifiedCardNo, ReserveOpenAccountConfirmField_IdentifiedCardNo_len);        
        strncpy(self->data.IdentifiedCardNo, ReserveOpenAccountConfirmField_IdentifiedCardNo, sizeof(self->data.IdentifiedCardNo) );
        ReserveOpenAccountConfirmField_IdentifiedCardNo = NULL;
    }
            
    ///性别
    // TThostFtdcGenderType char
    self->data.Gender = ReserveOpenAccountConfirmField_Gender;
            
    ///国家代码
    // TThostFtdcCountryCodeType char[21]
    if( ReserveOpenAccountConfirmField_CountryCode != NULL ) {
        if(ReserveOpenAccountConfirmField_CountryCode_len > (Py_ssize_t)sizeof(self->data.CountryCode)) {
            PyErr_Format(PyExc_ValueError, "CountryCode too long: length=%zd (max allowed is %zd)", ReserveOpenAccountConfirmField_CountryCode_len, (Py_ssize_t)sizeof(self->data.CountryCode));
            return -1;
        }
        // memset(self->data.CountryCode, 0, sizeof(self->data.CountryCode));
        // memcpy(self->data.CountryCode, ReserveOpenAccountConfirmField_CountryCode, ReserveOpenAccountConfirmField_CountryCode_len);        
        strncpy(self->data.CountryCode, ReserveOpenAccountConfirmField_CountryCode, sizeof(self->data.CountryCode) );
        ReserveOpenAccountConfirmField_CountryCode = NULL;
    }
            
    ///客户类型
    // TThostFtdcCustTypeType char
    self->data.CustType = ReserveOpenAccountConfirmField_CustType;
            
    ///地址
    // TThostFtdcAddressType char[101]
    if( ReserveOpenAccountConfirmField_Address != NULL ) {
        if(ReserveOpenAccountConfirmField_Address_len > (Py_ssize_t)sizeof(self->data.Address)) {
            PyErr_Format(PyExc_ValueError, "Address too long: length=%zd (max allowed is %zd)", ReserveOpenAccountConfirmField_Address_len, (Py_ssize_t)sizeof(self->data.Address));
            return -1;
        }
        // memset(self->data.Address, 0, sizeof(self->data.Address));
        // memcpy(self->data.Address, ReserveOpenAccountConfirmField_Address, ReserveOpenAccountConfirmField_Address_len);        
        strncpy(self->data.Address, ReserveOpenAccountConfirmField_Address, sizeof(self->data.Address) );
        ReserveOpenAccountConfirmField_Address = NULL;
    }
            
    ///邮编
    // TThostFtdcZipCodeType char[7]
    if( ReserveOpenAccountConfirmField_ZipCode != NULL ) {
        if(ReserveOpenAccountConfirmField_ZipCode_len > (Py_ssize_t)sizeof(self->data.ZipCode)) {
            PyErr_Format(PyExc_ValueError, "ZipCode too long: length=%zd (max allowed is %zd)", ReserveOpenAccountConfirmField_ZipCode_len, (Py_ssize_t)sizeof(self->data.ZipCode));
            return -1;
        }
        // memset(self->data.ZipCode, 0, sizeof(self->data.ZipCode));
        // memcpy(self->data.ZipCode, ReserveOpenAccountConfirmField_ZipCode, ReserveOpenAccountConfirmField_ZipCode_len);        
        strncpy(self->data.ZipCode, ReserveOpenAccountConfirmField_ZipCode, sizeof(self->data.ZipCode) );
        ReserveOpenAccountConfirmField_ZipCode = NULL;
    }
            
    ///电话号码
    // TThostFtdcTelephoneType char[41]
    if( ReserveOpenAccountConfirmField_Telephone != NULL ) {
        if(ReserveOpenAccountConfirmField_Telephone_len > (Py_ssize_t)sizeof(self->data.Telephone)) {
            PyErr_Format(PyExc_ValueError, "Telephone too long: length=%zd (max allowed is %zd)", ReserveOpenAccountConfirmField_Telephone_len, (Py_ssize_t)sizeof(self->data.Telephone));
            return -1;
        }
        // memset(self->data.Telephone, 0, sizeof(self->data.Telephone));
        // memcpy(self->data.Telephone, ReserveOpenAccountConfirmField_Telephone, ReserveOpenAccountConfirmField_Telephone_len);        
        strncpy(self->data.Telephone, ReserveOpenAccountConfirmField_Telephone, sizeof(self->data.Telephone) );
        ReserveOpenAccountConfirmField_Telephone = NULL;
    }
            
    ///手机
    // TThostFtdcMobilePhoneType char[21]
    if( ReserveOpenAccountConfirmField_MobilePhone != NULL ) {
        if(ReserveOpenAccountConfirmField_MobilePhone_len > (Py_ssize_t)sizeof(self->data.MobilePhone)) {
            PyErr_Format(PyExc_ValueError, "MobilePhone too long: length=%zd (max allowed is %zd)", ReserveOpenAccountConfirmField_MobilePhone_len, (Py_ssize_t)sizeof(self->data.MobilePhone));
            return -1;
        }
        // memset(self->data.MobilePhone, 0, sizeof(self->data.MobilePhone));
        // memcpy(self->data.MobilePhone, ReserveOpenAccountConfirmField_MobilePhone, ReserveOpenAccountConfirmField_MobilePhone_len);        
        strncpy(self->data.MobilePhone, ReserveOpenAccountConfirmField_MobilePhone, sizeof(self->data.MobilePhone) );
        ReserveOpenAccountConfirmField_MobilePhone = NULL;
    }
            
    ///传真
    // TThostFtdcFaxType char[41]
    if( ReserveOpenAccountConfirmField_Fax != NULL ) {
        if(ReserveOpenAccountConfirmField_Fax_len > (Py_ssize_t)sizeof(self->data.Fax)) {
            PyErr_Format(PyExc_ValueError, "Fax too long: length=%zd (max allowed is %zd)", ReserveOpenAccountConfirmField_Fax_len, (Py_ssize_t)sizeof(self->data.Fax));
            return -1;
        }
        // memset(self->data.Fax, 0, sizeof(self->data.Fax));
        // memcpy(self->data.Fax, ReserveOpenAccountConfirmField_Fax, ReserveOpenAccountConfirmField_Fax_len);        
        strncpy(self->data.Fax, ReserveOpenAccountConfirmField_Fax, sizeof(self->data.Fax) );
        ReserveOpenAccountConfirmField_Fax = NULL;
    }
            
    ///电子邮件
    // TThostFtdcEMailType char[41]
    if( ReserveOpenAccountConfirmField_EMail != NULL ) {
        if(ReserveOpenAccountConfirmField_EMail_len > (Py_ssize_t)sizeof(self->data.EMail)) {
            PyErr_Format(PyExc_ValueError, "EMail too long: length=%zd (max allowed is %zd)", ReserveOpenAccountConfirmField_EMail_len, (Py_ssize_t)sizeof(self->data.EMail));
            return -1;
        }
        // memset(self->data.EMail, 0, sizeof(self->data.EMail));
        // memcpy(self->data.EMail, ReserveOpenAccountConfirmField_EMail, ReserveOpenAccountConfirmField_EMail_len);        
        strncpy(self->data.EMail, ReserveOpenAccountConfirmField_EMail, sizeof(self->data.EMail) );
        ReserveOpenAccountConfirmField_EMail = NULL;
    }
            
    ///资金账户状态
    // TThostFtdcMoneyAccountStatusType char
    self->data.MoneyAccountStatus = ReserveOpenAccountConfirmField_MoneyAccountStatus;
            
    ///银行帐号
    // TThostFtdcBankAccountType char[41]
    if( ReserveOpenAccountConfirmField_BankAccount != NULL ) {
        if(ReserveOpenAccountConfirmField_BankAccount_len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
            PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is %zd)", ReserveOpenAccountConfirmField_BankAccount_len, (Py_ssize_t)sizeof(self->data.BankAccount));
            return -1;
        }
        // memset(self->data.BankAccount, 0, sizeof(self->data.BankAccount));
        // memcpy(self->data.BankAccount, ReserveOpenAccountConfirmField_BankAccount, ReserveOpenAccountConfirmField_BankAccount_len);        
        strncpy(self->data.BankAccount, ReserveOpenAccountConfirmField_BankAccount, sizeof(self->data.BankAccount) );
        ReserveOpenAccountConfirmField_BankAccount = NULL;
    }
            
    ///银行密码
    // TThostFtdcPasswordType char[41]
    if( ReserveOpenAccountConfirmField_BankPassWord != NULL ) {
        if(ReserveOpenAccountConfirmField_BankPassWord_len > (Py_ssize_t)sizeof(self->data.BankPassWord)) {
            PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is %zd)", ReserveOpenAccountConfirmField_BankPassWord_len, (Py_ssize_t)sizeof(self->data.BankPassWord));
            return -1;
        }
        // memset(self->data.BankPassWord, 0, sizeof(self->data.BankPassWord));
        // memcpy(self->data.BankPassWord, ReserveOpenAccountConfirmField_BankPassWord, ReserveOpenAccountConfirmField_BankPassWord_len);        
        strncpy(self->data.BankPassWord, ReserveOpenAccountConfirmField_BankPassWord, sizeof(self->data.BankPassWord) );
        ReserveOpenAccountConfirmField_BankPassWord = NULL;
    }
            
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = ReserveOpenAccountConfirmField_InstallID;
        
    ///验证客户证件号码标志
    // TThostFtdcYesNoIndicatorType char
    self->data.VerifyCertNoFlag = ReserveOpenAccountConfirmField_VerifyCertNoFlag;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( ReserveOpenAccountConfirmField_CurrencyID != NULL ) {
        if(ReserveOpenAccountConfirmField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", ReserveOpenAccountConfirmField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, ReserveOpenAccountConfirmField_CurrencyID, ReserveOpenAccountConfirmField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, ReserveOpenAccountConfirmField_CurrencyID, sizeof(self->data.CurrencyID) );
        ReserveOpenAccountConfirmField_CurrencyID = NULL;
    }
            
    ///摘要
    // TThostFtdcDigestType char[36]
    if( ReserveOpenAccountConfirmField_Digest != NULL ) {
        if(ReserveOpenAccountConfirmField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
            PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", ReserveOpenAccountConfirmField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
            return -1;
        }
        // memset(self->data.Digest, 0, sizeof(self->data.Digest));
        // memcpy(self->data.Digest, ReserveOpenAccountConfirmField_Digest, ReserveOpenAccountConfirmField_Digest_len);        
        strncpy(self->data.Digest, ReserveOpenAccountConfirmField_Digest, sizeof(self->data.Digest) );
        ReserveOpenAccountConfirmField_Digest = NULL;
    }
            
    ///银行帐号类型
    // TThostFtdcBankAccTypeType char
    self->data.BankAccType = ReserveOpenAccountConfirmField_BankAccType;
            
    ///期货公司银行编码
    // TThostFtdcBankCodingForFutureType char[33]
    if( ReserveOpenAccountConfirmField_BrokerIDByBank != NULL ) {
        if(ReserveOpenAccountConfirmField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
            PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", ReserveOpenAccountConfirmField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
            return -1;
        }
        // memset(self->data.BrokerIDByBank, 0, sizeof(self->data.BrokerIDByBank));
        // memcpy(self->data.BrokerIDByBank, ReserveOpenAccountConfirmField_BrokerIDByBank, ReserveOpenAccountConfirmField_BrokerIDByBank_len);        
        strncpy(self->data.BrokerIDByBank, ReserveOpenAccountConfirmField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
        ReserveOpenAccountConfirmField_BrokerIDByBank = NULL;
    }
            
    ///交易ID
    // TThostFtdcTIDType int
    self->data.TID = ReserveOpenAccountConfirmField_TID;
        
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    if( ReserveOpenAccountConfirmField_AccountID != NULL ) {
        if(ReserveOpenAccountConfirmField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", ReserveOpenAccountConfirmField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
            return -1;
        }
        // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
        // memcpy(self->data.AccountID, ReserveOpenAccountConfirmField_AccountID, ReserveOpenAccountConfirmField_AccountID_len);        
        strncpy(self->data.AccountID, ReserveOpenAccountConfirmField_AccountID, sizeof(self->data.AccountID) );
        ReserveOpenAccountConfirmField_AccountID = NULL;
    }
            
    ///期货密码
    // TThostFtdcPasswordType char[41]
    if( ReserveOpenAccountConfirmField_Password != NULL ) {
        if(ReserveOpenAccountConfirmField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", ReserveOpenAccountConfirmField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
            return -1;
        }
        // memset(self->data.Password, 0, sizeof(self->data.Password));
        // memcpy(self->data.Password, ReserveOpenAccountConfirmField_Password, ReserveOpenAccountConfirmField_Password_len);        
        strncpy(self->data.Password, ReserveOpenAccountConfirmField_Password, sizeof(self->data.Password) );
        ReserveOpenAccountConfirmField_Password = NULL;
    }
            
    ///预约开户银行流水号
    // TThostFtdcBankSerialType char[13]
    if( ReserveOpenAccountConfirmField_BankReserveOpenSeq != NULL ) {
        if(ReserveOpenAccountConfirmField_BankReserveOpenSeq_len > (Py_ssize_t)sizeof(self->data.BankReserveOpenSeq)) {
            PyErr_Format(PyExc_ValueError, "BankReserveOpenSeq too long: length=%zd (max allowed is %zd)", ReserveOpenAccountConfirmField_BankReserveOpenSeq_len, (Py_ssize_t)sizeof(self->data.BankReserveOpenSeq));
            return -1;
        }
        // memset(self->data.BankReserveOpenSeq, 0, sizeof(self->data.BankReserveOpenSeq));
        // memcpy(self->data.BankReserveOpenSeq, ReserveOpenAccountConfirmField_BankReserveOpenSeq, ReserveOpenAccountConfirmField_BankReserveOpenSeq_len);        
        strncpy(self->data.BankReserveOpenSeq, ReserveOpenAccountConfirmField_BankReserveOpenSeq, sizeof(self->data.BankReserveOpenSeq) );
        ReserveOpenAccountConfirmField_BankReserveOpenSeq = NULL;
    }
            
    ///预约开户日期
    // TThostFtdcTradeDateType char[9]
    if( ReserveOpenAccountConfirmField_BookDate != NULL ) {
        if(ReserveOpenAccountConfirmField_BookDate_len > (Py_ssize_t)sizeof(self->data.BookDate)) {
            PyErr_Format(PyExc_ValueError, "BookDate too long: length=%zd (max allowed is %zd)", ReserveOpenAccountConfirmField_BookDate_len, (Py_ssize_t)sizeof(self->data.BookDate));
            return -1;
        }
        // memset(self->data.BookDate, 0, sizeof(self->data.BookDate));
        // memcpy(self->data.BookDate, ReserveOpenAccountConfirmField_BookDate, ReserveOpenAccountConfirmField_BookDate_len);        
        strncpy(self->data.BookDate, ReserveOpenAccountConfirmField_BookDate, sizeof(self->data.BookDate) );
        ReserveOpenAccountConfirmField_BookDate = NULL;
    }
            
    ///预约开户验证密码
    // TThostFtdcPasswordType char[41]
    if( ReserveOpenAccountConfirmField_BookPsw != NULL ) {
        if(ReserveOpenAccountConfirmField_BookPsw_len > (Py_ssize_t)sizeof(self->data.BookPsw)) {
            PyErr_Format(PyExc_ValueError, "BookPsw too long: length=%zd (max allowed is %zd)", ReserveOpenAccountConfirmField_BookPsw_len, (Py_ssize_t)sizeof(self->data.BookPsw));
            return -1;
        }
        // memset(self->data.BookPsw, 0, sizeof(self->data.BookPsw));
        // memcpy(self->data.BookPsw, ReserveOpenAccountConfirmField_BookPsw, ReserveOpenAccountConfirmField_BookPsw_len);        
        strncpy(self->data.BookPsw, ReserveOpenAccountConfirmField_BookPsw, sizeof(self->data.BookPsw) );
        ReserveOpenAccountConfirmField_BookPsw = NULL;
    }
            
    ///错误代码
    // TThostFtdcErrorIDType int
    self->data.ErrorID = ReserveOpenAccountConfirmField_ErrorID;
        
    ///错误信息
    // TThostFtdcErrorMsgType char[81]
    if( ReserveOpenAccountConfirmField_ErrorMsg != NULL ) {
        if(ReserveOpenAccountConfirmField_ErrorMsg_len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
            PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is %zd)", ReserveOpenAccountConfirmField_ErrorMsg_len, (Py_ssize_t)sizeof(self->data.ErrorMsg));
            return -1;
        }
        // memset(self->data.ErrorMsg, 0, sizeof(self->data.ErrorMsg));
        // memcpy(self->data.ErrorMsg, ReserveOpenAccountConfirmField_ErrorMsg, ReserveOpenAccountConfirmField_ErrorMsg_len);        
        strncpy(self->data.ErrorMsg, ReserveOpenAccountConfirmField_ErrorMsg, sizeof(self->data.ErrorMsg) );
        ReserveOpenAccountConfirmField_ErrorMsg = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcReserveOpenAccountConfirmField_dealloc(PyCThostFtdcReserveOpenAccountConfirmField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_repr(PyCThostFtdcReserveOpenAccountConfirmField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:c,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:i,s:c,s:y,s:y,s:c,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:i,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:c,s:s,s:c,s:s,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:c,s:s,s:s,s:i,s:c,s:s,s:s,s:c,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:i,s:s}"
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
        ,"InstallID", self->data.InstallID 
        ,"VerifyCertNoFlag", self->data.VerifyCertNoFlag 
        ,"CurrencyID", self->data.CurrencyID//, (Py_ssize_t)sizeof(self->data.CurrencyID) 
        ,"Digest", self->data.Digest//, (Py_ssize_t)sizeof(self->data.Digest) 
        ,"BankAccType", self->data.BankAccType 
        ,"BrokerIDByBank", self->data.BrokerIDByBank//, (Py_ssize_t)sizeof(self->data.BrokerIDByBank) 
        ,"TID", self->data.TID 
        ,"AccountID", self->data.AccountID//, (Py_ssize_t)sizeof(self->data.AccountID) 
        ,"Password", self->data.Password//, (Py_ssize_t)sizeof(self->data.Password) 
        ,"BankReserveOpenSeq", self->data.BankReserveOpenSeq//, (Py_ssize_t)sizeof(self->data.BankReserveOpenSeq) 
        ,"BookDate", self->data.BookDate//, (Py_ssize_t)sizeof(self->data.BookDate) 
        ,"BookPsw", self->data.BookPsw//, (Py_ssize_t)sizeof(self->data.BookPsw) 
        ,"ErrorID", self->data.ErrorID 
        ,"ErrorMsg", self->data.ErrorMsg//, (Py_ssize_t)sizeof(self->data.ErrorMsg) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReserveOpenAccountConfirmField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///业务功能码
// TThostFtdcTradeCodeType char[7]
static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_TradeCode(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeCode, (Py_ssize_t)sizeof(self->data.TradeCode));
    return PyBytes_FromString(self->data.TradeCode);
}

///业务功能码
// TThostFtdcTradeCodeType char[7]
static int PyCThostFtdcReserveOpenAccountConfirmField_set_TradeCode(PyCThostFtdcReserveOpenAccountConfirmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_BankID(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankID, (Py_ssize_t)sizeof(self->data.BankID));
    return PyBytes_FromString(self->data.BankID);
}

///银行代码
// TThostFtdcBankIDType char[4]
static int PyCThostFtdcReserveOpenAccountConfirmField_set_BankID(PyCThostFtdcReserveOpenAccountConfirmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_BankBranchID(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankBranchID, (Py_ssize_t)sizeof(self->data.BankBranchID));
    return PyBytes_FromString(self->data.BankBranchID);
}

///银行分支机构代码
// TThostFtdcBankBrchIDType char[5]
static int PyCThostFtdcReserveOpenAccountConfirmField_set_BankBranchID(PyCThostFtdcReserveOpenAccountConfirmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_BrokerID(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///期商代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcReserveOpenAccountConfirmField_set_BrokerID(PyCThostFtdcReserveOpenAccountConfirmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_BrokerBranchID(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerBranchID, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
    return PyBytes_FromString(self->data.BrokerBranchID);
}

///期商分支机构代码
// TThostFtdcFutureBranchIDType char[31]
static int PyCThostFtdcReserveOpenAccountConfirmField_set_BrokerBranchID(PyCThostFtdcReserveOpenAccountConfirmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_TradeDate(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeDate, (Py_ssize_t)sizeof(self->data.TradeDate));
    return PyBytes_FromString(self->data.TradeDate);
}

///交易日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcReserveOpenAccountConfirmField_set_TradeDate(PyCThostFtdcReserveOpenAccountConfirmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_TradeTime(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeTime, (Py_ssize_t)sizeof(self->data.TradeTime));
    return PyBytes_FromString(self->data.TradeTime);
}

///交易时间
// TThostFtdcTradeTimeType char[9]
static int PyCThostFtdcReserveOpenAccountConfirmField_set_TradeTime(PyCThostFtdcReserveOpenAccountConfirmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_BankSerial(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankSerial, (Py_ssize_t)sizeof(self->data.BankSerial));
    return PyBytes_FromString(self->data.BankSerial);
}

///银行流水号
// TThostFtdcBankSerialType char[13]
static int PyCThostFtdcReserveOpenAccountConfirmField_set_BankSerial(PyCThostFtdcReserveOpenAccountConfirmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_TradingDay(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易系统日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcReserveOpenAccountConfirmField_set_TradingDay(PyCThostFtdcReserveOpenAccountConfirmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_PlateSerial(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.PlateSerial);
#else
    return PyInt_FromLong(self->data.PlateSerial);
#endif
}

///银期平台消息流水号
// TThostFtdcSerialType int
static int PyCThostFtdcReserveOpenAccountConfirmField_set_PlateSerial(PyCThostFtdcReserveOpenAccountConfirmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_LastFragment(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

///最后分片标志
// TThostFtdcLastFragmentType char
static int PyCThostFtdcReserveOpenAccountConfirmField_set_LastFragment(PyCThostFtdcReserveOpenAccountConfirmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_SessionID(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话号
// TThostFtdcSessionIDType int
static int PyCThostFtdcReserveOpenAccountConfirmField_set_SessionID(PyCThostFtdcReserveOpenAccountConfirmField *self, PyObject* val, void *closure) {
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
// TThostFtdcLongIndividualNameType char[161]
static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_CustomerName(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CustomerName, (Py_ssize_t)sizeof(self->data.CustomerName));
    return PyBytes_FromString(self->data.CustomerName);
}

///客户姓名
// TThostFtdcLongIndividualNameType char[161]
static int PyCThostFtdcReserveOpenAccountConfirmField_set_CustomerName(PyCThostFtdcReserveOpenAccountConfirmField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CustomerName Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CustomerName)) {
        PyErr_SetString(PyExc_ValueError, "CustomerName must be less than 161 bytes");
        return -1;
    }
    // memset(self->data.CustomerName, 0, sizeof(self->data.CustomerName));
    // memcpy(self->data.CustomerName, buf, len);
    strncpy(self->data.CustomerName, buf, sizeof(self->data.CustomerName));
    return 0;
}
            
///证件类型
// TThostFtdcIdCardTypeType char
static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_IdCardType(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.IdCardType), 1);
}

///证件类型
// TThostFtdcIdCardTypeType char
static int PyCThostFtdcReserveOpenAccountConfirmField_set_IdCardType(PyCThostFtdcReserveOpenAccountConfirmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_IdentifiedCardNo(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IdentifiedCardNo, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
    return PyBytes_FromString(self->data.IdentifiedCardNo);
}

///证件号码
// TThostFtdcIdentifiedCardNoType char[51]
static int PyCThostFtdcReserveOpenAccountConfirmField_set_IdentifiedCardNo(PyCThostFtdcReserveOpenAccountConfirmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_Gender(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.Gender), 1);
}

///性别
// TThostFtdcGenderType char
static int PyCThostFtdcReserveOpenAccountConfirmField_set_Gender(PyCThostFtdcReserveOpenAccountConfirmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_CountryCode(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CountryCode, (Py_ssize_t)sizeof(self->data.CountryCode));
    return PyBytes_FromString(self->data.CountryCode);
}

///国家代码
// TThostFtdcCountryCodeType char[21]
static int PyCThostFtdcReserveOpenAccountConfirmField_set_CountryCode(PyCThostFtdcReserveOpenAccountConfirmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_CustType(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.CustType), 1);
}

///客户类型
// TThostFtdcCustTypeType char
static int PyCThostFtdcReserveOpenAccountConfirmField_set_CustType(PyCThostFtdcReserveOpenAccountConfirmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_Address(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Address, (Py_ssize_t)sizeof(self->data.Address));
    return PyBytes_FromString(self->data.Address);
}

///地址
// TThostFtdcAddressType char[101]
static int PyCThostFtdcReserveOpenAccountConfirmField_set_Address(PyCThostFtdcReserveOpenAccountConfirmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_ZipCode(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ZipCode, (Py_ssize_t)sizeof(self->data.ZipCode));
    return PyBytes_FromString(self->data.ZipCode);
}

///邮编
// TThostFtdcZipCodeType char[7]
static int PyCThostFtdcReserveOpenAccountConfirmField_set_ZipCode(PyCThostFtdcReserveOpenAccountConfirmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_Telephone(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Telephone, (Py_ssize_t)sizeof(self->data.Telephone));
    return PyBytes_FromString(self->data.Telephone);
}

///电话号码
// TThostFtdcTelephoneType char[41]
static int PyCThostFtdcReserveOpenAccountConfirmField_set_Telephone(PyCThostFtdcReserveOpenAccountConfirmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_MobilePhone(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MobilePhone, (Py_ssize_t)sizeof(self->data.MobilePhone));
    return PyBytes_FromString(self->data.MobilePhone);
}

///手机
// TThostFtdcMobilePhoneType char[21]
static int PyCThostFtdcReserveOpenAccountConfirmField_set_MobilePhone(PyCThostFtdcReserveOpenAccountConfirmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_Fax(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Fax, (Py_ssize_t)sizeof(self->data.Fax));
    return PyBytes_FromString(self->data.Fax);
}

///传真
// TThostFtdcFaxType char[41]
static int PyCThostFtdcReserveOpenAccountConfirmField_set_Fax(PyCThostFtdcReserveOpenAccountConfirmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_EMail(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.EMail, (Py_ssize_t)sizeof(self->data.EMail));
    return PyBytes_FromString(self->data.EMail);
}

///电子邮件
// TThostFtdcEMailType char[41]
static int PyCThostFtdcReserveOpenAccountConfirmField_set_EMail(PyCThostFtdcReserveOpenAccountConfirmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_MoneyAccountStatus(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.MoneyAccountStatus), 1);
}

///资金账户状态
// TThostFtdcMoneyAccountStatusType char
static int PyCThostFtdcReserveOpenAccountConfirmField_set_MoneyAccountStatus(PyCThostFtdcReserveOpenAccountConfirmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_BankAccount(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankAccount, (Py_ssize_t)sizeof(self->data.BankAccount));
    return PyBytes_FromString(self->data.BankAccount);
}

///银行帐号
// TThostFtdcBankAccountType char[41]
static int PyCThostFtdcReserveOpenAccountConfirmField_set_BankAccount(PyCThostFtdcReserveOpenAccountConfirmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_BankPassWord(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankPassWord, (Py_ssize_t)sizeof(self->data.BankPassWord));
    return PyBytes_FromString(self->data.BankPassWord);
}

///银行密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcReserveOpenAccountConfirmField_set_BankPassWord(PyCThostFtdcReserveOpenAccountConfirmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_InstallID(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcReserveOpenAccountConfirmField_set_InstallID(PyCThostFtdcReserveOpenAccountConfirmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_VerifyCertNoFlag(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.VerifyCertNoFlag), 1);
}

///验证客户证件号码标志
// TThostFtdcYesNoIndicatorType char
static int PyCThostFtdcReserveOpenAccountConfirmField_set_VerifyCertNoFlag(PyCThostFtdcReserveOpenAccountConfirmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_CurrencyID(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcReserveOpenAccountConfirmField_set_CurrencyID(PyCThostFtdcReserveOpenAccountConfirmField *self, PyObject* val, void *closure) {
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
            
///摘要
// TThostFtdcDigestType char[36]
static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_Digest(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Digest, (Py_ssize_t)sizeof(self->data.Digest));
    return PyBytes_FromString(self->data.Digest);
}

///摘要
// TThostFtdcDigestType char[36]
static int PyCThostFtdcReserveOpenAccountConfirmField_set_Digest(PyCThostFtdcReserveOpenAccountConfirmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_BankAccType(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BankAccType), 1);
}

///银行帐号类型
// TThostFtdcBankAccTypeType char
static int PyCThostFtdcReserveOpenAccountConfirmField_set_BankAccType(PyCThostFtdcReserveOpenAccountConfirmField *self, PyObject* val, void *closure) {
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
            
///期货公司银行编码
// TThostFtdcBankCodingForFutureType char[33]
static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_BrokerIDByBank(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerIDByBank, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
    return PyBytes_FromString(self->data.BrokerIDByBank);
}

///期货公司银行编码
// TThostFtdcBankCodingForFutureType char[33]
static int PyCThostFtdcReserveOpenAccountConfirmField_set_BrokerIDByBank(PyCThostFtdcReserveOpenAccountConfirmField *self, PyObject* val, void *closure) {
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
            
///交易ID
// TThostFtdcTIDType int
static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_TID(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.TID);
#else
    return PyInt_FromLong(self->data.TID);
#endif
}

///交易ID
// TThostFtdcTIDType int
static int PyCThostFtdcReserveOpenAccountConfirmField_set_TID(PyCThostFtdcReserveOpenAccountConfirmField *self, PyObject* val, void *closure) {
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
        
///投资者帐号
// TThostFtdcAccountIDType char[13]
static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_AccountID(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AccountID, (Py_ssize_t)sizeof(self->data.AccountID));
    return PyBytes_FromString(self->data.AccountID);
}

///投资者帐号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcReserveOpenAccountConfirmField_set_AccountID(PyCThostFtdcReserveOpenAccountConfirmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_Password(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Password, (Py_ssize_t)sizeof(self->data.Password));
    return PyBytes_FromString(self->data.Password);
}

///期货密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcReserveOpenAccountConfirmField_set_Password(PyCThostFtdcReserveOpenAccountConfirmField *self, PyObject* val, void *closure) {
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
            
///预约开户银行流水号
// TThostFtdcBankSerialType char[13]
static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_BankReserveOpenSeq(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankReserveOpenSeq, (Py_ssize_t)sizeof(self->data.BankReserveOpenSeq));
    return PyBytes_FromString(self->data.BankReserveOpenSeq);
}

///预约开户银行流水号
// TThostFtdcBankSerialType char[13]
static int PyCThostFtdcReserveOpenAccountConfirmField_set_BankReserveOpenSeq(PyCThostFtdcReserveOpenAccountConfirmField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BankReserveOpenSeq Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BankReserveOpenSeq)) {
        PyErr_SetString(PyExc_ValueError, "BankReserveOpenSeq must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.BankReserveOpenSeq, 0, sizeof(self->data.BankReserveOpenSeq));
    // memcpy(self->data.BankReserveOpenSeq, buf, len);
    strncpy(self->data.BankReserveOpenSeq, buf, sizeof(self->data.BankReserveOpenSeq));
    return 0;
}
            
///预约开户日期
// TThostFtdcTradeDateType char[9]
static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_BookDate(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BookDate, (Py_ssize_t)sizeof(self->data.BookDate));
    return PyBytes_FromString(self->data.BookDate);
}

///预约开户日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcReserveOpenAccountConfirmField_set_BookDate(PyCThostFtdcReserveOpenAccountConfirmField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BookDate Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BookDate)) {
        PyErr_SetString(PyExc_ValueError, "BookDate must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.BookDate, 0, sizeof(self->data.BookDate));
    // memcpy(self->data.BookDate, buf, len);
    strncpy(self->data.BookDate, buf, sizeof(self->data.BookDate));
    return 0;
}
            
///预约开户验证密码
// TThostFtdcPasswordType char[41]
static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_BookPsw(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BookPsw, (Py_ssize_t)sizeof(self->data.BookPsw));
    return PyBytes_FromString(self->data.BookPsw);
}

///预约开户验证密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcReserveOpenAccountConfirmField_set_BookPsw(PyCThostFtdcReserveOpenAccountConfirmField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BookPsw Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BookPsw)) {
        PyErr_SetString(PyExc_ValueError, "BookPsw must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.BookPsw, 0, sizeof(self->data.BookPsw));
    // memcpy(self->data.BookPsw, buf, len);
    strncpy(self->data.BookPsw, buf, sizeof(self->data.BookPsw));
    return 0;
}
            
///错误代码
// TThostFtdcErrorIDType int
static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_ErrorID(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.ErrorID);
#else
    return PyInt_FromLong(self->data.ErrorID);
#endif
}

///错误代码
// TThostFtdcErrorIDType int
static int PyCThostFtdcReserveOpenAccountConfirmField_set_ErrorID(PyCThostFtdcReserveOpenAccountConfirmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_ErrorMsg(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ErrorMsg, (Py_ssize_t)sizeof(self->data.ErrorMsg));
    return PyBytes_FromString(self->data.ErrorMsg);
}

///错误信息
// TThostFtdcErrorMsgType char[81]
static int PyCThostFtdcReserveOpenAccountConfirmField_set_ErrorMsg(PyCThostFtdcReserveOpenAccountConfirmField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcReserveOpenAccountConfirmField_getset[] = {
    ///业务功能码 
    {(char *)"TradeCode", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_TradeCode, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_TradeCode, (char *)"TradeCode", NULL},
    ///银行代码 
    {(char *)"BankID", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_BankID, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_BankID, (char *)"BankID", NULL},
    ///银行分支机构代码 
    {(char *)"BankBranchID", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_BankBranchID, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_BankBranchID, (char *)"BankBranchID", NULL},
    ///期商代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_BrokerID, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_BrokerID, (char *)"BrokerID", NULL},
    ///期商分支机构代码 
    {(char *)"BrokerBranchID", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_BrokerBranchID, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
    ///交易日期 
    {(char *)"TradeDate", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_TradeDate, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_TradeDate, (char *)"TradeDate", NULL},
    ///交易时间 
    {(char *)"TradeTime", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_TradeTime, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_TradeTime, (char *)"TradeTime", NULL},
    ///银行流水号 
    {(char *)"BankSerial", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_BankSerial, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_BankSerial, (char *)"BankSerial", NULL},
    ///交易系统日期 
    {(char *)"TradingDay", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_TradingDay, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_TradingDay, (char *)"TradingDay", NULL},
    ///银期平台消息流水号 
    {(char *)"PlateSerial", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_PlateSerial, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_PlateSerial, (char *)"PlateSerial", NULL},
    ///最后分片标志 
    {(char *)"LastFragment", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_LastFragment, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_LastFragment, (char *)"LastFragment", NULL},
    ///会话号 
    {(char *)"SessionID", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_SessionID, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_SessionID, (char *)"SessionID", NULL},
    ///客户姓名 
    {(char *)"CustomerName", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_CustomerName, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_CustomerName, (char *)"CustomerName", NULL},
    ///证件类型 
    {(char *)"IdCardType", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_IdCardType, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_IdCardType, (char *)"IdCardType", NULL},
    ///证件号码 
    {(char *)"IdentifiedCardNo", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_IdentifiedCardNo, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_IdentifiedCardNo, (char *)"IdentifiedCardNo", NULL},
    ///性别 
    {(char *)"Gender", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_Gender, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_Gender, (char *)"Gender", NULL},
    ///国家代码 
    {(char *)"CountryCode", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_CountryCode, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_CountryCode, (char *)"CountryCode", NULL},
    ///客户类型 
    {(char *)"CustType", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_CustType, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_CustType, (char *)"CustType", NULL},
    ///地址 
    {(char *)"Address", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_Address, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_Address, (char *)"Address", NULL},
    ///邮编 
    {(char *)"ZipCode", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_ZipCode, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_ZipCode, (char *)"ZipCode", NULL},
    ///电话号码 
    {(char *)"Telephone", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_Telephone, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_Telephone, (char *)"Telephone", NULL},
    ///手机 
    {(char *)"MobilePhone", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_MobilePhone, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_MobilePhone, (char *)"MobilePhone", NULL},
    ///传真 
    {(char *)"Fax", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_Fax, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_Fax, (char *)"Fax", NULL},
    ///电子邮件 
    {(char *)"EMail", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_EMail, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_EMail, (char *)"EMail", NULL},
    ///资金账户状态 
    {(char *)"MoneyAccountStatus", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_MoneyAccountStatus, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_MoneyAccountStatus, (char *)"MoneyAccountStatus", NULL},
    ///银行帐号 
    {(char *)"BankAccount", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_BankAccount, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_BankAccount, (char *)"BankAccount", NULL},
    ///银行密码 
    {(char *)"BankPassWord", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_BankPassWord, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_BankPassWord, (char *)"BankPassWord", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_InstallID, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_InstallID, (char *)"InstallID", NULL},
    ///验证客户证件号码标志 
    {(char *)"VerifyCertNoFlag", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_VerifyCertNoFlag, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_VerifyCertNoFlag, (char *)"VerifyCertNoFlag", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_CurrencyID, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_CurrencyID, (char *)"CurrencyID", NULL},
    ///摘要 
    {(char *)"Digest", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_Digest, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_Digest, (char *)"Digest", NULL},
    ///银行帐号类型 
    {(char *)"BankAccType", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_BankAccType, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_BankAccType, (char *)"BankAccType", NULL},
    ///期货公司银行编码 
    {(char *)"BrokerIDByBank", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_BrokerIDByBank, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
    ///交易ID 
    {(char *)"TID", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_TID, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_TID, (char *)"TID", NULL},
    ///投资者帐号 
    {(char *)"AccountID", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_AccountID, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_AccountID, (char *)"AccountID", NULL},
    ///期货密码 
    {(char *)"Password", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_Password, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_Password, (char *)"Password", NULL},
    ///预约开户银行流水号 
    {(char *)"BankReserveOpenSeq", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_BankReserveOpenSeq, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_BankReserveOpenSeq, (char *)"BankReserveOpenSeq", NULL},
    ///预约开户日期 
    {(char *)"BookDate", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_BookDate, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_BookDate, (char *)"BookDate", NULL},
    ///预约开户验证密码 
    {(char *)"BookPsw", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_BookPsw, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_BookPsw, (char *)"BookPsw", NULL},
    ///错误代码 
    {(char *)"ErrorID", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_ErrorID, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_ErrorID, (char *)"ErrorID", NULL},
    ///错误信息 
    {(char *)"ErrorMsg", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_ErrorMsg, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_ErrorMsg, (char *)"ErrorMsg", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcReserveOpenAccountConfirmFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcReserveOpenAccountConfirmField",	/* tp_name */
	sizeof(PyCThostFtdcReserveOpenAccountConfirmField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcReserveOpenAccountConfirmField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcReserveOpenAccountConfirmField_repr,   /* tp_repr */
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
	"CThostFtdcReserveOpenAccountConfirmField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcReserveOpenAccountConfirmField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcReserveOpenAccountConfirmField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcReserveOpenAccountConfirmField_new,       /* tp_new */
};

int PyCThostFtdcReserveOpenAccountConfirmFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcReserveOpenAccountConfirmField  */
	if (PyType_Ready(&PyCThostFtdcReserveOpenAccountConfirmFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcReserveOpenAccountConfirmField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcReserveOpenAccountConfirmFieldType);
    if( PyModule_AddObject(module, "CThostFtdcReserveOpenAccountConfirmField", (PyObject *)&PyCThostFtdcReserveOpenAccountConfirmFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReserveOpenAccountConfirmField to module");
        Py_DECREF(&PyCThostFtdcReserveOpenAccountConfirmFieldType);
		return -1;
    }

    return 0;
}
