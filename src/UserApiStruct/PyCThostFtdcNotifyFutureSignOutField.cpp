
#include "PyCThostFtdcNotifyFutureSignOutField.h"

///期商签退通知

static PyObject *PyCThostFtdcNotifyFutureSignOutField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcNotifyFutureSignOutField *self = (PyCThostFtdcNotifyFutureSignOutField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcNotifyFutureSignOutField_init(PyCThostFtdcNotifyFutureSignOutField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "InstallID", "UserID", "Digest", "CurrencyID", "DeviceID", "BrokerIDByBank", "OperNo", "RequestID", "TID", "ErrorID", "ErrorMsg",  NULL};


    ///业务功能码
    // TThostFtdcTradeCodeType char[7]
    const char *NotifyFutureSignOutField_TradeCode = NULL;
    Py_ssize_t NotifyFutureSignOutField_TradeCode_len = 0;
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    const char *NotifyFutureSignOutField_BankID = NULL;
    Py_ssize_t NotifyFutureSignOutField_BankID_len = 0;
            
    ///银行分支机构代码
    // TThostFtdcBankBrchIDType char[5]
    const char *NotifyFutureSignOutField_BankBranchID = NULL;
    Py_ssize_t NotifyFutureSignOutField_BankBranchID_len = 0;
            
    ///期商代码
    // TThostFtdcBrokerIDType char[11]
    const char *NotifyFutureSignOutField_BrokerID = NULL;
    Py_ssize_t NotifyFutureSignOutField_BrokerID_len = 0;
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    const char *NotifyFutureSignOutField_BrokerBranchID = NULL;
    Py_ssize_t NotifyFutureSignOutField_BrokerBranchID_len = 0;
            
    ///交易日期
    // TThostFtdcTradeDateType char[9]
    const char *NotifyFutureSignOutField_TradeDate = NULL;
    Py_ssize_t NotifyFutureSignOutField_TradeDate_len = 0;
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    const char *NotifyFutureSignOutField_TradeTime = NULL;
    Py_ssize_t NotifyFutureSignOutField_TradeTime_len = 0;
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    const char *NotifyFutureSignOutField_BankSerial = NULL;
    Py_ssize_t NotifyFutureSignOutField_BankSerial_len = 0;
            
    ///交易系统日期
    // TThostFtdcTradeDateType char[9]
    const char *NotifyFutureSignOutField_TradingDay = NULL;
    Py_ssize_t NotifyFutureSignOutField_TradingDay_len = 0;
            
    ///银期平台消息流水号
    // TThostFtdcSerialType int
    int NotifyFutureSignOutField_PlateSerial = 0;
        
    ///最后分片标志
    // TThostFtdcLastFragmentType char
    char NotifyFutureSignOutField_LastFragment = 0;
            
    ///会话号
    // TThostFtdcSessionIDType int
    int NotifyFutureSignOutField_SessionID = 0;
        
    ///安装编号
    // TThostFtdcInstallIDType int
    int NotifyFutureSignOutField_InstallID = 0;
        
    ///用户标识
    // TThostFtdcUserIDType char[16]
    const char *NotifyFutureSignOutField_UserID = NULL;
    Py_ssize_t NotifyFutureSignOutField_UserID_len = 0;
            
    ///摘要
    // TThostFtdcDigestType char[36]
    const char *NotifyFutureSignOutField_Digest = NULL;
    Py_ssize_t NotifyFutureSignOutField_Digest_len = 0;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *NotifyFutureSignOutField_CurrencyID = NULL;
    Py_ssize_t NotifyFutureSignOutField_CurrencyID_len = 0;
            
    ///渠道标志
    // TThostFtdcDeviceIDType char[3]
    const char *NotifyFutureSignOutField_DeviceID = NULL;
    Py_ssize_t NotifyFutureSignOutField_DeviceID_len = 0;
            
    ///期货公司银行编码
    // TThostFtdcBankCodingForFutureType char[33]
    const char *NotifyFutureSignOutField_BrokerIDByBank = NULL;
    Py_ssize_t NotifyFutureSignOutField_BrokerIDByBank_len = 0;
            
    ///交易柜员
    // TThostFtdcOperNoType char[17]
    const char *NotifyFutureSignOutField_OperNo = NULL;
    Py_ssize_t NotifyFutureSignOutField_OperNo_len = 0;
            
    ///请求编号
    // TThostFtdcRequestIDType int
    int NotifyFutureSignOutField_RequestID = 0;
        
    ///交易ID
    // TThostFtdcTIDType int
    int NotifyFutureSignOutField_TID = 0;
        
    ///错误代码
    // TThostFtdcErrorIDType int
    int NotifyFutureSignOutField_ErrorID = 0;
        
    ///错误信息
    // TThostFtdcErrorMsgType char[81]
    const char *NotifyFutureSignOutField_ErrorMsg = NULL;
    Py_ssize_t NotifyFutureSignOutField_ErrorMsg_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciiy#y#y#y#y#y#iiiy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#iciis#s#s#s#s#s#iiis#", (char **)kwlist
#endif

        , &NotifyFutureSignOutField_TradeCode, &NotifyFutureSignOutField_TradeCode_len 
        , &NotifyFutureSignOutField_BankID, &NotifyFutureSignOutField_BankID_len 
        , &NotifyFutureSignOutField_BankBranchID, &NotifyFutureSignOutField_BankBranchID_len 
        , &NotifyFutureSignOutField_BrokerID, &NotifyFutureSignOutField_BrokerID_len 
        , &NotifyFutureSignOutField_BrokerBranchID, &NotifyFutureSignOutField_BrokerBranchID_len 
        , &NotifyFutureSignOutField_TradeDate, &NotifyFutureSignOutField_TradeDate_len 
        , &NotifyFutureSignOutField_TradeTime, &NotifyFutureSignOutField_TradeTime_len 
        , &NotifyFutureSignOutField_BankSerial, &NotifyFutureSignOutField_BankSerial_len 
        , &NotifyFutureSignOutField_TradingDay, &NotifyFutureSignOutField_TradingDay_len 
        , &NotifyFutureSignOutField_PlateSerial 
        , &NotifyFutureSignOutField_LastFragment 
        , &NotifyFutureSignOutField_SessionID 
        , &NotifyFutureSignOutField_InstallID 
        , &NotifyFutureSignOutField_UserID, &NotifyFutureSignOutField_UserID_len 
        , &NotifyFutureSignOutField_Digest, &NotifyFutureSignOutField_Digest_len 
        , &NotifyFutureSignOutField_CurrencyID, &NotifyFutureSignOutField_CurrencyID_len 
        , &NotifyFutureSignOutField_DeviceID, &NotifyFutureSignOutField_DeviceID_len 
        , &NotifyFutureSignOutField_BrokerIDByBank, &NotifyFutureSignOutField_BrokerIDByBank_len 
        , &NotifyFutureSignOutField_OperNo, &NotifyFutureSignOutField_OperNo_len 
        , &NotifyFutureSignOutField_RequestID 
        , &NotifyFutureSignOutField_TID 
        , &NotifyFutureSignOutField_ErrorID 
        , &NotifyFutureSignOutField_ErrorMsg, &NotifyFutureSignOutField_ErrorMsg_len 


    )) {
        return -1;
    }


    ///业务功能码
    // TThostFtdcTradeCodeType char[7]
    if( NotifyFutureSignOutField_TradeCode != NULL ) {
        if(NotifyFutureSignOutField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", NotifyFutureSignOutField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
            return -1;
        }
        // memset(self->data.TradeCode, 0, sizeof(self->data.TradeCode));
        // memcpy(self->data.TradeCode, NotifyFutureSignOutField_TradeCode, NotifyFutureSignOutField_TradeCode_len);        
        strncpy(self->data.TradeCode, NotifyFutureSignOutField_TradeCode, sizeof(self->data.TradeCode) );
        NotifyFutureSignOutField_TradeCode = NULL;
    }
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    if( NotifyFutureSignOutField_BankID != NULL ) {
        if(NotifyFutureSignOutField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", NotifyFutureSignOutField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
            return -1;
        }
        // memset(self->data.BankID, 0, sizeof(self->data.BankID));
        // memcpy(self->data.BankID, NotifyFutureSignOutField_BankID, NotifyFutureSignOutField_BankID_len);        
        strncpy(self->data.BankID, NotifyFutureSignOutField_BankID, sizeof(self->data.BankID) );
        NotifyFutureSignOutField_BankID = NULL;
    }
            
    ///银行分支机构代码
    // TThostFtdcBankBrchIDType char[5]
    if( NotifyFutureSignOutField_BankBranchID != NULL ) {
        if(NotifyFutureSignOutField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", NotifyFutureSignOutField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
            return -1;
        }
        // memset(self->data.BankBranchID, 0, sizeof(self->data.BankBranchID));
        // memcpy(self->data.BankBranchID, NotifyFutureSignOutField_BankBranchID, NotifyFutureSignOutField_BankBranchID_len);        
        strncpy(self->data.BankBranchID, NotifyFutureSignOutField_BankBranchID, sizeof(self->data.BankBranchID) );
        NotifyFutureSignOutField_BankBranchID = NULL;
    }
            
    ///期商代码
    // TThostFtdcBrokerIDType char[11]
    if( NotifyFutureSignOutField_BrokerID != NULL ) {
        if(NotifyFutureSignOutField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", NotifyFutureSignOutField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, NotifyFutureSignOutField_BrokerID, NotifyFutureSignOutField_BrokerID_len);        
        strncpy(self->data.BrokerID, NotifyFutureSignOutField_BrokerID, sizeof(self->data.BrokerID) );
        NotifyFutureSignOutField_BrokerID = NULL;
    }
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    if( NotifyFutureSignOutField_BrokerBranchID != NULL ) {
        if(NotifyFutureSignOutField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", NotifyFutureSignOutField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
            return -1;
        }
        // memset(self->data.BrokerBranchID, 0, sizeof(self->data.BrokerBranchID));
        // memcpy(self->data.BrokerBranchID, NotifyFutureSignOutField_BrokerBranchID, NotifyFutureSignOutField_BrokerBranchID_len);        
        strncpy(self->data.BrokerBranchID, NotifyFutureSignOutField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
        NotifyFutureSignOutField_BrokerBranchID = NULL;
    }
            
    ///交易日期
    // TThostFtdcTradeDateType char[9]
    if( NotifyFutureSignOutField_TradeDate != NULL ) {
        if(NotifyFutureSignOutField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", NotifyFutureSignOutField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
            return -1;
        }
        // memset(self->data.TradeDate, 0, sizeof(self->data.TradeDate));
        // memcpy(self->data.TradeDate, NotifyFutureSignOutField_TradeDate, NotifyFutureSignOutField_TradeDate_len);        
        strncpy(self->data.TradeDate, NotifyFutureSignOutField_TradeDate, sizeof(self->data.TradeDate) );
        NotifyFutureSignOutField_TradeDate = NULL;
    }
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    if( NotifyFutureSignOutField_TradeTime != NULL ) {
        if(NotifyFutureSignOutField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", NotifyFutureSignOutField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
            return -1;
        }
        // memset(self->data.TradeTime, 0, sizeof(self->data.TradeTime));
        // memcpy(self->data.TradeTime, NotifyFutureSignOutField_TradeTime, NotifyFutureSignOutField_TradeTime_len);        
        strncpy(self->data.TradeTime, NotifyFutureSignOutField_TradeTime, sizeof(self->data.TradeTime) );
        NotifyFutureSignOutField_TradeTime = NULL;
    }
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    if( NotifyFutureSignOutField_BankSerial != NULL ) {
        if(NotifyFutureSignOutField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", NotifyFutureSignOutField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
            return -1;
        }
        // memset(self->data.BankSerial, 0, sizeof(self->data.BankSerial));
        // memcpy(self->data.BankSerial, NotifyFutureSignOutField_BankSerial, NotifyFutureSignOutField_BankSerial_len);        
        strncpy(self->data.BankSerial, NotifyFutureSignOutField_BankSerial, sizeof(self->data.BankSerial) );
        NotifyFutureSignOutField_BankSerial = NULL;
    }
            
    ///交易系统日期
    // TThostFtdcTradeDateType char[9]
    if( NotifyFutureSignOutField_TradingDay != NULL ) {
        if(NotifyFutureSignOutField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", NotifyFutureSignOutField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, NotifyFutureSignOutField_TradingDay, NotifyFutureSignOutField_TradingDay_len);        
        strncpy(self->data.TradingDay, NotifyFutureSignOutField_TradingDay, sizeof(self->data.TradingDay) );
        NotifyFutureSignOutField_TradingDay = NULL;
    }
            
    ///银期平台消息流水号
    // TThostFtdcSerialType int
    self->data.PlateSerial = NotifyFutureSignOutField_PlateSerial;
        
    ///最后分片标志
    // TThostFtdcLastFragmentType char
    self->data.LastFragment = NotifyFutureSignOutField_LastFragment;
            
    ///会话号
    // TThostFtdcSessionIDType int
    self->data.SessionID = NotifyFutureSignOutField_SessionID;
        
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = NotifyFutureSignOutField_InstallID;
        
    ///用户标识
    // TThostFtdcUserIDType char[16]
    if( NotifyFutureSignOutField_UserID != NULL ) {
        if(NotifyFutureSignOutField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", NotifyFutureSignOutField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, NotifyFutureSignOutField_UserID, NotifyFutureSignOutField_UserID_len);        
        strncpy(self->data.UserID, NotifyFutureSignOutField_UserID, sizeof(self->data.UserID) );
        NotifyFutureSignOutField_UserID = NULL;
    }
            
    ///摘要
    // TThostFtdcDigestType char[36]
    if( NotifyFutureSignOutField_Digest != NULL ) {
        if(NotifyFutureSignOutField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
            PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", NotifyFutureSignOutField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
            return -1;
        }
        // memset(self->data.Digest, 0, sizeof(self->data.Digest));
        // memcpy(self->data.Digest, NotifyFutureSignOutField_Digest, NotifyFutureSignOutField_Digest_len);        
        strncpy(self->data.Digest, NotifyFutureSignOutField_Digest, sizeof(self->data.Digest) );
        NotifyFutureSignOutField_Digest = NULL;
    }
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( NotifyFutureSignOutField_CurrencyID != NULL ) {
        if(NotifyFutureSignOutField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", NotifyFutureSignOutField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, NotifyFutureSignOutField_CurrencyID, NotifyFutureSignOutField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, NotifyFutureSignOutField_CurrencyID, sizeof(self->data.CurrencyID) );
        NotifyFutureSignOutField_CurrencyID = NULL;
    }
            
    ///渠道标志
    // TThostFtdcDeviceIDType char[3]
    if( NotifyFutureSignOutField_DeviceID != NULL ) {
        if(NotifyFutureSignOutField_DeviceID_len > (Py_ssize_t)sizeof(self->data.DeviceID)) {
            PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is %zd)", NotifyFutureSignOutField_DeviceID_len, (Py_ssize_t)sizeof(self->data.DeviceID));
            return -1;
        }
        // memset(self->data.DeviceID, 0, sizeof(self->data.DeviceID));
        // memcpy(self->data.DeviceID, NotifyFutureSignOutField_DeviceID, NotifyFutureSignOutField_DeviceID_len);        
        strncpy(self->data.DeviceID, NotifyFutureSignOutField_DeviceID, sizeof(self->data.DeviceID) );
        NotifyFutureSignOutField_DeviceID = NULL;
    }
            
    ///期货公司银行编码
    // TThostFtdcBankCodingForFutureType char[33]
    if( NotifyFutureSignOutField_BrokerIDByBank != NULL ) {
        if(NotifyFutureSignOutField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
            PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", NotifyFutureSignOutField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
            return -1;
        }
        // memset(self->data.BrokerIDByBank, 0, sizeof(self->data.BrokerIDByBank));
        // memcpy(self->data.BrokerIDByBank, NotifyFutureSignOutField_BrokerIDByBank, NotifyFutureSignOutField_BrokerIDByBank_len);        
        strncpy(self->data.BrokerIDByBank, NotifyFutureSignOutField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
        NotifyFutureSignOutField_BrokerIDByBank = NULL;
    }
            
    ///交易柜员
    // TThostFtdcOperNoType char[17]
    if( NotifyFutureSignOutField_OperNo != NULL ) {
        if(NotifyFutureSignOutField_OperNo_len > (Py_ssize_t)sizeof(self->data.OperNo)) {
            PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is %zd)", NotifyFutureSignOutField_OperNo_len, (Py_ssize_t)sizeof(self->data.OperNo));
            return -1;
        }
        // memset(self->data.OperNo, 0, sizeof(self->data.OperNo));
        // memcpy(self->data.OperNo, NotifyFutureSignOutField_OperNo, NotifyFutureSignOutField_OperNo_len);        
        strncpy(self->data.OperNo, NotifyFutureSignOutField_OperNo, sizeof(self->data.OperNo) );
        NotifyFutureSignOutField_OperNo = NULL;
    }
            
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = NotifyFutureSignOutField_RequestID;
        
    ///交易ID
    // TThostFtdcTIDType int
    self->data.TID = NotifyFutureSignOutField_TID;
        
    ///错误代码
    // TThostFtdcErrorIDType int
    self->data.ErrorID = NotifyFutureSignOutField_ErrorID;
        
    ///错误信息
    // TThostFtdcErrorMsgType char[81]
    if( NotifyFutureSignOutField_ErrorMsg != NULL ) {
        if(NotifyFutureSignOutField_ErrorMsg_len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
            PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is %zd)", NotifyFutureSignOutField_ErrorMsg_len, (Py_ssize_t)sizeof(self->data.ErrorMsg));
            return -1;
        }
        // memset(self->data.ErrorMsg, 0, sizeof(self->data.ErrorMsg));
        // memcpy(self->data.ErrorMsg, NotifyFutureSignOutField_ErrorMsg, NotifyFutureSignOutField_ErrorMsg_len);        
        strncpy(self->data.ErrorMsg, NotifyFutureSignOutField_ErrorMsg, sizeof(self->data.ErrorMsg) );
        NotifyFutureSignOutField_ErrorMsg = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcNotifyFutureSignOutField_dealloc(PyCThostFtdcNotifyFutureSignOutField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcNotifyFutureSignOutField_repr(PyCThostFtdcNotifyFutureSignOutField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:i,s:i,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:i,s:i,s:s}"
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


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcNotifyFutureSignOutField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///业务功能码
// TThostFtdcTradeCodeType char[7]
static PyObject *PyCThostFtdcNotifyFutureSignOutField_get_TradeCode(PyCThostFtdcNotifyFutureSignOutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeCode, (Py_ssize_t)sizeof(self->data.TradeCode));
    return PyBytes_FromString(self->data.TradeCode);
}

///业务功能码
// TThostFtdcTradeCodeType char[7]
static int PyCThostFtdcNotifyFutureSignOutField_set_TradeCode(PyCThostFtdcNotifyFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyFutureSignOutField_get_BankID(PyCThostFtdcNotifyFutureSignOutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankID, (Py_ssize_t)sizeof(self->data.BankID));
    return PyBytes_FromString(self->data.BankID);
}

///银行代码
// TThostFtdcBankIDType char[4]
static int PyCThostFtdcNotifyFutureSignOutField_set_BankID(PyCThostFtdcNotifyFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyFutureSignOutField_get_BankBranchID(PyCThostFtdcNotifyFutureSignOutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankBranchID, (Py_ssize_t)sizeof(self->data.BankBranchID));
    return PyBytes_FromString(self->data.BankBranchID);
}

///银行分支机构代码
// TThostFtdcBankBrchIDType char[5]
static int PyCThostFtdcNotifyFutureSignOutField_set_BankBranchID(PyCThostFtdcNotifyFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyFutureSignOutField_get_BrokerID(PyCThostFtdcNotifyFutureSignOutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///期商代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcNotifyFutureSignOutField_set_BrokerID(PyCThostFtdcNotifyFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyFutureSignOutField_get_BrokerBranchID(PyCThostFtdcNotifyFutureSignOutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerBranchID, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
    return PyBytes_FromString(self->data.BrokerBranchID);
}

///期商分支机构代码
// TThostFtdcFutureBranchIDType char[31]
static int PyCThostFtdcNotifyFutureSignOutField_set_BrokerBranchID(PyCThostFtdcNotifyFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyFutureSignOutField_get_TradeDate(PyCThostFtdcNotifyFutureSignOutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeDate, (Py_ssize_t)sizeof(self->data.TradeDate));
    return PyBytes_FromString(self->data.TradeDate);
}

///交易日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcNotifyFutureSignOutField_set_TradeDate(PyCThostFtdcNotifyFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyFutureSignOutField_get_TradeTime(PyCThostFtdcNotifyFutureSignOutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeTime, (Py_ssize_t)sizeof(self->data.TradeTime));
    return PyBytes_FromString(self->data.TradeTime);
}

///交易时间
// TThostFtdcTradeTimeType char[9]
static int PyCThostFtdcNotifyFutureSignOutField_set_TradeTime(PyCThostFtdcNotifyFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyFutureSignOutField_get_BankSerial(PyCThostFtdcNotifyFutureSignOutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankSerial, (Py_ssize_t)sizeof(self->data.BankSerial));
    return PyBytes_FromString(self->data.BankSerial);
}

///银行流水号
// TThostFtdcBankSerialType char[13]
static int PyCThostFtdcNotifyFutureSignOutField_set_BankSerial(PyCThostFtdcNotifyFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyFutureSignOutField_get_TradingDay(PyCThostFtdcNotifyFutureSignOutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易系统日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcNotifyFutureSignOutField_set_TradingDay(PyCThostFtdcNotifyFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyFutureSignOutField_get_PlateSerial(PyCThostFtdcNotifyFutureSignOutField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.PlateSerial);
#else
    return PyInt_FromLong(self->data.PlateSerial);
#endif
}

///银期平台消息流水号
// TThostFtdcSerialType int
static int PyCThostFtdcNotifyFutureSignOutField_set_PlateSerial(PyCThostFtdcNotifyFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyFutureSignOutField_get_LastFragment(PyCThostFtdcNotifyFutureSignOutField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

///最后分片标志
// TThostFtdcLastFragmentType char
static int PyCThostFtdcNotifyFutureSignOutField_set_LastFragment(PyCThostFtdcNotifyFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyFutureSignOutField_get_SessionID(PyCThostFtdcNotifyFutureSignOutField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话号
// TThostFtdcSessionIDType int
static int PyCThostFtdcNotifyFutureSignOutField_set_SessionID(PyCThostFtdcNotifyFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyFutureSignOutField_get_InstallID(PyCThostFtdcNotifyFutureSignOutField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcNotifyFutureSignOutField_set_InstallID(PyCThostFtdcNotifyFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyFutureSignOutField_get_UserID(PyCThostFtdcNotifyFutureSignOutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户标识
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcNotifyFutureSignOutField_set_UserID(PyCThostFtdcNotifyFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyFutureSignOutField_get_Digest(PyCThostFtdcNotifyFutureSignOutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Digest, (Py_ssize_t)sizeof(self->data.Digest));
    return PyBytes_FromString(self->data.Digest);
}

///摘要
// TThostFtdcDigestType char[36]
static int PyCThostFtdcNotifyFutureSignOutField_set_Digest(PyCThostFtdcNotifyFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyFutureSignOutField_get_CurrencyID(PyCThostFtdcNotifyFutureSignOutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcNotifyFutureSignOutField_set_CurrencyID(PyCThostFtdcNotifyFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyFutureSignOutField_get_DeviceID(PyCThostFtdcNotifyFutureSignOutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.DeviceID, (Py_ssize_t)sizeof(self->data.DeviceID));
    return PyBytes_FromString(self->data.DeviceID);
}

///渠道标志
// TThostFtdcDeviceIDType char[3]
static int PyCThostFtdcNotifyFutureSignOutField_set_DeviceID(PyCThostFtdcNotifyFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyFutureSignOutField_get_BrokerIDByBank(PyCThostFtdcNotifyFutureSignOutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerIDByBank, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
    return PyBytes_FromString(self->data.BrokerIDByBank);
}

///期货公司银行编码
// TThostFtdcBankCodingForFutureType char[33]
static int PyCThostFtdcNotifyFutureSignOutField_set_BrokerIDByBank(PyCThostFtdcNotifyFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyFutureSignOutField_get_OperNo(PyCThostFtdcNotifyFutureSignOutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OperNo, (Py_ssize_t)sizeof(self->data.OperNo));
    return PyBytes_FromString(self->data.OperNo);
}

///交易柜员
// TThostFtdcOperNoType char[17]
static int PyCThostFtdcNotifyFutureSignOutField_set_OperNo(PyCThostFtdcNotifyFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyFutureSignOutField_get_RequestID(PyCThostFtdcNotifyFutureSignOutField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcNotifyFutureSignOutField_set_RequestID(PyCThostFtdcNotifyFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyFutureSignOutField_get_TID(PyCThostFtdcNotifyFutureSignOutField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.TID);
#else
    return PyInt_FromLong(self->data.TID);
#endif
}

///交易ID
// TThostFtdcTIDType int
static int PyCThostFtdcNotifyFutureSignOutField_set_TID(PyCThostFtdcNotifyFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyFutureSignOutField_get_ErrorID(PyCThostFtdcNotifyFutureSignOutField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.ErrorID);
#else
    return PyInt_FromLong(self->data.ErrorID);
#endif
}

///错误代码
// TThostFtdcErrorIDType int
static int PyCThostFtdcNotifyFutureSignOutField_set_ErrorID(PyCThostFtdcNotifyFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifyFutureSignOutField_get_ErrorMsg(PyCThostFtdcNotifyFutureSignOutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ErrorMsg, (Py_ssize_t)sizeof(self->data.ErrorMsg));
    return PyBytes_FromString(self->data.ErrorMsg);
}

///错误信息
// TThostFtdcErrorMsgType char[81]
static int PyCThostFtdcNotifyFutureSignOutField_set_ErrorMsg(PyCThostFtdcNotifyFutureSignOutField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcNotifyFutureSignOutField_getset[] = {
    ///业务功能码 
    {(char *)"TradeCode", (getter)PyCThostFtdcNotifyFutureSignOutField_get_TradeCode, (setter)PyCThostFtdcNotifyFutureSignOutField_set_TradeCode, (char *)"TradeCode", NULL},
    ///银行代码 
    {(char *)"BankID", (getter)PyCThostFtdcNotifyFutureSignOutField_get_BankID, (setter)PyCThostFtdcNotifyFutureSignOutField_set_BankID, (char *)"BankID", NULL},
    ///银行分支机构代码 
    {(char *)"BankBranchID", (getter)PyCThostFtdcNotifyFutureSignOutField_get_BankBranchID, (setter)PyCThostFtdcNotifyFutureSignOutField_set_BankBranchID, (char *)"BankBranchID", NULL},
    ///期商代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcNotifyFutureSignOutField_get_BrokerID, (setter)PyCThostFtdcNotifyFutureSignOutField_set_BrokerID, (char *)"BrokerID", NULL},
    ///期商分支机构代码 
    {(char *)"BrokerBranchID", (getter)PyCThostFtdcNotifyFutureSignOutField_get_BrokerBranchID, (setter)PyCThostFtdcNotifyFutureSignOutField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
    ///交易日期 
    {(char *)"TradeDate", (getter)PyCThostFtdcNotifyFutureSignOutField_get_TradeDate, (setter)PyCThostFtdcNotifyFutureSignOutField_set_TradeDate, (char *)"TradeDate", NULL},
    ///交易时间 
    {(char *)"TradeTime", (getter)PyCThostFtdcNotifyFutureSignOutField_get_TradeTime, (setter)PyCThostFtdcNotifyFutureSignOutField_set_TradeTime, (char *)"TradeTime", NULL},
    ///银行流水号 
    {(char *)"BankSerial", (getter)PyCThostFtdcNotifyFutureSignOutField_get_BankSerial, (setter)PyCThostFtdcNotifyFutureSignOutField_set_BankSerial, (char *)"BankSerial", NULL},
    ///交易系统日期 
    {(char *)"TradingDay", (getter)PyCThostFtdcNotifyFutureSignOutField_get_TradingDay, (setter)PyCThostFtdcNotifyFutureSignOutField_set_TradingDay, (char *)"TradingDay", NULL},
    ///银期平台消息流水号 
    {(char *)"PlateSerial", (getter)PyCThostFtdcNotifyFutureSignOutField_get_PlateSerial, (setter)PyCThostFtdcNotifyFutureSignOutField_set_PlateSerial, (char *)"PlateSerial", NULL},
    ///最后分片标志 
    {(char *)"LastFragment", (getter)PyCThostFtdcNotifyFutureSignOutField_get_LastFragment, (setter)PyCThostFtdcNotifyFutureSignOutField_set_LastFragment, (char *)"LastFragment", NULL},
    ///会话号 
    {(char *)"SessionID", (getter)PyCThostFtdcNotifyFutureSignOutField_get_SessionID, (setter)PyCThostFtdcNotifyFutureSignOutField_set_SessionID, (char *)"SessionID", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcNotifyFutureSignOutField_get_InstallID, (setter)PyCThostFtdcNotifyFutureSignOutField_set_InstallID, (char *)"InstallID", NULL},
    ///用户标识 
    {(char *)"UserID", (getter)PyCThostFtdcNotifyFutureSignOutField_get_UserID, (setter)PyCThostFtdcNotifyFutureSignOutField_set_UserID, (char *)"UserID", NULL},
    ///摘要 
    {(char *)"Digest", (getter)PyCThostFtdcNotifyFutureSignOutField_get_Digest, (setter)PyCThostFtdcNotifyFutureSignOutField_set_Digest, (char *)"Digest", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcNotifyFutureSignOutField_get_CurrencyID, (setter)PyCThostFtdcNotifyFutureSignOutField_set_CurrencyID, (char *)"CurrencyID", NULL},
    ///渠道标志 
    {(char *)"DeviceID", (getter)PyCThostFtdcNotifyFutureSignOutField_get_DeviceID, (setter)PyCThostFtdcNotifyFutureSignOutField_set_DeviceID, (char *)"DeviceID", NULL},
    ///期货公司银行编码 
    {(char *)"BrokerIDByBank", (getter)PyCThostFtdcNotifyFutureSignOutField_get_BrokerIDByBank, (setter)PyCThostFtdcNotifyFutureSignOutField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
    ///交易柜员 
    {(char *)"OperNo", (getter)PyCThostFtdcNotifyFutureSignOutField_get_OperNo, (setter)PyCThostFtdcNotifyFutureSignOutField_set_OperNo, (char *)"OperNo", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcNotifyFutureSignOutField_get_RequestID, (setter)PyCThostFtdcNotifyFutureSignOutField_set_RequestID, (char *)"RequestID", NULL},
    ///交易ID 
    {(char *)"TID", (getter)PyCThostFtdcNotifyFutureSignOutField_get_TID, (setter)PyCThostFtdcNotifyFutureSignOutField_set_TID, (char *)"TID", NULL},
    ///错误代码 
    {(char *)"ErrorID", (getter)PyCThostFtdcNotifyFutureSignOutField_get_ErrorID, (setter)PyCThostFtdcNotifyFutureSignOutField_set_ErrorID, (char *)"ErrorID", NULL},
    ///错误信息 
    {(char *)"ErrorMsg", (getter)PyCThostFtdcNotifyFutureSignOutField_get_ErrorMsg, (setter)PyCThostFtdcNotifyFutureSignOutField_set_ErrorMsg, (char *)"ErrorMsg", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcNotifyFutureSignOutFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcNotifyFutureSignOutField",	/* tp_name */
	sizeof(PyCThostFtdcNotifyFutureSignOutField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcNotifyFutureSignOutField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcNotifyFutureSignOutField_repr,   /* tp_repr */
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
	"CThostFtdcNotifyFutureSignOutField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcNotifyFutureSignOutField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcNotifyFutureSignOutField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcNotifyFutureSignOutField_new,       /* tp_new */
};

int PyCThostFtdcNotifyFutureSignOutFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcNotifyFutureSignOutField  */
	if (PyType_Ready(&PyCThostFtdcNotifyFutureSignOutFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcNotifyFutureSignOutField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcNotifyFutureSignOutFieldType);
    if( PyModule_AddObject(module, "CThostFtdcNotifyFutureSignOutField", (PyObject *)&PyCThostFtdcNotifyFutureSignOutFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcNotifyFutureSignOutField to module");
        Py_DECREF(&PyCThostFtdcNotifyFutureSignOutFieldType);
		return -1;
    }

    return 0;
}
