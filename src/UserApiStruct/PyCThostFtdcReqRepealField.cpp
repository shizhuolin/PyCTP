
#include "PyCThostFtdcReqRepealField.h"

///冲正请求

static PyObject *PyCThostFtdcReqRepealField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcReqRepealField *self = (PyCThostFtdcReqRepealField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcReqRepealField_init(PyCThostFtdcReqRepealField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"RepealTimeInterval", "RepealedTimes", "BankRepealFlag", "BrokerRepealFlag", "PlateRepealSerial", "BankRepealSerial", "FutureRepealSerial", "TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "CustType", "BankAccount", "BankPassWord", "AccountID", "Password", "InstallID", "FutureSerial", "UserID", "VerifyCertNoFlag", "CurrencyID", "TradeAmount", "FutureFetchAmount", "FeePayFlag", "CustFee", "BrokerFee", "Message", "Digest", "BankAccType", "DeviceID", "BankSecuAccType", "BrokerIDByBank", "BankSecuAcc", "BankPwdFlag", "SecuPwdFlag", "OperNo", "RequestID", "TID", "TransferStatus", "LongCustomerName",  NULL};


    ///冲正时间间隔
    // TThostFtdcRepealTimeIntervalType int
    int ReqRepealField_RepealTimeInterval = 0;
        
    ///已经冲正次数
    // TThostFtdcRepealedTimesType int
    int ReqRepealField_RepealedTimes = 0;
        
    ///银行冲正标志
    // TThostFtdcBankRepealFlagType char
    char ReqRepealField_BankRepealFlag = 0;
            
    ///期商冲正标志
    // TThostFtdcBrokerRepealFlagType char
    char ReqRepealField_BrokerRepealFlag = 0;
            
    ///被冲正平台流水号
    // TThostFtdcPlateSerialType int
    int ReqRepealField_PlateRepealSerial = 0;
        
    ///被冲正银行流水号
    // TThostFtdcBankSerialType char[13]
    const char *ReqRepealField_BankRepealSerial = NULL;
    Py_ssize_t ReqRepealField_BankRepealSerial_len = 0;
            
    ///被冲正期货流水号
    // TThostFtdcFutureSerialType int
    int ReqRepealField_FutureRepealSerial = 0;
        
    ///业务功能码
    // TThostFtdcTradeCodeType char[7]
    const char *ReqRepealField_TradeCode = NULL;
    Py_ssize_t ReqRepealField_TradeCode_len = 0;
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    const char *ReqRepealField_BankID = NULL;
    Py_ssize_t ReqRepealField_BankID_len = 0;
            
    ///银行分支机构代码
    // TThostFtdcBankBrchIDType char[5]
    const char *ReqRepealField_BankBranchID = NULL;
    Py_ssize_t ReqRepealField_BankBranchID_len = 0;
            
    ///期商代码
    // TThostFtdcBrokerIDType char[11]
    const char *ReqRepealField_BrokerID = NULL;
    Py_ssize_t ReqRepealField_BrokerID_len = 0;
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    const char *ReqRepealField_BrokerBranchID = NULL;
    Py_ssize_t ReqRepealField_BrokerBranchID_len = 0;
            
    ///交易日期
    // TThostFtdcTradeDateType char[9]
    const char *ReqRepealField_TradeDate = NULL;
    Py_ssize_t ReqRepealField_TradeDate_len = 0;
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    const char *ReqRepealField_TradeTime = NULL;
    Py_ssize_t ReqRepealField_TradeTime_len = 0;
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    const char *ReqRepealField_BankSerial = NULL;
    Py_ssize_t ReqRepealField_BankSerial_len = 0;
            
    ///交易系统日期
    // TThostFtdcTradeDateType char[9]
    const char *ReqRepealField_TradingDay = NULL;
    Py_ssize_t ReqRepealField_TradingDay_len = 0;
            
    ///银期平台消息流水号
    // TThostFtdcSerialType int
    int ReqRepealField_PlateSerial = 0;
        
    ///最后分片标志
    // TThostFtdcLastFragmentType char
    char ReqRepealField_LastFragment = 0;
            
    ///会话号
    // TThostFtdcSessionIDType int
    int ReqRepealField_SessionID = 0;
        
    ///客户姓名
    // TThostFtdcIndividualNameType char[51]
    const char *ReqRepealField_CustomerName = NULL;
    Py_ssize_t ReqRepealField_CustomerName_len = 0;
            
    ///证件类型
    // TThostFtdcIdCardTypeType char
    char ReqRepealField_IdCardType = 0;
            
    ///证件号码
    // TThostFtdcIdentifiedCardNoType char[51]
    const char *ReqRepealField_IdentifiedCardNo = NULL;
    Py_ssize_t ReqRepealField_IdentifiedCardNo_len = 0;
            
    ///客户类型
    // TThostFtdcCustTypeType char
    char ReqRepealField_CustType = 0;
            
    ///银行帐号
    // TThostFtdcBankAccountType char[41]
    const char *ReqRepealField_BankAccount = NULL;
    Py_ssize_t ReqRepealField_BankAccount_len = 0;
            
    ///银行密码
    // TThostFtdcPasswordType char[41]
    const char *ReqRepealField_BankPassWord = NULL;
    Py_ssize_t ReqRepealField_BankPassWord_len = 0;
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    const char *ReqRepealField_AccountID = NULL;
    Py_ssize_t ReqRepealField_AccountID_len = 0;
            
    ///期货密码
    // TThostFtdcPasswordType char[41]
    const char *ReqRepealField_Password = NULL;
    Py_ssize_t ReqRepealField_Password_len = 0;
            
    ///安装编号
    // TThostFtdcInstallIDType int
    int ReqRepealField_InstallID = 0;
        
    ///期货公司流水号
    // TThostFtdcFutureSerialType int
    int ReqRepealField_FutureSerial = 0;
        
    ///用户标识
    // TThostFtdcUserIDType char[16]
    const char *ReqRepealField_UserID = NULL;
    Py_ssize_t ReqRepealField_UserID_len = 0;
            
    ///验证客户证件号码标志
    // TThostFtdcYesNoIndicatorType char
    char ReqRepealField_VerifyCertNoFlag = 0;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *ReqRepealField_CurrencyID = NULL;
    Py_ssize_t ReqRepealField_CurrencyID_len = 0;
            
    ///转帐金额
    // TThostFtdcTradeAmountType double
    double ReqRepealField_TradeAmount = 0.0;
        
    ///期货可取金额
    // TThostFtdcTradeAmountType double
    double ReqRepealField_FutureFetchAmount = 0.0;
        
    ///费用支付标志
    // TThostFtdcFeePayFlagType char
    char ReqRepealField_FeePayFlag = 0;
            
    ///应收客户费用
    // TThostFtdcCustFeeType double
    double ReqRepealField_CustFee = 0.0;
        
    ///应收期货公司费用
    // TThostFtdcFutureFeeType double
    double ReqRepealField_BrokerFee = 0.0;
        
    ///发送方给接收方的消息
    // TThostFtdcAddInfoType char[129]
    const char *ReqRepealField_Message = NULL;
    Py_ssize_t ReqRepealField_Message_len = 0;
            
    ///摘要
    // TThostFtdcDigestType char[36]
    const char *ReqRepealField_Digest = NULL;
    Py_ssize_t ReqRepealField_Digest_len = 0;
            
    ///银行帐号类型
    // TThostFtdcBankAccTypeType char
    char ReqRepealField_BankAccType = 0;
            
    ///渠道标志
    // TThostFtdcDeviceIDType char[3]
    const char *ReqRepealField_DeviceID = NULL;
    Py_ssize_t ReqRepealField_DeviceID_len = 0;
            
    ///期货单位帐号类型
    // TThostFtdcBankAccTypeType char
    char ReqRepealField_BankSecuAccType = 0;
            
    ///期货公司银行编码
    // TThostFtdcBankCodingForFutureType char[33]
    const char *ReqRepealField_BrokerIDByBank = NULL;
    Py_ssize_t ReqRepealField_BrokerIDByBank_len = 0;
            
    ///期货单位帐号
    // TThostFtdcBankAccountType char[41]
    const char *ReqRepealField_BankSecuAcc = NULL;
    Py_ssize_t ReqRepealField_BankSecuAcc_len = 0;
            
    ///银行密码标志
    // TThostFtdcPwdFlagType char
    char ReqRepealField_BankPwdFlag = 0;
            
    ///期货资金密码核对标志
    // TThostFtdcPwdFlagType char
    char ReqRepealField_SecuPwdFlag = 0;
            
    ///交易柜员
    // TThostFtdcOperNoType char[17]
    const char *ReqRepealField_OperNo = NULL;
    Py_ssize_t ReqRepealField_OperNo_len = 0;
            
    ///请求编号
    // TThostFtdcRequestIDType int
    int ReqRepealField_RequestID = 0;
        
    ///交易ID
    // TThostFtdcTIDType int
    int ReqRepealField_TID = 0;
        
    ///转账交易状态
    // TThostFtdcTransferStatusType char
    char ReqRepealField_TransferStatus = 0;
            
    ///长客户姓名
    // TThostFtdcLongIndividualNameType char[161]
    const char *ReqRepealField_LongCustomerName = NULL;
    Py_ssize_t ReqRepealField_LongCustomerName_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iicciy#iy#y#y#y#y#y#y#y#y#iciy#cy#cy#y#y#y#iiy#cy#ddcddy#y#cy#cy#y#ccy#iicy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iiccis#is#s#s#s#s#s#s#s#s#icis#cs#cs#s#s#s#iis#cs#ddcdds#s#cs#cs#s#ccs#iics#", (char **)kwlist
#endif

        , &ReqRepealField_RepealTimeInterval 
        , &ReqRepealField_RepealedTimes 
        , &ReqRepealField_BankRepealFlag 
        , &ReqRepealField_BrokerRepealFlag 
        , &ReqRepealField_PlateRepealSerial 
        , &ReqRepealField_BankRepealSerial, &ReqRepealField_BankRepealSerial_len 
        , &ReqRepealField_FutureRepealSerial 
        , &ReqRepealField_TradeCode, &ReqRepealField_TradeCode_len 
        , &ReqRepealField_BankID, &ReqRepealField_BankID_len 
        , &ReqRepealField_BankBranchID, &ReqRepealField_BankBranchID_len 
        , &ReqRepealField_BrokerID, &ReqRepealField_BrokerID_len 
        , &ReqRepealField_BrokerBranchID, &ReqRepealField_BrokerBranchID_len 
        , &ReqRepealField_TradeDate, &ReqRepealField_TradeDate_len 
        , &ReqRepealField_TradeTime, &ReqRepealField_TradeTime_len 
        , &ReqRepealField_BankSerial, &ReqRepealField_BankSerial_len 
        , &ReqRepealField_TradingDay, &ReqRepealField_TradingDay_len 
        , &ReqRepealField_PlateSerial 
        , &ReqRepealField_LastFragment 
        , &ReqRepealField_SessionID 
        , &ReqRepealField_CustomerName, &ReqRepealField_CustomerName_len 
        , &ReqRepealField_IdCardType 
        , &ReqRepealField_IdentifiedCardNo, &ReqRepealField_IdentifiedCardNo_len 
        , &ReqRepealField_CustType 
        , &ReqRepealField_BankAccount, &ReqRepealField_BankAccount_len 
        , &ReqRepealField_BankPassWord, &ReqRepealField_BankPassWord_len 
        , &ReqRepealField_AccountID, &ReqRepealField_AccountID_len 
        , &ReqRepealField_Password, &ReqRepealField_Password_len 
        , &ReqRepealField_InstallID 
        , &ReqRepealField_FutureSerial 
        , &ReqRepealField_UserID, &ReqRepealField_UserID_len 
        , &ReqRepealField_VerifyCertNoFlag 
        , &ReqRepealField_CurrencyID, &ReqRepealField_CurrencyID_len 
        , &ReqRepealField_TradeAmount 
        , &ReqRepealField_FutureFetchAmount 
        , &ReqRepealField_FeePayFlag 
        , &ReqRepealField_CustFee 
        , &ReqRepealField_BrokerFee 
        , &ReqRepealField_Message, &ReqRepealField_Message_len 
        , &ReqRepealField_Digest, &ReqRepealField_Digest_len 
        , &ReqRepealField_BankAccType 
        , &ReqRepealField_DeviceID, &ReqRepealField_DeviceID_len 
        , &ReqRepealField_BankSecuAccType 
        , &ReqRepealField_BrokerIDByBank, &ReqRepealField_BrokerIDByBank_len 
        , &ReqRepealField_BankSecuAcc, &ReqRepealField_BankSecuAcc_len 
        , &ReqRepealField_BankPwdFlag 
        , &ReqRepealField_SecuPwdFlag 
        , &ReqRepealField_OperNo, &ReqRepealField_OperNo_len 
        , &ReqRepealField_RequestID 
        , &ReqRepealField_TID 
        , &ReqRepealField_TransferStatus 
        , &ReqRepealField_LongCustomerName, &ReqRepealField_LongCustomerName_len 


    )) {
        return -1;
    }


    ///冲正时间间隔
    // TThostFtdcRepealTimeIntervalType int
    self->data.RepealTimeInterval = ReqRepealField_RepealTimeInterval;
        
    ///已经冲正次数
    // TThostFtdcRepealedTimesType int
    self->data.RepealedTimes = ReqRepealField_RepealedTimes;
        
    ///银行冲正标志
    // TThostFtdcBankRepealFlagType char
    self->data.BankRepealFlag = ReqRepealField_BankRepealFlag;
            
    ///期商冲正标志
    // TThostFtdcBrokerRepealFlagType char
    self->data.BrokerRepealFlag = ReqRepealField_BrokerRepealFlag;
            
    ///被冲正平台流水号
    // TThostFtdcPlateSerialType int
    self->data.PlateRepealSerial = ReqRepealField_PlateRepealSerial;
        
    ///被冲正银行流水号
    // TThostFtdcBankSerialType char[13]
    if( ReqRepealField_BankRepealSerial != NULL ) {
        if(ReqRepealField_BankRepealSerial_len > (Py_ssize_t)sizeof(self->data.BankRepealSerial)) {
            PyErr_Format(PyExc_ValueError, "BankRepealSerial too long: length=%zd (max allowed is %zd)", ReqRepealField_BankRepealSerial_len, (Py_ssize_t)sizeof(self->data.BankRepealSerial));
            return -1;
        }
        // memset(self->data.BankRepealSerial, 0, sizeof(self->data.BankRepealSerial));
        // memcpy(self->data.BankRepealSerial, ReqRepealField_BankRepealSerial, ReqRepealField_BankRepealSerial_len);        
        strncpy(self->data.BankRepealSerial, ReqRepealField_BankRepealSerial, sizeof(self->data.BankRepealSerial) );
        ReqRepealField_BankRepealSerial = NULL;
    }
            
    ///被冲正期货流水号
    // TThostFtdcFutureSerialType int
    self->data.FutureRepealSerial = ReqRepealField_FutureRepealSerial;
        
    ///业务功能码
    // TThostFtdcTradeCodeType char[7]
    if( ReqRepealField_TradeCode != NULL ) {
        if(ReqRepealField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", ReqRepealField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
            return -1;
        }
        // memset(self->data.TradeCode, 0, sizeof(self->data.TradeCode));
        // memcpy(self->data.TradeCode, ReqRepealField_TradeCode, ReqRepealField_TradeCode_len);        
        strncpy(self->data.TradeCode, ReqRepealField_TradeCode, sizeof(self->data.TradeCode) );
        ReqRepealField_TradeCode = NULL;
    }
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    if( ReqRepealField_BankID != NULL ) {
        if(ReqRepealField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", ReqRepealField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
            return -1;
        }
        // memset(self->data.BankID, 0, sizeof(self->data.BankID));
        // memcpy(self->data.BankID, ReqRepealField_BankID, ReqRepealField_BankID_len);        
        strncpy(self->data.BankID, ReqRepealField_BankID, sizeof(self->data.BankID) );
        ReqRepealField_BankID = NULL;
    }
            
    ///银行分支机构代码
    // TThostFtdcBankBrchIDType char[5]
    if( ReqRepealField_BankBranchID != NULL ) {
        if(ReqRepealField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", ReqRepealField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
            return -1;
        }
        // memset(self->data.BankBranchID, 0, sizeof(self->data.BankBranchID));
        // memcpy(self->data.BankBranchID, ReqRepealField_BankBranchID, ReqRepealField_BankBranchID_len);        
        strncpy(self->data.BankBranchID, ReqRepealField_BankBranchID, sizeof(self->data.BankBranchID) );
        ReqRepealField_BankBranchID = NULL;
    }
            
    ///期商代码
    // TThostFtdcBrokerIDType char[11]
    if( ReqRepealField_BrokerID != NULL ) {
        if(ReqRepealField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", ReqRepealField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, ReqRepealField_BrokerID, ReqRepealField_BrokerID_len);        
        strncpy(self->data.BrokerID, ReqRepealField_BrokerID, sizeof(self->data.BrokerID) );
        ReqRepealField_BrokerID = NULL;
    }
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    if( ReqRepealField_BrokerBranchID != NULL ) {
        if(ReqRepealField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", ReqRepealField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
            return -1;
        }
        // memset(self->data.BrokerBranchID, 0, sizeof(self->data.BrokerBranchID));
        // memcpy(self->data.BrokerBranchID, ReqRepealField_BrokerBranchID, ReqRepealField_BrokerBranchID_len);        
        strncpy(self->data.BrokerBranchID, ReqRepealField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
        ReqRepealField_BrokerBranchID = NULL;
    }
            
    ///交易日期
    // TThostFtdcTradeDateType char[9]
    if( ReqRepealField_TradeDate != NULL ) {
        if(ReqRepealField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", ReqRepealField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
            return -1;
        }
        // memset(self->data.TradeDate, 0, sizeof(self->data.TradeDate));
        // memcpy(self->data.TradeDate, ReqRepealField_TradeDate, ReqRepealField_TradeDate_len);        
        strncpy(self->data.TradeDate, ReqRepealField_TradeDate, sizeof(self->data.TradeDate) );
        ReqRepealField_TradeDate = NULL;
    }
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    if( ReqRepealField_TradeTime != NULL ) {
        if(ReqRepealField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", ReqRepealField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
            return -1;
        }
        // memset(self->data.TradeTime, 0, sizeof(self->data.TradeTime));
        // memcpy(self->data.TradeTime, ReqRepealField_TradeTime, ReqRepealField_TradeTime_len);        
        strncpy(self->data.TradeTime, ReqRepealField_TradeTime, sizeof(self->data.TradeTime) );
        ReqRepealField_TradeTime = NULL;
    }
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    if( ReqRepealField_BankSerial != NULL ) {
        if(ReqRepealField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", ReqRepealField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
            return -1;
        }
        // memset(self->data.BankSerial, 0, sizeof(self->data.BankSerial));
        // memcpy(self->data.BankSerial, ReqRepealField_BankSerial, ReqRepealField_BankSerial_len);        
        strncpy(self->data.BankSerial, ReqRepealField_BankSerial, sizeof(self->data.BankSerial) );
        ReqRepealField_BankSerial = NULL;
    }
            
    ///交易系统日期
    // TThostFtdcTradeDateType char[9]
    if( ReqRepealField_TradingDay != NULL ) {
        if(ReqRepealField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", ReqRepealField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, ReqRepealField_TradingDay, ReqRepealField_TradingDay_len);        
        strncpy(self->data.TradingDay, ReqRepealField_TradingDay, sizeof(self->data.TradingDay) );
        ReqRepealField_TradingDay = NULL;
    }
            
    ///银期平台消息流水号
    // TThostFtdcSerialType int
    self->data.PlateSerial = ReqRepealField_PlateSerial;
        
    ///最后分片标志
    // TThostFtdcLastFragmentType char
    self->data.LastFragment = ReqRepealField_LastFragment;
            
    ///会话号
    // TThostFtdcSessionIDType int
    self->data.SessionID = ReqRepealField_SessionID;
        
    ///客户姓名
    // TThostFtdcIndividualNameType char[51]
    if( ReqRepealField_CustomerName != NULL ) {
        if(ReqRepealField_CustomerName_len > (Py_ssize_t)sizeof(self->data.CustomerName)) {
            PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is %zd)", ReqRepealField_CustomerName_len, (Py_ssize_t)sizeof(self->data.CustomerName));
            return -1;
        }
        // memset(self->data.CustomerName, 0, sizeof(self->data.CustomerName));
        // memcpy(self->data.CustomerName, ReqRepealField_CustomerName, ReqRepealField_CustomerName_len);        
        strncpy(self->data.CustomerName, ReqRepealField_CustomerName, sizeof(self->data.CustomerName) );
        ReqRepealField_CustomerName = NULL;
    }
            
    ///证件类型
    // TThostFtdcIdCardTypeType char
    self->data.IdCardType = ReqRepealField_IdCardType;
            
    ///证件号码
    // TThostFtdcIdentifiedCardNoType char[51]
    if( ReqRepealField_IdentifiedCardNo != NULL ) {
        if(ReqRepealField_IdentifiedCardNo_len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
            PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is %zd)", ReqRepealField_IdentifiedCardNo_len, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
            return -1;
        }
        // memset(self->data.IdentifiedCardNo, 0, sizeof(self->data.IdentifiedCardNo));
        // memcpy(self->data.IdentifiedCardNo, ReqRepealField_IdentifiedCardNo, ReqRepealField_IdentifiedCardNo_len);        
        strncpy(self->data.IdentifiedCardNo, ReqRepealField_IdentifiedCardNo, sizeof(self->data.IdentifiedCardNo) );
        ReqRepealField_IdentifiedCardNo = NULL;
    }
            
    ///客户类型
    // TThostFtdcCustTypeType char
    self->data.CustType = ReqRepealField_CustType;
            
    ///银行帐号
    // TThostFtdcBankAccountType char[41]
    if( ReqRepealField_BankAccount != NULL ) {
        if(ReqRepealField_BankAccount_len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
            PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is %zd)", ReqRepealField_BankAccount_len, (Py_ssize_t)sizeof(self->data.BankAccount));
            return -1;
        }
        // memset(self->data.BankAccount, 0, sizeof(self->data.BankAccount));
        // memcpy(self->data.BankAccount, ReqRepealField_BankAccount, ReqRepealField_BankAccount_len);        
        strncpy(self->data.BankAccount, ReqRepealField_BankAccount, sizeof(self->data.BankAccount) );
        ReqRepealField_BankAccount = NULL;
    }
            
    ///银行密码
    // TThostFtdcPasswordType char[41]
    if( ReqRepealField_BankPassWord != NULL ) {
        if(ReqRepealField_BankPassWord_len > (Py_ssize_t)sizeof(self->data.BankPassWord)) {
            PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is %zd)", ReqRepealField_BankPassWord_len, (Py_ssize_t)sizeof(self->data.BankPassWord));
            return -1;
        }
        // memset(self->data.BankPassWord, 0, sizeof(self->data.BankPassWord));
        // memcpy(self->data.BankPassWord, ReqRepealField_BankPassWord, ReqRepealField_BankPassWord_len);        
        strncpy(self->data.BankPassWord, ReqRepealField_BankPassWord, sizeof(self->data.BankPassWord) );
        ReqRepealField_BankPassWord = NULL;
    }
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    if( ReqRepealField_AccountID != NULL ) {
        if(ReqRepealField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", ReqRepealField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
            return -1;
        }
        // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
        // memcpy(self->data.AccountID, ReqRepealField_AccountID, ReqRepealField_AccountID_len);        
        strncpy(self->data.AccountID, ReqRepealField_AccountID, sizeof(self->data.AccountID) );
        ReqRepealField_AccountID = NULL;
    }
            
    ///期货密码
    // TThostFtdcPasswordType char[41]
    if( ReqRepealField_Password != NULL ) {
        if(ReqRepealField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", ReqRepealField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
            return -1;
        }
        // memset(self->data.Password, 0, sizeof(self->data.Password));
        // memcpy(self->data.Password, ReqRepealField_Password, ReqRepealField_Password_len);        
        strncpy(self->data.Password, ReqRepealField_Password, sizeof(self->data.Password) );
        ReqRepealField_Password = NULL;
    }
            
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = ReqRepealField_InstallID;
        
    ///期货公司流水号
    // TThostFtdcFutureSerialType int
    self->data.FutureSerial = ReqRepealField_FutureSerial;
        
    ///用户标识
    // TThostFtdcUserIDType char[16]
    if( ReqRepealField_UserID != NULL ) {
        if(ReqRepealField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", ReqRepealField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, ReqRepealField_UserID, ReqRepealField_UserID_len);        
        strncpy(self->data.UserID, ReqRepealField_UserID, sizeof(self->data.UserID) );
        ReqRepealField_UserID = NULL;
    }
            
    ///验证客户证件号码标志
    // TThostFtdcYesNoIndicatorType char
    self->data.VerifyCertNoFlag = ReqRepealField_VerifyCertNoFlag;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( ReqRepealField_CurrencyID != NULL ) {
        if(ReqRepealField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", ReqRepealField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, ReqRepealField_CurrencyID, ReqRepealField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, ReqRepealField_CurrencyID, sizeof(self->data.CurrencyID) );
        ReqRepealField_CurrencyID = NULL;
    }
            
    ///转帐金额
    // TThostFtdcTradeAmountType double
    self->data.TradeAmount = ReqRepealField_TradeAmount;
        
    ///期货可取金额
    // TThostFtdcTradeAmountType double
    self->data.FutureFetchAmount = ReqRepealField_FutureFetchAmount;
        
    ///费用支付标志
    // TThostFtdcFeePayFlagType char
    self->data.FeePayFlag = ReqRepealField_FeePayFlag;
            
    ///应收客户费用
    // TThostFtdcCustFeeType double
    self->data.CustFee = ReqRepealField_CustFee;
        
    ///应收期货公司费用
    // TThostFtdcFutureFeeType double
    self->data.BrokerFee = ReqRepealField_BrokerFee;
        
    ///发送方给接收方的消息
    // TThostFtdcAddInfoType char[129]
    if( ReqRepealField_Message != NULL ) {
        if(ReqRepealField_Message_len > (Py_ssize_t)sizeof(self->data.Message)) {
            PyErr_Format(PyExc_ValueError, "Message too long: length=%zd (max allowed is %zd)", ReqRepealField_Message_len, (Py_ssize_t)sizeof(self->data.Message));
            return -1;
        }
        // memset(self->data.Message, 0, sizeof(self->data.Message));
        // memcpy(self->data.Message, ReqRepealField_Message, ReqRepealField_Message_len);        
        strncpy(self->data.Message, ReqRepealField_Message, sizeof(self->data.Message) );
        ReqRepealField_Message = NULL;
    }
            
    ///摘要
    // TThostFtdcDigestType char[36]
    if( ReqRepealField_Digest != NULL ) {
        if(ReqRepealField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
            PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", ReqRepealField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
            return -1;
        }
        // memset(self->data.Digest, 0, sizeof(self->data.Digest));
        // memcpy(self->data.Digest, ReqRepealField_Digest, ReqRepealField_Digest_len);        
        strncpy(self->data.Digest, ReqRepealField_Digest, sizeof(self->data.Digest) );
        ReqRepealField_Digest = NULL;
    }
            
    ///银行帐号类型
    // TThostFtdcBankAccTypeType char
    self->data.BankAccType = ReqRepealField_BankAccType;
            
    ///渠道标志
    // TThostFtdcDeviceIDType char[3]
    if( ReqRepealField_DeviceID != NULL ) {
        if(ReqRepealField_DeviceID_len > (Py_ssize_t)sizeof(self->data.DeviceID)) {
            PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is %zd)", ReqRepealField_DeviceID_len, (Py_ssize_t)sizeof(self->data.DeviceID));
            return -1;
        }
        // memset(self->data.DeviceID, 0, sizeof(self->data.DeviceID));
        // memcpy(self->data.DeviceID, ReqRepealField_DeviceID, ReqRepealField_DeviceID_len);        
        strncpy(self->data.DeviceID, ReqRepealField_DeviceID, sizeof(self->data.DeviceID) );
        ReqRepealField_DeviceID = NULL;
    }
            
    ///期货单位帐号类型
    // TThostFtdcBankAccTypeType char
    self->data.BankSecuAccType = ReqRepealField_BankSecuAccType;
            
    ///期货公司银行编码
    // TThostFtdcBankCodingForFutureType char[33]
    if( ReqRepealField_BrokerIDByBank != NULL ) {
        if(ReqRepealField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
            PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", ReqRepealField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
            return -1;
        }
        // memset(self->data.BrokerIDByBank, 0, sizeof(self->data.BrokerIDByBank));
        // memcpy(self->data.BrokerIDByBank, ReqRepealField_BrokerIDByBank, ReqRepealField_BrokerIDByBank_len);        
        strncpy(self->data.BrokerIDByBank, ReqRepealField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
        ReqRepealField_BrokerIDByBank = NULL;
    }
            
    ///期货单位帐号
    // TThostFtdcBankAccountType char[41]
    if( ReqRepealField_BankSecuAcc != NULL ) {
        if(ReqRepealField_BankSecuAcc_len > (Py_ssize_t)sizeof(self->data.BankSecuAcc)) {
            PyErr_Format(PyExc_ValueError, "BankSecuAcc too long: length=%zd (max allowed is %zd)", ReqRepealField_BankSecuAcc_len, (Py_ssize_t)sizeof(self->data.BankSecuAcc));
            return -1;
        }
        // memset(self->data.BankSecuAcc, 0, sizeof(self->data.BankSecuAcc));
        // memcpy(self->data.BankSecuAcc, ReqRepealField_BankSecuAcc, ReqRepealField_BankSecuAcc_len);        
        strncpy(self->data.BankSecuAcc, ReqRepealField_BankSecuAcc, sizeof(self->data.BankSecuAcc) );
        ReqRepealField_BankSecuAcc = NULL;
    }
            
    ///银行密码标志
    // TThostFtdcPwdFlagType char
    self->data.BankPwdFlag = ReqRepealField_BankPwdFlag;
            
    ///期货资金密码核对标志
    // TThostFtdcPwdFlagType char
    self->data.SecuPwdFlag = ReqRepealField_SecuPwdFlag;
            
    ///交易柜员
    // TThostFtdcOperNoType char[17]
    if( ReqRepealField_OperNo != NULL ) {
        if(ReqRepealField_OperNo_len > (Py_ssize_t)sizeof(self->data.OperNo)) {
            PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is %zd)", ReqRepealField_OperNo_len, (Py_ssize_t)sizeof(self->data.OperNo));
            return -1;
        }
        // memset(self->data.OperNo, 0, sizeof(self->data.OperNo));
        // memcpy(self->data.OperNo, ReqRepealField_OperNo, ReqRepealField_OperNo_len);        
        strncpy(self->data.OperNo, ReqRepealField_OperNo, sizeof(self->data.OperNo) );
        ReqRepealField_OperNo = NULL;
    }
            
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = ReqRepealField_RequestID;
        
    ///交易ID
    // TThostFtdcTIDType int
    self->data.TID = ReqRepealField_TID;
        
    ///转账交易状态
    // TThostFtdcTransferStatusType char
    self->data.TransferStatus = ReqRepealField_TransferStatus;
            
    ///长客户姓名
    // TThostFtdcLongIndividualNameType char[161]
    if( ReqRepealField_LongCustomerName != NULL ) {
        if(ReqRepealField_LongCustomerName_len > (Py_ssize_t)sizeof(self->data.LongCustomerName)) {
            PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is %zd)", ReqRepealField_LongCustomerName_len, (Py_ssize_t)sizeof(self->data.LongCustomerName));
            return -1;
        }
        // memset(self->data.LongCustomerName, 0, sizeof(self->data.LongCustomerName));
        // memcpy(self->data.LongCustomerName, ReqRepealField_LongCustomerName, ReqRepealField_LongCustomerName_len);        
        strncpy(self->data.LongCustomerName, ReqRepealField_LongCustomerName, sizeof(self->data.LongCustomerName) );
        ReqRepealField_LongCustomerName = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcReqRepealField_dealloc(PyCThostFtdcReqRepealField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcReqRepealField_repr(PyCThostFtdcReqRepealField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:i,s:i,s:c,s:c,s:i,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:c,s:y,s:d,s:d,s:c,s:d,s:d,s:y,s:y,s:c,s:y,s:c,s:y,s:y,s:c,s:c,s:y,s:i,s:i,s:c,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:i,s:i,s:c,s:c,s:i,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:c,s:s,s:c,s:s,s:s,s:s,s:s,s:i,s:i,s:s,s:c,s:s,s:d,s:d,s:c,s:d,s:d,s:s,s:s,s:c,s:s,s:c,s:s,s:s,s:c,s:c,s:s,s:i,s:i,s:c,s:s}"
#endif

        ,"RepealTimeInterval", self->data.RepealTimeInterval 
        ,"RepealedTimes", self->data.RepealedTimes 
        ,"BankRepealFlag", self->data.BankRepealFlag 
        ,"BrokerRepealFlag", self->data.BrokerRepealFlag 
        ,"PlateRepealSerial", self->data.PlateRepealSerial 
        ,"BankRepealSerial", self->data.BankRepealSerial//, (Py_ssize_t)sizeof(self->data.BankRepealSerial) 
        ,"FutureRepealSerial", self->data.FutureRepealSerial 
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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqRepealField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///冲正时间间隔
// TThostFtdcRepealTimeIntervalType int
static PyObject *PyCThostFtdcReqRepealField_get_RepealTimeInterval(PyCThostFtdcReqRepealField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RepealTimeInterval);
#else
    return PyInt_FromLong(self->data.RepealTimeInterval);
#endif
}

///冲正时间间隔
// TThostFtdcRepealTimeIntervalType int
static int PyCThostFtdcReqRepealField_set_RepealTimeInterval(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "RepealTimeInterval Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "RepealTimeInterval Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the RepealTimeInterval value out of range for C int");
        return -1;
    }
    self->data.RepealTimeInterval = (int)buf;
    return 0;
}
        
///已经冲正次数
// TThostFtdcRepealedTimesType int
static PyObject *PyCThostFtdcReqRepealField_get_RepealedTimes(PyCThostFtdcReqRepealField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RepealedTimes);
#else
    return PyInt_FromLong(self->data.RepealedTimes);
#endif
}

///已经冲正次数
// TThostFtdcRepealedTimesType int
static int PyCThostFtdcReqRepealField_set_RepealedTimes(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "RepealedTimes Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "RepealedTimes Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the RepealedTimes value out of range for C int");
        return -1;
    }
    self->data.RepealedTimes = (int)buf;
    return 0;
}
        
///银行冲正标志
// TThostFtdcBankRepealFlagType char
static PyObject *PyCThostFtdcReqRepealField_get_BankRepealFlag(PyCThostFtdcReqRepealField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BankRepealFlag), 1);
}

///银行冲正标志
// TThostFtdcBankRepealFlagType char
static int PyCThostFtdcReqRepealField_set_BankRepealFlag(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BankRepealFlag Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BankRepealFlag)) {
        PyErr_SetString(PyExc_ValueError, "BankRepealFlag must be equal 1 bytes");
        return -1;
    }
    self->data.BankRepealFlag = *buf;
    return 0;
}
            
///期商冲正标志
// TThostFtdcBrokerRepealFlagType char
static PyObject *PyCThostFtdcReqRepealField_get_BrokerRepealFlag(PyCThostFtdcReqRepealField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BrokerRepealFlag), 1);
}

///期商冲正标志
// TThostFtdcBrokerRepealFlagType char
static int PyCThostFtdcReqRepealField_set_BrokerRepealFlag(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BrokerRepealFlag Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BrokerRepealFlag)) {
        PyErr_SetString(PyExc_ValueError, "BrokerRepealFlag must be equal 1 bytes");
        return -1;
    }
    self->data.BrokerRepealFlag = *buf;
    return 0;
}
            
///被冲正平台流水号
// TThostFtdcPlateSerialType int
static PyObject *PyCThostFtdcReqRepealField_get_PlateRepealSerial(PyCThostFtdcReqRepealField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.PlateRepealSerial);
#else
    return PyInt_FromLong(self->data.PlateRepealSerial);
#endif
}

///被冲正平台流水号
// TThostFtdcPlateSerialType int
static int PyCThostFtdcReqRepealField_set_PlateRepealSerial(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PlateRepealSerial Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PlateRepealSerial Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the PlateRepealSerial value out of range for C int");
        return -1;
    }
    self->data.PlateRepealSerial = (int)buf;
    return 0;
}
        
///被冲正银行流水号
// TThostFtdcBankSerialType char[13]
static PyObject *PyCThostFtdcReqRepealField_get_BankRepealSerial(PyCThostFtdcReqRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankRepealSerial, (Py_ssize_t)sizeof(self->data.BankRepealSerial));
    return PyBytes_FromString(self->data.BankRepealSerial);
}

///被冲正银行流水号
// TThostFtdcBankSerialType char[13]
static int PyCThostFtdcReqRepealField_set_BankRepealSerial(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BankRepealSerial Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BankRepealSerial)) {
        PyErr_SetString(PyExc_ValueError, "BankRepealSerial must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.BankRepealSerial, 0, sizeof(self->data.BankRepealSerial));
    // memcpy(self->data.BankRepealSerial, buf, len);
    strncpy(self->data.BankRepealSerial, buf, sizeof(self->data.BankRepealSerial));
    return 0;
}
            
///被冲正期货流水号
// TThostFtdcFutureSerialType int
static PyObject *PyCThostFtdcReqRepealField_get_FutureRepealSerial(PyCThostFtdcReqRepealField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FutureRepealSerial);
#else
    return PyInt_FromLong(self->data.FutureRepealSerial);
#endif
}

///被冲正期货流水号
// TThostFtdcFutureSerialType int
static int PyCThostFtdcReqRepealField_set_FutureRepealSerial(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FutureRepealSerial Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FutureRepealSerial Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the FutureRepealSerial value out of range for C int");
        return -1;
    }
    self->data.FutureRepealSerial = (int)buf;
    return 0;
}
        
///业务功能码
// TThostFtdcTradeCodeType char[7]
static PyObject *PyCThostFtdcReqRepealField_get_TradeCode(PyCThostFtdcReqRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeCode, (Py_ssize_t)sizeof(self->data.TradeCode));
    return PyBytes_FromString(self->data.TradeCode);
}

///业务功能码
// TThostFtdcTradeCodeType char[7]
static int PyCThostFtdcReqRepealField_set_TradeCode(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqRepealField_get_BankID(PyCThostFtdcReqRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankID, (Py_ssize_t)sizeof(self->data.BankID));
    return PyBytes_FromString(self->data.BankID);
}

///银行代码
// TThostFtdcBankIDType char[4]
static int PyCThostFtdcReqRepealField_set_BankID(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqRepealField_get_BankBranchID(PyCThostFtdcReqRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankBranchID, (Py_ssize_t)sizeof(self->data.BankBranchID));
    return PyBytes_FromString(self->data.BankBranchID);
}

///银行分支机构代码
// TThostFtdcBankBrchIDType char[5]
static int PyCThostFtdcReqRepealField_set_BankBranchID(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqRepealField_get_BrokerID(PyCThostFtdcReqRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///期商代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcReqRepealField_set_BrokerID(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqRepealField_get_BrokerBranchID(PyCThostFtdcReqRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerBranchID, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
    return PyBytes_FromString(self->data.BrokerBranchID);
}

///期商分支机构代码
// TThostFtdcFutureBranchIDType char[31]
static int PyCThostFtdcReqRepealField_set_BrokerBranchID(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqRepealField_get_TradeDate(PyCThostFtdcReqRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeDate, (Py_ssize_t)sizeof(self->data.TradeDate));
    return PyBytes_FromString(self->data.TradeDate);
}

///交易日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcReqRepealField_set_TradeDate(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqRepealField_get_TradeTime(PyCThostFtdcReqRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeTime, (Py_ssize_t)sizeof(self->data.TradeTime));
    return PyBytes_FromString(self->data.TradeTime);
}

///交易时间
// TThostFtdcTradeTimeType char[9]
static int PyCThostFtdcReqRepealField_set_TradeTime(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqRepealField_get_BankSerial(PyCThostFtdcReqRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankSerial, (Py_ssize_t)sizeof(self->data.BankSerial));
    return PyBytes_FromString(self->data.BankSerial);
}

///银行流水号
// TThostFtdcBankSerialType char[13]
static int PyCThostFtdcReqRepealField_set_BankSerial(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqRepealField_get_TradingDay(PyCThostFtdcReqRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易系统日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcReqRepealField_set_TradingDay(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqRepealField_get_PlateSerial(PyCThostFtdcReqRepealField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.PlateSerial);
#else
    return PyInt_FromLong(self->data.PlateSerial);
#endif
}

///银期平台消息流水号
// TThostFtdcSerialType int
static int PyCThostFtdcReqRepealField_set_PlateSerial(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqRepealField_get_LastFragment(PyCThostFtdcReqRepealField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

///最后分片标志
// TThostFtdcLastFragmentType char
static int PyCThostFtdcReqRepealField_set_LastFragment(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqRepealField_get_SessionID(PyCThostFtdcReqRepealField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话号
// TThostFtdcSessionIDType int
static int PyCThostFtdcReqRepealField_set_SessionID(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqRepealField_get_CustomerName(PyCThostFtdcReqRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CustomerName, (Py_ssize_t)sizeof(self->data.CustomerName));
    return PyBytes_FromString(self->data.CustomerName);
}

///客户姓名
// TThostFtdcIndividualNameType char[51]
static int PyCThostFtdcReqRepealField_set_CustomerName(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqRepealField_get_IdCardType(PyCThostFtdcReqRepealField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.IdCardType), 1);
}

///证件类型
// TThostFtdcIdCardTypeType char
static int PyCThostFtdcReqRepealField_set_IdCardType(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqRepealField_get_IdentifiedCardNo(PyCThostFtdcReqRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IdentifiedCardNo, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
    return PyBytes_FromString(self->data.IdentifiedCardNo);
}

///证件号码
// TThostFtdcIdentifiedCardNoType char[51]
static int PyCThostFtdcReqRepealField_set_IdentifiedCardNo(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqRepealField_get_CustType(PyCThostFtdcReqRepealField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.CustType), 1);
}

///客户类型
// TThostFtdcCustTypeType char
static int PyCThostFtdcReqRepealField_set_CustType(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqRepealField_get_BankAccount(PyCThostFtdcReqRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankAccount, (Py_ssize_t)sizeof(self->data.BankAccount));
    return PyBytes_FromString(self->data.BankAccount);
}

///银行帐号
// TThostFtdcBankAccountType char[41]
static int PyCThostFtdcReqRepealField_set_BankAccount(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqRepealField_get_BankPassWord(PyCThostFtdcReqRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankPassWord, (Py_ssize_t)sizeof(self->data.BankPassWord));
    return PyBytes_FromString(self->data.BankPassWord);
}

///银行密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcReqRepealField_set_BankPassWord(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqRepealField_get_AccountID(PyCThostFtdcReqRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AccountID, (Py_ssize_t)sizeof(self->data.AccountID));
    return PyBytes_FromString(self->data.AccountID);
}

///投资者帐号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcReqRepealField_set_AccountID(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqRepealField_get_Password(PyCThostFtdcReqRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Password, (Py_ssize_t)sizeof(self->data.Password));
    return PyBytes_FromString(self->data.Password);
}

///期货密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcReqRepealField_set_Password(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqRepealField_get_InstallID(PyCThostFtdcReqRepealField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcReqRepealField_set_InstallID(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqRepealField_get_FutureSerial(PyCThostFtdcReqRepealField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FutureSerial);
#else
    return PyInt_FromLong(self->data.FutureSerial);
#endif
}

///期货公司流水号
// TThostFtdcFutureSerialType int
static int PyCThostFtdcReqRepealField_set_FutureSerial(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqRepealField_get_UserID(PyCThostFtdcReqRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户标识
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcReqRepealField_set_UserID(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqRepealField_get_VerifyCertNoFlag(PyCThostFtdcReqRepealField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.VerifyCertNoFlag), 1);
}

///验证客户证件号码标志
// TThostFtdcYesNoIndicatorType char
static int PyCThostFtdcReqRepealField_set_VerifyCertNoFlag(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqRepealField_get_CurrencyID(PyCThostFtdcReqRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcReqRepealField_set_CurrencyID(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqRepealField_get_TradeAmount(PyCThostFtdcReqRepealField *self, void *closure) {
    return PyFloat_FromDouble(self->data.TradeAmount);
}

///转帐金额
// TThostFtdcTradeAmountType double
static int PyCThostFtdcReqRepealField_set_TradeAmount(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqRepealField_get_FutureFetchAmount(PyCThostFtdcReqRepealField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FutureFetchAmount);
}

///期货可取金额
// TThostFtdcTradeAmountType double
static int PyCThostFtdcReqRepealField_set_FutureFetchAmount(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqRepealField_get_FeePayFlag(PyCThostFtdcReqRepealField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.FeePayFlag), 1);
}

///费用支付标志
// TThostFtdcFeePayFlagType char
static int PyCThostFtdcReqRepealField_set_FeePayFlag(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqRepealField_get_CustFee(PyCThostFtdcReqRepealField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CustFee);
}

///应收客户费用
// TThostFtdcCustFeeType double
static int PyCThostFtdcReqRepealField_set_CustFee(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqRepealField_get_BrokerFee(PyCThostFtdcReqRepealField *self, void *closure) {
    return PyFloat_FromDouble(self->data.BrokerFee);
}

///应收期货公司费用
// TThostFtdcFutureFeeType double
static int PyCThostFtdcReqRepealField_set_BrokerFee(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqRepealField_get_Message(PyCThostFtdcReqRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Message, (Py_ssize_t)sizeof(self->data.Message));
    return PyBytes_FromString(self->data.Message);
}

///发送方给接收方的消息
// TThostFtdcAddInfoType char[129]
static int PyCThostFtdcReqRepealField_set_Message(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqRepealField_get_Digest(PyCThostFtdcReqRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Digest, (Py_ssize_t)sizeof(self->data.Digest));
    return PyBytes_FromString(self->data.Digest);
}

///摘要
// TThostFtdcDigestType char[36]
static int PyCThostFtdcReqRepealField_set_Digest(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqRepealField_get_BankAccType(PyCThostFtdcReqRepealField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BankAccType), 1);
}

///银行帐号类型
// TThostFtdcBankAccTypeType char
static int PyCThostFtdcReqRepealField_set_BankAccType(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqRepealField_get_DeviceID(PyCThostFtdcReqRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.DeviceID, (Py_ssize_t)sizeof(self->data.DeviceID));
    return PyBytes_FromString(self->data.DeviceID);
}

///渠道标志
// TThostFtdcDeviceIDType char[3]
static int PyCThostFtdcReqRepealField_set_DeviceID(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqRepealField_get_BankSecuAccType(PyCThostFtdcReqRepealField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BankSecuAccType), 1);
}

///期货单位帐号类型
// TThostFtdcBankAccTypeType char
static int PyCThostFtdcReqRepealField_set_BankSecuAccType(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqRepealField_get_BrokerIDByBank(PyCThostFtdcReqRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerIDByBank, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
    return PyBytes_FromString(self->data.BrokerIDByBank);
}

///期货公司银行编码
// TThostFtdcBankCodingForFutureType char[33]
static int PyCThostFtdcReqRepealField_set_BrokerIDByBank(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqRepealField_get_BankSecuAcc(PyCThostFtdcReqRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankSecuAcc, (Py_ssize_t)sizeof(self->data.BankSecuAcc));
    return PyBytes_FromString(self->data.BankSecuAcc);
}

///期货单位帐号
// TThostFtdcBankAccountType char[41]
static int PyCThostFtdcReqRepealField_set_BankSecuAcc(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqRepealField_get_BankPwdFlag(PyCThostFtdcReqRepealField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BankPwdFlag), 1);
}

///银行密码标志
// TThostFtdcPwdFlagType char
static int PyCThostFtdcReqRepealField_set_BankPwdFlag(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqRepealField_get_SecuPwdFlag(PyCThostFtdcReqRepealField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.SecuPwdFlag), 1);
}

///期货资金密码核对标志
// TThostFtdcPwdFlagType char
static int PyCThostFtdcReqRepealField_set_SecuPwdFlag(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqRepealField_get_OperNo(PyCThostFtdcReqRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OperNo, (Py_ssize_t)sizeof(self->data.OperNo));
    return PyBytes_FromString(self->data.OperNo);
}

///交易柜员
// TThostFtdcOperNoType char[17]
static int PyCThostFtdcReqRepealField_set_OperNo(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqRepealField_get_RequestID(PyCThostFtdcReqRepealField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcReqRepealField_set_RequestID(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqRepealField_get_TID(PyCThostFtdcReqRepealField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.TID);
#else
    return PyInt_FromLong(self->data.TID);
#endif
}

///交易ID
// TThostFtdcTIDType int
static int PyCThostFtdcReqRepealField_set_TID(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqRepealField_get_TransferStatus(PyCThostFtdcReqRepealField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.TransferStatus), 1);
}

///转账交易状态
// TThostFtdcTransferStatusType char
static int PyCThostFtdcReqRepealField_set_TransferStatus(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqRepealField_get_LongCustomerName(PyCThostFtdcReqRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.LongCustomerName, (Py_ssize_t)sizeof(self->data.LongCustomerName));
    return PyBytes_FromString(self->data.LongCustomerName);
}

///长客户姓名
// TThostFtdcLongIndividualNameType char[161]
static int PyCThostFtdcReqRepealField_set_LongCustomerName(PyCThostFtdcReqRepealField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcReqRepealField_getset[] = {
    ///冲正时间间隔 
    {(char *)"RepealTimeInterval", (getter)PyCThostFtdcReqRepealField_get_RepealTimeInterval, (setter)PyCThostFtdcReqRepealField_set_RepealTimeInterval, (char *)"RepealTimeInterval", NULL},
    ///已经冲正次数 
    {(char *)"RepealedTimes", (getter)PyCThostFtdcReqRepealField_get_RepealedTimes, (setter)PyCThostFtdcReqRepealField_set_RepealedTimes, (char *)"RepealedTimes", NULL},
    ///银行冲正标志 
    {(char *)"BankRepealFlag", (getter)PyCThostFtdcReqRepealField_get_BankRepealFlag, (setter)PyCThostFtdcReqRepealField_set_BankRepealFlag, (char *)"BankRepealFlag", NULL},
    ///期商冲正标志 
    {(char *)"BrokerRepealFlag", (getter)PyCThostFtdcReqRepealField_get_BrokerRepealFlag, (setter)PyCThostFtdcReqRepealField_set_BrokerRepealFlag, (char *)"BrokerRepealFlag", NULL},
    ///被冲正平台流水号 
    {(char *)"PlateRepealSerial", (getter)PyCThostFtdcReqRepealField_get_PlateRepealSerial, (setter)PyCThostFtdcReqRepealField_set_PlateRepealSerial, (char *)"PlateRepealSerial", NULL},
    ///被冲正银行流水号 
    {(char *)"BankRepealSerial", (getter)PyCThostFtdcReqRepealField_get_BankRepealSerial, (setter)PyCThostFtdcReqRepealField_set_BankRepealSerial, (char *)"BankRepealSerial", NULL},
    ///被冲正期货流水号 
    {(char *)"FutureRepealSerial", (getter)PyCThostFtdcReqRepealField_get_FutureRepealSerial, (setter)PyCThostFtdcReqRepealField_set_FutureRepealSerial, (char *)"FutureRepealSerial", NULL},
    ///业务功能码 
    {(char *)"TradeCode", (getter)PyCThostFtdcReqRepealField_get_TradeCode, (setter)PyCThostFtdcReqRepealField_set_TradeCode, (char *)"TradeCode", NULL},
    ///银行代码 
    {(char *)"BankID", (getter)PyCThostFtdcReqRepealField_get_BankID, (setter)PyCThostFtdcReqRepealField_set_BankID, (char *)"BankID", NULL},
    ///银行分支机构代码 
    {(char *)"BankBranchID", (getter)PyCThostFtdcReqRepealField_get_BankBranchID, (setter)PyCThostFtdcReqRepealField_set_BankBranchID, (char *)"BankBranchID", NULL},
    ///期商代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcReqRepealField_get_BrokerID, (setter)PyCThostFtdcReqRepealField_set_BrokerID, (char *)"BrokerID", NULL},
    ///期商分支机构代码 
    {(char *)"BrokerBranchID", (getter)PyCThostFtdcReqRepealField_get_BrokerBranchID, (setter)PyCThostFtdcReqRepealField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
    ///交易日期 
    {(char *)"TradeDate", (getter)PyCThostFtdcReqRepealField_get_TradeDate, (setter)PyCThostFtdcReqRepealField_set_TradeDate, (char *)"TradeDate", NULL},
    ///交易时间 
    {(char *)"TradeTime", (getter)PyCThostFtdcReqRepealField_get_TradeTime, (setter)PyCThostFtdcReqRepealField_set_TradeTime, (char *)"TradeTime", NULL},
    ///银行流水号 
    {(char *)"BankSerial", (getter)PyCThostFtdcReqRepealField_get_BankSerial, (setter)PyCThostFtdcReqRepealField_set_BankSerial, (char *)"BankSerial", NULL},
    ///交易系统日期 
    {(char *)"TradingDay", (getter)PyCThostFtdcReqRepealField_get_TradingDay, (setter)PyCThostFtdcReqRepealField_set_TradingDay, (char *)"TradingDay", NULL},
    ///银期平台消息流水号 
    {(char *)"PlateSerial", (getter)PyCThostFtdcReqRepealField_get_PlateSerial, (setter)PyCThostFtdcReqRepealField_set_PlateSerial, (char *)"PlateSerial", NULL},
    ///最后分片标志 
    {(char *)"LastFragment", (getter)PyCThostFtdcReqRepealField_get_LastFragment, (setter)PyCThostFtdcReqRepealField_set_LastFragment, (char *)"LastFragment", NULL},
    ///会话号 
    {(char *)"SessionID", (getter)PyCThostFtdcReqRepealField_get_SessionID, (setter)PyCThostFtdcReqRepealField_set_SessionID, (char *)"SessionID", NULL},
    ///客户姓名 
    {(char *)"CustomerName", (getter)PyCThostFtdcReqRepealField_get_CustomerName, (setter)PyCThostFtdcReqRepealField_set_CustomerName, (char *)"CustomerName", NULL},
    ///证件类型 
    {(char *)"IdCardType", (getter)PyCThostFtdcReqRepealField_get_IdCardType, (setter)PyCThostFtdcReqRepealField_set_IdCardType, (char *)"IdCardType", NULL},
    ///证件号码 
    {(char *)"IdentifiedCardNo", (getter)PyCThostFtdcReqRepealField_get_IdentifiedCardNo, (setter)PyCThostFtdcReqRepealField_set_IdentifiedCardNo, (char *)"IdentifiedCardNo", NULL},
    ///客户类型 
    {(char *)"CustType", (getter)PyCThostFtdcReqRepealField_get_CustType, (setter)PyCThostFtdcReqRepealField_set_CustType, (char *)"CustType", NULL},
    ///银行帐号 
    {(char *)"BankAccount", (getter)PyCThostFtdcReqRepealField_get_BankAccount, (setter)PyCThostFtdcReqRepealField_set_BankAccount, (char *)"BankAccount", NULL},
    ///银行密码 
    {(char *)"BankPassWord", (getter)PyCThostFtdcReqRepealField_get_BankPassWord, (setter)PyCThostFtdcReqRepealField_set_BankPassWord, (char *)"BankPassWord", NULL},
    ///投资者帐号 
    {(char *)"AccountID", (getter)PyCThostFtdcReqRepealField_get_AccountID, (setter)PyCThostFtdcReqRepealField_set_AccountID, (char *)"AccountID", NULL},
    ///期货密码 
    {(char *)"Password", (getter)PyCThostFtdcReqRepealField_get_Password, (setter)PyCThostFtdcReqRepealField_set_Password, (char *)"Password", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcReqRepealField_get_InstallID, (setter)PyCThostFtdcReqRepealField_set_InstallID, (char *)"InstallID", NULL},
    ///期货公司流水号 
    {(char *)"FutureSerial", (getter)PyCThostFtdcReqRepealField_get_FutureSerial, (setter)PyCThostFtdcReqRepealField_set_FutureSerial, (char *)"FutureSerial", NULL},
    ///用户标识 
    {(char *)"UserID", (getter)PyCThostFtdcReqRepealField_get_UserID, (setter)PyCThostFtdcReqRepealField_set_UserID, (char *)"UserID", NULL},
    ///验证客户证件号码标志 
    {(char *)"VerifyCertNoFlag", (getter)PyCThostFtdcReqRepealField_get_VerifyCertNoFlag, (setter)PyCThostFtdcReqRepealField_set_VerifyCertNoFlag, (char *)"VerifyCertNoFlag", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcReqRepealField_get_CurrencyID, (setter)PyCThostFtdcReqRepealField_set_CurrencyID, (char *)"CurrencyID", NULL},
    ///转帐金额 
    {(char *)"TradeAmount", (getter)PyCThostFtdcReqRepealField_get_TradeAmount, (setter)PyCThostFtdcReqRepealField_set_TradeAmount, (char *)"TradeAmount", NULL},
    ///期货可取金额 
    {(char *)"FutureFetchAmount", (getter)PyCThostFtdcReqRepealField_get_FutureFetchAmount, (setter)PyCThostFtdcReqRepealField_set_FutureFetchAmount, (char *)"FutureFetchAmount", NULL},
    ///费用支付标志 
    {(char *)"FeePayFlag", (getter)PyCThostFtdcReqRepealField_get_FeePayFlag, (setter)PyCThostFtdcReqRepealField_set_FeePayFlag, (char *)"FeePayFlag", NULL},
    ///应收客户费用 
    {(char *)"CustFee", (getter)PyCThostFtdcReqRepealField_get_CustFee, (setter)PyCThostFtdcReqRepealField_set_CustFee, (char *)"CustFee", NULL},
    ///应收期货公司费用 
    {(char *)"BrokerFee", (getter)PyCThostFtdcReqRepealField_get_BrokerFee, (setter)PyCThostFtdcReqRepealField_set_BrokerFee, (char *)"BrokerFee", NULL},
    ///发送方给接收方的消息 
    {(char *)"Message", (getter)PyCThostFtdcReqRepealField_get_Message, (setter)PyCThostFtdcReqRepealField_set_Message, (char *)"Message", NULL},
    ///摘要 
    {(char *)"Digest", (getter)PyCThostFtdcReqRepealField_get_Digest, (setter)PyCThostFtdcReqRepealField_set_Digest, (char *)"Digest", NULL},
    ///银行帐号类型 
    {(char *)"BankAccType", (getter)PyCThostFtdcReqRepealField_get_BankAccType, (setter)PyCThostFtdcReqRepealField_set_BankAccType, (char *)"BankAccType", NULL},
    ///渠道标志 
    {(char *)"DeviceID", (getter)PyCThostFtdcReqRepealField_get_DeviceID, (setter)PyCThostFtdcReqRepealField_set_DeviceID, (char *)"DeviceID", NULL},
    ///期货单位帐号类型 
    {(char *)"BankSecuAccType", (getter)PyCThostFtdcReqRepealField_get_BankSecuAccType, (setter)PyCThostFtdcReqRepealField_set_BankSecuAccType, (char *)"BankSecuAccType", NULL},
    ///期货公司银行编码 
    {(char *)"BrokerIDByBank", (getter)PyCThostFtdcReqRepealField_get_BrokerIDByBank, (setter)PyCThostFtdcReqRepealField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
    ///期货单位帐号 
    {(char *)"BankSecuAcc", (getter)PyCThostFtdcReqRepealField_get_BankSecuAcc, (setter)PyCThostFtdcReqRepealField_set_BankSecuAcc, (char *)"BankSecuAcc", NULL},
    ///银行密码标志 
    {(char *)"BankPwdFlag", (getter)PyCThostFtdcReqRepealField_get_BankPwdFlag, (setter)PyCThostFtdcReqRepealField_set_BankPwdFlag, (char *)"BankPwdFlag", NULL},
    ///期货资金密码核对标志 
    {(char *)"SecuPwdFlag", (getter)PyCThostFtdcReqRepealField_get_SecuPwdFlag, (setter)PyCThostFtdcReqRepealField_set_SecuPwdFlag, (char *)"SecuPwdFlag", NULL},
    ///交易柜员 
    {(char *)"OperNo", (getter)PyCThostFtdcReqRepealField_get_OperNo, (setter)PyCThostFtdcReqRepealField_set_OperNo, (char *)"OperNo", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcReqRepealField_get_RequestID, (setter)PyCThostFtdcReqRepealField_set_RequestID, (char *)"RequestID", NULL},
    ///交易ID 
    {(char *)"TID", (getter)PyCThostFtdcReqRepealField_get_TID, (setter)PyCThostFtdcReqRepealField_set_TID, (char *)"TID", NULL},
    ///转账交易状态 
    {(char *)"TransferStatus", (getter)PyCThostFtdcReqRepealField_get_TransferStatus, (setter)PyCThostFtdcReqRepealField_set_TransferStatus, (char *)"TransferStatus", NULL},
    ///长客户姓名 
    {(char *)"LongCustomerName", (getter)PyCThostFtdcReqRepealField_get_LongCustomerName, (setter)PyCThostFtdcReqRepealField_set_LongCustomerName, (char *)"LongCustomerName", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcReqRepealFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcReqRepealField",	/* tp_name */
	sizeof(PyCThostFtdcReqRepealField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcReqRepealField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcReqRepealField_repr,   /* tp_repr */
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
	"CThostFtdcReqRepealField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcReqRepealField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcReqRepealField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcReqRepealField_new,       /* tp_new */
};

int PyCThostFtdcReqRepealFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcReqRepealField  */
	if (PyType_Ready(&PyCThostFtdcReqRepealFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcReqRepealField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcReqRepealFieldType);
    if( PyModule_AddObject(module, "CThostFtdcReqRepealField", (PyObject *)&PyCThostFtdcReqRepealFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqRepealField to module");
        Py_DECREF(&PyCThostFtdcReqRepealFieldType);
		return -1;
    }

    return 0;
}
