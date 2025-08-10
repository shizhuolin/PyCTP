
#include "PyCThostFtdcNotifyQueryFutureAccountBySecField.h"

///查询银行资金帐户信息通知 要发往次席

static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcNotifyQueryFutureAccountBySecField *self = (PyCThostFtdcNotifyQueryFutureAccountBySecField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcNotifyQueryFutureAccountBySecField_init(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "CustType", "BankAccount", "BankPassWord", "AccountID", "Password", "FutureSerial", "InstallID", "UserID", "VerifyCertNoFlag", "CurrencyID", "Digest", "BankAccType", "DeviceID", "BankSecuAccType", "BrokerIDByBank", "BankSecuAcc", "BankPwdFlag", "SecuPwdFlag", "OperNo", "RequestID", "TID", "BankUseAmount", "BankFetchAmount", "ErrorID", "ErrorMsg", "LongCustomerName", "DRIdentityID", "SecFutureSerial",  NULL};


    ///业务功能码
    // TThostFtdcTradeCodeType char[7]
    const char *NotifyQueryFutureAccountBySecField_TradeCode = NULL;
    Py_ssize_t NotifyQueryFutureAccountBySecField_TradeCode_len = 0;
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    const char *NotifyQueryFutureAccountBySecField_BankID = NULL;
    Py_ssize_t NotifyQueryFutureAccountBySecField_BankID_len = 0;
            
    ///银行分支机构代码
    // TThostFtdcBankBrchIDType char[5]
    const char *NotifyQueryFutureAccountBySecField_BankBranchID = NULL;
    Py_ssize_t NotifyQueryFutureAccountBySecField_BankBranchID_len = 0;
            
    ///期商代码
    // TThostFtdcBrokerIDType char[11]
    const char *NotifyQueryFutureAccountBySecField_BrokerID = NULL;
    Py_ssize_t NotifyQueryFutureAccountBySecField_BrokerID_len = 0;
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    const char *NotifyQueryFutureAccountBySecField_BrokerBranchID = NULL;
    Py_ssize_t NotifyQueryFutureAccountBySecField_BrokerBranchID_len = 0;
            
    ///交易日期
    // TThostFtdcTradeDateType char[9]
    const char *NotifyQueryFutureAccountBySecField_TradeDate = NULL;
    Py_ssize_t NotifyQueryFutureAccountBySecField_TradeDate_len = 0;
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    const char *NotifyQueryFutureAccountBySecField_TradeTime = NULL;
    Py_ssize_t NotifyQueryFutureAccountBySecField_TradeTime_len = 0;
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    const char *NotifyQueryFutureAccountBySecField_BankSerial = NULL;
    Py_ssize_t NotifyQueryFutureAccountBySecField_BankSerial_len = 0;
            
    ///交易系统日期
    // TThostFtdcTradeDateType char[9]
    const char *NotifyQueryFutureAccountBySecField_TradingDay = NULL;
    Py_ssize_t NotifyQueryFutureAccountBySecField_TradingDay_len = 0;
            
    ///银期平台消息流水号
    // TThostFtdcSerialType int
    int NotifyQueryFutureAccountBySecField_PlateSerial = 0;
        
    ///最后分片标志
    // TThostFtdcLastFragmentType char
    char NotifyQueryFutureAccountBySecField_LastFragment = 0;
            
    ///会话号
    // TThostFtdcSessionIDType int
    int NotifyQueryFutureAccountBySecField_SessionID = 0;
        
    ///客户姓名
    // TThostFtdcIndividualNameType char[51]
    const char *NotifyQueryFutureAccountBySecField_CustomerName = NULL;
    Py_ssize_t NotifyQueryFutureAccountBySecField_CustomerName_len = 0;
            
    ///证件类型
    // TThostFtdcIdCardTypeType char
    char NotifyQueryFutureAccountBySecField_IdCardType = 0;
            
    ///证件号码
    // TThostFtdcIdentifiedCardNoType char[51]
    const char *NotifyQueryFutureAccountBySecField_IdentifiedCardNo = NULL;
    Py_ssize_t NotifyQueryFutureAccountBySecField_IdentifiedCardNo_len = 0;
            
    ///客户类型
    // TThostFtdcCustTypeType char
    char NotifyQueryFutureAccountBySecField_CustType = 0;
            
    ///银行帐号
    // TThostFtdcBankAccountType char[41]
    const char *NotifyQueryFutureAccountBySecField_BankAccount = NULL;
    Py_ssize_t NotifyQueryFutureAccountBySecField_BankAccount_len = 0;
            
    ///银行密码
    // TThostFtdcPasswordType char[41]
    const char *NotifyQueryFutureAccountBySecField_BankPassWord = NULL;
    Py_ssize_t NotifyQueryFutureAccountBySecField_BankPassWord_len = 0;
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    const char *NotifyQueryFutureAccountBySecField_AccountID = NULL;
    Py_ssize_t NotifyQueryFutureAccountBySecField_AccountID_len = 0;
            
    ///期货密码
    // TThostFtdcPasswordType char[41]
    const char *NotifyQueryFutureAccountBySecField_Password = NULL;
    Py_ssize_t NotifyQueryFutureAccountBySecField_Password_len = 0;
            
    ///期货公司流水号
    // TThostFtdcFutureSerialType int
    int NotifyQueryFutureAccountBySecField_FutureSerial = 0;
        
    ///安装编号
    // TThostFtdcInstallIDType int
    int NotifyQueryFutureAccountBySecField_InstallID = 0;
        
    ///用户标识
    // TThostFtdcUserIDType char[16]
    const char *NotifyQueryFutureAccountBySecField_UserID = NULL;
    Py_ssize_t NotifyQueryFutureAccountBySecField_UserID_len = 0;
            
    ///验证客户证件号码标志
    // TThostFtdcYesNoIndicatorType char
    char NotifyQueryFutureAccountBySecField_VerifyCertNoFlag = 0;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *NotifyQueryFutureAccountBySecField_CurrencyID = NULL;
    Py_ssize_t NotifyQueryFutureAccountBySecField_CurrencyID_len = 0;
            
    ///摘要
    // TThostFtdcDigestType char[36]
    const char *NotifyQueryFutureAccountBySecField_Digest = NULL;
    Py_ssize_t NotifyQueryFutureAccountBySecField_Digest_len = 0;
            
    ///银行帐号类型
    // TThostFtdcBankAccTypeType char
    char NotifyQueryFutureAccountBySecField_BankAccType = 0;
            
    ///渠道标志
    // TThostFtdcDeviceIDType char[3]
    const char *NotifyQueryFutureAccountBySecField_DeviceID = NULL;
    Py_ssize_t NotifyQueryFutureAccountBySecField_DeviceID_len = 0;
            
    ///期货单位帐号类型
    // TThostFtdcBankAccTypeType char
    char NotifyQueryFutureAccountBySecField_BankSecuAccType = 0;
            
    ///期货公司银行编码
    // TThostFtdcBankCodingForFutureType char[33]
    const char *NotifyQueryFutureAccountBySecField_BrokerIDByBank = NULL;
    Py_ssize_t NotifyQueryFutureAccountBySecField_BrokerIDByBank_len = 0;
            
    ///期货单位帐号
    // TThostFtdcBankAccountType char[41]
    const char *NotifyQueryFutureAccountBySecField_BankSecuAcc = NULL;
    Py_ssize_t NotifyQueryFutureAccountBySecField_BankSecuAcc_len = 0;
            
    ///银行密码标志
    // TThostFtdcPwdFlagType char
    char NotifyQueryFutureAccountBySecField_BankPwdFlag = 0;
            
    ///期货资金密码核对标志
    // TThostFtdcPwdFlagType char
    char NotifyQueryFutureAccountBySecField_SecuPwdFlag = 0;
            
    ///交易柜员
    // TThostFtdcOperNoType char[17]
    const char *NotifyQueryFutureAccountBySecField_OperNo = NULL;
    Py_ssize_t NotifyQueryFutureAccountBySecField_OperNo_len = 0;
            
    ///请求编号
    // TThostFtdcRequestIDType int
    int NotifyQueryFutureAccountBySecField_RequestID = 0;
        
    ///交易ID
    // TThostFtdcTIDType int
    int NotifyQueryFutureAccountBySecField_TID = 0;
        
    ///银行可用金额
    // TThostFtdcTradeAmountType double
    double NotifyQueryFutureAccountBySecField_BankUseAmount = 0.0;
        
    ///银行可取金额
    // TThostFtdcTradeAmountType double
    double NotifyQueryFutureAccountBySecField_BankFetchAmount = 0.0;
        
    ///错误代码
    // TThostFtdcErrorIDType int
    int NotifyQueryFutureAccountBySecField_ErrorID = 0;
        
    ///错误信息
    // TThostFtdcErrorMsgType char[81]
    const char *NotifyQueryFutureAccountBySecField_ErrorMsg = NULL;
    Py_ssize_t NotifyQueryFutureAccountBySecField_ErrorMsg_len = 0;
            
    ///长客户姓名
    // TThostFtdcLongIndividualNameType char[161]
    const char *NotifyQueryFutureAccountBySecField_LongCustomerName = NULL;
    Py_ssize_t NotifyQueryFutureAccountBySecField_LongCustomerName_len = 0;
            
    ///交易中心代码
    // TThostFtdcDRIdentityIDType int
    int NotifyQueryFutureAccountBySecField_DRIdentityID = 0;
        
    ///次中心发起转账期货公司流水号
    // TThostFtdcFutureSerialType int
    int NotifyQueryFutureAccountBySecField_SecFutureSerial = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciy#cy#cy#y#y#y#iiy#cy#y#cy#cy#y#ccy#iiddiy#y#ii", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#icis#cs#cs#s#s#s#iis#cs#s#cs#cs#s#ccs#iiddis#s#ii", (char **)kwlist
#endif

        , &NotifyQueryFutureAccountBySecField_TradeCode, &NotifyQueryFutureAccountBySecField_TradeCode_len 
        , &NotifyQueryFutureAccountBySecField_BankID, &NotifyQueryFutureAccountBySecField_BankID_len 
        , &NotifyQueryFutureAccountBySecField_BankBranchID, &NotifyQueryFutureAccountBySecField_BankBranchID_len 
        , &NotifyQueryFutureAccountBySecField_BrokerID, &NotifyQueryFutureAccountBySecField_BrokerID_len 
        , &NotifyQueryFutureAccountBySecField_BrokerBranchID, &NotifyQueryFutureAccountBySecField_BrokerBranchID_len 
        , &NotifyQueryFutureAccountBySecField_TradeDate, &NotifyQueryFutureAccountBySecField_TradeDate_len 
        , &NotifyQueryFutureAccountBySecField_TradeTime, &NotifyQueryFutureAccountBySecField_TradeTime_len 
        , &NotifyQueryFutureAccountBySecField_BankSerial, &NotifyQueryFutureAccountBySecField_BankSerial_len 
        , &NotifyQueryFutureAccountBySecField_TradingDay, &NotifyQueryFutureAccountBySecField_TradingDay_len 
        , &NotifyQueryFutureAccountBySecField_PlateSerial 
        , &NotifyQueryFutureAccountBySecField_LastFragment 
        , &NotifyQueryFutureAccountBySecField_SessionID 
        , &NotifyQueryFutureAccountBySecField_CustomerName, &NotifyQueryFutureAccountBySecField_CustomerName_len 
        , &NotifyQueryFutureAccountBySecField_IdCardType 
        , &NotifyQueryFutureAccountBySecField_IdentifiedCardNo, &NotifyQueryFutureAccountBySecField_IdentifiedCardNo_len 
        , &NotifyQueryFutureAccountBySecField_CustType 
        , &NotifyQueryFutureAccountBySecField_BankAccount, &NotifyQueryFutureAccountBySecField_BankAccount_len 
        , &NotifyQueryFutureAccountBySecField_BankPassWord, &NotifyQueryFutureAccountBySecField_BankPassWord_len 
        , &NotifyQueryFutureAccountBySecField_AccountID, &NotifyQueryFutureAccountBySecField_AccountID_len 
        , &NotifyQueryFutureAccountBySecField_Password, &NotifyQueryFutureAccountBySecField_Password_len 
        , &NotifyQueryFutureAccountBySecField_FutureSerial 
        , &NotifyQueryFutureAccountBySecField_InstallID 
        , &NotifyQueryFutureAccountBySecField_UserID, &NotifyQueryFutureAccountBySecField_UserID_len 
        , &NotifyQueryFutureAccountBySecField_VerifyCertNoFlag 
        , &NotifyQueryFutureAccountBySecField_CurrencyID, &NotifyQueryFutureAccountBySecField_CurrencyID_len 
        , &NotifyQueryFutureAccountBySecField_Digest, &NotifyQueryFutureAccountBySecField_Digest_len 
        , &NotifyQueryFutureAccountBySecField_BankAccType 
        , &NotifyQueryFutureAccountBySecField_DeviceID, &NotifyQueryFutureAccountBySecField_DeviceID_len 
        , &NotifyQueryFutureAccountBySecField_BankSecuAccType 
        , &NotifyQueryFutureAccountBySecField_BrokerIDByBank, &NotifyQueryFutureAccountBySecField_BrokerIDByBank_len 
        , &NotifyQueryFutureAccountBySecField_BankSecuAcc, &NotifyQueryFutureAccountBySecField_BankSecuAcc_len 
        , &NotifyQueryFutureAccountBySecField_BankPwdFlag 
        , &NotifyQueryFutureAccountBySecField_SecuPwdFlag 
        , &NotifyQueryFutureAccountBySecField_OperNo, &NotifyQueryFutureAccountBySecField_OperNo_len 
        , &NotifyQueryFutureAccountBySecField_RequestID 
        , &NotifyQueryFutureAccountBySecField_TID 
        , &NotifyQueryFutureAccountBySecField_BankUseAmount 
        , &NotifyQueryFutureAccountBySecField_BankFetchAmount 
        , &NotifyQueryFutureAccountBySecField_ErrorID 
        , &NotifyQueryFutureAccountBySecField_ErrorMsg, &NotifyQueryFutureAccountBySecField_ErrorMsg_len 
        , &NotifyQueryFutureAccountBySecField_LongCustomerName, &NotifyQueryFutureAccountBySecField_LongCustomerName_len 
        , &NotifyQueryFutureAccountBySecField_DRIdentityID 
        , &NotifyQueryFutureAccountBySecField_SecFutureSerial 


    )) {
        return -1;
    }


    ///业务功能码
    // TThostFtdcTradeCodeType char[7]
    if( NotifyQueryFutureAccountBySecField_TradeCode != NULL ) {
        if(NotifyQueryFutureAccountBySecField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", NotifyQueryFutureAccountBySecField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
            return -1;
        }
        // memset(self->data.TradeCode, 0, sizeof(self->data.TradeCode));
        // memcpy(self->data.TradeCode, NotifyQueryFutureAccountBySecField_TradeCode, NotifyQueryFutureAccountBySecField_TradeCode_len);        
        strncpy(self->data.TradeCode, NotifyQueryFutureAccountBySecField_TradeCode, sizeof(self->data.TradeCode) );
        NotifyQueryFutureAccountBySecField_TradeCode = NULL;
    }
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    if( NotifyQueryFutureAccountBySecField_BankID != NULL ) {
        if(NotifyQueryFutureAccountBySecField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", NotifyQueryFutureAccountBySecField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
            return -1;
        }
        // memset(self->data.BankID, 0, sizeof(self->data.BankID));
        // memcpy(self->data.BankID, NotifyQueryFutureAccountBySecField_BankID, NotifyQueryFutureAccountBySecField_BankID_len);        
        strncpy(self->data.BankID, NotifyQueryFutureAccountBySecField_BankID, sizeof(self->data.BankID) );
        NotifyQueryFutureAccountBySecField_BankID = NULL;
    }
            
    ///银行分支机构代码
    // TThostFtdcBankBrchIDType char[5]
    if( NotifyQueryFutureAccountBySecField_BankBranchID != NULL ) {
        if(NotifyQueryFutureAccountBySecField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", NotifyQueryFutureAccountBySecField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
            return -1;
        }
        // memset(self->data.BankBranchID, 0, sizeof(self->data.BankBranchID));
        // memcpy(self->data.BankBranchID, NotifyQueryFutureAccountBySecField_BankBranchID, NotifyQueryFutureAccountBySecField_BankBranchID_len);        
        strncpy(self->data.BankBranchID, NotifyQueryFutureAccountBySecField_BankBranchID, sizeof(self->data.BankBranchID) );
        NotifyQueryFutureAccountBySecField_BankBranchID = NULL;
    }
            
    ///期商代码
    // TThostFtdcBrokerIDType char[11]
    if( NotifyQueryFutureAccountBySecField_BrokerID != NULL ) {
        if(NotifyQueryFutureAccountBySecField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", NotifyQueryFutureAccountBySecField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, NotifyQueryFutureAccountBySecField_BrokerID, NotifyQueryFutureAccountBySecField_BrokerID_len);        
        strncpy(self->data.BrokerID, NotifyQueryFutureAccountBySecField_BrokerID, sizeof(self->data.BrokerID) );
        NotifyQueryFutureAccountBySecField_BrokerID = NULL;
    }
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    if( NotifyQueryFutureAccountBySecField_BrokerBranchID != NULL ) {
        if(NotifyQueryFutureAccountBySecField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", NotifyQueryFutureAccountBySecField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
            return -1;
        }
        // memset(self->data.BrokerBranchID, 0, sizeof(self->data.BrokerBranchID));
        // memcpy(self->data.BrokerBranchID, NotifyQueryFutureAccountBySecField_BrokerBranchID, NotifyQueryFutureAccountBySecField_BrokerBranchID_len);        
        strncpy(self->data.BrokerBranchID, NotifyQueryFutureAccountBySecField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
        NotifyQueryFutureAccountBySecField_BrokerBranchID = NULL;
    }
            
    ///交易日期
    // TThostFtdcTradeDateType char[9]
    if( NotifyQueryFutureAccountBySecField_TradeDate != NULL ) {
        if(NotifyQueryFutureAccountBySecField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", NotifyQueryFutureAccountBySecField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
            return -1;
        }
        // memset(self->data.TradeDate, 0, sizeof(self->data.TradeDate));
        // memcpy(self->data.TradeDate, NotifyQueryFutureAccountBySecField_TradeDate, NotifyQueryFutureAccountBySecField_TradeDate_len);        
        strncpy(self->data.TradeDate, NotifyQueryFutureAccountBySecField_TradeDate, sizeof(self->data.TradeDate) );
        NotifyQueryFutureAccountBySecField_TradeDate = NULL;
    }
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    if( NotifyQueryFutureAccountBySecField_TradeTime != NULL ) {
        if(NotifyQueryFutureAccountBySecField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", NotifyQueryFutureAccountBySecField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
            return -1;
        }
        // memset(self->data.TradeTime, 0, sizeof(self->data.TradeTime));
        // memcpy(self->data.TradeTime, NotifyQueryFutureAccountBySecField_TradeTime, NotifyQueryFutureAccountBySecField_TradeTime_len);        
        strncpy(self->data.TradeTime, NotifyQueryFutureAccountBySecField_TradeTime, sizeof(self->data.TradeTime) );
        NotifyQueryFutureAccountBySecField_TradeTime = NULL;
    }
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    if( NotifyQueryFutureAccountBySecField_BankSerial != NULL ) {
        if(NotifyQueryFutureAccountBySecField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", NotifyQueryFutureAccountBySecField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
            return -1;
        }
        // memset(self->data.BankSerial, 0, sizeof(self->data.BankSerial));
        // memcpy(self->data.BankSerial, NotifyQueryFutureAccountBySecField_BankSerial, NotifyQueryFutureAccountBySecField_BankSerial_len);        
        strncpy(self->data.BankSerial, NotifyQueryFutureAccountBySecField_BankSerial, sizeof(self->data.BankSerial) );
        NotifyQueryFutureAccountBySecField_BankSerial = NULL;
    }
            
    ///交易系统日期
    // TThostFtdcTradeDateType char[9]
    if( NotifyQueryFutureAccountBySecField_TradingDay != NULL ) {
        if(NotifyQueryFutureAccountBySecField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", NotifyQueryFutureAccountBySecField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, NotifyQueryFutureAccountBySecField_TradingDay, NotifyQueryFutureAccountBySecField_TradingDay_len);        
        strncpy(self->data.TradingDay, NotifyQueryFutureAccountBySecField_TradingDay, sizeof(self->data.TradingDay) );
        NotifyQueryFutureAccountBySecField_TradingDay = NULL;
    }
            
    ///银期平台消息流水号
    // TThostFtdcSerialType int
    self->data.PlateSerial = NotifyQueryFutureAccountBySecField_PlateSerial;
        
    ///最后分片标志
    // TThostFtdcLastFragmentType char
    self->data.LastFragment = NotifyQueryFutureAccountBySecField_LastFragment;
            
    ///会话号
    // TThostFtdcSessionIDType int
    self->data.SessionID = NotifyQueryFutureAccountBySecField_SessionID;
        
    ///客户姓名
    // TThostFtdcIndividualNameType char[51]
    if( NotifyQueryFutureAccountBySecField_CustomerName != NULL ) {
        if(NotifyQueryFutureAccountBySecField_CustomerName_len > (Py_ssize_t)sizeof(self->data.CustomerName)) {
            PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is %zd)", NotifyQueryFutureAccountBySecField_CustomerName_len, (Py_ssize_t)sizeof(self->data.CustomerName));
            return -1;
        }
        // memset(self->data.CustomerName, 0, sizeof(self->data.CustomerName));
        // memcpy(self->data.CustomerName, NotifyQueryFutureAccountBySecField_CustomerName, NotifyQueryFutureAccountBySecField_CustomerName_len);        
        strncpy(self->data.CustomerName, NotifyQueryFutureAccountBySecField_CustomerName, sizeof(self->data.CustomerName) );
        NotifyQueryFutureAccountBySecField_CustomerName = NULL;
    }
            
    ///证件类型
    // TThostFtdcIdCardTypeType char
    self->data.IdCardType = NotifyQueryFutureAccountBySecField_IdCardType;
            
    ///证件号码
    // TThostFtdcIdentifiedCardNoType char[51]
    if( NotifyQueryFutureAccountBySecField_IdentifiedCardNo != NULL ) {
        if(NotifyQueryFutureAccountBySecField_IdentifiedCardNo_len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
            PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is %zd)", NotifyQueryFutureAccountBySecField_IdentifiedCardNo_len, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
            return -1;
        }
        // memset(self->data.IdentifiedCardNo, 0, sizeof(self->data.IdentifiedCardNo));
        // memcpy(self->data.IdentifiedCardNo, NotifyQueryFutureAccountBySecField_IdentifiedCardNo, NotifyQueryFutureAccountBySecField_IdentifiedCardNo_len);        
        strncpy(self->data.IdentifiedCardNo, NotifyQueryFutureAccountBySecField_IdentifiedCardNo, sizeof(self->data.IdentifiedCardNo) );
        NotifyQueryFutureAccountBySecField_IdentifiedCardNo = NULL;
    }
            
    ///客户类型
    // TThostFtdcCustTypeType char
    self->data.CustType = NotifyQueryFutureAccountBySecField_CustType;
            
    ///银行帐号
    // TThostFtdcBankAccountType char[41]
    if( NotifyQueryFutureAccountBySecField_BankAccount != NULL ) {
        if(NotifyQueryFutureAccountBySecField_BankAccount_len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
            PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is %zd)", NotifyQueryFutureAccountBySecField_BankAccount_len, (Py_ssize_t)sizeof(self->data.BankAccount));
            return -1;
        }
        // memset(self->data.BankAccount, 0, sizeof(self->data.BankAccount));
        // memcpy(self->data.BankAccount, NotifyQueryFutureAccountBySecField_BankAccount, NotifyQueryFutureAccountBySecField_BankAccount_len);        
        strncpy(self->data.BankAccount, NotifyQueryFutureAccountBySecField_BankAccount, sizeof(self->data.BankAccount) );
        NotifyQueryFutureAccountBySecField_BankAccount = NULL;
    }
            
    ///银行密码
    // TThostFtdcPasswordType char[41]
    if( NotifyQueryFutureAccountBySecField_BankPassWord != NULL ) {
        if(NotifyQueryFutureAccountBySecField_BankPassWord_len > (Py_ssize_t)sizeof(self->data.BankPassWord)) {
            PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is %zd)", NotifyQueryFutureAccountBySecField_BankPassWord_len, (Py_ssize_t)sizeof(self->data.BankPassWord));
            return -1;
        }
        // memset(self->data.BankPassWord, 0, sizeof(self->data.BankPassWord));
        // memcpy(self->data.BankPassWord, NotifyQueryFutureAccountBySecField_BankPassWord, NotifyQueryFutureAccountBySecField_BankPassWord_len);        
        strncpy(self->data.BankPassWord, NotifyQueryFutureAccountBySecField_BankPassWord, sizeof(self->data.BankPassWord) );
        NotifyQueryFutureAccountBySecField_BankPassWord = NULL;
    }
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    if( NotifyQueryFutureAccountBySecField_AccountID != NULL ) {
        if(NotifyQueryFutureAccountBySecField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", NotifyQueryFutureAccountBySecField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
            return -1;
        }
        // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
        // memcpy(self->data.AccountID, NotifyQueryFutureAccountBySecField_AccountID, NotifyQueryFutureAccountBySecField_AccountID_len);        
        strncpy(self->data.AccountID, NotifyQueryFutureAccountBySecField_AccountID, sizeof(self->data.AccountID) );
        NotifyQueryFutureAccountBySecField_AccountID = NULL;
    }
            
    ///期货密码
    // TThostFtdcPasswordType char[41]
    if( NotifyQueryFutureAccountBySecField_Password != NULL ) {
        if(NotifyQueryFutureAccountBySecField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", NotifyQueryFutureAccountBySecField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
            return -1;
        }
        // memset(self->data.Password, 0, sizeof(self->data.Password));
        // memcpy(self->data.Password, NotifyQueryFutureAccountBySecField_Password, NotifyQueryFutureAccountBySecField_Password_len);        
        strncpy(self->data.Password, NotifyQueryFutureAccountBySecField_Password, sizeof(self->data.Password) );
        NotifyQueryFutureAccountBySecField_Password = NULL;
    }
            
    ///期货公司流水号
    // TThostFtdcFutureSerialType int
    self->data.FutureSerial = NotifyQueryFutureAccountBySecField_FutureSerial;
        
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = NotifyQueryFutureAccountBySecField_InstallID;
        
    ///用户标识
    // TThostFtdcUserIDType char[16]
    if( NotifyQueryFutureAccountBySecField_UserID != NULL ) {
        if(NotifyQueryFutureAccountBySecField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", NotifyQueryFutureAccountBySecField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, NotifyQueryFutureAccountBySecField_UserID, NotifyQueryFutureAccountBySecField_UserID_len);        
        strncpy(self->data.UserID, NotifyQueryFutureAccountBySecField_UserID, sizeof(self->data.UserID) );
        NotifyQueryFutureAccountBySecField_UserID = NULL;
    }
            
    ///验证客户证件号码标志
    // TThostFtdcYesNoIndicatorType char
    self->data.VerifyCertNoFlag = NotifyQueryFutureAccountBySecField_VerifyCertNoFlag;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( NotifyQueryFutureAccountBySecField_CurrencyID != NULL ) {
        if(NotifyQueryFutureAccountBySecField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", NotifyQueryFutureAccountBySecField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, NotifyQueryFutureAccountBySecField_CurrencyID, NotifyQueryFutureAccountBySecField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, NotifyQueryFutureAccountBySecField_CurrencyID, sizeof(self->data.CurrencyID) );
        NotifyQueryFutureAccountBySecField_CurrencyID = NULL;
    }
            
    ///摘要
    // TThostFtdcDigestType char[36]
    if( NotifyQueryFutureAccountBySecField_Digest != NULL ) {
        if(NotifyQueryFutureAccountBySecField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
            PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", NotifyQueryFutureAccountBySecField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
            return -1;
        }
        // memset(self->data.Digest, 0, sizeof(self->data.Digest));
        // memcpy(self->data.Digest, NotifyQueryFutureAccountBySecField_Digest, NotifyQueryFutureAccountBySecField_Digest_len);        
        strncpy(self->data.Digest, NotifyQueryFutureAccountBySecField_Digest, sizeof(self->data.Digest) );
        NotifyQueryFutureAccountBySecField_Digest = NULL;
    }
            
    ///银行帐号类型
    // TThostFtdcBankAccTypeType char
    self->data.BankAccType = NotifyQueryFutureAccountBySecField_BankAccType;
            
    ///渠道标志
    // TThostFtdcDeviceIDType char[3]
    if( NotifyQueryFutureAccountBySecField_DeviceID != NULL ) {
        if(NotifyQueryFutureAccountBySecField_DeviceID_len > (Py_ssize_t)sizeof(self->data.DeviceID)) {
            PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is %zd)", NotifyQueryFutureAccountBySecField_DeviceID_len, (Py_ssize_t)sizeof(self->data.DeviceID));
            return -1;
        }
        // memset(self->data.DeviceID, 0, sizeof(self->data.DeviceID));
        // memcpy(self->data.DeviceID, NotifyQueryFutureAccountBySecField_DeviceID, NotifyQueryFutureAccountBySecField_DeviceID_len);        
        strncpy(self->data.DeviceID, NotifyQueryFutureAccountBySecField_DeviceID, sizeof(self->data.DeviceID) );
        NotifyQueryFutureAccountBySecField_DeviceID = NULL;
    }
            
    ///期货单位帐号类型
    // TThostFtdcBankAccTypeType char
    self->data.BankSecuAccType = NotifyQueryFutureAccountBySecField_BankSecuAccType;
            
    ///期货公司银行编码
    // TThostFtdcBankCodingForFutureType char[33]
    if( NotifyQueryFutureAccountBySecField_BrokerIDByBank != NULL ) {
        if(NotifyQueryFutureAccountBySecField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
            PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", NotifyQueryFutureAccountBySecField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
            return -1;
        }
        // memset(self->data.BrokerIDByBank, 0, sizeof(self->data.BrokerIDByBank));
        // memcpy(self->data.BrokerIDByBank, NotifyQueryFutureAccountBySecField_BrokerIDByBank, NotifyQueryFutureAccountBySecField_BrokerIDByBank_len);        
        strncpy(self->data.BrokerIDByBank, NotifyQueryFutureAccountBySecField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
        NotifyQueryFutureAccountBySecField_BrokerIDByBank = NULL;
    }
            
    ///期货单位帐号
    // TThostFtdcBankAccountType char[41]
    if( NotifyQueryFutureAccountBySecField_BankSecuAcc != NULL ) {
        if(NotifyQueryFutureAccountBySecField_BankSecuAcc_len > (Py_ssize_t)sizeof(self->data.BankSecuAcc)) {
            PyErr_Format(PyExc_ValueError, "BankSecuAcc too long: length=%zd (max allowed is %zd)", NotifyQueryFutureAccountBySecField_BankSecuAcc_len, (Py_ssize_t)sizeof(self->data.BankSecuAcc));
            return -1;
        }
        // memset(self->data.BankSecuAcc, 0, sizeof(self->data.BankSecuAcc));
        // memcpy(self->data.BankSecuAcc, NotifyQueryFutureAccountBySecField_BankSecuAcc, NotifyQueryFutureAccountBySecField_BankSecuAcc_len);        
        strncpy(self->data.BankSecuAcc, NotifyQueryFutureAccountBySecField_BankSecuAcc, sizeof(self->data.BankSecuAcc) );
        NotifyQueryFutureAccountBySecField_BankSecuAcc = NULL;
    }
            
    ///银行密码标志
    // TThostFtdcPwdFlagType char
    self->data.BankPwdFlag = NotifyQueryFutureAccountBySecField_BankPwdFlag;
            
    ///期货资金密码核对标志
    // TThostFtdcPwdFlagType char
    self->data.SecuPwdFlag = NotifyQueryFutureAccountBySecField_SecuPwdFlag;
            
    ///交易柜员
    // TThostFtdcOperNoType char[17]
    if( NotifyQueryFutureAccountBySecField_OperNo != NULL ) {
        if(NotifyQueryFutureAccountBySecField_OperNo_len > (Py_ssize_t)sizeof(self->data.OperNo)) {
            PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is %zd)", NotifyQueryFutureAccountBySecField_OperNo_len, (Py_ssize_t)sizeof(self->data.OperNo));
            return -1;
        }
        // memset(self->data.OperNo, 0, sizeof(self->data.OperNo));
        // memcpy(self->data.OperNo, NotifyQueryFutureAccountBySecField_OperNo, NotifyQueryFutureAccountBySecField_OperNo_len);        
        strncpy(self->data.OperNo, NotifyQueryFutureAccountBySecField_OperNo, sizeof(self->data.OperNo) );
        NotifyQueryFutureAccountBySecField_OperNo = NULL;
    }
            
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = NotifyQueryFutureAccountBySecField_RequestID;
        
    ///交易ID
    // TThostFtdcTIDType int
    self->data.TID = NotifyQueryFutureAccountBySecField_TID;
        
    ///银行可用金额
    // TThostFtdcTradeAmountType double
    self->data.BankUseAmount = NotifyQueryFutureAccountBySecField_BankUseAmount;
        
    ///银行可取金额
    // TThostFtdcTradeAmountType double
    self->data.BankFetchAmount = NotifyQueryFutureAccountBySecField_BankFetchAmount;
        
    ///错误代码
    // TThostFtdcErrorIDType int
    self->data.ErrorID = NotifyQueryFutureAccountBySecField_ErrorID;
        
    ///错误信息
    // TThostFtdcErrorMsgType char[81]
    if( NotifyQueryFutureAccountBySecField_ErrorMsg != NULL ) {
        if(NotifyQueryFutureAccountBySecField_ErrorMsg_len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
            PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is %zd)", NotifyQueryFutureAccountBySecField_ErrorMsg_len, (Py_ssize_t)sizeof(self->data.ErrorMsg));
            return -1;
        }
        // memset(self->data.ErrorMsg, 0, sizeof(self->data.ErrorMsg));
        // memcpy(self->data.ErrorMsg, NotifyQueryFutureAccountBySecField_ErrorMsg, NotifyQueryFutureAccountBySecField_ErrorMsg_len);        
        strncpy(self->data.ErrorMsg, NotifyQueryFutureAccountBySecField_ErrorMsg, sizeof(self->data.ErrorMsg) );
        NotifyQueryFutureAccountBySecField_ErrorMsg = NULL;
    }
            
    ///长客户姓名
    // TThostFtdcLongIndividualNameType char[161]
    if( NotifyQueryFutureAccountBySecField_LongCustomerName != NULL ) {
        if(NotifyQueryFutureAccountBySecField_LongCustomerName_len > (Py_ssize_t)sizeof(self->data.LongCustomerName)) {
            PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is %zd)", NotifyQueryFutureAccountBySecField_LongCustomerName_len, (Py_ssize_t)sizeof(self->data.LongCustomerName));
            return -1;
        }
        // memset(self->data.LongCustomerName, 0, sizeof(self->data.LongCustomerName));
        // memcpy(self->data.LongCustomerName, NotifyQueryFutureAccountBySecField_LongCustomerName, NotifyQueryFutureAccountBySecField_LongCustomerName_len);        
        strncpy(self->data.LongCustomerName, NotifyQueryFutureAccountBySecField_LongCustomerName, sizeof(self->data.LongCustomerName) );
        NotifyQueryFutureAccountBySecField_LongCustomerName = NULL;
    }
            
    ///交易中心代码
    // TThostFtdcDRIdentityIDType int
    self->data.DRIdentityID = NotifyQueryFutureAccountBySecField_DRIdentityID;
        
    ///次中心发起转账期货公司流水号
    // TThostFtdcFutureSerialType int
    self->data.SecFutureSerial = NotifyQueryFutureAccountBySecField_SecFutureSerial;
        

    return 0;
}

static void PyCThostFtdcNotifyQueryFutureAccountBySecField_dealloc(PyCThostFtdcNotifyQueryFutureAccountBySecField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_repr(PyCThostFtdcNotifyQueryFutureAccountBySecField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:c,s:y,s:y,s:c,s:y,s:c,s:y,s:y,s:c,s:c,s:y,s:i,s:i,s:d,s:d,s:i,s:y,s:y,s:i,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:c,s:s,s:c,s:s,s:s,s:s,s:s,s:i,s:i,s:s,s:c,s:s,s:s,s:c,s:s,s:c,s:s,s:s,s:c,s:c,s:s,s:i,s:i,s:d,s:d,s:i,s:s,s:s,s:i,s:i}"
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
        ,"ErrorID", self->data.ErrorID 
        ,"ErrorMsg", self->data.ErrorMsg//, (Py_ssize_t)sizeof(self->data.ErrorMsg) 
        ,"LongCustomerName", self->data.LongCustomerName//, (Py_ssize_t)sizeof(self->data.LongCustomerName) 
        ,"DRIdentityID", self->data.DRIdentityID 
        ,"SecFutureSerial", self->data.SecFutureSerial 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcNotifyQueryFutureAccountBySecField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///业务功能码
// TThostFtdcTradeCodeType char[7]
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_TradeCode(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeCode, (Py_ssize_t)sizeof(self->data.TradeCode));
    return PyBytes_FromString(self->data.TradeCode);
}

///业务功能码
// TThostFtdcTradeCodeType char[7]
static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_TradeCode(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BankID(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankID, (Py_ssize_t)sizeof(self->data.BankID));
    return PyBytes_FromString(self->data.BankID);
}

///银行代码
// TThostFtdcBankIDType char[4]
static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BankID(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BankBranchID(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankBranchID, (Py_ssize_t)sizeof(self->data.BankBranchID));
    return PyBytes_FromString(self->data.BankBranchID);
}

///银行分支机构代码
// TThostFtdcBankBrchIDType char[5]
static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BankBranchID(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BrokerID(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///期商代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BrokerID(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BrokerBranchID(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerBranchID, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
    return PyBytes_FromString(self->data.BrokerBranchID);
}

///期商分支机构代码
// TThostFtdcFutureBranchIDType char[31]
static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BrokerBranchID(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_TradeDate(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeDate, (Py_ssize_t)sizeof(self->data.TradeDate));
    return PyBytes_FromString(self->data.TradeDate);
}

///交易日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_TradeDate(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_TradeTime(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeTime, (Py_ssize_t)sizeof(self->data.TradeTime));
    return PyBytes_FromString(self->data.TradeTime);
}

///交易时间
// TThostFtdcTradeTimeType char[9]
static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_TradeTime(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BankSerial(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankSerial, (Py_ssize_t)sizeof(self->data.BankSerial));
    return PyBytes_FromString(self->data.BankSerial);
}

///银行流水号
// TThostFtdcBankSerialType char[13]
static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BankSerial(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_TradingDay(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易系统日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_TradingDay(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_PlateSerial(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.PlateSerial);
#else
    return PyInt_FromLong(self->data.PlateSerial);
#endif
}

///银期平台消息流水号
// TThostFtdcSerialType int
static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_PlateSerial(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_LastFragment(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

///最后分片标志
// TThostFtdcLastFragmentType char
static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_LastFragment(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_SessionID(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话号
// TThostFtdcSessionIDType int
static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_SessionID(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_CustomerName(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CustomerName, (Py_ssize_t)sizeof(self->data.CustomerName));
    return PyBytes_FromString(self->data.CustomerName);
}

///客户姓名
// TThostFtdcIndividualNameType char[51]
static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_CustomerName(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_IdCardType(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.IdCardType), 1);
}

///证件类型
// TThostFtdcIdCardTypeType char
static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_IdCardType(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_IdentifiedCardNo(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IdentifiedCardNo, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
    return PyBytes_FromString(self->data.IdentifiedCardNo);
}

///证件号码
// TThostFtdcIdentifiedCardNoType char[51]
static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_IdentifiedCardNo(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_CustType(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.CustType), 1);
}

///客户类型
// TThostFtdcCustTypeType char
static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_CustType(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BankAccount(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankAccount, (Py_ssize_t)sizeof(self->data.BankAccount));
    return PyBytes_FromString(self->data.BankAccount);
}

///银行帐号
// TThostFtdcBankAccountType char[41]
static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BankAccount(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BankPassWord(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankPassWord, (Py_ssize_t)sizeof(self->data.BankPassWord));
    return PyBytes_FromString(self->data.BankPassWord);
}

///银行密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BankPassWord(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_AccountID(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AccountID, (Py_ssize_t)sizeof(self->data.AccountID));
    return PyBytes_FromString(self->data.AccountID);
}

///投资者帐号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_AccountID(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_Password(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Password, (Py_ssize_t)sizeof(self->data.Password));
    return PyBytes_FromString(self->data.Password);
}

///期货密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_Password(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_FutureSerial(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FutureSerial);
#else
    return PyInt_FromLong(self->data.FutureSerial);
#endif
}

///期货公司流水号
// TThostFtdcFutureSerialType int
static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_FutureSerial(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_InstallID(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_InstallID(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_UserID(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户标识
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_UserID(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_VerifyCertNoFlag(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.VerifyCertNoFlag), 1);
}

///验证客户证件号码标志
// TThostFtdcYesNoIndicatorType char
static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_VerifyCertNoFlag(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_CurrencyID(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_CurrencyID(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_Digest(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Digest, (Py_ssize_t)sizeof(self->data.Digest));
    return PyBytes_FromString(self->data.Digest);
}

///摘要
// TThostFtdcDigestType char[36]
static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_Digest(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BankAccType(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BankAccType), 1);
}

///银行帐号类型
// TThostFtdcBankAccTypeType char
static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BankAccType(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_DeviceID(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.DeviceID, (Py_ssize_t)sizeof(self->data.DeviceID));
    return PyBytes_FromString(self->data.DeviceID);
}

///渠道标志
// TThostFtdcDeviceIDType char[3]
static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_DeviceID(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BankSecuAccType(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BankSecuAccType), 1);
}

///期货单位帐号类型
// TThostFtdcBankAccTypeType char
static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BankSecuAccType(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BrokerIDByBank(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerIDByBank, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
    return PyBytes_FromString(self->data.BrokerIDByBank);
}

///期货公司银行编码
// TThostFtdcBankCodingForFutureType char[33]
static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BrokerIDByBank(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BankSecuAcc(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankSecuAcc, (Py_ssize_t)sizeof(self->data.BankSecuAcc));
    return PyBytes_FromString(self->data.BankSecuAcc);
}

///期货单位帐号
// TThostFtdcBankAccountType char[41]
static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BankSecuAcc(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BankPwdFlag(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BankPwdFlag), 1);
}

///银行密码标志
// TThostFtdcPwdFlagType char
static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BankPwdFlag(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_SecuPwdFlag(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.SecuPwdFlag), 1);
}

///期货资金密码核对标志
// TThostFtdcPwdFlagType char
static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_SecuPwdFlag(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_OperNo(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OperNo, (Py_ssize_t)sizeof(self->data.OperNo));
    return PyBytes_FromString(self->data.OperNo);
}

///交易柜员
// TThostFtdcOperNoType char[17]
static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_OperNo(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_RequestID(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_RequestID(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_TID(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.TID);
#else
    return PyInt_FromLong(self->data.TID);
#endif
}

///交易ID
// TThostFtdcTIDType int
static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_TID(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BankUseAmount(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
    return PyFloat_FromDouble(self->data.BankUseAmount);
}

///银行可用金额
// TThostFtdcTradeAmountType double
static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BankUseAmount(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BankFetchAmount(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
    return PyFloat_FromDouble(self->data.BankFetchAmount);
}

///银行可取金额
// TThostFtdcTradeAmountType double
static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BankFetchAmount(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, PyObject* val, void *closure) {
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
        
///错误代码
// TThostFtdcErrorIDType int
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_ErrorID(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.ErrorID);
#else
    return PyInt_FromLong(self->data.ErrorID);
#endif
}

///错误代码
// TThostFtdcErrorIDType int
static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_ErrorID(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_ErrorMsg(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ErrorMsg, (Py_ssize_t)sizeof(self->data.ErrorMsg));
    return PyBytes_FromString(self->data.ErrorMsg);
}

///错误信息
// TThostFtdcErrorMsgType char[81]
static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_ErrorMsg(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_LongCustomerName(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.LongCustomerName, (Py_ssize_t)sizeof(self->data.LongCustomerName));
    return PyBytes_FromString(self->data.LongCustomerName);
}

///长客户姓名
// TThostFtdcLongIndividualNameType char[161]
static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_LongCustomerName(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_DRIdentityID(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.DRIdentityID);
#else
    return PyInt_FromLong(self->data.DRIdentityID);
#endif
}

///交易中心代码
// TThostFtdcDRIdentityIDType int
static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_DRIdentityID(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_SecFutureSerial(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SecFutureSerial);
#else
    return PyInt_FromLong(self->data.SecFutureSerial);
#endif
}

///次中心发起转账期货公司流水号
// TThostFtdcFutureSerialType int
static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_SecFutureSerial(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, PyObject* val, void *closure) {
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
        

static PyGetSetDef PyCThostFtdcNotifyQueryFutureAccountBySecField_getset[] = {
    ///业务功能码 
    {(char *)"TradeCode", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_TradeCode, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_TradeCode, (char *)"TradeCode", NULL},
    ///银行代码 
    {(char *)"BankID", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BankID, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BankID, (char *)"BankID", NULL},
    ///银行分支机构代码 
    {(char *)"BankBranchID", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BankBranchID, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BankBranchID, (char *)"BankBranchID", NULL},
    ///期商代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BrokerID, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BrokerID, (char *)"BrokerID", NULL},
    ///期商分支机构代码 
    {(char *)"BrokerBranchID", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BrokerBranchID, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
    ///交易日期 
    {(char *)"TradeDate", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_TradeDate, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_TradeDate, (char *)"TradeDate", NULL},
    ///交易时间 
    {(char *)"TradeTime", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_TradeTime, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_TradeTime, (char *)"TradeTime", NULL},
    ///银行流水号 
    {(char *)"BankSerial", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BankSerial, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BankSerial, (char *)"BankSerial", NULL},
    ///交易系统日期 
    {(char *)"TradingDay", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_TradingDay, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_TradingDay, (char *)"TradingDay", NULL},
    ///银期平台消息流水号 
    {(char *)"PlateSerial", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_PlateSerial, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_PlateSerial, (char *)"PlateSerial", NULL},
    ///最后分片标志 
    {(char *)"LastFragment", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_LastFragment, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_LastFragment, (char *)"LastFragment", NULL},
    ///会话号 
    {(char *)"SessionID", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_SessionID, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_SessionID, (char *)"SessionID", NULL},
    ///客户姓名 
    {(char *)"CustomerName", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_CustomerName, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_CustomerName, (char *)"CustomerName", NULL},
    ///证件类型 
    {(char *)"IdCardType", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_IdCardType, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_IdCardType, (char *)"IdCardType", NULL},
    ///证件号码 
    {(char *)"IdentifiedCardNo", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_IdentifiedCardNo, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_IdentifiedCardNo, (char *)"IdentifiedCardNo", NULL},
    ///客户类型 
    {(char *)"CustType", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_CustType, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_CustType, (char *)"CustType", NULL},
    ///银行帐号 
    {(char *)"BankAccount", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BankAccount, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BankAccount, (char *)"BankAccount", NULL},
    ///银行密码 
    {(char *)"BankPassWord", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BankPassWord, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BankPassWord, (char *)"BankPassWord", NULL},
    ///投资者帐号 
    {(char *)"AccountID", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_AccountID, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_AccountID, (char *)"AccountID", NULL},
    ///期货密码 
    {(char *)"Password", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_Password, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_Password, (char *)"Password", NULL},
    ///期货公司流水号 
    {(char *)"FutureSerial", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_FutureSerial, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_FutureSerial, (char *)"FutureSerial", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_InstallID, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_InstallID, (char *)"InstallID", NULL},
    ///用户标识 
    {(char *)"UserID", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_UserID, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_UserID, (char *)"UserID", NULL},
    ///验证客户证件号码标志 
    {(char *)"VerifyCertNoFlag", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_VerifyCertNoFlag, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_VerifyCertNoFlag, (char *)"VerifyCertNoFlag", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_CurrencyID, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_CurrencyID, (char *)"CurrencyID", NULL},
    ///摘要 
    {(char *)"Digest", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_Digest, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_Digest, (char *)"Digest", NULL},
    ///银行帐号类型 
    {(char *)"BankAccType", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BankAccType, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BankAccType, (char *)"BankAccType", NULL},
    ///渠道标志 
    {(char *)"DeviceID", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_DeviceID, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_DeviceID, (char *)"DeviceID", NULL},
    ///期货单位帐号类型 
    {(char *)"BankSecuAccType", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BankSecuAccType, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BankSecuAccType, (char *)"BankSecuAccType", NULL},
    ///期货公司银行编码 
    {(char *)"BrokerIDByBank", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BrokerIDByBank, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
    ///期货单位帐号 
    {(char *)"BankSecuAcc", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BankSecuAcc, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BankSecuAcc, (char *)"BankSecuAcc", NULL},
    ///银行密码标志 
    {(char *)"BankPwdFlag", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BankPwdFlag, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BankPwdFlag, (char *)"BankPwdFlag", NULL},
    ///期货资金密码核对标志 
    {(char *)"SecuPwdFlag", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_SecuPwdFlag, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_SecuPwdFlag, (char *)"SecuPwdFlag", NULL},
    ///交易柜员 
    {(char *)"OperNo", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_OperNo, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_OperNo, (char *)"OperNo", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_RequestID, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_RequestID, (char *)"RequestID", NULL},
    ///交易ID 
    {(char *)"TID", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_TID, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_TID, (char *)"TID", NULL},
    ///银行可用金额 
    {(char *)"BankUseAmount", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BankUseAmount, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BankUseAmount, (char *)"BankUseAmount", NULL},
    ///银行可取金额 
    {(char *)"BankFetchAmount", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BankFetchAmount, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BankFetchAmount, (char *)"BankFetchAmount", NULL},
    ///错误代码 
    {(char *)"ErrorID", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_ErrorID, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_ErrorID, (char *)"ErrorID", NULL},
    ///错误信息 
    {(char *)"ErrorMsg", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_ErrorMsg, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_ErrorMsg, (char *)"ErrorMsg", NULL},
    ///长客户姓名 
    {(char *)"LongCustomerName", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_LongCustomerName, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_LongCustomerName, (char *)"LongCustomerName", NULL},
    ///交易中心代码 
    {(char *)"DRIdentityID", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_DRIdentityID, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_DRIdentityID, (char *)"DRIdentityID", NULL},
    ///次中心发起转账期货公司流水号 
    {(char *)"SecFutureSerial", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_SecFutureSerial, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_SecFutureSerial, (char *)"SecFutureSerial", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcNotifyQueryFutureAccountBySecFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcNotifyQueryFutureAccountBySecField",	/* tp_name */
	sizeof(PyCThostFtdcNotifyQueryFutureAccountBySecField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcNotifyQueryFutureAccountBySecField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcNotifyQueryFutureAccountBySecField_repr,   /* tp_repr */
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
	"CThostFtdcNotifyQueryFutureAccountBySecField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcNotifyQueryFutureAccountBySecField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcNotifyQueryFutureAccountBySecField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcNotifyQueryFutureAccountBySecField_new,       /* tp_new */
};

int PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcNotifyQueryFutureAccountBySecField  */
	if (PyType_Ready(&PyCThostFtdcNotifyQueryFutureAccountBySecFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcNotifyQueryFutureAccountBySecField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcNotifyQueryFutureAccountBySecFieldType);
    if( PyModule_AddObject(module, "CThostFtdcNotifyQueryFutureAccountBySecField", (PyObject *)&PyCThostFtdcNotifyQueryFutureAccountBySecFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcNotifyQueryFutureAccountBySecField to module");
        Py_DECREF(&PyCThostFtdcNotifyQueryFutureAccountBySecFieldType);
		return -1;
    }

    return 0;
}
