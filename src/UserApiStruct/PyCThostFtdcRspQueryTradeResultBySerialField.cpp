
#include "PyCThostFtdcRspQueryTradeResultBySerialField.h"

///查询指定流水号的交易结果响应

static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRspQueryTradeResultBySerialField *self = (PyCThostFtdcRspQueryTradeResultBySerialField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcRspQueryTradeResultBySerialField_init(PyCThostFtdcRspQueryTradeResultBySerialField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "ErrorID", "ErrorMsg", "Reference", "RefrenceIssureType", "RefrenceIssure", "OriginReturnCode", "OriginDescrInfoForReturnCode", "BankAccount", "BankPassWord", "AccountID", "Password", "CurrencyID", "TradeAmount", "Digest",  NULL};


    ///业务功能码
    // TThostFtdcTradeCodeType char[7]
    const char *RspQueryTradeResultBySerialField_TradeCode = NULL;
    Py_ssize_t RspQueryTradeResultBySerialField_TradeCode_len = 0;
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    const char *RspQueryTradeResultBySerialField_BankID = NULL;
    Py_ssize_t RspQueryTradeResultBySerialField_BankID_len = 0;
            
    ///银行分支机构代码
    // TThostFtdcBankBrchIDType char[5]
    const char *RspQueryTradeResultBySerialField_BankBranchID = NULL;
    Py_ssize_t RspQueryTradeResultBySerialField_BankBranchID_len = 0;
            
    ///期商代码
    // TThostFtdcBrokerIDType char[11]
    const char *RspQueryTradeResultBySerialField_BrokerID = NULL;
    Py_ssize_t RspQueryTradeResultBySerialField_BrokerID_len = 0;
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    const char *RspQueryTradeResultBySerialField_BrokerBranchID = NULL;
    Py_ssize_t RspQueryTradeResultBySerialField_BrokerBranchID_len = 0;
            
    ///交易日期
    // TThostFtdcTradeDateType char[9]
    const char *RspQueryTradeResultBySerialField_TradeDate = NULL;
    Py_ssize_t RspQueryTradeResultBySerialField_TradeDate_len = 0;
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    const char *RspQueryTradeResultBySerialField_TradeTime = NULL;
    Py_ssize_t RspQueryTradeResultBySerialField_TradeTime_len = 0;
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    const char *RspQueryTradeResultBySerialField_BankSerial = NULL;
    Py_ssize_t RspQueryTradeResultBySerialField_BankSerial_len = 0;
            
    ///交易系统日期
    // TThostFtdcTradeDateType char[9]
    const char *RspQueryTradeResultBySerialField_TradingDay = NULL;
    Py_ssize_t RspQueryTradeResultBySerialField_TradingDay_len = 0;
            
    ///银期平台消息流水号
    // TThostFtdcSerialType int
    int RspQueryTradeResultBySerialField_PlateSerial = 0;
        
    ///最后分片标志
    // TThostFtdcLastFragmentType char
    char RspQueryTradeResultBySerialField_LastFragment = 0;
            
    ///会话号
    // TThostFtdcSessionIDType int
    int RspQueryTradeResultBySerialField_SessionID = 0;
        
    ///错误代码
    // TThostFtdcErrorIDType int
    int RspQueryTradeResultBySerialField_ErrorID = 0;
        
    ///错误信息
    // TThostFtdcErrorMsgType char[81]
    const char *RspQueryTradeResultBySerialField_ErrorMsg = NULL;
    Py_ssize_t RspQueryTradeResultBySerialField_ErrorMsg_len = 0;
            
    ///流水号
    // TThostFtdcSerialType int
    int RspQueryTradeResultBySerialField_Reference = 0;
        
    ///本流水号发布者的机构类型
    // TThostFtdcInstitutionTypeType char
    char RspQueryTradeResultBySerialField_RefrenceIssureType = 0;
            
    ///本流水号发布者机构编码
    // TThostFtdcOrganCodeType char[36]
    const char *RspQueryTradeResultBySerialField_RefrenceIssure = NULL;
    Py_ssize_t RspQueryTradeResultBySerialField_RefrenceIssure_len = 0;
            
    ///原始返回代码
    // TThostFtdcReturnCodeType char[7]
    const char *RspQueryTradeResultBySerialField_OriginReturnCode = NULL;
    Py_ssize_t RspQueryTradeResultBySerialField_OriginReturnCode_len = 0;
            
    ///原始返回码描述
    // TThostFtdcDescrInfoForReturnCodeType char[129]
    const char *RspQueryTradeResultBySerialField_OriginDescrInfoForReturnCode = NULL;
    Py_ssize_t RspQueryTradeResultBySerialField_OriginDescrInfoForReturnCode_len = 0;
            
    ///银行帐号
    // TThostFtdcBankAccountType char[41]
    const char *RspQueryTradeResultBySerialField_BankAccount = NULL;
    Py_ssize_t RspQueryTradeResultBySerialField_BankAccount_len = 0;
            
    ///银行密码
    // TThostFtdcPasswordType char[41]
    const char *RspQueryTradeResultBySerialField_BankPassWord = NULL;
    Py_ssize_t RspQueryTradeResultBySerialField_BankPassWord_len = 0;
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    const char *RspQueryTradeResultBySerialField_AccountID = NULL;
    Py_ssize_t RspQueryTradeResultBySerialField_AccountID_len = 0;
            
    ///期货密码
    // TThostFtdcPasswordType char[41]
    const char *RspQueryTradeResultBySerialField_Password = NULL;
    Py_ssize_t RspQueryTradeResultBySerialField_Password_len = 0;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *RspQueryTradeResultBySerialField_CurrencyID = NULL;
    Py_ssize_t RspQueryTradeResultBySerialField_CurrencyID_len = 0;
            
    ///转帐金额
    // TThostFtdcTradeAmountType double
    double RspQueryTradeResultBySerialField_TradeAmount = 0.0;
        
    ///摘要
    // TThostFtdcDigestType char[36]
    const char *RspQueryTradeResultBySerialField_Digest = NULL;
    Py_ssize_t RspQueryTradeResultBySerialField_Digest_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciiy#icy#y#y#y#y#y#y#y#dy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#iciis#ics#s#s#s#s#s#s#s#ds#", (char **)kwlist
#endif

        , &RspQueryTradeResultBySerialField_TradeCode, &RspQueryTradeResultBySerialField_TradeCode_len 
        , &RspQueryTradeResultBySerialField_BankID, &RspQueryTradeResultBySerialField_BankID_len 
        , &RspQueryTradeResultBySerialField_BankBranchID, &RspQueryTradeResultBySerialField_BankBranchID_len 
        , &RspQueryTradeResultBySerialField_BrokerID, &RspQueryTradeResultBySerialField_BrokerID_len 
        , &RspQueryTradeResultBySerialField_BrokerBranchID, &RspQueryTradeResultBySerialField_BrokerBranchID_len 
        , &RspQueryTradeResultBySerialField_TradeDate, &RspQueryTradeResultBySerialField_TradeDate_len 
        , &RspQueryTradeResultBySerialField_TradeTime, &RspQueryTradeResultBySerialField_TradeTime_len 
        , &RspQueryTradeResultBySerialField_BankSerial, &RspQueryTradeResultBySerialField_BankSerial_len 
        , &RspQueryTradeResultBySerialField_TradingDay, &RspQueryTradeResultBySerialField_TradingDay_len 
        , &RspQueryTradeResultBySerialField_PlateSerial 
        , &RspQueryTradeResultBySerialField_LastFragment 
        , &RspQueryTradeResultBySerialField_SessionID 
        , &RspQueryTradeResultBySerialField_ErrorID 
        , &RspQueryTradeResultBySerialField_ErrorMsg, &RspQueryTradeResultBySerialField_ErrorMsg_len 
        , &RspQueryTradeResultBySerialField_Reference 
        , &RspQueryTradeResultBySerialField_RefrenceIssureType 
        , &RspQueryTradeResultBySerialField_RefrenceIssure, &RspQueryTradeResultBySerialField_RefrenceIssure_len 
        , &RspQueryTradeResultBySerialField_OriginReturnCode, &RspQueryTradeResultBySerialField_OriginReturnCode_len 
        , &RspQueryTradeResultBySerialField_OriginDescrInfoForReturnCode, &RspQueryTradeResultBySerialField_OriginDescrInfoForReturnCode_len 
        , &RspQueryTradeResultBySerialField_BankAccount, &RspQueryTradeResultBySerialField_BankAccount_len 
        , &RspQueryTradeResultBySerialField_BankPassWord, &RspQueryTradeResultBySerialField_BankPassWord_len 
        , &RspQueryTradeResultBySerialField_AccountID, &RspQueryTradeResultBySerialField_AccountID_len 
        , &RspQueryTradeResultBySerialField_Password, &RspQueryTradeResultBySerialField_Password_len 
        , &RspQueryTradeResultBySerialField_CurrencyID, &RspQueryTradeResultBySerialField_CurrencyID_len 
        , &RspQueryTradeResultBySerialField_TradeAmount 
        , &RspQueryTradeResultBySerialField_Digest, &RspQueryTradeResultBySerialField_Digest_len 


    )) {
        return -1;
    }


    ///业务功能码
    // TThostFtdcTradeCodeType char[7]
    if( RspQueryTradeResultBySerialField_TradeCode != NULL ) {
        if(RspQueryTradeResultBySerialField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", RspQueryTradeResultBySerialField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
            return -1;
        }
        // memset(self->data.TradeCode, 0, sizeof(self->data.TradeCode));
        // memcpy(self->data.TradeCode, RspQueryTradeResultBySerialField_TradeCode, RspQueryTradeResultBySerialField_TradeCode_len);        
        strncpy(self->data.TradeCode, RspQueryTradeResultBySerialField_TradeCode, sizeof(self->data.TradeCode) );
        RspQueryTradeResultBySerialField_TradeCode = NULL;
    }
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    if( RspQueryTradeResultBySerialField_BankID != NULL ) {
        if(RspQueryTradeResultBySerialField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", RspQueryTradeResultBySerialField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
            return -1;
        }
        // memset(self->data.BankID, 0, sizeof(self->data.BankID));
        // memcpy(self->data.BankID, RspQueryTradeResultBySerialField_BankID, RspQueryTradeResultBySerialField_BankID_len);        
        strncpy(self->data.BankID, RspQueryTradeResultBySerialField_BankID, sizeof(self->data.BankID) );
        RspQueryTradeResultBySerialField_BankID = NULL;
    }
            
    ///银行分支机构代码
    // TThostFtdcBankBrchIDType char[5]
    if( RspQueryTradeResultBySerialField_BankBranchID != NULL ) {
        if(RspQueryTradeResultBySerialField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", RspQueryTradeResultBySerialField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
            return -1;
        }
        // memset(self->data.BankBranchID, 0, sizeof(self->data.BankBranchID));
        // memcpy(self->data.BankBranchID, RspQueryTradeResultBySerialField_BankBranchID, RspQueryTradeResultBySerialField_BankBranchID_len);        
        strncpy(self->data.BankBranchID, RspQueryTradeResultBySerialField_BankBranchID, sizeof(self->data.BankBranchID) );
        RspQueryTradeResultBySerialField_BankBranchID = NULL;
    }
            
    ///期商代码
    // TThostFtdcBrokerIDType char[11]
    if( RspQueryTradeResultBySerialField_BrokerID != NULL ) {
        if(RspQueryTradeResultBySerialField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", RspQueryTradeResultBySerialField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, RspQueryTradeResultBySerialField_BrokerID, RspQueryTradeResultBySerialField_BrokerID_len);        
        strncpy(self->data.BrokerID, RspQueryTradeResultBySerialField_BrokerID, sizeof(self->data.BrokerID) );
        RspQueryTradeResultBySerialField_BrokerID = NULL;
    }
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    if( RspQueryTradeResultBySerialField_BrokerBranchID != NULL ) {
        if(RspQueryTradeResultBySerialField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", RspQueryTradeResultBySerialField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
            return -1;
        }
        // memset(self->data.BrokerBranchID, 0, sizeof(self->data.BrokerBranchID));
        // memcpy(self->data.BrokerBranchID, RspQueryTradeResultBySerialField_BrokerBranchID, RspQueryTradeResultBySerialField_BrokerBranchID_len);        
        strncpy(self->data.BrokerBranchID, RspQueryTradeResultBySerialField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
        RspQueryTradeResultBySerialField_BrokerBranchID = NULL;
    }
            
    ///交易日期
    // TThostFtdcTradeDateType char[9]
    if( RspQueryTradeResultBySerialField_TradeDate != NULL ) {
        if(RspQueryTradeResultBySerialField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", RspQueryTradeResultBySerialField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
            return -1;
        }
        // memset(self->data.TradeDate, 0, sizeof(self->data.TradeDate));
        // memcpy(self->data.TradeDate, RspQueryTradeResultBySerialField_TradeDate, RspQueryTradeResultBySerialField_TradeDate_len);        
        strncpy(self->data.TradeDate, RspQueryTradeResultBySerialField_TradeDate, sizeof(self->data.TradeDate) );
        RspQueryTradeResultBySerialField_TradeDate = NULL;
    }
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    if( RspQueryTradeResultBySerialField_TradeTime != NULL ) {
        if(RspQueryTradeResultBySerialField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", RspQueryTradeResultBySerialField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
            return -1;
        }
        // memset(self->data.TradeTime, 0, sizeof(self->data.TradeTime));
        // memcpy(self->data.TradeTime, RspQueryTradeResultBySerialField_TradeTime, RspQueryTradeResultBySerialField_TradeTime_len);        
        strncpy(self->data.TradeTime, RspQueryTradeResultBySerialField_TradeTime, sizeof(self->data.TradeTime) );
        RspQueryTradeResultBySerialField_TradeTime = NULL;
    }
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    if( RspQueryTradeResultBySerialField_BankSerial != NULL ) {
        if(RspQueryTradeResultBySerialField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", RspQueryTradeResultBySerialField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
            return -1;
        }
        // memset(self->data.BankSerial, 0, sizeof(self->data.BankSerial));
        // memcpy(self->data.BankSerial, RspQueryTradeResultBySerialField_BankSerial, RspQueryTradeResultBySerialField_BankSerial_len);        
        strncpy(self->data.BankSerial, RspQueryTradeResultBySerialField_BankSerial, sizeof(self->data.BankSerial) );
        RspQueryTradeResultBySerialField_BankSerial = NULL;
    }
            
    ///交易系统日期
    // TThostFtdcTradeDateType char[9]
    if( RspQueryTradeResultBySerialField_TradingDay != NULL ) {
        if(RspQueryTradeResultBySerialField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", RspQueryTradeResultBySerialField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, RspQueryTradeResultBySerialField_TradingDay, RspQueryTradeResultBySerialField_TradingDay_len);        
        strncpy(self->data.TradingDay, RspQueryTradeResultBySerialField_TradingDay, sizeof(self->data.TradingDay) );
        RspQueryTradeResultBySerialField_TradingDay = NULL;
    }
            
    ///银期平台消息流水号
    // TThostFtdcSerialType int
    self->data.PlateSerial = RspQueryTradeResultBySerialField_PlateSerial;
        
    ///最后分片标志
    // TThostFtdcLastFragmentType char
    self->data.LastFragment = RspQueryTradeResultBySerialField_LastFragment;
            
    ///会话号
    // TThostFtdcSessionIDType int
    self->data.SessionID = RspQueryTradeResultBySerialField_SessionID;
        
    ///错误代码
    // TThostFtdcErrorIDType int
    self->data.ErrorID = RspQueryTradeResultBySerialField_ErrorID;
        
    ///错误信息
    // TThostFtdcErrorMsgType char[81]
    if( RspQueryTradeResultBySerialField_ErrorMsg != NULL ) {
        if(RspQueryTradeResultBySerialField_ErrorMsg_len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
            PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is %zd)", RspQueryTradeResultBySerialField_ErrorMsg_len, (Py_ssize_t)sizeof(self->data.ErrorMsg));
            return -1;
        }
        // memset(self->data.ErrorMsg, 0, sizeof(self->data.ErrorMsg));
        // memcpy(self->data.ErrorMsg, RspQueryTradeResultBySerialField_ErrorMsg, RspQueryTradeResultBySerialField_ErrorMsg_len);        
        strncpy(self->data.ErrorMsg, RspQueryTradeResultBySerialField_ErrorMsg, sizeof(self->data.ErrorMsg) );
        RspQueryTradeResultBySerialField_ErrorMsg = NULL;
    }
            
    ///流水号
    // TThostFtdcSerialType int
    self->data.Reference = RspQueryTradeResultBySerialField_Reference;
        
    ///本流水号发布者的机构类型
    // TThostFtdcInstitutionTypeType char
    self->data.RefrenceIssureType = RspQueryTradeResultBySerialField_RefrenceIssureType;
            
    ///本流水号发布者机构编码
    // TThostFtdcOrganCodeType char[36]
    if( RspQueryTradeResultBySerialField_RefrenceIssure != NULL ) {
        if(RspQueryTradeResultBySerialField_RefrenceIssure_len > (Py_ssize_t)sizeof(self->data.RefrenceIssure)) {
            PyErr_Format(PyExc_ValueError, "RefrenceIssure too long: length=%zd (max allowed is %zd)", RspQueryTradeResultBySerialField_RefrenceIssure_len, (Py_ssize_t)sizeof(self->data.RefrenceIssure));
            return -1;
        }
        // memset(self->data.RefrenceIssure, 0, sizeof(self->data.RefrenceIssure));
        // memcpy(self->data.RefrenceIssure, RspQueryTradeResultBySerialField_RefrenceIssure, RspQueryTradeResultBySerialField_RefrenceIssure_len);        
        strncpy(self->data.RefrenceIssure, RspQueryTradeResultBySerialField_RefrenceIssure, sizeof(self->data.RefrenceIssure) );
        RspQueryTradeResultBySerialField_RefrenceIssure = NULL;
    }
            
    ///原始返回代码
    // TThostFtdcReturnCodeType char[7]
    if( RspQueryTradeResultBySerialField_OriginReturnCode != NULL ) {
        if(RspQueryTradeResultBySerialField_OriginReturnCode_len > (Py_ssize_t)sizeof(self->data.OriginReturnCode)) {
            PyErr_Format(PyExc_ValueError, "OriginReturnCode too long: length=%zd (max allowed is %zd)", RspQueryTradeResultBySerialField_OriginReturnCode_len, (Py_ssize_t)sizeof(self->data.OriginReturnCode));
            return -1;
        }
        // memset(self->data.OriginReturnCode, 0, sizeof(self->data.OriginReturnCode));
        // memcpy(self->data.OriginReturnCode, RspQueryTradeResultBySerialField_OriginReturnCode, RspQueryTradeResultBySerialField_OriginReturnCode_len);        
        strncpy(self->data.OriginReturnCode, RspQueryTradeResultBySerialField_OriginReturnCode, sizeof(self->data.OriginReturnCode) );
        RspQueryTradeResultBySerialField_OriginReturnCode = NULL;
    }
            
    ///原始返回码描述
    // TThostFtdcDescrInfoForReturnCodeType char[129]
    if( RspQueryTradeResultBySerialField_OriginDescrInfoForReturnCode != NULL ) {
        if(RspQueryTradeResultBySerialField_OriginDescrInfoForReturnCode_len > (Py_ssize_t)sizeof(self->data.OriginDescrInfoForReturnCode)) {
            PyErr_Format(PyExc_ValueError, "OriginDescrInfoForReturnCode too long: length=%zd (max allowed is %zd)", RspQueryTradeResultBySerialField_OriginDescrInfoForReturnCode_len, (Py_ssize_t)sizeof(self->data.OriginDescrInfoForReturnCode));
            return -1;
        }
        // memset(self->data.OriginDescrInfoForReturnCode, 0, sizeof(self->data.OriginDescrInfoForReturnCode));
        // memcpy(self->data.OriginDescrInfoForReturnCode, RspQueryTradeResultBySerialField_OriginDescrInfoForReturnCode, RspQueryTradeResultBySerialField_OriginDescrInfoForReturnCode_len);        
        strncpy(self->data.OriginDescrInfoForReturnCode, RspQueryTradeResultBySerialField_OriginDescrInfoForReturnCode, sizeof(self->data.OriginDescrInfoForReturnCode) );
        RspQueryTradeResultBySerialField_OriginDescrInfoForReturnCode = NULL;
    }
            
    ///银行帐号
    // TThostFtdcBankAccountType char[41]
    if( RspQueryTradeResultBySerialField_BankAccount != NULL ) {
        if(RspQueryTradeResultBySerialField_BankAccount_len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
            PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is %zd)", RspQueryTradeResultBySerialField_BankAccount_len, (Py_ssize_t)sizeof(self->data.BankAccount));
            return -1;
        }
        // memset(self->data.BankAccount, 0, sizeof(self->data.BankAccount));
        // memcpy(self->data.BankAccount, RspQueryTradeResultBySerialField_BankAccount, RspQueryTradeResultBySerialField_BankAccount_len);        
        strncpy(self->data.BankAccount, RspQueryTradeResultBySerialField_BankAccount, sizeof(self->data.BankAccount) );
        RspQueryTradeResultBySerialField_BankAccount = NULL;
    }
            
    ///银行密码
    // TThostFtdcPasswordType char[41]
    if( RspQueryTradeResultBySerialField_BankPassWord != NULL ) {
        if(RspQueryTradeResultBySerialField_BankPassWord_len > (Py_ssize_t)sizeof(self->data.BankPassWord)) {
            PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is %zd)", RspQueryTradeResultBySerialField_BankPassWord_len, (Py_ssize_t)sizeof(self->data.BankPassWord));
            return -1;
        }
        // memset(self->data.BankPassWord, 0, sizeof(self->data.BankPassWord));
        // memcpy(self->data.BankPassWord, RspQueryTradeResultBySerialField_BankPassWord, RspQueryTradeResultBySerialField_BankPassWord_len);        
        strncpy(self->data.BankPassWord, RspQueryTradeResultBySerialField_BankPassWord, sizeof(self->data.BankPassWord) );
        RspQueryTradeResultBySerialField_BankPassWord = NULL;
    }
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    if( RspQueryTradeResultBySerialField_AccountID != NULL ) {
        if(RspQueryTradeResultBySerialField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", RspQueryTradeResultBySerialField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
            return -1;
        }
        // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
        // memcpy(self->data.AccountID, RspQueryTradeResultBySerialField_AccountID, RspQueryTradeResultBySerialField_AccountID_len);        
        strncpy(self->data.AccountID, RspQueryTradeResultBySerialField_AccountID, sizeof(self->data.AccountID) );
        RspQueryTradeResultBySerialField_AccountID = NULL;
    }
            
    ///期货密码
    // TThostFtdcPasswordType char[41]
    if( RspQueryTradeResultBySerialField_Password != NULL ) {
        if(RspQueryTradeResultBySerialField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", RspQueryTradeResultBySerialField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
            return -1;
        }
        // memset(self->data.Password, 0, sizeof(self->data.Password));
        // memcpy(self->data.Password, RspQueryTradeResultBySerialField_Password, RspQueryTradeResultBySerialField_Password_len);        
        strncpy(self->data.Password, RspQueryTradeResultBySerialField_Password, sizeof(self->data.Password) );
        RspQueryTradeResultBySerialField_Password = NULL;
    }
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( RspQueryTradeResultBySerialField_CurrencyID != NULL ) {
        if(RspQueryTradeResultBySerialField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", RspQueryTradeResultBySerialField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, RspQueryTradeResultBySerialField_CurrencyID, RspQueryTradeResultBySerialField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, RspQueryTradeResultBySerialField_CurrencyID, sizeof(self->data.CurrencyID) );
        RspQueryTradeResultBySerialField_CurrencyID = NULL;
    }
            
    ///转帐金额
    // TThostFtdcTradeAmountType double
    self->data.TradeAmount = RspQueryTradeResultBySerialField_TradeAmount;
        
    ///摘要
    // TThostFtdcDigestType char[36]
    if( RspQueryTradeResultBySerialField_Digest != NULL ) {
        if(RspQueryTradeResultBySerialField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
            PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", RspQueryTradeResultBySerialField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
            return -1;
        }
        // memset(self->data.Digest, 0, sizeof(self->data.Digest));
        // memcpy(self->data.Digest, RspQueryTradeResultBySerialField_Digest, RspQueryTradeResultBySerialField_Digest_len);        
        strncpy(self->data.Digest, RspQueryTradeResultBySerialField_Digest, sizeof(self->data.Digest) );
        RspQueryTradeResultBySerialField_Digest = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcRspQueryTradeResultBySerialField_dealloc(PyCThostFtdcRspQueryTradeResultBySerialField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_repr(PyCThostFtdcRspQueryTradeResultBySerialField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:i,s:y,s:i,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:d,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:i,s:s,s:i,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:d,s:s}"
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
        ,"ErrorID", self->data.ErrorID 
        ,"ErrorMsg", self->data.ErrorMsg//, (Py_ssize_t)sizeof(self->data.ErrorMsg) 
        ,"Reference", self->data.Reference 
        ,"RefrenceIssureType", self->data.RefrenceIssureType 
        ,"RefrenceIssure", self->data.RefrenceIssure//, (Py_ssize_t)sizeof(self->data.RefrenceIssure) 
        ,"OriginReturnCode", self->data.OriginReturnCode//, (Py_ssize_t)sizeof(self->data.OriginReturnCode) 
        ,"OriginDescrInfoForReturnCode", self->data.OriginDescrInfoForReturnCode//, (Py_ssize_t)sizeof(self->data.OriginDescrInfoForReturnCode) 
        ,"BankAccount", self->data.BankAccount//, (Py_ssize_t)sizeof(self->data.BankAccount) 
        ,"BankPassWord", self->data.BankPassWord//, (Py_ssize_t)sizeof(self->data.BankPassWord) 
        ,"AccountID", self->data.AccountID//, (Py_ssize_t)sizeof(self->data.AccountID) 
        ,"Password", self->data.Password//, (Py_ssize_t)sizeof(self->data.Password) 
        ,"CurrencyID", self->data.CurrencyID//, (Py_ssize_t)sizeof(self->data.CurrencyID) 
        ,"TradeAmount", self->data.TradeAmount 
        ,"Digest", self->data.Digest//, (Py_ssize_t)sizeof(self->data.Digest) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspQueryTradeResultBySerialField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///业务功能码
// TThostFtdcTradeCodeType char[7]
static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_TradeCode(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeCode, (Py_ssize_t)sizeof(self->data.TradeCode));
    return PyBytes_FromString(self->data.TradeCode);
}

///业务功能码
// TThostFtdcTradeCodeType char[7]
static int PyCThostFtdcRspQueryTradeResultBySerialField_set_TradeCode(PyCThostFtdcRspQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_BankID(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankID, (Py_ssize_t)sizeof(self->data.BankID));
    return PyBytes_FromString(self->data.BankID);
}

///银行代码
// TThostFtdcBankIDType char[4]
static int PyCThostFtdcRspQueryTradeResultBySerialField_set_BankID(PyCThostFtdcRspQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_BankBranchID(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankBranchID, (Py_ssize_t)sizeof(self->data.BankBranchID));
    return PyBytes_FromString(self->data.BankBranchID);
}

///银行分支机构代码
// TThostFtdcBankBrchIDType char[5]
static int PyCThostFtdcRspQueryTradeResultBySerialField_set_BankBranchID(PyCThostFtdcRspQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_BrokerID(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///期商代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcRspQueryTradeResultBySerialField_set_BrokerID(PyCThostFtdcRspQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_BrokerBranchID(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerBranchID, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
    return PyBytes_FromString(self->data.BrokerBranchID);
}

///期商分支机构代码
// TThostFtdcFutureBranchIDType char[31]
static int PyCThostFtdcRspQueryTradeResultBySerialField_set_BrokerBranchID(PyCThostFtdcRspQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_TradeDate(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeDate, (Py_ssize_t)sizeof(self->data.TradeDate));
    return PyBytes_FromString(self->data.TradeDate);
}

///交易日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcRspQueryTradeResultBySerialField_set_TradeDate(PyCThostFtdcRspQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_TradeTime(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeTime, (Py_ssize_t)sizeof(self->data.TradeTime));
    return PyBytes_FromString(self->data.TradeTime);
}

///交易时间
// TThostFtdcTradeTimeType char[9]
static int PyCThostFtdcRspQueryTradeResultBySerialField_set_TradeTime(PyCThostFtdcRspQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_BankSerial(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankSerial, (Py_ssize_t)sizeof(self->data.BankSerial));
    return PyBytes_FromString(self->data.BankSerial);
}

///银行流水号
// TThostFtdcBankSerialType char[13]
static int PyCThostFtdcRspQueryTradeResultBySerialField_set_BankSerial(PyCThostFtdcRspQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_TradingDay(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易系统日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcRspQueryTradeResultBySerialField_set_TradingDay(PyCThostFtdcRspQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_PlateSerial(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.PlateSerial);
#else
    return PyInt_FromLong(self->data.PlateSerial);
#endif
}

///银期平台消息流水号
// TThostFtdcSerialType int
static int PyCThostFtdcRspQueryTradeResultBySerialField_set_PlateSerial(PyCThostFtdcRspQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_LastFragment(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

///最后分片标志
// TThostFtdcLastFragmentType char
static int PyCThostFtdcRspQueryTradeResultBySerialField_set_LastFragment(PyCThostFtdcRspQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_SessionID(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话号
// TThostFtdcSessionIDType int
static int PyCThostFtdcRspQueryTradeResultBySerialField_set_SessionID(PyCThostFtdcRspQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
        
///错误代码
// TThostFtdcErrorIDType int
static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_ErrorID(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.ErrorID);
#else
    return PyInt_FromLong(self->data.ErrorID);
#endif
}

///错误代码
// TThostFtdcErrorIDType int
static int PyCThostFtdcRspQueryTradeResultBySerialField_set_ErrorID(PyCThostFtdcRspQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_ErrorMsg(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ErrorMsg, (Py_ssize_t)sizeof(self->data.ErrorMsg));
    return PyBytes_FromString(self->data.ErrorMsg);
}

///错误信息
// TThostFtdcErrorMsgType char[81]
static int PyCThostFtdcRspQueryTradeResultBySerialField_set_ErrorMsg(PyCThostFtdcRspQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
            
///流水号
// TThostFtdcSerialType int
static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_Reference(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.Reference);
#else
    return PyInt_FromLong(self->data.Reference);
#endif
}

///流水号
// TThostFtdcSerialType int
static int PyCThostFtdcRspQueryTradeResultBySerialField_set_Reference(PyCThostFtdcRspQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_RefrenceIssureType(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.RefrenceIssureType), 1);
}

///本流水号发布者的机构类型
// TThostFtdcInstitutionTypeType char
static int PyCThostFtdcRspQueryTradeResultBySerialField_set_RefrenceIssureType(PyCThostFtdcRspQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_RefrenceIssure(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.RefrenceIssure, (Py_ssize_t)sizeof(self->data.RefrenceIssure));
    return PyBytes_FromString(self->data.RefrenceIssure);
}

///本流水号发布者机构编码
// TThostFtdcOrganCodeType char[36]
static int PyCThostFtdcRspQueryTradeResultBySerialField_set_RefrenceIssure(PyCThostFtdcRspQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
            
///原始返回代码
// TThostFtdcReturnCodeType char[7]
static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_OriginReturnCode(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OriginReturnCode, (Py_ssize_t)sizeof(self->data.OriginReturnCode));
    return PyBytes_FromString(self->data.OriginReturnCode);
}

///原始返回代码
// TThostFtdcReturnCodeType char[7]
static int PyCThostFtdcRspQueryTradeResultBySerialField_set_OriginReturnCode(PyCThostFtdcRspQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OriginReturnCode Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OriginReturnCode)) {
        PyErr_SetString(PyExc_ValueError, "OriginReturnCode must be less than 7 bytes");
        return -1;
    }
    // memset(self->data.OriginReturnCode, 0, sizeof(self->data.OriginReturnCode));
    // memcpy(self->data.OriginReturnCode, buf, len);
    strncpy(self->data.OriginReturnCode, buf, sizeof(self->data.OriginReturnCode));
    return 0;
}
            
///原始返回码描述
// TThostFtdcDescrInfoForReturnCodeType char[129]
static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_OriginDescrInfoForReturnCode(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OriginDescrInfoForReturnCode, (Py_ssize_t)sizeof(self->data.OriginDescrInfoForReturnCode));
    return PyBytes_FromString(self->data.OriginDescrInfoForReturnCode);
}

///原始返回码描述
// TThostFtdcDescrInfoForReturnCodeType char[129]
static int PyCThostFtdcRspQueryTradeResultBySerialField_set_OriginDescrInfoForReturnCode(PyCThostFtdcRspQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OriginDescrInfoForReturnCode Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OriginDescrInfoForReturnCode)) {
        PyErr_SetString(PyExc_ValueError, "OriginDescrInfoForReturnCode must be less than 129 bytes");
        return -1;
    }
    // memset(self->data.OriginDescrInfoForReturnCode, 0, sizeof(self->data.OriginDescrInfoForReturnCode));
    // memcpy(self->data.OriginDescrInfoForReturnCode, buf, len);
    strncpy(self->data.OriginDescrInfoForReturnCode, buf, sizeof(self->data.OriginDescrInfoForReturnCode));
    return 0;
}
            
///银行帐号
// TThostFtdcBankAccountType char[41]
static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_BankAccount(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankAccount, (Py_ssize_t)sizeof(self->data.BankAccount));
    return PyBytes_FromString(self->data.BankAccount);
}

///银行帐号
// TThostFtdcBankAccountType char[41]
static int PyCThostFtdcRspQueryTradeResultBySerialField_set_BankAccount(PyCThostFtdcRspQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_BankPassWord(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankPassWord, (Py_ssize_t)sizeof(self->data.BankPassWord));
    return PyBytes_FromString(self->data.BankPassWord);
}

///银行密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcRspQueryTradeResultBySerialField_set_BankPassWord(PyCThostFtdcRspQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_AccountID(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AccountID, (Py_ssize_t)sizeof(self->data.AccountID));
    return PyBytes_FromString(self->data.AccountID);
}

///投资者帐号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcRspQueryTradeResultBySerialField_set_AccountID(PyCThostFtdcRspQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_Password(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Password, (Py_ssize_t)sizeof(self->data.Password));
    return PyBytes_FromString(self->data.Password);
}

///期货密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcRspQueryTradeResultBySerialField_set_Password(PyCThostFtdcRspQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_CurrencyID(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcRspQueryTradeResultBySerialField_set_CurrencyID(PyCThostFtdcRspQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_TradeAmount(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
    return PyFloat_FromDouble(self->data.TradeAmount);
}

///转帐金额
// TThostFtdcTradeAmountType double
static int PyCThostFtdcRspQueryTradeResultBySerialField_set_TradeAmount(PyCThostFtdcRspQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_Digest(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Digest, (Py_ssize_t)sizeof(self->data.Digest));
    return PyBytes_FromString(self->data.Digest);
}

///摘要
// TThostFtdcDigestType char[36]
static int PyCThostFtdcRspQueryTradeResultBySerialField_set_Digest(PyCThostFtdcRspQueryTradeResultBySerialField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcRspQueryTradeResultBySerialField_getset[] = {
    ///业务功能码 
    {(char *)"TradeCode", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_TradeCode, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_TradeCode, (char *)"TradeCode", NULL},
    ///银行代码 
    {(char *)"BankID", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_BankID, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_BankID, (char *)"BankID", NULL},
    ///银行分支机构代码 
    {(char *)"BankBranchID", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_BankBranchID, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_BankBranchID, (char *)"BankBranchID", NULL},
    ///期商代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_BrokerID, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_BrokerID, (char *)"BrokerID", NULL},
    ///期商分支机构代码 
    {(char *)"BrokerBranchID", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_BrokerBranchID, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
    ///交易日期 
    {(char *)"TradeDate", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_TradeDate, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_TradeDate, (char *)"TradeDate", NULL},
    ///交易时间 
    {(char *)"TradeTime", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_TradeTime, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_TradeTime, (char *)"TradeTime", NULL},
    ///银行流水号 
    {(char *)"BankSerial", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_BankSerial, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_BankSerial, (char *)"BankSerial", NULL},
    ///交易系统日期 
    {(char *)"TradingDay", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_TradingDay, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_TradingDay, (char *)"TradingDay", NULL},
    ///银期平台消息流水号 
    {(char *)"PlateSerial", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_PlateSerial, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_PlateSerial, (char *)"PlateSerial", NULL},
    ///最后分片标志 
    {(char *)"LastFragment", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_LastFragment, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_LastFragment, (char *)"LastFragment", NULL},
    ///会话号 
    {(char *)"SessionID", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_SessionID, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_SessionID, (char *)"SessionID", NULL},
    ///错误代码 
    {(char *)"ErrorID", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_ErrorID, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_ErrorID, (char *)"ErrorID", NULL},
    ///错误信息 
    {(char *)"ErrorMsg", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_ErrorMsg, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_ErrorMsg, (char *)"ErrorMsg", NULL},
    ///流水号 
    {(char *)"Reference", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_Reference, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_Reference, (char *)"Reference", NULL},
    ///本流水号发布者的机构类型 
    {(char *)"RefrenceIssureType", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_RefrenceIssureType, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_RefrenceIssureType, (char *)"RefrenceIssureType", NULL},
    ///本流水号发布者机构编码 
    {(char *)"RefrenceIssure", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_RefrenceIssure, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_RefrenceIssure, (char *)"RefrenceIssure", NULL},
    ///原始返回代码 
    {(char *)"OriginReturnCode", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_OriginReturnCode, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_OriginReturnCode, (char *)"OriginReturnCode", NULL},
    ///原始返回码描述 
    {(char *)"OriginDescrInfoForReturnCode", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_OriginDescrInfoForReturnCode, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_OriginDescrInfoForReturnCode, (char *)"OriginDescrInfoForReturnCode", NULL},
    ///银行帐号 
    {(char *)"BankAccount", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_BankAccount, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_BankAccount, (char *)"BankAccount", NULL},
    ///银行密码 
    {(char *)"BankPassWord", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_BankPassWord, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_BankPassWord, (char *)"BankPassWord", NULL},
    ///投资者帐号 
    {(char *)"AccountID", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_AccountID, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_AccountID, (char *)"AccountID", NULL},
    ///期货密码 
    {(char *)"Password", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_Password, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_Password, (char *)"Password", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_CurrencyID, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_CurrencyID, (char *)"CurrencyID", NULL},
    ///转帐金额 
    {(char *)"TradeAmount", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_TradeAmount, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_TradeAmount, (char *)"TradeAmount", NULL},
    ///摘要 
    {(char *)"Digest", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_Digest, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_Digest, (char *)"Digest", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRspQueryTradeResultBySerialFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRspQueryTradeResultBySerialField",	/* tp_name */
	sizeof(PyCThostFtdcRspQueryTradeResultBySerialField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRspQueryTradeResultBySerialField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRspQueryTradeResultBySerialField_repr,   /* tp_repr */
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
	"CThostFtdcRspQueryTradeResultBySerialField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRspQueryTradeResultBySerialField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRspQueryTradeResultBySerialField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRspQueryTradeResultBySerialField_new,       /* tp_new */
};

int PyCThostFtdcRspQueryTradeResultBySerialFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRspQueryTradeResultBySerialField  */
	if (PyType_Ready(&PyCThostFtdcRspQueryTradeResultBySerialFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRspQueryTradeResultBySerialField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRspQueryTradeResultBySerialFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRspQueryTradeResultBySerialField", (PyObject *)&PyCThostFtdcRspQueryTradeResultBySerialFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRspQueryTradeResultBySerialField to module");
        Py_DECREF(&PyCThostFtdcRspQueryTradeResultBySerialFieldType);
		return -1;
    }

    return 0;
}
