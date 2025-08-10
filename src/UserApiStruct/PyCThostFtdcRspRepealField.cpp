
#include "PyCThostFtdcRspRepealField.h"

///冲正响应

static PyObject *PyCThostFtdcRspRepealField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRspRepealField *self = (PyCThostFtdcRspRepealField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcRspRepealField_init(PyCThostFtdcRspRepealField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"RepealTimeInterval", "RepealedTimes", "BankRepealFlag", "BrokerRepealFlag", "PlateRepealSerial", "BankRepealSerial", "FutureRepealSerial", "TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "CustType", "BankAccount", "BankPassWord", "AccountID", "Password", "InstallID", "FutureSerial", "UserID", "VerifyCertNoFlag", "CurrencyID", "TradeAmount", "FutureFetchAmount", "FeePayFlag", "CustFee", "BrokerFee", "Message", "Digest", "BankAccType", "DeviceID", "BankSecuAccType", "BrokerIDByBank", "BankSecuAcc", "BankPwdFlag", "SecuPwdFlag", "OperNo", "RequestID", "TID", "TransferStatus", "ErrorID", "ErrorMsg", "LongCustomerName",  NULL};


    ///冲正时间间隔
    // TThostFtdcRepealTimeIntervalType int
    int RspRepealField_RepealTimeInterval = 0;
        
    ///已经冲正次数
    // TThostFtdcRepealedTimesType int
    int RspRepealField_RepealedTimes = 0;
        
    ///银行冲正标志
    // TThostFtdcBankRepealFlagType char
    char RspRepealField_BankRepealFlag = 0;
            
    ///期商冲正标志
    // TThostFtdcBrokerRepealFlagType char
    char RspRepealField_BrokerRepealFlag = 0;
            
    ///被冲正平台流水号
    // TThostFtdcPlateSerialType int
    int RspRepealField_PlateRepealSerial = 0;
        
    ///被冲正银行流水号
    // TThostFtdcBankSerialType char[13]
    const char *RspRepealField_BankRepealSerial = NULL;
    Py_ssize_t RspRepealField_BankRepealSerial_len = 0;
            
    ///被冲正期货流水号
    // TThostFtdcFutureSerialType int
    int RspRepealField_FutureRepealSerial = 0;
        
    ///业务功能码
    // TThostFtdcTradeCodeType char[7]
    const char *RspRepealField_TradeCode = NULL;
    Py_ssize_t RspRepealField_TradeCode_len = 0;
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    const char *RspRepealField_BankID = NULL;
    Py_ssize_t RspRepealField_BankID_len = 0;
            
    ///银行分支机构代码
    // TThostFtdcBankBrchIDType char[5]
    const char *RspRepealField_BankBranchID = NULL;
    Py_ssize_t RspRepealField_BankBranchID_len = 0;
            
    ///期商代码
    // TThostFtdcBrokerIDType char[11]
    const char *RspRepealField_BrokerID = NULL;
    Py_ssize_t RspRepealField_BrokerID_len = 0;
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    const char *RspRepealField_BrokerBranchID = NULL;
    Py_ssize_t RspRepealField_BrokerBranchID_len = 0;
            
    ///交易日期
    // TThostFtdcTradeDateType char[9]
    const char *RspRepealField_TradeDate = NULL;
    Py_ssize_t RspRepealField_TradeDate_len = 0;
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    const char *RspRepealField_TradeTime = NULL;
    Py_ssize_t RspRepealField_TradeTime_len = 0;
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    const char *RspRepealField_BankSerial = NULL;
    Py_ssize_t RspRepealField_BankSerial_len = 0;
            
    ///交易系统日期
    // TThostFtdcTradeDateType char[9]
    const char *RspRepealField_TradingDay = NULL;
    Py_ssize_t RspRepealField_TradingDay_len = 0;
            
    ///银期平台消息流水号
    // TThostFtdcSerialType int
    int RspRepealField_PlateSerial = 0;
        
    ///最后分片标志
    // TThostFtdcLastFragmentType char
    char RspRepealField_LastFragment = 0;
            
    ///会话号
    // TThostFtdcSessionIDType int
    int RspRepealField_SessionID = 0;
        
    ///客户姓名
    // TThostFtdcIndividualNameType char[51]
    const char *RspRepealField_CustomerName = NULL;
    Py_ssize_t RspRepealField_CustomerName_len = 0;
            
    ///证件类型
    // TThostFtdcIdCardTypeType char
    char RspRepealField_IdCardType = 0;
            
    ///证件号码
    // TThostFtdcIdentifiedCardNoType char[51]
    const char *RspRepealField_IdentifiedCardNo = NULL;
    Py_ssize_t RspRepealField_IdentifiedCardNo_len = 0;
            
    ///客户类型
    // TThostFtdcCustTypeType char
    char RspRepealField_CustType = 0;
            
    ///银行帐号
    // TThostFtdcBankAccountType char[41]
    const char *RspRepealField_BankAccount = NULL;
    Py_ssize_t RspRepealField_BankAccount_len = 0;
            
    ///银行密码
    // TThostFtdcPasswordType char[41]
    const char *RspRepealField_BankPassWord = NULL;
    Py_ssize_t RspRepealField_BankPassWord_len = 0;
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    const char *RspRepealField_AccountID = NULL;
    Py_ssize_t RspRepealField_AccountID_len = 0;
            
    ///期货密码
    // TThostFtdcPasswordType char[41]
    const char *RspRepealField_Password = NULL;
    Py_ssize_t RspRepealField_Password_len = 0;
            
    ///安装编号
    // TThostFtdcInstallIDType int
    int RspRepealField_InstallID = 0;
        
    ///期货公司流水号
    // TThostFtdcFutureSerialType int
    int RspRepealField_FutureSerial = 0;
        
    ///用户标识
    // TThostFtdcUserIDType char[16]
    const char *RspRepealField_UserID = NULL;
    Py_ssize_t RspRepealField_UserID_len = 0;
            
    ///验证客户证件号码标志
    // TThostFtdcYesNoIndicatorType char
    char RspRepealField_VerifyCertNoFlag = 0;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *RspRepealField_CurrencyID = NULL;
    Py_ssize_t RspRepealField_CurrencyID_len = 0;
            
    ///转帐金额
    // TThostFtdcTradeAmountType double
    double RspRepealField_TradeAmount = 0.0;
        
    ///期货可取金额
    // TThostFtdcTradeAmountType double
    double RspRepealField_FutureFetchAmount = 0.0;
        
    ///费用支付标志
    // TThostFtdcFeePayFlagType char
    char RspRepealField_FeePayFlag = 0;
            
    ///应收客户费用
    // TThostFtdcCustFeeType double
    double RspRepealField_CustFee = 0.0;
        
    ///应收期货公司费用
    // TThostFtdcFutureFeeType double
    double RspRepealField_BrokerFee = 0.0;
        
    ///发送方给接收方的消息
    // TThostFtdcAddInfoType char[129]
    const char *RspRepealField_Message = NULL;
    Py_ssize_t RspRepealField_Message_len = 0;
            
    ///摘要
    // TThostFtdcDigestType char[36]
    const char *RspRepealField_Digest = NULL;
    Py_ssize_t RspRepealField_Digest_len = 0;
            
    ///银行帐号类型
    // TThostFtdcBankAccTypeType char
    char RspRepealField_BankAccType = 0;
            
    ///渠道标志
    // TThostFtdcDeviceIDType char[3]
    const char *RspRepealField_DeviceID = NULL;
    Py_ssize_t RspRepealField_DeviceID_len = 0;
            
    ///期货单位帐号类型
    // TThostFtdcBankAccTypeType char
    char RspRepealField_BankSecuAccType = 0;
            
    ///期货公司银行编码
    // TThostFtdcBankCodingForFutureType char[33]
    const char *RspRepealField_BrokerIDByBank = NULL;
    Py_ssize_t RspRepealField_BrokerIDByBank_len = 0;
            
    ///期货单位帐号
    // TThostFtdcBankAccountType char[41]
    const char *RspRepealField_BankSecuAcc = NULL;
    Py_ssize_t RspRepealField_BankSecuAcc_len = 0;
            
    ///银行密码标志
    // TThostFtdcPwdFlagType char
    char RspRepealField_BankPwdFlag = 0;
            
    ///期货资金密码核对标志
    // TThostFtdcPwdFlagType char
    char RspRepealField_SecuPwdFlag = 0;
            
    ///交易柜员
    // TThostFtdcOperNoType char[17]
    const char *RspRepealField_OperNo = NULL;
    Py_ssize_t RspRepealField_OperNo_len = 0;
            
    ///请求编号
    // TThostFtdcRequestIDType int
    int RspRepealField_RequestID = 0;
        
    ///交易ID
    // TThostFtdcTIDType int
    int RspRepealField_TID = 0;
        
    ///转账交易状态
    // TThostFtdcTransferStatusType char
    char RspRepealField_TransferStatus = 0;
            
    ///错误代码
    // TThostFtdcErrorIDType int
    int RspRepealField_ErrorID = 0;
        
    ///错误信息
    // TThostFtdcErrorMsgType char[81]
    const char *RspRepealField_ErrorMsg = NULL;
    Py_ssize_t RspRepealField_ErrorMsg_len = 0;
            
    ///长客户姓名
    // TThostFtdcLongIndividualNameType char[161]
    const char *RspRepealField_LongCustomerName = NULL;
    Py_ssize_t RspRepealField_LongCustomerName_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iicciy#iy#y#y#y#y#y#y#y#y#iciy#cy#cy#y#y#y#iiy#cy#ddcddy#y#cy#cy#y#ccy#iiciy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iiccis#is#s#s#s#s#s#s#s#s#icis#cs#cs#s#s#s#iis#cs#ddcdds#s#cs#cs#s#ccs#iicis#s#", (char **)kwlist
#endif

        , &RspRepealField_RepealTimeInterval 
        , &RspRepealField_RepealedTimes 
        , &RspRepealField_BankRepealFlag 
        , &RspRepealField_BrokerRepealFlag 
        , &RspRepealField_PlateRepealSerial 
        , &RspRepealField_BankRepealSerial, &RspRepealField_BankRepealSerial_len 
        , &RspRepealField_FutureRepealSerial 
        , &RspRepealField_TradeCode, &RspRepealField_TradeCode_len 
        , &RspRepealField_BankID, &RspRepealField_BankID_len 
        , &RspRepealField_BankBranchID, &RspRepealField_BankBranchID_len 
        , &RspRepealField_BrokerID, &RspRepealField_BrokerID_len 
        , &RspRepealField_BrokerBranchID, &RspRepealField_BrokerBranchID_len 
        , &RspRepealField_TradeDate, &RspRepealField_TradeDate_len 
        , &RspRepealField_TradeTime, &RspRepealField_TradeTime_len 
        , &RspRepealField_BankSerial, &RspRepealField_BankSerial_len 
        , &RspRepealField_TradingDay, &RspRepealField_TradingDay_len 
        , &RspRepealField_PlateSerial 
        , &RspRepealField_LastFragment 
        , &RspRepealField_SessionID 
        , &RspRepealField_CustomerName, &RspRepealField_CustomerName_len 
        , &RspRepealField_IdCardType 
        , &RspRepealField_IdentifiedCardNo, &RspRepealField_IdentifiedCardNo_len 
        , &RspRepealField_CustType 
        , &RspRepealField_BankAccount, &RspRepealField_BankAccount_len 
        , &RspRepealField_BankPassWord, &RspRepealField_BankPassWord_len 
        , &RspRepealField_AccountID, &RspRepealField_AccountID_len 
        , &RspRepealField_Password, &RspRepealField_Password_len 
        , &RspRepealField_InstallID 
        , &RspRepealField_FutureSerial 
        , &RspRepealField_UserID, &RspRepealField_UserID_len 
        , &RspRepealField_VerifyCertNoFlag 
        , &RspRepealField_CurrencyID, &RspRepealField_CurrencyID_len 
        , &RspRepealField_TradeAmount 
        , &RspRepealField_FutureFetchAmount 
        , &RspRepealField_FeePayFlag 
        , &RspRepealField_CustFee 
        , &RspRepealField_BrokerFee 
        , &RspRepealField_Message, &RspRepealField_Message_len 
        , &RspRepealField_Digest, &RspRepealField_Digest_len 
        , &RspRepealField_BankAccType 
        , &RspRepealField_DeviceID, &RspRepealField_DeviceID_len 
        , &RspRepealField_BankSecuAccType 
        , &RspRepealField_BrokerIDByBank, &RspRepealField_BrokerIDByBank_len 
        , &RspRepealField_BankSecuAcc, &RspRepealField_BankSecuAcc_len 
        , &RspRepealField_BankPwdFlag 
        , &RspRepealField_SecuPwdFlag 
        , &RspRepealField_OperNo, &RspRepealField_OperNo_len 
        , &RspRepealField_RequestID 
        , &RspRepealField_TID 
        , &RspRepealField_TransferStatus 
        , &RspRepealField_ErrorID 
        , &RspRepealField_ErrorMsg, &RspRepealField_ErrorMsg_len 
        , &RspRepealField_LongCustomerName, &RspRepealField_LongCustomerName_len 


    )) {
        return -1;
    }


    ///冲正时间间隔
    // TThostFtdcRepealTimeIntervalType int
    self->data.RepealTimeInterval = RspRepealField_RepealTimeInterval;
        
    ///已经冲正次数
    // TThostFtdcRepealedTimesType int
    self->data.RepealedTimes = RspRepealField_RepealedTimes;
        
    ///银行冲正标志
    // TThostFtdcBankRepealFlagType char
    self->data.BankRepealFlag = RspRepealField_BankRepealFlag;
            
    ///期商冲正标志
    // TThostFtdcBrokerRepealFlagType char
    self->data.BrokerRepealFlag = RspRepealField_BrokerRepealFlag;
            
    ///被冲正平台流水号
    // TThostFtdcPlateSerialType int
    self->data.PlateRepealSerial = RspRepealField_PlateRepealSerial;
        
    ///被冲正银行流水号
    // TThostFtdcBankSerialType char[13]
    if( RspRepealField_BankRepealSerial != NULL ) {
        if(RspRepealField_BankRepealSerial_len > (Py_ssize_t)sizeof(self->data.BankRepealSerial)) {
            PyErr_Format(PyExc_ValueError, "BankRepealSerial too long: length=%zd (max allowed is %zd)", RspRepealField_BankRepealSerial_len, (Py_ssize_t)sizeof(self->data.BankRepealSerial));
            return -1;
        }
        // memset(self->data.BankRepealSerial, 0, sizeof(self->data.BankRepealSerial));
        // memcpy(self->data.BankRepealSerial, RspRepealField_BankRepealSerial, RspRepealField_BankRepealSerial_len);        
        strncpy(self->data.BankRepealSerial, RspRepealField_BankRepealSerial, sizeof(self->data.BankRepealSerial) );
        RspRepealField_BankRepealSerial = NULL;
    }
            
    ///被冲正期货流水号
    // TThostFtdcFutureSerialType int
    self->data.FutureRepealSerial = RspRepealField_FutureRepealSerial;
        
    ///业务功能码
    // TThostFtdcTradeCodeType char[7]
    if( RspRepealField_TradeCode != NULL ) {
        if(RspRepealField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", RspRepealField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
            return -1;
        }
        // memset(self->data.TradeCode, 0, sizeof(self->data.TradeCode));
        // memcpy(self->data.TradeCode, RspRepealField_TradeCode, RspRepealField_TradeCode_len);        
        strncpy(self->data.TradeCode, RspRepealField_TradeCode, sizeof(self->data.TradeCode) );
        RspRepealField_TradeCode = NULL;
    }
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    if( RspRepealField_BankID != NULL ) {
        if(RspRepealField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", RspRepealField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
            return -1;
        }
        // memset(self->data.BankID, 0, sizeof(self->data.BankID));
        // memcpy(self->data.BankID, RspRepealField_BankID, RspRepealField_BankID_len);        
        strncpy(self->data.BankID, RspRepealField_BankID, sizeof(self->data.BankID) );
        RspRepealField_BankID = NULL;
    }
            
    ///银行分支机构代码
    // TThostFtdcBankBrchIDType char[5]
    if( RspRepealField_BankBranchID != NULL ) {
        if(RspRepealField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", RspRepealField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
            return -1;
        }
        // memset(self->data.BankBranchID, 0, sizeof(self->data.BankBranchID));
        // memcpy(self->data.BankBranchID, RspRepealField_BankBranchID, RspRepealField_BankBranchID_len);        
        strncpy(self->data.BankBranchID, RspRepealField_BankBranchID, sizeof(self->data.BankBranchID) );
        RspRepealField_BankBranchID = NULL;
    }
            
    ///期商代码
    // TThostFtdcBrokerIDType char[11]
    if( RspRepealField_BrokerID != NULL ) {
        if(RspRepealField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", RspRepealField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, RspRepealField_BrokerID, RspRepealField_BrokerID_len);        
        strncpy(self->data.BrokerID, RspRepealField_BrokerID, sizeof(self->data.BrokerID) );
        RspRepealField_BrokerID = NULL;
    }
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    if( RspRepealField_BrokerBranchID != NULL ) {
        if(RspRepealField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", RspRepealField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
            return -1;
        }
        // memset(self->data.BrokerBranchID, 0, sizeof(self->data.BrokerBranchID));
        // memcpy(self->data.BrokerBranchID, RspRepealField_BrokerBranchID, RspRepealField_BrokerBranchID_len);        
        strncpy(self->data.BrokerBranchID, RspRepealField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
        RspRepealField_BrokerBranchID = NULL;
    }
            
    ///交易日期
    // TThostFtdcTradeDateType char[9]
    if( RspRepealField_TradeDate != NULL ) {
        if(RspRepealField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", RspRepealField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
            return -1;
        }
        // memset(self->data.TradeDate, 0, sizeof(self->data.TradeDate));
        // memcpy(self->data.TradeDate, RspRepealField_TradeDate, RspRepealField_TradeDate_len);        
        strncpy(self->data.TradeDate, RspRepealField_TradeDate, sizeof(self->data.TradeDate) );
        RspRepealField_TradeDate = NULL;
    }
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    if( RspRepealField_TradeTime != NULL ) {
        if(RspRepealField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", RspRepealField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
            return -1;
        }
        // memset(self->data.TradeTime, 0, sizeof(self->data.TradeTime));
        // memcpy(self->data.TradeTime, RspRepealField_TradeTime, RspRepealField_TradeTime_len);        
        strncpy(self->data.TradeTime, RspRepealField_TradeTime, sizeof(self->data.TradeTime) );
        RspRepealField_TradeTime = NULL;
    }
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    if( RspRepealField_BankSerial != NULL ) {
        if(RspRepealField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", RspRepealField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
            return -1;
        }
        // memset(self->data.BankSerial, 0, sizeof(self->data.BankSerial));
        // memcpy(self->data.BankSerial, RspRepealField_BankSerial, RspRepealField_BankSerial_len);        
        strncpy(self->data.BankSerial, RspRepealField_BankSerial, sizeof(self->data.BankSerial) );
        RspRepealField_BankSerial = NULL;
    }
            
    ///交易系统日期
    // TThostFtdcTradeDateType char[9]
    if( RspRepealField_TradingDay != NULL ) {
        if(RspRepealField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", RspRepealField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, RspRepealField_TradingDay, RspRepealField_TradingDay_len);        
        strncpy(self->data.TradingDay, RspRepealField_TradingDay, sizeof(self->data.TradingDay) );
        RspRepealField_TradingDay = NULL;
    }
            
    ///银期平台消息流水号
    // TThostFtdcSerialType int
    self->data.PlateSerial = RspRepealField_PlateSerial;
        
    ///最后分片标志
    // TThostFtdcLastFragmentType char
    self->data.LastFragment = RspRepealField_LastFragment;
            
    ///会话号
    // TThostFtdcSessionIDType int
    self->data.SessionID = RspRepealField_SessionID;
        
    ///客户姓名
    // TThostFtdcIndividualNameType char[51]
    if( RspRepealField_CustomerName != NULL ) {
        if(RspRepealField_CustomerName_len > (Py_ssize_t)sizeof(self->data.CustomerName)) {
            PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is %zd)", RspRepealField_CustomerName_len, (Py_ssize_t)sizeof(self->data.CustomerName));
            return -1;
        }
        // memset(self->data.CustomerName, 0, sizeof(self->data.CustomerName));
        // memcpy(self->data.CustomerName, RspRepealField_CustomerName, RspRepealField_CustomerName_len);        
        strncpy(self->data.CustomerName, RspRepealField_CustomerName, sizeof(self->data.CustomerName) );
        RspRepealField_CustomerName = NULL;
    }
            
    ///证件类型
    // TThostFtdcIdCardTypeType char
    self->data.IdCardType = RspRepealField_IdCardType;
            
    ///证件号码
    // TThostFtdcIdentifiedCardNoType char[51]
    if( RspRepealField_IdentifiedCardNo != NULL ) {
        if(RspRepealField_IdentifiedCardNo_len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
            PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is %zd)", RspRepealField_IdentifiedCardNo_len, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
            return -1;
        }
        // memset(self->data.IdentifiedCardNo, 0, sizeof(self->data.IdentifiedCardNo));
        // memcpy(self->data.IdentifiedCardNo, RspRepealField_IdentifiedCardNo, RspRepealField_IdentifiedCardNo_len);        
        strncpy(self->data.IdentifiedCardNo, RspRepealField_IdentifiedCardNo, sizeof(self->data.IdentifiedCardNo) );
        RspRepealField_IdentifiedCardNo = NULL;
    }
            
    ///客户类型
    // TThostFtdcCustTypeType char
    self->data.CustType = RspRepealField_CustType;
            
    ///银行帐号
    // TThostFtdcBankAccountType char[41]
    if( RspRepealField_BankAccount != NULL ) {
        if(RspRepealField_BankAccount_len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
            PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is %zd)", RspRepealField_BankAccount_len, (Py_ssize_t)sizeof(self->data.BankAccount));
            return -1;
        }
        // memset(self->data.BankAccount, 0, sizeof(self->data.BankAccount));
        // memcpy(self->data.BankAccount, RspRepealField_BankAccount, RspRepealField_BankAccount_len);        
        strncpy(self->data.BankAccount, RspRepealField_BankAccount, sizeof(self->data.BankAccount) );
        RspRepealField_BankAccount = NULL;
    }
            
    ///银行密码
    // TThostFtdcPasswordType char[41]
    if( RspRepealField_BankPassWord != NULL ) {
        if(RspRepealField_BankPassWord_len > (Py_ssize_t)sizeof(self->data.BankPassWord)) {
            PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is %zd)", RspRepealField_BankPassWord_len, (Py_ssize_t)sizeof(self->data.BankPassWord));
            return -1;
        }
        // memset(self->data.BankPassWord, 0, sizeof(self->data.BankPassWord));
        // memcpy(self->data.BankPassWord, RspRepealField_BankPassWord, RspRepealField_BankPassWord_len);        
        strncpy(self->data.BankPassWord, RspRepealField_BankPassWord, sizeof(self->data.BankPassWord) );
        RspRepealField_BankPassWord = NULL;
    }
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    if( RspRepealField_AccountID != NULL ) {
        if(RspRepealField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", RspRepealField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
            return -1;
        }
        // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
        // memcpy(self->data.AccountID, RspRepealField_AccountID, RspRepealField_AccountID_len);        
        strncpy(self->data.AccountID, RspRepealField_AccountID, sizeof(self->data.AccountID) );
        RspRepealField_AccountID = NULL;
    }
            
    ///期货密码
    // TThostFtdcPasswordType char[41]
    if( RspRepealField_Password != NULL ) {
        if(RspRepealField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", RspRepealField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
            return -1;
        }
        // memset(self->data.Password, 0, sizeof(self->data.Password));
        // memcpy(self->data.Password, RspRepealField_Password, RspRepealField_Password_len);        
        strncpy(self->data.Password, RspRepealField_Password, sizeof(self->data.Password) );
        RspRepealField_Password = NULL;
    }
            
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = RspRepealField_InstallID;
        
    ///期货公司流水号
    // TThostFtdcFutureSerialType int
    self->data.FutureSerial = RspRepealField_FutureSerial;
        
    ///用户标识
    // TThostFtdcUserIDType char[16]
    if( RspRepealField_UserID != NULL ) {
        if(RspRepealField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", RspRepealField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, RspRepealField_UserID, RspRepealField_UserID_len);        
        strncpy(self->data.UserID, RspRepealField_UserID, sizeof(self->data.UserID) );
        RspRepealField_UserID = NULL;
    }
            
    ///验证客户证件号码标志
    // TThostFtdcYesNoIndicatorType char
    self->data.VerifyCertNoFlag = RspRepealField_VerifyCertNoFlag;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( RspRepealField_CurrencyID != NULL ) {
        if(RspRepealField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", RspRepealField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, RspRepealField_CurrencyID, RspRepealField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, RspRepealField_CurrencyID, sizeof(self->data.CurrencyID) );
        RspRepealField_CurrencyID = NULL;
    }
            
    ///转帐金额
    // TThostFtdcTradeAmountType double
    self->data.TradeAmount = RspRepealField_TradeAmount;
        
    ///期货可取金额
    // TThostFtdcTradeAmountType double
    self->data.FutureFetchAmount = RspRepealField_FutureFetchAmount;
        
    ///费用支付标志
    // TThostFtdcFeePayFlagType char
    self->data.FeePayFlag = RspRepealField_FeePayFlag;
            
    ///应收客户费用
    // TThostFtdcCustFeeType double
    self->data.CustFee = RspRepealField_CustFee;
        
    ///应收期货公司费用
    // TThostFtdcFutureFeeType double
    self->data.BrokerFee = RspRepealField_BrokerFee;
        
    ///发送方给接收方的消息
    // TThostFtdcAddInfoType char[129]
    if( RspRepealField_Message != NULL ) {
        if(RspRepealField_Message_len > (Py_ssize_t)sizeof(self->data.Message)) {
            PyErr_Format(PyExc_ValueError, "Message too long: length=%zd (max allowed is %zd)", RspRepealField_Message_len, (Py_ssize_t)sizeof(self->data.Message));
            return -1;
        }
        // memset(self->data.Message, 0, sizeof(self->data.Message));
        // memcpy(self->data.Message, RspRepealField_Message, RspRepealField_Message_len);        
        strncpy(self->data.Message, RspRepealField_Message, sizeof(self->data.Message) );
        RspRepealField_Message = NULL;
    }
            
    ///摘要
    // TThostFtdcDigestType char[36]
    if( RspRepealField_Digest != NULL ) {
        if(RspRepealField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
            PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", RspRepealField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
            return -1;
        }
        // memset(self->data.Digest, 0, sizeof(self->data.Digest));
        // memcpy(self->data.Digest, RspRepealField_Digest, RspRepealField_Digest_len);        
        strncpy(self->data.Digest, RspRepealField_Digest, sizeof(self->data.Digest) );
        RspRepealField_Digest = NULL;
    }
            
    ///银行帐号类型
    // TThostFtdcBankAccTypeType char
    self->data.BankAccType = RspRepealField_BankAccType;
            
    ///渠道标志
    // TThostFtdcDeviceIDType char[3]
    if( RspRepealField_DeviceID != NULL ) {
        if(RspRepealField_DeviceID_len > (Py_ssize_t)sizeof(self->data.DeviceID)) {
            PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is %zd)", RspRepealField_DeviceID_len, (Py_ssize_t)sizeof(self->data.DeviceID));
            return -1;
        }
        // memset(self->data.DeviceID, 0, sizeof(self->data.DeviceID));
        // memcpy(self->data.DeviceID, RspRepealField_DeviceID, RspRepealField_DeviceID_len);        
        strncpy(self->data.DeviceID, RspRepealField_DeviceID, sizeof(self->data.DeviceID) );
        RspRepealField_DeviceID = NULL;
    }
            
    ///期货单位帐号类型
    // TThostFtdcBankAccTypeType char
    self->data.BankSecuAccType = RspRepealField_BankSecuAccType;
            
    ///期货公司银行编码
    // TThostFtdcBankCodingForFutureType char[33]
    if( RspRepealField_BrokerIDByBank != NULL ) {
        if(RspRepealField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
            PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", RspRepealField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
            return -1;
        }
        // memset(self->data.BrokerIDByBank, 0, sizeof(self->data.BrokerIDByBank));
        // memcpy(self->data.BrokerIDByBank, RspRepealField_BrokerIDByBank, RspRepealField_BrokerIDByBank_len);        
        strncpy(self->data.BrokerIDByBank, RspRepealField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
        RspRepealField_BrokerIDByBank = NULL;
    }
            
    ///期货单位帐号
    // TThostFtdcBankAccountType char[41]
    if( RspRepealField_BankSecuAcc != NULL ) {
        if(RspRepealField_BankSecuAcc_len > (Py_ssize_t)sizeof(self->data.BankSecuAcc)) {
            PyErr_Format(PyExc_ValueError, "BankSecuAcc too long: length=%zd (max allowed is %zd)", RspRepealField_BankSecuAcc_len, (Py_ssize_t)sizeof(self->data.BankSecuAcc));
            return -1;
        }
        // memset(self->data.BankSecuAcc, 0, sizeof(self->data.BankSecuAcc));
        // memcpy(self->data.BankSecuAcc, RspRepealField_BankSecuAcc, RspRepealField_BankSecuAcc_len);        
        strncpy(self->data.BankSecuAcc, RspRepealField_BankSecuAcc, sizeof(self->data.BankSecuAcc) );
        RspRepealField_BankSecuAcc = NULL;
    }
            
    ///银行密码标志
    // TThostFtdcPwdFlagType char
    self->data.BankPwdFlag = RspRepealField_BankPwdFlag;
            
    ///期货资金密码核对标志
    // TThostFtdcPwdFlagType char
    self->data.SecuPwdFlag = RspRepealField_SecuPwdFlag;
            
    ///交易柜员
    // TThostFtdcOperNoType char[17]
    if( RspRepealField_OperNo != NULL ) {
        if(RspRepealField_OperNo_len > (Py_ssize_t)sizeof(self->data.OperNo)) {
            PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is %zd)", RspRepealField_OperNo_len, (Py_ssize_t)sizeof(self->data.OperNo));
            return -1;
        }
        // memset(self->data.OperNo, 0, sizeof(self->data.OperNo));
        // memcpy(self->data.OperNo, RspRepealField_OperNo, RspRepealField_OperNo_len);        
        strncpy(self->data.OperNo, RspRepealField_OperNo, sizeof(self->data.OperNo) );
        RspRepealField_OperNo = NULL;
    }
            
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = RspRepealField_RequestID;
        
    ///交易ID
    // TThostFtdcTIDType int
    self->data.TID = RspRepealField_TID;
        
    ///转账交易状态
    // TThostFtdcTransferStatusType char
    self->data.TransferStatus = RspRepealField_TransferStatus;
            
    ///错误代码
    // TThostFtdcErrorIDType int
    self->data.ErrorID = RspRepealField_ErrorID;
        
    ///错误信息
    // TThostFtdcErrorMsgType char[81]
    if( RspRepealField_ErrorMsg != NULL ) {
        if(RspRepealField_ErrorMsg_len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
            PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is %zd)", RspRepealField_ErrorMsg_len, (Py_ssize_t)sizeof(self->data.ErrorMsg));
            return -1;
        }
        // memset(self->data.ErrorMsg, 0, sizeof(self->data.ErrorMsg));
        // memcpy(self->data.ErrorMsg, RspRepealField_ErrorMsg, RspRepealField_ErrorMsg_len);        
        strncpy(self->data.ErrorMsg, RspRepealField_ErrorMsg, sizeof(self->data.ErrorMsg) );
        RspRepealField_ErrorMsg = NULL;
    }
            
    ///长客户姓名
    // TThostFtdcLongIndividualNameType char[161]
    if( RspRepealField_LongCustomerName != NULL ) {
        if(RspRepealField_LongCustomerName_len > (Py_ssize_t)sizeof(self->data.LongCustomerName)) {
            PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is %zd)", RspRepealField_LongCustomerName_len, (Py_ssize_t)sizeof(self->data.LongCustomerName));
            return -1;
        }
        // memset(self->data.LongCustomerName, 0, sizeof(self->data.LongCustomerName));
        // memcpy(self->data.LongCustomerName, RspRepealField_LongCustomerName, RspRepealField_LongCustomerName_len);        
        strncpy(self->data.LongCustomerName, RspRepealField_LongCustomerName, sizeof(self->data.LongCustomerName) );
        RspRepealField_LongCustomerName = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcRspRepealField_dealloc(PyCThostFtdcRspRepealField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRspRepealField_repr(PyCThostFtdcRspRepealField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:i,s:i,s:c,s:c,s:i,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:c,s:y,s:d,s:d,s:c,s:d,s:d,s:y,s:y,s:c,s:y,s:c,s:y,s:y,s:c,s:c,s:y,s:i,s:i,s:c,s:i,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:i,s:i,s:c,s:c,s:i,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:c,s:s,s:c,s:s,s:s,s:s,s:s,s:i,s:i,s:s,s:c,s:s,s:d,s:d,s:c,s:d,s:d,s:s,s:s,s:c,s:s,s:c,s:s,s:s,s:c,s:c,s:s,s:i,s:i,s:c,s:i,s:s,s:s}"
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
        ,"ErrorID", self->data.ErrorID 
        ,"ErrorMsg", self->data.ErrorMsg//, (Py_ssize_t)sizeof(self->data.ErrorMsg) 
        ,"LongCustomerName", self->data.LongCustomerName//, (Py_ssize_t)sizeof(self->data.LongCustomerName) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspRepealField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///冲正时间间隔
// TThostFtdcRepealTimeIntervalType int
static PyObject *PyCThostFtdcRspRepealField_get_RepealTimeInterval(PyCThostFtdcRspRepealField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RepealTimeInterval);
#else
    return PyInt_FromLong(self->data.RepealTimeInterval);
#endif
}

///冲正时间间隔
// TThostFtdcRepealTimeIntervalType int
static int PyCThostFtdcRspRepealField_set_RepealTimeInterval(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_RepealedTimes(PyCThostFtdcRspRepealField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RepealedTimes);
#else
    return PyInt_FromLong(self->data.RepealedTimes);
#endif
}

///已经冲正次数
// TThostFtdcRepealedTimesType int
static int PyCThostFtdcRspRepealField_set_RepealedTimes(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_BankRepealFlag(PyCThostFtdcRspRepealField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BankRepealFlag), 1);
}

///银行冲正标志
// TThostFtdcBankRepealFlagType char
static int PyCThostFtdcRspRepealField_set_BankRepealFlag(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_BrokerRepealFlag(PyCThostFtdcRspRepealField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BrokerRepealFlag), 1);
}

///期商冲正标志
// TThostFtdcBrokerRepealFlagType char
static int PyCThostFtdcRspRepealField_set_BrokerRepealFlag(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_PlateRepealSerial(PyCThostFtdcRspRepealField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.PlateRepealSerial);
#else
    return PyInt_FromLong(self->data.PlateRepealSerial);
#endif
}

///被冲正平台流水号
// TThostFtdcPlateSerialType int
static int PyCThostFtdcRspRepealField_set_PlateRepealSerial(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_BankRepealSerial(PyCThostFtdcRspRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankRepealSerial, (Py_ssize_t)sizeof(self->data.BankRepealSerial));
    return PyBytes_FromString(self->data.BankRepealSerial);
}

///被冲正银行流水号
// TThostFtdcBankSerialType char[13]
static int PyCThostFtdcRspRepealField_set_BankRepealSerial(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_FutureRepealSerial(PyCThostFtdcRspRepealField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FutureRepealSerial);
#else
    return PyInt_FromLong(self->data.FutureRepealSerial);
#endif
}

///被冲正期货流水号
// TThostFtdcFutureSerialType int
static int PyCThostFtdcRspRepealField_set_FutureRepealSerial(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_TradeCode(PyCThostFtdcRspRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeCode, (Py_ssize_t)sizeof(self->data.TradeCode));
    return PyBytes_FromString(self->data.TradeCode);
}

///业务功能码
// TThostFtdcTradeCodeType char[7]
static int PyCThostFtdcRspRepealField_set_TradeCode(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_BankID(PyCThostFtdcRspRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankID, (Py_ssize_t)sizeof(self->data.BankID));
    return PyBytes_FromString(self->data.BankID);
}

///银行代码
// TThostFtdcBankIDType char[4]
static int PyCThostFtdcRspRepealField_set_BankID(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_BankBranchID(PyCThostFtdcRspRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankBranchID, (Py_ssize_t)sizeof(self->data.BankBranchID));
    return PyBytes_FromString(self->data.BankBranchID);
}

///银行分支机构代码
// TThostFtdcBankBrchIDType char[5]
static int PyCThostFtdcRspRepealField_set_BankBranchID(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_BrokerID(PyCThostFtdcRspRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///期商代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcRspRepealField_set_BrokerID(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_BrokerBranchID(PyCThostFtdcRspRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerBranchID, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
    return PyBytes_FromString(self->data.BrokerBranchID);
}

///期商分支机构代码
// TThostFtdcFutureBranchIDType char[31]
static int PyCThostFtdcRspRepealField_set_BrokerBranchID(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_TradeDate(PyCThostFtdcRspRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeDate, (Py_ssize_t)sizeof(self->data.TradeDate));
    return PyBytes_FromString(self->data.TradeDate);
}

///交易日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcRspRepealField_set_TradeDate(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_TradeTime(PyCThostFtdcRspRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeTime, (Py_ssize_t)sizeof(self->data.TradeTime));
    return PyBytes_FromString(self->data.TradeTime);
}

///交易时间
// TThostFtdcTradeTimeType char[9]
static int PyCThostFtdcRspRepealField_set_TradeTime(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_BankSerial(PyCThostFtdcRspRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankSerial, (Py_ssize_t)sizeof(self->data.BankSerial));
    return PyBytes_FromString(self->data.BankSerial);
}

///银行流水号
// TThostFtdcBankSerialType char[13]
static int PyCThostFtdcRspRepealField_set_BankSerial(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_TradingDay(PyCThostFtdcRspRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易系统日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcRspRepealField_set_TradingDay(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_PlateSerial(PyCThostFtdcRspRepealField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.PlateSerial);
#else
    return PyInt_FromLong(self->data.PlateSerial);
#endif
}

///银期平台消息流水号
// TThostFtdcSerialType int
static int PyCThostFtdcRspRepealField_set_PlateSerial(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_LastFragment(PyCThostFtdcRspRepealField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

///最后分片标志
// TThostFtdcLastFragmentType char
static int PyCThostFtdcRspRepealField_set_LastFragment(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_SessionID(PyCThostFtdcRspRepealField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话号
// TThostFtdcSessionIDType int
static int PyCThostFtdcRspRepealField_set_SessionID(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_CustomerName(PyCThostFtdcRspRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CustomerName, (Py_ssize_t)sizeof(self->data.CustomerName));
    return PyBytes_FromString(self->data.CustomerName);
}

///客户姓名
// TThostFtdcIndividualNameType char[51]
static int PyCThostFtdcRspRepealField_set_CustomerName(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_IdCardType(PyCThostFtdcRspRepealField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.IdCardType), 1);
}

///证件类型
// TThostFtdcIdCardTypeType char
static int PyCThostFtdcRspRepealField_set_IdCardType(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_IdentifiedCardNo(PyCThostFtdcRspRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IdentifiedCardNo, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
    return PyBytes_FromString(self->data.IdentifiedCardNo);
}

///证件号码
// TThostFtdcIdentifiedCardNoType char[51]
static int PyCThostFtdcRspRepealField_set_IdentifiedCardNo(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_CustType(PyCThostFtdcRspRepealField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.CustType), 1);
}

///客户类型
// TThostFtdcCustTypeType char
static int PyCThostFtdcRspRepealField_set_CustType(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_BankAccount(PyCThostFtdcRspRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankAccount, (Py_ssize_t)sizeof(self->data.BankAccount));
    return PyBytes_FromString(self->data.BankAccount);
}

///银行帐号
// TThostFtdcBankAccountType char[41]
static int PyCThostFtdcRspRepealField_set_BankAccount(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_BankPassWord(PyCThostFtdcRspRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankPassWord, (Py_ssize_t)sizeof(self->data.BankPassWord));
    return PyBytes_FromString(self->data.BankPassWord);
}

///银行密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcRspRepealField_set_BankPassWord(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_AccountID(PyCThostFtdcRspRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AccountID, (Py_ssize_t)sizeof(self->data.AccountID));
    return PyBytes_FromString(self->data.AccountID);
}

///投资者帐号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcRspRepealField_set_AccountID(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_Password(PyCThostFtdcRspRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Password, (Py_ssize_t)sizeof(self->data.Password));
    return PyBytes_FromString(self->data.Password);
}

///期货密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcRspRepealField_set_Password(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_InstallID(PyCThostFtdcRspRepealField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcRspRepealField_set_InstallID(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_FutureSerial(PyCThostFtdcRspRepealField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FutureSerial);
#else
    return PyInt_FromLong(self->data.FutureSerial);
#endif
}

///期货公司流水号
// TThostFtdcFutureSerialType int
static int PyCThostFtdcRspRepealField_set_FutureSerial(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_UserID(PyCThostFtdcRspRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户标识
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcRspRepealField_set_UserID(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_VerifyCertNoFlag(PyCThostFtdcRspRepealField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.VerifyCertNoFlag), 1);
}

///验证客户证件号码标志
// TThostFtdcYesNoIndicatorType char
static int PyCThostFtdcRspRepealField_set_VerifyCertNoFlag(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_CurrencyID(PyCThostFtdcRspRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcRspRepealField_set_CurrencyID(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_TradeAmount(PyCThostFtdcRspRepealField *self, void *closure) {
    return PyFloat_FromDouble(self->data.TradeAmount);
}

///转帐金额
// TThostFtdcTradeAmountType double
static int PyCThostFtdcRspRepealField_set_TradeAmount(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_FutureFetchAmount(PyCThostFtdcRspRepealField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FutureFetchAmount);
}

///期货可取金额
// TThostFtdcTradeAmountType double
static int PyCThostFtdcRspRepealField_set_FutureFetchAmount(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_FeePayFlag(PyCThostFtdcRspRepealField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.FeePayFlag), 1);
}

///费用支付标志
// TThostFtdcFeePayFlagType char
static int PyCThostFtdcRspRepealField_set_FeePayFlag(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_CustFee(PyCThostFtdcRspRepealField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CustFee);
}

///应收客户费用
// TThostFtdcCustFeeType double
static int PyCThostFtdcRspRepealField_set_CustFee(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_BrokerFee(PyCThostFtdcRspRepealField *self, void *closure) {
    return PyFloat_FromDouble(self->data.BrokerFee);
}

///应收期货公司费用
// TThostFtdcFutureFeeType double
static int PyCThostFtdcRspRepealField_set_BrokerFee(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_Message(PyCThostFtdcRspRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Message, (Py_ssize_t)sizeof(self->data.Message));
    return PyBytes_FromString(self->data.Message);
}

///发送方给接收方的消息
// TThostFtdcAddInfoType char[129]
static int PyCThostFtdcRspRepealField_set_Message(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_Digest(PyCThostFtdcRspRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Digest, (Py_ssize_t)sizeof(self->data.Digest));
    return PyBytes_FromString(self->data.Digest);
}

///摘要
// TThostFtdcDigestType char[36]
static int PyCThostFtdcRspRepealField_set_Digest(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_BankAccType(PyCThostFtdcRspRepealField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BankAccType), 1);
}

///银行帐号类型
// TThostFtdcBankAccTypeType char
static int PyCThostFtdcRspRepealField_set_BankAccType(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_DeviceID(PyCThostFtdcRspRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.DeviceID, (Py_ssize_t)sizeof(self->data.DeviceID));
    return PyBytes_FromString(self->data.DeviceID);
}

///渠道标志
// TThostFtdcDeviceIDType char[3]
static int PyCThostFtdcRspRepealField_set_DeviceID(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_BankSecuAccType(PyCThostFtdcRspRepealField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BankSecuAccType), 1);
}

///期货单位帐号类型
// TThostFtdcBankAccTypeType char
static int PyCThostFtdcRspRepealField_set_BankSecuAccType(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_BrokerIDByBank(PyCThostFtdcRspRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerIDByBank, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
    return PyBytes_FromString(self->data.BrokerIDByBank);
}

///期货公司银行编码
// TThostFtdcBankCodingForFutureType char[33]
static int PyCThostFtdcRspRepealField_set_BrokerIDByBank(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_BankSecuAcc(PyCThostFtdcRspRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankSecuAcc, (Py_ssize_t)sizeof(self->data.BankSecuAcc));
    return PyBytes_FromString(self->data.BankSecuAcc);
}

///期货单位帐号
// TThostFtdcBankAccountType char[41]
static int PyCThostFtdcRspRepealField_set_BankSecuAcc(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_BankPwdFlag(PyCThostFtdcRspRepealField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BankPwdFlag), 1);
}

///银行密码标志
// TThostFtdcPwdFlagType char
static int PyCThostFtdcRspRepealField_set_BankPwdFlag(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_SecuPwdFlag(PyCThostFtdcRspRepealField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.SecuPwdFlag), 1);
}

///期货资金密码核对标志
// TThostFtdcPwdFlagType char
static int PyCThostFtdcRspRepealField_set_SecuPwdFlag(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_OperNo(PyCThostFtdcRspRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OperNo, (Py_ssize_t)sizeof(self->data.OperNo));
    return PyBytes_FromString(self->data.OperNo);
}

///交易柜员
// TThostFtdcOperNoType char[17]
static int PyCThostFtdcRspRepealField_set_OperNo(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_RequestID(PyCThostFtdcRspRepealField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcRspRepealField_set_RequestID(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_TID(PyCThostFtdcRspRepealField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.TID);
#else
    return PyInt_FromLong(self->data.TID);
#endif
}

///交易ID
// TThostFtdcTIDType int
static int PyCThostFtdcRspRepealField_set_TID(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_TransferStatus(PyCThostFtdcRspRepealField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.TransferStatus), 1);
}

///转账交易状态
// TThostFtdcTransferStatusType char
static int PyCThostFtdcRspRepealField_set_TransferStatus(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_ErrorID(PyCThostFtdcRspRepealField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.ErrorID);
#else
    return PyInt_FromLong(self->data.ErrorID);
#endif
}

///错误代码
// TThostFtdcErrorIDType int
static int PyCThostFtdcRspRepealField_set_ErrorID(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_ErrorMsg(PyCThostFtdcRspRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ErrorMsg, (Py_ssize_t)sizeof(self->data.ErrorMsg));
    return PyBytes_FromString(self->data.ErrorMsg);
}

///错误信息
// TThostFtdcErrorMsgType char[81]
static int PyCThostFtdcRspRepealField_set_ErrorMsg(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspRepealField_get_LongCustomerName(PyCThostFtdcRspRepealField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.LongCustomerName, (Py_ssize_t)sizeof(self->data.LongCustomerName));
    return PyBytes_FromString(self->data.LongCustomerName);
}

///长客户姓名
// TThostFtdcLongIndividualNameType char[161]
static int PyCThostFtdcRspRepealField_set_LongCustomerName(PyCThostFtdcRspRepealField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcRspRepealField_getset[] = {
    ///冲正时间间隔 
    {(char *)"RepealTimeInterval", (getter)PyCThostFtdcRspRepealField_get_RepealTimeInterval, (setter)PyCThostFtdcRspRepealField_set_RepealTimeInterval, (char *)"RepealTimeInterval", NULL},
    ///已经冲正次数 
    {(char *)"RepealedTimes", (getter)PyCThostFtdcRspRepealField_get_RepealedTimes, (setter)PyCThostFtdcRspRepealField_set_RepealedTimes, (char *)"RepealedTimes", NULL},
    ///银行冲正标志 
    {(char *)"BankRepealFlag", (getter)PyCThostFtdcRspRepealField_get_BankRepealFlag, (setter)PyCThostFtdcRspRepealField_set_BankRepealFlag, (char *)"BankRepealFlag", NULL},
    ///期商冲正标志 
    {(char *)"BrokerRepealFlag", (getter)PyCThostFtdcRspRepealField_get_BrokerRepealFlag, (setter)PyCThostFtdcRspRepealField_set_BrokerRepealFlag, (char *)"BrokerRepealFlag", NULL},
    ///被冲正平台流水号 
    {(char *)"PlateRepealSerial", (getter)PyCThostFtdcRspRepealField_get_PlateRepealSerial, (setter)PyCThostFtdcRspRepealField_set_PlateRepealSerial, (char *)"PlateRepealSerial", NULL},
    ///被冲正银行流水号 
    {(char *)"BankRepealSerial", (getter)PyCThostFtdcRspRepealField_get_BankRepealSerial, (setter)PyCThostFtdcRspRepealField_set_BankRepealSerial, (char *)"BankRepealSerial", NULL},
    ///被冲正期货流水号 
    {(char *)"FutureRepealSerial", (getter)PyCThostFtdcRspRepealField_get_FutureRepealSerial, (setter)PyCThostFtdcRspRepealField_set_FutureRepealSerial, (char *)"FutureRepealSerial", NULL},
    ///业务功能码 
    {(char *)"TradeCode", (getter)PyCThostFtdcRspRepealField_get_TradeCode, (setter)PyCThostFtdcRspRepealField_set_TradeCode, (char *)"TradeCode", NULL},
    ///银行代码 
    {(char *)"BankID", (getter)PyCThostFtdcRspRepealField_get_BankID, (setter)PyCThostFtdcRspRepealField_set_BankID, (char *)"BankID", NULL},
    ///银行分支机构代码 
    {(char *)"BankBranchID", (getter)PyCThostFtdcRspRepealField_get_BankBranchID, (setter)PyCThostFtdcRspRepealField_set_BankBranchID, (char *)"BankBranchID", NULL},
    ///期商代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcRspRepealField_get_BrokerID, (setter)PyCThostFtdcRspRepealField_set_BrokerID, (char *)"BrokerID", NULL},
    ///期商分支机构代码 
    {(char *)"BrokerBranchID", (getter)PyCThostFtdcRspRepealField_get_BrokerBranchID, (setter)PyCThostFtdcRspRepealField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
    ///交易日期 
    {(char *)"TradeDate", (getter)PyCThostFtdcRspRepealField_get_TradeDate, (setter)PyCThostFtdcRspRepealField_set_TradeDate, (char *)"TradeDate", NULL},
    ///交易时间 
    {(char *)"TradeTime", (getter)PyCThostFtdcRspRepealField_get_TradeTime, (setter)PyCThostFtdcRspRepealField_set_TradeTime, (char *)"TradeTime", NULL},
    ///银行流水号 
    {(char *)"BankSerial", (getter)PyCThostFtdcRspRepealField_get_BankSerial, (setter)PyCThostFtdcRspRepealField_set_BankSerial, (char *)"BankSerial", NULL},
    ///交易系统日期 
    {(char *)"TradingDay", (getter)PyCThostFtdcRspRepealField_get_TradingDay, (setter)PyCThostFtdcRspRepealField_set_TradingDay, (char *)"TradingDay", NULL},
    ///银期平台消息流水号 
    {(char *)"PlateSerial", (getter)PyCThostFtdcRspRepealField_get_PlateSerial, (setter)PyCThostFtdcRspRepealField_set_PlateSerial, (char *)"PlateSerial", NULL},
    ///最后分片标志 
    {(char *)"LastFragment", (getter)PyCThostFtdcRspRepealField_get_LastFragment, (setter)PyCThostFtdcRspRepealField_set_LastFragment, (char *)"LastFragment", NULL},
    ///会话号 
    {(char *)"SessionID", (getter)PyCThostFtdcRspRepealField_get_SessionID, (setter)PyCThostFtdcRspRepealField_set_SessionID, (char *)"SessionID", NULL},
    ///客户姓名 
    {(char *)"CustomerName", (getter)PyCThostFtdcRspRepealField_get_CustomerName, (setter)PyCThostFtdcRspRepealField_set_CustomerName, (char *)"CustomerName", NULL},
    ///证件类型 
    {(char *)"IdCardType", (getter)PyCThostFtdcRspRepealField_get_IdCardType, (setter)PyCThostFtdcRspRepealField_set_IdCardType, (char *)"IdCardType", NULL},
    ///证件号码 
    {(char *)"IdentifiedCardNo", (getter)PyCThostFtdcRspRepealField_get_IdentifiedCardNo, (setter)PyCThostFtdcRspRepealField_set_IdentifiedCardNo, (char *)"IdentifiedCardNo", NULL},
    ///客户类型 
    {(char *)"CustType", (getter)PyCThostFtdcRspRepealField_get_CustType, (setter)PyCThostFtdcRspRepealField_set_CustType, (char *)"CustType", NULL},
    ///银行帐号 
    {(char *)"BankAccount", (getter)PyCThostFtdcRspRepealField_get_BankAccount, (setter)PyCThostFtdcRspRepealField_set_BankAccount, (char *)"BankAccount", NULL},
    ///银行密码 
    {(char *)"BankPassWord", (getter)PyCThostFtdcRspRepealField_get_BankPassWord, (setter)PyCThostFtdcRspRepealField_set_BankPassWord, (char *)"BankPassWord", NULL},
    ///投资者帐号 
    {(char *)"AccountID", (getter)PyCThostFtdcRspRepealField_get_AccountID, (setter)PyCThostFtdcRspRepealField_set_AccountID, (char *)"AccountID", NULL},
    ///期货密码 
    {(char *)"Password", (getter)PyCThostFtdcRspRepealField_get_Password, (setter)PyCThostFtdcRspRepealField_set_Password, (char *)"Password", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcRspRepealField_get_InstallID, (setter)PyCThostFtdcRspRepealField_set_InstallID, (char *)"InstallID", NULL},
    ///期货公司流水号 
    {(char *)"FutureSerial", (getter)PyCThostFtdcRspRepealField_get_FutureSerial, (setter)PyCThostFtdcRspRepealField_set_FutureSerial, (char *)"FutureSerial", NULL},
    ///用户标识 
    {(char *)"UserID", (getter)PyCThostFtdcRspRepealField_get_UserID, (setter)PyCThostFtdcRspRepealField_set_UserID, (char *)"UserID", NULL},
    ///验证客户证件号码标志 
    {(char *)"VerifyCertNoFlag", (getter)PyCThostFtdcRspRepealField_get_VerifyCertNoFlag, (setter)PyCThostFtdcRspRepealField_set_VerifyCertNoFlag, (char *)"VerifyCertNoFlag", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcRspRepealField_get_CurrencyID, (setter)PyCThostFtdcRspRepealField_set_CurrencyID, (char *)"CurrencyID", NULL},
    ///转帐金额 
    {(char *)"TradeAmount", (getter)PyCThostFtdcRspRepealField_get_TradeAmount, (setter)PyCThostFtdcRspRepealField_set_TradeAmount, (char *)"TradeAmount", NULL},
    ///期货可取金额 
    {(char *)"FutureFetchAmount", (getter)PyCThostFtdcRspRepealField_get_FutureFetchAmount, (setter)PyCThostFtdcRspRepealField_set_FutureFetchAmount, (char *)"FutureFetchAmount", NULL},
    ///费用支付标志 
    {(char *)"FeePayFlag", (getter)PyCThostFtdcRspRepealField_get_FeePayFlag, (setter)PyCThostFtdcRspRepealField_set_FeePayFlag, (char *)"FeePayFlag", NULL},
    ///应收客户费用 
    {(char *)"CustFee", (getter)PyCThostFtdcRspRepealField_get_CustFee, (setter)PyCThostFtdcRspRepealField_set_CustFee, (char *)"CustFee", NULL},
    ///应收期货公司费用 
    {(char *)"BrokerFee", (getter)PyCThostFtdcRspRepealField_get_BrokerFee, (setter)PyCThostFtdcRspRepealField_set_BrokerFee, (char *)"BrokerFee", NULL},
    ///发送方给接收方的消息 
    {(char *)"Message", (getter)PyCThostFtdcRspRepealField_get_Message, (setter)PyCThostFtdcRspRepealField_set_Message, (char *)"Message", NULL},
    ///摘要 
    {(char *)"Digest", (getter)PyCThostFtdcRspRepealField_get_Digest, (setter)PyCThostFtdcRspRepealField_set_Digest, (char *)"Digest", NULL},
    ///银行帐号类型 
    {(char *)"BankAccType", (getter)PyCThostFtdcRspRepealField_get_BankAccType, (setter)PyCThostFtdcRspRepealField_set_BankAccType, (char *)"BankAccType", NULL},
    ///渠道标志 
    {(char *)"DeviceID", (getter)PyCThostFtdcRspRepealField_get_DeviceID, (setter)PyCThostFtdcRspRepealField_set_DeviceID, (char *)"DeviceID", NULL},
    ///期货单位帐号类型 
    {(char *)"BankSecuAccType", (getter)PyCThostFtdcRspRepealField_get_BankSecuAccType, (setter)PyCThostFtdcRspRepealField_set_BankSecuAccType, (char *)"BankSecuAccType", NULL},
    ///期货公司银行编码 
    {(char *)"BrokerIDByBank", (getter)PyCThostFtdcRspRepealField_get_BrokerIDByBank, (setter)PyCThostFtdcRspRepealField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
    ///期货单位帐号 
    {(char *)"BankSecuAcc", (getter)PyCThostFtdcRspRepealField_get_BankSecuAcc, (setter)PyCThostFtdcRspRepealField_set_BankSecuAcc, (char *)"BankSecuAcc", NULL},
    ///银行密码标志 
    {(char *)"BankPwdFlag", (getter)PyCThostFtdcRspRepealField_get_BankPwdFlag, (setter)PyCThostFtdcRspRepealField_set_BankPwdFlag, (char *)"BankPwdFlag", NULL},
    ///期货资金密码核对标志 
    {(char *)"SecuPwdFlag", (getter)PyCThostFtdcRspRepealField_get_SecuPwdFlag, (setter)PyCThostFtdcRspRepealField_set_SecuPwdFlag, (char *)"SecuPwdFlag", NULL},
    ///交易柜员 
    {(char *)"OperNo", (getter)PyCThostFtdcRspRepealField_get_OperNo, (setter)PyCThostFtdcRspRepealField_set_OperNo, (char *)"OperNo", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcRspRepealField_get_RequestID, (setter)PyCThostFtdcRspRepealField_set_RequestID, (char *)"RequestID", NULL},
    ///交易ID 
    {(char *)"TID", (getter)PyCThostFtdcRspRepealField_get_TID, (setter)PyCThostFtdcRspRepealField_set_TID, (char *)"TID", NULL},
    ///转账交易状态 
    {(char *)"TransferStatus", (getter)PyCThostFtdcRspRepealField_get_TransferStatus, (setter)PyCThostFtdcRspRepealField_set_TransferStatus, (char *)"TransferStatus", NULL},
    ///错误代码 
    {(char *)"ErrorID", (getter)PyCThostFtdcRspRepealField_get_ErrorID, (setter)PyCThostFtdcRspRepealField_set_ErrorID, (char *)"ErrorID", NULL},
    ///错误信息 
    {(char *)"ErrorMsg", (getter)PyCThostFtdcRspRepealField_get_ErrorMsg, (setter)PyCThostFtdcRspRepealField_set_ErrorMsg, (char *)"ErrorMsg", NULL},
    ///长客户姓名 
    {(char *)"LongCustomerName", (getter)PyCThostFtdcRspRepealField_get_LongCustomerName, (setter)PyCThostFtdcRspRepealField_set_LongCustomerName, (char *)"LongCustomerName", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRspRepealFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRspRepealField",	/* tp_name */
	sizeof(PyCThostFtdcRspRepealField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRspRepealField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRspRepealField_repr,   /* tp_repr */
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
	"CThostFtdcRspRepealField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRspRepealField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRspRepealField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRspRepealField_new,       /* tp_new */
};

int PyCThostFtdcRspRepealFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRspRepealField  */
	if (PyType_Ready(&PyCThostFtdcRspRepealFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRspRepealField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRspRepealFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRspRepealField", (PyObject *)&PyCThostFtdcRspRepealFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRspRepealField to module");
        Py_DECREF(&PyCThostFtdcRspRepealFieldType);
		return -1;
    }

    return 0;
}
