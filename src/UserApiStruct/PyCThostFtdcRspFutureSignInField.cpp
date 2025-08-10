
#include "PyCThostFtdcRspFutureSignInField.h"

///期商签到响应

static PyObject *PyCThostFtdcRspFutureSignInField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRspFutureSignInField *self = (PyCThostFtdcRspFutureSignInField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcRspFutureSignInField_init(PyCThostFtdcRspFutureSignInField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "InstallID", "UserID", "Digest", "CurrencyID", "DeviceID", "BrokerIDByBank", "OperNo", "RequestID", "TID", "ErrorID", "ErrorMsg", "PinKey", "MacKey",  NULL};


    ///业务功能码
    // TThostFtdcTradeCodeType char[7]
    const char *RspFutureSignInField_TradeCode = NULL;
    Py_ssize_t RspFutureSignInField_TradeCode_len = 0;
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    const char *RspFutureSignInField_BankID = NULL;
    Py_ssize_t RspFutureSignInField_BankID_len = 0;
            
    ///银行分支机构代码
    // TThostFtdcBankBrchIDType char[5]
    const char *RspFutureSignInField_BankBranchID = NULL;
    Py_ssize_t RspFutureSignInField_BankBranchID_len = 0;
            
    ///期商代码
    // TThostFtdcBrokerIDType char[11]
    const char *RspFutureSignInField_BrokerID = NULL;
    Py_ssize_t RspFutureSignInField_BrokerID_len = 0;
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    const char *RspFutureSignInField_BrokerBranchID = NULL;
    Py_ssize_t RspFutureSignInField_BrokerBranchID_len = 0;
            
    ///交易日期
    // TThostFtdcTradeDateType char[9]
    const char *RspFutureSignInField_TradeDate = NULL;
    Py_ssize_t RspFutureSignInField_TradeDate_len = 0;
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    const char *RspFutureSignInField_TradeTime = NULL;
    Py_ssize_t RspFutureSignInField_TradeTime_len = 0;
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    const char *RspFutureSignInField_BankSerial = NULL;
    Py_ssize_t RspFutureSignInField_BankSerial_len = 0;
            
    ///交易系统日期
    // TThostFtdcTradeDateType char[9]
    const char *RspFutureSignInField_TradingDay = NULL;
    Py_ssize_t RspFutureSignInField_TradingDay_len = 0;
            
    ///银期平台消息流水号
    // TThostFtdcSerialType int
    int RspFutureSignInField_PlateSerial = 0;
        
    ///最后分片标志
    // TThostFtdcLastFragmentType char
    char RspFutureSignInField_LastFragment = 0;
            
    ///会话号
    // TThostFtdcSessionIDType int
    int RspFutureSignInField_SessionID = 0;
        
    ///安装编号
    // TThostFtdcInstallIDType int
    int RspFutureSignInField_InstallID = 0;
        
    ///用户标识
    // TThostFtdcUserIDType char[16]
    const char *RspFutureSignInField_UserID = NULL;
    Py_ssize_t RspFutureSignInField_UserID_len = 0;
            
    ///摘要
    // TThostFtdcDigestType char[36]
    const char *RspFutureSignInField_Digest = NULL;
    Py_ssize_t RspFutureSignInField_Digest_len = 0;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *RspFutureSignInField_CurrencyID = NULL;
    Py_ssize_t RspFutureSignInField_CurrencyID_len = 0;
            
    ///渠道标志
    // TThostFtdcDeviceIDType char[3]
    const char *RspFutureSignInField_DeviceID = NULL;
    Py_ssize_t RspFutureSignInField_DeviceID_len = 0;
            
    ///期货公司银行编码
    // TThostFtdcBankCodingForFutureType char[33]
    const char *RspFutureSignInField_BrokerIDByBank = NULL;
    Py_ssize_t RspFutureSignInField_BrokerIDByBank_len = 0;
            
    ///交易柜员
    // TThostFtdcOperNoType char[17]
    const char *RspFutureSignInField_OperNo = NULL;
    Py_ssize_t RspFutureSignInField_OperNo_len = 0;
            
    ///请求编号
    // TThostFtdcRequestIDType int
    int RspFutureSignInField_RequestID = 0;
        
    ///交易ID
    // TThostFtdcTIDType int
    int RspFutureSignInField_TID = 0;
        
    ///错误代码
    // TThostFtdcErrorIDType int
    int RspFutureSignInField_ErrorID = 0;
        
    ///错误信息
    // TThostFtdcErrorMsgType char[81]
    const char *RspFutureSignInField_ErrorMsg = NULL;
    Py_ssize_t RspFutureSignInField_ErrorMsg_len = 0;
            
    ///PIN密钥
    // TThostFtdcPasswordKeyType char[129]
    const char *RspFutureSignInField_PinKey = NULL;
    Py_ssize_t RspFutureSignInField_PinKey_len = 0;
            
    ///MAC密钥
    // TThostFtdcPasswordKeyType char[129]
    const char *RspFutureSignInField_MacKey = NULL;
    Py_ssize_t RspFutureSignInField_MacKey_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciiy#y#y#y#y#y#iiiy#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#iciis#s#s#s#s#s#iiis#s#s#", (char **)kwlist
#endif

        , &RspFutureSignInField_TradeCode, &RspFutureSignInField_TradeCode_len 
        , &RspFutureSignInField_BankID, &RspFutureSignInField_BankID_len 
        , &RspFutureSignInField_BankBranchID, &RspFutureSignInField_BankBranchID_len 
        , &RspFutureSignInField_BrokerID, &RspFutureSignInField_BrokerID_len 
        , &RspFutureSignInField_BrokerBranchID, &RspFutureSignInField_BrokerBranchID_len 
        , &RspFutureSignInField_TradeDate, &RspFutureSignInField_TradeDate_len 
        , &RspFutureSignInField_TradeTime, &RspFutureSignInField_TradeTime_len 
        , &RspFutureSignInField_BankSerial, &RspFutureSignInField_BankSerial_len 
        , &RspFutureSignInField_TradingDay, &RspFutureSignInField_TradingDay_len 
        , &RspFutureSignInField_PlateSerial 
        , &RspFutureSignInField_LastFragment 
        , &RspFutureSignInField_SessionID 
        , &RspFutureSignInField_InstallID 
        , &RspFutureSignInField_UserID, &RspFutureSignInField_UserID_len 
        , &RspFutureSignInField_Digest, &RspFutureSignInField_Digest_len 
        , &RspFutureSignInField_CurrencyID, &RspFutureSignInField_CurrencyID_len 
        , &RspFutureSignInField_DeviceID, &RspFutureSignInField_DeviceID_len 
        , &RspFutureSignInField_BrokerIDByBank, &RspFutureSignInField_BrokerIDByBank_len 
        , &RspFutureSignInField_OperNo, &RspFutureSignInField_OperNo_len 
        , &RspFutureSignInField_RequestID 
        , &RspFutureSignInField_TID 
        , &RspFutureSignInField_ErrorID 
        , &RspFutureSignInField_ErrorMsg, &RspFutureSignInField_ErrorMsg_len 
        , &RspFutureSignInField_PinKey, &RspFutureSignInField_PinKey_len 
        , &RspFutureSignInField_MacKey, &RspFutureSignInField_MacKey_len 


    )) {
        return -1;
    }


    ///业务功能码
    // TThostFtdcTradeCodeType char[7]
    if( RspFutureSignInField_TradeCode != NULL ) {
        if(RspFutureSignInField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", RspFutureSignInField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
            return -1;
        }
        // memset(self->data.TradeCode, 0, sizeof(self->data.TradeCode));
        // memcpy(self->data.TradeCode, RspFutureSignInField_TradeCode, RspFutureSignInField_TradeCode_len);        
        strncpy(self->data.TradeCode, RspFutureSignInField_TradeCode, sizeof(self->data.TradeCode) );
        RspFutureSignInField_TradeCode = NULL;
    }
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    if( RspFutureSignInField_BankID != NULL ) {
        if(RspFutureSignInField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", RspFutureSignInField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
            return -1;
        }
        // memset(self->data.BankID, 0, sizeof(self->data.BankID));
        // memcpy(self->data.BankID, RspFutureSignInField_BankID, RspFutureSignInField_BankID_len);        
        strncpy(self->data.BankID, RspFutureSignInField_BankID, sizeof(self->data.BankID) );
        RspFutureSignInField_BankID = NULL;
    }
            
    ///银行分支机构代码
    // TThostFtdcBankBrchIDType char[5]
    if( RspFutureSignInField_BankBranchID != NULL ) {
        if(RspFutureSignInField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", RspFutureSignInField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
            return -1;
        }
        // memset(self->data.BankBranchID, 0, sizeof(self->data.BankBranchID));
        // memcpy(self->data.BankBranchID, RspFutureSignInField_BankBranchID, RspFutureSignInField_BankBranchID_len);        
        strncpy(self->data.BankBranchID, RspFutureSignInField_BankBranchID, sizeof(self->data.BankBranchID) );
        RspFutureSignInField_BankBranchID = NULL;
    }
            
    ///期商代码
    // TThostFtdcBrokerIDType char[11]
    if( RspFutureSignInField_BrokerID != NULL ) {
        if(RspFutureSignInField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", RspFutureSignInField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, RspFutureSignInField_BrokerID, RspFutureSignInField_BrokerID_len);        
        strncpy(self->data.BrokerID, RspFutureSignInField_BrokerID, sizeof(self->data.BrokerID) );
        RspFutureSignInField_BrokerID = NULL;
    }
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    if( RspFutureSignInField_BrokerBranchID != NULL ) {
        if(RspFutureSignInField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", RspFutureSignInField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
            return -1;
        }
        // memset(self->data.BrokerBranchID, 0, sizeof(self->data.BrokerBranchID));
        // memcpy(self->data.BrokerBranchID, RspFutureSignInField_BrokerBranchID, RspFutureSignInField_BrokerBranchID_len);        
        strncpy(self->data.BrokerBranchID, RspFutureSignInField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
        RspFutureSignInField_BrokerBranchID = NULL;
    }
            
    ///交易日期
    // TThostFtdcTradeDateType char[9]
    if( RspFutureSignInField_TradeDate != NULL ) {
        if(RspFutureSignInField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", RspFutureSignInField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
            return -1;
        }
        // memset(self->data.TradeDate, 0, sizeof(self->data.TradeDate));
        // memcpy(self->data.TradeDate, RspFutureSignInField_TradeDate, RspFutureSignInField_TradeDate_len);        
        strncpy(self->data.TradeDate, RspFutureSignInField_TradeDate, sizeof(self->data.TradeDate) );
        RspFutureSignInField_TradeDate = NULL;
    }
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    if( RspFutureSignInField_TradeTime != NULL ) {
        if(RspFutureSignInField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", RspFutureSignInField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
            return -1;
        }
        // memset(self->data.TradeTime, 0, sizeof(self->data.TradeTime));
        // memcpy(self->data.TradeTime, RspFutureSignInField_TradeTime, RspFutureSignInField_TradeTime_len);        
        strncpy(self->data.TradeTime, RspFutureSignInField_TradeTime, sizeof(self->data.TradeTime) );
        RspFutureSignInField_TradeTime = NULL;
    }
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    if( RspFutureSignInField_BankSerial != NULL ) {
        if(RspFutureSignInField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", RspFutureSignInField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
            return -1;
        }
        // memset(self->data.BankSerial, 0, sizeof(self->data.BankSerial));
        // memcpy(self->data.BankSerial, RspFutureSignInField_BankSerial, RspFutureSignInField_BankSerial_len);        
        strncpy(self->data.BankSerial, RspFutureSignInField_BankSerial, sizeof(self->data.BankSerial) );
        RspFutureSignInField_BankSerial = NULL;
    }
            
    ///交易系统日期
    // TThostFtdcTradeDateType char[9]
    if( RspFutureSignInField_TradingDay != NULL ) {
        if(RspFutureSignInField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", RspFutureSignInField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, RspFutureSignInField_TradingDay, RspFutureSignInField_TradingDay_len);        
        strncpy(self->data.TradingDay, RspFutureSignInField_TradingDay, sizeof(self->data.TradingDay) );
        RspFutureSignInField_TradingDay = NULL;
    }
            
    ///银期平台消息流水号
    // TThostFtdcSerialType int
    self->data.PlateSerial = RspFutureSignInField_PlateSerial;
        
    ///最后分片标志
    // TThostFtdcLastFragmentType char
    self->data.LastFragment = RspFutureSignInField_LastFragment;
            
    ///会话号
    // TThostFtdcSessionIDType int
    self->data.SessionID = RspFutureSignInField_SessionID;
        
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = RspFutureSignInField_InstallID;
        
    ///用户标识
    // TThostFtdcUserIDType char[16]
    if( RspFutureSignInField_UserID != NULL ) {
        if(RspFutureSignInField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", RspFutureSignInField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, RspFutureSignInField_UserID, RspFutureSignInField_UserID_len);        
        strncpy(self->data.UserID, RspFutureSignInField_UserID, sizeof(self->data.UserID) );
        RspFutureSignInField_UserID = NULL;
    }
            
    ///摘要
    // TThostFtdcDigestType char[36]
    if( RspFutureSignInField_Digest != NULL ) {
        if(RspFutureSignInField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
            PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", RspFutureSignInField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
            return -1;
        }
        // memset(self->data.Digest, 0, sizeof(self->data.Digest));
        // memcpy(self->data.Digest, RspFutureSignInField_Digest, RspFutureSignInField_Digest_len);        
        strncpy(self->data.Digest, RspFutureSignInField_Digest, sizeof(self->data.Digest) );
        RspFutureSignInField_Digest = NULL;
    }
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( RspFutureSignInField_CurrencyID != NULL ) {
        if(RspFutureSignInField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", RspFutureSignInField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, RspFutureSignInField_CurrencyID, RspFutureSignInField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, RspFutureSignInField_CurrencyID, sizeof(self->data.CurrencyID) );
        RspFutureSignInField_CurrencyID = NULL;
    }
            
    ///渠道标志
    // TThostFtdcDeviceIDType char[3]
    if( RspFutureSignInField_DeviceID != NULL ) {
        if(RspFutureSignInField_DeviceID_len > (Py_ssize_t)sizeof(self->data.DeviceID)) {
            PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is %zd)", RspFutureSignInField_DeviceID_len, (Py_ssize_t)sizeof(self->data.DeviceID));
            return -1;
        }
        // memset(self->data.DeviceID, 0, sizeof(self->data.DeviceID));
        // memcpy(self->data.DeviceID, RspFutureSignInField_DeviceID, RspFutureSignInField_DeviceID_len);        
        strncpy(self->data.DeviceID, RspFutureSignInField_DeviceID, sizeof(self->data.DeviceID) );
        RspFutureSignInField_DeviceID = NULL;
    }
            
    ///期货公司银行编码
    // TThostFtdcBankCodingForFutureType char[33]
    if( RspFutureSignInField_BrokerIDByBank != NULL ) {
        if(RspFutureSignInField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
            PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", RspFutureSignInField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
            return -1;
        }
        // memset(self->data.BrokerIDByBank, 0, sizeof(self->data.BrokerIDByBank));
        // memcpy(self->data.BrokerIDByBank, RspFutureSignInField_BrokerIDByBank, RspFutureSignInField_BrokerIDByBank_len);        
        strncpy(self->data.BrokerIDByBank, RspFutureSignInField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
        RspFutureSignInField_BrokerIDByBank = NULL;
    }
            
    ///交易柜员
    // TThostFtdcOperNoType char[17]
    if( RspFutureSignInField_OperNo != NULL ) {
        if(RspFutureSignInField_OperNo_len > (Py_ssize_t)sizeof(self->data.OperNo)) {
            PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is %zd)", RspFutureSignInField_OperNo_len, (Py_ssize_t)sizeof(self->data.OperNo));
            return -1;
        }
        // memset(self->data.OperNo, 0, sizeof(self->data.OperNo));
        // memcpy(self->data.OperNo, RspFutureSignInField_OperNo, RspFutureSignInField_OperNo_len);        
        strncpy(self->data.OperNo, RspFutureSignInField_OperNo, sizeof(self->data.OperNo) );
        RspFutureSignInField_OperNo = NULL;
    }
            
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = RspFutureSignInField_RequestID;
        
    ///交易ID
    // TThostFtdcTIDType int
    self->data.TID = RspFutureSignInField_TID;
        
    ///错误代码
    // TThostFtdcErrorIDType int
    self->data.ErrorID = RspFutureSignInField_ErrorID;
        
    ///错误信息
    // TThostFtdcErrorMsgType char[81]
    if( RspFutureSignInField_ErrorMsg != NULL ) {
        if(RspFutureSignInField_ErrorMsg_len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
            PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is %zd)", RspFutureSignInField_ErrorMsg_len, (Py_ssize_t)sizeof(self->data.ErrorMsg));
            return -1;
        }
        // memset(self->data.ErrorMsg, 0, sizeof(self->data.ErrorMsg));
        // memcpy(self->data.ErrorMsg, RspFutureSignInField_ErrorMsg, RspFutureSignInField_ErrorMsg_len);        
        strncpy(self->data.ErrorMsg, RspFutureSignInField_ErrorMsg, sizeof(self->data.ErrorMsg) );
        RspFutureSignInField_ErrorMsg = NULL;
    }
            
    ///PIN密钥
    // TThostFtdcPasswordKeyType char[129]
    if( RspFutureSignInField_PinKey != NULL ) {
        if(RspFutureSignInField_PinKey_len > (Py_ssize_t)sizeof(self->data.PinKey)) {
            PyErr_Format(PyExc_ValueError, "PinKey too long: length=%zd (max allowed is %zd)", RspFutureSignInField_PinKey_len, (Py_ssize_t)sizeof(self->data.PinKey));
            return -1;
        }
        // memset(self->data.PinKey, 0, sizeof(self->data.PinKey));
        // memcpy(self->data.PinKey, RspFutureSignInField_PinKey, RspFutureSignInField_PinKey_len);        
        strncpy(self->data.PinKey, RspFutureSignInField_PinKey, sizeof(self->data.PinKey) );
        RspFutureSignInField_PinKey = NULL;
    }
            
    ///MAC密钥
    // TThostFtdcPasswordKeyType char[129]
    if( RspFutureSignInField_MacKey != NULL ) {
        if(RspFutureSignInField_MacKey_len > (Py_ssize_t)sizeof(self->data.MacKey)) {
            PyErr_Format(PyExc_ValueError, "MacKey too long: length=%zd (max allowed is %zd)", RspFutureSignInField_MacKey_len, (Py_ssize_t)sizeof(self->data.MacKey));
            return -1;
        }
        // memset(self->data.MacKey, 0, sizeof(self->data.MacKey));
        // memcpy(self->data.MacKey, RspFutureSignInField_MacKey, RspFutureSignInField_MacKey_len);        
        strncpy(self->data.MacKey, RspFutureSignInField_MacKey, sizeof(self->data.MacKey) );
        RspFutureSignInField_MacKey = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcRspFutureSignInField_dealloc(PyCThostFtdcRspFutureSignInField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRspFutureSignInField_repr(PyCThostFtdcRspFutureSignInField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:i,s:i,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:i,s:i,s:s,s:s,s:s}"
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
        ,"ErrorID", self->data.ErrorID 
        ,"ErrorMsg", self->data.ErrorMsg//, (Py_ssize_t)sizeof(self->data.ErrorMsg) 
        ,"PinKey", self->data.PinKey//, (Py_ssize_t)sizeof(self->data.PinKey) 
        ,"MacKey", self->data.MacKey//, (Py_ssize_t)sizeof(self->data.MacKey) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspFutureSignInField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///业务功能码
// TThostFtdcTradeCodeType char[7]
static PyObject *PyCThostFtdcRspFutureSignInField_get_TradeCode(PyCThostFtdcRspFutureSignInField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeCode, (Py_ssize_t)sizeof(self->data.TradeCode));
    return PyBytes_FromString(self->data.TradeCode);
}

///业务功能码
// TThostFtdcTradeCodeType char[7]
static int PyCThostFtdcRspFutureSignInField_set_TradeCode(PyCThostFtdcRspFutureSignInField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspFutureSignInField_get_BankID(PyCThostFtdcRspFutureSignInField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankID, (Py_ssize_t)sizeof(self->data.BankID));
    return PyBytes_FromString(self->data.BankID);
}

///银行代码
// TThostFtdcBankIDType char[4]
static int PyCThostFtdcRspFutureSignInField_set_BankID(PyCThostFtdcRspFutureSignInField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspFutureSignInField_get_BankBranchID(PyCThostFtdcRspFutureSignInField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankBranchID, (Py_ssize_t)sizeof(self->data.BankBranchID));
    return PyBytes_FromString(self->data.BankBranchID);
}

///银行分支机构代码
// TThostFtdcBankBrchIDType char[5]
static int PyCThostFtdcRspFutureSignInField_set_BankBranchID(PyCThostFtdcRspFutureSignInField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspFutureSignInField_get_BrokerID(PyCThostFtdcRspFutureSignInField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///期商代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcRspFutureSignInField_set_BrokerID(PyCThostFtdcRspFutureSignInField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspFutureSignInField_get_BrokerBranchID(PyCThostFtdcRspFutureSignInField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerBranchID, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
    return PyBytes_FromString(self->data.BrokerBranchID);
}

///期商分支机构代码
// TThostFtdcFutureBranchIDType char[31]
static int PyCThostFtdcRspFutureSignInField_set_BrokerBranchID(PyCThostFtdcRspFutureSignInField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspFutureSignInField_get_TradeDate(PyCThostFtdcRspFutureSignInField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeDate, (Py_ssize_t)sizeof(self->data.TradeDate));
    return PyBytes_FromString(self->data.TradeDate);
}

///交易日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcRspFutureSignInField_set_TradeDate(PyCThostFtdcRspFutureSignInField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspFutureSignInField_get_TradeTime(PyCThostFtdcRspFutureSignInField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeTime, (Py_ssize_t)sizeof(self->data.TradeTime));
    return PyBytes_FromString(self->data.TradeTime);
}

///交易时间
// TThostFtdcTradeTimeType char[9]
static int PyCThostFtdcRspFutureSignInField_set_TradeTime(PyCThostFtdcRspFutureSignInField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspFutureSignInField_get_BankSerial(PyCThostFtdcRspFutureSignInField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankSerial, (Py_ssize_t)sizeof(self->data.BankSerial));
    return PyBytes_FromString(self->data.BankSerial);
}

///银行流水号
// TThostFtdcBankSerialType char[13]
static int PyCThostFtdcRspFutureSignInField_set_BankSerial(PyCThostFtdcRspFutureSignInField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspFutureSignInField_get_TradingDay(PyCThostFtdcRspFutureSignInField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易系统日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcRspFutureSignInField_set_TradingDay(PyCThostFtdcRspFutureSignInField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspFutureSignInField_get_PlateSerial(PyCThostFtdcRspFutureSignInField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.PlateSerial);
#else
    return PyInt_FromLong(self->data.PlateSerial);
#endif
}

///银期平台消息流水号
// TThostFtdcSerialType int
static int PyCThostFtdcRspFutureSignInField_set_PlateSerial(PyCThostFtdcRspFutureSignInField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspFutureSignInField_get_LastFragment(PyCThostFtdcRspFutureSignInField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

///最后分片标志
// TThostFtdcLastFragmentType char
static int PyCThostFtdcRspFutureSignInField_set_LastFragment(PyCThostFtdcRspFutureSignInField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspFutureSignInField_get_SessionID(PyCThostFtdcRspFutureSignInField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话号
// TThostFtdcSessionIDType int
static int PyCThostFtdcRspFutureSignInField_set_SessionID(PyCThostFtdcRspFutureSignInField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspFutureSignInField_get_InstallID(PyCThostFtdcRspFutureSignInField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcRspFutureSignInField_set_InstallID(PyCThostFtdcRspFutureSignInField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspFutureSignInField_get_UserID(PyCThostFtdcRspFutureSignInField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户标识
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcRspFutureSignInField_set_UserID(PyCThostFtdcRspFutureSignInField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspFutureSignInField_get_Digest(PyCThostFtdcRspFutureSignInField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Digest, (Py_ssize_t)sizeof(self->data.Digest));
    return PyBytes_FromString(self->data.Digest);
}

///摘要
// TThostFtdcDigestType char[36]
static int PyCThostFtdcRspFutureSignInField_set_Digest(PyCThostFtdcRspFutureSignInField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspFutureSignInField_get_CurrencyID(PyCThostFtdcRspFutureSignInField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcRspFutureSignInField_set_CurrencyID(PyCThostFtdcRspFutureSignInField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspFutureSignInField_get_DeviceID(PyCThostFtdcRspFutureSignInField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.DeviceID, (Py_ssize_t)sizeof(self->data.DeviceID));
    return PyBytes_FromString(self->data.DeviceID);
}

///渠道标志
// TThostFtdcDeviceIDType char[3]
static int PyCThostFtdcRspFutureSignInField_set_DeviceID(PyCThostFtdcRspFutureSignInField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspFutureSignInField_get_BrokerIDByBank(PyCThostFtdcRspFutureSignInField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerIDByBank, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
    return PyBytes_FromString(self->data.BrokerIDByBank);
}

///期货公司银行编码
// TThostFtdcBankCodingForFutureType char[33]
static int PyCThostFtdcRspFutureSignInField_set_BrokerIDByBank(PyCThostFtdcRspFutureSignInField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspFutureSignInField_get_OperNo(PyCThostFtdcRspFutureSignInField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OperNo, (Py_ssize_t)sizeof(self->data.OperNo));
    return PyBytes_FromString(self->data.OperNo);
}

///交易柜员
// TThostFtdcOperNoType char[17]
static int PyCThostFtdcRspFutureSignInField_set_OperNo(PyCThostFtdcRspFutureSignInField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspFutureSignInField_get_RequestID(PyCThostFtdcRspFutureSignInField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcRspFutureSignInField_set_RequestID(PyCThostFtdcRspFutureSignInField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspFutureSignInField_get_TID(PyCThostFtdcRspFutureSignInField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.TID);
#else
    return PyInt_FromLong(self->data.TID);
#endif
}

///交易ID
// TThostFtdcTIDType int
static int PyCThostFtdcRspFutureSignInField_set_TID(PyCThostFtdcRspFutureSignInField *self, PyObject* val, void *closure) {
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
        
///错误代码
// TThostFtdcErrorIDType int
static PyObject *PyCThostFtdcRspFutureSignInField_get_ErrorID(PyCThostFtdcRspFutureSignInField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.ErrorID);
#else
    return PyInt_FromLong(self->data.ErrorID);
#endif
}

///错误代码
// TThostFtdcErrorIDType int
static int PyCThostFtdcRspFutureSignInField_set_ErrorID(PyCThostFtdcRspFutureSignInField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspFutureSignInField_get_ErrorMsg(PyCThostFtdcRspFutureSignInField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ErrorMsg, (Py_ssize_t)sizeof(self->data.ErrorMsg));
    return PyBytes_FromString(self->data.ErrorMsg);
}

///错误信息
// TThostFtdcErrorMsgType char[81]
static int PyCThostFtdcRspFutureSignInField_set_ErrorMsg(PyCThostFtdcRspFutureSignInField *self, PyObject* val, void *closure) {
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
            
///PIN密钥
// TThostFtdcPasswordKeyType char[129]
static PyObject *PyCThostFtdcRspFutureSignInField_get_PinKey(PyCThostFtdcRspFutureSignInField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.PinKey, (Py_ssize_t)sizeof(self->data.PinKey));
    return PyBytes_FromString(self->data.PinKey);
}

///PIN密钥
// TThostFtdcPasswordKeyType char[129]
static int PyCThostFtdcRspFutureSignInField_set_PinKey(PyCThostFtdcRspFutureSignInField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PinKey Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.PinKey)) {
        PyErr_SetString(PyExc_ValueError, "PinKey must be less than 129 bytes");
        return -1;
    }
    // memset(self->data.PinKey, 0, sizeof(self->data.PinKey));
    // memcpy(self->data.PinKey, buf, len);
    strncpy(self->data.PinKey, buf, sizeof(self->data.PinKey));
    return 0;
}
            
///MAC密钥
// TThostFtdcPasswordKeyType char[129]
static PyObject *PyCThostFtdcRspFutureSignInField_get_MacKey(PyCThostFtdcRspFutureSignInField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacKey, (Py_ssize_t)sizeof(self->data.MacKey));
    return PyBytes_FromString(self->data.MacKey);
}

///MAC密钥
// TThostFtdcPasswordKeyType char[129]
static int PyCThostFtdcRspFutureSignInField_set_MacKey(PyCThostFtdcRspFutureSignInField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MacKey Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.MacKey)) {
        PyErr_SetString(PyExc_ValueError, "MacKey must be less than 129 bytes");
        return -1;
    }
    // memset(self->data.MacKey, 0, sizeof(self->data.MacKey));
    // memcpy(self->data.MacKey, buf, len);
    strncpy(self->data.MacKey, buf, sizeof(self->data.MacKey));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcRspFutureSignInField_getset[] = {
    ///业务功能码 
    {(char *)"TradeCode", (getter)PyCThostFtdcRspFutureSignInField_get_TradeCode, (setter)PyCThostFtdcRspFutureSignInField_set_TradeCode, (char *)"TradeCode", NULL},
    ///银行代码 
    {(char *)"BankID", (getter)PyCThostFtdcRspFutureSignInField_get_BankID, (setter)PyCThostFtdcRspFutureSignInField_set_BankID, (char *)"BankID", NULL},
    ///银行分支机构代码 
    {(char *)"BankBranchID", (getter)PyCThostFtdcRspFutureSignInField_get_BankBranchID, (setter)PyCThostFtdcRspFutureSignInField_set_BankBranchID, (char *)"BankBranchID", NULL},
    ///期商代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcRspFutureSignInField_get_BrokerID, (setter)PyCThostFtdcRspFutureSignInField_set_BrokerID, (char *)"BrokerID", NULL},
    ///期商分支机构代码 
    {(char *)"BrokerBranchID", (getter)PyCThostFtdcRspFutureSignInField_get_BrokerBranchID, (setter)PyCThostFtdcRspFutureSignInField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
    ///交易日期 
    {(char *)"TradeDate", (getter)PyCThostFtdcRspFutureSignInField_get_TradeDate, (setter)PyCThostFtdcRspFutureSignInField_set_TradeDate, (char *)"TradeDate", NULL},
    ///交易时间 
    {(char *)"TradeTime", (getter)PyCThostFtdcRspFutureSignInField_get_TradeTime, (setter)PyCThostFtdcRspFutureSignInField_set_TradeTime, (char *)"TradeTime", NULL},
    ///银行流水号 
    {(char *)"BankSerial", (getter)PyCThostFtdcRspFutureSignInField_get_BankSerial, (setter)PyCThostFtdcRspFutureSignInField_set_BankSerial, (char *)"BankSerial", NULL},
    ///交易系统日期 
    {(char *)"TradingDay", (getter)PyCThostFtdcRspFutureSignInField_get_TradingDay, (setter)PyCThostFtdcRspFutureSignInField_set_TradingDay, (char *)"TradingDay", NULL},
    ///银期平台消息流水号 
    {(char *)"PlateSerial", (getter)PyCThostFtdcRspFutureSignInField_get_PlateSerial, (setter)PyCThostFtdcRspFutureSignInField_set_PlateSerial, (char *)"PlateSerial", NULL},
    ///最后分片标志 
    {(char *)"LastFragment", (getter)PyCThostFtdcRspFutureSignInField_get_LastFragment, (setter)PyCThostFtdcRspFutureSignInField_set_LastFragment, (char *)"LastFragment", NULL},
    ///会话号 
    {(char *)"SessionID", (getter)PyCThostFtdcRspFutureSignInField_get_SessionID, (setter)PyCThostFtdcRspFutureSignInField_set_SessionID, (char *)"SessionID", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcRspFutureSignInField_get_InstallID, (setter)PyCThostFtdcRspFutureSignInField_set_InstallID, (char *)"InstallID", NULL},
    ///用户标识 
    {(char *)"UserID", (getter)PyCThostFtdcRspFutureSignInField_get_UserID, (setter)PyCThostFtdcRspFutureSignInField_set_UserID, (char *)"UserID", NULL},
    ///摘要 
    {(char *)"Digest", (getter)PyCThostFtdcRspFutureSignInField_get_Digest, (setter)PyCThostFtdcRspFutureSignInField_set_Digest, (char *)"Digest", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcRspFutureSignInField_get_CurrencyID, (setter)PyCThostFtdcRspFutureSignInField_set_CurrencyID, (char *)"CurrencyID", NULL},
    ///渠道标志 
    {(char *)"DeviceID", (getter)PyCThostFtdcRspFutureSignInField_get_DeviceID, (setter)PyCThostFtdcRspFutureSignInField_set_DeviceID, (char *)"DeviceID", NULL},
    ///期货公司银行编码 
    {(char *)"BrokerIDByBank", (getter)PyCThostFtdcRspFutureSignInField_get_BrokerIDByBank, (setter)PyCThostFtdcRspFutureSignInField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
    ///交易柜员 
    {(char *)"OperNo", (getter)PyCThostFtdcRspFutureSignInField_get_OperNo, (setter)PyCThostFtdcRspFutureSignInField_set_OperNo, (char *)"OperNo", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcRspFutureSignInField_get_RequestID, (setter)PyCThostFtdcRspFutureSignInField_set_RequestID, (char *)"RequestID", NULL},
    ///交易ID 
    {(char *)"TID", (getter)PyCThostFtdcRspFutureSignInField_get_TID, (setter)PyCThostFtdcRspFutureSignInField_set_TID, (char *)"TID", NULL},
    ///错误代码 
    {(char *)"ErrorID", (getter)PyCThostFtdcRspFutureSignInField_get_ErrorID, (setter)PyCThostFtdcRspFutureSignInField_set_ErrorID, (char *)"ErrorID", NULL},
    ///错误信息 
    {(char *)"ErrorMsg", (getter)PyCThostFtdcRspFutureSignInField_get_ErrorMsg, (setter)PyCThostFtdcRspFutureSignInField_set_ErrorMsg, (char *)"ErrorMsg", NULL},
    ///PIN密钥 
    {(char *)"PinKey", (getter)PyCThostFtdcRspFutureSignInField_get_PinKey, (setter)PyCThostFtdcRspFutureSignInField_set_PinKey, (char *)"PinKey", NULL},
    ///MAC密钥 
    {(char *)"MacKey", (getter)PyCThostFtdcRspFutureSignInField_get_MacKey, (setter)PyCThostFtdcRspFutureSignInField_set_MacKey, (char *)"MacKey", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRspFutureSignInFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRspFutureSignInField",	/* tp_name */
	sizeof(PyCThostFtdcRspFutureSignInField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRspFutureSignInField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRspFutureSignInField_repr,   /* tp_repr */
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
	"CThostFtdcRspFutureSignInField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRspFutureSignInField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRspFutureSignInField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRspFutureSignInField_new,       /* tp_new */
};

int PyCThostFtdcRspFutureSignInFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRspFutureSignInField  */
	if (PyType_Ready(&PyCThostFtdcRspFutureSignInFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRspFutureSignInField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRspFutureSignInFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRspFutureSignInField", (PyObject *)&PyCThostFtdcRspFutureSignInFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRspFutureSignInField to module");
        Py_DECREF(&PyCThostFtdcRspFutureSignInFieldType);
		return -1;
    }

    return 0;
}
