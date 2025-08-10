
#include "PyCThostFtdcReqFutureSignOutField.h"

///期商签退请求

static PyObject *PyCThostFtdcReqFutureSignOutField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcReqFutureSignOutField *self = (PyCThostFtdcReqFutureSignOutField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcReqFutureSignOutField_init(PyCThostFtdcReqFutureSignOutField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "InstallID", "UserID", "Digest", "CurrencyID", "DeviceID", "BrokerIDByBank", "OperNo", "RequestID", "TID",  NULL};


    ///业务功能码
    // TThostFtdcTradeCodeType char[7]
    const char *ReqFutureSignOutField_TradeCode = NULL;
    Py_ssize_t ReqFutureSignOutField_TradeCode_len = 0;
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    const char *ReqFutureSignOutField_BankID = NULL;
    Py_ssize_t ReqFutureSignOutField_BankID_len = 0;
            
    ///银行分支机构代码
    // TThostFtdcBankBrchIDType char[5]
    const char *ReqFutureSignOutField_BankBranchID = NULL;
    Py_ssize_t ReqFutureSignOutField_BankBranchID_len = 0;
            
    ///期商代码
    // TThostFtdcBrokerIDType char[11]
    const char *ReqFutureSignOutField_BrokerID = NULL;
    Py_ssize_t ReqFutureSignOutField_BrokerID_len = 0;
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    const char *ReqFutureSignOutField_BrokerBranchID = NULL;
    Py_ssize_t ReqFutureSignOutField_BrokerBranchID_len = 0;
            
    ///交易日期
    // TThostFtdcTradeDateType char[9]
    const char *ReqFutureSignOutField_TradeDate = NULL;
    Py_ssize_t ReqFutureSignOutField_TradeDate_len = 0;
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    const char *ReqFutureSignOutField_TradeTime = NULL;
    Py_ssize_t ReqFutureSignOutField_TradeTime_len = 0;
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    const char *ReqFutureSignOutField_BankSerial = NULL;
    Py_ssize_t ReqFutureSignOutField_BankSerial_len = 0;
            
    ///交易系统日期
    // TThostFtdcTradeDateType char[9]
    const char *ReqFutureSignOutField_TradingDay = NULL;
    Py_ssize_t ReqFutureSignOutField_TradingDay_len = 0;
            
    ///银期平台消息流水号
    // TThostFtdcSerialType int
    int ReqFutureSignOutField_PlateSerial = 0;
        
    ///最后分片标志
    // TThostFtdcLastFragmentType char
    char ReqFutureSignOutField_LastFragment = 0;
            
    ///会话号
    // TThostFtdcSessionIDType int
    int ReqFutureSignOutField_SessionID = 0;
        
    ///安装编号
    // TThostFtdcInstallIDType int
    int ReqFutureSignOutField_InstallID = 0;
        
    ///用户标识
    // TThostFtdcUserIDType char[16]
    const char *ReqFutureSignOutField_UserID = NULL;
    Py_ssize_t ReqFutureSignOutField_UserID_len = 0;
            
    ///摘要
    // TThostFtdcDigestType char[36]
    const char *ReqFutureSignOutField_Digest = NULL;
    Py_ssize_t ReqFutureSignOutField_Digest_len = 0;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *ReqFutureSignOutField_CurrencyID = NULL;
    Py_ssize_t ReqFutureSignOutField_CurrencyID_len = 0;
            
    ///渠道标志
    // TThostFtdcDeviceIDType char[3]
    const char *ReqFutureSignOutField_DeviceID = NULL;
    Py_ssize_t ReqFutureSignOutField_DeviceID_len = 0;
            
    ///期货公司银行编码
    // TThostFtdcBankCodingForFutureType char[33]
    const char *ReqFutureSignOutField_BrokerIDByBank = NULL;
    Py_ssize_t ReqFutureSignOutField_BrokerIDByBank_len = 0;
            
    ///交易柜员
    // TThostFtdcOperNoType char[17]
    const char *ReqFutureSignOutField_OperNo = NULL;
    Py_ssize_t ReqFutureSignOutField_OperNo_len = 0;
            
    ///请求编号
    // TThostFtdcRequestIDType int
    int ReqFutureSignOutField_RequestID = 0;
        
    ///交易ID
    // TThostFtdcTIDType int
    int ReqFutureSignOutField_TID = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciiy#y#y#y#y#y#ii", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#iciis#s#s#s#s#s#ii", (char **)kwlist
#endif

        , &ReqFutureSignOutField_TradeCode, &ReqFutureSignOutField_TradeCode_len 
        , &ReqFutureSignOutField_BankID, &ReqFutureSignOutField_BankID_len 
        , &ReqFutureSignOutField_BankBranchID, &ReqFutureSignOutField_BankBranchID_len 
        , &ReqFutureSignOutField_BrokerID, &ReqFutureSignOutField_BrokerID_len 
        , &ReqFutureSignOutField_BrokerBranchID, &ReqFutureSignOutField_BrokerBranchID_len 
        , &ReqFutureSignOutField_TradeDate, &ReqFutureSignOutField_TradeDate_len 
        , &ReqFutureSignOutField_TradeTime, &ReqFutureSignOutField_TradeTime_len 
        , &ReqFutureSignOutField_BankSerial, &ReqFutureSignOutField_BankSerial_len 
        , &ReqFutureSignOutField_TradingDay, &ReqFutureSignOutField_TradingDay_len 
        , &ReqFutureSignOutField_PlateSerial 
        , &ReqFutureSignOutField_LastFragment 
        , &ReqFutureSignOutField_SessionID 
        , &ReqFutureSignOutField_InstallID 
        , &ReqFutureSignOutField_UserID, &ReqFutureSignOutField_UserID_len 
        , &ReqFutureSignOutField_Digest, &ReqFutureSignOutField_Digest_len 
        , &ReqFutureSignOutField_CurrencyID, &ReqFutureSignOutField_CurrencyID_len 
        , &ReqFutureSignOutField_DeviceID, &ReqFutureSignOutField_DeviceID_len 
        , &ReqFutureSignOutField_BrokerIDByBank, &ReqFutureSignOutField_BrokerIDByBank_len 
        , &ReqFutureSignOutField_OperNo, &ReqFutureSignOutField_OperNo_len 
        , &ReqFutureSignOutField_RequestID 
        , &ReqFutureSignOutField_TID 


    )) {
        return -1;
    }


    ///业务功能码
    // TThostFtdcTradeCodeType char[7]
    if( ReqFutureSignOutField_TradeCode != NULL ) {
        if(ReqFutureSignOutField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", ReqFutureSignOutField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
            return -1;
        }
        // memset(self->data.TradeCode, 0, sizeof(self->data.TradeCode));
        // memcpy(self->data.TradeCode, ReqFutureSignOutField_TradeCode, ReqFutureSignOutField_TradeCode_len);        
        strncpy(self->data.TradeCode, ReqFutureSignOutField_TradeCode, sizeof(self->data.TradeCode) );
        ReqFutureSignOutField_TradeCode = NULL;
    }
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    if( ReqFutureSignOutField_BankID != NULL ) {
        if(ReqFutureSignOutField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", ReqFutureSignOutField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
            return -1;
        }
        // memset(self->data.BankID, 0, sizeof(self->data.BankID));
        // memcpy(self->data.BankID, ReqFutureSignOutField_BankID, ReqFutureSignOutField_BankID_len);        
        strncpy(self->data.BankID, ReqFutureSignOutField_BankID, sizeof(self->data.BankID) );
        ReqFutureSignOutField_BankID = NULL;
    }
            
    ///银行分支机构代码
    // TThostFtdcBankBrchIDType char[5]
    if( ReqFutureSignOutField_BankBranchID != NULL ) {
        if(ReqFutureSignOutField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", ReqFutureSignOutField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
            return -1;
        }
        // memset(self->data.BankBranchID, 0, sizeof(self->data.BankBranchID));
        // memcpy(self->data.BankBranchID, ReqFutureSignOutField_BankBranchID, ReqFutureSignOutField_BankBranchID_len);        
        strncpy(self->data.BankBranchID, ReqFutureSignOutField_BankBranchID, sizeof(self->data.BankBranchID) );
        ReqFutureSignOutField_BankBranchID = NULL;
    }
            
    ///期商代码
    // TThostFtdcBrokerIDType char[11]
    if( ReqFutureSignOutField_BrokerID != NULL ) {
        if(ReqFutureSignOutField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", ReqFutureSignOutField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, ReqFutureSignOutField_BrokerID, ReqFutureSignOutField_BrokerID_len);        
        strncpy(self->data.BrokerID, ReqFutureSignOutField_BrokerID, sizeof(self->data.BrokerID) );
        ReqFutureSignOutField_BrokerID = NULL;
    }
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    if( ReqFutureSignOutField_BrokerBranchID != NULL ) {
        if(ReqFutureSignOutField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", ReqFutureSignOutField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
            return -1;
        }
        // memset(self->data.BrokerBranchID, 0, sizeof(self->data.BrokerBranchID));
        // memcpy(self->data.BrokerBranchID, ReqFutureSignOutField_BrokerBranchID, ReqFutureSignOutField_BrokerBranchID_len);        
        strncpy(self->data.BrokerBranchID, ReqFutureSignOutField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
        ReqFutureSignOutField_BrokerBranchID = NULL;
    }
            
    ///交易日期
    // TThostFtdcTradeDateType char[9]
    if( ReqFutureSignOutField_TradeDate != NULL ) {
        if(ReqFutureSignOutField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", ReqFutureSignOutField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
            return -1;
        }
        // memset(self->data.TradeDate, 0, sizeof(self->data.TradeDate));
        // memcpy(self->data.TradeDate, ReqFutureSignOutField_TradeDate, ReqFutureSignOutField_TradeDate_len);        
        strncpy(self->data.TradeDate, ReqFutureSignOutField_TradeDate, sizeof(self->data.TradeDate) );
        ReqFutureSignOutField_TradeDate = NULL;
    }
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    if( ReqFutureSignOutField_TradeTime != NULL ) {
        if(ReqFutureSignOutField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", ReqFutureSignOutField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
            return -1;
        }
        // memset(self->data.TradeTime, 0, sizeof(self->data.TradeTime));
        // memcpy(self->data.TradeTime, ReqFutureSignOutField_TradeTime, ReqFutureSignOutField_TradeTime_len);        
        strncpy(self->data.TradeTime, ReqFutureSignOutField_TradeTime, sizeof(self->data.TradeTime) );
        ReqFutureSignOutField_TradeTime = NULL;
    }
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    if( ReqFutureSignOutField_BankSerial != NULL ) {
        if(ReqFutureSignOutField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", ReqFutureSignOutField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
            return -1;
        }
        // memset(self->data.BankSerial, 0, sizeof(self->data.BankSerial));
        // memcpy(self->data.BankSerial, ReqFutureSignOutField_BankSerial, ReqFutureSignOutField_BankSerial_len);        
        strncpy(self->data.BankSerial, ReqFutureSignOutField_BankSerial, sizeof(self->data.BankSerial) );
        ReqFutureSignOutField_BankSerial = NULL;
    }
            
    ///交易系统日期
    // TThostFtdcTradeDateType char[9]
    if( ReqFutureSignOutField_TradingDay != NULL ) {
        if(ReqFutureSignOutField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", ReqFutureSignOutField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, ReqFutureSignOutField_TradingDay, ReqFutureSignOutField_TradingDay_len);        
        strncpy(self->data.TradingDay, ReqFutureSignOutField_TradingDay, sizeof(self->data.TradingDay) );
        ReqFutureSignOutField_TradingDay = NULL;
    }
            
    ///银期平台消息流水号
    // TThostFtdcSerialType int
    self->data.PlateSerial = ReqFutureSignOutField_PlateSerial;
        
    ///最后分片标志
    // TThostFtdcLastFragmentType char
    self->data.LastFragment = ReqFutureSignOutField_LastFragment;
            
    ///会话号
    // TThostFtdcSessionIDType int
    self->data.SessionID = ReqFutureSignOutField_SessionID;
        
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = ReqFutureSignOutField_InstallID;
        
    ///用户标识
    // TThostFtdcUserIDType char[16]
    if( ReqFutureSignOutField_UserID != NULL ) {
        if(ReqFutureSignOutField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", ReqFutureSignOutField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, ReqFutureSignOutField_UserID, ReqFutureSignOutField_UserID_len);        
        strncpy(self->data.UserID, ReqFutureSignOutField_UserID, sizeof(self->data.UserID) );
        ReqFutureSignOutField_UserID = NULL;
    }
            
    ///摘要
    // TThostFtdcDigestType char[36]
    if( ReqFutureSignOutField_Digest != NULL ) {
        if(ReqFutureSignOutField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
            PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", ReqFutureSignOutField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
            return -1;
        }
        // memset(self->data.Digest, 0, sizeof(self->data.Digest));
        // memcpy(self->data.Digest, ReqFutureSignOutField_Digest, ReqFutureSignOutField_Digest_len);        
        strncpy(self->data.Digest, ReqFutureSignOutField_Digest, sizeof(self->data.Digest) );
        ReqFutureSignOutField_Digest = NULL;
    }
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( ReqFutureSignOutField_CurrencyID != NULL ) {
        if(ReqFutureSignOutField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", ReqFutureSignOutField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, ReqFutureSignOutField_CurrencyID, ReqFutureSignOutField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, ReqFutureSignOutField_CurrencyID, sizeof(self->data.CurrencyID) );
        ReqFutureSignOutField_CurrencyID = NULL;
    }
            
    ///渠道标志
    // TThostFtdcDeviceIDType char[3]
    if( ReqFutureSignOutField_DeviceID != NULL ) {
        if(ReqFutureSignOutField_DeviceID_len > (Py_ssize_t)sizeof(self->data.DeviceID)) {
            PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is %zd)", ReqFutureSignOutField_DeviceID_len, (Py_ssize_t)sizeof(self->data.DeviceID));
            return -1;
        }
        // memset(self->data.DeviceID, 0, sizeof(self->data.DeviceID));
        // memcpy(self->data.DeviceID, ReqFutureSignOutField_DeviceID, ReqFutureSignOutField_DeviceID_len);        
        strncpy(self->data.DeviceID, ReqFutureSignOutField_DeviceID, sizeof(self->data.DeviceID) );
        ReqFutureSignOutField_DeviceID = NULL;
    }
            
    ///期货公司银行编码
    // TThostFtdcBankCodingForFutureType char[33]
    if( ReqFutureSignOutField_BrokerIDByBank != NULL ) {
        if(ReqFutureSignOutField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
            PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", ReqFutureSignOutField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
            return -1;
        }
        // memset(self->data.BrokerIDByBank, 0, sizeof(self->data.BrokerIDByBank));
        // memcpy(self->data.BrokerIDByBank, ReqFutureSignOutField_BrokerIDByBank, ReqFutureSignOutField_BrokerIDByBank_len);        
        strncpy(self->data.BrokerIDByBank, ReqFutureSignOutField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
        ReqFutureSignOutField_BrokerIDByBank = NULL;
    }
            
    ///交易柜员
    // TThostFtdcOperNoType char[17]
    if( ReqFutureSignOutField_OperNo != NULL ) {
        if(ReqFutureSignOutField_OperNo_len > (Py_ssize_t)sizeof(self->data.OperNo)) {
            PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is %zd)", ReqFutureSignOutField_OperNo_len, (Py_ssize_t)sizeof(self->data.OperNo));
            return -1;
        }
        // memset(self->data.OperNo, 0, sizeof(self->data.OperNo));
        // memcpy(self->data.OperNo, ReqFutureSignOutField_OperNo, ReqFutureSignOutField_OperNo_len);        
        strncpy(self->data.OperNo, ReqFutureSignOutField_OperNo, sizeof(self->data.OperNo) );
        ReqFutureSignOutField_OperNo = NULL;
    }
            
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = ReqFutureSignOutField_RequestID;
        
    ///交易ID
    // TThostFtdcTIDType int
    self->data.TID = ReqFutureSignOutField_TID;
        

    return 0;
}

static void PyCThostFtdcReqFutureSignOutField_dealloc(PyCThostFtdcReqFutureSignOutField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcReqFutureSignOutField_repr(PyCThostFtdcReqFutureSignOutField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:i}"
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
        ,"InstallID", self->data.InstallID 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"Digest", self->data.Digest//, (Py_ssize_t)sizeof(self->data.Digest) 
        ,"CurrencyID", self->data.CurrencyID//, (Py_ssize_t)sizeof(self->data.CurrencyID) 
        ,"DeviceID", self->data.DeviceID//, (Py_ssize_t)sizeof(self->data.DeviceID) 
        ,"BrokerIDByBank", self->data.BrokerIDByBank//, (Py_ssize_t)sizeof(self->data.BrokerIDByBank) 
        ,"OperNo", self->data.OperNo//, (Py_ssize_t)sizeof(self->data.OperNo) 
        ,"RequestID", self->data.RequestID 
        ,"TID", self->data.TID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqFutureSignOutField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///业务功能码
// TThostFtdcTradeCodeType char[7]
static PyObject *PyCThostFtdcReqFutureSignOutField_get_TradeCode(PyCThostFtdcReqFutureSignOutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeCode, (Py_ssize_t)sizeof(self->data.TradeCode));
    return PyBytes_FromString(self->data.TradeCode);
}

///业务功能码
// TThostFtdcTradeCodeType char[7]
static int PyCThostFtdcReqFutureSignOutField_set_TradeCode(PyCThostFtdcReqFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqFutureSignOutField_get_BankID(PyCThostFtdcReqFutureSignOutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankID, (Py_ssize_t)sizeof(self->data.BankID));
    return PyBytes_FromString(self->data.BankID);
}

///银行代码
// TThostFtdcBankIDType char[4]
static int PyCThostFtdcReqFutureSignOutField_set_BankID(PyCThostFtdcReqFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqFutureSignOutField_get_BankBranchID(PyCThostFtdcReqFutureSignOutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankBranchID, (Py_ssize_t)sizeof(self->data.BankBranchID));
    return PyBytes_FromString(self->data.BankBranchID);
}

///银行分支机构代码
// TThostFtdcBankBrchIDType char[5]
static int PyCThostFtdcReqFutureSignOutField_set_BankBranchID(PyCThostFtdcReqFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqFutureSignOutField_get_BrokerID(PyCThostFtdcReqFutureSignOutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///期商代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcReqFutureSignOutField_set_BrokerID(PyCThostFtdcReqFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqFutureSignOutField_get_BrokerBranchID(PyCThostFtdcReqFutureSignOutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerBranchID, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
    return PyBytes_FromString(self->data.BrokerBranchID);
}

///期商分支机构代码
// TThostFtdcFutureBranchIDType char[31]
static int PyCThostFtdcReqFutureSignOutField_set_BrokerBranchID(PyCThostFtdcReqFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqFutureSignOutField_get_TradeDate(PyCThostFtdcReqFutureSignOutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeDate, (Py_ssize_t)sizeof(self->data.TradeDate));
    return PyBytes_FromString(self->data.TradeDate);
}

///交易日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcReqFutureSignOutField_set_TradeDate(PyCThostFtdcReqFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqFutureSignOutField_get_TradeTime(PyCThostFtdcReqFutureSignOutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeTime, (Py_ssize_t)sizeof(self->data.TradeTime));
    return PyBytes_FromString(self->data.TradeTime);
}

///交易时间
// TThostFtdcTradeTimeType char[9]
static int PyCThostFtdcReqFutureSignOutField_set_TradeTime(PyCThostFtdcReqFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqFutureSignOutField_get_BankSerial(PyCThostFtdcReqFutureSignOutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankSerial, (Py_ssize_t)sizeof(self->data.BankSerial));
    return PyBytes_FromString(self->data.BankSerial);
}

///银行流水号
// TThostFtdcBankSerialType char[13]
static int PyCThostFtdcReqFutureSignOutField_set_BankSerial(PyCThostFtdcReqFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqFutureSignOutField_get_TradingDay(PyCThostFtdcReqFutureSignOutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易系统日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcReqFutureSignOutField_set_TradingDay(PyCThostFtdcReqFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqFutureSignOutField_get_PlateSerial(PyCThostFtdcReqFutureSignOutField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.PlateSerial);
#else
    return PyInt_FromLong(self->data.PlateSerial);
#endif
}

///银期平台消息流水号
// TThostFtdcSerialType int
static int PyCThostFtdcReqFutureSignOutField_set_PlateSerial(PyCThostFtdcReqFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqFutureSignOutField_get_LastFragment(PyCThostFtdcReqFutureSignOutField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

///最后分片标志
// TThostFtdcLastFragmentType char
static int PyCThostFtdcReqFutureSignOutField_set_LastFragment(PyCThostFtdcReqFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqFutureSignOutField_get_SessionID(PyCThostFtdcReqFutureSignOutField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话号
// TThostFtdcSessionIDType int
static int PyCThostFtdcReqFutureSignOutField_set_SessionID(PyCThostFtdcReqFutureSignOutField *self, PyObject* val, void *closure) {
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
        
///安装编号
// TThostFtdcInstallIDType int
static PyObject *PyCThostFtdcReqFutureSignOutField_get_InstallID(PyCThostFtdcReqFutureSignOutField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcReqFutureSignOutField_set_InstallID(PyCThostFtdcReqFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqFutureSignOutField_get_UserID(PyCThostFtdcReqFutureSignOutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户标识
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcReqFutureSignOutField_set_UserID(PyCThostFtdcReqFutureSignOutField *self, PyObject* val, void *closure) {
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
            
///摘要
// TThostFtdcDigestType char[36]
static PyObject *PyCThostFtdcReqFutureSignOutField_get_Digest(PyCThostFtdcReqFutureSignOutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Digest, (Py_ssize_t)sizeof(self->data.Digest));
    return PyBytes_FromString(self->data.Digest);
}

///摘要
// TThostFtdcDigestType char[36]
static int PyCThostFtdcReqFutureSignOutField_set_Digest(PyCThostFtdcReqFutureSignOutField *self, PyObject* val, void *closure) {
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
            
///币种代码
// TThostFtdcCurrencyIDType char[4]
static PyObject *PyCThostFtdcReqFutureSignOutField_get_CurrencyID(PyCThostFtdcReqFutureSignOutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcReqFutureSignOutField_set_CurrencyID(PyCThostFtdcReqFutureSignOutField *self, PyObject* val, void *closure) {
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
            
///渠道标志
// TThostFtdcDeviceIDType char[3]
static PyObject *PyCThostFtdcReqFutureSignOutField_get_DeviceID(PyCThostFtdcReqFutureSignOutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.DeviceID, (Py_ssize_t)sizeof(self->data.DeviceID));
    return PyBytes_FromString(self->data.DeviceID);
}

///渠道标志
// TThostFtdcDeviceIDType char[3]
static int PyCThostFtdcReqFutureSignOutField_set_DeviceID(PyCThostFtdcReqFutureSignOutField *self, PyObject* val, void *closure) {
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
            
///期货公司银行编码
// TThostFtdcBankCodingForFutureType char[33]
static PyObject *PyCThostFtdcReqFutureSignOutField_get_BrokerIDByBank(PyCThostFtdcReqFutureSignOutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerIDByBank, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
    return PyBytes_FromString(self->data.BrokerIDByBank);
}

///期货公司银行编码
// TThostFtdcBankCodingForFutureType char[33]
static int PyCThostFtdcReqFutureSignOutField_set_BrokerIDByBank(PyCThostFtdcReqFutureSignOutField *self, PyObject* val, void *closure) {
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
            
///交易柜员
// TThostFtdcOperNoType char[17]
static PyObject *PyCThostFtdcReqFutureSignOutField_get_OperNo(PyCThostFtdcReqFutureSignOutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OperNo, (Py_ssize_t)sizeof(self->data.OperNo));
    return PyBytes_FromString(self->data.OperNo);
}

///交易柜员
// TThostFtdcOperNoType char[17]
static int PyCThostFtdcReqFutureSignOutField_set_OperNo(PyCThostFtdcReqFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqFutureSignOutField_get_RequestID(PyCThostFtdcReqFutureSignOutField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcReqFutureSignOutField_set_RequestID(PyCThostFtdcReqFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqFutureSignOutField_get_TID(PyCThostFtdcReqFutureSignOutField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.TID);
#else
    return PyInt_FromLong(self->data.TID);
#endif
}

///交易ID
// TThostFtdcTIDType int
static int PyCThostFtdcReqFutureSignOutField_set_TID(PyCThostFtdcReqFutureSignOutField *self, PyObject* val, void *closure) {
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
        

static PyGetSetDef PyCThostFtdcReqFutureSignOutField_getset[] = {
    ///业务功能码 
    {(char *)"TradeCode", (getter)PyCThostFtdcReqFutureSignOutField_get_TradeCode, (setter)PyCThostFtdcReqFutureSignOutField_set_TradeCode, (char *)"TradeCode", NULL},
    ///银行代码 
    {(char *)"BankID", (getter)PyCThostFtdcReqFutureSignOutField_get_BankID, (setter)PyCThostFtdcReqFutureSignOutField_set_BankID, (char *)"BankID", NULL},
    ///银行分支机构代码 
    {(char *)"BankBranchID", (getter)PyCThostFtdcReqFutureSignOutField_get_BankBranchID, (setter)PyCThostFtdcReqFutureSignOutField_set_BankBranchID, (char *)"BankBranchID", NULL},
    ///期商代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcReqFutureSignOutField_get_BrokerID, (setter)PyCThostFtdcReqFutureSignOutField_set_BrokerID, (char *)"BrokerID", NULL},
    ///期商分支机构代码 
    {(char *)"BrokerBranchID", (getter)PyCThostFtdcReqFutureSignOutField_get_BrokerBranchID, (setter)PyCThostFtdcReqFutureSignOutField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
    ///交易日期 
    {(char *)"TradeDate", (getter)PyCThostFtdcReqFutureSignOutField_get_TradeDate, (setter)PyCThostFtdcReqFutureSignOutField_set_TradeDate, (char *)"TradeDate", NULL},
    ///交易时间 
    {(char *)"TradeTime", (getter)PyCThostFtdcReqFutureSignOutField_get_TradeTime, (setter)PyCThostFtdcReqFutureSignOutField_set_TradeTime, (char *)"TradeTime", NULL},
    ///银行流水号 
    {(char *)"BankSerial", (getter)PyCThostFtdcReqFutureSignOutField_get_BankSerial, (setter)PyCThostFtdcReqFutureSignOutField_set_BankSerial, (char *)"BankSerial", NULL},
    ///交易系统日期 
    {(char *)"TradingDay", (getter)PyCThostFtdcReqFutureSignOutField_get_TradingDay, (setter)PyCThostFtdcReqFutureSignOutField_set_TradingDay, (char *)"TradingDay", NULL},
    ///银期平台消息流水号 
    {(char *)"PlateSerial", (getter)PyCThostFtdcReqFutureSignOutField_get_PlateSerial, (setter)PyCThostFtdcReqFutureSignOutField_set_PlateSerial, (char *)"PlateSerial", NULL},
    ///最后分片标志 
    {(char *)"LastFragment", (getter)PyCThostFtdcReqFutureSignOutField_get_LastFragment, (setter)PyCThostFtdcReqFutureSignOutField_set_LastFragment, (char *)"LastFragment", NULL},
    ///会话号 
    {(char *)"SessionID", (getter)PyCThostFtdcReqFutureSignOutField_get_SessionID, (setter)PyCThostFtdcReqFutureSignOutField_set_SessionID, (char *)"SessionID", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcReqFutureSignOutField_get_InstallID, (setter)PyCThostFtdcReqFutureSignOutField_set_InstallID, (char *)"InstallID", NULL},
    ///用户标识 
    {(char *)"UserID", (getter)PyCThostFtdcReqFutureSignOutField_get_UserID, (setter)PyCThostFtdcReqFutureSignOutField_set_UserID, (char *)"UserID", NULL},
    ///摘要 
    {(char *)"Digest", (getter)PyCThostFtdcReqFutureSignOutField_get_Digest, (setter)PyCThostFtdcReqFutureSignOutField_set_Digest, (char *)"Digest", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcReqFutureSignOutField_get_CurrencyID, (setter)PyCThostFtdcReqFutureSignOutField_set_CurrencyID, (char *)"CurrencyID", NULL},
    ///渠道标志 
    {(char *)"DeviceID", (getter)PyCThostFtdcReqFutureSignOutField_get_DeviceID, (setter)PyCThostFtdcReqFutureSignOutField_set_DeviceID, (char *)"DeviceID", NULL},
    ///期货公司银行编码 
    {(char *)"BrokerIDByBank", (getter)PyCThostFtdcReqFutureSignOutField_get_BrokerIDByBank, (setter)PyCThostFtdcReqFutureSignOutField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
    ///交易柜员 
    {(char *)"OperNo", (getter)PyCThostFtdcReqFutureSignOutField_get_OperNo, (setter)PyCThostFtdcReqFutureSignOutField_set_OperNo, (char *)"OperNo", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcReqFutureSignOutField_get_RequestID, (setter)PyCThostFtdcReqFutureSignOutField_set_RequestID, (char *)"RequestID", NULL},
    ///交易ID 
    {(char *)"TID", (getter)PyCThostFtdcReqFutureSignOutField_get_TID, (setter)PyCThostFtdcReqFutureSignOutField_set_TID, (char *)"TID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcReqFutureSignOutFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcReqFutureSignOutField",	/* tp_name */
	sizeof(PyCThostFtdcReqFutureSignOutField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcReqFutureSignOutField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcReqFutureSignOutField_repr,   /* tp_repr */
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
	"CThostFtdcReqFutureSignOutField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcReqFutureSignOutField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcReqFutureSignOutField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcReqFutureSignOutField_new,       /* tp_new */
};

int PyCThostFtdcReqFutureSignOutFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcReqFutureSignOutField  */
	if (PyType_Ready(&PyCThostFtdcReqFutureSignOutFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcReqFutureSignOutField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcReqFutureSignOutFieldType);
    if( PyModule_AddObject(module, "CThostFtdcReqFutureSignOutField", (PyObject *)&PyCThostFtdcReqFutureSignOutFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqFutureSignOutField to module");
        Py_DECREF(&PyCThostFtdcReqFutureSignOutFieldType);
		return -1;
    }

    return 0;
}
