
#include "PyCThostFtdcNotifyFutureSignInField.h"

///期商签到通知

static PyObject *PyCThostFtdcNotifyFutureSignInField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcNotifyFutureSignInField *self = (PyCThostFtdcNotifyFutureSignInField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcNotifyFutureSignInField_init(PyCThostFtdcNotifyFutureSignInField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "InstallID", "UserID", "Digest", "CurrencyID", "DeviceID", "BrokerIDByBank", "OperNo", "RequestID", "TID", "ErrorID", "ErrorMsg", "PinKey", "MacKey",  NULL};


    ///业务功能码
    // TThostFtdcTradeCodeType char[7]
    const char *NotifyFutureSignInField_TradeCode = NULL;
    Py_ssize_t NotifyFutureSignInField_TradeCode_len = 0;
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    const char *NotifyFutureSignInField_BankID = NULL;
    Py_ssize_t NotifyFutureSignInField_BankID_len = 0;
            
    ///银行分支机构代码
    // TThostFtdcBankBrchIDType char[5]
    const char *NotifyFutureSignInField_BankBranchID = NULL;
    Py_ssize_t NotifyFutureSignInField_BankBranchID_len = 0;
            
    ///期商代码
    // TThostFtdcBrokerIDType char[11]
    const char *NotifyFutureSignInField_BrokerID = NULL;
    Py_ssize_t NotifyFutureSignInField_BrokerID_len = 0;
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    const char *NotifyFutureSignInField_BrokerBranchID = NULL;
    Py_ssize_t NotifyFutureSignInField_BrokerBranchID_len = 0;
            
    ///交易日期
    // TThostFtdcTradeDateType char[9]
    const char *NotifyFutureSignInField_TradeDate = NULL;
    Py_ssize_t NotifyFutureSignInField_TradeDate_len = 0;
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    const char *NotifyFutureSignInField_TradeTime = NULL;
    Py_ssize_t NotifyFutureSignInField_TradeTime_len = 0;
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    const char *NotifyFutureSignInField_BankSerial = NULL;
    Py_ssize_t NotifyFutureSignInField_BankSerial_len = 0;
            
    ///交易系统日期
    // TThostFtdcTradeDateType char[9]
    const char *NotifyFutureSignInField_TradingDay = NULL;
    Py_ssize_t NotifyFutureSignInField_TradingDay_len = 0;
            
    ///银期平台消息流水号
    // TThostFtdcSerialType int
    int NotifyFutureSignInField_PlateSerial = 0;
        
    ///最后分片标志
    // TThostFtdcLastFragmentType char
    char NotifyFutureSignInField_LastFragment = 0;
            
    ///会话号
    // TThostFtdcSessionIDType int
    int NotifyFutureSignInField_SessionID = 0;
        
    ///安装编号
    // TThostFtdcInstallIDType int
    int NotifyFutureSignInField_InstallID = 0;
        
    ///用户标识
    // TThostFtdcUserIDType char[16]
    const char *NotifyFutureSignInField_UserID = NULL;
    Py_ssize_t NotifyFutureSignInField_UserID_len = 0;
            
    ///摘要
    // TThostFtdcDigestType char[36]
    const char *NotifyFutureSignInField_Digest = NULL;
    Py_ssize_t NotifyFutureSignInField_Digest_len = 0;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *NotifyFutureSignInField_CurrencyID = NULL;
    Py_ssize_t NotifyFutureSignInField_CurrencyID_len = 0;
            
    ///渠道标志
    // TThostFtdcDeviceIDType char[3]
    const char *NotifyFutureSignInField_DeviceID = NULL;
    Py_ssize_t NotifyFutureSignInField_DeviceID_len = 0;
            
    ///期货公司银行编码
    // TThostFtdcBankCodingForFutureType char[33]
    const char *NotifyFutureSignInField_BrokerIDByBank = NULL;
    Py_ssize_t NotifyFutureSignInField_BrokerIDByBank_len = 0;
            
    ///交易柜员
    // TThostFtdcOperNoType char[17]
    const char *NotifyFutureSignInField_OperNo = NULL;
    Py_ssize_t NotifyFutureSignInField_OperNo_len = 0;
            
    ///请求编号
    // TThostFtdcRequestIDType int
    int NotifyFutureSignInField_RequestID = 0;
        
    ///交易ID
    // TThostFtdcTIDType int
    int NotifyFutureSignInField_TID = 0;
        
    ///错误代码
    // TThostFtdcErrorIDType int
    int NotifyFutureSignInField_ErrorID = 0;
        
    ///错误信息
    // TThostFtdcErrorMsgType char[81]
    const char *NotifyFutureSignInField_ErrorMsg = NULL;
    Py_ssize_t NotifyFutureSignInField_ErrorMsg_len = 0;
            
    ///PIN密钥
    // TThostFtdcPasswordKeyType char[129]
    const char *NotifyFutureSignInField_PinKey = NULL;
    Py_ssize_t NotifyFutureSignInField_PinKey_len = 0;
            
    ///MAC密钥
    // TThostFtdcPasswordKeyType char[129]
    const char *NotifyFutureSignInField_MacKey = NULL;
    Py_ssize_t NotifyFutureSignInField_MacKey_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciiy#y#y#y#y#y#iiiy#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#iciis#s#s#s#s#s#iiis#s#s#", (char **)kwlist
#endif

        , &NotifyFutureSignInField_TradeCode, &NotifyFutureSignInField_TradeCode_len 
        , &NotifyFutureSignInField_BankID, &NotifyFutureSignInField_BankID_len 
        , &NotifyFutureSignInField_BankBranchID, &NotifyFutureSignInField_BankBranchID_len 
        , &NotifyFutureSignInField_BrokerID, &NotifyFutureSignInField_BrokerID_len 
        , &NotifyFutureSignInField_BrokerBranchID, &NotifyFutureSignInField_BrokerBranchID_len 
        , &NotifyFutureSignInField_TradeDate, &NotifyFutureSignInField_TradeDate_len 
        , &NotifyFutureSignInField_TradeTime, &NotifyFutureSignInField_TradeTime_len 
        , &NotifyFutureSignInField_BankSerial, &NotifyFutureSignInField_BankSerial_len 
        , &NotifyFutureSignInField_TradingDay, &NotifyFutureSignInField_TradingDay_len 
        , &NotifyFutureSignInField_PlateSerial 
        , &NotifyFutureSignInField_LastFragment 
        , &NotifyFutureSignInField_SessionID 
        , &NotifyFutureSignInField_InstallID 
        , &NotifyFutureSignInField_UserID, &NotifyFutureSignInField_UserID_len 
        , &NotifyFutureSignInField_Digest, &NotifyFutureSignInField_Digest_len 
        , &NotifyFutureSignInField_CurrencyID, &NotifyFutureSignInField_CurrencyID_len 
        , &NotifyFutureSignInField_DeviceID, &NotifyFutureSignInField_DeviceID_len 
        , &NotifyFutureSignInField_BrokerIDByBank, &NotifyFutureSignInField_BrokerIDByBank_len 
        , &NotifyFutureSignInField_OperNo, &NotifyFutureSignInField_OperNo_len 
        , &NotifyFutureSignInField_RequestID 
        , &NotifyFutureSignInField_TID 
        , &NotifyFutureSignInField_ErrorID 
        , &NotifyFutureSignInField_ErrorMsg, &NotifyFutureSignInField_ErrorMsg_len 
        , &NotifyFutureSignInField_PinKey, &NotifyFutureSignInField_PinKey_len 
        , &NotifyFutureSignInField_MacKey, &NotifyFutureSignInField_MacKey_len 


    )) {
        return -1;
    }


    ///业务功能码
    // TThostFtdcTradeCodeType char[7]
    if( NotifyFutureSignInField_TradeCode != NULL ) {
        if(NotifyFutureSignInField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", NotifyFutureSignInField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
            return -1;
        }
        // memset(self->data.TradeCode, 0, sizeof(self->data.TradeCode));
        // memcpy(self->data.TradeCode, NotifyFutureSignInField_TradeCode, NotifyFutureSignInField_TradeCode_len);        
        strncpy(self->data.TradeCode, NotifyFutureSignInField_TradeCode, sizeof(self->data.TradeCode) );
        NotifyFutureSignInField_TradeCode = NULL;
    }
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    if( NotifyFutureSignInField_BankID != NULL ) {
        if(NotifyFutureSignInField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", NotifyFutureSignInField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
            return -1;
        }
        // memset(self->data.BankID, 0, sizeof(self->data.BankID));
        // memcpy(self->data.BankID, NotifyFutureSignInField_BankID, NotifyFutureSignInField_BankID_len);        
        strncpy(self->data.BankID, NotifyFutureSignInField_BankID, sizeof(self->data.BankID) );
        NotifyFutureSignInField_BankID = NULL;
    }
            
    ///银行分支机构代码
    // TThostFtdcBankBrchIDType char[5]
    if( NotifyFutureSignInField_BankBranchID != NULL ) {
        if(NotifyFutureSignInField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", NotifyFutureSignInField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
            return -1;
        }
        // memset(self->data.BankBranchID, 0, sizeof(self->data.BankBranchID));
        // memcpy(self->data.BankBranchID, NotifyFutureSignInField_BankBranchID, NotifyFutureSignInField_BankBranchID_len);        
        strncpy(self->data.BankBranchID, NotifyFutureSignInField_BankBranchID, sizeof(self->data.BankBranchID) );
        NotifyFutureSignInField_BankBranchID = NULL;
    }
            
    ///期商代码
    // TThostFtdcBrokerIDType char[11]
    if( NotifyFutureSignInField_BrokerID != NULL ) {
        if(NotifyFutureSignInField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", NotifyFutureSignInField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, NotifyFutureSignInField_BrokerID, NotifyFutureSignInField_BrokerID_len);        
        strncpy(self->data.BrokerID, NotifyFutureSignInField_BrokerID, sizeof(self->data.BrokerID) );
        NotifyFutureSignInField_BrokerID = NULL;
    }
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    if( NotifyFutureSignInField_BrokerBranchID != NULL ) {
        if(NotifyFutureSignInField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", NotifyFutureSignInField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
            return -1;
        }
        // memset(self->data.BrokerBranchID, 0, sizeof(self->data.BrokerBranchID));
        // memcpy(self->data.BrokerBranchID, NotifyFutureSignInField_BrokerBranchID, NotifyFutureSignInField_BrokerBranchID_len);        
        strncpy(self->data.BrokerBranchID, NotifyFutureSignInField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
        NotifyFutureSignInField_BrokerBranchID = NULL;
    }
            
    ///交易日期
    // TThostFtdcTradeDateType char[9]
    if( NotifyFutureSignInField_TradeDate != NULL ) {
        if(NotifyFutureSignInField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", NotifyFutureSignInField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
            return -1;
        }
        // memset(self->data.TradeDate, 0, sizeof(self->data.TradeDate));
        // memcpy(self->data.TradeDate, NotifyFutureSignInField_TradeDate, NotifyFutureSignInField_TradeDate_len);        
        strncpy(self->data.TradeDate, NotifyFutureSignInField_TradeDate, sizeof(self->data.TradeDate) );
        NotifyFutureSignInField_TradeDate = NULL;
    }
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    if( NotifyFutureSignInField_TradeTime != NULL ) {
        if(NotifyFutureSignInField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", NotifyFutureSignInField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
            return -1;
        }
        // memset(self->data.TradeTime, 0, sizeof(self->data.TradeTime));
        // memcpy(self->data.TradeTime, NotifyFutureSignInField_TradeTime, NotifyFutureSignInField_TradeTime_len);        
        strncpy(self->data.TradeTime, NotifyFutureSignInField_TradeTime, sizeof(self->data.TradeTime) );
        NotifyFutureSignInField_TradeTime = NULL;
    }
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    if( NotifyFutureSignInField_BankSerial != NULL ) {
        if(NotifyFutureSignInField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", NotifyFutureSignInField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
            return -1;
        }
        // memset(self->data.BankSerial, 0, sizeof(self->data.BankSerial));
        // memcpy(self->data.BankSerial, NotifyFutureSignInField_BankSerial, NotifyFutureSignInField_BankSerial_len);        
        strncpy(self->data.BankSerial, NotifyFutureSignInField_BankSerial, sizeof(self->data.BankSerial) );
        NotifyFutureSignInField_BankSerial = NULL;
    }
            
    ///交易系统日期
    // TThostFtdcTradeDateType char[9]
    if( NotifyFutureSignInField_TradingDay != NULL ) {
        if(NotifyFutureSignInField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", NotifyFutureSignInField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, NotifyFutureSignInField_TradingDay, NotifyFutureSignInField_TradingDay_len);        
        strncpy(self->data.TradingDay, NotifyFutureSignInField_TradingDay, sizeof(self->data.TradingDay) );
        NotifyFutureSignInField_TradingDay = NULL;
    }
            
    ///银期平台消息流水号
    // TThostFtdcSerialType int
    self->data.PlateSerial = NotifyFutureSignInField_PlateSerial;
        
    ///最后分片标志
    // TThostFtdcLastFragmentType char
    self->data.LastFragment = NotifyFutureSignInField_LastFragment;
            
    ///会话号
    // TThostFtdcSessionIDType int
    self->data.SessionID = NotifyFutureSignInField_SessionID;
        
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = NotifyFutureSignInField_InstallID;
        
    ///用户标识
    // TThostFtdcUserIDType char[16]
    if( NotifyFutureSignInField_UserID != NULL ) {
        if(NotifyFutureSignInField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", NotifyFutureSignInField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, NotifyFutureSignInField_UserID, NotifyFutureSignInField_UserID_len);        
        strncpy(self->data.UserID, NotifyFutureSignInField_UserID, sizeof(self->data.UserID) );
        NotifyFutureSignInField_UserID = NULL;
    }
            
    ///摘要
    // TThostFtdcDigestType char[36]
    if( NotifyFutureSignInField_Digest != NULL ) {
        if(NotifyFutureSignInField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
            PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", NotifyFutureSignInField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
            return -1;
        }
        // memset(self->data.Digest, 0, sizeof(self->data.Digest));
        // memcpy(self->data.Digest, NotifyFutureSignInField_Digest, NotifyFutureSignInField_Digest_len);        
        strncpy(self->data.Digest, NotifyFutureSignInField_Digest, sizeof(self->data.Digest) );
        NotifyFutureSignInField_Digest = NULL;
    }
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( NotifyFutureSignInField_CurrencyID != NULL ) {
        if(NotifyFutureSignInField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", NotifyFutureSignInField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, NotifyFutureSignInField_CurrencyID, NotifyFutureSignInField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, NotifyFutureSignInField_CurrencyID, sizeof(self->data.CurrencyID) );
        NotifyFutureSignInField_CurrencyID = NULL;
    }
            
    ///渠道标志
    // TThostFtdcDeviceIDType char[3]
    if( NotifyFutureSignInField_DeviceID != NULL ) {
        if(NotifyFutureSignInField_DeviceID_len > (Py_ssize_t)sizeof(self->data.DeviceID)) {
            PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is %zd)", NotifyFutureSignInField_DeviceID_len, (Py_ssize_t)sizeof(self->data.DeviceID));
            return -1;
        }
        // memset(self->data.DeviceID, 0, sizeof(self->data.DeviceID));
        // memcpy(self->data.DeviceID, NotifyFutureSignInField_DeviceID, NotifyFutureSignInField_DeviceID_len);        
        strncpy(self->data.DeviceID, NotifyFutureSignInField_DeviceID, sizeof(self->data.DeviceID) );
        NotifyFutureSignInField_DeviceID = NULL;
    }
            
    ///期货公司银行编码
    // TThostFtdcBankCodingForFutureType char[33]
    if( NotifyFutureSignInField_BrokerIDByBank != NULL ) {
        if(NotifyFutureSignInField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
            PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", NotifyFutureSignInField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
            return -1;
        }
        // memset(self->data.BrokerIDByBank, 0, sizeof(self->data.BrokerIDByBank));
        // memcpy(self->data.BrokerIDByBank, NotifyFutureSignInField_BrokerIDByBank, NotifyFutureSignInField_BrokerIDByBank_len);        
        strncpy(self->data.BrokerIDByBank, NotifyFutureSignInField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
        NotifyFutureSignInField_BrokerIDByBank = NULL;
    }
            
    ///交易柜员
    // TThostFtdcOperNoType char[17]
    if( NotifyFutureSignInField_OperNo != NULL ) {
        if(NotifyFutureSignInField_OperNo_len > (Py_ssize_t)sizeof(self->data.OperNo)) {
            PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is %zd)", NotifyFutureSignInField_OperNo_len, (Py_ssize_t)sizeof(self->data.OperNo));
            return -1;
        }
        // memset(self->data.OperNo, 0, sizeof(self->data.OperNo));
        // memcpy(self->data.OperNo, NotifyFutureSignInField_OperNo, NotifyFutureSignInField_OperNo_len);        
        strncpy(self->data.OperNo, NotifyFutureSignInField_OperNo, sizeof(self->data.OperNo) );
        NotifyFutureSignInField_OperNo = NULL;
    }
            
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = NotifyFutureSignInField_RequestID;
        
    ///交易ID
    // TThostFtdcTIDType int
    self->data.TID = NotifyFutureSignInField_TID;
        
    ///错误代码
    // TThostFtdcErrorIDType int
    self->data.ErrorID = NotifyFutureSignInField_ErrorID;
        
    ///错误信息
    // TThostFtdcErrorMsgType char[81]
    if( NotifyFutureSignInField_ErrorMsg != NULL ) {
        if(NotifyFutureSignInField_ErrorMsg_len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
            PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is %zd)", NotifyFutureSignInField_ErrorMsg_len, (Py_ssize_t)sizeof(self->data.ErrorMsg));
            return -1;
        }
        // memset(self->data.ErrorMsg, 0, sizeof(self->data.ErrorMsg));
        // memcpy(self->data.ErrorMsg, NotifyFutureSignInField_ErrorMsg, NotifyFutureSignInField_ErrorMsg_len);        
        strncpy(self->data.ErrorMsg, NotifyFutureSignInField_ErrorMsg, sizeof(self->data.ErrorMsg) );
        NotifyFutureSignInField_ErrorMsg = NULL;
    }
            
    ///PIN密钥
    // TThostFtdcPasswordKeyType char[129]
    if( NotifyFutureSignInField_PinKey != NULL ) {
        if(NotifyFutureSignInField_PinKey_len > (Py_ssize_t)sizeof(self->data.PinKey)) {
            PyErr_Format(PyExc_ValueError, "PinKey too long: length=%zd (max allowed is %zd)", NotifyFutureSignInField_PinKey_len, (Py_ssize_t)sizeof(self->data.PinKey));
            return -1;
        }
        // memset(self->data.PinKey, 0, sizeof(self->data.PinKey));
        // memcpy(self->data.PinKey, NotifyFutureSignInField_PinKey, NotifyFutureSignInField_PinKey_len);        
        strncpy(self->data.PinKey, NotifyFutureSignInField_PinKey, sizeof(self->data.PinKey) );
        NotifyFutureSignInField_PinKey = NULL;
    }
            
    ///MAC密钥
    // TThostFtdcPasswordKeyType char[129]
    if( NotifyFutureSignInField_MacKey != NULL ) {
        if(NotifyFutureSignInField_MacKey_len > (Py_ssize_t)sizeof(self->data.MacKey)) {
            PyErr_Format(PyExc_ValueError, "MacKey too long: length=%zd (max allowed is %zd)", NotifyFutureSignInField_MacKey_len, (Py_ssize_t)sizeof(self->data.MacKey));
            return -1;
        }
        // memset(self->data.MacKey, 0, sizeof(self->data.MacKey));
        // memcpy(self->data.MacKey, NotifyFutureSignInField_MacKey, NotifyFutureSignInField_MacKey_len);        
        strncpy(self->data.MacKey, NotifyFutureSignInField_MacKey, sizeof(self->data.MacKey) );
        NotifyFutureSignInField_MacKey = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcNotifyFutureSignInField_dealloc(PyCThostFtdcNotifyFutureSignInField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcNotifyFutureSignInField_repr(PyCThostFtdcNotifyFutureSignInField *self) {

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcNotifyFutureSignInField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///业务功能码
// TThostFtdcTradeCodeType char[7]
static PyObject *PyCThostFtdcNotifyFutureSignInField_get_TradeCode(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeCode, (Py_ssize_t)sizeof(self->data.TradeCode));
    return PyBytes_FromString(self->data.TradeCode);
}

///业务功能码
// TThostFtdcTradeCodeType char[7]
static int PyCThostFtdcNotifyFutureSignInField_set_TradeCode(PyCThostFtdcNotifyFutureSignInField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyFutureSignInField_get_BankID(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankID, (Py_ssize_t)sizeof(self->data.BankID));
    return PyBytes_FromString(self->data.BankID);
}

///银行代码
// TThostFtdcBankIDType char[4]
static int PyCThostFtdcNotifyFutureSignInField_set_BankID(PyCThostFtdcNotifyFutureSignInField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyFutureSignInField_get_BankBranchID(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankBranchID, (Py_ssize_t)sizeof(self->data.BankBranchID));
    return PyBytes_FromString(self->data.BankBranchID);
}

///银行分支机构代码
// TThostFtdcBankBrchIDType char[5]
static int PyCThostFtdcNotifyFutureSignInField_set_BankBranchID(PyCThostFtdcNotifyFutureSignInField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyFutureSignInField_get_BrokerID(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///期商代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcNotifyFutureSignInField_set_BrokerID(PyCThostFtdcNotifyFutureSignInField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyFutureSignInField_get_BrokerBranchID(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerBranchID, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
    return PyBytes_FromString(self->data.BrokerBranchID);
}

///期商分支机构代码
// TThostFtdcFutureBranchIDType char[31]
static int PyCThostFtdcNotifyFutureSignInField_set_BrokerBranchID(PyCThostFtdcNotifyFutureSignInField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyFutureSignInField_get_TradeDate(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeDate, (Py_ssize_t)sizeof(self->data.TradeDate));
    return PyBytes_FromString(self->data.TradeDate);
}

///交易日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcNotifyFutureSignInField_set_TradeDate(PyCThostFtdcNotifyFutureSignInField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyFutureSignInField_get_TradeTime(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeTime, (Py_ssize_t)sizeof(self->data.TradeTime));
    return PyBytes_FromString(self->data.TradeTime);
}

///交易时间
// TThostFtdcTradeTimeType char[9]
static int PyCThostFtdcNotifyFutureSignInField_set_TradeTime(PyCThostFtdcNotifyFutureSignInField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyFutureSignInField_get_BankSerial(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankSerial, (Py_ssize_t)sizeof(self->data.BankSerial));
    return PyBytes_FromString(self->data.BankSerial);
}

///银行流水号
// TThostFtdcBankSerialType char[13]
static int PyCThostFtdcNotifyFutureSignInField_set_BankSerial(PyCThostFtdcNotifyFutureSignInField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyFutureSignInField_get_TradingDay(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易系统日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcNotifyFutureSignInField_set_TradingDay(PyCThostFtdcNotifyFutureSignInField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyFutureSignInField_get_PlateSerial(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.PlateSerial);
#else
    return PyInt_FromLong(self->data.PlateSerial);
#endif
}

///银期平台消息流水号
// TThostFtdcSerialType int
static int PyCThostFtdcNotifyFutureSignInField_set_PlateSerial(PyCThostFtdcNotifyFutureSignInField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyFutureSignInField_get_LastFragment(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

///最后分片标志
// TThostFtdcLastFragmentType char
static int PyCThostFtdcNotifyFutureSignInField_set_LastFragment(PyCThostFtdcNotifyFutureSignInField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyFutureSignInField_get_SessionID(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话号
// TThostFtdcSessionIDType int
static int PyCThostFtdcNotifyFutureSignInField_set_SessionID(PyCThostFtdcNotifyFutureSignInField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyFutureSignInField_get_InstallID(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcNotifyFutureSignInField_set_InstallID(PyCThostFtdcNotifyFutureSignInField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyFutureSignInField_get_UserID(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户标识
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcNotifyFutureSignInField_set_UserID(PyCThostFtdcNotifyFutureSignInField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyFutureSignInField_get_Digest(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Digest, (Py_ssize_t)sizeof(self->data.Digest));
    return PyBytes_FromString(self->data.Digest);
}

///摘要
// TThostFtdcDigestType char[36]
static int PyCThostFtdcNotifyFutureSignInField_set_Digest(PyCThostFtdcNotifyFutureSignInField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyFutureSignInField_get_CurrencyID(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcNotifyFutureSignInField_set_CurrencyID(PyCThostFtdcNotifyFutureSignInField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyFutureSignInField_get_DeviceID(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.DeviceID, (Py_ssize_t)sizeof(self->data.DeviceID));
    return PyBytes_FromString(self->data.DeviceID);
}

///渠道标志
// TThostFtdcDeviceIDType char[3]
static int PyCThostFtdcNotifyFutureSignInField_set_DeviceID(PyCThostFtdcNotifyFutureSignInField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyFutureSignInField_get_BrokerIDByBank(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerIDByBank, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
    return PyBytes_FromString(self->data.BrokerIDByBank);
}

///期货公司银行编码
// TThostFtdcBankCodingForFutureType char[33]
static int PyCThostFtdcNotifyFutureSignInField_set_BrokerIDByBank(PyCThostFtdcNotifyFutureSignInField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyFutureSignInField_get_OperNo(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OperNo, (Py_ssize_t)sizeof(self->data.OperNo));
    return PyBytes_FromString(self->data.OperNo);
}

///交易柜员
// TThostFtdcOperNoType char[17]
static int PyCThostFtdcNotifyFutureSignInField_set_OperNo(PyCThostFtdcNotifyFutureSignInField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyFutureSignInField_get_RequestID(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcNotifyFutureSignInField_set_RequestID(PyCThostFtdcNotifyFutureSignInField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyFutureSignInField_get_TID(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.TID);
#else
    return PyInt_FromLong(self->data.TID);
#endif
}

///交易ID
// TThostFtdcTIDType int
static int PyCThostFtdcNotifyFutureSignInField_set_TID(PyCThostFtdcNotifyFutureSignInField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyFutureSignInField_get_ErrorID(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.ErrorID);
#else
    return PyInt_FromLong(self->data.ErrorID);
#endif
}

///错误代码
// TThostFtdcErrorIDType int
static int PyCThostFtdcNotifyFutureSignInField_set_ErrorID(PyCThostFtdcNotifyFutureSignInField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyFutureSignInField_get_ErrorMsg(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ErrorMsg, (Py_ssize_t)sizeof(self->data.ErrorMsg));
    return PyBytes_FromString(self->data.ErrorMsg);
}

///错误信息
// TThostFtdcErrorMsgType char[81]
static int PyCThostFtdcNotifyFutureSignInField_set_ErrorMsg(PyCThostFtdcNotifyFutureSignInField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyFutureSignInField_get_PinKey(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.PinKey, (Py_ssize_t)sizeof(self->data.PinKey));
    return PyBytes_FromString(self->data.PinKey);
}

///PIN密钥
// TThostFtdcPasswordKeyType char[129]
static int PyCThostFtdcNotifyFutureSignInField_set_PinKey(PyCThostFtdcNotifyFutureSignInField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyFutureSignInField_get_MacKey(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacKey, (Py_ssize_t)sizeof(self->data.MacKey));
    return PyBytes_FromString(self->data.MacKey);
}

///MAC密钥
// TThostFtdcPasswordKeyType char[129]
static int PyCThostFtdcNotifyFutureSignInField_set_MacKey(PyCThostFtdcNotifyFutureSignInField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcNotifyFutureSignInField_getset[] = {
    ///业务功能码 
    {(char *)"TradeCode", (getter)PyCThostFtdcNotifyFutureSignInField_get_TradeCode, (setter)PyCThostFtdcNotifyFutureSignInField_set_TradeCode, (char *)"TradeCode", NULL},
    ///银行代码 
    {(char *)"BankID", (getter)PyCThostFtdcNotifyFutureSignInField_get_BankID, (setter)PyCThostFtdcNotifyFutureSignInField_set_BankID, (char *)"BankID", NULL},
    ///银行分支机构代码 
    {(char *)"BankBranchID", (getter)PyCThostFtdcNotifyFutureSignInField_get_BankBranchID, (setter)PyCThostFtdcNotifyFutureSignInField_set_BankBranchID, (char *)"BankBranchID", NULL},
    ///期商代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcNotifyFutureSignInField_get_BrokerID, (setter)PyCThostFtdcNotifyFutureSignInField_set_BrokerID, (char *)"BrokerID", NULL},
    ///期商分支机构代码 
    {(char *)"BrokerBranchID", (getter)PyCThostFtdcNotifyFutureSignInField_get_BrokerBranchID, (setter)PyCThostFtdcNotifyFutureSignInField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
    ///交易日期 
    {(char *)"TradeDate", (getter)PyCThostFtdcNotifyFutureSignInField_get_TradeDate, (setter)PyCThostFtdcNotifyFutureSignInField_set_TradeDate, (char *)"TradeDate", NULL},
    ///交易时间 
    {(char *)"TradeTime", (getter)PyCThostFtdcNotifyFutureSignInField_get_TradeTime, (setter)PyCThostFtdcNotifyFutureSignInField_set_TradeTime, (char *)"TradeTime", NULL},
    ///银行流水号 
    {(char *)"BankSerial", (getter)PyCThostFtdcNotifyFutureSignInField_get_BankSerial, (setter)PyCThostFtdcNotifyFutureSignInField_set_BankSerial, (char *)"BankSerial", NULL},
    ///交易系统日期 
    {(char *)"TradingDay", (getter)PyCThostFtdcNotifyFutureSignInField_get_TradingDay, (setter)PyCThostFtdcNotifyFutureSignInField_set_TradingDay, (char *)"TradingDay", NULL},
    ///银期平台消息流水号 
    {(char *)"PlateSerial", (getter)PyCThostFtdcNotifyFutureSignInField_get_PlateSerial, (setter)PyCThostFtdcNotifyFutureSignInField_set_PlateSerial, (char *)"PlateSerial", NULL},
    ///最后分片标志 
    {(char *)"LastFragment", (getter)PyCThostFtdcNotifyFutureSignInField_get_LastFragment, (setter)PyCThostFtdcNotifyFutureSignInField_set_LastFragment, (char *)"LastFragment", NULL},
    ///会话号 
    {(char *)"SessionID", (getter)PyCThostFtdcNotifyFutureSignInField_get_SessionID, (setter)PyCThostFtdcNotifyFutureSignInField_set_SessionID, (char *)"SessionID", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcNotifyFutureSignInField_get_InstallID, (setter)PyCThostFtdcNotifyFutureSignInField_set_InstallID, (char *)"InstallID", NULL},
    ///用户标识 
    {(char *)"UserID", (getter)PyCThostFtdcNotifyFutureSignInField_get_UserID, (setter)PyCThostFtdcNotifyFutureSignInField_set_UserID, (char *)"UserID", NULL},
    ///摘要 
    {(char *)"Digest", (getter)PyCThostFtdcNotifyFutureSignInField_get_Digest, (setter)PyCThostFtdcNotifyFutureSignInField_set_Digest, (char *)"Digest", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcNotifyFutureSignInField_get_CurrencyID, (setter)PyCThostFtdcNotifyFutureSignInField_set_CurrencyID, (char *)"CurrencyID", NULL},
    ///渠道标志 
    {(char *)"DeviceID", (getter)PyCThostFtdcNotifyFutureSignInField_get_DeviceID, (setter)PyCThostFtdcNotifyFutureSignInField_set_DeviceID, (char *)"DeviceID", NULL},
    ///期货公司银行编码 
    {(char *)"BrokerIDByBank", (getter)PyCThostFtdcNotifyFutureSignInField_get_BrokerIDByBank, (setter)PyCThostFtdcNotifyFutureSignInField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
    ///交易柜员 
    {(char *)"OperNo", (getter)PyCThostFtdcNotifyFutureSignInField_get_OperNo, (setter)PyCThostFtdcNotifyFutureSignInField_set_OperNo, (char *)"OperNo", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcNotifyFutureSignInField_get_RequestID, (setter)PyCThostFtdcNotifyFutureSignInField_set_RequestID, (char *)"RequestID", NULL},
    ///交易ID 
    {(char *)"TID", (getter)PyCThostFtdcNotifyFutureSignInField_get_TID, (setter)PyCThostFtdcNotifyFutureSignInField_set_TID, (char *)"TID", NULL},
    ///错误代码 
    {(char *)"ErrorID", (getter)PyCThostFtdcNotifyFutureSignInField_get_ErrorID, (setter)PyCThostFtdcNotifyFutureSignInField_set_ErrorID, (char *)"ErrorID", NULL},
    ///错误信息 
    {(char *)"ErrorMsg", (getter)PyCThostFtdcNotifyFutureSignInField_get_ErrorMsg, (setter)PyCThostFtdcNotifyFutureSignInField_set_ErrorMsg, (char *)"ErrorMsg", NULL},
    ///PIN密钥 
    {(char *)"PinKey", (getter)PyCThostFtdcNotifyFutureSignInField_get_PinKey, (setter)PyCThostFtdcNotifyFutureSignInField_set_PinKey, (char *)"PinKey", NULL},
    ///MAC密钥 
    {(char *)"MacKey", (getter)PyCThostFtdcNotifyFutureSignInField_get_MacKey, (setter)PyCThostFtdcNotifyFutureSignInField_set_MacKey, (char *)"MacKey", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcNotifyFutureSignInFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcNotifyFutureSignInField",	/* tp_name */
	sizeof(PyCThostFtdcNotifyFutureSignInField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcNotifyFutureSignInField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcNotifyFutureSignInField_repr,   /* tp_repr */
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
	"CThostFtdcNotifyFutureSignInField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcNotifyFutureSignInField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcNotifyFutureSignInField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcNotifyFutureSignInField_new,       /* tp_new */
};

int PyCThostFtdcNotifyFutureSignInFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcNotifyFutureSignInField  */
	if (PyType_Ready(&PyCThostFtdcNotifyFutureSignInFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcNotifyFutureSignInField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcNotifyFutureSignInFieldType);
    if( PyModule_AddObject(module, "CThostFtdcNotifyFutureSignInField", (PyObject *)&PyCThostFtdcNotifyFutureSignInFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcNotifyFutureSignInField to module");
        Py_DECREF(&PyCThostFtdcNotifyFutureSignInFieldType);
		return -1;
    }

    return 0;
}
