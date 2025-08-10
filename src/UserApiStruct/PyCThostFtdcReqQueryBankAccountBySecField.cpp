
#include "PyCThostFtdcReqQueryBankAccountBySecField.h"

///次席查询银行资金帐户信息请求

static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcReqQueryBankAccountBySecField *self = (PyCThostFtdcReqQueryBankAccountBySecField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcReqQueryBankAccountBySecField_init(PyCThostFtdcReqQueryBankAccountBySecField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "CustType", "BankAccount", "BankPassWord", "AccountID", "Password", "FutureSerial", "InstallID", "UserID", "VerifyCertNoFlag", "CurrencyID", "Digest", "BankAccType", "DeviceID", "BankSecuAccType", "BrokerIDByBank", "BankSecuAcc", "BankPwdFlag", "SecuPwdFlag", "OperNo", "RequestID", "TID", "LongCustomerName", "DRIdentityID", "SecFutureSerial",  NULL};


    ///业务功能码
    // TThostFtdcTradeCodeType char[7]
    const char *ReqQueryBankAccountBySecField_TradeCode = NULL;
    Py_ssize_t ReqQueryBankAccountBySecField_TradeCode_len = 0;
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    const char *ReqQueryBankAccountBySecField_BankID = NULL;
    Py_ssize_t ReqQueryBankAccountBySecField_BankID_len = 0;
            
    ///银行分支机构代码
    // TThostFtdcBankBrchIDType char[5]
    const char *ReqQueryBankAccountBySecField_BankBranchID = NULL;
    Py_ssize_t ReqQueryBankAccountBySecField_BankBranchID_len = 0;
            
    ///期商代码
    // TThostFtdcBrokerIDType char[11]
    const char *ReqQueryBankAccountBySecField_BrokerID = NULL;
    Py_ssize_t ReqQueryBankAccountBySecField_BrokerID_len = 0;
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    const char *ReqQueryBankAccountBySecField_BrokerBranchID = NULL;
    Py_ssize_t ReqQueryBankAccountBySecField_BrokerBranchID_len = 0;
            
    ///交易日期
    // TThostFtdcTradeDateType char[9]
    const char *ReqQueryBankAccountBySecField_TradeDate = NULL;
    Py_ssize_t ReqQueryBankAccountBySecField_TradeDate_len = 0;
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    const char *ReqQueryBankAccountBySecField_TradeTime = NULL;
    Py_ssize_t ReqQueryBankAccountBySecField_TradeTime_len = 0;
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    const char *ReqQueryBankAccountBySecField_BankSerial = NULL;
    Py_ssize_t ReqQueryBankAccountBySecField_BankSerial_len = 0;
            
    ///交易系统日期
    // TThostFtdcTradeDateType char[9]
    const char *ReqQueryBankAccountBySecField_TradingDay = NULL;
    Py_ssize_t ReqQueryBankAccountBySecField_TradingDay_len = 0;
            
    ///银期平台消息流水号
    // TThostFtdcSerialType int
    int ReqQueryBankAccountBySecField_PlateSerial = 0;
        
    ///最后分片标志
    // TThostFtdcLastFragmentType char
    char ReqQueryBankAccountBySecField_LastFragment = 0;
            
    ///会话号
    // TThostFtdcSessionIDType int
    int ReqQueryBankAccountBySecField_SessionID = 0;
        
    ///客户姓名
    // TThostFtdcIndividualNameType char[51]
    const char *ReqQueryBankAccountBySecField_CustomerName = NULL;
    Py_ssize_t ReqQueryBankAccountBySecField_CustomerName_len = 0;
            
    ///证件类型
    // TThostFtdcIdCardTypeType char
    char ReqQueryBankAccountBySecField_IdCardType = 0;
            
    ///证件号码
    // TThostFtdcIdentifiedCardNoType char[51]
    const char *ReqQueryBankAccountBySecField_IdentifiedCardNo = NULL;
    Py_ssize_t ReqQueryBankAccountBySecField_IdentifiedCardNo_len = 0;
            
    ///客户类型
    // TThostFtdcCustTypeType char
    char ReqQueryBankAccountBySecField_CustType = 0;
            
    ///银行帐号
    // TThostFtdcBankAccountType char[41]
    const char *ReqQueryBankAccountBySecField_BankAccount = NULL;
    Py_ssize_t ReqQueryBankAccountBySecField_BankAccount_len = 0;
            
    ///银行密码
    // TThostFtdcPasswordType char[41]
    const char *ReqQueryBankAccountBySecField_BankPassWord = NULL;
    Py_ssize_t ReqQueryBankAccountBySecField_BankPassWord_len = 0;
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    const char *ReqQueryBankAccountBySecField_AccountID = NULL;
    Py_ssize_t ReqQueryBankAccountBySecField_AccountID_len = 0;
            
    ///期货密码
    // TThostFtdcPasswordType char[41]
    const char *ReqQueryBankAccountBySecField_Password = NULL;
    Py_ssize_t ReqQueryBankAccountBySecField_Password_len = 0;
            
    ///期货公司流水号
    // TThostFtdcFutureSerialType int
    int ReqQueryBankAccountBySecField_FutureSerial = 0;
        
    ///安装编号
    // TThostFtdcInstallIDType int
    int ReqQueryBankAccountBySecField_InstallID = 0;
        
    ///用户标识
    // TThostFtdcUserIDType char[16]
    const char *ReqQueryBankAccountBySecField_UserID = NULL;
    Py_ssize_t ReqQueryBankAccountBySecField_UserID_len = 0;
            
    ///验证客户证件号码标志
    // TThostFtdcYesNoIndicatorType char
    char ReqQueryBankAccountBySecField_VerifyCertNoFlag = 0;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *ReqQueryBankAccountBySecField_CurrencyID = NULL;
    Py_ssize_t ReqQueryBankAccountBySecField_CurrencyID_len = 0;
            
    ///摘要
    // TThostFtdcDigestType char[36]
    const char *ReqQueryBankAccountBySecField_Digest = NULL;
    Py_ssize_t ReqQueryBankAccountBySecField_Digest_len = 0;
            
    ///银行帐号类型
    // TThostFtdcBankAccTypeType char
    char ReqQueryBankAccountBySecField_BankAccType = 0;
            
    ///渠道标志
    // TThostFtdcDeviceIDType char[3]
    const char *ReqQueryBankAccountBySecField_DeviceID = NULL;
    Py_ssize_t ReqQueryBankAccountBySecField_DeviceID_len = 0;
            
    ///期货单位帐号类型
    // TThostFtdcBankAccTypeType char
    char ReqQueryBankAccountBySecField_BankSecuAccType = 0;
            
    ///期货公司银行编码
    // TThostFtdcBankCodingForFutureType char[33]
    const char *ReqQueryBankAccountBySecField_BrokerIDByBank = NULL;
    Py_ssize_t ReqQueryBankAccountBySecField_BrokerIDByBank_len = 0;
            
    ///期货单位帐号
    // TThostFtdcBankAccountType char[41]
    const char *ReqQueryBankAccountBySecField_BankSecuAcc = NULL;
    Py_ssize_t ReqQueryBankAccountBySecField_BankSecuAcc_len = 0;
            
    ///银行密码标志
    // TThostFtdcPwdFlagType char
    char ReqQueryBankAccountBySecField_BankPwdFlag = 0;
            
    ///期货资金密码核对标志
    // TThostFtdcPwdFlagType char
    char ReqQueryBankAccountBySecField_SecuPwdFlag = 0;
            
    ///交易柜员
    // TThostFtdcOperNoType char[17]
    const char *ReqQueryBankAccountBySecField_OperNo = NULL;
    Py_ssize_t ReqQueryBankAccountBySecField_OperNo_len = 0;
            
    ///请求编号
    // TThostFtdcRequestIDType int
    int ReqQueryBankAccountBySecField_RequestID = 0;
        
    ///交易ID
    // TThostFtdcTIDType int
    int ReqQueryBankAccountBySecField_TID = 0;
        
    ///长客户姓名
    // TThostFtdcLongIndividualNameType char[161]
    const char *ReqQueryBankAccountBySecField_LongCustomerName = NULL;
    Py_ssize_t ReqQueryBankAccountBySecField_LongCustomerName_len = 0;
            
    ///交易中心代码
    // TThostFtdcDRIdentityIDType int
    int ReqQueryBankAccountBySecField_DRIdentityID = 0;
        
    ///次中心发起转账期货公司流水号
    // TThostFtdcFutureSerialType int
    int ReqQueryBankAccountBySecField_SecFutureSerial = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciy#cy#cy#y#y#y#iiy#cy#y#cy#cy#y#ccy#iiy#ii", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#icis#cs#cs#s#s#s#iis#cs#s#cs#cs#s#ccs#iis#ii", (char **)kwlist
#endif

        , &ReqQueryBankAccountBySecField_TradeCode, &ReqQueryBankAccountBySecField_TradeCode_len 
        , &ReqQueryBankAccountBySecField_BankID, &ReqQueryBankAccountBySecField_BankID_len 
        , &ReqQueryBankAccountBySecField_BankBranchID, &ReqQueryBankAccountBySecField_BankBranchID_len 
        , &ReqQueryBankAccountBySecField_BrokerID, &ReqQueryBankAccountBySecField_BrokerID_len 
        , &ReqQueryBankAccountBySecField_BrokerBranchID, &ReqQueryBankAccountBySecField_BrokerBranchID_len 
        , &ReqQueryBankAccountBySecField_TradeDate, &ReqQueryBankAccountBySecField_TradeDate_len 
        , &ReqQueryBankAccountBySecField_TradeTime, &ReqQueryBankAccountBySecField_TradeTime_len 
        , &ReqQueryBankAccountBySecField_BankSerial, &ReqQueryBankAccountBySecField_BankSerial_len 
        , &ReqQueryBankAccountBySecField_TradingDay, &ReqQueryBankAccountBySecField_TradingDay_len 
        , &ReqQueryBankAccountBySecField_PlateSerial 
        , &ReqQueryBankAccountBySecField_LastFragment 
        , &ReqQueryBankAccountBySecField_SessionID 
        , &ReqQueryBankAccountBySecField_CustomerName, &ReqQueryBankAccountBySecField_CustomerName_len 
        , &ReqQueryBankAccountBySecField_IdCardType 
        , &ReqQueryBankAccountBySecField_IdentifiedCardNo, &ReqQueryBankAccountBySecField_IdentifiedCardNo_len 
        , &ReqQueryBankAccountBySecField_CustType 
        , &ReqQueryBankAccountBySecField_BankAccount, &ReqQueryBankAccountBySecField_BankAccount_len 
        , &ReqQueryBankAccountBySecField_BankPassWord, &ReqQueryBankAccountBySecField_BankPassWord_len 
        , &ReqQueryBankAccountBySecField_AccountID, &ReqQueryBankAccountBySecField_AccountID_len 
        , &ReqQueryBankAccountBySecField_Password, &ReqQueryBankAccountBySecField_Password_len 
        , &ReqQueryBankAccountBySecField_FutureSerial 
        , &ReqQueryBankAccountBySecField_InstallID 
        , &ReqQueryBankAccountBySecField_UserID, &ReqQueryBankAccountBySecField_UserID_len 
        , &ReqQueryBankAccountBySecField_VerifyCertNoFlag 
        , &ReqQueryBankAccountBySecField_CurrencyID, &ReqQueryBankAccountBySecField_CurrencyID_len 
        , &ReqQueryBankAccountBySecField_Digest, &ReqQueryBankAccountBySecField_Digest_len 
        , &ReqQueryBankAccountBySecField_BankAccType 
        , &ReqQueryBankAccountBySecField_DeviceID, &ReqQueryBankAccountBySecField_DeviceID_len 
        , &ReqQueryBankAccountBySecField_BankSecuAccType 
        , &ReqQueryBankAccountBySecField_BrokerIDByBank, &ReqQueryBankAccountBySecField_BrokerIDByBank_len 
        , &ReqQueryBankAccountBySecField_BankSecuAcc, &ReqQueryBankAccountBySecField_BankSecuAcc_len 
        , &ReqQueryBankAccountBySecField_BankPwdFlag 
        , &ReqQueryBankAccountBySecField_SecuPwdFlag 
        , &ReqQueryBankAccountBySecField_OperNo, &ReqQueryBankAccountBySecField_OperNo_len 
        , &ReqQueryBankAccountBySecField_RequestID 
        , &ReqQueryBankAccountBySecField_TID 
        , &ReqQueryBankAccountBySecField_LongCustomerName, &ReqQueryBankAccountBySecField_LongCustomerName_len 
        , &ReqQueryBankAccountBySecField_DRIdentityID 
        , &ReqQueryBankAccountBySecField_SecFutureSerial 


    )) {
        return -1;
    }


    ///业务功能码
    // TThostFtdcTradeCodeType char[7]
    if( ReqQueryBankAccountBySecField_TradeCode != NULL ) {
        if(ReqQueryBankAccountBySecField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", ReqQueryBankAccountBySecField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
            return -1;
        }
        // memset(self->data.TradeCode, 0, sizeof(self->data.TradeCode));
        // memcpy(self->data.TradeCode, ReqQueryBankAccountBySecField_TradeCode, ReqQueryBankAccountBySecField_TradeCode_len);        
        strncpy(self->data.TradeCode, ReqQueryBankAccountBySecField_TradeCode, sizeof(self->data.TradeCode) );
        ReqQueryBankAccountBySecField_TradeCode = NULL;
    }
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    if( ReqQueryBankAccountBySecField_BankID != NULL ) {
        if(ReqQueryBankAccountBySecField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", ReqQueryBankAccountBySecField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
            return -1;
        }
        // memset(self->data.BankID, 0, sizeof(self->data.BankID));
        // memcpy(self->data.BankID, ReqQueryBankAccountBySecField_BankID, ReqQueryBankAccountBySecField_BankID_len);        
        strncpy(self->data.BankID, ReqQueryBankAccountBySecField_BankID, sizeof(self->data.BankID) );
        ReqQueryBankAccountBySecField_BankID = NULL;
    }
            
    ///银行分支机构代码
    // TThostFtdcBankBrchIDType char[5]
    if( ReqQueryBankAccountBySecField_BankBranchID != NULL ) {
        if(ReqQueryBankAccountBySecField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", ReqQueryBankAccountBySecField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
            return -1;
        }
        // memset(self->data.BankBranchID, 0, sizeof(self->data.BankBranchID));
        // memcpy(self->data.BankBranchID, ReqQueryBankAccountBySecField_BankBranchID, ReqQueryBankAccountBySecField_BankBranchID_len);        
        strncpy(self->data.BankBranchID, ReqQueryBankAccountBySecField_BankBranchID, sizeof(self->data.BankBranchID) );
        ReqQueryBankAccountBySecField_BankBranchID = NULL;
    }
            
    ///期商代码
    // TThostFtdcBrokerIDType char[11]
    if( ReqQueryBankAccountBySecField_BrokerID != NULL ) {
        if(ReqQueryBankAccountBySecField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", ReqQueryBankAccountBySecField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, ReqQueryBankAccountBySecField_BrokerID, ReqQueryBankAccountBySecField_BrokerID_len);        
        strncpy(self->data.BrokerID, ReqQueryBankAccountBySecField_BrokerID, sizeof(self->data.BrokerID) );
        ReqQueryBankAccountBySecField_BrokerID = NULL;
    }
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    if( ReqQueryBankAccountBySecField_BrokerBranchID != NULL ) {
        if(ReqQueryBankAccountBySecField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", ReqQueryBankAccountBySecField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
            return -1;
        }
        // memset(self->data.BrokerBranchID, 0, sizeof(self->data.BrokerBranchID));
        // memcpy(self->data.BrokerBranchID, ReqQueryBankAccountBySecField_BrokerBranchID, ReqQueryBankAccountBySecField_BrokerBranchID_len);        
        strncpy(self->data.BrokerBranchID, ReqQueryBankAccountBySecField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
        ReqQueryBankAccountBySecField_BrokerBranchID = NULL;
    }
            
    ///交易日期
    // TThostFtdcTradeDateType char[9]
    if( ReqQueryBankAccountBySecField_TradeDate != NULL ) {
        if(ReqQueryBankAccountBySecField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", ReqQueryBankAccountBySecField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
            return -1;
        }
        // memset(self->data.TradeDate, 0, sizeof(self->data.TradeDate));
        // memcpy(self->data.TradeDate, ReqQueryBankAccountBySecField_TradeDate, ReqQueryBankAccountBySecField_TradeDate_len);        
        strncpy(self->data.TradeDate, ReqQueryBankAccountBySecField_TradeDate, sizeof(self->data.TradeDate) );
        ReqQueryBankAccountBySecField_TradeDate = NULL;
    }
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    if( ReqQueryBankAccountBySecField_TradeTime != NULL ) {
        if(ReqQueryBankAccountBySecField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", ReqQueryBankAccountBySecField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
            return -1;
        }
        // memset(self->data.TradeTime, 0, sizeof(self->data.TradeTime));
        // memcpy(self->data.TradeTime, ReqQueryBankAccountBySecField_TradeTime, ReqQueryBankAccountBySecField_TradeTime_len);        
        strncpy(self->data.TradeTime, ReqQueryBankAccountBySecField_TradeTime, sizeof(self->data.TradeTime) );
        ReqQueryBankAccountBySecField_TradeTime = NULL;
    }
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    if( ReqQueryBankAccountBySecField_BankSerial != NULL ) {
        if(ReqQueryBankAccountBySecField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", ReqQueryBankAccountBySecField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
            return -1;
        }
        // memset(self->data.BankSerial, 0, sizeof(self->data.BankSerial));
        // memcpy(self->data.BankSerial, ReqQueryBankAccountBySecField_BankSerial, ReqQueryBankAccountBySecField_BankSerial_len);        
        strncpy(self->data.BankSerial, ReqQueryBankAccountBySecField_BankSerial, sizeof(self->data.BankSerial) );
        ReqQueryBankAccountBySecField_BankSerial = NULL;
    }
            
    ///交易系统日期
    // TThostFtdcTradeDateType char[9]
    if( ReqQueryBankAccountBySecField_TradingDay != NULL ) {
        if(ReqQueryBankAccountBySecField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", ReqQueryBankAccountBySecField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, ReqQueryBankAccountBySecField_TradingDay, ReqQueryBankAccountBySecField_TradingDay_len);        
        strncpy(self->data.TradingDay, ReqQueryBankAccountBySecField_TradingDay, sizeof(self->data.TradingDay) );
        ReqQueryBankAccountBySecField_TradingDay = NULL;
    }
            
    ///银期平台消息流水号
    // TThostFtdcSerialType int
    self->data.PlateSerial = ReqQueryBankAccountBySecField_PlateSerial;
        
    ///最后分片标志
    // TThostFtdcLastFragmentType char
    self->data.LastFragment = ReqQueryBankAccountBySecField_LastFragment;
            
    ///会话号
    // TThostFtdcSessionIDType int
    self->data.SessionID = ReqQueryBankAccountBySecField_SessionID;
        
    ///客户姓名
    // TThostFtdcIndividualNameType char[51]
    if( ReqQueryBankAccountBySecField_CustomerName != NULL ) {
        if(ReqQueryBankAccountBySecField_CustomerName_len > (Py_ssize_t)sizeof(self->data.CustomerName)) {
            PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is %zd)", ReqQueryBankAccountBySecField_CustomerName_len, (Py_ssize_t)sizeof(self->data.CustomerName));
            return -1;
        }
        // memset(self->data.CustomerName, 0, sizeof(self->data.CustomerName));
        // memcpy(self->data.CustomerName, ReqQueryBankAccountBySecField_CustomerName, ReqQueryBankAccountBySecField_CustomerName_len);        
        strncpy(self->data.CustomerName, ReqQueryBankAccountBySecField_CustomerName, sizeof(self->data.CustomerName) );
        ReqQueryBankAccountBySecField_CustomerName = NULL;
    }
            
    ///证件类型
    // TThostFtdcIdCardTypeType char
    self->data.IdCardType = ReqQueryBankAccountBySecField_IdCardType;
            
    ///证件号码
    // TThostFtdcIdentifiedCardNoType char[51]
    if( ReqQueryBankAccountBySecField_IdentifiedCardNo != NULL ) {
        if(ReqQueryBankAccountBySecField_IdentifiedCardNo_len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
            PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is %zd)", ReqQueryBankAccountBySecField_IdentifiedCardNo_len, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
            return -1;
        }
        // memset(self->data.IdentifiedCardNo, 0, sizeof(self->data.IdentifiedCardNo));
        // memcpy(self->data.IdentifiedCardNo, ReqQueryBankAccountBySecField_IdentifiedCardNo, ReqQueryBankAccountBySecField_IdentifiedCardNo_len);        
        strncpy(self->data.IdentifiedCardNo, ReqQueryBankAccountBySecField_IdentifiedCardNo, sizeof(self->data.IdentifiedCardNo) );
        ReqQueryBankAccountBySecField_IdentifiedCardNo = NULL;
    }
            
    ///客户类型
    // TThostFtdcCustTypeType char
    self->data.CustType = ReqQueryBankAccountBySecField_CustType;
            
    ///银行帐号
    // TThostFtdcBankAccountType char[41]
    if( ReqQueryBankAccountBySecField_BankAccount != NULL ) {
        if(ReqQueryBankAccountBySecField_BankAccount_len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
            PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is %zd)", ReqQueryBankAccountBySecField_BankAccount_len, (Py_ssize_t)sizeof(self->data.BankAccount));
            return -1;
        }
        // memset(self->data.BankAccount, 0, sizeof(self->data.BankAccount));
        // memcpy(self->data.BankAccount, ReqQueryBankAccountBySecField_BankAccount, ReqQueryBankAccountBySecField_BankAccount_len);        
        strncpy(self->data.BankAccount, ReqQueryBankAccountBySecField_BankAccount, sizeof(self->data.BankAccount) );
        ReqQueryBankAccountBySecField_BankAccount = NULL;
    }
            
    ///银行密码
    // TThostFtdcPasswordType char[41]
    if( ReqQueryBankAccountBySecField_BankPassWord != NULL ) {
        if(ReqQueryBankAccountBySecField_BankPassWord_len > (Py_ssize_t)sizeof(self->data.BankPassWord)) {
            PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is %zd)", ReqQueryBankAccountBySecField_BankPassWord_len, (Py_ssize_t)sizeof(self->data.BankPassWord));
            return -1;
        }
        // memset(self->data.BankPassWord, 0, sizeof(self->data.BankPassWord));
        // memcpy(self->data.BankPassWord, ReqQueryBankAccountBySecField_BankPassWord, ReqQueryBankAccountBySecField_BankPassWord_len);        
        strncpy(self->data.BankPassWord, ReqQueryBankAccountBySecField_BankPassWord, sizeof(self->data.BankPassWord) );
        ReqQueryBankAccountBySecField_BankPassWord = NULL;
    }
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    if( ReqQueryBankAccountBySecField_AccountID != NULL ) {
        if(ReqQueryBankAccountBySecField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", ReqQueryBankAccountBySecField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
            return -1;
        }
        // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
        // memcpy(self->data.AccountID, ReqQueryBankAccountBySecField_AccountID, ReqQueryBankAccountBySecField_AccountID_len);        
        strncpy(self->data.AccountID, ReqQueryBankAccountBySecField_AccountID, sizeof(self->data.AccountID) );
        ReqQueryBankAccountBySecField_AccountID = NULL;
    }
            
    ///期货密码
    // TThostFtdcPasswordType char[41]
    if( ReqQueryBankAccountBySecField_Password != NULL ) {
        if(ReqQueryBankAccountBySecField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", ReqQueryBankAccountBySecField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
            return -1;
        }
        // memset(self->data.Password, 0, sizeof(self->data.Password));
        // memcpy(self->data.Password, ReqQueryBankAccountBySecField_Password, ReqQueryBankAccountBySecField_Password_len);        
        strncpy(self->data.Password, ReqQueryBankAccountBySecField_Password, sizeof(self->data.Password) );
        ReqQueryBankAccountBySecField_Password = NULL;
    }
            
    ///期货公司流水号
    // TThostFtdcFutureSerialType int
    self->data.FutureSerial = ReqQueryBankAccountBySecField_FutureSerial;
        
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = ReqQueryBankAccountBySecField_InstallID;
        
    ///用户标识
    // TThostFtdcUserIDType char[16]
    if( ReqQueryBankAccountBySecField_UserID != NULL ) {
        if(ReqQueryBankAccountBySecField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", ReqQueryBankAccountBySecField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, ReqQueryBankAccountBySecField_UserID, ReqQueryBankAccountBySecField_UserID_len);        
        strncpy(self->data.UserID, ReqQueryBankAccountBySecField_UserID, sizeof(self->data.UserID) );
        ReqQueryBankAccountBySecField_UserID = NULL;
    }
            
    ///验证客户证件号码标志
    // TThostFtdcYesNoIndicatorType char
    self->data.VerifyCertNoFlag = ReqQueryBankAccountBySecField_VerifyCertNoFlag;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( ReqQueryBankAccountBySecField_CurrencyID != NULL ) {
        if(ReqQueryBankAccountBySecField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", ReqQueryBankAccountBySecField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, ReqQueryBankAccountBySecField_CurrencyID, ReqQueryBankAccountBySecField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, ReqQueryBankAccountBySecField_CurrencyID, sizeof(self->data.CurrencyID) );
        ReqQueryBankAccountBySecField_CurrencyID = NULL;
    }
            
    ///摘要
    // TThostFtdcDigestType char[36]
    if( ReqQueryBankAccountBySecField_Digest != NULL ) {
        if(ReqQueryBankAccountBySecField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
            PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", ReqQueryBankAccountBySecField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
            return -1;
        }
        // memset(self->data.Digest, 0, sizeof(self->data.Digest));
        // memcpy(self->data.Digest, ReqQueryBankAccountBySecField_Digest, ReqQueryBankAccountBySecField_Digest_len);        
        strncpy(self->data.Digest, ReqQueryBankAccountBySecField_Digest, sizeof(self->data.Digest) );
        ReqQueryBankAccountBySecField_Digest = NULL;
    }
            
    ///银行帐号类型
    // TThostFtdcBankAccTypeType char
    self->data.BankAccType = ReqQueryBankAccountBySecField_BankAccType;
            
    ///渠道标志
    // TThostFtdcDeviceIDType char[3]
    if( ReqQueryBankAccountBySecField_DeviceID != NULL ) {
        if(ReqQueryBankAccountBySecField_DeviceID_len > (Py_ssize_t)sizeof(self->data.DeviceID)) {
            PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is %zd)", ReqQueryBankAccountBySecField_DeviceID_len, (Py_ssize_t)sizeof(self->data.DeviceID));
            return -1;
        }
        // memset(self->data.DeviceID, 0, sizeof(self->data.DeviceID));
        // memcpy(self->data.DeviceID, ReqQueryBankAccountBySecField_DeviceID, ReqQueryBankAccountBySecField_DeviceID_len);        
        strncpy(self->data.DeviceID, ReqQueryBankAccountBySecField_DeviceID, sizeof(self->data.DeviceID) );
        ReqQueryBankAccountBySecField_DeviceID = NULL;
    }
            
    ///期货单位帐号类型
    // TThostFtdcBankAccTypeType char
    self->data.BankSecuAccType = ReqQueryBankAccountBySecField_BankSecuAccType;
            
    ///期货公司银行编码
    // TThostFtdcBankCodingForFutureType char[33]
    if( ReqQueryBankAccountBySecField_BrokerIDByBank != NULL ) {
        if(ReqQueryBankAccountBySecField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
            PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", ReqQueryBankAccountBySecField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
            return -1;
        }
        // memset(self->data.BrokerIDByBank, 0, sizeof(self->data.BrokerIDByBank));
        // memcpy(self->data.BrokerIDByBank, ReqQueryBankAccountBySecField_BrokerIDByBank, ReqQueryBankAccountBySecField_BrokerIDByBank_len);        
        strncpy(self->data.BrokerIDByBank, ReqQueryBankAccountBySecField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
        ReqQueryBankAccountBySecField_BrokerIDByBank = NULL;
    }
            
    ///期货单位帐号
    // TThostFtdcBankAccountType char[41]
    if( ReqQueryBankAccountBySecField_BankSecuAcc != NULL ) {
        if(ReqQueryBankAccountBySecField_BankSecuAcc_len > (Py_ssize_t)sizeof(self->data.BankSecuAcc)) {
            PyErr_Format(PyExc_ValueError, "BankSecuAcc too long: length=%zd (max allowed is %zd)", ReqQueryBankAccountBySecField_BankSecuAcc_len, (Py_ssize_t)sizeof(self->data.BankSecuAcc));
            return -1;
        }
        // memset(self->data.BankSecuAcc, 0, sizeof(self->data.BankSecuAcc));
        // memcpy(self->data.BankSecuAcc, ReqQueryBankAccountBySecField_BankSecuAcc, ReqQueryBankAccountBySecField_BankSecuAcc_len);        
        strncpy(self->data.BankSecuAcc, ReqQueryBankAccountBySecField_BankSecuAcc, sizeof(self->data.BankSecuAcc) );
        ReqQueryBankAccountBySecField_BankSecuAcc = NULL;
    }
            
    ///银行密码标志
    // TThostFtdcPwdFlagType char
    self->data.BankPwdFlag = ReqQueryBankAccountBySecField_BankPwdFlag;
            
    ///期货资金密码核对标志
    // TThostFtdcPwdFlagType char
    self->data.SecuPwdFlag = ReqQueryBankAccountBySecField_SecuPwdFlag;
            
    ///交易柜员
    // TThostFtdcOperNoType char[17]
    if( ReqQueryBankAccountBySecField_OperNo != NULL ) {
        if(ReqQueryBankAccountBySecField_OperNo_len > (Py_ssize_t)sizeof(self->data.OperNo)) {
            PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is %zd)", ReqQueryBankAccountBySecField_OperNo_len, (Py_ssize_t)sizeof(self->data.OperNo));
            return -1;
        }
        // memset(self->data.OperNo, 0, sizeof(self->data.OperNo));
        // memcpy(self->data.OperNo, ReqQueryBankAccountBySecField_OperNo, ReqQueryBankAccountBySecField_OperNo_len);        
        strncpy(self->data.OperNo, ReqQueryBankAccountBySecField_OperNo, sizeof(self->data.OperNo) );
        ReqQueryBankAccountBySecField_OperNo = NULL;
    }
            
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = ReqQueryBankAccountBySecField_RequestID;
        
    ///交易ID
    // TThostFtdcTIDType int
    self->data.TID = ReqQueryBankAccountBySecField_TID;
        
    ///长客户姓名
    // TThostFtdcLongIndividualNameType char[161]
    if( ReqQueryBankAccountBySecField_LongCustomerName != NULL ) {
        if(ReqQueryBankAccountBySecField_LongCustomerName_len > (Py_ssize_t)sizeof(self->data.LongCustomerName)) {
            PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is %zd)", ReqQueryBankAccountBySecField_LongCustomerName_len, (Py_ssize_t)sizeof(self->data.LongCustomerName));
            return -1;
        }
        // memset(self->data.LongCustomerName, 0, sizeof(self->data.LongCustomerName));
        // memcpy(self->data.LongCustomerName, ReqQueryBankAccountBySecField_LongCustomerName, ReqQueryBankAccountBySecField_LongCustomerName_len);        
        strncpy(self->data.LongCustomerName, ReqQueryBankAccountBySecField_LongCustomerName, sizeof(self->data.LongCustomerName) );
        ReqQueryBankAccountBySecField_LongCustomerName = NULL;
    }
            
    ///交易中心代码
    // TThostFtdcDRIdentityIDType int
    self->data.DRIdentityID = ReqQueryBankAccountBySecField_DRIdentityID;
        
    ///次中心发起转账期货公司流水号
    // TThostFtdcFutureSerialType int
    self->data.SecFutureSerial = ReqQueryBankAccountBySecField_SecFutureSerial;
        

    return 0;
}

static void PyCThostFtdcReqQueryBankAccountBySecField_dealloc(PyCThostFtdcReqQueryBankAccountBySecField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_repr(PyCThostFtdcReqQueryBankAccountBySecField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:c,s:y,s:y,s:c,s:y,s:c,s:y,s:y,s:c,s:c,s:y,s:i,s:i,s:y,s:i,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:c,s:s,s:c,s:s,s:s,s:s,s:s,s:i,s:i,s:s,s:c,s:s,s:s,s:c,s:s,s:c,s:s,s:s,s:c,s:c,s:s,s:i,s:i,s:s,s:i,s:i}"
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
        ,"CustType", self->data.CustType 
        ,"BankAccount", self->data.BankAccount//, (Py_ssize_t)sizeof(self->data.BankAccount) 
        ,"BankPassWord", self->data.BankPassWord//, (Py_ssize_t)sizeof(self->data.BankPassWord) 
        ,"AccountID", self->data.AccountID//, (Py_ssize_t)sizeof(self->data.AccountID) 
        ,"Password", self->data.Password//, (Py_ssize_t)sizeof(self->data.Password) 
        ,"FutureSerial", self->data.FutureSerial 
        ,"InstallID", self->data.InstallID 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"VerifyCertNoFlag", self->data.VerifyCertNoFlag 
        ,"CurrencyID", self->data.CurrencyID//, (Py_ssize_t)sizeof(self->data.CurrencyID) 
        ,"Digest", self->data.Digest//, (Py_ssize_t)sizeof(self->data.Digest) 
        ,"BankAccType", self->data.BankAccType 
        ,"DeviceID", self->data.DeviceID//, (Py_ssize_t)sizeof(self->data.DeviceID) 
        ,"BankSecuAccType", self->data.BankSecuAccType 
        ,"BrokerIDByBank", self->data.BrokerIDByBank//, (Py_ssize_t)sizeof(self->data.BrokerIDByBank) 
        ,"BankSecuAcc", self->data.BankSecuAcc//, (Py_ssize_t)sizeof(self->data.BankSecuAcc) 
        ,"BankPwdFlag", self->data.BankPwdFlag 
        ,"SecuPwdFlag", self->data.SecuPwdFlag 
        ,"OperNo", self->data.OperNo//, (Py_ssize_t)sizeof(self->data.OperNo) 
        ,"RequestID", self->data.RequestID 
        ,"TID", self->data.TID 
        ,"LongCustomerName", self->data.LongCustomerName//, (Py_ssize_t)sizeof(self->data.LongCustomerName) 
        ,"DRIdentityID", self->data.DRIdentityID 
        ,"SecFutureSerial", self->data.SecFutureSerial 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqQueryBankAccountBySecField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///业务功能码
// TThostFtdcTradeCodeType char[7]
static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_TradeCode(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeCode, (Py_ssize_t)sizeof(self->data.TradeCode));
    return PyBytes_FromString(self->data.TradeCode);
}

///业务功能码
// TThostFtdcTradeCodeType char[7]
static int PyCThostFtdcReqQueryBankAccountBySecField_set_TradeCode(PyCThostFtdcReqQueryBankAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_BankID(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankID, (Py_ssize_t)sizeof(self->data.BankID));
    return PyBytes_FromString(self->data.BankID);
}

///银行代码
// TThostFtdcBankIDType char[4]
static int PyCThostFtdcReqQueryBankAccountBySecField_set_BankID(PyCThostFtdcReqQueryBankAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_BankBranchID(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankBranchID, (Py_ssize_t)sizeof(self->data.BankBranchID));
    return PyBytes_FromString(self->data.BankBranchID);
}

///银行分支机构代码
// TThostFtdcBankBrchIDType char[5]
static int PyCThostFtdcReqQueryBankAccountBySecField_set_BankBranchID(PyCThostFtdcReqQueryBankAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_BrokerID(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///期商代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcReqQueryBankAccountBySecField_set_BrokerID(PyCThostFtdcReqQueryBankAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_BrokerBranchID(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerBranchID, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
    return PyBytes_FromString(self->data.BrokerBranchID);
}

///期商分支机构代码
// TThostFtdcFutureBranchIDType char[31]
static int PyCThostFtdcReqQueryBankAccountBySecField_set_BrokerBranchID(PyCThostFtdcReqQueryBankAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_TradeDate(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeDate, (Py_ssize_t)sizeof(self->data.TradeDate));
    return PyBytes_FromString(self->data.TradeDate);
}

///交易日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcReqQueryBankAccountBySecField_set_TradeDate(PyCThostFtdcReqQueryBankAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_TradeTime(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeTime, (Py_ssize_t)sizeof(self->data.TradeTime));
    return PyBytes_FromString(self->data.TradeTime);
}

///交易时间
// TThostFtdcTradeTimeType char[9]
static int PyCThostFtdcReqQueryBankAccountBySecField_set_TradeTime(PyCThostFtdcReqQueryBankAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_BankSerial(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankSerial, (Py_ssize_t)sizeof(self->data.BankSerial));
    return PyBytes_FromString(self->data.BankSerial);
}

///银行流水号
// TThostFtdcBankSerialType char[13]
static int PyCThostFtdcReqQueryBankAccountBySecField_set_BankSerial(PyCThostFtdcReqQueryBankAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_TradingDay(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易系统日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcReqQueryBankAccountBySecField_set_TradingDay(PyCThostFtdcReqQueryBankAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_PlateSerial(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.PlateSerial);
#else
    return PyInt_FromLong(self->data.PlateSerial);
#endif
}

///银期平台消息流水号
// TThostFtdcSerialType int
static int PyCThostFtdcReqQueryBankAccountBySecField_set_PlateSerial(PyCThostFtdcReqQueryBankAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_LastFragment(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

///最后分片标志
// TThostFtdcLastFragmentType char
static int PyCThostFtdcReqQueryBankAccountBySecField_set_LastFragment(PyCThostFtdcReqQueryBankAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_SessionID(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话号
// TThostFtdcSessionIDType int
static int PyCThostFtdcReqQueryBankAccountBySecField_set_SessionID(PyCThostFtdcReqQueryBankAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_CustomerName(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CustomerName, (Py_ssize_t)sizeof(self->data.CustomerName));
    return PyBytes_FromString(self->data.CustomerName);
}

///客户姓名
// TThostFtdcIndividualNameType char[51]
static int PyCThostFtdcReqQueryBankAccountBySecField_set_CustomerName(PyCThostFtdcReqQueryBankAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_IdCardType(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.IdCardType), 1);
}

///证件类型
// TThostFtdcIdCardTypeType char
static int PyCThostFtdcReqQueryBankAccountBySecField_set_IdCardType(PyCThostFtdcReqQueryBankAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_IdentifiedCardNo(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IdentifiedCardNo, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
    return PyBytes_FromString(self->data.IdentifiedCardNo);
}

///证件号码
// TThostFtdcIdentifiedCardNoType char[51]
static int PyCThostFtdcReqQueryBankAccountBySecField_set_IdentifiedCardNo(PyCThostFtdcReqQueryBankAccountBySecField *self, PyObject* val, void *closure) {
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
            
///客户类型
// TThostFtdcCustTypeType char
static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_CustType(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.CustType), 1);
}

///客户类型
// TThostFtdcCustTypeType char
static int PyCThostFtdcReqQueryBankAccountBySecField_set_CustType(PyCThostFtdcReqQueryBankAccountBySecField *self, PyObject* val, void *closure) {
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
            
///银行帐号
// TThostFtdcBankAccountType char[41]
static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_BankAccount(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankAccount, (Py_ssize_t)sizeof(self->data.BankAccount));
    return PyBytes_FromString(self->data.BankAccount);
}

///银行帐号
// TThostFtdcBankAccountType char[41]
static int PyCThostFtdcReqQueryBankAccountBySecField_set_BankAccount(PyCThostFtdcReqQueryBankAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_BankPassWord(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankPassWord, (Py_ssize_t)sizeof(self->data.BankPassWord));
    return PyBytes_FromString(self->data.BankPassWord);
}

///银行密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcReqQueryBankAccountBySecField_set_BankPassWord(PyCThostFtdcReqQueryBankAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_AccountID(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AccountID, (Py_ssize_t)sizeof(self->data.AccountID));
    return PyBytes_FromString(self->data.AccountID);
}

///投资者帐号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcReqQueryBankAccountBySecField_set_AccountID(PyCThostFtdcReqQueryBankAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_Password(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Password, (Py_ssize_t)sizeof(self->data.Password));
    return PyBytes_FromString(self->data.Password);
}

///期货密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcReqQueryBankAccountBySecField_set_Password(PyCThostFtdcReqQueryBankAccountBySecField *self, PyObject* val, void *closure) {
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
            
///期货公司流水号
// TThostFtdcFutureSerialType int
static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_FutureSerial(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FutureSerial);
#else
    return PyInt_FromLong(self->data.FutureSerial);
#endif
}

///期货公司流水号
// TThostFtdcFutureSerialType int
static int PyCThostFtdcReqQueryBankAccountBySecField_set_FutureSerial(PyCThostFtdcReqQueryBankAccountBySecField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FutureSerial Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FutureSerial Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the FutureSerial value out of range for C int");
        return -1;
    }
    self->data.FutureSerial = (int)buf;
    return 0;
}
        
///安装编号
// TThostFtdcInstallIDType int
static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_InstallID(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcReqQueryBankAccountBySecField_set_InstallID(PyCThostFtdcReqQueryBankAccountBySecField *self, PyObject* val, void *closure) {
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
        
///用户标识
// TThostFtdcUserIDType char[16]
static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_UserID(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户标识
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcReqQueryBankAccountBySecField_set_UserID(PyCThostFtdcReqQueryBankAccountBySecField *self, PyObject* val, void *closure) {
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
            
///验证客户证件号码标志
// TThostFtdcYesNoIndicatorType char
static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_VerifyCertNoFlag(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.VerifyCertNoFlag), 1);
}

///验证客户证件号码标志
// TThostFtdcYesNoIndicatorType char
static int PyCThostFtdcReqQueryBankAccountBySecField_set_VerifyCertNoFlag(PyCThostFtdcReqQueryBankAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_CurrencyID(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcReqQueryBankAccountBySecField_set_CurrencyID(PyCThostFtdcReqQueryBankAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_Digest(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Digest, (Py_ssize_t)sizeof(self->data.Digest));
    return PyBytes_FromString(self->data.Digest);
}

///摘要
// TThostFtdcDigestType char[36]
static int PyCThostFtdcReqQueryBankAccountBySecField_set_Digest(PyCThostFtdcReqQueryBankAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_BankAccType(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BankAccType), 1);
}

///银行帐号类型
// TThostFtdcBankAccTypeType char
static int PyCThostFtdcReqQueryBankAccountBySecField_set_BankAccType(PyCThostFtdcReqQueryBankAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_DeviceID(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.DeviceID, (Py_ssize_t)sizeof(self->data.DeviceID));
    return PyBytes_FromString(self->data.DeviceID);
}

///渠道标志
// TThostFtdcDeviceIDType char[3]
static int PyCThostFtdcReqQueryBankAccountBySecField_set_DeviceID(PyCThostFtdcReqQueryBankAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_BankSecuAccType(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BankSecuAccType), 1);
}

///期货单位帐号类型
// TThostFtdcBankAccTypeType char
static int PyCThostFtdcReqQueryBankAccountBySecField_set_BankSecuAccType(PyCThostFtdcReqQueryBankAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_BrokerIDByBank(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerIDByBank, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
    return PyBytes_FromString(self->data.BrokerIDByBank);
}

///期货公司银行编码
// TThostFtdcBankCodingForFutureType char[33]
static int PyCThostFtdcReqQueryBankAccountBySecField_set_BrokerIDByBank(PyCThostFtdcReqQueryBankAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_BankSecuAcc(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankSecuAcc, (Py_ssize_t)sizeof(self->data.BankSecuAcc));
    return PyBytes_FromString(self->data.BankSecuAcc);
}

///期货单位帐号
// TThostFtdcBankAccountType char[41]
static int PyCThostFtdcReqQueryBankAccountBySecField_set_BankSecuAcc(PyCThostFtdcReqQueryBankAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_BankPwdFlag(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BankPwdFlag), 1);
}

///银行密码标志
// TThostFtdcPwdFlagType char
static int PyCThostFtdcReqQueryBankAccountBySecField_set_BankPwdFlag(PyCThostFtdcReqQueryBankAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_SecuPwdFlag(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.SecuPwdFlag), 1);
}

///期货资金密码核对标志
// TThostFtdcPwdFlagType char
static int PyCThostFtdcReqQueryBankAccountBySecField_set_SecuPwdFlag(PyCThostFtdcReqQueryBankAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_OperNo(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OperNo, (Py_ssize_t)sizeof(self->data.OperNo));
    return PyBytes_FromString(self->data.OperNo);
}

///交易柜员
// TThostFtdcOperNoType char[17]
static int PyCThostFtdcReqQueryBankAccountBySecField_set_OperNo(PyCThostFtdcReqQueryBankAccountBySecField *self, PyObject* val, void *closure) {
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
            
///请求编号
// TThostFtdcRequestIDType int
static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_RequestID(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcReqQueryBankAccountBySecField_set_RequestID(PyCThostFtdcReqQueryBankAccountBySecField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "RequestID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "RequestID Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the RequestID value out of range for C int");
        return -1;
    }
    self->data.RequestID = (int)buf;
    return 0;
}
        
///交易ID
// TThostFtdcTIDType int
static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_TID(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.TID);
#else
    return PyInt_FromLong(self->data.TID);
#endif
}

///交易ID
// TThostFtdcTIDType int
static int PyCThostFtdcReqQueryBankAccountBySecField_set_TID(PyCThostFtdcReqQueryBankAccountBySecField *self, PyObject* val, void *closure) {
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
        
///长客户姓名
// TThostFtdcLongIndividualNameType char[161]
static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_LongCustomerName(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.LongCustomerName, (Py_ssize_t)sizeof(self->data.LongCustomerName));
    return PyBytes_FromString(self->data.LongCustomerName);
}

///长客户姓名
// TThostFtdcLongIndividualNameType char[161]
static int PyCThostFtdcReqQueryBankAccountBySecField_set_LongCustomerName(PyCThostFtdcReqQueryBankAccountBySecField *self, PyObject* val, void *closure) {
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
            
///交易中心代码
// TThostFtdcDRIdentityIDType int
static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_DRIdentityID(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.DRIdentityID);
#else
    return PyInt_FromLong(self->data.DRIdentityID);
#endif
}

///交易中心代码
// TThostFtdcDRIdentityIDType int
static int PyCThostFtdcReqQueryBankAccountBySecField_set_DRIdentityID(PyCThostFtdcReqQueryBankAccountBySecField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DRIdentityID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DRIdentityID Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the DRIdentityID value out of range for C int");
        return -1;
    }
    self->data.DRIdentityID = (int)buf;
    return 0;
}
        
///次中心发起转账期货公司流水号
// TThostFtdcFutureSerialType int
static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_SecFutureSerial(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SecFutureSerial);
#else
    return PyInt_FromLong(self->data.SecFutureSerial);
#endif
}

///次中心发起转账期货公司流水号
// TThostFtdcFutureSerialType int
static int PyCThostFtdcReqQueryBankAccountBySecField_set_SecFutureSerial(PyCThostFtdcReqQueryBankAccountBySecField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SecFutureSerial Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SecFutureSerial Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the SecFutureSerial value out of range for C int");
        return -1;
    }
    self->data.SecFutureSerial = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcReqQueryBankAccountBySecField_getset[] = {
    ///业务功能码 
    {(char *)"TradeCode", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_TradeCode, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_TradeCode, (char *)"TradeCode", NULL},
    ///银行代码 
    {(char *)"BankID", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_BankID, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_BankID, (char *)"BankID", NULL},
    ///银行分支机构代码 
    {(char *)"BankBranchID", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_BankBranchID, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_BankBranchID, (char *)"BankBranchID", NULL},
    ///期商代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_BrokerID, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_BrokerID, (char *)"BrokerID", NULL},
    ///期商分支机构代码 
    {(char *)"BrokerBranchID", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_BrokerBranchID, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
    ///交易日期 
    {(char *)"TradeDate", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_TradeDate, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_TradeDate, (char *)"TradeDate", NULL},
    ///交易时间 
    {(char *)"TradeTime", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_TradeTime, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_TradeTime, (char *)"TradeTime", NULL},
    ///银行流水号 
    {(char *)"BankSerial", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_BankSerial, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_BankSerial, (char *)"BankSerial", NULL},
    ///交易系统日期 
    {(char *)"TradingDay", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_TradingDay, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_TradingDay, (char *)"TradingDay", NULL},
    ///银期平台消息流水号 
    {(char *)"PlateSerial", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_PlateSerial, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_PlateSerial, (char *)"PlateSerial", NULL},
    ///最后分片标志 
    {(char *)"LastFragment", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_LastFragment, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_LastFragment, (char *)"LastFragment", NULL},
    ///会话号 
    {(char *)"SessionID", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_SessionID, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_SessionID, (char *)"SessionID", NULL},
    ///客户姓名 
    {(char *)"CustomerName", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_CustomerName, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_CustomerName, (char *)"CustomerName", NULL},
    ///证件类型 
    {(char *)"IdCardType", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_IdCardType, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_IdCardType, (char *)"IdCardType", NULL},
    ///证件号码 
    {(char *)"IdentifiedCardNo", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_IdentifiedCardNo, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_IdentifiedCardNo, (char *)"IdentifiedCardNo", NULL},
    ///客户类型 
    {(char *)"CustType", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_CustType, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_CustType, (char *)"CustType", NULL},
    ///银行帐号 
    {(char *)"BankAccount", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_BankAccount, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_BankAccount, (char *)"BankAccount", NULL},
    ///银行密码 
    {(char *)"BankPassWord", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_BankPassWord, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_BankPassWord, (char *)"BankPassWord", NULL},
    ///投资者帐号 
    {(char *)"AccountID", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_AccountID, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_AccountID, (char *)"AccountID", NULL},
    ///期货密码 
    {(char *)"Password", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_Password, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_Password, (char *)"Password", NULL},
    ///期货公司流水号 
    {(char *)"FutureSerial", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_FutureSerial, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_FutureSerial, (char *)"FutureSerial", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_InstallID, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_InstallID, (char *)"InstallID", NULL},
    ///用户标识 
    {(char *)"UserID", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_UserID, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_UserID, (char *)"UserID", NULL},
    ///验证客户证件号码标志 
    {(char *)"VerifyCertNoFlag", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_VerifyCertNoFlag, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_VerifyCertNoFlag, (char *)"VerifyCertNoFlag", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_CurrencyID, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_CurrencyID, (char *)"CurrencyID", NULL},
    ///摘要 
    {(char *)"Digest", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_Digest, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_Digest, (char *)"Digest", NULL},
    ///银行帐号类型 
    {(char *)"BankAccType", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_BankAccType, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_BankAccType, (char *)"BankAccType", NULL},
    ///渠道标志 
    {(char *)"DeviceID", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_DeviceID, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_DeviceID, (char *)"DeviceID", NULL},
    ///期货单位帐号类型 
    {(char *)"BankSecuAccType", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_BankSecuAccType, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_BankSecuAccType, (char *)"BankSecuAccType", NULL},
    ///期货公司银行编码 
    {(char *)"BrokerIDByBank", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_BrokerIDByBank, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
    ///期货单位帐号 
    {(char *)"BankSecuAcc", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_BankSecuAcc, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_BankSecuAcc, (char *)"BankSecuAcc", NULL},
    ///银行密码标志 
    {(char *)"BankPwdFlag", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_BankPwdFlag, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_BankPwdFlag, (char *)"BankPwdFlag", NULL},
    ///期货资金密码核对标志 
    {(char *)"SecuPwdFlag", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_SecuPwdFlag, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_SecuPwdFlag, (char *)"SecuPwdFlag", NULL},
    ///交易柜员 
    {(char *)"OperNo", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_OperNo, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_OperNo, (char *)"OperNo", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_RequestID, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_RequestID, (char *)"RequestID", NULL},
    ///交易ID 
    {(char *)"TID", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_TID, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_TID, (char *)"TID", NULL},
    ///长客户姓名 
    {(char *)"LongCustomerName", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_LongCustomerName, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_LongCustomerName, (char *)"LongCustomerName", NULL},
    ///交易中心代码 
    {(char *)"DRIdentityID", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_DRIdentityID, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_DRIdentityID, (char *)"DRIdentityID", NULL},
    ///次中心发起转账期货公司流水号 
    {(char *)"SecFutureSerial", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_SecFutureSerial, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_SecFutureSerial, (char *)"SecFutureSerial", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcReqQueryBankAccountBySecFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcReqQueryBankAccountBySecField",	/* tp_name */
	sizeof(PyCThostFtdcReqQueryBankAccountBySecField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcReqQueryBankAccountBySecField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcReqQueryBankAccountBySecField_repr,   /* tp_repr */
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
	"CThostFtdcReqQueryBankAccountBySecField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcReqQueryBankAccountBySecField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcReqQueryBankAccountBySecField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcReqQueryBankAccountBySecField_new,       /* tp_new */
};

int PyCThostFtdcReqQueryBankAccountBySecFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcReqQueryBankAccountBySecField  */
	if (PyType_Ready(&PyCThostFtdcReqQueryBankAccountBySecFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcReqQueryBankAccountBySecField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcReqQueryBankAccountBySecFieldType);
    if( PyModule_AddObject(module, "CThostFtdcReqQueryBankAccountBySecField", (PyObject *)&PyCThostFtdcReqQueryBankAccountBySecFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqQueryBankAccountBySecField to module");
        Py_DECREF(&PyCThostFtdcReqQueryBankAccountBySecFieldType);
		return -1;
    }

    return 0;
}
