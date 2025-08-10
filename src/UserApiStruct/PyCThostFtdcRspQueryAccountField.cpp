
#include "PyCThostFtdcRspQueryAccountField.h"

///查询账户信息响应

static PyObject *PyCThostFtdcRspQueryAccountField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRspQueryAccountField *self = (PyCThostFtdcRspQueryAccountField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcRspQueryAccountField_init(PyCThostFtdcRspQueryAccountField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "CustType", "BankAccount", "BankPassWord", "AccountID", "Password", "FutureSerial", "InstallID", "UserID", "VerifyCertNoFlag", "CurrencyID", "Digest", "BankAccType", "DeviceID", "BankSecuAccType", "BrokerIDByBank", "BankSecuAcc", "BankPwdFlag", "SecuPwdFlag", "OperNo", "RequestID", "TID", "BankUseAmount", "BankFetchAmount", "LongCustomerName",  NULL};


    ///业务功能码
    // TThostFtdcTradeCodeType char[7]
    const char *RspQueryAccountField_TradeCode = NULL;
    Py_ssize_t RspQueryAccountField_TradeCode_len = 0;
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    const char *RspQueryAccountField_BankID = NULL;
    Py_ssize_t RspQueryAccountField_BankID_len = 0;
            
    ///银行分支机构代码
    // TThostFtdcBankBrchIDType char[5]
    const char *RspQueryAccountField_BankBranchID = NULL;
    Py_ssize_t RspQueryAccountField_BankBranchID_len = 0;
            
    ///期商代码
    // TThostFtdcBrokerIDType char[11]
    const char *RspQueryAccountField_BrokerID = NULL;
    Py_ssize_t RspQueryAccountField_BrokerID_len = 0;
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    const char *RspQueryAccountField_BrokerBranchID = NULL;
    Py_ssize_t RspQueryAccountField_BrokerBranchID_len = 0;
            
    ///交易日期
    // TThostFtdcTradeDateType char[9]
    const char *RspQueryAccountField_TradeDate = NULL;
    Py_ssize_t RspQueryAccountField_TradeDate_len = 0;
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    const char *RspQueryAccountField_TradeTime = NULL;
    Py_ssize_t RspQueryAccountField_TradeTime_len = 0;
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    const char *RspQueryAccountField_BankSerial = NULL;
    Py_ssize_t RspQueryAccountField_BankSerial_len = 0;
            
    ///交易系统日期
    // TThostFtdcTradeDateType char[9]
    const char *RspQueryAccountField_TradingDay = NULL;
    Py_ssize_t RspQueryAccountField_TradingDay_len = 0;
            
    ///银期平台消息流水号
    // TThostFtdcSerialType int
    int RspQueryAccountField_PlateSerial = 0;
        
    ///最后分片标志
    // TThostFtdcLastFragmentType char
    char RspQueryAccountField_LastFragment = 0;
            
    ///会话号
    // TThostFtdcSessionIDType int
    int RspQueryAccountField_SessionID = 0;
        
    ///客户姓名
    // TThostFtdcIndividualNameType char[51]
    const char *RspQueryAccountField_CustomerName = NULL;
    Py_ssize_t RspQueryAccountField_CustomerName_len = 0;
            
    ///证件类型
    // TThostFtdcIdCardTypeType char
    char RspQueryAccountField_IdCardType = 0;
            
    ///证件号码
    // TThostFtdcIdentifiedCardNoType char[51]
    const char *RspQueryAccountField_IdentifiedCardNo = NULL;
    Py_ssize_t RspQueryAccountField_IdentifiedCardNo_len = 0;
            
    ///客户类型
    // TThostFtdcCustTypeType char
    char RspQueryAccountField_CustType = 0;
            
    ///银行帐号
    // TThostFtdcBankAccountType char[41]
    const char *RspQueryAccountField_BankAccount = NULL;
    Py_ssize_t RspQueryAccountField_BankAccount_len = 0;
            
    ///银行密码
    // TThostFtdcPasswordType char[41]
    const char *RspQueryAccountField_BankPassWord = NULL;
    Py_ssize_t RspQueryAccountField_BankPassWord_len = 0;
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    const char *RspQueryAccountField_AccountID = NULL;
    Py_ssize_t RspQueryAccountField_AccountID_len = 0;
            
    ///期货密码
    // TThostFtdcPasswordType char[41]
    const char *RspQueryAccountField_Password = NULL;
    Py_ssize_t RspQueryAccountField_Password_len = 0;
            
    ///期货公司流水号
    // TThostFtdcFutureSerialType int
    int RspQueryAccountField_FutureSerial = 0;
        
    ///安装编号
    // TThostFtdcInstallIDType int
    int RspQueryAccountField_InstallID = 0;
        
    ///用户标识
    // TThostFtdcUserIDType char[16]
    const char *RspQueryAccountField_UserID = NULL;
    Py_ssize_t RspQueryAccountField_UserID_len = 0;
            
    ///验证客户证件号码标志
    // TThostFtdcYesNoIndicatorType char
    char RspQueryAccountField_VerifyCertNoFlag = 0;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *RspQueryAccountField_CurrencyID = NULL;
    Py_ssize_t RspQueryAccountField_CurrencyID_len = 0;
            
    ///摘要
    // TThostFtdcDigestType char[36]
    const char *RspQueryAccountField_Digest = NULL;
    Py_ssize_t RspQueryAccountField_Digest_len = 0;
            
    ///银行帐号类型
    // TThostFtdcBankAccTypeType char
    char RspQueryAccountField_BankAccType = 0;
            
    ///渠道标志
    // TThostFtdcDeviceIDType char[3]
    const char *RspQueryAccountField_DeviceID = NULL;
    Py_ssize_t RspQueryAccountField_DeviceID_len = 0;
            
    ///期货单位帐号类型
    // TThostFtdcBankAccTypeType char
    char RspQueryAccountField_BankSecuAccType = 0;
            
    ///期货公司银行编码
    // TThostFtdcBankCodingForFutureType char[33]
    const char *RspQueryAccountField_BrokerIDByBank = NULL;
    Py_ssize_t RspQueryAccountField_BrokerIDByBank_len = 0;
            
    ///期货单位帐号
    // TThostFtdcBankAccountType char[41]
    const char *RspQueryAccountField_BankSecuAcc = NULL;
    Py_ssize_t RspQueryAccountField_BankSecuAcc_len = 0;
            
    ///银行密码标志
    // TThostFtdcPwdFlagType char
    char RspQueryAccountField_BankPwdFlag = 0;
            
    ///期货资金密码核对标志
    // TThostFtdcPwdFlagType char
    char RspQueryAccountField_SecuPwdFlag = 0;
            
    ///交易柜员
    // TThostFtdcOperNoType char[17]
    const char *RspQueryAccountField_OperNo = NULL;
    Py_ssize_t RspQueryAccountField_OperNo_len = 0;
            
    ///请求编号
    // TThostFtdcRequestIDType int
    int RspQueryAccountField_RequestID = 0;
        
    ///交易ID
    // TThostFtdcTIDType int
    int RspQueryAccountField_TID = 0;
        
    ///银行可用金额
    // TThostFtdcTradeAmountType double
    double RspQueryAccountField_BankUseAmount = 0.0;
        
    ///银行可取金额
    // TThostFtdcTradeAmountType double
    double RspQueryAccountField_BankFetchAmount = 0.0;
        
    ///长客户姓名
    // TThostFtdcLongIndividualNameType char[161]
    const char *RspQueryAccountField_LongCustomerName = NULL;
    Py_ssize_t RspQueryAccountField_LongCustomerName_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciy#cy#cy#y#y#y#iiy#cy#y#cy#cy#y#ccy#iiddy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#icis#cs#cs#s#s#s#iis#cs#s#cs#cs#s#ccs#iidds#", (char **)kwlist
#endif

        , &RspQueryAccountField_TradeCode, &RspQueryAccountField_TradeCode_len 
        , &RspQueryAccountField_BankID, &RspQueryAccountField_BankID_len 
        , &RspQueryAccountField_BankBranchID, &RspQueryAccountField_BankBranchID_len 
        , &RspQueryAccountField_BrokerID, &RspQueryAccountField_BrokerID_len 
        , &RspQueryAccountField_BrokerBranchID, &RspQueryAccountField_BrokerBranchID_len 
        , &RspQueryAccountField_TradeDate, &RspQueryAccountField_TradeDate_len 
        , &RspQueryAccountField_TradeTime, &RspQueryAccountField_TradeTime_len 
        , &RspQueryAccountField_BankSerial, &RspQueryAccountField_BankSerial_len 
        , &RspQueryAccountField_TradingDay, &RspQueryAccountField_TradingDay_len 
        , &RspQueryAccountField_PlateSerial 
        , &RspQueryAccountField_LastFragment 
        , &RspQueryAccountField_SessionID 
        , &RspQueryAccountField_CustomerName, &RspQueryAccountField_CustomerName_len 
        , &RspQueryAccountField_IdCardType 
        , &RspQueryAccountField_IdentifiedCardNo, &RspQueryAccountField_IdentifiedCardNo_len 
        , &RspQueryAccountField_CustType 
        , &RspQueryAccountField_BankAccount, &RspQueryAccountField_BankAccount_len 
        , &RspQueryAccountField_BankPassWord, &RspQueryAccountField_BankPassWord_len 
        , &RspQueryAccountField_AccountID, &RspQueryAccountField_AccountID_len 
        , &RspQueryAccountField_Password, &RspQueryAccountField_Password_len 
        , &RspQueryAccountField_FutureSerial 
        , &RspQueryAccountField_InstallID 
        , &RspQueryAccountField_UserID, &RspQueryAccountField_UserID_len 
        , &RspQueryAccountField_VerifyCertNoFlag 
        , &RspQueryAccountField_CurrencyID, &RspQueryAccountField_CurrencyID_len 
        , &RspQueryAccountField_Digest, &RspQueryAccountField_Digest_len 
        , &RspQueryAccountField_BankAccType 
        , &RspQueryAccountField_DeviceID, &RspQueryAccountField_DeviceID_len 
        , &RspQueryAccountField_BankSecuAccType 
        , &RspQueryAccountField_BrokerIDByBank, &RspQueryAccountField_BrokerIDByBank_len 
        , &RspQueryAccountField_BankSecuAcc, &RspQueryAccountField_BankSecuAcc_len 
        , &RspQueryAccountField_BankPwdFlag 
        , &RspQueryAccountField_SecuPwdFlag 
        , &RspQueryAccountField_OperNo, &RspQueryAccountField_OperNo_len 
        , &RspQueryAccountField_RequestID 
        , &RspQueryAccountField_TID 
        , &RspQueryAccountField_BankUseAmount 
        , &RspQueryAccountField_BankFetchAmount 
        , &RspQueryAccountField_LongCustomerName, &RspQueryAccountField_LongCustomerName_len 


    )) {
        return -1;
    }


    ///业务功能码
    // TThostFtdcTradeCodeType char[7]
    if( RspQueryAccountField_TradeCode != NULL ) {
        if(RspQueryAccountField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", RspQueryAccountField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
            return -1;
        }
        // memset(self->data.TradeCode, 0, sizeof(self->data.TradeCode));
        // memcpy(self->data.TradeCode, RspQueryAccountField_TradeCode, RspQueryAccountField_TradeCode_len);        
        strncpy(self->data.TradeCode, RspQueryAccountField_TradeCode, sizeof(self->data.TradeCode) );
        RspQueryAccountField_TradeCode = NULL;
    }
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    if( RspQueryAccountField_BankID != NULL ) {
        if(RspQueryAccountField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", RspQueryAccountField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
            return -1;
        }
        // memset(self->data.BankID, 0, sizeof(self->data.BankID));
        // memcpy(self->data.BankID, RspQueryAccountField_BankID, RspQueryAccountField_BankID_len);        
        strncpy(self->data.BankID, RspQueryAccountField_BankID, sizeof(self->data.BankID) );
        RspQueryAccountField_BankID = NULL;
    }
            
    ///银行分支机构代码
    // TThostFtdcBankBrchIDType char[5]
    if( RspQueryAccountField_BankBranchID != NULL ) {
        if(RspQueryAccountField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", RspQueryAccountField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
            return -1;
        }
        // memset(self->data.BankBranchID, 0, sizeof(self->data.BankBranchID));
        // memcpy(self->data.BankBranchID, RspQueryAccountField_BankBranchID, RspQueryAccountField_BankBranchID_len);        
        strncpy(self->data.BankBranchID, RspQueryAccountField_BankBranchID, sizeof(self->data.BankBranchID) );
        RspQueryAccountField_BankBranchID = NULL;
    }
            
    ///期商代码
    // TThostFtdcBrokerIDType char[11]
    if( RspQueryAccountField_BrokerID != NULL ) {
        if(RspQueryAccountField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", RspQueryAccountField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, RspQueryAccountField_BrokerID, RspQueryAccountField_BrokerID_len);        
        strncpy(self->data.BrokerID, RspQueryAccountField_BrokerID, sizeof(self->data.BrokerID) );
        RspQueryAccountField_BrokerID = NULL;
    }
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    if( RspQueryAccountField_BrokerBranchID != NULL ) {
        if(RspQueryAccountField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", RspQueryAccountField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
            return -1;
        }
        // memset(self->data.BrokerBranchID, 0, sizeof(self->data.BrokerBranchID));
        // memcpy(self->data.BrokerBranchID, RspQueryAccountField_BrokerBranchID, RspQueryAccountField_BrokerBranchID_len);        
        strncpy(self->data.BrokerBranchID, RspQueryAccountField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
        RspQueryAccountField_BrokerBranchID = NULL;
    }
            
    ///交易日期
    // TThostFtdcTradeDateType char[9]
    if( RspQueryAccountField_TradeDate != NULL ) {
        if(RspQueryAccountField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", RspQueryAccountField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
            return -1;
        }
        // memset(self->data.TradeDate, 0, sizeof(self->data.TradeDate));
        // memcpy(self->data.TradeDate, RspQueryAccountField_TradeDate, RspQueryAccountField_TradeDate_len);        
        strncpy(self->data.TradeDate, RspQueryAccountField_TradeDate, sizeof(self->data.TradeDate) );
        RspQueryAccountField_TradeDate = NULL;
    }
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    if( RspQueryAccountField_TradeTime != NULL ) {
        if(RspQueryAccountField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", RspQueryAccountField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
            return -1;
        }
        // memset(self->data.TradeTime, 0, sizeof(self->data.TradeTime));
        // memcpy(self->data.TradeTime, RspQueryAccountField_TradeTime, RspQueryAccountField_TradeTime_len);        
        strncpy(self->data.TradeTime, RspQueryAccountField_TradeTime, sizeof(self->data.TradeTime) );
        RspQueryAccountField_TradeTime = NULL;
    }
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    if( RspQueryAccountField_BankSerial != NULL ) {
        if(RspQueryAccountField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", RspQueryAccountField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
            return -1;
        }
        // memset(self->data.BankSerial, 0, sizeof(self->data.BankSerial));
        // memcpy(self->data.BankSerial, RspQueryAccountField_BankSerial, RspQueryAccountField_BankSerial_len);        
        strncpy(self->data.BankSerial, RspQueryAccountField_BankSerial, sizeof(self->data.BankSerial) );
        RspQueryAccountField_BankSerial = NULL;
    }
            
    ///交易系统日期
    // TThostFtdcTradeDateType char[9]
    if( RspQueryAccountField_TradingDay != NULL ) {
        if(RspQueryAccountField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", RspQueryAccountField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, RspQueryAccountField_TradingDay, RspQueryAccountField_TradingDay_len);        
        strncpy(self->data.TradingDay, RspQueryAccountField_TradingDay, sizeof(self->data.TradingDay) );
        RspQueryAccountField_TradingDay = NULL;
    }
            
    ///银期平台消息流水号
    // TThostFtdcSerialType int
    self->data.PlateSerial = RspQueryAccountField_PlateSerial;
        
    ///最后分片标志
    // TThostFtdcLastFragmentType char
    self->data.LastFragment = RspQueryAccountField_LastFragment;
            
    ///会话号
    // TThostFtdcSessionIDType int
    self->data.SessionID = RspQueryAccountField_SessionID;
        
    ///客户姓名
    // TThostFtdcIndividualNameType char[51]
    if( RspQueryAccountField_CustomerName != NULL ) {
        if(RspQueryAccountField_CustomerName_len > (Py_ssize_t)sizeof(self->data.CustomerName)) {
            PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is %zd)", RspQueryAccountField_CustomerName_len, (Py_ssize_t)sizeof(self->data.CustomerName));
            return -1;
        }
        // memset(self->data.CustomerName, 0, sizeof(self->data.CustomerName));
        // memcpy(self->data.CustomerName, RspQueryAccountField_CustomerName, RspQueryAccountField_CustomerName_len);        
        strncpy(self->data.CustomerName, RspQueryAccountField_CustomerName, sizeof(self->data.CustomerName) );
        RspQueryAccountField_CustomerName = NULL;
    }
            
    ///证件类型
    // TThostFtdcIdCardTypeType char
    self->data.IdCardType = RspQueryAccountField_IdCardType;
            
    ///证件号码
    // TThostFtdcIdentifiedCardNoType char[51]
    if( RspQueryAccountField_IdentifiedCardNo != NULL ) {
        if(RspQueryAccountField_IdentifiedCardNo_len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
            PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is %zd)", RspQueryAccountField_IdentifiedCardNo_len, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
            return -1;
        }
        // memset(self->data.IdentifiedCardNo, 0, sizeof(self->data.IdentifiedCardNo));
        // memcpy(self->data.IdentifiedCardNo, RspQueryAccountField_IdentifiedCardNo, RspQueryAccountField_IdentifiedCardNo_len);        
        strncpy(self->data.IdentifiedCardNo, RspQueryAccountField_IdentifiedCardNo, sizeof(self->data.IdentifiedCardNo) );
        RspQueryAccountField_IdentifiedCardNo = NULL;
    }
            
    ///客户类型
    // TThostFtdcCustTypeType char
    self->data.CustType = RspQueryAccountField_CustType;
            
    ///银行帐号
    // TThostFtdcBankAccountType char[41]
    if( RspQueryAccountField_BankAccount != NULL ) {
        if(RspQueryAccountField_BankAccount_len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
            PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is %zd)", RspQueryAccountField_BankAccount_len, (Py_ssize_t)sizeof(self->data.BankAccount));
            return -1;
        }
        // memset(self->data.BankAccount, 0, sizeof(self->data.BankAccount));
        // memcpy(self->data.BankAccount, RspQueryAccountField_BankAccount, RspQueryAccountField_BankAccount_len);        
        strncpy(self->data.BankAccount, RspQueryAccountField_BankAccount, sizeof(self->data.BankAccount) );
        RspQueryAccountField_BankAccount = NULL;
    }
            
    ///银行密码
    // TThostFtdcPasswordType char[41]
    if( RspQueryAccountField_BankPassWord != NULL ) {
        if(RspQueryAccountField_BankPassWord_len > (Py_ssize_t)sizeof(self->data.BankPassWord)) {
            PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is %zd)", RspQueryAccountField_BankPassWord_len, (Py_ssize_t)sizeof(self->data.BankPassWord));
            return -1;
        }
        // memset(self->data.BankPassWord, 0, sizeof(self->data.BankPassWord));
        // memcpy(self->data.BankPassWord, RspQueryAccountField_BankPassWord, RspQueryAccountField_BankPassWord_len);        
        strncpy(self->data.BankPassWord, RspQueryAccountField_BankPassWord, sizeof(self->data.BankPassWord) );
        RspQueryAccountField_BankPassWord = NULL;
    }
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    if( RspQueryAccountField_AccountID != NULL ) {
        if(RspQueryAccountField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", RspQueryAccountField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
            return -1;
        }
        // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
        // memcpy(self->data.AccountID, RspQueryAccountField_AccountID, RspQueryAccountField_AccountID_len);        
        strncpy(self->data.AccountID, RspQueryAccountField_AccountID, sizeof(self->data.AccountID) );
        RspQueryAccountField_AccountID = NULL;
    }
            
    ///期货密码
    // TThostFtdcPasswordType char[41]
    if( RspQueryAccountField_Password != NULL ) {
        if(RspQueryAccountField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", RspQueryAccountField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
            return -1;
        }
        // memset(self->data.Password, 0, sizeof(self->data.Password));
        // memcpy(self->data.Password, RspQueryAccountField_Password, RspQueryAccountField_Password_len);        
        strncpy(self->data.Password, RspQueryAccountField_Password, sizeof(self->data.Password) );
        RspQueryAccountField_Password = NULL;
    }
            
    ///期货公司流水号
    // TThostFtdcFutureSerialType int
    self->data.FutureSerial = RspQueryAccountField_FutureSerial;
        
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = RspQueryAccountField_InstallID;
        
    ///用户标识
    // TThostFtdcUserIDType char[16]
    if( RspQueryAccountField_UserID != NULL ) {
        if(RspQueryAccountField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", RspQueryAccountField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, RspQueryAccountField_UserID, RspQueryAccountField_UserID_len);        
        strncpy(self->data.UserID, RspQueryAccountField_UserID, sizeof(self->data.UserID) );
        RspQueryAccountField_UserID = NULL;
    }
            
    ///验证客户证件号码标志
    // TThostFtdcYesNoIndicatorType char
    self->data.VerifyCertNoFlag = RspQueryAccountField_VerifyCertNoFlag;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( RspQueryAccountField_CurrencyID != NULL ) {
        if(RspQueryAccountField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", RspQueryAccountField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, RspQueryAccountField_CurrencyID, RspQueryAccountField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, RspQueryAccountField_CurrencyID, sizeof(self->data.CurrencyID) );
        RspQueryAccountField_CurrencyID = NULL;
    }
            
    ///摘要
    // TThostFtdcDigestType char[36]
    if( RspQueryAccountField_Digest != NULL ) {
        if(RspQueryAccountField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
            PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", RspQueryAccountField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
            return -1;
        }
        // memset(self->data.Digest, 0, sizeof(self->data.Digest));
        // memcpy(self->data.Digest, RspQueryAccountField_Digest, RspQueryAccountField_Digest_len);        
        strncpy(self->data.Digest, RspQueryAccountField_Digest, sizeof(self->data.Digest) );
        RspQueryAccountField_Digest = NULL;
    }
            
    ///银行帐号类型
    // TThostFtdcBankAccTypeType char
    self->data.BankAccType = RspQueryAccountField_BankAccType;
            
    ///渠道标志
    // TThostFtdcDeviceIDType char[3]
    if( RspQueryAccountField_DeviceID != NULL ) {
        if(RspQueryAccountField_DeviceID_len > (Py_ssize_t)sizeof(self->data.DeviceID)) {
            PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is %zd)", RspQueryAccountField_DeviceID_len, (Py_ssize_t)sizeof(self->data.DeviceID));
            return -1;
        }
        // memset(self->data.DeviceID, 0, sizeof(self->data.DeviceID));
        // memcpy(self->data.DeviceID, RspQueryAccountField_DeviceID, RspQueryAccountField_DeviceID_len);        
        strncpy(self->data.DeviceID, RspQueryAccountField_DeviceID, sizeof(self->data.DeviceID) );
        RspQueryAccountField_DeviceID = NULL;
    }
            
    ///期货单位帐号类型
    // TThostFtdcBankAccTypeType char
    self->data.BankSecuAccType = RspQueryAccountField_BankSecuAccType;
            
    ///期货公司银行编码
    // TThostFtdcBankCodingForFutureType char[33]
    if( RspQueryAccountField_BrokerIDByBank != NULL ) {
        if(RspQueryAccountField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
            PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", RspQueryAccountField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
            return -1;
        }
        // memset(self->data.BrokerIDByBank, 0, sizeof(self->data.BrokerIDByBank));
        // memcpy(self->data.BrokerIDByBank, RspQueryAccountField_BrokerIDByBank, RspQueryAccountField_BrokerIDByBank_len);        
        strncpy(self->data.BrokerIDByBank, RspQueryAccountField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
        RspQueryAccountField_BrokerIDByBank = NULL;
    }
            
    ///期货单位帐号
    // TThostFtdcBankAccountType char[41]
    if( RspQueryAccountField_BankSecuAcc != NULL ) {
        if(RspQueryAccountField_BankSecuAcc_len > (Py_ssize_t)sizeof(self->data.BankSecuAcc)) {
            PyErr_Format(PyExc_ValueError, "BankSecuAcc too long: length=%zd (max allowed is %zd)", RspQueryAccountField_BankSecuAcc_len, (Py_ssize_t)sizeof(self->data.BankSecuAcc));
            return -1;
        }
        // memset(self->data.BankSecuAcc, 0, sizeof(self->data.BankSecuAcc));
        // memcpy(self->data.BankSecuAcc, RspQueryAccountField_BankSecuAcc, RspQueryAccountField_BankSecuAcc_len);        
        strncpy(self->data.BankSecuAcc, RspQueryAccountField_BankSecuAcc, sizeof(self->data.BankSecuAcc) );
        RspQueryAccountField_BankSecuAcc = NULL;
    }
            
    ///银行密码标志
    // TThostFtdcPwdFlagType char
    self->data.BankPwdFlag = RspQueryAccountField_BankPwdFlag;
            
    ///期货资金密码核对标志
    // TThostFtdcPwdFlagType char
    self->data.SecuPwdFlag = RspQueryAccountField_SecuPwdFlag;
            
    ///交易柜员
    // TThostFtdcOperNoType char[17]
    if( RspQueryAccountField_OperNo != NULL ) {
        if(RspQueryAccountField_OperNo_len > (Py_ssize_t)sizeof(self->data.OperNo)) {
            PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is %zd)", RspQueryAccountField_OperNo_len, (Py_ssize_t)sizeof(self->data.OperNo));
            return -1;
        }
        // memset(self->data.OperNo, 0, sizeof(self->data.OperNo));
        // memcpy(self->data.OperNo, RspQueryAccountField_OperNo, RspQueryAccountField_OperNo_len);        
        strncpy(self->data.OperNo, RspQueryAccountField_OperNo, sizeof(self->data.OperNo) );
        RspQueryAccountField_OperNo = NULL;
    }
            
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = RspQueryAccountField_RequestID;
        
    ///交易ID
    // TThostFtdcTIDType int
    self->data.TID = RspQueryAccountField_TID;
        
    ///银行可用金额
    // TThostFtdcTradeAmountType double
    self->data.BankUseAmount = RspQueryAccountField_BankUseAmount;
        
    ///银行可取金额
    // TThostFtdcTradeAmountType double
    self->data.BankFetchAmount = RspQueryAccountField_BankFetchAmount;
        
    ///长客户姓名
    // TThostFtdcLongIndividualNameType char[161]
    if( RspQueryAccountField_LongCustomerName != NULL ) {
        if(RspQueryAccountField_LongCustomerName_len > (Py_ssize_t)sizeof(self->data.LongCustomerName)) {
            PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is %zd)", RspQueryAccountField_LongCustomerName_len, (Py_ssize_t)sizeof(self->data.LongCustomerName));
            return -1;
        }
        // memset(self->data.LongCustomerName, 0, sizeof(self->data.LongCustomerName));
        // memcpy(self->data.LongCustomerName, RspQueryAccountField_LongCustomerName, RspQueryAccountField_LongCustomerName_len);        
        strncpy(self->data.LongCustomerName, RspQueryAccountField_LongCustomerName, sizeof(self->data.LongCustomerName) );
        RspQueryAccountField_LongCustomerName = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcRspQueryAccountField_dealloc(PyCThostFtdcRspQueryAccountField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRspQueryAccountField_repr(PyCThostFtdcRspQueryAccountField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:c,s:y,s:y,s:c,s:y,s:c,s:y,s:y,s:c,s:c,s:y,s:i,s:i,s:d,s:d,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:c,s:s,s:c,s:s,s:s,s:s,s:s,s:i,s:i,s:s,s:c,s:s,s:s,s:c,s:s,s:c,s:s,s:s,s:c,s:c,s:s,s:i,s:i,s:d,s:d,s:s}"
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
        ,"BankUseAmount", self->data.BankUseAmount 
        ,"BankFetchAmount", self->data.BankFetchAmount 
        ,"LongCustomerName", self->data.LongCustomerName//, (Py_ssize_t)sizeof(self->data.LongCustomerName) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspQueryAccountField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///业务功能码
// TThostFtdcTradeCodeType char[7]
static PyObject *PyCThostFtdcRspQueryAccountField_get_TradeCode(PyCThostFtdcRspQueryAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeCode, (Py_ssize_t)sizeof(self->data.TradeCode));
    return PyBytes_FromString(self->data.TradeCode);
}

///业务功能码
// TThostFtdcTradeCodeType char[7]
static int PyCThostFtdcRspQueryAccountField_set_TradeCode(PyCThostFtdcRspQueryAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryAccountField_get_BankID(PyCThostFtdcRspQueryAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankID, (Py_ssize_t)sizeof(self->data.BankID));
    return PyBytes_FromString(self->data.BankID);
}

///银行代码
// TThostFtdcBankIDType char[4]
static int PyCThostFtdcRspQueryAccountField_set_BankID(PyCThostFtdcRspQueryAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryAccountField_get_BankBranchID(PyCThostFtdcRspQueryAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankBranchID, (Py_ssize_t)sizeof(self->data.BankBranchID));
    return PyBytes_FromString(self->data.BankBranchID);
}

///银行分支机构代码
// TThostFtdcBankBrchIDType char[5]
static int PyCThostFtdcRspQueryAccountField_set_BankBranchID(PyCThostFtdcRspQueryAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryAccountField_get_BrokerID(PyCThostFtdcRspQueryAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///期商代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcRspQueryAccountField_set_BrokerID(PyCThostFtdcRspQueryAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryAccountField_get_BrokerBranchID(PyCThostFtdcRspQueryAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerBranchID, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
    return PyBytes_FromString(self->data.BrokerBranchID);
}

///期商分支机构代码
// TThostFtdcFutureBranchIDType char[31]
static int PyCThostFtdcRspQueryAccountField_set_BrokerBranchID(PyCThostFtdcRspQueryAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryAccountField_get_TradeDate(PyCThostFtdcRspQueryAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeDate, (Py_ssize_t)sizeof(self->data.TradeDate));
    return PyBytes_FromString(self->data.TradeDate);
}

///交易日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcRspQueryAccountField_set_TradeDate(PyCThostFtdcRspQueryAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryAccountField_get_TradeTime(PyCThostFtdcRspQueryAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeTime, (Py_ssize_t)sizeof(self->data.TradeTime));
    return PyBytes_FromString(self->data.TradeTime);
}

///交易时间
// TThostFtdcTradeTimeType char[9]
static int PyCThostFtdcRspQueryAccountField_set_TradeTime(PyCThostFtdcRspQueryAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryAccountField_get_BankSerial(PyCThostFtdcRspQueryAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankSerial, (Py_ssize_t)sizeof(self->data.BankSerial));
    return PyBytes_FromString(self->data.BankSerial);
}

///银行流水号
// TThostFtdcBankSerialType char[13]
static int PyCThostFtdcRspQueryAccountField_set_BankSerial(PyCThostFtdcRspQueryAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryAccountField_get_TradingDay(PyCThostFtdcRspQueryAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易系统日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcRspQueryAccountField_set_TradingDay(PyCThostFtdcRspQueryAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryAccountField_get_PlateSerial(PyCThostFtdcRspQueryAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.PlateSerial);
#else
    return PyInt_FromLong(self->data.PlateSerial);
#endif
}

///银期平台消息流水号
// TThostFtdcSerialType int
static int PyCThostFtdcRspQueryAccountField_set_PlateSerial(PyCThostFtdcRspQueryAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryAccountField_get_LastFragment(PyCThostFtdcRspQueryAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

///最后分片标志
// TThostFtdcLastFragmentType char
static int PyCThostFtdcRspQueryAccountField_set_LastFragment(PyCThostFtdcRspQueryAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryAccountField_get_SessionID(PyCThostFtdcRspQueryAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话号
// TThostFtdcSessionIDType int
static int PyCThostFtdcRspQueryAccountField_set_SessionID(PyCThostFtdcRspQueryAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryAccountField_get_CustomerName(PyCThostFtdcRspQueryAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CustomerName, (Py_ssize_t)sizeof(self->data.CustomerName));
    return PyBytes_FromString(self->data.CustomerName);
}

///客户姓名
// TThostFtdcIndividualNameType char[51]
static int PyCThostFtdcRspQueryAccountField_set_CustomerName(PyCThostFtdcRspQueryAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryAccountField_get_IdCardType(PyCThostFtdcRspQueryAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.IdCardType), 1);
}

///证件类型
// TThostFtdcIdCardTypeType char
static int PyCThostFtdcRspQueryAccountField_set_IdCardType(PyCThostFtdcRspQueryAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryAccountField_get_IdentifiedCardNo(PyCThostFtdcRspQueryAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IdentifiedCardNo, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
    return PyBytes_FromString(self->data.IdentifiedCardNo);
}

///证件号码
// TThostFtdcIdentifiedCardNoType char[51]
static int PyCThostFtdcRspQueryAccountField_set_IdentifiedCardNo(PyCThostFtdcRspQueryAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryAccountField_get_CustType(PyCThostFtdcRspQueryAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.CustType), 1);
}

///客户类型
// TThostFtdcCustTypeType char
static int PyCThostFtdcRspQueryAccountField_set_CustType(PyCThostFtdcRspQueryAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryAccountField_get_BankAccount(PyCThostFtdcRspQueryAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankAccount, (Py_ssize_t)sizeof(self->data.BankAccount));
    return PyBytes_FromString(self->data.BankAccount);
}

///银行帐号
// TThostFtdcBankAccountType char[41]
static int PyCThostFtdcRspQueryAccountField_set_BankAccount(PyCThostFtdcRspQueryAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryAccountField_get_BankPassWord(PyCThostFtdcRspQueryAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankPassWord, (Py_ssize_t)sizeof(self->data.BankPassWord));
    return PyBytes_FromString(self->data.BankPassWord);
}

///银行密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcRspQueryAccountField_set_BankPassWord(PyCThostFtdcRspQueryAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryAccountField_get_AccountID(PyCThostFtdcRspQueryAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AccountID, (Py_ssize_t)sizeof(self->data.AccountID));
    return PyBytes_FromString(self->data.AccountID);
}

///投资者帐号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcRspQueryAccountField_set_AccountID(PyCThostFtdcRspQueryAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryAccountField_get_Password(PyCThostFtdcRspQueryAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Password, (Py_ssize_t)sizeof(self->data.Password));
    return PyBytes_FromString(self->data.Password);
}

///期货密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcRspQueryAccountField_set_Password(PyCThostFtdcRspQueryAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryAccountField_get_FutureSerial(PyCThostFtdcRspQueryAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FutureSerial);
#else
    return PyInt_FromLong(self->data.FutureSerial);
#endif
}

///期货公司流水号
// TThostFtdcFutureSerialType int
static int PyCThostFtdcRspQueryAccountField_set_FutureSerial(PyCThostFtdcRspQueryAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryAccountField_get_InstallID(PyCThostFtdcRspQueryAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcRspQueryAccountField_set_InstallID(PyCThostFtdcRspQueryAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryAccountField_get_UserID(PyCThostFtdcRspQueryAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户标识
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcRspQueryAccountField_set_UserID(PyCThostFtdcRspQueryAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryAccountField_get_VerifyCertNoFlag(PyCThostFtdcRspQueryAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.VerifyCertNoFlag), 1);
}

///验证客户证件号码标志
// TThostFtdcYesNoIndicatorType char
static int PyCThostFtdcRspQueryAccountField_set_VerifyCertNoFlag(PyCThostFtdcRspQueryAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryAccountField_get_CurrencyID(PyCThostFtdcRspQueryAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcRspQueryAccountField_set_CurrencyID(PyCThostFtdcRspQueryAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryAccountField_get_Digest(PyCThostFtdcRspQueryAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Digest, (Py_ssize_t)sizeof(self->data.Digest));
    return PyBytes_FromString(self->data.Digest);
}

///摘要
// TThostFtdcDigestType char[36]
static int PyCThostFtdcRspQueryAccountField_set_Digest(PyCThostFtdcRspQueryAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryAccountField_get_BankAccType(PyCThostFtdcRspQueryAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BankAccType), 1);
}

///银行帐号类型
// TThostFtdcBankAccTypeType char
static int PyCThostFtdcRspQueryAccountField_set_BankAccType(PyCThostFtdcRspQueryAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryAccountField_get_DeviceID(PyCThostFtdcRspQueryAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.DeviceID, (Py_ssize_t)sizeof(self->data.DeviceID));
    return PyBytes_FromString(self->data.DeviceID);
}

///渠道标志
// TThostFtdcDeviceIDType char[3]
static int PyCThostFtdcRspQueryAccountField_set_DeviceID(PyCThostFtdcRspQueryAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryAccountField_get_BankSecuAccType(PyCThostFtdcRspQueryAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BankSecuAccType), 1);
}

///期货单位帐号类型
// TThostFtdcBankAccTypeType char
static int PyCThostFtdcRspQueryAccountField_set_BankSecuAccType(PyCThostFtdcRspQueryAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryAccountField_get_BrokerIDByBank(PyCThostFtdcRspQueryAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerIDByBank, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
    return PyBytes_FromString(self->data.BrokerIDByBank);
}

///期货公司银行编码
// TThostFtdcBankCodingForFutureType char[33]
static int PyCThostFtdcRspQueryAccountField_set_BrokerIDByBank(PyCThostFtdcRspQueryAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryAccountField_get_BankSecuAcc(PyCThostFtdcRspQueryAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankSecuAcc, (Py_ssize_t)sizeof(self->data.BankSecuAcc));
    return PyBytes_FromString(self->data.BankSecuAcc);
}

///期货单位帐号
// TThostFtdcBankAccountType char[41]
static int PyCThostFtdcRspQueryAccountField_set_BankSecuAcc(PyCThostFtdcRspQueryAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryAccountField_get_BankPwdFlag(PyCThostFtdcRspQueryAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BankPwdFlag), 1);
}

///银行密码标志
// TThostFtdcPwdFlagType char
static int PyCThostFtdcRspQueryAccountField_set_BankPwdFlag(PyCThostFtdcRspQueryAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryAccountField_get_SecuPwdFlag(PyCThostFtdcRspQueryAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.SecuPwdFlag), 1);
}

///期货资金密码核对标志
// TThostFtdcPwdFlagType char
static int PyCThostFtdcRspQueryAccountField_set_SecuPwdFlag(PyCThostFtdcRspQueryAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryAccountField_get_OperNo(PyCThostFtdcRspQueryAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OperNo, (Py_ssize_t)sizeof(self->data.OperNo));
    return PyBytes_FromString(self->data.OperNo);
}

///交易柜员
// TThostFtdcOperNoType char[17]
static int PyCThostFtdcRspQueryAccountField_set_OperNo(PyCThostFtdcRspQueryAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryAccountField_get_RequestID(PyCThostFtdcRspQueryAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcRspQueryAccountField_set_RequestID(PyCThostFtdcRspQueryAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryAccountField_get_TID(PyCThostFtdcRspQueryAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.TID);
#else
    return PyInt_FromLong(self->data.TID);
#endif
}

///交易ID
// TThostFtdcTIDType int
static int PyCThostFtdcRspQueryAccountField_set_TID(PyCThostFtdcRspQueryAccountField *self, PyObject* val, void *closure) {
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
        
///银行可用金额
// TThostFtdcTradeAmountType double
static PyObject *PyCThostFtdcRspQueryAccountField_get_BankUseAmount(PyCThostFtdcRspQueryAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.BankUseAmount);
}

///银行可用金额
// TThostFtdcTradeAmountType double
static int PyCThostFtdcRspQueryAccountField_set_BankUseAmount(PyCThostFtdcRspQueryAccountField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BankUseAmount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BankUseAmount = buf;
    return 0;
}
        
///银行可取金额
// TThostFtdcTradeAmountType double
static PyObject *PyCThostFtdcRspQueryAccountField_get_BankFetchAmount(PyCThostFtdcRspQueryAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.BankFetchAmount);
}

///银行可取金额
// TThostFtdcTradeAmountType double
static int PyCThostFtdcRspQueryAccountField_set_BankFetchAmount(PyCThostFtdcRspQueryAccountField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BankFetchAmount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BankFetchAmount = buf;
    return 0;
}
        
///长客户姓名
// TThostFtdcLongIndividualNameType char[161]
static PyObject *PyCThostFtdcRspQueryAccountField_get_LongCustomerName(PyCThostFtdcRspQueryAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.LongCustomerName, (Py_ssize_t)sizeof(self->data.LongCustomerName));
    return PyBytes_FromString(self->data.LongCustomerName);
}

///长客户姓名
// TThostFtdcLongIndividualNameType char[161]
static int PyCThostFtdcRspQueryAccountField_set_LongCustomerName(PyCThostFtdcRspQueryAccountField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcRspQueryAccountField_getset[] = {
    ///业务功能码 
    {(char *)"TradeCode", (getter)PyCThostFtdcRspQueryAccountField_get_TradeCode, (setter)PyCThostFtdcRspQueryAccountField_set_TradeCode, (char *)"TradeCode", NULL},
    ///银行代码 
    {(char *)"BankID", (getter)PyCThostFtdcRspQueryAccountField_get_BankID, (setter)PyCThostFtdcRspQueryAccountField_set_BankID, (char *)"BankID", NULL},
    ///银行分支机构代码 
    {(char *)"BankBranchID", (getter)PyCThostFtdcRspQueryAccountField_get_BankBranchID, (setter)PyCThostFtdcRspQueryAccountField_set_BankBranchID, (char *)"BankBranchID", NULL},
    ///期商代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcRspQueryAccountField_get_BrokerID, (setter)PyCThostFtdcRspQueryAccountField_set_BrokerID, (char *)"BrokerID", NULL},
    ///期商分支机构代码 
    {(char *)"BrokerBranchID", (getter)PyCThostFtdcRspQueryAccountField_get_BrokerBranchID, (setter)PyCThostFtdcRspQueryAccountField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
    ///交易日期 
    {(char *)"TradeDate", (getter)PyCThostFtdcRspQueryAccountField_get_TradeDate, (setter)PyCThostFtdcRspQueryAccountField_set_TradeDate, (char *)"TradeDate", NULL},
    ///交易时间 
    {(char *)"TradeTime", (getter)PyCThostFtdcRspQueryAccountField_get_TradeTime, (setter)PyCThostFtdcRspQueryAccountField_set_TradeTime, (char *)"TradeTime", NULL},
    ///银行流水号 
    {(char *)"BankSerial", (getter)PyCThostFtdcRspQueryAccountField_get_BankSerial, (setter)PyCThostFtdcRspQueryAccountField_set_BankSerial, (char *)"BankSerial", NULL},
    ///交易系统日期 
    {(char *)"TradingDay", (getter)PyCThostFtdcRspQueryAccountField_get_TradingDay, (setter)PyCThostFtdcRspQueryAccountField_set_TradingDay, (char *)"TradingDay", NULL},
    ///银期平台消息流水号 
    {(char *)"PlateSerial", (getter)PyCThostFtdcRspQueryAccountField_get_PlateSerial, (setter)PyCThostFtdcRspQueryAccountField_set_PlateSerial, (char *)"PlateSerial", NULL},
    ///最后分片标志 
    {(char *)"LastFragment", (getter)PyCThostFtdcRspQueryAccountField_get_LastFragment, (setter)PyCThostFtdcRspQueryAccountField_set_LastFragment, (char *)"LastFragment", NULL},
    ///会话号 
    {(char *)"SessionID", (getter)PyCThostFtdcRspQueryAccountField_get_SessionID, (setter)PyCThostFtdcRspQueryAccountField_set_SessionID, (char *)"SessionID", NULL},
    ///客户姓名 
    {(char *)"CustomerName", (getter)PyCThostFtdcRspQueryAccountField_get_CustomerName, (setter)PyCThostFtdcRspQueryAccountField_set_CustomerName, (char *)"CustomerName", NULL},
    ///证件类型 
    {(char *)"IdCardType", (getter)PyCThostFtdcRspQueryAccountField_get_IdCardType, (setter)PyCThostFtdcRspQueryAccountField_set_IdCardType, (char *)"IdCardType", NULL},
    ///证件号码 
    {(char *)"IdentifiedCardNo", (getter)PyCThostFtdcRspQueryAccountField_get_IdentifiedCardNo, (setter)PyCThostFtdcRspQueryAccountField_set_IdentifiedCardNo, (char *)"IdentifiedCardNo", NULL},
    ///客户类型 
    {(char *)"CustType", (getter)PyCThostFtdcRspQueryAccountField_get_CustType, (setter)PyCThostFtdcRspQueryAccountField_set_CustType, (char *)"CustType", NULL},
    ///银行帐号 
    {(char *)"BankAccount", (getter)PyCThostFtdcRspQueryAccountField_get_BankAccount, (setter)PyCThostFtdcRspQueryAccountField_set_BankAccount, (char *)"BankAccount", NULL},
    ///银行密码 
    {(char *)"BankPassWord", (getter)PyCThostFtdcRspQueryAccountField_get_BankPassWord, (setter)PyCThostFtdcRspQueryAccountField_set_BankPassWord, (char *)"BankPassWord", NULL},
    ///投资者帐号 
    {(char *)"AccountID", (getter)PyCThostFtdcRspQueryAccountField_get_AccountID, (setter)PyCThostFtdcRspQueryAccountField_set_AccountID, (char *)"AccountID", NULL},
    ///期货密码 
    {(char *)"Password", (getter)PyCThostFtdcRspQueryAccountField_get_Password, (setter)PyCThostFtdcRspQueryAccountField_set_Password, (char *)"Password", NULL},
    ///期货公司流水号 
    {(char *)"FutureSerial", (getter)PyCThostFtdcRspQueryAccountField_get_FutureSerial, (setter)PyCThostFtdcRspQueryAccountField_set_FutureSerial, (char *)"FutureSerial", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcRspQueryAccountField_get_InstallID, (setter)PyCThostFtdcRspQueryAccountField_set_InstallID, (char *)"InstallID", NULL},
    ///用户标识 
    {(char *)"UserID", (getter)PyCThostFtdcRspQueryAccountField_get_UserID, (setter)PyCThostFtdcRspQueryAccountField_set_UserID, (char *)"UserID", NULL},
    ///验证客户证件号码标志 
    {(char *)"VerifyCertNoFlag", (getter)PyCThostFtdcRspQueryAccountField_get_VerifyCertNoFlag, (setter)PyCThostFtdcRspQueryAccountField_set_VerifyCertNoFlag, (char *)"VerifyCertNoFlag", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcRspQueryAccountField_get_CurrencyID, (setter)PyCThostFtdcRspQueryAccountField_set_CurrencyID, (char *)"CurrencyID", NULL},
    ///摘要 
    {(char *)"Digest", (getter)PyCThostFtdcRspQueryAccountField_get_Digest, (setter)PyCThostFtdcRspQueryAccountField_set_Digest, (char *)"Digest", NULL},
    ///银行帐号类型 
    {(char *)"BankAccType", (getter)PyCThostFtdcRspQueryAccountField_get_BankAccType, (setter)PyCThostFtdcRspQueryAccountField_set_BankAccType, (char *)"BankAccType", NULL},
    ///渠道标志 
    {(char *)"DeviceID", (getter)PyCThostFtdcRspQueryAccountField_get_DeviceID, (setter)PyCThostFtdcRspQueryAccountField_set_DeviceID, (char *)"DeviceID", NULL},
    ///期货单位帐号类型 
    {(char *)"BankSecuAccType", (getter)PyCThostFtdcRspQueryAccountField_get_BankSecuAccType, (setter)PyCThostFtdcRspQueryAccountField_set_BankSecuAccType, (char *)"BankSecuAccType", NULL},
    ///期货公司银行编码 
    {(char *)"BrokerIDByBank", (getter)PyCThostFtdcRspQueryAccountField_get_BrokerIDByBank, (setter)PyCThostFtdcRspQueryAccountField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
    ///期货单位帐号 
    {(char *)"BankSecuAcc", (getter)PyCThostFtdcRspQueryAccountField_get_BankSecuAcc, (setter)PyCThostFtdcRspQueryAccountField_set_BankSecuAcc, (char *)"BankSecuAcc", NULL},
    ///银行密码标志 
    {(char *)"BankPwdFlag", (getter)PyCThostFtdcRspQueryAccountField_get_BankPwdFlag, (setter)PyCThostFtdcRspQueryAccountField_set_BankPwdFlag, (char *)"BankPwdFlag", NULL},
    ///期货资金密码核对标志 
    {(char *)"SecuPwdFlag", (getter)PyCThostFtdcRspQueryAccountField_get_SecuPwdFlag, (setter)PyCThostFtdcRspQueryAccountField_set_SecuPwdFlag, (char *)"SecuPwdFlag", NULL},
    ///交易柜员 
    {(char *)"OperNo", (getter)PyCThostFtdcRspQueryAccountField_get_OperNo, (setter)PyCThostFtdcRspQueryAccountField_set_OperNo, (char *)"OperNo", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcRspQueryAccountField_get_RequestID, (setter)PyCThostFtdcRspQueryAccountField_set_RequestID, (char *)"RequestID", NULL},
    ///交易ID 
    {(char *)"TID", (getter)PyCThostFtdcRspQueryAccountField_get_TID, (setter)PyCThostFtdcRspQueryAccountField_set_TID, (char *)"TID", NULL},
    ///银行可用金额 
    {(char *)"BankUseAmount", (getter)PyCThostFtdcRspQueryAccountField_get_BankUseAmount, (setter)PyCThostFtdcRspQueryAccountField_set_BankUseAmount, (char *)"BankUseAmount", NULL},
    ///银行可取金额 
    {(char *)"BankFetchAmount", (getter)PyCThostFtdcRspQueryAccountField_get_BankFetchAmount, (setter)PyCThostFtdcRspQueryAccountField_set_BankFetchAmount, (char *)"BankFetchAmount", NULL},
    ///长客户姓名 
    {(char *)"LongCustomerName", (getter)PyCThostFtdcRspQueryAccountField_get_LongCustomerName, (setter)PyCThostFtdcRspQueryAccountField_set_LongCustomerName, (char *)"LongCustomerName", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRspQueryAccountFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRspQueryAccountField",	/* tp_name */
	sizeof(PyCThostFtdcRspQueryAccountField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRspQueryAccountField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRspQueryAccountField_repr,   /* tp_repr */
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
	"CThostFtdcRspQueryAccountField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRspQueryAccountField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRspQueryAccountField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRspQueryAccountField_new,       /* tp_new */
};

int PyCThostFtdcRspQueryAccountFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRspQueryAccountField  */
	if (PyType_Ready(&PyCThostFtdcRspQueryAccountFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRspQueryAccountField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRspQueryAccountFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRspQueryAccountField", (PyObject *)&PyCThostFtdcRspQueryAccountFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRspQueryAccountField to module");
        Py_DECREF(&PyCThostFtdcRspQueryAccountFieldType);
		return -1;
    }

    return 0;
}
