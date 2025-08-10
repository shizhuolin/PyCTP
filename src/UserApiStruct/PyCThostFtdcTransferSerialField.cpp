
#include "PyCThostFtdcTransferSerialField.h"

///银期转账交易流水表

static PyObject *PyCThostFtdcTransferSerialField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTransferSerialField *self = (PyCThostFtdcTransferSerialField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcTransferSerialField_init(PyCThostFtdcTransferSerialField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"PlateSerial", "TradeDate", "TradingDay", "TradeTime", "TradeCode", "SessionID", "BankID", "BankBranchID", "BankAccType", "BankAccount", "BankSerial", "BrokerID", "BrokerBranchID", "FutureAccType", "AccountID", "InvestorID", "FutureSerial", "IdCardType", "IdentifiedCardNo", "CurrencyID", "TradeAmount", "CustFee", "BrokerFee", "AvailabilityFlag", "OperatorCode", "BankNewAccount", "ErrorID", "ErrorMsg",  NULL};


    ///平台流水号
    // TThostFtdcPlateSerialType int
    int TransferSerialField_PlateSerial = 0;
        
    ///交易发起方日期
    // TThostFtdcTradeDateType char[9]
    const char *TransferSerialField_TradeDate = NULL;
    Py_ssize_t TransferSerialField_TradeDate_len = 0;
            
    ///交易日期
    // TThostFtdcDateType char[9]
    const char *TransferSerialField_TradingDay = NULL;
    Py_ssize_t TransferSerialField_TradingDay_len = 0;
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    const char *TransferSerialField_TradeTime = NULL;
    Py_ssize_t TransferSerialField_TradeTime_len = 0;
            
    ///交易代码
    // TThostFtdcTradeCodeType char[7]
    const char *TransferSerialField_TradeCode = NULL;
    Py_ssize_t TransferSerialField_TradeCode_len = 0;
            
    ///会话编号
    // TThostFtdcSessionIDType int
    int TransferSerialField_SessionID = 0;
        
    ///银行编码
    // TThostFtdcBankIDType char[4]
    const char *TransferSerialField_BankID = NULL;
    Py_ssize_t TransferSerialField_BankID_len = 0;
            
    ///银行分支机构编码
    // TThostFtdcBankBrchIDType char[5]
    const char *TransferSerialField_BankBranchID = NULL;
    Py_ssize_t TransferSerialField_BankBranchID_len = 0;
            
    ///银行帐号类型
    // TThostFtdcBankAccTypeType char
    char TransferSerialField_BankAccType = 0;
            
    ///银行帐号
    // TThostFtdcBankAccountType char[41]
    const char *TransferSerialField_BankAccount = NULL;
    Py_ssize_t TransferSerialField_BankAccount_len = 0;
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    const char *TransferSerialField_BankSerial = NULL;
    Py_ssize_t TransferSerialField_BankSerial_len = 0;
            
    ///期货公司编码
    // TThostFtdcBrokerIDType char[11]
    const char *TransferSerialField_BrokerID = NULL;
    Py_ssize_t TransferSerialField_BrokerID_len = 0;
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    const char *TransferSerialField_BrokerBranchID = NULL;
    Py_ssize_t TransferSerialField_BrokerBranchID_len = 0;
            
    ///期货公司帐号类型
    // TThostFtdcFutureAccTypeType char
    char TransferSerialField_FutureAccType = 0;
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    const char *TransferSerialField_AccountID = NULL;
    Py_ssize_t TransferSerialField_AccountID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *TransferSerialField_InvestorID = NULL;
    Py_ssize_t TransferSerialField_InvestorID_len = 0;
            
    ///期货公司流水号
    // TThostFtdcFutureSerialType int
    int TransferSerialField_FutureSerial = 0;
        
    ///证件类型
    // TThostFtdcIdCardTypeType char
    char TransferSerialField_IdCardType = 0;
            
    ///证件号码
    // TThostFtdcIdentifiedCardNoType char[51]
    const char *TransferSerialField_IdentifiedCardNo = NULL;
    Py_ssize_t TransferSerialField_IdentifiedCardNo_len = 0;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *TransferSerialField_CurrencyID = NULL;
    Py_ssize_t TransferSerialField_CurrencyID_len = 0;
            
    ///交易金额
    // TThostFtdcTradeAmountType double
    double TransferSerialField_TradeAmount = 0.0;
        
    ///应收客户费用
    // TThostFtdcCustFeeType double
    double TransferSerialField_CustFee = 0.0;
        
    ///应收期货公司费用
    // TThostFtdcFutureFeeType double
    double TransferSerialField_BrokerFee = 0.0;
        
    ///有效标志
    // TThostFtdcAvailabilityFlagType char
    char TransferSerialField_AvailabilityFlag = 0;
            
    ///操作员
    // TThostFtdcOperatorCodeType char[17]
    const char *TransferSerialField_OperatorCode = NULL;
    Py_ssize_t TransferSerialField_OperatorCode_len = 0;
            
    ///新银行帐号
    // TThostFtdcBankAccountType char[41]
    const char *TransferSerialField_BankNewAccount = NULL;
    Py_ssize_t TransferSerialField_BankNewAccount_len = 0;
            
    ///错误代码
    // TThostFtdcErrorIDType int
    int TransferSerialField_ErrorID = 0;
        
    ///错误信息
    // TThostFtdcErrorMsgType char[81]
    const char *TransferSerialField_ErrorMsg = NULL;
    Py_ssize_t TransferSerialField_ErrorMsg_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iy#y#y#y#iy#y#cy#y#y#y#cy#y#icy#y#dddcy#y#iy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|is#s#s#s#is#s#cs#s#s#s#cs#s#ics#s#dddcs#s#is#", (char **)kwlist
#endif

        , &TransferSerialField_PlateSerial 
        , &TransferSerialField_TradeDate, &TransferSerialField_TradeDate_len 
        , &TransferSerialField_TradingDay, &TransferSerialField_TradingDay_len 
        , &TransferSerialField_TradeTime, &TransferSerialField_TradeTime_len 
        , &TransferSerialField_TradeCode, &TransferSerialField_TradeCode_len 
        , &TransferSerialField_SessionID 
        , &TransferSerialField_BankID, &TransferSerialField_BankID_len 
        , &TransferSerialField_BankBranchID, &TransferSerialField_BankBranchID_len 
        , &TransferSerialField_BankAccType 
        , &TransferSerialField_BankAccount, &TransferSerialField_BankAccount_len 
        , &TransferSerialField_BankSerial, &TransferSerialField_BankSerial_len 
        , &TransferSerialField_BrokerID, &TransferSerialField_BrokerID_len 
        , &TransferSerialField_BrokerBranchID, &TransferSerialField_BrokerBranchID_len 
        , &TransferSerialField_FutureAccType 
        , &TransferSerialField_AccountID, &TransferSerialField_AccountID_len 
        , &TransferSerialField_InvestorID, &TransferSerialField_InvestorID_len 
        , &TransferSerialField_FutureSerial 
        , &TransferSerialField_IdCardType 
        , &TransferSerialField_IdentifiedCardNo, &TransferSerialField_IdentifiedCardNo_len 
        , &TransferSerialField_CurrencyID, &TransferSerialField_CurrencyID_len 
        , &TransferSerialField_TradeAmount 
        , &TransferSerialField_CustFee 
        , &TransferSerialField_BrokerFee 
        , &TransferSerialField_AvailabilityFlag 
        , &TransferSerialField_OperatorCode, &TransferSerialField_OperatorCode_len 
        , &TransferSerialField_BankNewAccount, &TransferSerialField_BankNewAccount_len 
        , &TransferSerialField_ErrorID 
        , &TransferSerialField_ErrorMsg, &TransferSerialField_ErrorMsg_len 


    )) {
        return -1;
    }


    ///平台流水号
    // TThostFtdcPlateSerialType int
    self->data.PlateSerial = TransferSerialField_PlateSerial;
        
    ///交易发起方日期
    // TThostFtdcTradeDateType char[9]
    if( TransferSerialField_TradeDate != NULL ) {
        if(TransferSerialField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", TransferSerialField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
            return -1;
        }
        // memset(self->data.TradeDate, 0, sizeof(self->data.TradeDate));
        // memcpy(self->data.TradeDate, TransferSerialField_TradeDate, TransferSerialField_TradeDate_len);        
        strncpy(self->data.TradeDate, TransferSerialField_TradeDate, sizeof(self->data.TradeDate) );
        TransferSerialField_TradeDate = NULL;
    }
            
    ///交易日期
    // TThostFtdcDateType char[9]
    if( TransferSerialField_TradingDay != NULL ) {
        if(TransferSerialField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", TransferSerialField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, TransferSerialField_TradingDay, TransferSerialField_TradingDay_len);        
        strncpy(self->data.TradingDay, TransferSerialField_TradingDay, sizeof(self->data.TradingDay) );
        TransferSerialField_TradingDay = NULL;
    }
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    if( TransferSerialField_TradeTime != NULL ) {
        if(TransferSerialField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", TransferSerialField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
            return -1;
        }
        // memset(self->data.TradeTime, 0, sizeof(self->data.TradeTime));
        // memcpy(self->data.TradeTime, TransferSerialField_TradeTime, TransferSerialField_TradeTime_len);        
        strncpy(self->data.TradeTime, TransferSerialField_TradeTime, sizeof(self->data.TradeTime) );
        TransferSerialField_TradeTime = NULL;
    }
            
    ///交易代码
    // TThostFtdcTradeCodeType char[7]
    if( TransferSerialField_TradeCode != NULL ) {
        if(TransferSerialField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", TransferSerialField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
            return -1;
        }
        // memset(self->data.TradeCode, 0, sizeof(self->data.TradeCode));
        // memcpy(self->data.TradeCode, TransferSerialField_TradeCode, TransferSerialField_TradeCode_len);        
        strncpy(self->data.TradeCode, TransferSerialField_TradeCode, sizeof(self->data.TradeCode) );
        TransferSerialField_TradeCode = NULL;
    }
            
    ///会话编号
    // TThostFtdcSessionIDType int
    self->data.SessionID = TransferSerialField_SessionID;
        
    ///银行编码
    // TThostFtdcBankIDType char[4]
    if( TransferSerialField_BankID != NULL ) {
        if(TransferSerialField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", TransferSerialField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
            return -1;
        }
        // memset(self->data.BankID, 0, sizeof(self->data.BankID));
        // memcpy(self->data.BankID, TransferSerialField_BankID, TransferSerialField_BankID_len);        
        strncpy(self->data.BankID, TransferSerialField_BankID, sizeof(self->data.BankID) );
        TransferSerialField_BankID = NULL;
    }
            
    ///银行分支机构编码
    // TThostFtdcBankBrchIDType char[5]
    if( TransferSerialField_BankBranchID != NULL ) {
        if(TransferSerialField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", TransferSerialField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
            return -1;
        }
        // memset(self->data.BankBranchID, 0, sizeof(self->data.BankBranchID));
        // memcpy(self->data.BankBranchID, TransferSerialField_BankBranchID, TransferSerialField_BankBranchID_len);        
        strncpy(self->data.BankBranchID, TransferSerialField_BankBranchID, sizeof(self->data.BankBranchID) );
        TransferSerialField_BankBranchID = NULL;
    }
            
    ///银行帐号类型
    // TThostFtdcBankAccTypeType char
    self->data.BankAccType = TransferSerialField_BankAccType;
            
    ///银行帐号
    // TThostFtdcBankAccountType char[41]
    if( TransferSerialField_BankAccount != NULL ) {
        if(TransferSerialField_BankAccount_len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
            PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is %zd)", TransferSerialField_BankAccount_len, (Py_ssize_t)sizeof(self->data.BankAccount));
            return -1;
        }
        // memset(self->data.BankAccount, 0, sizeof(self->data.BankAccount));
        // memcpy(self->data.BankAccount, TransferSerialField_BankAccount, TransferSerialField_BankAccount_len);        
        strncpy(self->data.BankAccount, TransferSerialField_BankAccount, sizeof(self->data.BankAccount) );
        TransferSerialField_BankAccount = NULL;
    }
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    if( TransferSerialField_BankSerial != NULL ) {
        if(TransferSerialField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", TransferSerialField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
            return -1;
        }
        // memset(self->data.BankSerial, 0, sizeof(self->data.BankSerial));
        // memcpy(self->data.BankSerial, TransferSerialField_BankSerial, TransferSerialField_BankSerial_len);        
        strncpy(self->data.BankSerial, TransferSerialField_BankSerial, sizeof(self->data.BankSerial) );
        TransferSerialField_BankSerial = NULL;
    }
            
    ///期货公司编码
    // TThostFtdcBrokerIDType char[11]
    if( TransferSerialField_BrokerID != NULL ) {
        if(TransferSerialField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", TransferSerialField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, TransferSerialField_BrokerID, TransferSerialField_BrokerID_len);        
        strncpy(self->data.BrokerID, TransferSerialField_BrokerID, sizeof(self->data.BrokerID) );
        TransferSerialField_BrokerID = NULL;
    }
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    if( TransferSerialField_BrokerBranchID != NULL ) {
        if(TransferSerialField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", TransferSerialField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
            return -1;
        }
        // memset(self->data.BrokerBranchID, 0, sizeof(self->data.BrokerBranchID));
        // memcpy(self->data.BrokerBranchID, TransferSerialField_BrokerBranchID, TransferSerialField_BrokerBranchID_len);        
        strncpy(self->data.BrokerBranchID, TransferSerialField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
        TransferSerialField_BrokerBranchID = NULL;
    }
            
    ///期货公司帐号类型
    // TThostFtdcFutureAccTypeType char
    self->data.FutureAccType = TransferSerialField_FutureAccType;
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    if( TransferSerialField_AccountID != NULL ) {
        if(TransferSerialField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", TransferSerialField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
            return -1;
        }
        // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
        // memcpy(self->data.AccountID, TransferSerialField_AccountID, TransferSerialField_AccountID_len);        
        strncpy(self->data.AccountID, TransferSerialField_AccountID, sizeof(self->data.AccountID) );
        TransferSerialField_AccountID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( TransferSerialField_InvestorID != NULL ) {
        if(TransferSerialField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", TransferSerialField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, TransferSerialField_InvestorID, TransferSerialField_InvestorID_len);        
        strncpy(self->data.InvestorID, TransferSerialField_InvestorID, sizeof(self->data.InvestorID) );
        TransferSerialField_InvestorID = NULL;
    }
            
    ///期货公司流水号
    // TThostFtdcFutureSerialType int
    self->data.FutureSerial = TransferSerialField_FutureSerial;
        
    ///证件类型
    // TThostFtdcIdCardTypeType char
    self->data.IdCardType = TransferSerialField_IdCardType;
            
    ///证件号码
    // TThostFtdcIdentifiedCardNoType char[51]
    if( TransferSerialField_IdentifiedCardNo != NULL ) {
        if(TransferSerialField_IdentifiedCardNo_len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
            PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is %zd)", TransferSerialField_IdentifiedCardNo_len, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
            return -1;
        }
        // memset(self->data.IdentifiedCardNo, 0, sizeof(self->data.IdentifiedCardNo));
        // memcpy(self->data.IdentifiedCardNo, TransferSerialField_IdentifiedCardNo, TransferSerialField_IdentifiedCardNo_len);        
        strncpy(self->data.IdentifiedCardNo, TransferSerialField_IdentifiedCardNo, sizeof(self->data.IdentifiedCardNo) );
        TransferSerialField_IdentifiedCardNo = NULL;
    }
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( TransferSerialField_CurrencyID != NULL ) {
        if(TransferSerialField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", TransferSerialField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, TransferSerialField_CurrencyID, TransferSerialField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, TransferSerialField_CurrencyID, sizeof(self->data.CurrencyID) );
        TransferSerialField_CurrencyID = NULL;
    }
            
    ///交易金额
    // TThostFtdcTradeAmountType double
    self->data.TradeAmount = TransferSerialField_TradeAmount;
        
    ///应收客户费用
    // TThostFtdcCustFeeType double
    self->data.CustFee = TransferSerialField_CustFee;
        
    ///应收期货公司费用
    // TThostFtdcFutureFeeType double
    self->data.BrokerFee = TransferSerialField_BrokerFee;
        
    ///有效标志
    // TThostFtdcAvailabilityFlagType char
    self->data.AvailabilityFlag = TransferSerialField_AvailabilityFlag;
            
    ///操作员
    // TThostFtdcOperatorCodeType char[17]
    if( TransferSerialField_OperatorCode != NULL ) {
        if(TransferSerialField_OperatorCode_len > (Py_ssize_t)sizeof(self->data.OperatorCode)) {
            PyErr_Format(PyExc_ValueError, "OperatorCode too long: length=%zd (max allowed is %zd)", TransferSerialField_OperatorCode_len, (Py_ssize_t)sizeof(self->data.OperatorCode));
            return -1;
        }
        // memset(self->data.OperatorCode, 0, sizeof(self->data.OperatorCode));
        // memcpy(self->data.OperatorCode, TransferSerialField_OperatorCode, TransferSerialField_OperatorCode_len);        
        strncpy(self->data.OperatorCode, TransferSerialField_OperatorCode, sizeof(self->data.OperatorCode) );
        TransferSerialField_OperatorCode = NULL;
    }
            
    ///新银行帐号
    // TThostFtdcBankAccountType char[41]
    if( TransferSerialField_BankNewAccount != NULL ) {
        if(TransferSerialField_BankNewAccount_len > (Py_ssize_t)sizeof(self->data.BankNewAccount)) {
            PyErr_Format(PyExc_ValueError, "BankNewAccount too long: length=%zd (max allowed is %zd)", TransferSerialField_BankNewAccount_len, (Py_ssize_t)sizeof(self->data.BankNewAccount));
            return -1;
        }
        // memset(self->data.BankNewAccount, 0, sizeof(self->data.BankNewAccount));
        // memcpy(self->data.BankNewAccount, TransferSerialField_BankNewAccount, TransferSerialField_BankNewAccount_len);        
        strncpy(self->data.BankNewAccount, TransferSerialField_BankNewAccount, sizeof(self->data.BankNewAccount) );
        TransferSerialField_BankNewAccount = NULL;
    }
            
    ///错误代码
    // TThostFtdcErrorIDType int
    self->data.ErrorID = TransferSerialField_ErrorID;
        
    ///错误信息
    // TThostFtdcErrorMsgType char[81]
    if( TransferSerialField_ErrorMsg != NULL ) {
        if(TransferSerialField_ErrorMsg_len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
            PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is %zd)", TransferSerialField_ErrorMsg_len, (Py_ssize_t)sizeof(self->data.ErrorMsg));
            return -1;
        }
        // memset(self->data.ErrorMsg, 0, sizeof(self->data.ErrorMsg));
        // memcpy(self->data.ErrorMsg, TransferSerialField_ErrorMsg, TransferSerialField_ErrorMsg_len);        
        strncpy(self->data.ErrorMsg, TransferSerialField_ErrorMsg, sizeof(self->data.ErrorMsg) );
        TransferSerialField_ErrorMsg = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcTransferSerialField_dealloc(PyCThostFtdcTransferSerialField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcTransferSerialField_repr(PyCThostFtdcTransferSerialField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:i,s:y,s:y,s:y,s:y,s:i,s:y,s:y,s:c,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:i,s:c,s:y,s:y,s:d,s:d,s:d,s:c,s:y,s:y,s:i,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:i,s:s,s:s,s:s,s:s,s:i,s:s,s:s,s:c,s:s,s:s,s:s,s:s,s:c,s:s,s:s,s:i,s:c,s:s,s:s,s:d,s:d,s:d,s:c,s:s,s:s,s:i,s:s}"
#endif

        ,"PlateSerial", self->data.PlateSerial 
        ,"TradeDate", self->data.TradeDate//, (Py_ssize_t)sizeof(self->data.TradeDate) 
        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"TradeTime", self->data.TradeTime//, (Py_ssize_t)sizeof(self->data.TradeTime) 
        ,"TradeCode", self->data.TradeCode//, (Py_ssize_t)sizeof(self->data.TradeCode) 
        ,"SessionID", self->data.SessionID 
        ,"BankID", self->data.BankID//, (Py_ssize_t)sizeof(self->data.BankID) 
        ,"BankBranchID", self->data.BankBranchID//, (Py_ssize_t)sizeof(self->data.BankBranchID) 
        ,"BankAccType", self->data.BankAccType 
        ,"BankAccount", self->data.BankAccount//, (Py_ssize_t)sizeof(self->data.BankAccount) 
        ,"BankSerial", self->data.BankSerial//, (Py_ssize_t)sizeof(self->data.BankSerial) 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"BrokerBranchID", self->data.BrokerBranchID//, (Py_ssize_t)sizeof(self->data.BrokerBranchID) 
        ,"FutureAccType", self->data.FutureAccType 
        ,"AccountID", self->data.AccountID//, (Py_ssize_t)sizeof(self->data.AccountID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"FutureSerial", self->data.FutureSerial 
        ,"IdCardType", self->data.IdCardType 
        ,"IdentifiedCardNo", self->data.IdentifiedCardNo//, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo) 
        ,"CurrencyID", self->data.CurrencyID//, (Py_ssize_t)sizeof(self->data.CurrencyID) 
        ,"TradeAmount", self->data.TradeAmount 
        ,"CustFee", self->data.CustFee 
        ,"BrokerFee", self->data.BrokerFee 
        ,"AvailabilityFlag", self->data.AvailabilityFlag 
        ,"OperatorCode", self->data.OperatorCode//, (Py_ssize_t)sizeof(self->data.OperatorCode) 
        ,"BankNewAccount", self->data.BankNewAccount//, (Py_ssize_t)sizeof(self->data.BankNewAccount) 
        ,"ErrorID", self->data.ErrorID 
        ,"ErrorMsg", self->data.ErrorMsg//, (Py_ssize_t)sizeof(self->data.ErrorMsg) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTransferSerialField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///平台流水号
// TThostFtdcPlateSerialType int
static PyObject *PyCThostFtdcTransferSerialField_get_PlateSerial(PyCThostFtdcTransferSerialField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.PlateSerial);
#else
    return PyInt_FromLong(self->data.PlateSerial);
#endif
}

///平台流水号
// TThostFtdcPlateSerialType int
static int PyCThostFtdcTransferSerialField_set_PlateSerial(PyCThostFtdcTransferSerialField *self, PyObject* val, void *closure) {
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
        
///交易发起方日期
// TThostFtdcTradeDateType char[9]
static PyObject *PyCThostFtdcTransferSerialField_get_TradeDate(PyCThostFtdcTransferSerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeDate, (Py_ssize_t)sizeof(self->data.TradeDate));
    return PyBytes_FromString(self->data.TradeDate);
}

///交易发起方日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcTransferSerialField_set_TradeDate(PyCThostFtdcTransferSerialField *self, PyObject* val, void *closure) {
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
            
///交易日期
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcTransferSerialField_get_TradingDay(PyCThostFtdcTransferSerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcTransferSerialField_set_TradingDay(PyCThostFtdcTransferSerialField *self, PyObject* val, void *closure) {
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
            
///交易时间
// TThostFtdcTradeTimeType char[9]
static PyObject *PyCThostFtdcTransferSerialField_get_TradeTime(PyCThostFtdcTransferSerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeTime, (Py_ssize_t)sizeof(self->data.TradeTime));
    return PyBytes_FromString(self->data.TradeTime);
}

///交易时间
// TThostFtdcTradeTimeType char[9]
static int PyCThostFtdcTransferSerialField_set_TradeTime(PyCThostFtdcTransferSerialField *self, PyObject* val, void *closure) {
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
            
///交易代码
// TThostFtdcTradeCodeType char[7]
static PyObject *PyCThostFtdcTransferSerialField_get_TradeCode(PyCThostFtdcTransferSerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeCode, (Py_ssize_t)sizeof(self->data.TradeCode));
    return PyBytes_FromString(self->data.TradeCode);
}

///交易代码
// TThostFtdcTradeCodeType char[7]
static int PyCThostFtdcTransferSerialField_set_TradeCode(PyCThostFtdcTransferSerialField *self, PyObject* val, void *closure) {
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
            
///会话编号
// TThostFtdcSessionIDType int
static PyObject *PyCThostFtdcTransferSerialField_get_SessionID(PyCThostFtdcTransferSerialField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话编号
// TThostFtdcSessionIDType int
static int PyCThostFtdcTransferSerialField_set_SessionID(PyCThostFtdcTransferSerialField *self, PyObject* val, void *closure) {
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
        
///银行编码
// TThostFtdcBankIDType char[4]
static PyObject *PyCThostFtdcTransferSerialField_get_BankID(PyCThostFtdcTransferSerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankID, (Py_ssize_t)sizeof(self->data.BankID));
    return PyBytes_FromString(self->data.BankID);
}

///银行编码
// TThostFtdcBankIDType char[4]
static int PyCThostFtdcTransferSerialField_set_BankID(PyCThostFtdcTransferSerialField *self, PyObject* val, void *closure) {
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
            
///银行分支机构编码
// TThostFtdcBankBrchIDType char[5]
static PyObject *PyCThostFtdcTransferSerialField_get_BankBranchID(PyCThostFtdcTransferSerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankBranchID, (Py_ssize_t)sizeof(self->data.BankBranchID));
    return PyBytes_FromString(self->data.BankBranchID);
}

///银行分支机构编码
// TThostFtdcBankBrchIDType char[5]
static int PyCThostFtdcTransferSerialField_set_BankBranchID(PyCThostFtdcTransferSerialField *self, PyObject* val, void *closure) {
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
            
///银行帐号类型
// TThostFtdcBankAccTypeType char
static PyObject *PyCThostFtdcTransferSerialField_get_BankAccType(PyCThostFtdcTransferSerialField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BankAccType), 1);
}

///银行帐号类型
// TThostFtdcBankAccTypeType char
static int PyCThostFtdcTransferSerialField_set_BankAccType(PyCThostFtdcTransferSerialField *self, PyObject* val, void *closure) {
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
            
///银行帐号
// TThostFtdcBankAccountType char[41]
static PyObject *PyCThostFtdcTransferSerialField_get_BankAccount(PyCThostFtdcTransferSerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankAccount, (Py_ssize_t)sizeof(self->data.BankAccount));
    return PyBytes_FromString(self->data.BankAccount);
}

///银行帐号
// TThostFtdcBankAccountType char[41]
static int PyCThostFtdcTransferSerialField_set_BankAccount(PyCThostFtdcTransferSerialField *self, PyObject* val, void *closure) {
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
            
///银行流水号
// TThostFtdcBankSerialType char[13]
static PyObject *PyCThostFtdcTransferSerialField_get_BankSerial(PyCThostFtdcTransferSerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankSerial, (Py_ssize_t)sizeof(self->data.BankSerial));
    return PyBytes_FromString(self->data.BankSerial);
}

///银行流水号
// TThostFtdcBankSerialType char[13]
static int PyCThostFtdcTransferSerialField_set_BankSerial(PyCThostFtdcTransferSerialField *self, PyObject* val, void *closure) {
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
            
///期货公司编码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcTransferSerialField_get_BrokerID(PyCThostFtdcTransferSerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///期货公司编码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcTransferSerialField_set_BrokerID(PyCThostFtdcTransferSerialField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTransferSerialField_get_BrokerBranchID(PyCThostFtdcTransferSerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerBranchID, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
    return PyBytes_FromString(self->data.BrokerBranchID);
}

///期商分支机构代码
// TThostFtdcFutureBranchIDType char[31]
static int PyCThostFtdcTransferSerialField_set_BrokerBranchID(PyCThostFtdcTransferSerialField *self, PyObject* val, void *closure) {
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
            
///期货公司帐号类型
// TThostFtdcFutureAccTypeType char
static PyObject *PyCThostFtdcTransferSerialField_get_FutureAccType(PyCThostFtdcTransferSerialField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.FutureAccType), 1);
}

///期货公司帐号类型
// TThostFtdcFutureAccTypeType char
static int PyCThostFtdcTransferSerialField_set_FutureAccType(PyCThostFtdcTransferSerialField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FutureAccType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.FutureAccType)) {
        PyErr_SetString(PyExc_ValueError, "FutureAccType must be equal 1 bytes");
        return -1;
    }
    self->data.FutureAccType = *buf;
    return 0;
}
            
///投资者帐号
// TThostFtdcAccountIDType char[13]
static PyObject *PyCThostFtdcTransferSerialField_get_AccountID(PyCThostFtdcTransferSerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AccountID, (Py_ssize_t)sizeof(self->data.AccountID));
    return PyBytes_FromString(self->data.AccountID);
}

///投资者帐号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcTransferSerialField_set_AccountID(PyCThostFtdcTransferSerialField *self, PyObject* val, void *closure) {
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
            
///投资者代码
// TThostFtdcInvestorIDType char[13]
static PyObject *PyCThostFtdcTransferSerialField_get_InvestorID(PyCThostFtdcTransferSerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcTransferSerialField_set_InvestorID(PyCThostFtdcTransferSerialField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
    // memcpy(self->data.InvestorID, buf, len);
    strncpy(self->data.InvestorID, buf, sizeof(self->data.InvestorID));
    return 0;
}
            
///期货公司流水号
// TThostFtdcFutureSerialType int
static PyObject *PyCThostFtdcTransferSerialField_get_FutureSerial(PyCThostFtdcTransferSerialField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FutureSerial);
#else
    return PyInt_FromLong(self->data.FutureSerial);
#endif
}

///期货公司流水号
// TThostFtdcFutureSerialType int
static int PyCThostFtdcTransferSerialField_set_FutureSerial(PyCThostFtdcTransferSerialField *self, PyObject* val, void *closure) {
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
        
///证件类型
// TThostFtdcIdCardTypeType char
static PyObject *PyCThostFtdcTransferSerialField_get_IdCardType(PyCThostFtdcTransferSerialField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.IdCardType), 1);
}

///证件类型
// TThostFtdcIdCardTypeType char
static int PyCThostFtdcTransferSerialField_set_IdCardType(PyCThostFtdcTransferSerialField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTransferSerialField_get_IdentifiedCardNo(PyCThostFtdcTransferSerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IdentifiedCardNo, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
    return PyBytes_FromString(self->data.IdentifiedCardNo);
}

///证件号码
// TThostFtdcIdentifiedCardNoType char[51]
static int PyCThostFtdcTransferSerialField_set_IdentifiedCardNo(PyCThostFtdcTransferSerialField *self, PyObject* val, void *closure) {
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
            
///币种代码
// TThostFtdcCurrencyIDType char[4]
static PyObject *PyCThostFtdcTransferSerialField_get_CurrencyID(PyCThostFtdcTransferSerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcTransferSerialField_set_CurrencyID(PyCThostFtdcTransferSerialField *self, PyObject* val, void *closure) {
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
            
///交易金额
// TThostFtdcTradeAmountType double
static PyObject *PyCThostFtdcTransferSerialField_get_TradeAmount(PyCThostFtdcTransferSerialField *self, void *closure) {
    return PyFloat_FromDouble(self->data.TradeAmount);
}

///交易金额
// TThostFtdcTradeAmountType double
static int PyCThostFtdcTransferSerialField_set_TradeAmount(PyCThostFtdcTransferSerialField *self, PyObject* val, void *closure) {
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
        
///应收客户费用
// TThostFtdcCustFeeType double
static PyObject *PyCThostFtdcTransferSerialField_get_CustFee(PyCThostFtdcTransferSerialField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CustFee);
}

///应收客户费用
// TThostFtdcCustFeeType double
static int PyCThostFtdcTransferSerialField_set_CustFee(PyCThostFtdcTransferSerialField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTransferSerialField_get_BrokerFee(PyCThostFtdcTransferSerialField *self, void *closure) {
    return PyFloat_FromDouble(self->data.BrokerFee);
}

///应收期货公司费用
// TThostFtdcFutureFeeType double
static int PyCThostFtdcTransferSerialField_set_BrokerFee(PyCThostFtdcTransferSerialField *self, PyObject* val, void *closure) {
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
        
///有效标志
// TThostFtdcAvailabilityFlagType char
static PyObject *PyCThostFtdcTransferSerialField_get_AvailabilityFlag(PyCThostFtdcTransferSerialField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.AvailabilityFlag), 1);
}

///有效标志
// TThostFtdcAvailabilityFlagType char
static int PyCThostFtdcTransferSerialField_set_AvailabilityFlag(PyCThostFtdcTransferSerialField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AvailabilityFlag Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.AvailabilityFlag)) {
        PyErr_SetString(PyExc_ValueError, "AvailabilityFlag must be equal 1 bytes");
        return -1;
    }
    self->data.AvailabilityFlag = *buf;
    return 0;
}
            
///操作员
// TThostFtdcOperatorCodeType char[17]
static PyObject *PyCThostFtdcTransferSerialField_get_OperatorCode(PyCThostFtdcTransferSerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OperatorCode, (Py_ssize_t)sizeof(self->data.OperatorCode));
    return PyBytes_FromString(self->data.OperatorCode);
}

///操作员
// TThostFtdcOperatorCodeType char[17]
static int PyCThostFtdcTransferSerialField_set_OperatorCode(PyCThostFtdcTransferSerialField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OperatorCode Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OperatorCode)) {
        PyErr_SetString(PyExc_ValueError, "OperatorCode must be less than 17 bytes");
        return -1;
    }
    // memset(self->data.OperatorCode, 0, sizeof(self->data.OperatorCode));
    // memcpy(self->data.OperatorCode, buf, len);
    strncpy(self->data.OperatorCode, buf, sizeof(self->data.OperatorCode));
    return 0;
}
            
///新银行帐号
// TThostFtdcBankAccountType char[41]
static PyObject *PyCThostFtdcTransferSerialField_get_BankNewAccount(PyCThostFtdcTransferSerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankNewAccount, (Py_ssize_t)sizeof(self->data.BankNewAccount));
    return PyBytes_FromString(self->data.BankNewAccount);
}

///新银行帐号
// TThostFtdcBankAccountType char[41]
static int PyCThostFtdcTransferSerialField_set_BankNewAccount(PyCThostFtdcTransferSerialField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BankNewAccount Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BankNewAccount)) {
        PyErr_SetString(PyExc_ValueError, "BankNewAccount must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.BankNewAccount, 0, sizeof(self->data.BankNewAccount));
    // memcpy(self->data.BankNewAccount, buf, len);
    strncpy(self->data.BankNewAccount, buf, sizeof(self->data.BankNewAccount));
    return 0;
}
            
///错误代码
// TThostFtdcErrorIDType int
static PyObject *PyCThostFtdcTransferSerialField_get_ErrorID(PyCThostFtdcTransferSerialField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.ErrorID);
#else
    return PyInt_FromLong(self->data.ErrorID);
#endif
}

///错误代码
// TThostFtdcErrorIDType int
static int PyCThostFtdcTransferSerialField_set_ErrorID(PyCThostFtdcTransferSerialField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTransferSerialField_get_ErrorMsg(PyCThostFtdcTransferSerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ErrorMsg, (Py_ssize_t)sizeof(self->data.ErrorMsg));
    return PyBytes_FromString(self->data.ErrorMsg);
}

///错误信息
// TThostFtdcErrorMsgType char[81]
static int PyCThostFtdcTransferSerialField_set_ErrorMsg(PyCThostFtdcTransferSerialField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcTransferSerialField_getset[] = {
    ///平台流水号 
    {(char *)"PlateSerial", (getter)PyCThostFtdcTransferSerialField_get_PlateSerial, (setter)PyCThostFtdcTransferSerialField_set_PlateSerial, (char *)"PlateSerial", NULL},
    ///交易发起方日期 
    {(char *)"TradeDate", (getter)PyCThostFtdcTransferSerialField_get_TradeDate, (setter)PyCThostFtdcTransferSerialField_set_TradeDate, (char *)"TradeDate", NULL},
    ///交易日期 
    {(char *)"TradingDay", (getter)PyCThostFtdcTransferSerialField_get_TradingDay, (setter)PyCThostFtdcTransferSerialField_set_TradingDay, (char *)"TradingDay", NULL},
    ///交易时间 
    {(char *)"TradeTime", (getter)PyCThostFtdcTransferSerialField_get_TradeTime, (setter)PyCThostFtdcTransferSerialField_set_TradeTime, (char *)"TradeTime", NULL},
    ///交易代码 
    {(char *)"TradeCode", (getter)PyCThostFtdcTransferSerialField_get_TradeCode, (setter)PyCThostFtdcTransferSerialField_set_TradeCode, (char *)"TradeCode", NULL},
    ///会话编号 
    {(char *)"SessionID", (getter)PyCThostFtdcTransferSerialField_get_SessionID, (setter)PyCThostFtdcTransferSerialField_set_SessionID, (char *)"SessionID", NULL},
    ///银行编码 
    {(char *)"BankID", (getter)PyCThostFtdcTransferSerialField_get_BankID, (setter)PyCThostFtdcTransferSerialField_set_BankID, (char *)"BankID", NULL},
    ///银行分支机构编码 
    {(char *)"BankBranchID", (getter)PyCThostFtdcTransferSerialField_get_BankBranchID, (setter)PyCThostFtdcTransferSerialField_set_BankBranchID, (char *)"BankBranchID", NULL},
    ///银行帐号类型 
    {(char *)"BankAccType", (getter)PyCThostFtdcTransferSerialField_get_BankAccType, (setter)PyCThostFtdcTransferSerialField_set_BankAccType, (char *)"BankAccType", NULL},
    ///银行帐号 
    {(char *)"BankAccount", (getter)PyCThostFtdcTransferSerialField_get_BankAccount, (setter)PyCThostFtdcTransferSerialField_set_BankAccount, (char *)"BankAccount", NULL},
    ///银行流水号 
    {(char *)"BankSerial", (getter)PyCThostFtdcTransferSerialField_get_BankSerial, (setter)PyCThostFtdcTransferSerialField_set_BankSerial, (char *)"BankSerial", NULL},
    ///期货公司编码 
    {(char *)"BrokerID", (getter)PyCThostFtdcTransferSerialField_get_BrokerID, (setter)PyCThostFtdcTransferSerialField_set_BrokerID, (char *)"BrokerID", NULL},
    ///期商分支机构代码 
    {(char *)"BrokerBranchID", (getter)PyCThostFtdcTransferSerialField_get_BrokerBranchID, (setter)PyCThostFtdcTransferSerialField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
    ///期货公司帐号类型 
    {(char *)"FutureAccType", (getter)PyCThostFtdcTransferSerialField_get_FutureAccType, (setter)PyCThostFtdcTransferSerialField_set_FutureAccType, (char *)"FutureAccType", NULL},
    ///投资者帐号 
    {(char *)"AccountID", (getter)PyCThostFtdcTransferSerialField_get_AccountID, (setter)PyCThostFtdcTransferSerialField_set_AccountID, (char *)"AccountID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcTransferSerialField_get_InvestorID, (setter)PyCThostFtdcTransferSerialField_set_InvestorID, (char *)"InvestorID", NULL},
    ///期货公司流水号 
    {(char *)"FutureSerial", (getter)PyCThostFtdcTransferSerialField_get_FutureSerial, (setter)PyCThostFtdcTransferSerialField_set_FutureSerial, (char *)"FutureSerial", NULL},
    ///证件类型 
    {(char *)"IdCardType", (getter)PyCThostFtdcTransferSerialField_get_IdCardType, (setter)PyCThostFtdcTransferSerialField_set_IdCardType, (char *)"IdCardType", NULL},
    ///证件号码 
    {(char *)"IdentifiedCardNo", (getter)PyCThostFtdcTransferSerialField_get_IdentifiedCardNo, (setter)PyCThostFtdcTransferSerialField_set_IdentifiedCardNo, (char *)"IdentifiedCardNo", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcTransferSerialField_get_CurrencyID, (setter)PyCThostFtdcTransferSerialField_set_CurrencyID, (char *)"CurrencyID", NULL},
    ///交易金额 
    {(char *)"TradeAmount", (getter)PyCThostFtdcTransferSerialField_get_TradeAmount, (setter)PyCThostFtdcTransferSerialField_set_TradeAmount, (char *)"TradeAmount", NULL},
    ///应收客户费用 
    {(char *)"CustFee", (getter)PyCThostFtdcTransferSerialField_get_CustFee, (setter)PyCThostFtdcTransferSerialField_set_CustFee, (char *)"CustFee", NULL},
    ///应收期货公司费用 
    {(char *)"BrokerFee", (getter)PyCThostFtdcTransferSerialField_get_BrokerFee, (setter)PyCThostFtdcTransferSerialField_set_BrokerFee, (char *)"BrokerFee", NULL},
    ///有效标志 
    {(char *)"AvailabilityFlag", (getter)PyCThostFtdcTransferSerialField_get_AvailabilityFlag, (setter)PyCThostFtdcTransferSerialField_set_AvailabilityFlag, (char *)"AvailabilityFlag", NULL},
    ///操作员 
    {(char *)"OperatorCode", (getter)PyCThostFtdcTransferSerialField_get_OperatorCode, (setter)PyCThostFtdcTransferSerialField_set_OperatorCode, (char *)"OperatorCode", NULL},
    ///新银行帐号 
    {(char *)"BankNewAccount", (getter)PyCThostFtdcTransferSerialField_get_BankNewAccount, (setter)PyCThostFtdcTransferSerialField_set_BankNewAccount, (char *)"BankNewAccount", NULL},
    ///错误代码 
    {(char *)"ErrorID", (getter)PyCThostFtdcTransferSerialField_get_ErrorID, (setter)PyCThostFtdcTransferSerialField_set_ErrorID, (char *)"ErrorID", NULL},
    ///错误信息 
    {(char *)"ErrorMsg", (getter)PyCThostFtdcTransferSerialField_get_ErrorMsg, (setter)PyCThostFtdcTransferSerialField_set_ErrorMsg, (char *)"ErrorMsg", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcTransferSerialFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcTransferSerialField",	/* tp_name */
	sizeof(PyCThostFtdcTransferSerialField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcTransferSerialField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcTransferSerialField_repr,   /* tp_repr */
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
	"CThostFtdcTransferSerialField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcTransferSerialField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcTransferSerialField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcTransferSerialField_new,       /* tp_new */
};

int PyCThostFtdcTransferSerialFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcTransferSerialField  */
	if (PyType_Ready(&PyCThostFtdcTransferSerialFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTransferSerialField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcTransferSerialFieldType);
    if( PyModule_AddObject(module, "CThostFtdcTransferSerialField", (PyObject *)&PyCThostFtdcTransferSerialFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTransferSerialField to module");
        Py_DECREF(&PyCThostFtdcTransferSerialFieldType);
		return -1;
    }

    return 0;
}
