
#include "PyCThostFtdcReqQueryTradeResultBySerialField.h"

///查询指定流水号的交易结果请求

static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcReqQueryTradeResultBySerialField *self = (PyCThostFtdcReqQueryTradeResultBySerialField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcReqQueryTradeResultBySerialField_init(PyCThostFtdcReqQueryTradeResultBySerialField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "Reference", "RefrenceIssureType", "RefrenceIssure", "CustomerName", "IdCardType", "IdentifiedCardNo", "CustType", "BankAccount", "BankPassWord", "AccountID", "Password", "CurrencyID", "TradeAmount", "Digest", "LongCustomerName",  NULL};


    ///业务功能码
    // TThostFtdcTradeCodeType char[7]
    const char *ReqQueryTradeResultBySerialField_TradeCode = NULL;
    Py_ssize_t ReqQueryTradeResultBySerialField_TradeCode_len = 0;
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    const char *ReqQueryTradeResultBySerialField_BankID = NULL;
    Py_ssize_t ReqQueryTradeResultBySerialField_BankID_len = 0;
            
    ///银行分支机构代码
    // TThostFtdcBankBrchIDType char[5]
    const char *ReqQueryTradeResultBySerialField_BankBranchID = NULL;
    Py_ssize_t ReqQueryTradeResultBySerialField_BankBranchID_len = 0;
            
    ///期商代码
    // TThostFtdcBrokerIDType char[11]
    const char *ReqQueryTradeResultBySerialField_BrokerID = NULL;
    Py_ssize_t ReqQueryTradeResultBySerialField_BrokerID_len = 0;
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    const char *ReqQueryTradeResultBySerialField_BrokerBranchID = NULL;
    Py_ssize_t ReqQueryTradeResultBySerialField_BrokerBranchID_len = 0;
            
    ///交易日期
    // TThostFtdcTradeDateType char[9]
    const char *ReqQueryTradeResultBySerialField_TradeDate = NULL;
    Py_ssize_t ReqQueryTradeResultBySerialField_TradeDate_len = 0;
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    const char *ReqQueryTradeResultBySerialField_TradeTime = NULL;
    Py_ssize_t ReqQueryTradeResultBySerialField_TradeTime_len = 0;
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    const char *ReqQueryTradeResultBySerialField_BankSerial = NULL;
    Py_ssize_t ReqQueryTradeResultBySerialField_BankSerial_len = 0;
            
    ///交易系统日期
    // TThostFtdcTradeDateType char[9]
    const char *ReqQueryTradeResultBySerialField_TradingDay = NULL;
    Py_ssize_t ReqQueryTradeResultBySerialField_TradingDay_len = 0;
            
    ///银期平台消息流水号
    // TThostFtdcSerialType int
    int ReqQueryTradeResultBySerialField_PlateSerial = 0;
        
    ///最后分片标志
    // TThostFtdcLastFragmentType char
    char ReqQueryTradeResultBySerialField_LastFragment = 0;
            
    ///会话号
    // TThostFtdcSessionIDType int
    int ReqQueryTradeResultBySerialField_SessionID = 0;
        
    ///流水号
    // TThostFtdcSerialType int
    int ReqQueryTradeResultBySerialField_Reference = 0;
        
    ///本流水号发布者的机构类型
    // TThostFtdcInstitutionTypeType char
    char ReqQueryTradeResultBySerialField_RefrenceIssureType = 0;
            
    ///本流水号发布者机构编码
    // TThostFtdcOrganCodeType char[36]
    const char *ReqQueryTradeResultBySerialField_RefrenceIssure = NULL;
    Py_ssize_t ReqQueryTradeResultBySerialField_RefrenceIssure_len = 0;
            
    ///客户姓名
    // TThostFtdcIndividualNameType char[51]
    const char *ReqQueryTradeResultBySerialField_CustomerName = NULL;
    Py_ssize_t ReqQueryTradeResultBySerialField_CustomerName_len = 0;
            
    ///证件类型
    // TThostFtdcIdCardTypeType char
    char ReqQueryTradeResultBySerialField_IdCardType = 0;
            
    ///证件号码
    // TThostFtdcIdentifiedCardNoType char[51]
    const char *ReqQueryTradeResultBySerialField_IdentifiedCardNo = NULL;
    Py_ssize_t ReqQueryTradeResultBySerialField_IdentifiedCardNo_len = 0;
            
    ///客户类型
    // TThostFtdcCustTypeType char
    char ReqQueryTradeResultBySerialField_CustType = 0;
            
    ///银行帐号
    // TThostFtdcBankAccountType char[41]
    const char *ReqQueryTradeResultBySerialField_BankAccount = NULL;
    Py_ssize_t ReqQueryTradeResultBySerialField_BankAccount_len = 0;
            
    ///银行密码
    // TThostFtdcPasswordType char[41]
    const char *ReqQueryTradeResultBySerialField_BankPassWord = NULL;
    Py_ssize_t ReqQueryTradeResultBySerialField_BankPassWord_len = 0;
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    const char *ReqQueryTradeResultBySerialField_AccountID = NULL;
    Py_ssize_t ReqQueryTradeResultBySerialField_AccountID_len = 0;
            
    ///期货密码
    // TThostFtdcPasswordType char[41]
    const char *ReqQueryTradeResultBySerialField_Password = NULL;
    Py_ssize_t ReqQueryTradeResultBySerialField_Password_len = 0;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *ReqQueryTradeResultBySerialField_CurrencyID = NULL;
    Py_ssize_t ReqQueryTradeResultBySerialField_CurrencyID_len = 0;
            
    ///转帐金额
    // TThostFtdcTradeAmountType double
    double ReqQueryTradeResultBySerialField_TradeAmount = 0.0;
        
    ///摘要
    // TThostFtdcDigestType char[36]
    const char *ReqQueryTradeResultBySerialField_Digest = NULL;
    Py_ssize_t ReqQueryTradeResultBySerialField_Digest_len = 0;
            
    ///长客户姓名
    // TThostFtdcLongIndividualNameType char[161]
    const char *ReqQueryTradeResultBySerialField_LongCustomerName = NULL;
    Py_ssize_t ReqQueryTradeResultBySerialField_LongCustomerName_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciicy#y#cy#cy#y#y#y#y#dy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#iciics#s#cs#cs#s#s#s#s#ds#s#", (char **)kwlist
#endif

        , &ReqQueryTradeResultBySerialField_TradeCode, &ReqQueryTradeResultBySerialField_TradeCode_len 
        , &ReqQueryTradeResultBySerialField_BankID, &ReqQueryTradeResultBySerialField_BankID_len 
        , &ReqQueryTradeResultBySerialField_BankBranchID, &ReqQueryTradeResultBySerialField_BankBranchID_len 
        , &ReqQueryTradeResultBySerialField_BrokerID, &ReqQueryTradeResultBySerialField_BrokerID_len 
        , &ReqQueryTradeResultBySerialField_BrokerBranchID, &ReqQueryTradeResultBySerialField_BrokerBranchID_len 
        , &ReqQueryTradeResultBySerialField_TradeDate, &ReqQueryTradeResultBySerialField_TradeDate_len 
        , &ReqQueryTradeResultBySerialField_TradeTime, &ReqQueryTradeResultBySerialField_TradeTime_len 
        , &ReqQueryTradeResultBySerialField_BankSerial, &ReqQueryTradeResultBySerialField_BankSerial_len 
        , &ReqQueryTradeResultBySerialField_TradingDay, &ReqQueryTradeResultBySerialField_TradingDay_len 
        , &ReqQueryTradeResultBySerialField_PlateSerial 
        , &ReqQueryTradeResultBySerialField_LastFragment 
        , &ReqQueryTradeResultBySerialField_SessionID 
        , &ReqQueryTradeResultBySerialField_Reference 
        , &ReqQueryTradeResultBySerialField_RefrenceIssureType 
        , &ReqQueryTradeResultBySerialField_RefrenceIssure, &ReqQueryTradeResultBySerialField_RefrenceIssure_len 
        , &ReqQueryTradeResultBySerialField_CustomerName, &ReqQueryTradeResultBySerialField_CustomerName_len 
        , &ReqQueryTradeResultBySerialField_IdCardType 
        , &ReqQueryTradeResultBySerialField_IdentifiedCardNo, &ReqQueryTradeResultBySerialField_IdentifiedCardNo_len 
        , &ReqQueryTradeResultBySerialField_CustType 
        , &ReqQueryTradeResultBySerialField_BankAccount, &ReqQueryTradeResultBySerialField_BankAccount_len 
        , &ReqQueryTradeResultBySerialField_BankPassWord, &ReqQueryTradeResultBySerialField_BankPassWord_len 
        , &ReqQueryTradeResultBySerialField_AccountID, &ReqQueryTradeResultBySerialField_AccountID_len 
        , &ReqQueryTradeResultBySerialField_Password, &ReqQueryTradeResultBySerialField_Password_len 
        , &ReqQueryTradeResultBySerialField_CurrencyID, &ReqQueryTradeResultBySerialField_CurrencyID_len 
        , &ReqQueryTradeResultBySerialField_TradeAmount 
        , &ReqQueryTradeResultBySerialField_Digest, &ReqQueryTradeResultBySerialField_Digest_len 
        , &ReqQueryTradeResultBySerialField_LongCustomerName, &ReqQueryTradeResultBySerialField_LongCustomerName_len 


    )) {
        return -1;
    }


    ///业务功能码
    // TThostFtdcTradeCodeType char[7]
    if( ReqQueryTradeResultBySerialField_TradeCode != NULL ) {
        if(ReqQueryTradeResultBySerialField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", ReqQueryTradeResultBySerialField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
            return -1;
        }
        // memset(self->data.TradeCode, 0, sizeof(self->data.TradeCode));
        // memcpy(self->data.TradeCode, ReqQueryTradeResultBySerialField_TradeCode, ReqQueryTradeResultBySerialField_TradeCode_len);        
        strncpy(self->data.TradeCode, ReqQueryTradeResultBySerialField_TradeCode, sizeof(self->data.TradeCode) );
        ReqQueryTradeResultBySerialField_TradeCode = NULL;
    }
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    if( ReqQueryTradeResultBySerialField_BankID != NULL ) {
        if(ReqQueryTradeResultBySerialField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", ReqQueryTradeResultBySerialField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
            return -1;
        }
        // memset(self->data.BankID, 0, sizeof(self->data.BankID));
        // memcpy(self->data.BankID, ReqQueryTradeResultBySerialField_BankID, ReqQueryTradeResultBySerialField_BankID_len);        
        strncpy(self->data.BankID, ReqQueryTradeResultBySerialField_BankID, sizeof(self->data.BankID) );
        ReqQueryTradeResultBySerialField_BankID = NULL;
    }
            
    ///银行分支机构代码
    // TThostFtdcBankBrchIDType char[5]
    if( ReqQueryTradeResultBySerialField_BankBranchID != NULL ) {
        if(ReqQueryTradeResultBySerialField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", ReqQueryTradeResultBySerialField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
            return -1;
        }
        // memset(self->data.BankBranchID, 0, sizeof(self->data.BankBranchID));
        // memcpy(self->data.BankBranchID, ReqQueryTradeResultBySerialField_BankBranchID, ReqQueryTradeResultBySerialField_BankBranchID_len);        
        strncpy(self->data.BankBranchID, ReqQueryTradeResultBySerialField_BankBranchID, sizeof(self->data.BankBranchID) );
        ReqQueryTradeResultBySerialField_BankBranchID = NULL;
    }
            
    ///期商代码
    // TThostFtdcBrokerIDType char[11]
    if( ReqQueryTradeResultBySerialField_BrokerID != NULL ) {
        if(ReqQueryTradeResultBySerialField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", ReqQueryTradeResultBySerialField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, ReqQueryTradeResultBySerialField_BrokerID, ReqQueryTradeResultBySerialField_BrokerID_len);        
        strncpy(self->data.BrokerID, ReqQueryTradeResultBySerialField_BrokerID, sizeof(self->data.BrokerID) );
        ReqQueryTradeResultBySerialField_BrokerID = NULL;
    }
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    if( ReqQueryTradeResultBySerialField_BrokerBranchID != NULL ) {
        if(ReqQueryTradeResultBySerialField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", ReqQueryTradeResultBySerialField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
            return -1;
        }
        // memset(self->data.BrokerBranchID, 0, sizeof(self->data.BrokerBranchID));
        // memcpy(self->data.BrokerBranchID, ReqQueryTradeResultBySerialField_BrokerBranchID, ReqQueryTradeResultBySerialField_BrokerBranchID_len);        
        strncpy(self->data.BrokerBranchID, ReqQueryTradeResultBySerialField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
        ReqQueryTradeResultBySerialField_BrokerBranchID = NULL;
    }
            
    ///交易日期
    // TThostFtdcTradeDateType char[9]
    if( ReqQueryTradeResultBySerialField_TradeDate != NULL ) {
        if(ReqQueryTradeResultBySerialField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", ReqQueryTradeResultBySerialField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
            return -1;
        }
        // memset(self->data.TradeDate, 0, sizeof(self->data.TradeDate));
        // memcpy(self->data.TradeDate, ReqQueryTradeResultBySerialField_TradeDate, ReqQueryTradeResultBySerialField_TradeDate_len);        
        strncpy(self->data.TradeDate, ReqQueryTradeResultBySerialField_TradeDate, sizeof(self->data.TradeDate) );
        ReqQueryTradeResultBySerialField_TradeDate = NULL;
    }
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    if( ReqQueryTradeResultBySerialField_TradeTime != NULL ) {
        if(ReqQueryTradeResultBySerialField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", ReqQueryTradeResultBySerialField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
            return -1;
        }
        // memset(self->data.TradeTime, 0, sizeof(self->data.TradeTime));
        // memcpy(self->data.TradeTime, ReqQueryTradeResultBySerialField_TradeTime, ReqQueryTradeResultBySerialField_TradeTime_len);        
        strncpy(self->data.TradeTime, ReqQueryTradeResultBySerialField_TradeTime, sizeof(self->data.TradeTime) );
        ReqQueryTradeResultBySerialField_TradeTime = NULL;
    }
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    if( ReqQueryTradeResultBySerialField_BankSerial != NULL ) {
        if(ReqQueryTradeResultBySerialField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", ReqQueryTradeResultBySerialField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
            return -1;
        }
        // memset(self->data.BankSerial, 0, sizeof(self->data.BankSerial));
        // memcpy(self->data.BankSerial, ReqQueryTradeResultBySerialField_BankSerial, ReqQueryTradeResultBySerialField_BankSerial_len);        
        strncpy(self->data.BankSerial, ReqQueryTradeResultBySerialField_BankSerial, sizeof(self->data.BankSerial) );
        ReqQueryTradeResultBySerialField_BankSerial = NULL;
    }
            
    ///交易系统日期
    // TThostFtdcTradeDateType char[9]
    if( ReqQueryTradeResultBySerialField_TradingDay != NULL ) {
        if(ReqQueryTradeResultBySerialField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", ReqQueryTradeResultBySerialField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, ReqQueryTradeResultBySerialField_TradingDay, ReqQueryTradeResultBySerialField_TradingDay_len);        
        strncpy(self->data.TradingDay, ReqQueryTradeResultBySerialField_TradingDay, sizeof(self->data.TradingDay) );
        ReqQueryTradeResultBySerialField_TradingDay = NULL;
    }
            
    ///银期平台消息流水号
    // TThostFtdcSerialType int
    self->data.PlateSerial = ReqQueryTradeResultBySerialField_PlateSerial;
        
    ///最后分片标志
    // TThostFtdcLastFragmentType char
    self->data.LastFragment = ReqQueryTradeResultBySerialField_LastFragment;
            
    ///会话号
    // TThostFtdcSessionIDType int
    self->data.SessionID = ReqQueryTradeResultBySerialField_SessionID;
        
    ///流水号
    // TThostFtdcSerialType int
    self->data.Reference = ReqQueryTradeResultBySerialField_Reference;
        
    ///本流水号发布者的机构类型
    // TThostFtdcInstitutionTypeType char
    self->data.RefrenceIssureType = ReqQueryTradeResultBySerialField_RefrenceIssureType;
            
    ///本流水号发布者机构编码
    // TThostFtdcOrganCodeType char[36]
    if( ReqQueryTradeResultBySerialField_RefrenceIssure != NULL ) {
        if(ReqQueryTradeResultBySerialField_RefrenceIssure_len > (Py_ssize_t)sizeof(self->data.RefrenceIssure)) {
            PyErr_Format(PyExc_ValueError, "RefrenceIssure too long: length=%zd (max allowed is %zd)", ReqQueryTradeResultBySerialField_RefrenceIssure_len, (Py_ssize_t)sizeof(self->data.RefrenceIssure));
            return -1;
        }
        // memset(self->data.RefrenceIssure, 0, sizeof(self->data.RefrenceIssure));
        // memcpy(self->data.RefrenceIssure, ReqQueryTradeResultBySerialField_RefrenceIssure, ReqQueryTradeResultBySerialField_RefrenceIssure_len);        
        strncpy(self->data.RefrenceIssure, ReqQueryTradeResultBySerialField_RefrenceIssure, sizeof(self->data.RefrenceIssure) );
        ReqQueryTradeResultBySerialField_RefrenceIssure = NULL;
    }
            
    ///客户姓名
    // TThostFtdcIndividualNameType char[51]
    if( ReqQueryTradeResultBySerialField_CustomerName != NULL ) {
        if(ReqQueryTradeResultBySerialField_CustomerName_len > (Py_ssize_t)sizeof(self->data.CustomerName)) {
            PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is %zd)", ReqQueryTradeResultBySerialField_CustomerName_len, (Py_ssize_t)sizeof(self->data.CustomerName));
            return -1;
        }
        // memset(self->data.CustomerName, 0, sizeof(self->data.CustomerName));
        // memcpy(self->data.CustomerName, ReqQueryTradeResultBySerialField_CustomerName, ReqQueryTradeResultBySerialField_CustomerName_len);        
        strncpy(self->data.CustomerName, ReqQueryTradeResultBySerialField_CustomerName, sizeof(self->data.CustomerName) );
        ReqQueryTradeResultBySerialField_CustomerName = NULL;
    }
            
    ///证件类型
    // TThostFtdcIdCardTypeType char
    self->data.IdCardType = ReqQueryTradeResultBySerialField_IdCardType;
            
    ///证件号码
    // TThostFtdcIdentifiedCardNoType char[51]
    if( ReqQueryTradeResultBySerialField_IdentifiedCardNo != NULL ) {
        if(ReqQueryTradeResultBySerialField_IdentifiedCardNo_len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
            PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is %zd)", ReqQueryTradeResultBySerialField_IdentifiedCardNo_len, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
            return -1;
        }
        // memset(self->data.IdentifiedCardNo, 0, sizeof(self->data.IdentifiedCardNo));
        // memcpy(self->data.IdentifiedCardNo, ReqQueryTradeResultBySerialField_IdentifiedCardNo, ReqQueryTradeResultBySerialField_IdentifiedCardNo_len);        
        strncpy(self->data.IdentifiedCardNo, ReqQueryTradeResultBySerialField_IdentifiedCardNo, sizeof(self->data.IdentifiedCardNo) );
        ReqQueryTradeResultBySerialField_IdentifiedCardNo = NULL;
    }
            
    ///客户类型
    // TThostFtdcCustTypeType char
    self->data.CustType = ReqQueryTradeResultBySerialField_CustType;
            
    ///银行帐号
    // TThostFtdcBankAccountType char[41]
    if( ReqQueryTradeResultBySerialField_BankAccount != NULL ) {
        if(ReqQueryTradeResultBySerialField_BankAccount_len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
            PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is %zd)", ReqQueryTradeResultBySerialField_BankAccount_len, (Py_ssize_t)sizeof(self->data.BankAccount));
            return -1;
        }
        // memset(self->data.BankAccount, 0, sizeof(self->data.BankAccount));
        // memcpy(self->data.BankAccount, ReqQueryTradeResultBySerialField_BankAccount, ReqQueryTradeResultBySerialField_BankAccount_len);        
        strncpy(self->data.BankAccount, ReqQueryTradeResultBySerialField_BankAccount, sizeof(self->data.BankAccount) );
        ReqQueryTradeResultBySerialField_BankAccount = NULL;
    }
            
    ///银行密码
    // TThostFtdcPasswordType char[41]
    if( ReqQueryTradeResultBySerialField_BankPassWord != NULL ) {
        if(ReqQueryTradeResultBySerialField_BankPassWord_len > (Py_ssize_t)sizeof(self->data.BankPassWord)) {
            PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is %zd)", ReqQueryTradeResultBySerialField_BankPassWord_len, (Py_ssize_t)sizeof(self->data.BankPassWord));
            return -1;
        }
        // memset(self->data.BankPassWord, 0, sizeof(self->data.BankPassWord));
        // memcpy(self->data.BankPassWord, ReqQueryTradeResultBySerialField_BankPassWord, ReqQueryTradeResultBySerialField_BankPassWord_len);        
        strncpy(self->data.BankPassWord, ReqQueryTradeResultBySerialField_BankPassWord, sizeof(self->data.BankPassWord) );
        ReqQueryTradeResultBySerialField_BankPassWord = NULL;
    }
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    if( ReqQueryTradeResultBySerialField_AccountID != NULL ) {
        if(ReqQueryTradeResultBySerialField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", ReqQueryTradeResultBySerialField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
            return -1;
        }
        // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
        // memcpy(self->data.AccountID, ReqQueryTradeResultBySerialField_AccountID, ReqQueryTradeResultBySerialField_AccountID_len);        
        strncpy(self->data.AccountID, ReqQueryTradeResultBySerialField_AccountID, sizeof(self->data.AccountID) );
        ReqQueryTradeResultBySerialField_AccountID = NULL;
    }
            
    ///期货密码
    // TThostFtdcPasswordType char[41]
    if( ReqQueryTradeResultBySerialField_Password != NULL ) {
        if(ReqQueryTradeResultBySerialField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", ReqQueryTradeResultBySerialField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
            return -1;
        }
        // memset(self->data.Password, 0, sizeof(self->data.Password));
        // memcpy(self->data.Password, ReqQueryTradeResultBySerialField_Password, ReqQueryTradeResultBySerialField_Password_len);        
        strncpy(self->data.Password, ReqQueryTradeResultBySerialField_Password, sizeof(self->data.Password) );
        ReqQueryTradeResultBySerialField_Password = NULL;
    }
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( ReqQueryTradeResultBySerialField_CurrencyID != NULL ) {
        if(ReqQueryTradeResultBySerialField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", ReqQueryTradeResultBySerialField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, ReqQueryTradeResultBySerialField_CurrencyID, ReqQueryTradeResultBySerialField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, ReqQueryTradeResultBySerialField_CurrencyID, sizeof(self->data.CurrencyID) );
        ReqQueryTradeResultBySerialField_CurrencyID = NULL;
    }
            
    ///转帐金额
    // TThostFtdcTradeAmountType double
    self->data.TradeAmount = ReqQueryTradeResultBySerialField_TradeAmount;
        
    ///摘要
    // TThostFtdcDigestType char[36]
    if( ReqQueryTradeResultBySerialField_Digest != NULL ) {
        if(ReqQueryTradeResultBySerialField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
            PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", ReqQueryTradeResultBySerialField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
            return -1;
        }
        // memset(self->data.Digest, 0, sizeof(self->data.Digest));
        // memcpy(self->data.Digest, ReqQueryTradeResultBySerialField_Digest, ReqQueryTradeResultBySerialField_Digest_len);        
        strncpy(self->data.Digest, ReqQueryTradeResultBySerialField_Digest, sizeof(self->data.Digest) );
        ReqQueryTradeResultBySerialField_Digest = NULL;
    }
            
    ///长客户姓名
    // TThostFtdcLongIndividualNameType char[161]
    if( ReqQueryTradeResultBySerialField_LongCustomerName != NULL ) {
        if(ReqQueryTradeResultBySerialField_LongCustomerName_len > (Py_ssize_t)sizeof(self->data.LongCustomerName)) {
            PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is %zd)", ReqQueryTradeResultBySerialField_LongCustomerName_len, (Py_ssize_t)sizeof(self->data.LongCustomerName));
            return -1;
        }
        // memset(self->data.LongCustomerName, 0, sizeof(self->data.LongCustomerName));
        // memcpy(self->data.LongCustomerName, ReqQueryTradeResultBySerialField_LongCustomerName, ReqQueryTradeResultBySerialField_LongCustomerName_len);        
        strncpy(self->data.LongCustomerName, ReqQueryTradeResultBySerialField_LongCustomerName, sizeof(self->data.LongCustomerName) );
        ReqQueryTradeResultBySerialField_LongCustomerName = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcReqQueryTradeResultBySerialField_dealloc(PyCThostFtdcReqQueryTradeResultBySerialField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_repr(PyCThostFtdcReqQueryTradeResultBySerialField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:i,s:c,s:y,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:d,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:i,s:c,s:s,s:s,s:c,s:s,s:c,s:s,s:s,s:s,s:s,s:s,s:d,s:s,s:s}"
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
        ,"Reference", self->data.Reference 
        ,"RefrenceIssureType", self->data.RefrenceIssureType 
        ,"RefrenceIssure", self->data.RefrenceIssure//, (Py_ssize_t)sizeof(self->data.RefrenceIssure) 
        ,"CustomerName", self->data.CustomerName//, (Py_ssize_t)sizeof(self->data.CustomerName) 
        ,"IdCardType", self->data.IdCardType 
        ,"IdentifiedCardNo", self->data.IdentifiedCardNo//, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo) 
        ,"CustType", self->data.CustType 
        ,"BankAccount", self->data.BankAccount//, (Py_ssize_t)sizeof(self->data.BankAccount) 
        ,"BankPassWord", self->data.BankPassWord//, (Py_ssize_t)sizeof(self->data.BankPassWord) 
        ,"AccountID", self->data.AccountID//, (Py_ssize_t)sizeof(self->data.AccountID) 
        ,"Password", self->data.Password//, (Py_ssize_t)sizeof(self->data.Password) 
        ,"CurrencyID", self->data.CurrencyID//, (Py_ssize_t)sizeof(self->data.CurrencyID) 
        ,"TradeAmount", self->data.TradeAmount 
        ,"Digest", self->data.Digest//, (Py_ssize_t)sizeof(self->data.Digest) 
        ,"LongCustomerName", self->data.LongCustomerName//, (Py_ssize_t)sizeof(self->data.LongCustomerName) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqQueryTradeResultBySerialField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///业务功能码
// TThostFtdcTradeCodeType char[7]
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_TradeCode(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeCode, (Py_ssize_t)sizeof(self->data.TradeCode));
    return PyBytes_FromString(self->data.TradeCode);
}

///业务功能码
// TThostFtdcTradeCodeType char[7]
static int PyCThostFtdcReqQueryTradeResultBySerialField_set_TradeCode(PyCThostFtdcReqQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_BankID(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankID, (Py_ssize_t)sizeof(self->data.BankID));
    return PyBytes_FromString(self->data.BankID);
}

///银行代码
// TThostFtdcBankIDType char[4]
static int PyCThostFtdcReqQueryTradeResultBySerialField_set_BankID(PyCThostFtdcReqQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_BankBranchID(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankBranchID, (Py_ssize_t)sizeof(self->data.BankBranchID));
    return PyBytes_FromString(self->data.BankBranchID);
}

///银行分支机构代码
// TThostFtdcBankBrchIDType char[5]
static int PyCThostFtdcReqQueryTradeResultBySerialField_set_BankBranchID(PyCThostFtdcReqQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_BrokerID(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///期商代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcReqQueryTradeResultBySerialField_set_BrokerID(PyCThostFtdcReqQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_BrokerBranchID(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerBranchID, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
    return PyBytes_FromString(self->data.BrokerBranchID);
}

///期商分支机构代码
// TThostFtdcFutureBranchIDType char[31]
static int PyCThostFtdcReqQueryTradeResultBySerialField_set_BrokerBranchID(PyCThostFtdcReqQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_TradeDate(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeDate, (Py_ssize_t)sizeof(self->data.TradeDate));
    return PyBytes_FromString(self->data.TradeDate);
}

///交易日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcReqQueryTradeResultBySerialField_set_TradeDate(PyCThostFtdcReqQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_TradeTime(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeTime, (Py_ssize_t)sizeof(self->data.TradeTime));
    return PyBytes_FromString(self->data.TradeTime);
}

///交易时间
// TThostFtdcTradeTimeType char[9]
static int PyCThostFtdcReqQueryTradeResultBySerialField_set_TradeTime(PyCThostFtdcReqQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_BankSerial(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankSerial, (Py_ssize_t)sizeof(self->data.BankSerial));
    return PyBytes_FromString(self->data.BankSerial);
}

///银行流水号
// TThostFtdcBankSerialType char[13]
static int PyCThostFtdcReqQueryTradeResultBySerialField_set_BankSerial(PyCThostFtdcReqQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_TradingDay(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易系统日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcReqQueryTradeResultBySerialField_set_TradingDay(PyCThostFtdcReqQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_PlateSerial(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.PlateSerial);
#else
    return PyInt_FromLong(self->data.PlateSerial);
#endif
}

///银期平台消息流水号
// TThostFtdcSerialType int
static int PyCThostFtdcReqQueryTradeResultBySerialField_set_PlateSerial(PyCThostFtdcReqQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_LastFragment(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

///最后分片标志
// TThostFtdcLastFragmentType char
static int PyCThostFtdcReqQueryTradeResultBySerialField_set_LastFragment(PyCThostFtdcReqQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_SessionID(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话号
// TThostFtdcSessionIDType int
static int PyCThostFtdcReqQueryTradeResultBySerialField_set_SessionID(PyCThostFtdcReqQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
        
///流水号
// TThostFtdcSerialType int
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_Reference(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.Reference);
#else
    return PyInt_FromLong(self->data.Reference);
#endif
}

///流水号
// TThostFtdcSerialType int
static int PyCThostFtdcReqQueryTradeResultBySerialField_set_Reference(PyCThostFtdcReqQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Reference Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Reference Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the Reference value out of range for C int");
        return -1;
    }
    self->data.Reference = (int)buf;
    return 0;
}
        
///本流水号发布者的机构类型
// TThostFtdcInstitutionTypeType char
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_RefrenceIssureType(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.RefrenceIssureType), 1);
}

///本流水号发布者的机构类型
// TThostFtdcInstitutionTypeType char
static int PyCThostFtdcReqQueryTradeResultBySerialField_set_RefrenceIssureType(PyCThostFtdcReqQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "RefrenceIssureType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.RefrenceIssureType)) {
        PyErr_SetString(PyExc_ValueError, "RefrenceIssureType must be equal 1 bytes");
        return -1;
    }
    self->data.RefrenceIssureType = *buf;
    return 0;
}
            
///本流水号发布者机构编码
// TThostFtdcOrganCodeType char[36]
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_RefrenceIssure(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.RefrenceIssure, (Py_ssize_t)sizeof(self->data.RefrenceIssure));
    return PyBytes_FromString(self->data.RefrenceIssure);
}

///本流水号发布者机构编码
// TThostFtdcOrganCodeType char[36]
static int PyCThostFtdcReqQueryTradeResultBySerialField_set_RefrenceIssure(PyCThostFtdcReqQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "RefrenceIssure Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.RefrenceIssure)) {
        PyErr_SetString(PyExc_ValueError, "RefrenceIssure must be less than 36 bytes");
        return -1;
    }
    // memset(self->data.RefrenceIssure, 0, sizeof(self->data.RefrenceIssure));
    // memcpy(self->data.RefrenceIssure, buf, len);
    strncpy(self->data.RefrenceIssure, buf, sizeof(self->data.RefrenceIssure));
    return 0;
}
            
///客户姓名
// TThostFtdcIndividualNameType char[51]
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_CustomerName(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CustomerName, (Py_ssize_t)sizeof(self->data.CustomerName));
    return PyBytes_FromString(self->data.CustomerName);
}

///客户姓名
// TThostFtdcIndividualNameType char[51]
static int PyCThostFtdcReqQueryTradeResultBySerialField_set_CustomerName(PyCThostFtdcReqQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_IdCardType(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.IdCardType), 1);
}

///证件类型
// TThostFtdcIdCardTypeType char
static int PyCThostFtdcReqQueryTradeResultBySerialField_set_IdCardType(PyCThostFtdcReqQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_IdentifiedCardNo(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IdentifiedCardNo, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
    return PyBytes_FromString(self->data.IdentifiedCardNo);
}

///证件号码
// TThostFtdcIdentifiedCardNoType char[51]
static int PyCThostFtdcReqQueryTradeResultBySerialField_set_IdentifiedCardNo(PyCThostFtdcReqQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_CustType(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.CustType), 1);
}

///客户类型
// TThostFtdcCustTypeType char
static int PyCThostFtdcReqQueryTradeResultBySerialField_set_CustType(PyCThostFtdcReqQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_BankAccount(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankAccount, (Py_ssize_t)sizeof(self->data.BankAccount));
    return PyBytes_FromString(self->data.BankAccount);
}

///银行帐号
// TThostFtdcBankAccountType char[41]
static int PyCThostFtdcReqQueryTradeResultBySerialField_set_BankAccount(PyCThostFtdcReqQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_BankPassWord(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankPassWord, (Py_ssize_t)sizeof(self->data.BankPassWord));
    return PyBytes_FromString(self->data.BankPassWord);
}

///银行密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcReqQueryTradeResultBySerialField_set_BankPassWord(PyCThostFtdcReqQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_AccountID(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AccountID, (Py_ssize_t)sizeof(self->data.AccountID));
    return PyBytes_FromString(self->data.AccountID);
}

///投资者帐号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcReqQueryTradeResultBySerialField_set_AccountID(PyCThostFtdcReqQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_Password(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Password, (Py_ssize_t)sizeof(self->data.Password));
    return PyBytes_FromString(self->data.Password);
}

///期货密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcReqQueryTradeResultBySerialField_set_Password(PyCThostFtdcReqQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
            
///币种代码
// TThostFtdcCurrencyIDType char[4]
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_CurrencyID(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcReqQueryTradeResultBySerialField_set_CurrencyID(PyCThostFtdcReqQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_TradeAmount(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
    return PyFloat_FromDouble(self->data.TradeAmount);
}

///转帐金额
// TThostFtdcTradeAmountType double
static int PyCThostFtdcReqQueryTradeResultBySerialField_set_TradeAmount(PyCThostFtdcReqQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
        
///摘要
// TThostFtdcDigestType char[36]
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_Digest(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Digest, (Py_ssize_t)sizeof(self->data.Digest));
    return PyBytes_FromString(self->data.Digest);
}

///摘要
// TThostFtdcDigestType char[36]
static int PyCThostFtdcReqQueryTradeResultBySerialField_set_Digest(PyCThostFtdcReqQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
            
///长客户姓名
// TThostFtdcLongIndividualNameType char[161]
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_LongCustomerName(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.LongCustomerName, (Py_ssize_t)sizeof(self->data.LongCustomerName));
    return PyBytes_FromString(self->data.LongCustomerName);
}

///长客户姓名
// TThostFtdcLongIndividualNameType char[161]
static int PyCThostFtdcReqQueryTradeResultBySerialField_set_LongCustomerName(PyCThostFtdcReqQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcReqQueryTradeResultBySerialField_getset[] = {
    ///业务功能码 
    {(char *)"TradeCode", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_TradeCode, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_TradeCode, (char *)"TradeCode", NULL},
    ///银行代码 
    {(char *)"BankID", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_BankID, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_BankID, (char *)"BankID", NULL},
    ///银行分支机构代码 
    {(char *)"BankBranchID", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_BankBranchID, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_BankBranchID, (char *)"BankBranchID", NULL},
    ///期商代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_BrokerID, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_BrokerID, (char *)"BrokerID", NULL},
    ///期商分支机构代码 
    {(char *)"BrokerBranchID", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_BrokerBranchID, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
    ///交易日期 
    {(char *)"TradeDate", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_TradeDate, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_TradeDate, (char *)"TradeDate", NULL},
    ///交易时间 
    {(char *)"TradeTime", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_TradeTime, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_TradeTime, (char *)"TradeTime", NULL},
    ///银行流水号 
    {(char *)"BankSerial", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_BankSerial, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_BankSerial, (char *)"BankSerial", NULL},
    ///交易系统日期 
    {(char *)"TradingDay", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_TradingDay, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_TradingDay, (char *)"TradingDay", NULL},
    ///银期平台消息流水号 
    {(char *)"PlateSerial", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_PlateSerial, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_PlateSerial, (char *)"PlateSerial", NULL},
    ///最后分片标志 
    {(char *)"LastFragment", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_LastFragment, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_LastFragment, (char *)"LastFragment", NULL},
    ///会话号 
    {(char *)"SessionID", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_SessionID, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_SessionID, (char *)"SessionID", NULL},
    ///流水号 
    {(char *)"Reference", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_Reference, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_Reference, (char *)"Reference", NULL},
    ///本流水号发布者的机构类型 
    {(char *)"RefrenceIssureType", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_RefrenceIssureType, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_RefrenceIssureType, (char *)"RefrenceIssureType", NULL},
    ///本流水号发布者机构编码 
    {(char *)"RefrenceIssure", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_RefrenceIssure, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_RefrenceIssure, (char *)"RefrenceIssure", NULL},
    ///客户姓名 
    {(char *)"CustomerName", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_CustomerName, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_CustomerName, (char *)"CustomerName", NULL},
    ///证件类型 
    {(char *)"IdCardType", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_IdCardType, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_IdCardType, (char *)"IdCardType", NULL},
    ///证件号码 
    {(char *)"IdentifiedCardNo", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_IdentifiedCardNo, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_IdentifiedCardNo, (char *)"IdentifiedCardNo", NULL},
    ///客户类型 
    {(char *)"CustType", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_CustType, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_CustType, (char *)"CustType", NULL},
    ///银行帐号 
    {(char *)"BankAccount", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_BankAccount, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_BankAccount, (char *)"BankAccount", NULL},
    ///银行密码 
    {(char *)"BankPassWord", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_BankPassWord, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_BankPassWord, (char *)"BankPassWord", NULL},
    ///投资者帐号 
    {(char *)"AccountID", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_AccountID, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_AccountID, (char *)"AccountID", NULL},
    ///期货密码 
    {(char *)"Password", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_Password, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_Password, (char *)"Password", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_CurrencyID, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_CurrencyID, (char *)"CurrencyID", NULL},
    ///转帐金额 
    {(char *)"TradeAmount", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_TradeAmount, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_TradeAmount, (char *)"TradeAmount", NULL},
    ///摘要 
    {(char *)"Digest", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_Digest, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_Digest, (char *)"Digest", NULL},
    ///长客户姓名 
    {(char *)"LongCustomerName", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_LongCustomerName, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_LongCustomerName, (char *)"LongCustomerName", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcReqQueryTradeResultBySerialFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcReqQueryTradeResultBySerialField",	/* tp_name */
	sizeof(PyCThostFtdcReqQueryTradeResultBySerialField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcReqQueryTradeResultBySerialField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcReqQueryTradeResultBySerialField_repr,   /* tp_repr */
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
	"CThostFtdcReqQueryTradeResultBySerialField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcReqQueryTradeResultBySerialField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcReqQueryTradeResultBySerialField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcReqQueryTradeResultBySerialField_new,       /* tp_new */
};

int PyCThostFtdcReqQueryTradeResultBySerialFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcReqQueryTradeResultBySerialField  */
	if (PyType_Ready(&PyCThostFtdcReqQueryTradeResultBySerialFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcReqQueryTradeResultBySerialField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcReqQueryTradeResultBySerialFieldType);
    if( PyModule_AddObject(module, "CThostFtdcReqQueryTradeResultBySerialField", (PyObject *)&PyCThostFtdcReqQueryTradeResultBySerialFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqQueryTradeResultBySerialField to module");
        Py_DECREF(&PyCThostFtdcReqQueryTradeResultBySerialFieldType);
		return -1;
    }

    return 0;
}
