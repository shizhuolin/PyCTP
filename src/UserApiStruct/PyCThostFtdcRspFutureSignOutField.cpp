
#include "PyCThostFtdcRspFutureSignOutField.h"

///期商签退响应

static PyObject *PyCThostFtdcRspFutureSignOutField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRspFutureSignOutField *self = (PyCThostFtdcRspFutureSignOutField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcRspFutureSignOutField_init(PyCThostFtdcRspFutureSignOutField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "InstallID", "UserID", "Digest", "CurrencyID", "DeviceID", "BrokerIDByBank", "OperNo", "RequestID", "TID", "ErrorID", "ErrorMsg",  NULL};


    ///业务功能码
    // TThostFtdcTradeCodeType char[7]
    const char *RspFutureSignOutField_TradeCode = NULL;
    Py_ssize_t RspFutureSignOutField_TradeCode_len = 0;
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    const char *RspFutureSignOutField_BankID = NULL;
    Py_ssize_t RspFutureSignOutField_BankID_len = 0;
            
    ///银行分支机构代码
    // TThostFtdcBankBrchIDType char[5]
    const char *RspFutureSignOutField_BankBranchID = NULL;
    Py_ssize_t RspFutureSignOutField_BankBranchID_len = 0;
            
    ///期商代码
    // TThostFtdcBrokerIDType char[11]
    const char *RspFutureSignOutField_BrokerID = NULL;
    Py_ssize_t RspFutureSignOutField_BrokerID_len = 0;
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    const char *RspFutureSignOutField_BrokerBranchID = NULL;
    Py_ssize_t RspFutureSignOutField_BrokerBranchID_len = 0;
            
    ///交易日期
    // TThostFtdcTradeDateType char[9]
    const char *RspFutureSignOutField_TradeDate = NULL;
    Py_ssize_t RspFutureSignOutField_TradeDate_len = 0;
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    const char *RspFutureSignOutField_TradeTime = NULL;
    Py_ssize_t RspFutureSignOutField_TradeTime_len = 0;
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    const char *RspFutureSignOutField_BankSerial = NULL;
    Py_ssize_t RspFutureSignOutField_BankSerial_len = 0;
            
    ///交易系统日期
    // TThostFtdcTradeDateType char[9]
    const char *RspFutureSignOutField_TradingDay = NULL;
    Py_ssize_t RspFutureSignOutField_TradingDay_len = 0;
            
    ///银期平台消息流水号
    // TThostFtdcSerialType int
    int RspFutureSignOutField_PlateSerial = 0;
        
    ///最后分片标志
    // TThostFtdcLastFragmentType char
    char RspFutureSignOutField_LastFragment = 0;
            
    ///会话号
    // TThostFtdcSessionIDType int
    int RspFutureSignOutField_SessionID = 0;
        
    ///安装编号
    // TThostFtdcInstallIDType int
    int RspFutureSignOutField_InstallID = 0;
        
    ///用户标识
    // TThostFtdcUserIDType char[16]
    const char *RspFutureSignOutField_UserID = NULL;
    Py_ssize_t RspFutureSignOutField_UserID_len = 0;
            
    ///摘要
    // TThostFtdcDigestType char[36]
    const char *RspFutureSignOutField_Digest = NULL;
    Py_ssize_t RspFutureSignOutField_Digest_len = 0;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *RspFutureSignOutField_CurrencyID = NULL;
    Py_ssize_t RspFutureSignOutField_CurrencyID_len = 0;
            
    ///渠道标志
    // TThostFtdcDeviceIDType char[3]
    const char *RspFutureSignOutField_DeviceID = NULL;
    Py_ssize_t RspFutureSignOutField_DeviceID_len = 0;
            
    ///期货公司银行编码
    // TThostFtdcBankCodingForFutureType char[33]
    const char *RspFutureSignOutField_BrokerIDByBank = NULL;
    Py_ssize_t RspFutureSignOutField_BrokerIDByBank_len = 0;
            
    ///交易柜员
    // TThostFtdcOperNoType char[17]
    const char *RspFutureSignOutField_OperNo = NULL;
    Py_ssize_t RspFutureSignOutField_OperNo_len = 0;
            
    ///请求编号
    // TThostFtdcRequestIDType int
    int RspFutureSignOutField_RequestID = 0;
        
    ///交易ID
    // TThostFtdcTIDType int
    int RspFutureSignOutField_TID = 0;
        
    ///错误代码
    // TThostFtdcErrorIDType int
    int RspFutureSignOutField_ErrorID = 0;
        
    ///错误信息
    // TThostFtdcErrorMsgType char[81]
    const char *RspFutureSignOutField_ErrorMsg = NULL;
    Py_ssize_t RspFutureSignOutField_ErrorMsg_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciiy#y#y#y#y#y#iiiy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#iciis#s#s#s#s#s#iiis#", (char **)kwlist
#endif

        , &RspFutureSignOutField_TradeCode, &RspFutureSignOutField_TradeCode_len 
        , &RspFutureSignOutField_BankID, &RspFutureSignOutField_BankID_len 
        , &RspFutureSignOutField_BankBranchID, &RspFutureSignOutField_BankBranchID_len 
        , &RspFutureSignOutField_BrokerID, &RspFutureSignOutField_BrokerID_len 
        , &RspFutureSignOutField_BrokerBranchID, &RspFutureSignOutField_BrokerBranchID_len 
        , &RspFutureSignOutField_TradeDate, &RspFutureSignOutField_TradeDate_len 
        , &RspFutureSignOutField_TradeTime, &RspFutureSignOutField_TradeTime_len 
        , &RspFutureSignOutField_BankSerial, &RspFutureSignOutField_BankSerial_len 
        , &RspFutureSignOutField_TradingDay, &RspFutureSignOutField_TradingDay_len 
        , &RspFutureSignOutField_PlateSerial 
        , &RspFutureSignOutField_LastFragment 
        , &RspFutureSignOutField_SessionID 
        , &RspFutureSignOutField_InstallID 
        , &RspFutureSignOutField_UserID, &RspFutureSignOutField_UserID_len 
        , &RspFutureSignOutField_Digest, &RspFutureSignOutField_Digest_len 
        , &RspFutureSignOutField_CurrencyID, &RspFutureSignOutField_CurrencyID_len 
        , &RspFutureSignOutField_DeviceID, &RspFutureSignOutField_DeviceID_len 
        , &RspFutureSignOutField_BrokerIDByBank, &RspFutureSignOutField_BrokerIDByBank_len 
        , &RspFutureSignOutField_OperNo, &RspFutureSignOutField_OperNo_len 
        , &RspFutureSignOutField_RequestID 
        , &RspFutureSignOutField_TID 
        , &RspFutureSignOutField_ErrorID 
        , &RspFutureSignOutField_ErrorMsg, &RspFutureSignOutField_ErrorMsg_len 


    )) {
        return -1;
    }


    ///业务功能码
    // TThostFtdcTradeCodeType char[7]
    if( RspFutureSignOutField_TradeCode != NULL ) {
        if(RspFutureSignOutField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", RspFutureSignOutField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
            return -1;
        }
        // memset(self->data.TradeCode, 0, sizeof(self->data.TradeCode));
        // memcpy(self->data.TradeCode, RspFutureSignOutField_TradeCode, RspFutureSignOutField_TradeCode_len);        
        strncpy(self->data.TradeCode, RspFutureSignOutField_TradeCode, sizeof(self->data.TradeCode) );
        RspFutureSignOutField_TradeCode = NULL;
    }
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    if( RspFutureSignOutField_BankID != NULL ) {
        if(RspFutureSignOutField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", RspFutureSignOutField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
            return -1;
        }
        // memset(self->data.BankID, 0, sizeof(self->data.BankID));
        // memcpy(self->data.BankID, RspFutureSignOutField_BankID, RspFutureSignOutField_BankID_len);        
        strncpy(self->data.BankID, RspFutureSignOutField_BankID, sizeof(self->data.BankID) );
        RspFutureSignOutField_BankID = NULL;
    }
            
    ///银行分支机构代码
    // TThostFtdcBankBrchIDType char[5]
    if( RspFutureSignOutField_BankBranchID != NULL ) {
        if(RspFutureSignOutField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", RspFutureSignOutField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
            return -1;
        }
        // memset(self->data.BankBranchID, 0, sizeof(self->data.BankBranchID));
        // memcpy(self->data.BankBranchID, RspFutureSignOutField_BankBranchID, RspFutureSignOutField_BankBranchID_len);        
        strncpy(self->data.BankBranchID, RspFutureSignOutField_BankBranchID, sizeof(self->data.BankBranchID) );
        RspFutureSignOutField_BankBranchID = NULL;
    }
            
    ///期商代码
    // TThostFtdcBrokerIDType char[11]
    if( RspFutureSignOutField_BrokerID != NULL ) {
        if(RspFutureSignOutField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", RspFutureSignOutField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, RspFutureSignOutField_BrokerID, RspFutureSignOutField_BrokerID_len);        
        strncpy(self->data.BrokerID, RspFutureSignOutField_BrokerID, sizeof(self->data.BrokerID) );
        RspFutureSignOutField_BrokerID = NULL;
    }
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    if( RspFutureSignOutField_BrokerBranchID != NULL ) {
        if(RspFutureSignOutField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", RspFutureSignOutField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
            return -1;
        }
        // memset(self->data.BrokerBranchID, 0, sizeof(self->data.BrokerBranchID));
        // memcpy(self->data.BrokerBranchID, RspFutureSignOutField_BrokerBranchID, RspFutureSignOutField_BrokerBranchID_len);        
        strncpy(self->data.BrokerBranchID, RspFutureSignOutField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
        RspFutureSignOutField_BrokerBranchID = NULL;
    }
            
    ///交易日期
    // TThostFtdcTradeDateType char[9]
    if( RspFutureSignOutField_TradeDate != NULL ) {
        if(RspFutureSignOutField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", RspFutureSignOutField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
            return -1;
        }
        // memset(self->data.TradeDate, 0, sizeof(self->data.TradeDate));
        // memcpy(self->data.TradeDate, RspFutureSignOutField_TradeDate, RspFutureSignOutField_TradeDate_len);        
        strncpy(self->data.TradeDate, RspFutureSignOutField_TradeDate, sizeof(self->data.TradeDate) );
        RspFutureSignOutField_TradeDate = NULL;
    }
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    if( RspFutureSignOutField_TradeTime != NULL ) {
        if(RspFutureSignOutField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", RspFutureSignOutField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
            return -1;
        }
        // memset(self->data.TradeTime, 0, sizeof(self->data.TradeTime));
        // memcpy(self->data.TradeTime, RspFutureSignOutField_TradeTime, RspFutureSignOutField_TradeTime_len);        
        strncpy(self->data.TradeTime, RspFutureSignOutField_TradeTime, sizeof(self->data.TradeTime) );
        RspFutureSignOutField_TradeTime = NULL;
    }
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    if( RspFutureSignOutField_BankSerial != NULL ) {
        if(RspFutureSignOutField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", RspFutureSignOutField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
            return -1;
        }
        // memset(self->data.BankSerial, 0, sizeof(self->data.BankSerial));
        // memcpy(self->data.BankSerial, RspFutureSignOutField_BankSerial, RspFutureSignOutField_BankSerial_len);        
        strncpy(self->data.BankSerial, RspFutureSignOutField_BankSerial, sizeof(self->data.BankSerial) );
        RspFutureSignOutField_BankSerial = NULL;
    }
            
    ///交易系统日期
    // TThostFtdcTradeDateType char[9]
    if( RspFutureSignOutField_TradingDay != NULL ) {
        if(RspFutureSignOutField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", RspFutureSignOutField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, RspFutureSignOutField_TradingDay, RspFutureSignOutField_TradingDay_len);        
        strncpy(self->data.TradingDay, RspFutureSignOutField_TradingDay, sizeof(self->data.TradingDay) );
        RspFutureSignOutField_TradingDay = NULL;
    }
            
    ///银期平台消息流水号
    // TThostFtdcSerialType int
    self->data.PlateSerial = RspFutureSignOutField_PlateSerial;
        
    ///最后分片标志
    // TThostFtdcLastFragmentType char
    self->data.LastFragment = RspFutureSignOutField_LastFragment;
            
    ///会话号
    // TThostFtdcSessionIDType int
    self->data.SessionID = RspFutureSignOutField_SessionID;
        
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = RspFutureSignOutField_InstallID;
        
    ///用户标识
    // TThostFtdcUserIDType char[16]
    if( RspFutureSignOutField_UserID != NULL ) {
        if(RspFutureSignOutField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", RspFutureSignOutField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, RspFutureSignOutField_UserID, RspFutureSignOutField_UserID_len);        
        strncpy(self->data.UserID, RspFutureSignOutField_UserID, sizeof(self->data.UserID) );
        RspFutureSignOutField_UserID = NULL;
    }
            
    ///摘要
    // TThostFtdcDigestType char[36]
    if( RspFutureSignOutField_Digest != NULL ) {
        if(RspFutureSignOutField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
            PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", RspFutureSignOutField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
            return -1;
        }
        // memset(self->data.Digest, 0, sizeof(self->data.Digest));
        // memcpy(self->data.Digest, RspFutureSignOutField_Digest, RspFutureSignOutField_Digest_len);        
        strncpy(self->data.Digest, RspFutureSignOutField_Digest, sizeof(self->data.Digest) );
        RspFutureSignOutField_Digest = NULL;
    }
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( RspFutureSignOutField_CurrencyID != NULL ) {
        if(RspFutureSignOutField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", RspFutureSignOutField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, RspFutureSignOutField_CurrencyID, RspFutureSignOutField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, RspFutureSignOutField_CurrencyID, sizeof(self->data.CurrencyID) );
        RspFutureSignOutField_CurrencyID = NULL;
    }
            
    ///渠道标志
    // TThostFtdcDeviceIDType char[3]
    if( RspFutureSignOutField_DeviceID != NULL ) {
        if(RspFutureSignOutField_DeviceID_len > (Py_ssize_t)sizeof(self->data.DeviceID)) {
            PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is %zd)", RspFutureSignOutField_DeviceID_len, (Py_ssize_t)sizeof(self->data.DeviceID));
            return -1;
        }
        // memset(self->data.DeviceID, 0, sizeof(self->data.DeviceID));
        // memcpy(self->data.DeviceID, RspFutureSignOutField_DeviceID, RspFutureSignOutField_DeviceID_len);        
        strncpy(self->data.DeviceID, RspFutureSignOutField_DeviceID, sizeof(self->data.DeviceID) );
        RspFutureSignOutField_DeviceID = NULL;
    }
            
    ///期货公司银行编码
    // TThostFtdcBankCodingForFutureType char[33]
    if( RspFutureSignOutField_BrokerIDByBank != NULL ) {
        if(RspFutureSignOutField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
            PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", RspFutureSignOutField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
            return -1;
        }
        // memset(self->data.BrokerIDByBank, 0, sizeof(self->data.BrokerIDByBank));
        // memcpy(self->data.BrokerIDByBank, RspFutureSignOutField_BrokerIDByBank, RspFutureSignOutField_BrokerIDByBank_len);        
        strncpy(self->data.BrokerIDByBank, RspFutureSignOutField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
        RspFutureSignOutField_BrokerIDByBank = NULL;
    }
            
    ///交易柜员
    // TThostFtdcOperNoType char[17]
    if( RspFutureSignOutField_OperNo != NULL ) {
        if(RspFutureSignOutField_OperNo_len > (Py_ssize_t)sizeof(self->data.OperNo)) {
            PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is %zd)", RspFutureSignOutField_OperNo_len, (Py_ssize_t)sizeof(self->data.OperNo));
            return -1;
        }
        // memset(self->data.OperNo, 0, sizeof(self->data.OperNo));
        // memcpy(self->data.OperNo, RspFutureSignOutField_OperNo, RspFutureSignOutField_OperNo_len);        
        strncpy(self->data.OperNo, RspFutureSignOutField_OperNo, sizeof(self->data.OperNo) );
        RspFutureSignOutField_OperNo = NULL;
    }
            
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = RspFutureSignOutField_RequestID;
        
    ///交易ID
    // TThostFtdcTIDType int
    self->data.TID = RspFutureSignOutField_TID;
        
    ///错误代码
    // TThostFtdcErrorIDType int
    self->data.ErrorID = RspFutureSignOutField_ErrorID;
        
    ///错误信息
    // TThostFtdcErrorMsgType char[81]
    if( RspFutureSignOutField_ErrorMsg != NULL ) {
        if(RspFutureSignOutField_ErrorMsg_len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
            PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is %zd)", RspFutureSignOutField_ErrorMsg_len, (Py_ssize_t)sizeof(self->data.ErrorMsg));
            return -1;
        }
        // memset(self->data.ErrorMsg, 0, sizeof(self->data.ErrorMsg));
        // memcpy(self->data.ErrorMsg, RspFutureSignOutField_ErrorMsg, RspFutureSignOutField_ErrorMsg_len);        
        strncpy(self->data.ErrorMsg, RspFutureSignOutField_ErrorMsg, sizeof(self->data.ErrorMsg) );
        RspFutureSignOutField_ErrorMsg = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcRspFutureSignOutField_dealloc(PyCThostFtdcRspFutureSignOutField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRspFutureSignOutField_repr(PyCThostFtdcRspFutureSignOutField *self) {

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspFutureSignOutField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///业务功能码
// TThostFtdcTradeCodeType char[7]
static PyObject *PyCThostFtdcRspFutureSignOutField_get_TradeCode(PyCThostFtdcRspFutureSignOutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeCode, (Py_ssize_t)sizeof(self->data.TradeCode));
    return PyBytes_FromString(self->data.TradeCode);
}

///业务功能码
// TThostFtdcTradeCodeType char[7]
static int PyCThostFtdcRspFutureSignOutField_set_TradeCode(PyCThostFtdcRspFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspFutureSignOutField_get_BankID(PyCThostFtdcRspFutureSignOutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankID, (Py_ssize_t)sizeof(self->data.BankID));
    return PyBytes_FromString(self->data.BankID);
}

///银行代码
// TThostFtdcBankIDType char[4]
static int PyCThostFtdcRspFutureSignOutField_set_BankID(PyCThostFtdcRspFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspFutureSignOutField_get_BankBranchID(PyCThostFtdcRspFutureSignOutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankBranchID, (Py_ssize_t)sizeof(self->data.BankBranchID));
    return PyBytes_FromString(self->data.BankBranchID);
}

///银行分支机构代码
// TThostFtdcBankBrchIDType char[5]
static int PyCThostFtdcRspFutureSignOutField_set_BankBranchID(PyCThostFtdcRspFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspFutureSignOutField_get_BrokerID(PyCThostFtdcRspFutureSignOutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///期商代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcRspFutureSignOutField_set_BrokerID(PyCThostFtdcRspFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspFutureSignOutField_get_BrokerBranchID(PyCThostFtdcRspFutureSignOutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerBranchID, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
    return PyBytes_FromString(self->data.BrokerBranchID);
}

///期商分支机构代码
// TThostFtdcFutureBranchIDType char[31]
static int PyCThostFtdcRspFutureSignOutField_set_BrokerBranchID(PyCThostFtdcRspFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspFutureSignOutField_get_TradeDate(PyCThostFtdcRspFutureSignOutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeDate, (Py_ssize_t)sizeof(self->data.TradeDate));
    return PyBytes_FromString(self->data.TradeDate);
}

///交易日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcRspFutureSignOutField_set_TradeDate(PyCThostFtdcRspFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspFutureSignOutField_get_TradeTime(PyCThostFtdcRspFutureSignOutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeTime, (Py_ssize_t)sizeof(self->data.TradeTime));
    return PyBytes_FromString(self->data.TradeTime);
}

///交易时间
// TThostFtdcTradeTimeType char[9]
static int PyCThostFtdcRspFutureSignOutField_set_TradeTime(PyCThostFtdcRspFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspFutureSignOutField_get_BankSerial(PyCThostFtdcRspFutureSignOutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankSerial, (Py_ssize_t)sizeof(self->data.BankSerial));
    return PyBytes_FromString(self->data.BankSerial);
}

///银行流水号
// TThostFtdcBankSerialType char[13]
static int PyCThostFtdcRspFutureSignOutField_set_BankSerial(PyCThostFtdcRspFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspFutureSignOutField_get_TradingDay(PyCThostFtdcRspFutureSignOutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易系统日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcRspFutureSignOutField_set_TradingDay(PyCThostFtdcRspFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspFutureSignOutField_get_PlateSerial(PyCThostFtdcRspFutureSignOutField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.PlateSerial);
#else
    return PyInt_FromLong(self->data.PlateSerial);
#endif
}

///银期平台消息流水号
// TThostFtdcSerialType int
static int PyCThostFtdcRspFutureSignOutField_set_PlateSerial(PyCThostFtdcRspFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspFutureSignOutField_get_LastFragment(PyCThostFtdcRspFutureSignOutField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

///最后分片标志
// TThostFtdcLastFragmentType char
static int PyCThostFtdcRspFutureSignOutField_set_LastFragment(PyCThostFtdcRspFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspFutureSignOutField_get_SessionID(PyCThostFtdcRspFutureSignOutField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话号
// TThostFtdcSessionIDType int
static int PyCThostFtdcRspFutureSignOutField_set_SessionID(PyCThostFtdcRspFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspFutureSignOutField_get_InstallID(PyCThostFtdcRspFutureSignOutField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcRspFutureSignOutField_set_InstallID(PyCThostFtdcRspFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspFutureSignOutField_get_UserID(PyCThostFtdcRspFutureSignOutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户标识
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcRspFutureSignOutField_set_UserID(PyCThostFtdcRspFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspFutureSignOutField_get_Digest(PyCThostFtdcRspFutureSignOutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Digest, (Py_ssize_t)sizeof(self->data.Digest));
    return PyBytes_FromString(self->data.Digest);
}

///摘要
// TThostFtdcDigestType char[36]
static int PyCThostFtdcRspFutureSignOutField_set_Digest(PyCThostFtdcRspFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspFutureSignOutField_get_CurrencyID(PyCThostFtdcRspFutureSignOutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcRspFutureSignOutField_set_CurrencyID(PyCThostFtdcRspFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspFutureSignOutField_get_DeviceID(PyCThostFtdcRspFutureSignOutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.DeviceID, (Py_ssize_t)sizeof(self->data.DeviceID));
    return PyBytes_FromString(self->data.DeviceID);
}

///渠道标志
// TThostFtdcDeviceIDType char[3]
static int PyCThostFtdcRspFutureSignOutField_set_DeviceID(PyCThostFtdcRspFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspFutureSignOutField_get_BrokerIDByBank(PyCThostFtdcRspFutureSignOutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerIDByBank, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
    return PyBytes_FromString(self->data.BrokerIDByBank);
}

///期货公司银行编码
// TThostFtdcBankCodingForFutureType char[33]
static int PyCThostFtdcRspFutureSignOutField_set_BrokerIDByBank(PyCThostFtdcRspFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspFutureSignOutField_get_OperNo(PyCThostFtdcRspFutureSignOutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OperNo, (Py_ssize_t)sizeof(self->data.OperNo));
    return PyBytes_FromString(self->data.OperNo);
}

///交易柜员
// TThostFtdcOperNoType char[17]
static int PyCThostFtdcRspFutureSignOutField_set_OperNo(PyCThostFtdcRspFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspFutureSignOutField_get_RequestID(PyCThostFtdcRspFutureSignOutField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcRspFutureSignOutField_set_RequestID(PyCThostFtdcRspFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspFutureSignOutField_get_TID(PyCThostFtdcRspFutureSignOutField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.TID);
#else
    return PyInt_FromLong(self->data.TID);
#endif
}

///交易ID
// TThostFtdcTIDType int
static int PyCThostFtdcRspFutureSignOutField_set_TID(PyCThostFtdcRspFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspFutureSignOutField_get_ErrorID(PyCThostFtdcRspFutureSignOutField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.ErrorID);
#else
    return PyInt_FromLong(self->data.ErrorID);
#endif
}

///错误代码
// TThostFtdcErrorIDType int
static int PyCThostFtdcRspFutureSignOutField_set_ErrorID(PyCThostFtdcRspFutureSignOutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspFutureSignOutField_get_ErrorMsg(PyCThostFtdcRspFutureSignOutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ErrorMsg, (Py_ssize_t)sizeof(self->data.ErrorMsg));
    return PyBytes_FromString(self->data.ErrorMsg);
}

///错误信息
// TThostFtdcErrorMsgType char[81]
static int PyCThostFtdcRspFutureSignOutField_set_ErrorMsg(PyCThostFtdcRspFutureSignOutField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcRspFutureSignOutField_getset[] = {
    ///业务功能码 
    {(char *)"TradeCode", (getter)PyCThostFtdcRspFutureSignOutField_get_TradeCode, (setter)PyCThostFtdcRspFutureSignOutField_set_TradeCode, (char *)"TradeCode", NULL},
    ///银行代码 
    {(char *)"BankID", (getter)PyCThostFtdcRspFutureSignOutField_get_BankID, (setter)PyCThostFtdcRspFutureSignOutField_set_BankID, (char *)"BankID", NULL},
    ///银行分支机构代码 
    {(char *)"BankBranchID", (getter)PyCThostFtdcRspFutureSignOutField_get_BankBranchID, (setter)PyCThostFtdcRspFutureSignOutField_set_BankBranchID, (char *)"BankBranchID", NULL},
    ///期商代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcRspFutureSignOutField_get_BrokerID, (setter)PyCThostFtdcRspFutureSignOutField_set_BrokerID, (char *)"BrokerID", NULL},
    ///期商分支机构代码 
    {(char *)"BrokerBranchID", (getter)PyCThostFtdcRspFutureSignOutField_get_BrokerBranchID, (setter)PyCThostFtdcRspFutureSignOutField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
    ///交易日期 
    {(char *)"TradeDate", (getter)PyCThostFtdcRspFutureSignOutField_get_TradeDate, (setter)PyCThostFtdcRspFutureSignOutField_set_TradeDate, (char *)"TradeDate", NULL},
    ///交易时间 
    {(char *)"TradeTime", (getter)PyCThostFtdcRspFutureSignOutField_get_TradeTime, (setter)PyCThostFtdcRspFutureSignOutField_set_TradeTime, (char *)"TradeTime", NULL},
    ///银行流水号 
    {(char *)"BankSerial", (getter)PyCThostFtdcRspFutureSignOutField_get_BankSerial, (setter)PyCThostFtdcRspFutureSignOutField_set_BankSerial, (char *)"BankSerial", NULL},
    ///交易系统日期 
    {(char *)"TradingDay", (getter)PyCThostFtdcRspFutureSignOutField_get_TradingDay, (setter)PyCThostFtdcRspFutureSignOutField_set_TradingDay, (char *)"TradingDay", NULL},
    ///银期平台消息流水号 
    {(char *)"PlateSerial", (getter)PyCThostFtdcRspFutureSignOutField_get_PlateSerial, (setter)PyCThostFtdcRspFutureSignOutField_set_PlateSerial, (char *)"PlateSerial", NULL},
    ///最后分片标志 
    {(char *)"LastFragment", (getter)PyCThostFtdcRspFutureSignOutField_get_LastFragment, (setter)PyCThostFtdcRspFutureSignOutField_set_LastFragment, (char *)"LastFragment", NULL},
    ///会话号 
    {(char *)"SessionID", (getter)PyCThostFtdcRspFutureSignOutField_get_SessionID, (setter)PyCThostFtdcRspFutureSignOutField_set_SessionID, (char *)"SessionID", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcRspFutureSignOutField_get_InstallID, (setter)PyCThostFtdcRspFutureSignOutField_set_InstallID, (char *)"InstallID", NULL},
    ///用户标识 
    {(char *)"UserID", (getter)PyCThostFtdcRspFutureSignOutField_get_UserID, (setter)PyCThostFtdcRspFutureSignOutField_set_UserID, (char *)"UserID", NULL},
    ///摘要 
    {(char *)"Digest", (getter)PyCThostFtdcRspFutureSignOutField_get_Digest, (setter)PyCThostFtdcRspFutureSignOutField_set_Digest, (char *)"Digest", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcRspFutureSignOutField_get_CurrencyID, (setter)PyCThostFtdcRspFutureSignOutField_set_CurrencyID, (char *)"CurrencyID", NULL},
    ///渠道标志 
    {(char *)"DeviceID", (getter)PyCThostFtdcRspFutureSignOutField_get_DeviceID, (setter)PyCThostFtdcRspFutureSignOutField_set_DeviceID, (char *)"DeviceID", NULL},
    ///期货公司银行编码 
    {(char *)"BrokerIDByBank", (getter)PyCThostFtdcRspFutureSignOutField_get_BrokerIDByBank, (setter)PyCThostFtdcRspFutureSignOutField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
    ///交易柜员 
    {(char *)"OperNo", (getter)PyCThostFtdcRspFutureSignOutField_get_OperNo, (setter)PyCThostFtdcRspFutureSignOutField_set_OperNo, (char *)"OperNo", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcRspFutureSignOutField_get_RequestID, (setter)PyCThostFtdcRspFutureSignOutField_set_RequestID, (char *)"RequestID", NULL},
    ///交易ID 
    {(char *)"TID", (getter)PyCThostFtdcRspFutureSignOutField_get_TID, (setter)PyCThostFtdcRspFutureSignOutField_set_TID, (char *)"TID", NULL},
    ///错误代码 
    {(char *)"ErrorID", (getter)PyCThostFtdcRspFutureSignOutField_get_ErrorID, (setter)PyCThostFtdcRspFutureSignOutField_set_ErrorID, (char *)"ErrorID", NULL},
    ///错误信息 
    {(char *)"ErrorMsg", (getter)PyCThostFtdcRspFutureSignOutField_get_ErrorMsg, (setter)PyCThostFtdcRspFutureSignOutField_set_ErrorMsg, (char *)"ErrorMsg", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRspFutureSignOutFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRspFutureSignOutField",	/* tp_name */
	sizeof(PyCThostFtdcRspFutureSignOutField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRspFutureSignOutField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRspFutureSignOutField_repr,   /* tp_repr */
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
	"CThostFtdcRspFutureSignOutField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRspFutureSignOutField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRspFutureSignOutField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRspFutureSignOutField_new,       /* tp_new */
};

int PyCThostFtdcRspFutureSignOutFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRspFutureSignOutField  */
	if (PyType_Ready(&PyCThostFtdcRspFutureSignOutFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRspFutureSignOutField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRspFutureSignOutFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRspFutureSignOutField", (PyObject *)&PyCThostFtdcRspFutureSignOutFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRspFutureSignOutField to module");
        Py_DECREF(&PyCThostFtdcRspFutureSignOutFieldType);
		return -1;
    }

    return 0;
}
