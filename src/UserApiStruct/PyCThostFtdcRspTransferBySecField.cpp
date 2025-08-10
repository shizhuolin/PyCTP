
#include "PyCThostFtdcRspTransferBySecField.h"

///次中心发起的转帐交易回报

static PyObject *PyCThostFtdcRspTransferBySecField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRspTransferBySecField *self = (PyCThostFtdcRspTransferBySecField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcRspTransferBySecField_init(PyCThostFtdcRspTransferBySecField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "CustType", "BankAccount", "BankPassWord", "AccountID", "Password", "InstallID", "FutureSerial", "UserID", "VerifyCertNoFlag", "CurrencyID", "TradeAmount", "FutureFetchAmount", "FeePayFlag", "CustFee", "BrokerFee", "Message", "Digest", "BankAccType", "DeviceID", "BankSecuAccType", "BrokerIDByBank", "BankSecuAcc", "BankPwdFlag", "SecuPwdFlag", "OperNo", "RequestID", "TID", "TransferStatus", "ErrorID", "ErrorMsg", "LongCustomerName", "DRIdentityID", "SecFutureSerial",  NULL};


    ///业务功能码
    // TThostFtdcTradeCodeType char[7]
    const char *RspTransferBySecField_TradeCode = NULL;
    Py_ssize_t RspTransferBySecField_TradeCode_len = 0;
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    const char *RspTransferBySecField_BankID = NULL;
    Py_ssize_t RspTransferBySecField_BankID_len = 0;
            
    ///银行分支机构代码
    // TThostFtdcBankBrchIDType char[5]
    const char *RspTransferBySecField_BankBranchID = NULL;
    Py_ssize_t RspTransferBySecField_BankBranchID_len = 0;
            
    ///期商代码
    // TThostFtdcBrokerIDType char[11]
    const char *RspTransferBySecField_BrokerID = NULL;
    Py_ssize_t RspTransferBySecField_BrokerID_len = 0;
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    const char *RspTransferBySecField_BrokerBranchID = NULL;
    Py_ssize_t RspTransferBySecField_BrokerBranchID_len = 0;
            
    ///交易日期
    // TThostFtdcTradeDateType char[9]
    const char *RspTransferBySecField_TradeDate = NULL;
    Py_ssize_t RspTransferBySecField_TradeDate_len = 0;
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    const char *RspTransferBySecField_TradeTime = NULL;
    Py_ssize_t RspTransferBySecField_TradeTime_len = 0;
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    const char *RspTransferBySecField_BankSerial = NULL;
    Py_ssize_t RspTransferBySecField_BankSerial_len = 0;
            
    ///交易系统日期
    // TThostFtdcTradeDateType char[9]
    const char *RspTransferBySecField_TradingDay = NULL;
    Py_ssize_t RspTransferBySecField_TradingDay_len = 0;
            
    ///银期平台消息流水号
    // TThostFtdcSerialType int
    int RspTransferBySecField_PlateSerial = 0;
        
    ///最后分片标志
    // TThostFtdcLastFragmentType char
    char RspTransferBySecField_LastFragment = 0;
            
    ///会话号
    // TThostFtdcSessionIDType int
    int RspTransferBySecField_SessionID = 0;
        
    ///客户姓名
    // TThostFtdcIndividualNameType char[51]
    const char *RspTransferBySecField_CustomerName = NULL;
    Py_ssize_t RspTransferBySecField_CustomerName_len = 0;
            
    ///证件类型
    // TThostFtdcIdCardTypeType char
    char RspTransferBySecField_IdCardType = 0;
            
    ///证件号码
    // TThostFtdcIdentifiedCardNoType char[51]
    const char *RspTransferBySecField_IdentifiedCardNo = NULL;
    Py_ssize_t RspTransferBySecField_IdentifiedCardNo_len = 0;
            
    ///客户类型
    // TThostFtdcCustTypeType char
    char RspTransferBySecField_CustType = 0;
            
    ///银行帐号
    // TThostFtdcBankAccountType char[41]
    const char *RspTransferBySecField_BankAccount = NULL;
    Py_ssize_t RspTransferBySecField_BankAccount_len = 0;
            
    ///银行密码
    // TThostFtdcPasswordType char[41]
    const char *RspTransferBySecField_BankPassWord = NULL;
    Py_ssize_t RspTransferBySecField_BankPassWord_len = 0;
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    const char *RspTransferBySecField_AccountID = NULL;
    Py_ssize_t RspTransferBySecField_AccountID_len = 0;
            
    ///期货密码
    // TThostFtdcPasswordType char[41]
    const char *RspTransferBySecField_Password = NULL;
    Py_ssize_t RspTransferBySecField_Password_len = 0;
            
    ///安装编号
    // TThostFtdcInstallIDType int
    int RspTransferBySecField_InstallID = 0;
        
    ///期货公司流水号
    // TThostFtdcFutureSerialType int
    int RspTransferBySecField_FutureSerial = 0;
        
    ///用户标识
    // TThostFtdcUserIDType char[16]
    const char *RspTransferBySecField_UserID = NULL;
    Py_ssize_t RspTransferBySecField_UserID_len = 0;
            
    ///验证客户证件号码标志
    // TThostFtdcYesNoIndicatorType char
    char RspTransferBySecField_VerifyCertNoFlag = 0;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *RspTransferBySecField_CurrencyID = NULL;
    Py_ssize_t RspTransferBySecField_CurrencyID_len = 0;
            
    ///转帐金额
    // TThostFtdcTradeAmountType double
    double RspTransferBySecField_TradeAmount = 0.0;
        
    ///期货可取金额
    // TThostFtdcTradeAmountType double
    double RspTransferBySecField_FutureFetchAmount = 0.0;
        
    ///费用支付标志
    // TThostFtdcFeePayFlagType char
    char RspTransferBySecField_FeePayFlag = 0;
            
    ///应收客户费用
    // TThostFtdcCustFeeType double
    double RspTransferBySecField_CustFee = 0.0;
        
    ///应收期货公司费用
    // TThostFtdcFutureFeeType double
    double RspTransferBySecField_BrokerFee = 0.0;
        
    ///发送方给接收方的消息
    // TThostFtdcAddInfoType char[129]
    const char *RspTransferBySecField_Message = NULL;
    Py_ssize_t RspTransferBySecField_Message_len = 0;
            
    ///摘要
    // TThostFtdcDigestType char[36]
    const char *RspTransferBySecField_Digest = NULL;
    Py_ssize_t RspTransferBySecField_Digest_len = 0;
            
    ///银行帐号类型
    // TThostFtdcBankAccTypeType char
    char RspTransferBySecField_BankAccType = 0;
            
    ///渠道标志
    // TThostFtdcDeviceIDType char[3]
    const char *RspTransferBySecField_DeviceID = NULL;
    Py_ssize_t RspTransferBySecField_DeviceID_len = 0;
            
    ///期货单位帐号类型
    // TThostFtdcBankAccTypeType char
    char RspTransferBySecField_BankSecuAccType = 0;
            
    ///期货公司银行编码
    // TThostFtdcBankCodingForFutureType char[33]
    const char *RspTransferBySecField_BrokerIDByBank = NULL;
    Py_ssize_t RspTransferBySecField_BrokerIDByBank_len = 0;
            
    ///期货单位帐号
    // TThostFtdcBankAccountType char[41]
    const char *RspTransferBySecField_BankSecuAcc = NULL;
    Py_ssize_t RspTransferBySecField_BankSecuAcc_len = 0;
            
    ///银行密码标志
    // TThostFtdcPwdFlagType char
    char RspTransferBySecField_BankPwdFlag = 0;
            
    ///期货资金密码核对标志
    // TThostFtdcPwdFlagType char
    char RspTransferBySecField_SecuPwdFlag = 0;
            
    ///交易柜员
    // TThostFtdcOperNoType char[17]
    const char *RspTransferBySecField_OperNo = NULL;
    Py_ssize_t RspTransferBySecField_OperNo_len = 0;
            
    ///请求编号
    // TThostFtdcRequestIDType int
    int RspTransferBySecField_RequestID = 0;
        
    ///交易ID
    // TThostFtdcTIDType int
    int RspTransferBySecField_TID = 0;
        
    ///转账交易状态
    // TThostFtdcTransferStatusType char
    char RspTransferBySecField_TransferStatus = 0;
            
    ///错误代码
    // TThostFtdcErrorIDType int
    int RspTransferBySecField_ErrorID = 0;
        
    ///错误信息
    // TThostFtdcErrorMsgType char[81]
    const char *RspTransferBySecField_ErrorMsg = NULL;
    Py_ssize_t RspTransferBySecField_ErrorMsg_len = 0;
            
    ///长客户姓名
    // TThostFtdcLongIndividualNameType char[161]
    const char *RspTransferBySecField_LongCustomerName = NULL;
    Py_ssize_t RspTransferBySecField_LongCustomerName_len = 0;
            
    ///交易中心代码
    // TThostFtdcDRIdentityIDType int
    int RspTransferBySecField_DRIdentityID = 0;
        
    ///次中心发起转账期货公司流水号
    // TThostFtdcFutureSerialType int
    int RspTransferBySecField_SecFutureSerial = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciy#cy#cy#y#y#y#iiy#cy#ddcddy#y#cy#cy#y#ccy#iiciy#y#ii", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#icis#cs#cs#s#s#s#iis#cs#ddcdds#s#cs#cs#s#ccs#iicis#s#ii", (char **)kwlist
#endif

        , &RspTransferBySecField_TradeCode, &RspTransferBySecField_TradeCode_len 
        , &RspTransferBySecField_BankID, &RspTransferBySecField_BankID_len 
        , &RspTransferBySecField_BankBranchID, &RspTransferBySecField_BankBranchID_len 
        , &RspTransferBySecField_BrokerID, &RspTransferBySecField_BrokerID_len 
        , &RspTransferBySecField_BrokerBranchID, &RspTransferBySecField_BrokerBranchID_len 
        , &RspTransferBySecField_TradeDate, &RspTransferBySecField_TradeDate_len 
        , &RspTransferBySecField_TradeTime, &RspTransferBySecField_TradeTime_len 
        , &RspTransferBySecField_BankSerial, &RspTransferBySecField_BankSerial_len 
        , &RspTransferBySecField_TradingDay, &RspTransferBySecField_TradingDay_len 
        , &RspTransferBySecField_PlateSerial 
        , &RspTransferBySecField_LastFragment 
        , &RspTransferBySecField_SessionID 
        , &RspTransferBySecField_CustomerName, &RspTransferBySecField_CustomerName_len 
        , &RspTransferBySecField_IdCardType 
        , &RspTransferBySecField_IdentifiedCardNo, &RspTransferBySecField_IdentifiedCardNo_len 
        , &RspTransferBySecField_CustType 
        , &RspTransferBySecField_BankAccount, &RspTransferBySecField_BankAccount_len 
        , &RspTransferBySecField_BankPassWord, &RspTransferBySecField_BankPassWord_len 
        , &RspTransferBySecField_AccountID, &RspTransferBySecField_AccountID_len 
        , &RspTransferBySecField_Password, &RspTransferBySecField_Password_len 
        , &RspTransferBySecField_InstallID 
        , &RspTransferBySecField_FutureSerial 
        , &RspTransferBySecField_UserID, &RspTransferBySecField_UserID_len 
        , &RspTransferBySecField_VerifyCertNoFlag 
        , &RspTransferBySecField_CurrencyID, &RspTransferBySecField_CurrencyID_len 
        , &RspTransferBySecField_TradeAmount 
        , &RspTransferBySecField_FutureFetchAmount 
        , &RspTransferBySecField_FeePayFlag 
        , &RspTransferBySecField_CustFee 
        , &RspTransferBySecField_BrokerFee 
        , &RspTransferBySecField_Message, &RspTransferBySecField_Message_len 
        , &RspTransferBySecField_Digest, &RspTransferBySecField_Digest_len 
        , &RspTransferBySecField_BankAccType 
        , &RspTransferBySecField_DeviceID, &RspTransferBySecField_DeviceID_len 
        , &RspTransferBySecField_BankSecuAccType 
        , &RspTransferBySecField_BrokerIDByBank, &RspTransferBySecField_BrokerIDByBank_len 
        , &RspTransferBySecField_BankSecuAcc, &RspTransferBySecField_BankSecuAcc_len 
        , &RspTransferBySecField_BankPwdFlag 
        , &RspTransferBySecField_SecuPwdFlag 
        , &RspTransferBySecField_OperNo, &RspTransferBySecField_OperNo_len 
        , &RspTransferBySecField_RequestID 
        , &RspTransferBySecField_TID 
        , &RspTransferBySecField_TransferStatus 
        , &RspTransferBySecField_ErrorID 
        , &RspTransferBySecField_ErrorMsg, &RspTransferBySecField_ErrorMsg_len 
        , &RspTransferBySecField_LongCustomerName, &RspTransferBySecField_LongCustomerName_len 
        , &RspTransferBySecField_DRIdentityID 
        , &RspTransferBySecField_SecFutureSerial 


    )) {
        return -1;
    }


    ///业务功能码
    // TThostFtdcTradeCodeType char[7]
    if( RspTransferBySecField_TradeCode != NULL ) {
        if(RspTransferBySecField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", RspTransferBySecField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
            return -1;
        }
        // memset(self->data.TradeCode, 0, sizeof(self->data.TradeCode));
        // memcpy(self->data.TradeCode, RspTransferBySecField_TradeCode, RspTransferBySecField_TradeCode_len);        
        strncpy(self->data.TradeCode, RspTransferBySecField_TradeCode, sizeof(self->data.TradeCode) );
        RspTransferBySecField_TradeCode = NULL;
    }
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    if( RspTransferBySecField_BankID != NULL ) {
        if(RspTransferBySecField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", RspTransferBySecField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
            return -1;
        }
        // memset(self->data.BankID, 0, sizeof(self->data.BankID));
        // memcpy(self->data.BankID, RspTransferBySecField_BankID, RspTransferBySecField_BankID_len);        
        strncpy(self->data.BankID, RspTransferBySecField_BankID, sizeof(self->data.BankID) );
        RspTransferBySecField_BankID = NULL;
    }
            
    ///银行分支机构代码
    // TThostFtdcBankBrchIDType char[5]
    if( RspTransferBySecField_BankBranchID != NULL ) {
        if(RspTransferBySecField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", RspTransferBySecField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
            return -1;
        }
        // memset(self->data.BankBranchID, 0, sizeof(self->data.BankBranchID));
        // memcpy(self->data.BankBranchID, RspTransferBySecField_BankBranchID, RspTransferBySecField_BankBranchID_len);        
        strncpy(self->data.BankBranchID, RspTransferBySecField_BankBranchID, sizeof(self->data.BankBranchID) );
        RspTransferBySecField_BankBranchID = NULL;
    }
            
    ///期商代码
    // TThostFtdcBrokerIDType char[11]
    if( RspTransferBySecField_BrokerID != NULL ) {
        if(RspTransferBySecField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", RspTransferBySecField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, RspTransferBySecField_BrokerID, RspTransferBySecField_BrokerID_len);        
        strncpy(self->data.BrokerID, RspTransferBySecField_BrokerID, sizeof(self->data.BrokerID) );
        RspTransferBySecField_BrokerID = NULL;
    }
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    if( RspTransferBySecField_BrokerBranchID != NULL ) {
        if(RspTransferBySecField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", RspTransferBySecField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
            return -1;
        }
        // memset(self->data.BrokerBranchID, 0, sizeof(self->data.BrokerBranchID));
        // memcpy(self->data.BrokerBranchID, RspTransferBySecField_BrokerBranchID, RspTransferBySecField_BrokerBranchID_len);        
        strncpy(self->data.BrokerBranchID, RspTransferBySecField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
        RspTransferBySecField_BrokerBranchID = NULL;
    }
            
    ///交易日期
    // TThostFtdcTradeDateType char[9]
    if( RspTransferBySecField_TradeDate != NULL ) {
        if(RspTransferBySecField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", RspTransferBySecField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
            return -1;
        }
        // memset(self->data.TradeDate, 0, sizeof(self->data.TradeDate));
        // memcpy(self->data.TradeDate, RspTransferBySecField_TradeDate, RspTransferBySecField_TradeDate_len);        
        strncpy(self->data.TradeDate, RspTransferBySecField_TradeDate, sizeof(self->data.TradeDate) );
        RspTransferBySecField_TradeDate = NULL;
    }
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    if( RspTransferBySecField_TradeTime != NULL ) {
        if(RspTransferBySecField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", RspTransferBySecField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
            return -1;
        }
        // memset(self->data.TradeTime, 0, sizeof(self->data.TradeTime));
        // memcpy(self->data.TradeTime, RspTransferBySecField_TradeTime, RspTransferBySecField_TradeTime_len);        
        strncpy(self->data.TradeTime, RspTransferBySecField_TradeTime, sizeof(self->data.TradeTime) );
        RspTransferBySecField_TradeTime = NULL;
    }
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    if( RspTransferBySecField_BankSerial != NULL ) {
        if(RspTransferBySecField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", RspTransferBySecField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
            return -1;
        }
        // memset(self->data.BankSerial, 0, sizeof(self->data.BankSerial));
        // memcpy(self->data.BankSerial, RspTransferBySecField_BankSerial, RspTransferBySecField_BankSerial_len);        
        strncpy(self->data.BankSerial, RspTransferBySecField_BankSerial, sizeof(self->data.BankSerial) );
        RspTransferBySecField_BankSerial = NULL;
    }
            
    ///交易系统日期
    // TThostFtdcTradeDateType char[9]
    if( RspTransferBySecField_TradingDay != NULL ) {
        if(RspTransferBySecField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", RspTransferBySecField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, RspTransferBySecField_TradingDay, RspTransferBySecField_TradingDay_len);        
        strncpy(self->data.TradingDay, RspTransferBySecField_TradingDay, sizeof(self->data.TradingDay) );
        RspTransferBySecField_TradingDay = NULL;
    }
            
    ///银期平台消息流水号
    // TThostFtdcSerialType int
    self->data.PlateSerial = RspTransferBySecField_PlateSerial;
        
    ///最后分片标志
    // TThostFtdcLastFragmentType char
    self->data.LastFragment = RspTransferBySecField_LastFragment;
            
    ///会话号
    // TThostFtdcSessionIDType int
    self->data.SessionID = RspTransferBySecField_SessionID;
        
    ///客户姓名
    // TThostFtdcIndividualNameType char[51]
    if( RspTransferBySecField_CustomerName != NULL ) {
        if(RspTransferBySecField_CustomerName_len > (Py_ssize_t)sizeof(self->data.CustomerName)) {
            PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is %zd)", RspTransferBySecField_CustomerName_len, (Py_ssize_t)sizeof(self->data.CustomerName));
            return -1;
        }
        // memset(self->data.CustomerName, 0, sizeof(self->data.CustomerName));
        // memcpy(self->data.CustomerName, RspTransferBySecField_CustomerName, RspTransferBySecField_CustomerName_len);        
        strncpy(self->data.CustomerName, RspTransferBySecField_CustomerName, sizeof(self->data.CustomerName) );
        RspTransferBySecField_CustomerName = NULL;
    }
            
    ///证件类型
    // TThostFtdcIdCardTypeType char
    self->data.IdCardType = RspTransferBySecField_IdCardType;
            
    ///证件号码
    // TThostFtdcIdentifiedCardNoType char[51]
    if( RspTransferBySecField_IdentifiedCardNo != NULL ) {
        if(RspTransferBySecField_IdentifiedCardNo_len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
            PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is %zd)", RspTransferBySecField_IdentifiedCardNo_len, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
            return -1;
        }
        // memset(self->data.IdentifiedCardNo, 0, sizeof(self->data.IdentifiedCardNo));
        // memcpy(self->data.IdentifiedCardNo, RspTransferBySecField_IdentifiedCardNo, RspTransferBySecField_IdentifiedCardNo_len);        
        strncpy(self->data.IdentifiedCardNo, RspTransferBySecField_IdentifiedCardNo, sizeof(self->data.IdentifiedCardNo) );
        RspTransferBySecField_IdentifiedCardNo = NULL;
    }
            
    ///客户类型
    // TThostFtdcCustTypeType char
    self->data.CustType = RspTransferBySecField_CustType;
            
    ///银行帐号
    // TThostFtdcBankAccountType char[41]
    if( RspTransferBySecField_BankAccount != NULL ) {
        if(RspTransferBySecField_BankAccount_len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
            PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is %zd)", RspTransferBySecField_BankAccount_len, (Py_ssize_t)sizeof(self->data.BankAccount));
            return -1;
        }
        // memset(self->data.BankAccount, 0, sizeof(self->data.BankAccount));
        // memcpy(self->data.BankAccount, RspTransferBySecField_BankAccount, RspTransferBySecField_BankAccount_len);        
        strncpy(self->data.BankAccount, RspTransferBySecField_BankAccount, sizeof(self->data.BankAccount) );
        RspTransferBySecField_BankAccount = NULL;
    }
            
    ///银行密码
    // TThostFtdcPasswordType char[41]
    if( RspTransferBySecField_BankPassWord != NULL ) {
        if(RspTransferBySecField_BankPassWord_len > (Py_ssize_t)sizeof(self->data.BankPassWord)) {
            PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is %zd)", RspTransferBySecField_BankPassWord_len, (Py_ssize_t)sizeof(self->data.BankPassWord));
            return -1;
        }
        // memset(self->data.BankPassWord, 0, sizeof(self->data.BankPassWord));
        // memcpy(self->data.BankPassWord, RspTransferBySecField_BankPassWord, RspTransferBySecField_BankPassWord_len);        
        strncpy(self->data.BankPassWord, RspTransferBySecField_BankPassWord, sizeof(self->data.BankPassWord) );
        RspTransferBySecField_BankPassWord = NULL;
    }
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    if( RspTransferBySecField_AccountID != NULL ) {
        if(RspTransferBySecField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", RspTransferBySecField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
            return -1;
        }
        // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
        // memcpy(self->data.AccountID, RspTransferBySecField_AccountID, RspTransferBySecField_AccountID_len);        
        strncpy(self->data.AccountID, RspTransferBySecField_AccountID, sizeof(self->data.AccountID) );
        RspTransferBySecField_AccountID = NULL;
    }
            
    ///期货密码
    // TThostFtdcPasswordType char[41]
    if( RspTransferBySecField_Password != NULL ) {
        if(RspTransferBySecField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", RspTransferBySecField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
            return -1;
        }
        // memset(self->data.Password, 0, sizeof(self->data.Password));
        // memcpy(self->data.Password, RspTransferBySecField_Password, RspTransferBySecField_Password_len);        
        strncpy(self->data.Password, RspTransferBySecField_Password, sizeof(self->data.Password) );
        RspTransferBySecField_Password = NULL;
    }
            
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = RspTransferBySecField_InstallID;
        
    ///期货公司流水号
    // TThostFtdcFutureSerialType int
    self->data.FutureSerial = RspTransferBySecField_FutureSerial;
        
    ///用户标识
    // TThostFtdcUserIDType char[16]
    if( RspTransferBySecField_UserID != NULL ) {
        if(RspTransferBySecField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", RspTransferBySecField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, RspTransferBySecField_UserID, RspTransferBySecField_UserID_len);        
        strncpy(self->data.UserID, RspTransferBySecField_UserID, sizeof(self->data.UserID) );
        RspTransferBySecField_UserID = NULL;
    }
            
    ///验证客户证件号码标志
    // TThostFtdcYesNoIndicatorType char
    self->data.VerifyCertNoFlag = RspTransferBySecField_VerifyCertNoFlag;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( RspTransferBySecField_CurrencyID != NULL ) {
        if(RspTransferBySecField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", RspTransferBySecField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, RspTransferBySecField_CurrencyID, RspTransferBySecField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, RspTransferBySecField_CurrencyID, sizeof(self->data.CurrencyID) );
        RspTransferBySecField_CurrencyID = NULL;
    }
            
    ///转帐金额
    // TThostFtdcTradeAmountType double
    self->data.TradeAmount = RspTransferBySecField_TradeAmount;
        
    ///期货可取金额
    // TThostFtdcTradeAmountType double
    self->data.FutureFetchAmount = RspTransferBySecField_FutureFetchAmount;
        
    ///费用支付标志
    // TThostFtdcFeePayFlagType char
    self->data.FeePayFlag = RspTransferBySecField_FeePayFlag;
            
    ///应收客户费用
    // TThostFtdcCustFeeType double
    self->data.CustFee = RspTransferBySecField_CustFee;
        
    ///应收期货公司费用
    // TThostFtdcFutureFeeType double
    self->data.BrokerFee = RspTransferBySecField_BrokerFee;
        
    ///发送方给接收方的消息
    // TThostFtdcAddInfoType char[129]
    if( RspTransferBySecField_Message != NULL ) {
        if(RspTransferBySecField_Message_len > (Py_ssize_t)sizeof(self->data.Message)) {
            PyErr_Format(PyExc_ValueError, "Message too long: length=%zd (max allowed is %zd)", RspTransferBySecField_Message_len, (Py_ssize_t)sizeof(self->data.Message));
            return -1;
        }
        // memset(self->data.Message, 0, sizeof(self->data.Message));
        // memcpy(self->data.Message, RspTransferBySecField_Message, RspTransferBySecField_Message_len);        
        strncpy(self->data.Message, RspTransferBySecField_Message, sizeof(self->data.Message) );
        RspTransferBySecField_Message = NULL;
    }
            
    ///摘要
    // TThostFtdcDigestType char[36]
    if( RspTransferBySecField_Digest != NULL ) {
        if(RspTransferBySecField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
            PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", RspTransferBySecField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
            return -1;
        }
        // memset(self->data.Digest, 0, sizeof(self->data.Digest));
        // memcpy(self->data.Digest, RspTransferBySecField_Digest, RspTransferBySecField_Digest_len);        
        strncpy(self->data.Digest, RspTransferBySecField_Digest, sizeof(self->data.Digest) );
        RspTransferBySecField_Digest = NULL;
    }
            
    ///银行帐号类型
    // TThostFtdcBankAccTypeType char
    self->data.BankAccType = RspTransferBySecField_BankAccType;
            
    ///渠道标志
    // TThostFtdcDeviceIDType char[3]
    if( RspTransferBySecField_DeviceID != NULL ) {
        if(RspTransferBySecField_DeviceID_len > (Py_ssize_t)sizeof(self->data.DeviceID)) {
            PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is %zd)", RspTransferBySecField_DeviceID_len, (Py_ssize_t)sizeof(self->data.DeviceID));
            return -1;
        }
        // memset(self->data.DeviceID, 0, sizeof(self->data.DeviceID));
        // memcpy(self->data.DeviceID, RspTransferBySecField_DeviceID, RspTransferBySecField_DeviceID_len);        
        strncpy(self->data.DeviceID, RspTransferBySecField_DeviceID, sizeof(self->data.DeviceID) );
        RspTransferBySecField_DeviceID = NULL;
    }
            
    ///期货单位帐号类型
    // TThostFtdcBankAccTypeType char
    self->data.BankSecuAccType = RspTransferBySecField_BankSecuAccType;
            
    ///期货公司银行编码
    // TThostFtdcBankCodingForFutureType char[33]
    if( RspTransferBySecField_BrokerIDByBank != NULL ) {
        if(RspTransferBySecField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
            PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", RspTransferBySecField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
            return -1;
        }
        // memset(self->data.BrokerIDByBank, 0, sizeof(self->data.BrokerIDByBank));
        // memcpy(self->data.BrokerIDByBank, RspTransferBySecField_BrokerIDByBank, RspTransferBySecField_BrokerIDByBank_len);        
        strncpy(self->data.BrokerIDByBank, RspTransferBySecField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
        RspTransferBySecField_BrokerIDByBank = NULL;
    }
            
    ///期货单位帐号
    // TThostFtdcBankAccountType char[41]
    if( RspTransferBySecField_BankSecuAcc != NULL ) {
        if(RspTransferBySecField_BankSecuAcc_len > (Py_ssize_t)sizeof(self->data.BankSecuAcc)) {
            PyErr_Format(PyExc_ValueError, "BankSecuAcc too long: length=%zd (max allowed is %zd)", RspTransferBySecField_BankSecuAcc_len, (Py_ssize_t)sizeof(self->data.BankSecuAcc));
            return -1;
        }
        // memset(self->data.BankSecuAcc, 0, sizeof(self->data.BankSecuAcc));
        // memcpy(self->data.BankSecuAcc, RspTransferBySecField_BankSecuAcc, RspTransferBySecField_BankSecuAcc_len);        
        strncpy(self->data.BankSecuAcc, RspTransferBySecField_BankSecuAcc, sizeof(self->data.BankSecuAcc) );
        RspTransferBySecField_BankSecuAcc = NULL;
    }
            
    ///银行密码标志
    // TThostFtdcPwdFlagType char
    self->data.BankPwdFlag = RspTransferBySecField_BankPwdFlag;
            
    ///期货资金密码核对标志
    // TThostFtdcPwdFlagType char
    self->data.SecuPwdFlag = RspTransferBySecField_SecuPwdFlag;
            
    ///交易柜员
    // TThostFtdcOperNoType char[17]
    if( RspTransferBySecField_OperNo != NULL ) {
        if(RspTransferBySecField_OperNo_len > (Py_ssize_t)sizeof(self->data.OperNo)) {
            PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is %zd)", RspTransferBySecField_OperNo_len, (Py_ssize_t)sizeof(self->data.OperNo));
            return -1;
        }
        // memset(self->data.OperNo, 0, sizeof(self->data.OperNo));
        // memcpy(self->data.OperNo, RspTransferBySecField_OperNo, RspTransferBySecField_OperNo_len);        
        strncpy(self->data.OperNo, RspTransferBySecField_OperNo, sizeof(self->data.OperNo) );
        RspTransferBySecField_OperNo = NULL;
    }
            
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = RspTransferBySecField_RequestID;
        
    ///交易ID
    // TThostFtdcTIDType int
    self->data.TID = RspTransferBySecField_TID;
        
    ///转账交易状态
    // TThostFtdcTransferStatusType char
    self->data.TransferStatus = RspTransferBySecField_TransferStatus;
            
    ///错误代码
    // TThostFtdcErrorIDType int
    self->data.ErrorID = RspTransferBySecField_ErrorID;
        
    ///错误信息
    // TThostFtdcErrorMsgType char[81]
    if( RspTransferBySecField_ErrorMsg != NULL ) {
        if(RspTransferBySecField_ErrorMsg_len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
            PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is %zd)", RspTransferBySecField_ErrorMsg_len, (Py_ssize_t)sizeof(self->data.ErrorMsg));
            return -1;
        }
        // memset(self->data.ErrorMsg, 0, sizeof(self->data.ErrorMsg));
        // memcpy(self->data.ErrorMsg, RspTransferBySecField_ErrorMsg, RspTransferBySecField_ErrorMsg_len);        
        strncpy(self->data.ErrorMsg, RspTransferBySecField_ErrorMsg, sizeof(self->data.ErrorMsg) );
        RspTransferBySecField_ErrorMsg = NULL;
    }
            
    ///长客户姓名
    // TThostFtdcLongIndividualNameType char[161]
    if( RspTransferBySecField_LongCustomerName != NULL ) {
        if(RspTransferBySecField_LongCustomerName_len > (Py_ssize_t)sizeof(self->data.LongCustomerName)) {
            PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is %zd)", RspTransferBySecField_LongCustomerName_len, (Py_ssize_t)sizeof(self->data.LongCustomerName));
            return -1;
        }
        // memset(self->data.LongCustomerName, 0, sizeof(self->data.LongCustomerName));
        // memcpy(self->data.LongCustomerName, RspTransferBySecField_LongCustomerName, RspTransferBySecField_LongCustomerName_len);        
        strncpy(self->data.LongCustomerName, RspTransferBySecField_LongCustomerName, sizeof(self->data.LongCustomerName) );
        RspTransferBySecField_LongCustomerName = NULL;
    }
            
    ///交易中心代码
    // TThostFtdcDRIdentityIDType int
    self->data.DRIdentityID = RspTransferBySecField_DRIdentityID;
        
    ///次中心发起转账期货公司流水号
    // TThostFtdcFutureSerialType int
    self->data.SecFutureSerial = RspTransferBySecField_SecFutureSerial;
        

    return 0;
}

static void PyCThostFtdcRspTransferBySecField_dealloc(PyCThostFtdcRspTransferBySecField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRspTransferBySecField_repr(PyCThostFtdcRspTransferBySecField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:c,s:y,s:d,s:d,s:c,s:d,s:d,s:y,s:y,s:c,s:y,s:c,s:y,s:y,s:c,s:c,s:y,s:i,s:i,s:c,s:i,s:y,s:y,s:i,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:c,s:s,s:c,s:s,s:s,s:s,s:s,s:i,s:i,s:s,s:c,s:s,s:d,s:d,s:c,s:d,s:d,s:s,s:s,s:c,s:s,s:c,s:s,s:s,s:c,s:c,s:s,s:i,s:i,s:c,s:i,s:s,s:s,s:i,s:i}"
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
        ,"ErrorID", self->data.ErrorID 
        ,"ErrorMsg", self->data.ErrorMsg//, (Py_ssize_t)sizeof(self->data.ErrorMsg) 
        ,"LongCustomerName", self->data.LongCustomerName//, (Py_ssize_t)sizeof(self->data.LongCustomerName) 
        ,"DRIdentityID", self->data.DRIdentityID 
        ,"SecFutureSerial", self->data.SecFutureSerial 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspTransferBySecField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///业务功能码
// TThostFtdcTradeCodeType char[7]
static PyObject *PyCThostFtdcRspTransferBySecField_get_TradeCode(PyCThostFtdcRspTransferBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeCode, (Py_ssize_t)sizeof(self->data.TradeCode));
    return PyBytes_FromString(self->data.TradeCode);
}

///业务功能码
// TThostFtdcTradeCodeType char[7]
static int PyCThostFtdcRspTransferBySecField_set_TradeCode(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspTransferBySecField_get_BankID(PyCThostFtdcRspTransferBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankID, (Py_ssize_t)sizeof(self->data.BankID));
    return PyBytes_FromString(self->data.BankID);
}

///银行代码
// TThostFtdcBankIDType char[4]
static int PyCThostFtdcRspTransferBySecField_set_BankID(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspTransferBySecField_get_BankBranchID(PyCThostFtdcRspTransferBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankBranchID, (Py_ssize_t)sizeof(self->data.BankBranchID));
    return PyBytes_FromString(self->data.BankBranchID);
}

///银行分支机构代码
// TThostFtdcBankBrchIDType char[5]
static int PyCThostFtdcRspTransferBySecField_set_BankBranchID(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspTransferBySecField_get_BrokerID(PyCThostFtdcRspTransferBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///期商代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcRspTransferBySecField_set_BrokerID(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspTransferBySecField_get_BrokerBranchID(PyCThostFtdcRspTransferBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerBranchID, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
    return PyBytes_FromString(self->data.BrokerBranchID);
}

///期商分支机构代码
// TThostFtdcFutureBranchIDType char[31]
static int PyCThostFtdcRspTransferBySecField_set_BrokerBranchID(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspTransferBySecField_get_TradeDate(PyCThostFtdcRspTransferBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeDate, (Py_ssize_t)sizeof(self->data.TradeDate));
    return PyBytes_FromString(self->data.TradeDate);
}

///交易日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcRspTransferBySecField_set_TradeDate(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspTransferBySecField_get_TradeTime(PyCThostFtdcRspTransferBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeTime, (Py_ssize_t)sizeof(self->data.TradeTime));
    return PyBytes_FromString(self->data.TradeTime);
}

///交易时间
// TThostFtdcTradeTimeType char[9]
static int PyCThostFtdcRspTransferBySecField_set_TradeTime(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspTransferBySecField_get_BankSerial(PyCThostFtdcRspTransferBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankSerial, (Py_ssize_t)sizeof(self->data.BankSerial));
    return PyBytes_FromString(self->data.BankSerial);
}

///银行流水号
// TThostFtdcBankSerialType char[13]
static int PyCThostFtdcRspTransferBySecField_set_BankSerial(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspTransferBySecField_get_TradingDay(PyCThostFtdcRspTransferBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易系统日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcRspTransferBySecField_set_TradingDay(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspTransferBySecField_get_PlateSerial(PyCThostFtdcRspTransferBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.PlateSerial);
#else
    return PyInt_FromLong(self->data.PlateSerial);
#endif
}

///银期平台消息流水号
// TThostFtdcSerialType int
static int PyCThostFtdcRspTransferBySecField_set_PlateSerial(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspTransferBySecField_get_LastFragment(PyCThostFtdcRspTransferBySecField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

///最后分片标志
// TThostFtdcLastFragmentType char
static int PyCThostFtdcRspTransferBySecField_set_LastFragment(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspTransferBySecField_get_SessionID(PyCThostFtdcRspTransferBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话号
// TThostFtdcSessionIDType int
static int PyCThostFtdcRspTransferBySecField_set_SessionID(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspTransferBySecField_get_CustomerName(PyCThostFtdcRspTransferBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CustomerName, (Py_ssize_t)sizeof(self->data.CustomerName));
    return PyBytes_FromString(self->data.CustomerName);
}

///客户姓名
// TThostFtdcIndividualNameType char[51]
static int PyCThostFtdcRspTransferBySecField_set_CustomerName(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspTransferBySecField_get_IdCardType(PyCThostFtdcRspTransferBySecField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.IdCardType), 1);
}

///证件类型
// TThostFtdcIdCardTypeType char
static int PyCThostFtdcRspTransferBySecField_set_IdCardType(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspTransferBySecField_get_IdentifiedCardNo(PyCThostFtdcRspTransferBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IdentifiedCardNo, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
    return PyBytes_FromString(self->data.IdentifiedCardNo);
}

///证件号码
// TThostFtdcIdentifiedCardNoType char[51]
static int PyCThostFtdcRspTransferBySecField_set_IdentifiedCardNo(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspTransferBySecField_get_CustType(PyCThostFtdcRspTransferBySecField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.CustType), 1);
}

///客户类型
// TThostFtdcCustTypeType char
static int PyCThostFtdcRspTransferBySecField_set_CustType(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspTransferBySecField_get_BankAccount(PyCThostFtdcRspTransferBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankAccount, (Py_ssize_t)sizeof(self->data.BankAccount));
    return PyBytes_FromString(self->data.BankAccount);
}

///银行帐号
// TThostFtdcBankAccountType char[41]
static int PyCThostFtdcRspTransferBySecField_set_BankAccount(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspTransferBySecField_get_BankPassWord(PyCThostFtdcRspTransferBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankPassWord, (Py_ssize_t)sizeof(self->data.BankPassWord));
    return PyBytes_FromString(self->data.BankPassWord);
}

///银行密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcRspTransferBySecField_set_BankPassWord(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspTransferBySecField_get_AccountID(PyCThostFtdcRspTransferBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AccountID, (Py_ssize_t)sizeof(self->data.AccountID));
    return PyBytes_FromString(self->data.AccountID);
}

///投资者帐号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcRspTransferBySecField_set_AccountID(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspTransferBySecField_get_Password(PyCThostFtdcRspTransferBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Password, (Py_ssize_t)sizeof(self->data.Password));
    return PyBytes_FromString(self->data.Password);
}

///期货密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcRspTransferBySecField_set_Password(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspTransferBySecField_get_InstallID(PyCThostFtdcRspTransferBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcRspTransferBySecField_set_InstallID(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspTransferBySecField_get_FutureSerial(PyCThostFtdcRspTransferBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FutureSerial);
#else
    return PyInt_FromLong(self->data.FutureSerial);
#endif
}

///期货公司流水号
// TThostFtdcFutureSerialType int
static int PyCThostFtdcRspTransferBySecField_set_FutureSerial(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspTransferBySecField_get_UserID(PyCThostFtdcRspTransferBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户标识
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcRspTransferBySecField_set_UserID(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspTransferBySecField_get_VerifyCertNoFlag(PyCThostFtdcRspTransferBySecField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.VerifyCertNoFlag), 1);
}

///验证客户证件号码标志
// TThostFtdcYesNoIndicatorType char
static int PyCThostFtdcRspTransferBySecField_set_VerifyCertNoFlag(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspTransferBySecField_get_CurrencyID(PyCThostFtdcRspTransferBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcRspTransferBySecField_set_CurrencyID(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspTransferBySecField_get_TradeAmount(PyCThostFtdcRspTransferBySecField *self, void *closure) {
    return PyFloat_FromDouble(self->data.TradeAmount);
}

///转帐金额
// TThostFtdcTradeAmountType double
static int PyCThostFtdcRspTransferBySecField_set_TradeAmount(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspTransferBySecField_get_FutureFetchAmount(PyCThostFtdcRspTransferBySecField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FutureFetchAmount);
}

///期货可取金额
// TThostFtdcTradeAmountType double
static int PyCThostFtdcRspTransferBySecField_set_FutureFetchAmount(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspTransferBySecField_get_FeePayFlag(PyCThostFtdcRspTransferBySecField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.FeePayFlag), 1);
}

///费用支付标志
// TThostFtdcFeePayFlagType char
static int PyCThostFtdcRspTransferBySecField_set_FeePayFlag(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspTransferBySecField_get_CustFee(PyCThostFtdcRspTransferBySecField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CustFee);
}

///应收客户费用
// TThostFtdcCustFeeType double
static int PyCThostFtdcRspTransferBySecField_set_CustFee(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspTransferBySecField_get_BrokerFee(PyCThostFtdcRspTransferBySecField *self, void *closure) {
    return PyFloat_FromDouble(self->data.BrokerFee);
}

///应收期货公司费用
// TThostFtdcFutureFeeType double
static int PyCThostFtdcRspTransferBySecField_set_BrokerFee(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspTransferBySecField_get_Message(PyCThostFtdcRspTransferBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Message, (Py_ssize_t)sizeof(self->data.Message));
    return PyBytes_FromString(self->data.Message);
}

///发送方给接收方的消息
// TThostFtdcAddInfoType char[129]
static int PyCThostFtdcRspTransferBySecField_set_Message(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspTransferBySecField_get_Digest(PyCThostFtdcRspTransferBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Digest, (Py_ssize_t)sizeof(self->data.Digest));
    return PyBytes_FromString(self->data.Digest);
}

///摘要
// TThostFtdcDigestType char[36]
static int PyCThostFtdcRspTransferBySecField_set_Digest(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspTransferBySecField_get_BankAccType(PyCThostFtdcRspTransferBySecField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BankAccType), 1);
}

///银行帐号类型
// TThostFtdcBankAccTypeType char
static int PyCThostFtdcRspTransferBySecField_set_BankAccType(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspTransferBySecField_get_DeviceID(PyCThostFtdcRspTransferBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.DeviceID, (Py_ssize_t)sizeof(self->data.DeviceID));
    return PyBytes_FromString(self->data.DeviceID);
}

///渠道标志
// TThostFtdcDeviceIDType char[3]
static int PyCThostFtdcRspTransferBySecField_set_DeviceID(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspTransferBySecField_get_BankSecuAccType(PyCThostFtdcRspTransferBySecField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BankSecuAccType), 1);
}

///期货单位帐号类型
// TThostFtdcBankAccTypeType char
static int PyCThostFtdcRspTransferBySecField_set_BankSecuAccType(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspTransferBySecField_get_BrokerIDByBank(PyCThostFtdcRspTransferBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerIDByBank, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
    return PyBytes_FromString(self->data.BrokerIDByBank);
}

///期货公司银行编码
// TThostFtdcBankCodingForFutureType char[33]
static int PyCThostFtdcRspTransferBySecField_set_BrokerIDByBank(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspTransferBySecField_get_BankSecuAcc(PyCThostFtdcRspTransferBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankSecuAcc, (Py_ssize_t)sizeof(self->data.BankSecuAcc));
    return PyBytes_FromString(self->data.BankSecuAcc);
}

///期货单位帐号
// TThostFtdcBankAccountType char[41]
static int PyCThostFtdcRspTransferBySecField_set_BankSecuAcc(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspTransferBySecField_get_BankPwdFlag(PyCThostFtdcRspTransferBySecField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BankPwdFlag), 1);
}

///银行密码标志
// TThostFtdcPwdFlagType char
static int PyCThostFtdcRspTransferBySecField_set_BankPwdFlag(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspTransferBySecField_get_SecuPwdFlag(PyCThostFtdcRspTransferBySecField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.SecuPwdFlag), 1);
}

///期货资金密码核对标志
// TThostFtdcPwdFlagType char
static int PyCThostFtdcRspTransferBySecField_set_SecuPwdFlag(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspTransferBySecField_get_OperNo(PyCThostFtdcRspTransferBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OperNo, (Py_ssize_t)sizeof(self->data.OperNo));
    return PyBytes_FromString(self->data.OperNo);
}

///交易柜员
// TThostFtdcOperNoType char[17]
static int PyCThostFtdcRspTransferBySecField_set_OperNo(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspTransferBySecField_get_RequestID(PyCThostFtdcRspTransferBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcRspTransferBySecField_set_RequestID(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspTransferBySecField_get_TID(PyCThostFtdcRspTransferBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.TID);
#else
    return PyInt_FromLong(self->data.TID);
#endif
}

///交易ID
// TThostFtdcTIDType int
static int PyCThostFtdcRspTransferBySecField_set_TID(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspTransferBySecField_get_TransferStatus(PyCThostFtdcRspTransferBySecField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.TransferStatus), 1);
}

///转账交易状态
// TThostFtdcTransferStatusType char
static int PyCThostFtdcRspTransferBySecField_set_TransferStatus(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
            
///错误代码
// TThostFtdcErrorIDType int
static PyObject *PyCThostFtdcRspTransferBySecField_get_ErrorID(PyCThostFtdcRspTransferBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.ErrorID);
#else
    return PyInt_FromLong(self->data.ErrorID);
#endif
}

///错误代码
// TThostFtdcErrorIDType int
static int PyCThostFtdcRspTransferBySecField_set_ErrorID(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspTransferBySecField_get_ErrorMsg(PyCThostFtdcRspTransferBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ErrorMsg, (Py_ssize_t)sizeof(self->data.ErrorMsg));
    return PyBytes_FromString(self->data.ErrorMsg);
}

///错误信息
// TThostFtdcErrorMsgType char[81]
static int PyCThostFtdcRspTransferBySecField_set_ErrorMsg(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspTransferBySecField_get_LongCustomerName(PyCThostFtdcRspTransferBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.LongCustomerName, (Py_ssize_t)sizeof(self->data.LongCustomerName));
    return PyBytes_FromString(self->data.LongCustomerName);
}

///长客户姓名
// TThostFtdcLongIndividualNameType char[161]
static int PyCThostFtdcRspTransferBySecField_set_LongCustomerName(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspTransferBySecField_get_DRIdentityID(PyCThostFtdcRspTransferBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.DRIdentityID);
#else
    return PyInt_FromLong(self->data.DRIdentityID);
#endif
}

///交易中心代码
// TThostFtdcDRIdentityIDType int
static int PyCThostFtdcRspTransferBySecField_set_DRIdentityID(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspTransferBySecField_get_SecFutureSerial(PyCThostFtdcRspTransferBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SecFutureSerial);
#else
    return PyInt_FromLong(self->data.SecFutureSerial);
#endif
}

///次中心发起转账期货公司流水号
// TThostFtdcFutureSerialType int
static int PyCThostFtdcRspTransferBySecField_set_SecFutureSerial(PyCThostFtdcRspTransferBySecField *self, PyObject* val, void *closure) {
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
        

static PyGetSetDef PyCThostFtdcRspTransferBySecField_getset[] = {
    ///业务功能码 
    {(char *)"TradeCode", (getter)PyCThostFtdcRspTransferBySecField_get_TradeCode, (setter)PyCThostFtdcRspTransferBySecField_set_TradeCode, (char *)"TradeCode", NULL},
    ///银行代码 
    {(char *)"BankID", (getter)PyCThostFtdcRspTransferBySecField_get_BankID, (setter)PyCThostFtdcRspTransferBySecField_set_BankID, (char *)"BankID", NULL},
    ///银行分支机构代码 
    {(char *)"BankBranchID", (getter)PyCThostFtdcRspTransferBySecField_get_BankBranchID, (setter)PyCThostFtdcRspTransferBySecField_set_BankBranchID, (char *)"BankBranchID", NULL},
    ///期商代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcRspTransferBySecField_get_BrokerID, (setter)PyCThostFtdcRspTransferBySecField_set_BrokerID, (char *)"BrokerID", NULL},
    ///期商分支机构代码 
    {(char *)"BrokerBranchID", (getter)PyCThostFtdcRspTransferBySecField_get_BrokerBranchID, (setter)PyCThostFtdcRspTransferBySecField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
    ///交易日期 
    {(char *)"TradeDate", (getter)PyCThostFtdcRspTransferBySecField_get_TradeDate, (setter)PyCThostFtdcRspTransferBySecField_set_TradeDate, (char *)"TradeDate", NULL},
    ///交易时间 
    {(char *)"TradeTime", (getter)PyCThostFtdcRspTransferBySecField_get_TradeTime, (setter)PyCThostFtdcRspTransferBySecField_set_TradeTime, (char *)"TradeTime", NULL},
    ///银行流水号 
    {(char *)"BankSerial", (getter)PyCThostFtdcRspTransferBySecField_get_BankSerial, (setter)PyCThostFtdcRspTransferBySecField_set_BankSerial, (char *)"BankSerial", NULL},
    ///交易系统日期 
    {(char *)"TradingDay", (getter)PyCThostFtdcRspTransferBySecField_get_TradingDay, (setter)PyCThostFtdcRspTransferBySecField_set_TradingDay, (char *)"TradingDay", NULL},
    ///银期平台消息流水号 
    {(char *)"PlateSerial", (getter)PyCThostFtdcRspTransferBySecField_get_PlateSerial, (setter)PyCThostFtdcRspTransferBySecField_set_PlateSerial, (char *)"PlateSerial", NULL},
    ///最后分片标志 
    {(char *)"LastFragment", (getter)PyCThostFtdcRspTransferBySecField_get_LastFragment, (setter)PyCThostFtdcRspTransferBySecField_set_LastFragment, (char *)"LastFragment", NULL},
    ///会话号 
    {(char *)"SessionID", (getter)PyCThostFtdcRspTransferBySecField_get_SessionID, (setter)PyCThostFtdcRspTransferBySecField_set_SessionID, (char *)"SessionID", NULL},
    ///客户姓名 
    {(char *)"CustomerName", (getter)PyCThostFtdcRspTransferBySecField_get_CustomerName, (setter)PyCThostFtdcRspTransferBySecField_set_CustomerName, (char *)"CustomerName", NULL},
    ///证件类型 
    {(char *)"IdCardType", (getter)PyCThostFtdcRspTransferBySecField_get_IdCardType, (setter)PyCThostFtdcRspTransferBySecField_set_IdCardType, (char *)"IdCardType", NULL},
    ///证件号码 
    {(char *)"IdentifiedCardNo", (getter)PyCThostFtdcRspTransferBySecField_get_IdentifiedCardNo, (setter)PyCThostFtdcRspTransferBySecField_set_IdentifiedCardNo, (char *)"IdentifiedCardNo", NULL},
    ///客户类型 
    {(char *)"CustType", (getter)PyCThostFtdcRspTransferBySecField_get_CustType, (setter)PyCThostFtdcRspTransferBySecField_set_CustType, (char *)"CustType", NULL},
    ///银行帐号 
    {(char *)"BankAccount", (getter)PyCThostFtdcRspTransferBySecField_get_BankAccount, (setter)PyCThostFtdcRspTransferBySecField_set_BankAccount, (char *)"BankAccount", NULL},
    ///银行密码 
    {(char *)"BankPassWord", (getter)PyCThostFtdcRspTransferBySecField_get_BankPassWord, (setter)PyCThostFtdcRspTransferBySecField_set_BankPassWord, (char *)"BankPassWord", NULL},
    ///投资者帐号 
    {(char *)"AccountID", (getter)PyCThostFtdcRspTransferBySecField_get_AccountID, (setter)PyCThostFtdcRspTransferBySecField_set_AccountID, (char *)"AccountID", NULL},
    ///期货密码 
    {(char *)"Password", (getter)PyCThostFtdcRspTransferBySecField_get_Password, (setter)PyCThostFtdcRspTransferBySecField_set_Password, (char *)"Password", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcRspTransferBySecField_get_InstallID, (setter)PyCThostFtdcRspTransferBySecField_set_InstallID, (char *)"InstallID", NULL},
    ///期货公司流水号 
    {(char *)"FutureSerial", (getter)PyCThostFtdcRspTransferBySecField_get_FutureSerial, (setter)PyCThostFtdcRspTransferBySecField_set_FutureSerial, (char *)"FutureSerial", NULL},
    ///用户标识 
    {(char *)"UserID", (getter)PyCThostFtdcRspTransferBySecField_get_UserID, (setter)PyCThostFtdcRspTransferBySecField_set_UserID, (char *)"UserID", NULL},
    ///验证客户证件号码标志 
    {(char *)"VerifyCertNoFlag", (getter)PyCThostFtdcRspTransferBySecField_get_VerifyCertNoFlag, (setter)PyCThostFtdcRspTransferBySecField_set_VerifyCertNoFlag, (char *)"VerifyCertNoFlag", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcRspTransferBySecField_get_CurrencyID, (setter)PyCThostFtdcRspTransferBySecField_set_CurrencyID, (char *)"CurrencyID", NULL},
    ///转帐金额 
    {(char *)"TradeAmount", (getter)PyCThostFtdcRspTransferBySecField_get_TradeAmount, (setter)PyCThostFtdcRspTransferBySecField_set_TradeAmount, (char *)"TradeAmount", NULL},
    ///期货可取金额 
    {(char *)"FutureFetchAmount", (getter)PyCThostFtdcRspTransferBySecField_get_FutureFetchAmount, (setter)PyCThostFtdcRspTransferBySecField_set_FutureFetchAmount, (char *)"FutureFetchAmount", NULL},
    ///费用支付标志 
    {(char *)"FeePayFlag", (getter)PyCThostFtdcRspTransferBySecField_get_FeePayFlag, (setter)PyCThostFtdcRspTransferBySecField_set_FeePayFlag, (char *)"FeePayFlag", NULL},
    ///应收客户费用 
    {(char *)"CustFee", (getter)PyCThostFtdcRspTransferBySecField_get_CustFee, (setter)PyCThostFtdcRspTransferBySecField_set_CustFee, (char *)"CustFee", NULL},
    ///应收期货公司费用 
    {(char *)"BrokerFee", (getter)PyCThostFtdcRspTransferBySecField_get_BrokerFee, (setter)PyCThostFtdcRspTransferBySecField_set_BrokerFee, (char *)"BrokerFee", NULL},
    ///发送方给接收方的消息 
    {(char *)"Message", (getter)PyCThostFtdcRspTransferBySecField_get_Message, (setter)PyCThostFtdcRspTransferBySecField_set_Message, (char *)"Message", NULL},
    ///摘要 
    {(char *)"Digest", (getter)PyCThostFtdcRspTransferBySecField_get_Digest, (setter)PyCThostFtdcRspTransferBySecField_set_Digest, (char *)"Digest", NULL},
    ///银行帐号类型 
    {(char *)"BankAccType", (getter)PyCThostFtdcRspTransferBySecField_get_BankAccType, (setter)PyCThostFtdcRspTransferBySecField_set_BankAccType, (char *)"BankAccType", NULL},
    ///渠道标志 
    {(char *)"DeviceID", (getter)PyCThostFtdcRspTransferBySecField_get_DeviceID, (setter)PyCThostFtdcRspTransferBySecField_set_DeviceID, (char *)"DeviceID", NULL},
    ///期货单位帐号类型 
    {(char *)"BankSecuAccType", (getter)PyCThostFtdcRspTransferBySecField_get_BankSecuAccType, (setter)PyCThostFtdcRspTransferBySecField_set_BankSecuAccType, (char *)"BankSecuAccType", NULL},
    ///期货公司银行编码 
    {(char *)"BrokerIDByBank", (getter)PyCThostFtdcRspTransferBySecField_get_BrokerIDByBank, (setter)PyCThostFtdcRspTransferBySecField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
    ///期货单位帐号 
    {(char *)"BankSecuAcc", (getter)PyCThostFtdcRspTransferBySecField_get_BankSecuAcc, (setter)PyCThostFtdcRspTransferBySecField_set_BankSecuAcc, (char *)"BankSecuAcc", NULL},
    ///银行密码标志 
    {(char *)"BankPwdFlag", (getter)PyCThostFtdcRspTransferBySecField_get_BankPwdFlag, (setter)PyCThostFtdcRspTransferBySecField_set_BankPwdFlag, (char *)"BankPwdFlag", NULL},
    ///期货资金密码核对标志 
    {(char *)"SecuPwdFlag", (getter)PyCThostFtdcRspTransferBySecField_get_SecuPwdFlag, (setter)PyCThostFtdcRspTransferBySecField_set_SecuPwdFlag, (char *)"SecuPwdFlag", NULL},
    ///交易柜员 
    {(char *)"OperNo", (getter)PyCThostFtdcRspTransferBySecField_get_OperNo, (setter)PyCThostFtdcRspTransferBySecField_set_OperNo, (char *)"OperNo", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcRspTransferBySecField_get_RequestID, (setter)PyCThostFtdcRspTransferBySecField_set_RequestID, (char *)"RequestID", NULL},
    ///交易ID 
    {(char *)"TID", (getter)PyCThostFtdcRspTransferBySecField_get_TID, (setter)PyCThostFtdcRspTransferBySecField_set_TID, (char *)"TID", NULL},
    ///转账交易状态 
    {(char *)"TransferStatus", (getter)PyCThostFtdcRspTransferBySecField_get_TransferStatus, (setter)PyCThostFtdcRspTransferBySecField_set_TransferStatus, (char *)"TransferStatus", NULL},
    ///错误代码 
    {(char *)"ErrorID", (getter)PyCThostFtdcRspTransferBySecField_get_ErrorID, (setter)PyCThostFtdcRspTransferBySecField_set_ErrorID, (char *)"ErrorID", NULL},
    ///错误信息 
    {(char *)"ErrorMsg", (getter)PyCThostFtdcRspTransferBySecField_get_ErrorMsg, (setter)PyCThostFtdcRspTransferBySecField_set_ErrorMsg, (char *)"ErrorMsg", NULL},
    ///长客户姓名 
    {(char *)"LongCustomerName", (getter)PyCThostFtdcRspTransferBySecField_get_LongCustomerName, (setter)PyCThostFtdcRspTransferBySecField_set_LongCustomerName, (char *)"LongCustomerName", NULL},
    ///交易中心代码 
    {(char *)"DRIdentityID", (getter)PyCThostFtdcRspTransferBySecField_get_DRIdentityID, (setter)PyCThostFtdcRspTransferBySecField_set_DRIdentityID, (char *)"DRIdentityID", NULL},
    ///次中心发起转账期货公司流水号 
    {(char *)"SecFutureSerial", (getter)PyCThostFtdcRspTransferBySecField_get_SecFutureSerial, (setter)PyCThostFtdcRspTransferBySecField_set_SecFutureSerial, (char *)"SecFutureSerial", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRspTransferBySecFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRspTransferBySecField",	/* tp_name */
	sizeof(PyCThostFtdcRspTransferBySecField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRspTransferBySecField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRspTransferBySecField_repr,   /* tp_repr */
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
	"CThostFtdcRspTransferBySecField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRspTransferBySecField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRspTransferBySecField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRspTransferBySecField_new,       /* tp_new */
};

int PyCThostFtdcRspTransferBySecFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRspTransferBySecField  */
	if (PyType_Ready(&PyCThostFtdcRspTransferBySecFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRspTransferBySecField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRspTransferBySecFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRspTransferBySecField", (PyObject *)&PyCThostFtdcRspTransferBySecFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRspTransferBySecField to module");
        Py_DECREF(&PyCThostFtdcRspTransferBySecFieldType);
		return -1;
    }

    return 0;
}
