
#include "PyCThostFtdcReqTransferField.h"

///转账请求

static PyObject *PyCThostFtdcReqTransferField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcReqTransferField *self = (PyCThostFtdcReqTransferField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcReqTransferField_init(PyCThostFtdcReqTransferField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "CustType", "BankAccount", "BankPassWord", "AccountID", "Password", "InstallID", "FutureSerial", "UserID", "VerifyCertNoFlag", "CurrencyID", "TradeAmount", "FutureFetchAmount", "FeePayFlag", "CustFee", "BrokerFee", "Message", "Digest", "BankAccType", "DeviceID", "BankSecuAccType", "BrokerIDByBank", "BankSecuAcc", "BankPwdFlag", "SecuPwdFlag", "OperNo", "RequestID", "TID", "TransferStatus", "LongCustomerName",  NULL};


    ///业务功能码
    // TThostFtdcTradeCodeType char[7]
    const char *ReqTransferField_TradeCode = NULL;
    Py_ssize_t ReqTransferField_TradeCode_len = 0;
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    const char *ReqTransferField_BankID = NULL;
    Py_ssize_t ReqTransferField_BankID_len = 0;
            
    ///银行分支机构代码
    // TThostFtdcBankBrchIDType char[5]
    const char *ReqTransferField_BankBranchID = NULL;
    Py_ssize_t ReqTransferField_BankBranchID_len = 0;
            
    ///期商代码
    // TThostFtdcBrokerIDType char[11]
    const char *ReqTransferField_BrokerID = NULL;
    Py_ssize_t ReqTransferField_BrokerID_len = 0;
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    const char *ReqTransferField_BrokerBranchID = NULL;
    Py_ssize_t ReqTransferField_BrokerBranchID_len = 0;
            
    ///交易日期
    // TThostFtdcTradeDateType char[9]
    const char *ReqTransferField_TradeDate = NULL;
    Py_ssize_t ReqTransferField_TradeDate_len = 0;
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    const char *ReqTransferField_TradeTime = NULL;
    Py_ssize_t ReqTransferField_TradeTime_len = 0;
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    const char *ReqTransferField_BankSerial = NULL;
    Py_ssize_t ReqTransferField_BankSerial_len = 0;
            
    ///交易系统日期
    // TThostFtdcTradeDateType char[9]
    const char *ReqTransferField_TradingDay = NULL;
    Py_ssize_t ReqTransferField_TradingDay_len = 0;
            
    ///银期平台消息流水号
    // TThostFtdcSerialType int
    int ReqTransferField_PlateSerial = 0;
        
    ///最后分片标志
    // TThostFtdcLastFragmentType char
    char ReqTransferField_LastFragment = 0;
            
    ///会话号
    // TThostFtdcSessionIDType int
    int ReqTransferField_SessionID = 0;
        
    ///客户姓名
    // TThostFtdcIndividualNameType char[51]
    const char *ReqTransferField_CustomerName = NULL;
    Py_ssize_t ReqTransferField_CustomerName_len = 0;
            
    ///证件类型
    // TThostFtdcIdCardTypeType char
    char ReqTransferField_IdCardType = 0;
            
    ///证件号码
    // TThostFtdcIdentifiedCardNoType char[51]
    const char *ReqTransferField_IdentifiedCardNo = NULL;
    Py_ssize_t ReqTransferField_IdentifiedCardNo_len = 0;
            
    ///客户类型
    // TThostFtdcCustTypeType char
    char ReqTransferField_CustType = 0;
            
    ///银行帐号
    // TThostFtdcBankAccountType char[41]
    const char *ReqTransferField_BankAccount = NULL;
    Py_ssize_t ReqTransferField_BankAccount_len = 0;
            
    ///银行密码
    // TThostFtdcPasswordType char[41]
    const char *ReqTransferField_BankPassWord = NULL;
    Py_ssize_t ReqTransferField_BankPassWord_len = 0;
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    const char *ReqTransferField_AccountID = NULL;
    Py_ssize_t ReqTransferField_AccountID_len = 0;
            
    ///期货密码
    // TThostFtdcPasswordType char[41]
    const char *ReqTransferField_Password = NULL;
    Py_ssize_t ReqTransferField_Password_len = 0;
            
    ///安装编号
    // TThostFtdcInstallIDType int
    int ReqTransferField_InstallID = 0;
        
    ///期货公司流水号
    // TThostFtdcFutureSerialType int
    int ReqTransferField_FutureSerial = 0;
        
    ///用户标识
    // TThostFtdcUserIDType char[16]
    const char *ReqTransferField_UserID = NULL;
    Py_ssize_t ReqTransferField_UserID_len = 0;
            
    ///验证客户证件号码标志
    // TThostFtdcYesNoIndicatorType char
    char ReqTransferField_VerifyCertNoFlag = 0;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *ReqTransferField_CurrencyID = NULL;
    Py_ssize_t ReqTransferField_CurrencyID_len = 0;
            
    ///转帐金额
    // TThostFtdcTradeAmountType double
    double ReqTransferField_TradeAmount = 0.0;
        
    ///期货可取金额
    // TThostFtdcTradeAmountType double
    double ReqTransferField_FutureFetchAmount = 0.0;
        
    ///费用支付标志
    // TThostFtdcFeePayFlagType char
    char ReqTransferField_FeePayFlag = 0;
            
    ///应收客户费用
    // TThostFtdcCustFeeType double
    double ReqTransferField_CustFee = 0.0;
        
    ///应收期货公司费用
    // TThostFtdcFutureFeeType double
    double ReqTransferField_BrokerFee = 0.0;
        
    ///发送方给接收方的消息
    // TThostFtdcAddInfoType char[129]
    const char *ReqTransferField_Message = NULL;
    Py_ssize_t ReqTransferField_Message_len = 0;
            
    ///摘要
    // TThostFtdcDigestType char[36]
    const char *ReqTransferField_Digest = NULL;
    Py_ssize_t ReqTransferField_Digest_len = 0;
            
    ///银行帐号类型
    // TThostFtdcBankAccTypeType char
    char ReqTransferField_BankAccType = 0;
            
    ///渠道标志
    // TThostFtdcDeviceIDType char[3]
    const char *ReqTransferField_DeviceID = NULL;
    Py_ssize_t ReqTransferField_DeviceID_len = 0;
            
    ///期货单位帐号类型
    // TThostFtdcBankAccTypeType char
    char ReqTransferField_BankSecuAccType = 0;
            
    ///期货公司银行编码
    // TThostFtdcBankCodingForFutureType char[33]
    const char *ReqTransferField_BrokerIDByBank = NULL;
    Py_ssize_t ReqTransferField_BrokerIDByBank_len = 0;
            
    ///期货单位帐号
    // TThostFtdcBankAccountType char[41]
    const char *ReqTransferField_BankSecuAcc = NULL;
    Py_ssize_t ReqTransferField_BankSecuAcc_len = 0;
            
    ///银行密码标志
    // TThostFtdcPwdFlagType char
    char ReqTransferField_BankPwdFlag = 0;
            
    ///期货资金密码核对标志
    // TThostFtdcPwdFlagType char
    char ReqTransferField_SecuPwdFlag = 0;
            
    ///交易柜员
    // TThostFtdcOperNoType char[17]
    const char *ReqTransferField_OperNo = NULL;
    Py_ssize_t ReqTransferField_OperNo_len = 0;
            
    ///请求编号
    // TThostFtdcRequestIDType int
    int ReqTransferField_RequestID = 0;
        
    ///交易ID
    // TThostFtdcTIDType int
    int ReqTransferField_TID = 0;
        
    ///转账交易状态
    // TThostFtdcTransferStatusType char
    char ReqTransferField_TransferStatus = 0;
            
    ///长客户姓名
    // TThostFtdcLongIndividualNameType char[161]
    const char *ReqTransferField_LongCustomerName = NULL;
    Py_ssize_t ReqTransferField_LongCustomerName_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciy#cy#cy#y#y#y#iiy#cy#ddcddy#y#cy#cy#y#ccy#iicy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#icis#cs#cs#s#s#s#iis#cs#ddcdds#s#cs#cs#s#ccs#iics#", (char **)kwlist
#endif

        , &ReqTransferField_TradeCode, &ReqTransferField_TradeCode_len 
        , &ReqTransferField_BankID, &ReqTransferField_BankID_len 
        , &ReqTransferField_BankBranchID, &ReqTransferField_BankBranchID_len 
        , &ReqTransferField_BrokerID, &ReqTransferField_BrokerID_len 
        , &ReqTransferField_BrokerBranchID, &ReqTransferField_BrokerBranchID_len 
        , &ReqTransferField_TradeDate, &ReqTransferField_TradeDate_len 
        , &ReqTransferField_TradeTime, &ReqTransferField_TradeTime_len 
        , &ReqTransferField_BankSerial, &ReqTransferField_BankSerial_len 
        , &ReqTransferField_TradingDay, &ReqTransferField_TradingDay_len 
        , &ReqTransferField_PlateSerial 
        , &ReqTransferField_LastFragment 
        , &ReqTransferField_SessionID 
        , &ReqTransferField_CustomerName, &ReqTransferField_CustomerName_len 
        , &ReqTransferField_IdCardType 
        , &ReqTransferField_IdentifiedCardNo, &ReqTransferField_IdentifiedCardNo_len 
        , &ReqTransferField_CustType 
        , &ReqTransferField_BankAccount, &ReqTransferField_BankAccount_len 
        , &ReqTransferField_BankPassWord, &ReqTransferField_BankPassWord_len 
        , &ReqTransferField_AccountID, &ReqTransferField_AccountID_len 
        , &ReqTransferField_Password, &ReqTransferField_Password_len 
        , &ReqTransferField_InstallID 
        , &ReqTransferField_FutureSerial 
        , &ReqTransferField_UserID, &ReqTransferField_UserID_len 
        , &ReqTransferField_VerifyCertNoFlag 
        , &ReqTransferField_CurrencyID, &ReqTransferField_CurrencyID_len 
        , &ReqTransferField_TradeAmount 
        , &ReqTransferField_FutureFetchAmount 
        , &ReqTransferField_FeePayFlag 
        , &ReqTransferField_CustFee 
        , &ReqTransferField_BrokerFee 
        , &ReqTransferField_Message, &ReqTransferField_Message_len 
        , &ReqTransferField_Digest, &ReqTransferField_Digest_len 
        , &ReqTransferField_BankAccType 
        , &ReqTransferField_DeviceID, &ReqTransferField_DeviceID_len 
        , &ReqTransferField_BankSecuAccType 
        , &ReqTransferField_BrokerIDByBank, &ReqTransferField_BrokerIDByBank_len 
        , &ReqTransferField_BankSecuAcc, &ReqTransferField_BankSecuAcc_len 
        , &ReqTransferField_BankPwdFlag 
        , &ReqTransferField_SecuPwdFlag 
        , &ReqTransferField_OperNo, &ReqTransferField_OperNo_len 
        , &ReqTransferField_RequestID 
        , &ReqTransferField_TID 
        , &ReqTransferField_TransferStatus 
        , &ReqTransferField_LongCustomerName, &ReqTransferField_LongCustomerName_len 


    )) {
        return -1;
    }


    ///业务功能码
    // TThostFtdcTradeCodeType char[7]
    if( ReqTransferField_TradeCode != NULL ) {
        if(ReqTransferField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", ReqTransferField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
            return -1;
        }
        // memset(self->data.TradeCode, 0, sizeof(self->data.TradeCode));
        // memcpy(self->data.TradeCode, ReqTransferField_TradeCode, ReqTransferField_TradeCode_len);        
        strncpy(self->data.TradeCode, ReqTransferField_TradeCode, sizeof(self->data.TradeCode) );
        ReqTransferField_TradeCode = NULL;
    }
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    if( ReqTransferField_BankID != NULL ) {
        if(ReqTransferField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", ReqTransferField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
            return -1;
        }
        // memset(self->data.BankID, 0, sizeof(self->data.BankID));
        // memcpy(self->data.BankID, ReqTransferField_BankID, ReqTransferField_BankID_len);        
        strncpy(self->data.BankID, ReqTransferField_BankID, sizeof(self->data.BankID) );
        ReqTransferField_BankID = NULL;
    }
            
    ///银行分支机构代码
    // TThostFtdcBankBrchIDType char[5]
    if( ReqTransferField_BankBranchID != NULL ) {
        if(ReqTransferField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", ReqTransferField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
            return -1;
        }
        // memset(self->data.BankBranchID, 0, sizeof(self->data.BankBranchID));
        // memcpy(self->data.BankBranchID, ReqTransferField_BankBranchID, ReqTransferField_BankBranchID_len);        
        strncpy(self->data.BankBranchID, ReqTransferField_BankBranchID, sizeof(self->data.BankBranchID) );
        ReqTransferField_BankBranchID = NULL;
    }
            
    ///期商代码
    // TThostFtdcBrokerIDType char[11]
    if( ReqTransferField_BrokerID != NULL ) {
        if(ReqTransferField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", ReqTransferField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, ReqTransferField_BrokerID, ReqTransferField_BrokerID_len);        
        strncpy(self->data.BrokerID, ReqTransferField_BrokerID, sizeof(self->data.BrokerID) );
        ReqTransferField_BrokerID = NULL;
    }
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    if( ReqTransferField_BrokerBranchID != NULL ) {
        if(ReqTransferField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", ReqTransferField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
            return -1;
        }
        // memset(self->data.BrokerBranchID, 0, sizeof(self->data.BrokerBranchID));
        // memcpy(self->data.BrokerBranchID, ReqTransferField_BrokerBranchID, ReqTransferField_BrokerBranchID_len);        
        strncpy(self->data.BrokerBranchID, ReqTransferField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
        ReqTransferField_BrokerBranchID = NULL;
    }
            
    ///交易日期
    // TThostFtdcTradeDateType char[9]
    if( ReqTransferField_TradeDate != NULL ) {
        if(ReqTransferField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", ReqTransferField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
            return -1;
        }
        // memset(self->data.TradeDate, 0, sizeof(self->data.TradeDate));
        // memcpy(self->data.TradeDate, ReqTransferField_TradeDate, ReqTransferField_TradeDate_len);        
        strncpy(self->data.TradeDate, ReqTransferField_TradeDate, sizeof(self->data.TradeDate) );
        ReqTransferField_TradeDate = NULL;
    }
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    if( ReqTransferField_TradeTime != NULL ) {
        if(ReqTransferField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", ReqTransferField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
            return -1;
        }
        // memset(self->data.TradeTime, 0, sizeof(self->data.TradeTime));
        // memcpy(self->data.TradeTime, ReqTransferField_TradeTime, ReqTransferField_TradeTime_len);        
        strncpy(self->data.TradeTime, ReqTransferField_TradeTime, sizeof(self->data.TradeTime) );
        ReqTransferField_TradeTime = NULL;
    }
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    if( ReqTransferField_BankSerial != NULL ) {
        if(ReqTransferField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", ReqTransferField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
            return -1;
        }
        // memset(self->data.BankSerial, 0, sizeof(self->data.BankSerial));
        // memcpy(self->data.BankSerial, ReqTransferField_BankSerial, ReqTransferField_BankSerial_len);        
        strncpy(self->data.BankSerial, ReqTransferField_BankSerial, sizeof(self->data.BankSerial) );
        ReqTransferField_BankSerial = NULL;
    }
            
    ///交易系统日期
    // TThostFtdcTradeDateType char[9]
    if( ReqTransferField_TradingDay != NULL ) {
        if(ReqTransferField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", ReqTransferField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, ReqTransferField_TradingDay, ReqTransferField_TradingDay_len);        
        strncpy(self->data.TradingDay, ReqTransferField_TradingDay, sizeof(self->data.TradingDay) );
        ReqTransferField_TradingDay = NULL;
    }
            
    ///银期平台消息流水号
    // TThostFtdcSerialType int
    self->data.PlateSerial = ReqTransferField_PlateSerial;
        
    ///最后分片标志
    // TThostFtdcLastFragmentType char
    self->data.LastFragment = ReqTransferField_LastFragment;
            
    ///会话号
    // TThostFtdcSessionIDType int
    self->data.SessionID = ReqTransferField_SessionID;
        
    ///客户姓名
    // TThostFtdcIndividualNameType char[51]
    if( ReqTransferField_CustomerName != NULL ) {
        if(ReqTransferField_CustomerName_len > (Py_ssize_t)sizeof(self->data.CustomerName)) {
            PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is %zd)", ReqTransferField_CustomerName_len, (Py_ssize_t)sizeof(self->data.CustomerName));
            return -1;
        }
        // memset(self->data.CustomerName, 0, sizeof(self->data.CustomerName));
        // memcpy(self->data.CustomerName, ReqTransferField_CustomerName, ReqTransferField_CustomerName_len);        
        strncpy(self->data.CustomerName, ReqTransferField_CustomerName, sizeof(self->data.CustomerName) );
        ReqTransferField_CustomerName = NULL;
    }
            
    ///证件类型
    // TThostFtdcIdCardTypeType char
    self->data.IdCardType = ReqTransferField_IdCardType;
            
    ///证件号码
    // TThostFtdcIdentifiedCardNoType char[51]
    if( ReqTransferField_IdentifiedCardNo != NULL ) {
        if(ReqTransferField_IdentifiedCardNo_len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
            PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is %zd)", ReqTransferField_IdentifiedCardNo_len, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
            return -1;
        }
        // memset(self->data.IdentifiedCardNo, 0, sizeof(self->data.IdentifiedCardNo));
        // memcpy(self->data.IdentifiedCardNo, ReqTransferField_IdentifiedCardNo, ReqTransferField_IdentifiedCardNo_len);        
        strncpy(self->data.IdentifiedCardNo, ReqTransferField_IdentifiedCardNo, sizeof(self->data.IdentifiedCardNo) );
        ReqTransferField_IdentifiedCardNo = NULL;
    }
            
    ///客户类型
    // TThostFtdcCustTypeType char
    self->data.CustType = ReqTransferField_CustType;
            
    ///银行帐号
    // TThostFtdcBankAccountType char[41]
    if( ReqTransferField_BankAccount != NULL ) {
        if(ReqTransferField_BankAccount_len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
            PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is %zd)", ReqTransferField_BankAccount_len, (Py_ssize_t)sizeof(self->data.BankAccount));
            return -1;
        }
        // memset(self->data.BankAccount, 0, sizeof(self->data.BankAccount));
        // memcpy(self->data.BankAccount, ReqTransferField_BankAccount, ReqTransferField_BankAccount_len);        
        strncpy(self->data.BankAccount, ReqTransferField_BankAccount, sizeof(self->data.BankAccount) );
        ReqTransferField_BankAccount = NULL;
    }
            
    ///银行密码
    // TThostFtdcPasswordType char[41]
    if( ReqTransferField_BankPassWord != NULL ) {
        if(ReqTransferField_BankPassWord_len > (Py_ssize_t)sizeof(self->data.BankPassWord)) {
            PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is %zd)", ReqTransferField_BankPassWord_len, (Py_ssize_t)sizeof(self->data.BankPassWord));
            return -1;
        }
        // memset(self->data.BankPassWord, 0, sizeof(self->data.BankPassWord));
        // memcpy(self->data.BankPassWord, ReqTransferField_BankPassWord, ReqTransferField_BankPassWord_len);        
        strncpy(self->data.BankPassWord, ReqTransferField_BankPassWord, sizeof(self->data.BankPassWord) );
        ReqTransferField_BankPassWord = NULL;
    }
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    if( ReqTransferField_AccountID != NULL ) {
        if(ReqTransferField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", ReqTransferField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
            return -1;
        }
        // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
        // memcpy(self->data.AccountID, ReqTransferField_AccountID, ReqTransferField_AccountID_len);        
        strncpy(self->data.AccountID, ReqTransferField_AccountID, sizeof(self->data.AccountID) );
        ReqTransferField_AccountID = NULL;
    }
            
    ///期货密码
    // TThostFtdcPasswordType char[41]
    if( ReqTransferField_Password != NULL ) {
        if(ReqTransferField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", ReqTransferField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
            return -1;
        }
        // memset(self->data.Password, 0, sizeof(self->data.Password));
        // memcpy(self->data.Password, ReqTransferField_Password, ReqTransferField_Password_len);        
        strncpy(self->data.Password, ReqTransferField_Password, sizeof(self->data.Password) );
        ReqTransferField_Password = NULL;
    }
            
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = ReqTransferField_InstallID;
        
    ///期货公司流水号
    // TThostFtdcFutureSerialType int
    self->data.FutureSerial = ReqTransferField_FutureSerial;
        
    ///用户标识
    // TThostFtdcUserIDType char[16]
    if( ReqTransferField_UserID != NULL ) {
        if(ReqTransferField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", ReqTransferField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, ReqTransferField_UserID, ReqTransferField_UserID_len);        
        strncpy(self->data.UserID, ReqTransferField_UserID, sizeof(self->data.UserID) );
        ReqTransferField_UserID = NULL;
    }
            
    ///验证客户证件号码标志
    // TThostFtdcYesNoIndicatorType char
    self->data.VerifyCertNoFlag = ReqTransferField_VerifyCertNoFlag;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( ReqTransferField_CurrencyID != NULL ) {
        if(ReqTransferField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", ReqTransferField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, ReqTransferField_CurrencyID, ReqTransferField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, ReqTransferField_CurrencyID, sizeof(self->data.CurrencyID) );
        ReqTransferField_CurrencyID = NULL;
    }
            
    ///转帐金额
    // TThostFtdcTradeAmountType double
    self->data.TradeAmount = ReqTransferField_TradeAmount;
        
    ///期货可取金额
    // TThostFtdcTradeAmountType double
    self->data.FutureFetchAmount = ReqTransferField_FutureFetchAmount;
        
    ///费用支付标志
    // TThostFtdcFeePayFlagType char
    self->data.FeePayFlag = ReqTransferField_FeePayFlag;
            
    ///应收客户费用
    // TThostFtdcCustFeeType double
    self->data.CustFee = ReqTransferField_CustFee;
        
    ///应收期货公司费用
    // TThostFtdcFutureFeeType double
    self->data.BrokerFee = ReqTransferField_BrokerFee;
        
    ///发送方给接收方的消息
    // TThostFtdcAddInfoType char[129]
    if( ReqTransferField_Message != NULL ) {
        if(ReqTransferField_Message_len > (Py_ssize_t)sizeof(self->data.Message)) {
            PyErr_Format(PyExc_ValueError, "Message too long: length=%zd (max allowed is %zd)", ReqTransferField_Message_len, (Py_ssize_t)sizeof(self->data.Message));
            return -1;
        }
        // memset(self->data.Message, 0, sizeof(self->data.Message));
        // memcpy(self->data.Message, ReqTransferField_Message, ReqTransferField_Message_len);        
        strncpy(self->data.Message, ReqTransferField_Message, sizeof(self->data.Message) );
        ReqTransferField_Message = NULL;
    }
            
    ///摘要
    // TThostFtdcDigestType char[36]
    if( ReqTransferField_Digest != NULL ) {
        if(ReqTransferField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
            PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", ReqTransferField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
            return -1;
        }
        // memset(self->data.Digest, 0, sizeof(self->data.Digest));
        // memcpy(self->data.Digest, ReqTransferField_Digest, ReqTransferField_Digest_len);        
        strncpy(self->data.Digest, ReqTransferField_Digest, sizeof(self->data.Digest) );
        ReqTransferField_Digest = NULL;
    }
            
    ///银行帐号类型
    // TThostFtdcBankAccTypeType char
    self->data.BankAccType = ReqTransferField_BankAccType;
            
    ///渠道标志
    // TThostFtdcDeviceIDType char[3]
    if( ReqTransferField_DeviceID != NULL ) {
        if(ReqTransferField_DeviceID_len > (Py_ssize_t)sizeof(self->data.DeviceID)) {
            PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is %zd)", ReqTransferField_DeviceID_len, (Py_ssize_t)sizeof(self->data.DeviceID));
            return -1;
        }
        // memset(self->data.DeviceID, 0, sizeof(self->data.DeviceID));
        // memcpy(self->data.DeviceID, ReqTransferField_DeviceID, ReqTransferField_DeviceID_len);        
        strncpy(self->data.DeviceID, ReqTransferField_DeviceID, sizeof(self->data.DeviceID) );
        ReqTransferField_DeviceID = NULL;
    }
            
    ///期货单位帐号类型
    // TThostFtdcBankAccTypeType char
    self->data.BankSecuAccType = ReqTransferField_BankSecuAccType;
            
    ///期货公司银行编码
    // TThostFtdcBankCodingForFutureType char[33]
    if( ReqTransferField_BrokerIDByBank != NULL ) {
        if(ReqTransferField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
            PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", ReqTransferField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
            return -1;
        }
        // memset(self->data.BrokerIDByBank, 0, sizeof(self->data.BrokerIDByBank));
        // memcpy(self->data.BrokerIDByBank, ReqTransferField_BrokerIDByBank, ReqTransferField_BrokerIDByBank_len);        
        strncpy(self->data.BrokerIDByBank, ReqTransferField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
        ReqTransferField_BrokerIDByBank = NULL;
    }
            
    ///期货单位帐号
    // TThostFtdcBankAccountType char[41]
    if( ReqTransferField_BankSecuAcc != NULL ) {
        if(ReqTransferField_BankSecuAcc_len > (Py_ssize_t)sizeof(self->data.BankSecuAcc)) {
            PyErr_Format(PyExc_ValueError, "BankSecuAcc too long: length=%zd (max allowed is %zd)", ReqTransferField_BankSecuAcc_len, (Py_ssize_t)sizeof(self->data.BankSecuAcc));
            return -1;
        }
        // memset(self->data.BankSecuAcc, 0, sizeof(self->data.BankSecuAcc));
        // memcpy(self->data.BankSecuAcc, ReqTransferField_BankSecuAcc, ReqTransferField_BankSecuAcc_len);        
        strncpy(self->data.BankSecuAcc, ReqTransferField_BankSecuAcc, sizeof(self->data.BankSecuAcc) );
        ReqTransferField_BankSecuAcc = NULL;
    }
            
    ///银行密码标志
    // TThostFtdcPwdFlagType char
    self->data.BankPwdFlag = ReqTransferField_BankPwdFlag;
            
    ///期货资金密码核对标志
    // TThostFtdcPwdFlagType char
    self->data.SecuPwdFlag = ReqTransferField_SecuPwdFlag;
            
    ///交易柜员
    // TThostFtdcOperNoType char[17]
    if( ReqTransferField_OperNo != NULL ) {
        if(ReqTransferField_OperNo_len > (Py_ssize_t)sizeof(self->data.OperNo)) {
            PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is %zd)", ReqTransferField_OperNo_len, (Py_ssize_t)sizeof(self->data.OperNo));
            return -1;
        }
        // memset(self->data.OperNo, 0, sizeof(self->data.OperNo));
        // memcpy(self->data.OperNo, ReqTransferField_OperNo, ReqTransferField_OperNo_len);        
        strncpy(self->data.OperNo, ReqTransferField_OperNo, sizeof(self->data.OperNo) );
        ReqTransferField_OperNo = NULL;
    }
            
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = ReqTransferField_RequestID;
        
    ///交易ID
    // TThostFtdcTIDType int
    self->data.TID = ReqTransferField_TID;
        
    ///转账交易状态
    // TThostFtdcTransferStatusType char
    self->data.TransferStatus = ReqTransferField_TransferStatus;
            
    ///长客户姓名
    // TThostFtdcLongIndividualNameType char[161]
    if( ReqTransferField_LongCustomerName != NULL ) {
        if(ReqTransferField_LongCustomerName_len > (Py_ssize_t)sizeof(self->data.LongCustomerName)) {
            PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is %zd)", ReqTransferField_LongCustomerName_len, (Py_ssize_t)sizeof(self->data.LongCustomerName));
            return -1;
        }
        // memset(self->data.LongCustomerName, 0, sizeof(self->data.LongCustomerName));
        // memcpy(self->data.LongCustomerName, ReqTransferField_LongCustomerName, ReqTransferField_LongCustomerName_len);        
        strncpy(self->data.LongCustomerName, ReqTransferField_LongCustomerName, sizeof(self->data.LongCustomerName) );
        ReqTransferField_LongCustomerName = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcReqTransferField_dealloc(PyCThostFtdcReqTransferField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcReqTransferField_repr(PyCThostFtdcReqTransferField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:c,s:y,s:d,s:d,s:c,s:d,s:d,s:y,s:y,s:c,s:y,s:c,s:y,s:y,s:c,s:c,s:y,s:i,s:i,s:c,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:c,s:s,s:c,s:s,s:s,s:s,s:s,s:i,s:i,s:s,s:c,s:s,s:d,s:d,s:c,s:d,s:d,s:s,s:s,s:c,s:s,s:c,s:s,s:s,s:c,s:c,s:s,s:i,s:i,s:c,s:s}"
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
        ,"InstallID", self->data.InstallID 
        ,"FutureSerial", self->data.FutureSerial 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"VerifyCertNoFlag", self->data.VerifyCertNoFlag 
        ,"CurrencyID", self->data.CurrencyID//, (Py_ssize_t)sizeof(self->data.CurrencyID) 
        ,"TradeAmount", self->data.TradeAmount 
        ,"FutureFetchAmount", self->data.FutureFetchAmount 
        ,"FeePayFlag", self->data.FeePayFlag 
        ,"CustFee", self->data.CustFee 
        ,"BrokerFee", self->data.BrokerFee 
        ,"Message", self->data.Message//, (Py_ssize_t)sizeof(self->data.Message) 
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
        ,"TransferStatus", self->data.TransferStatus 
        ,"LongCustomerName", self->data.LongCustomerName//, (Py_ssize_t)sizeof(self->data.LongCustomerName) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqTransferField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///业务功能码
// TThostFtdcTradeCodeType char[7]
static PyObject *PyCThostFtdcReqTransferField_get_TradeCode(PyCThostFtdcReqTransferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeCode, (Py_ssize_t)sizeof(self->data.TradeCode));
    return PyBytes_FromString(self->data.TradeCode);
}

///业务功能码
// TThostFtdcTradeCodeType char[7]
static int PyCThostFtdcReqTransferField_set_TradeCode(PyCThostFtdcReqTransferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqTransferField_get_BankID(PyCThostFtdcReqTransferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankID, (Py_ssize_t)sizeof(self->data.BankID));
    return PyBytes_FromString(self->data.BankID);
}

///银行代码
// TThostFtdcBankIDType char[4]
static int PyCThostFtdcReqTransferField_set_BankID(PyCThostFtdcReqTransferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqTransferField_get_BankBranchID(PyCThostFtdcReqTransferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankBranchID, (Py_ssize_t)sizeof(self->data.BankBranchID));
    return PyBytes_FromString(self->data.BankBranchID);
}

///银行分支机构代码
// TThostFtdcBankBrchIDType char[5]
static int PyCThostFtdcReqTransferField_set_BankBranchID(PyCThostFtdcReqTransferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqTransferField_get_BrokerID(PyCThostFtdcReqTransferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///期商代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcReqTransferField_set_BrokerID(PyCThostFtdcReqTransferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqTransferField_get_BrokerBranchID(PyCThostFtdcReqTransferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerBranchID, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
    return PyBytes_FromString(self->data.BrokerBranchID);
}

///期商分支机构代码
// TThostFtdcFutureBranchIDType char[31]
static int PyCThostFtdcReqTransferField_set_BrokerBranchID(PyCThostFtdcReqTransferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqTransferField_get_TradeDate(PyCThostFtdcReqTransferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeDate, (Py_ssize_t)sizeof(self->data.TradeDate));
    return PyBytes_FromString(self->data.TradeDate);
}

///交易日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcReqTransferField_set_TradeDate(PyCThostFtdcReqTransferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqTransferField_get_TradeTime(PyCThostFtdcReqTransferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeTime, (Py_ssize_t)sizeof(self->data.TradeTime));
    return PyBytes_FromString(self->data.TradeTime);
}

///交易时间
// TThostFtdcTradeTimeType char[9]
static int PyCThostFtdcReqTransferField_set_TradeTime(PyCThostFtdcReqTransferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqTransferField_get_BankSerial(PyCThostFtdcReqTransferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankSerial, (Py_ssize_t)sizeof(self->data.BankSerial));
    return PyBytes_FromString(self->data.BankSerial);
}

///银行流水号
// TThostFtdcBankSerialType char[13]
static int PyCThostFtdcReqTransferField_set_BankSerial(PyCThostFtdcReqTransferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqTransferField_get_TradingDay(PyCThostFtdcReqTransferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易系统日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcReqTransferField_set_TradingDay(PyCThostFtdcReqTransferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqTransferField_get_PlateSerial(PyCThostFtdcReqTransferField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.PlateSerial);
#else
    return PyInt_FromLong(self->data.PlateSerial);
#endif
}

///银期平台消息流水号
// TThostFtdcSerialType int
static int PyCThostFtdcReqTransferField_set_PlateSerial(PyCThostFtdcReqTransferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqTransferField_get_LastFragment(PyCThostFtdcReqTransferField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

///最后分片标志
// TThostFtdcLastFragmentType char
static int PyCThostFtdcReqTransferField_set_LastFragment(PyCThostFtdcReqTransferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqTransferField_get_SessionID(PyCThostFtdcReqTransferField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话号
// TThostFtdcSessionIDType int
static int PyCThostFtdcReqTransferField_set_SessionID(PyCThostFtdcReqTransferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqTransferField_get_CustomerName(PyCThostFtdcReqTransferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CustomerName, (Py_ssize_t)sizeof(self->data.CustomerName));
    return PyBytes_FromString(self->data.CustomerName);
}

///客户姓名
// TThostFtdcIndividualNameType char[51]
static int PyCThostFtdcReqTransferField_set_CustomerName(PyCThostFtdcReqTransferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqTransferField_get_IdCardType(PyCThostFtdcReqTransferField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.IdCardType), 1);
}

///证件类型
// TThostFtdcIdCardTypeType char
static int PyCThostFtdcReqTransferField_set_IdCardType(PyCThostFtdcReqTransferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqTransferField_get_IdentifiedCardNo(PyCThostFtdcReqTransferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IdentifiedCardNo, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
    return PyBytes_FromString(self->data.IdentifiedCardNo);
}

///证件号码
// TThostFtdcIdentifiedCardNoType char[51]
static int PyCThostFtdcReqTransferField_set_IdentifiedCardNo(PyCThostFtdcReqTransferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqTransferField_get_CustType(PyCThostFtdcReqTransferField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.CustType), 1);
}

///客户类型
// TThostFtdcCustTypeType char
static int PyCThostFtdcReqTransferField_set_CustType(PyCThostFtdcReqTransferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqTransferField_get_BankAccount(PyCThostFtdcReqTransferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankAccount, (Py_ssize_t)sizeof(self->data.BankAccount));
    return PyBytes_FromString(self->data.BankAccount);
}

///银行帐号
// TThostFtdcBankAccountType char[41]
static int PyCThostFtdcReqTransferField_set_BankAccount(PyCThostFtdcReqTransferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqTransferField_get_BankPassWord(PyCThostFtdcReqTransferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankPassWord, (Py_ssize_t)sizeof(self->data.BankPassWord));
    return PyBytes_FromString(self->data.BankPassWord);
}

///银行密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcReqTransferField_set_BankPassWord(PyCThostFtdcReqTransferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqTransferField_get_AccountID(PyCThostFtdcReqTransferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AccountID, (Py_ssize_t)sizeof(self->data.AccountID));
    return PyBytes_FromString(self->data.AccountID);
}

///投资者帐号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcReqTransferField_set_AccountID(PyCThostFtdcReqTransferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqTransferField_get_Password(PyCThostFtdcReqTransferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Password, (Py_ssize_t)sizeof(self->data.Password));
    return PyBytes_FromString(self->data.Password);
}

///期货密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcReqTransferField_set_Password(PyCThostFtdcReqTransferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqTransferField_get_InstallID(PyCThostFtdcReqTransferField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcReqTransferField_set_InstallID(PyCThostFtdcReqTransferField *self, PyObject* val, void *closure) {
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
        
///期货公司流水号
// TThostFtdcFutureSerialType int
static PyObject *PyCThostFtdcReqTransferField_get_FutureSerial(PyCThostFtdcReqTransferField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FutureSerial);
#else
    return PyInt_FromLong(self->data.FutureSerial);
#endif
}

///期货公司流水号
// TThostFtdcFutureSerialType int
static int PyCThostFtdcReqTransferField_set_FutureSerial(PyCThostFtdcReqTransferField *self, PyObject* val, void *closure) {
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
        
///用户标识
// TThostFtdcUserIDType char[16]
static PyObject *PyCThostFtdcReqTransferField_get_UserID(PyCThostFtdcReqTransferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户标识
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcReqTransferField_set_UserID(PyCThostFtdcReqTransferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqTransferField_get_VerifyCertNoFlag(PyCThostFtdcReqTransferField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.VerifyCertNoFlag), 1);
}

///验证客户证件号码标志
// TThostFtdcYesNoIndicatorType char
static int PyCThostFtdcReqTransferField_set_VerifyCertNoFlag(PyCThostFtdcReqTransferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqTransferField_get_CurrencyID(PyCThostFtdcReqTransferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcReqTransferField_set_CurrencyID(PyCThostFtdcReqTransferField *self, PyObject* val, void *closure) {
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
            
///转帐金额
// TThostFtdcTradeAmountType double
static PyObject *PyCThostFtdcReqTransferField_get_TradeAmount(PyCThostFtdcReqTransferField *self, void *closure) {
    return PyFloat_FromDouble(self->data.TradeAmount);
}

///转帐金额
// TThostFtdcTradeAmountType double
static int PyCThostFtdcReqTransferField_set_TradeAmount(PyCThostFtdcReqTransferField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradeAmount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.TradeAmount = buf;
    return 0;
}
        
///期货可取金额
// TThostFtdcTradeAmountType double
static PyObject *PyCThostFtdcReqTransferField_get_FutureFetchAmount(PyCThostFtdcReqTransferField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FutureFetchAmount);
}

///期货可取金额
// TThostFtdcTradeAmountType double
static int PyCThostFtdcReqTransferField_set_FutureFetchAmount(PyCThostFtdcReqTransferField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FutureFetchAmount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.FutureFetchAmount = buf;
    return 0;
}
        
///费用支付标志
// TThostFtdcFeePayFlagType char
static PyObject *PyCThostFtdcReqTransferField_get_FeePayFlag(PyCThostFtdcReqTransferField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.FeePayFlag), 1);
}

///费用支付标志
// TThostFtdcFeePayFlagType char
static int PyCThostFtdcReqTransferField_set_FeePayFlag(PyCThostFtdcReqTransferField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FeePayFlag Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.FeePayFlag)) {
        PyErr_SetString(PyExc_ValueError, "FeePayFlag must be equal 1 bytes");
        return -1;
    }
    self->data.FeePayFlag = *buf;
    return 0;
}
            
///应收客户费用
// TThostFtdcCustFeeType double
static PyObject *PyCThostFtdcReqTransferField_get_CustFee(PyCThostFtdcReqTransferField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CustFee);
}

///应收客户费用
// TThostFtdcCustFeeType double
static int PyCThostFtdcReqTransferField_set_CustFee(PyCThostFtdcReqTransferField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CustFee Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CustFee = buf;
    return 0;
}
        
///应收期货公司费用
// TThostFtdcFutureFeeType double
static PyObject *PyCThostFtdcReqTransferField_get_BrokerFee(PyCThostFtdcReqTransferField *self, void *closure) {
    return PyFloat_FromDouble(self->data.BrokerFee);
}

///应收期货公司费用
// TThostFtdcFutureFeeType double
static int PyCThostFtdcReqTransferField_set_BrokerFee(PyCThostFtdcReqTransferField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BrokerFee Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BrokerFee = buf;
    return 0;
}
        
///发送方给接收方的消息
// TThostFtdcAddInfoType char[129]
static PyObject *PyCThostFtdcReqTransferField_get_Message(PyCThostFtdcReqTransferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Message, (Py_ssize_t)sizeof(self->data.Message));
    return PyBytes_FromString(self->data.Message);
}

///发送方给接收方的消息
// TThostFtdcAddInfoType char[129]
static int PyCThostFtdcReqTransferField_set_Message(PyCThostFtdcReqTransferField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Message Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Message)) {
        PyErr_SetString(PyExc_ValueError, "Message must be less than 129 bytes");
        return -1;
    }
    // memset(self->data.Message, 0, sizeof(self->data.Message));
    // memcpy(self->data.Message, buf, len);
    strncpy(self->data.Message, buf, sizeof(self->data.Message));
    return 0;
}
            
///摘要
// TThostFtdcDigestType char[36]
static PyObject *PyCThostFtdcReqTransferField_get_Digest(PyCThostFtdcReqTransferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Digest, (Py_ssize_t)sizeof(self->data.Digest));
    return PyBytes_FromString(self->data.Digest);
}

///摘要
// TThostFtdcDigestType char[36]
static int PyCThostFtdcReqTransferField_set_Digest(PyCThostFtdcReqTransferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqTransferField_get_BankAccType(PyCThostFtdcReqTransferField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BankAccType), 1);
}

///银行帐号类型
// TThostFtdcBankAccTypeType char
static int PyCThostFtdcReqTransferField_set_BankAccType(PyCThostFtdcReqTransferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqTransferField_get_DeviceID(PyCThostFtdcReqTransferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.DeviceID, (Py_ssize_t)sizeof(self->data.DeviceID));
    return PyBytes_FromString(self->data.DeviceID);
}

///渠道标志
// TThostFtdcDeviceIDType char[3]
static int PyCThostFtdcReqTransferField_set_DeviceID(PyCThostFtdcReqTransferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqTransferField_get_BankSecuAccType(PyCThostFtdcReqTransferField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BankSecuAccType), 1);
}

///期货单位帐号类型
// TThostFtdcBankAccTypeType char
static int PyCThostFtdcReqTransferField_set_BankSecuAccType(PyCThostFtdcReqTransferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqTransferField_get_BrokerIDByBank(PyCThostFtdcReqTransferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerIDByBank, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
    return PyBytes_FromString(self->data.BrokerIDByBank);
}

///期货公司银行编码
// TThostFtdcBankCodingForFutureType char[33]
static int PyCThostFtdcReqTransferField_set_BrokerIDByBank(PyCThostFtdcReqTransferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqTransferField_get_BankSecuAcc(PyCThostFtdcReqTransferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankSecuAcc, (Py_ssize_t)sizeof(self->data.BankSecuAcc));
    return PyBytes_FromString(self->data.BankSecuAcc);
}

///期货单位帐号
// TThostFtdcBankAccountType char[41]
static int PyCThostFtdcReqTransferField_set_BankSecuAcc(PyCThostFtdcReqTransferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqTransferField_get_BankPwdFlag(PyCThostFtdcReqTransferField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BankPwdFlag), 1);
}

///银行密码标志
// TThostFtdcPwdFlagType char
static int PyCThostFtdcReqTransferField_set_BankPwdFlag(PyCThostFtdcReqTransferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqTransferField_get_SecuPwdFlag(PyCThostFtdcReqTransferField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.SecuPwdFlag), 1);
}

///期货资金密码核对标志
// TThostFtdcPwdFlagType char
static int PyCThostFtdcReqTransferField_set_SecuPwdFlag(PyCThostFtdcReqTransferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqTransferField_get_OperNo(PyCThostFtdcReqTransferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OperNo, (Py_ssize_t)sizeof(self->data.OperNo));
    return PyBytes_FromString(self->data.OperNo);
}

///交易柜员
// TThostFtdcOperNoType char[17]
static int PyCThostFtdcReqTransferField_set_OperNo(PyCThostFtdcReqTransferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqTransferField_get_RequestID(PyCThostFtdcReqTransferField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcReqTransferField_set_RequestID(PyCThostFtdcReqTransferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqTransferField_get_TID(PyCThostFtdcReqTransferField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.TID);
#else
    return PyInt_FromLong(self->data.TID);
#endif
}

///交易ID
// TThostFtdcTIDType int
static int PyCThostFtdcReqTransferField_set_TID(PyCThostFtdcReqTransferField *self, PyObject* val, void *closure) {
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
        
///转账交易状态
// TThostFtdcTransferStatusType char
static PyObject *PyCThostFtdcReqTransferField_get_TransferStatus(PyCThostFtdcReqTransferField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.TransferStatus), 1);
}

///转账交易状态
// TThostFtdcTransferStatusType char
static int PyCThostFtdcReqTransferField_set_TransferStatus(PyCThostFtdcReqTransferField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TransferStatus Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TransferStatus)) {
        PyErr_SetString(PyExc_ValueError, "TransferStatus must be equal 1 bytes");
        return -1;
    }
    self->data.TransferStatus = *buf;
    return 0;
}
            
///长客户姓名
// TThostFtdcLongIndividualNameType char[161]
static PyObject *PyCThostFtdcReqTransferField_get_LongCustomerName(PyCThostFtdcReqTransferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.LongCustomerName, (Py_ssize_t)sizeof(self->data.LongCustomerName));
    return PyBytes_FromString(self->data.LongCustomerName);
}

///长客户姓名
// TThostFtdcLongIndividualNameType char[161]
static int PyCThostFtdcReqTransferField_set_LongCustomerName(PyCThostFtdcReqTransferField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcReqTransferField_getset[] = {
    ///业务功能码 
    {(char *)"TradeCode", (getter)PyCThostFtdcReqTransferField_get_TradeCode, (setter)PyCThostFtdcReqTransferField_set_TradeCode, (char *)"TradeCode", NULL},
    ///银行代码 
    {(char *)"BankID", (getter)PyCThostFtdcReqTransferField_get_BankID, (setter)PyCThostFtdcReqTransferField_set_BankID, (char *)"BankID", NULL},
    ///银行分支机构代码 
    {(char *)"BankBranchID", (getter)PyCThostFtdcReqTransferField_get_BankBranchID, (setter)PyCThostFtdcReqTransferField_set_BankBranchID, (char *)"BankBranchID", NULL},
    ///期商代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcReqTransferField_get_BrokerID, (setter)PyCThostFtdcReqTransferField_set_BrokerID, (char *)"BrokerID", NULL},
    ///期商分支机构代码 
    {(char *)"BrokerBranchID", (getter)PyCThostFtdcReqTransferField_get_BrokerBranchID, (setter)PyCThostFtdcReqTransferField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
    ///交易日期 
    {(char *)"TradeDate", (getter)PyCThostFtdcReqTransferField_get_TradeDate, (setter)PyCThostFtdcReqTransferField_set_TradeDate, (char *)"TradeDate", NULL},
    ///交易时间 
    {(char *)"TradeTime", (getter)PyCThostFtdcReqTransferField_get_TradeTime, (setter)PyCThostFtdcReqTransferField_set_TradeTime, (char *)"TradeTime", NULL},
    ///银行流水号 
    {(char *)"BankSerial", (getter)PyCThostFtdcReqTransferField_get_BankSerial, (setter)PyCThostFtdcReqTransferField_set_BankSerial, (char *)"BankSerial", NULL},
    ///交易系统日期 
    {(char *)"TradingDay", (getter)PyCThostFtdcReqTransferField_get_TradingDay, (setter)PyCThostFtdcReqTransferField_set_TradingDay, (char *)"TradingDay", NULL},
    ///银期平台消息流水号 
    {(char *)"PlateSerial", (getter)PyCThostFtdcReqTransferField_get_PlateSerial, (setter)PyCThostFtdcReqTransferField_set_PlateSerial, (char *)"PlateSerial", NULL},
    ///最后分片标志 
    {(char *)"LastFragment", (getter)PyCThostFtdcReqTransferField_get_LastFragment, (setter)PyCThostFtdcReqTransferField_set_LastFragment, (char *)"LastFragment", NULL},
    ///会话号 
    {(char *)"SessionID", (getter)PyCThostFtdcReqTransferField_get_SessionID, (setter)PyCThostFtdcReqTransferField_set_SessionID, (char *)"SessionID", NULL},
    ///客户姓名 
    {(char *)"CustomerName", (getter)PyCThostFtdcReqTransferField_get_CustomerName, (setter)PyCThostFtdcReqTransferField_set_CustomerName, (char *)"CustomerName", NULL},
    ///证件类型 
    {(char *)"IdCardType", (getter)PyCThostFtdcReqTransferField_get_IdCardType, (setter)PyCThostFtdcReqTransferField_set_IdCardType, (char *)"IdCardType", NULL},
    ///证件号码 
    {(char *)"IdentifiedCardNo", (getter)PyCThostFtdcReqTransferField_get_IdentifiedCardNo, (setter)PyCThostFtdcReqTransferField_set_IdentifiedCardNo, (char *)"IdentifiedCardNo", NULL},
    ///客户类型 
    {(char *)"CustType", (getter)PyCThostFtdcReqTransferField_get_CustType, (setter)PyCThostFtdcReqTransferField_set_CustType, (char *)"CustType", NULL},
    ///银行帐号 
    {(char *)"BankAccount", (getter)PyCThostFtdcReqTransferField_get_BankAccount, (setter)PyCThostFtdcReqTransferField_set_BankAccount, (char *)"BankAccount", NULL},
    ///银行密码 
    {(char *)"BankPassWord", (getter)PyCThostFtdcReqTransferField_get_BankPassWord, (setter)PyCThostFtdcReqTransferField_set_BankPassWord, (char *)"BankPassWord", NULL},
    ///投资者帐号 
    {(char *)"AccountID", (getter)PyCThostFtdcReqTransferField_get_AccountID, (setter)PyCThostFtdcReqTransferField_set_AccountID, (char *)"AccountID", NULL},
    ///期货密码 
    {(char *)"Password", (getter)PyCThostFtdcReqTransferField_get_Password, (setter)PyCThostFtdcReqTransferField_set_Password, (char *)"Password", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcReqTransferField_get_InstallID, (setter)PyCThostFtdcReqTransferField_set_InstallID, (char *)"InstallID", NULL},
    ///期货公司流水号 
    {(char *)"FutureSerial", (getter)PyCThostFtdcReqTransferField_get_FutureSerial, (setter)PyCThostFtdcReqTransferField_set_FutureSerial, (char *)"FutureSerial", NULL},
    ///用户标识 
    {(char *)"UserID", (getter)PyCThostFtdcReqTransferField_get_UserID, (setter)PyCThostFtdcReqTransferField_set_UserID, (char *)"UserID", NULL},
    ///验证客户证件号码标志 
    {(char *)"VerifyCertNoFlag", (getter)PyCThostFtdcReqTransferField_get_VerifyCertNoFlag, (setter)PyCThostFtdcReqTransferField_set_VerifyCertNoFlag, (char *)"VerifyCertNoFlag", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcReqTransferField_get_CurrencyID, (setter)PyCThostFtdcReqTransferField_set_CurrencyID, (char *)"CurrencyID", NULL},
    ///转帐金额 
    {(char *)"TradeAmount", (getter)PyCThostFtdcReqTransferField_get_TradeAmount, (setter)PyCThostFtdcReqTransferField_set_TradeAmount, (char *)"TradeAmount", NULL},
    ///期货可取金额 
    {(char *)"FutureFetchAmount", (getter)PyCThostFtdcReqTransferField_get_FutureFetchAmount, (setter)PyCThostFtdcReqTransferField_set_FutureFetchAmount, (char *)"FutureFetchAmount", NULL},
    ///费用支付标志 
    {(char *)"FeePayFlag", (getter)PyCThostFtdcReqTransferField_get_FeePayFlag, (setter)PyCThostFtdcReqTransferField_set_FeePayFlag, (char *)"FeePayFlag", NULL},
    ///应收客户费用 
    {(char *)"CustFee", (getter)PyCThostFtdcReqTransferField_get_CustFee, (setter)PyCThostFtdcReqTransferField_set_CustFee, (char *)"CustFee", NULL},
    ///应收期货公司费用 
    {(char *)"BrokerFee", (getter)PyCThostFtdcReqTransferField_get_BrokerFee, (setter)PyCThostFtdcReqTransferField_set_BrokerFee, (char *)"BrokerFee", NULL},
    ///发送方给接收方的消息 
    {(char *)"Message", (getter)PyCThostFtdcReqTransferField_get_Message, (setter)PyCThostFtdcReqTransferField_set_Message, (char *)"Message", NULL},
    ///摘要 
    {(char *)"Digest", (getter)PyCThostFtdcReqTransferField_get_Digest, (setter)PyCThostFtdcReqTransferField_set_Digest, (char *)"Digest", NULL},
    ///银行帐号类型 
    {(char *)"BankAccType", (getter)PyCThostFtdcReqTransferField_get_BankAccType, (setter)PyCThostFtdcReqTransferField_set_BankAccType, (char *)"BankAccType", NULL},
    ///渠道标志 
    {(char *)"DeviceID", (getter)PyCThostFtdcReqTransferField_get_DeviceID, (setter)PyCThostFtdcReqTransferField_set_DeviceID, (char *)"DeviceID", NULL},
    ///期货单位帐号类型 
    {(char *)"BankSecuAccType", (getter)PyCThostFtdcReqTransferField_get_BankSecuAccType, (setter)PyCThostFtdcReqTransferField_set_BankSecuAccType, (char *)"BankSecuAccType", NULL},
    ///期货公司银行编码 
    {(char *)"BrokerIDByBank", (getter)PyCThostFtdcReqTransferField_get_BrokerIDByBank, (setter)PyCThostFtdcReqTransferField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
    ///期货单位帐号 
    {(char *)"BankSecuAcc", (getter)PyCThostFtdcReqTransferField_get_BankSecuAcc, (setter)PyCThostFtdcReqTransferField_set_BankSecuAcc, (char *)"BankSecuAcc", NULL},
    ///银行密码标志 
    {(char *)"BankPwdFlag", (getter)PyCThostFtdcReqTransferField_get_BankPwdFlag, (setter)PyCThostFtdcReqTransferField_set_BankPwdFlag, (char *)"BankPwdFlag", NULL},
    ///期货资金密码核对标志 
    {(char *)"SecuPwdFlag", (getter)PyCThostFtdcReqTransferField_get_SecuPwdFlag, (setter)PyCThostFtdcReqTransferField_set_SecuPwdFlag, (char *)"SecuPwdFlag", NULL},
    ///交易柜员 
    {(char *)"OperNo", (getter)PyCThostFtdcReqTransferField_get_OperNo, (setter)PyCThostFtdcReqTransferField_set_OperNo, (char *)"OperNo", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcReqTransferField_get_RequestID, (setter)PyCThostFtdcReqTransferField_set_RequestID, (char *)"RequestID", NULL},
    ///交易ID 
    {(char *)"TID", (getter)PyCThostFtdcReqTransferField_get_TID, (setter)PyCThostFtdcReqTransferField_set_TID, (char *)"TID", NULL},
    ///转账交易状态 
    {(char *)"TransferStatus", (getter)PyCThostFtdcReqTransferField_get_TransferStatus, (setter)PyCThostFtdcReqTransferField_set_TransferStatus, (char *)"TransferStatus", NULL},
    ///长客户姓名 
    {(char *)"LongCustomerName", (getter)PyCThostFtdcReqTransferField_get_LongCustomerName, (setter)PyCThostFtdcReqTransferField_set_LongCustomerName, (char *)"LongCustomerName", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcReqTransferFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcReqTransferField",	/* tp_name */
	sizeof(PyCThostFtdcReqTransferField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcReqTransferField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcReqTransferField_repr,   /* tp_repr */
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
	"CThostFtdcReqTransferField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcReqTransferField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcReqTransferField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcReqTransferField_new,       /* tp_new */
};

int PyCThostFtdcReqTransferFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcReqTransferField  */
	if (PyType_Ready(&PyCThostFtdcReqTransferFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcReqTransferField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcReqTransferFieldType);
    if( PyModule_AddObject(module, "CThostFtdcReqTransferField", (PyObject *)&PyCThostFtdcReqTransferFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqTransferField to module");
        Py_DECREF(&PyCThostFtdcReqTransferFieldType);
		return -1;
    }

    return 0;
}
