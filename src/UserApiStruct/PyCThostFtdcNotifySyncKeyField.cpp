
#include "PyCThostFtdcNotifySyncKeyField.h"

///交易核心向银期报盘发出密钥同步处理结果的通知

static PyObject *PyCThostFtdcNotifySyncKeyField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcNotifySyncKeyField *self = (PyCThostFtdcNotifySyncKeyField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcNotifySyncKeyField_init(PyCThostFtdcNotifySyncKeyField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "InstallID", "UserID", "Message", "DeviceID", "BrokerIDByBank", "OperNo", "RequestID", "TID", "ErrorID", "ErrorMsg",  NULL};


    ///业务功能码
    // TThostFtdcTradeCodeType char[7]
    const char *NotifySyncKeyField_TradeCode = NULL;
    Py_ssize_t NotifySyncKeyField_TradeCode_len = 0;
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    const char *NotifySyncKeyField_BankID = NULL;
    Py_ssize_t NotifySyncKeyField_BankID_len = 0;
            
    ///银行分支机构代码
    // TThostFtdcBankBrchIDType char[5]
    const char *NotifySyncKeyField_BankBranchID = NULL;
    Py_ssize_t NotifySyncKeyField_BankBranchID_len = 0;
            
    ///期商代码
    // TThostFtdcBrokerIDType char[11]
    const char *NotifySyncKeyField_BrokerID = NULL;
    Py_ssize_t NotifySyncKeyField_BrokerID_len = 0;
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    const char *NotifySyncKeyField_BrokerBranchID = NULL;
    Py_ssize_t NotifySyncKeyField_BrokerBranchID_len = 0;
            
    ///交易日期
    // TThostFtdcTradeDateType char[9]
    const char *NotifySyncKeyField_TradeDate = NULL;
    Py_ssize_t NotifySyncKeyField_TradeDate_len = 0;
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    const char *NotifySyncKeyField_TradeTime = NULL;
    Py_ssize_t NotifySyncKeyField_TradeTime_len = 0;
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    const char *NotifySyncKeyField_BankSerial = NULL;
    Py_ssize_t NotifySyncKeyField_BankSerial_len = 0;
            
    ///交易系统日期
    // TThostFtdcTradeDateType char[9]
    const char *NotifySyncKeyField_TradingDay = NULL;
    Py_ssize_t NotifySyncKeyField_TradingDay_len = 0;
            
    ///银期平台消息流水号
    // TThostFtdcSerialType int
    int NotifySyncKeyField_PlateSerial = 0;
        
    ///最后分片标志
    // TThostFtdcLastFragmentType char
    char NotifySyncKeyField_LastFragment = 0;
            
    ///会话号
    // TThostFtdcSessionIDType int
    int NotifySyncKeyField_SessionID = 0;
        
    ///安装编号
    // TThostFtdcInstallIDType int
    int NotifySyncKeyField_InstallID = 0;
        
    ///用户标识
    // TThostFtdcUserIDType char[16]
    const char *NotifySyncKeyField_UserID = NULL;
    Py_ssize_t NotifySyncKeyField_UserID_len = 0;
            
    ///交易核心给银期报盘的消息
    // TThostFtdcAddInfoType char[129]
    const char *NotifySyncKeyField_Message = NULL;
    Py_ssize_t NotifySyncKeyField_Message_len = 0;
            
    ///渠道标志
    // TThostFtdcDeviceIDType char[3]
    const char *NotifySyncKeyField_DeviceID = NULL;
    Py_ssize_t NotifySyncKeyField_DeviceID_len = 0;
            
    ///期货公司银行编码
    // TThostFtdcBankCodingForFutureType char[33]
    const char *NotifySyncKeyField_BrokerIDByBank = NULL;
    Py_ssize_t NotifySyncKeyField_BrokerIDByBank_len = 0;
            
    ///交易柜员
    // TThostFtdcOperNoType char[17]
    const char *NotifySyncKeyField_OperNo = NULL;
    Py_ssize_t NotifySyncKeyField_OperNo_len = 0;
            
    ///请求编号
    // TThostFtdcRequestIDType int
    int NotifySyncKeyField_RequestID = 0;
        
    ///交易ID
    // TThostFtdcTIDType int
    int NotifySyncKeyField_TID = 0;
        
    ///错误代码
    // TThostFtdcErrorIDType int
    int NotifySyncKeyField_ErrorID = 0;
        
    ///错误信息
    // TThostFtdcErrorMsgType char[81]
    const char *NotifySyncKeyField_ErrorMsg = NULL;
    Py_ssize_t NotifySyncKeyField_ErrorMsg_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciiy#y#y#y#y#iiiy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#iciis#s#s#s#s#iiis#", (char **)kwlist
#endif

        , &NotifySyncKeyField_TradeCode, &NotifySyncKeyField_TradeCode_len 
        , &NotifySyncKeyField_BankID, &NotifySyncKeyField_BankID_len 
        , &NotifySyncKeyField_BankBranchID, &NotifySyncKeyField_BankBranchID_len 
        , &NotifySyncKeyField_BrokerID, &NotifySyncKeyField_BrokerID_len 
        , &NotifySyncKeyField_BrokerBranchID, &NotifySyncKeyField_BrokerBranchID_len 
        , &NotifySyncKeyField_TradeDate, &NotifySyncKeyField_TradeDate_len 
        , &NotifySyncKeyField_TradeTime, &NotifySyncKeyField_TradeTime_len 
        , &NotifySyncKeyField_BankSerial, &NotifySyncKeyField_BankSerial_len 
        , &NotifySyncKeyField_TradingDay, &NotifySyncKeyField_TradingDay_len 
        , &NotifySyncKeyField_PlateSerial 
        , &NotifySyncKeyField_LastFragment 
        , &NotifySyncKeyField_SessionID 
        , &NotifySyncKeyField_InstallID 
        , &NotifySyncKeyField_UserID, &NotifySyncKeyField_UserID_len 
        , &NotifySyncKeyField_Message, &NotifySyncKeyField_Message_len 
        , &NotifySyncKeyField_DeviceID, &NotifySyncKeyField_DeviceID_len 
        , &NotifySyncKeyField_BrokerIDByBank, &NotifySyncKeyField_BrokerIDByBank_len 
        , &NotifySyncKeyField_OperNo, &NotifySyncKeyField_OperNo_len 
        , &NotifySyncKeyField_RequestID 
        , &NotifySyncKeyField_TID 
        , &NotifySyncKeyField_ErrorID 
        , &NotifySyncKeyField_ErrorMsg, &NotifySyncKeyField_ErrorMsg_len 


    )) {
        return -1;
    }


    ///业务功能码
    // TThostFtdcTradeCodeType char[7]
    if( NotifySyncKeyField_TradeCode != NULL ) {
        if(NotifySyncKeyField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", NotifySyncKeyField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
            return -1;
        }
        // memset(self->data.TradeCode, 0, sizeof(self->data.TradeCode));
        // memcpy(self->data.TradeCode, NotifySyncKeyField_TradeCode, NotifySyncKeyField_TradeCode_len);        
        strncpy(self->data.TradeCode, NotifySyncKeyField_TradeCode, sizeof(self->data.TradeCode) );
        NotifySyncKeyField_TradeCode = NULL;
    }
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    if( NotifySyncKeyField_BankID != NULL ) {
        if(NotifySyncKeyField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", NotifySyncKeyField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
            return -1;
        }
        // memset(self->data.BankID, 0, sizeof(self->data.BankID));
        // memcpy(self->data.BankID, NotifySyncKeyField_BankID, NotifySyncKeyField_BankID_len);        
        strncpy(self->data.BankID, NotifySyncKeyField_BankID, sizeof(self->data.BankID) );
        NotifySyncKeyField_BankID = NULL;
    }
            
    ///银行分支机构代码
    // TThostFtdcBankBrchIDType char[5]
    if( NotifySyncKeyField_BankBranchID != NULL ) {
        if(NotifySyncKeyField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", NotifySyncKeyField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
            return -1;
        }
        // memset(self->data.BankBranchID, 0, sizeof(self->data.BankBranchID));
        // memcpy(self->data.BankBranchID, NotifySyncKeyField_BankBranchID, NotifySyncKeyField_BankBranchID_len);        
        strncpy(self->data.BankBranchID, NotifySyncKeyField_BankBranchID, sizeof(self->data.BankBranchID) );
        NotifySyncKeyField_BankBranchID = NULL;
    }
            
    ///期商代码
    // TThostFtdcBrokerIDType char[11]
    if( NotifySyncKeyField_BrokerID != NULL ) {
        if(NotifySyncKeyField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", NotifySyncKeyField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, NotifySyncKeyField_BrokerID, NotifySyncKeyField_BrokerID_len);        
        strncpy(self->data.BrokerID, NotifySyncKeyField_BrokerID, sizeof(self->data.BrokerID) );
        NotifySyncKeyField_BrokerID = NULL;
    }
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    if( NotifySyncKeyField_BrokerBranchID != NULL ) {
        if(NotifySyncKeyField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", NotifySyncKeyField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
            return -1;
        }
        // memset(self->data.BrokerBranchID, 0, sizeof(self->data.BrokerBranchID));
        // memcpy(self->data.BrokerBranchID, NotifySyncKeyField_BrokerBranchID, NotifySyncKeyField_BrokerBranchID_len);        
        strncpy(self->data.BrokerBranchID, NotifySyncKeyField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
        NotifySyncKeyField_BrokerBranchID = NULL;
    }
            
    ///交易日期
    // TThostFtdcTradeDateType char[9]
    if( NotifySyncKeyField_TradeDate != NULL ) {
        if(NotifySyncKeyField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", NotifySyncKeyField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
            return -1;
        }
        // memset(self->data.TradeDate, 0, sizeof(self->data.TradeDate));
        // memcpy(self->data.TradeDate, NotifySyncKeyField_TradeDate, NotifySyncKeyField_TradeDate_len);        
        strncpy(self->data.TradeDate, NotifySyncKeyField_TradeDate, sizeof(self->data.TradeDate) );
        NotifySyncKeyField_TradeDate = NULL;
    }
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    if( NotifySyncKeyField_TradeTime != NULL ) {
        if(NotifySyncKeyField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", NotifySyncKeyField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
            return -1;
        }
        // memset(self->data.TradeTime, 0, sizeof(self->data.TradeTime));
        // memcpy(self->data.TradeTime, NotifySyncKeyField_TradeTime, NotifySyncKeyField_TradeTime_len);        
        strncpy(self->data.TradeTime, NotifySyncKeyField_TradeTime, sizeof(self->data.TradeTime) );
        NotifySyncKeyField_TradeTime = NULL;
    }
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    if( NotifySyncKeyField_BankSerial != NULL ) {
        if(NotifySyncKeyField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", NotifySyncKeyField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
            return -1;
        }
        // memset(self->data.BankSerial, 0, sizeof(self->data.BankSerial));
        // memcpy(self->data.BankSerial, NotifySyncKeyField_BankSerial, NotifySyncKeyField_BankSerial_len);        
        strncpy(self->data.BankSerial, NotifySyncKeyField_BankSerial, sizeof(self->data.BankSerial) );
        NotifySyncKeyField_BankSerial = NULL;
    }
            
    ///交易系统日期
    // TThostFtdcTradeDateType char[9]
    if( NotifySyncKeyField_TradingDay != NULL ) {
        if(NotifySyncKeyField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", NotifySyncKeyField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, NotifySyncKeyField_TradingDay, NotifySyncKeyField_TradingDay_len);        
        strncpy(self->data.TradingDay, NotifySyncKeyField_TradingDay, sizeof(self->data.TradingDay) );
        NotifySyncKeyField_TradingDay = NULL;
    }
            
    ///银期平台消息流水号
    // TThostFtdcSerialType int
    self->data.PlateSerial = NotifySyncKeyField_PlateSerial;
        
    ///最后分片标志
    // TThostFtdcLastFragmentType char
    self->data.LastFragment = NotifySyncKeyField_LastFragment;
            
    ///会话号
    // TThostFtdcSessionIDType int
    self->data.SessionID = NotifySyncKeyField_SessionID;
        
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = NotifySyncKeyField_InstallID;
        
    ///用户标识
    // TThostFtdcUserIDType char[16]
    if( NotifySyncKeyField_UserID != NULL ) {
        if(NotifySyncKeyField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", NotifySyncKeyField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, NotifySyncKeyField_UserID, NotifySyncKeyField_UserID_len);        
        strncpy(self->data.UserID, NotifySyncKeyField_UserID, sizeof(self->data.UserID) );
        NotifySyncKeyField_UserID = NULL;
    }
            
    ///交易核心给银期报盘的消息
    // TThostFtdcAddInfoType char[129]
    if( NotifySyncKeyField_Message != NULL ) {
        if(NotifySyncKeyField_Message_len > (Py_ssize_t)sizeof(self->data.Message)) {
            PyErr_Format(PyExc_ValueError, "Message too long: length=%zd (max allowed is %zd)", NotifySyncKeyField_Message_len, (Py_ssize_t)sizeof(self->data.Message));
            return -1;
        }
        // memset(self->data.Message, 0, sizeof(self->data.Message));
        // memcpy(self->data.Message, NotifySyncKeyField_Message, NotifySyncKeyField_Message_len);        
        strncpy(self->data.Message, NotifySyncKeyField_Message, sizeof(self->data.Message) );
        NotifySyncKeyField_Message = NULL;
    }
            
    ///渠道标志
    // TThostFtdcDeviceIDType char[3]
    if( NotifySyncKeyField_DeviceID != NULL ) {
        if(NotifySyncKeyField_DeviceID_len > (Py_ssize_t)sizeof(self->data.DeviceID)) {
            PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is %zd)", NotifySyncKeyField_DeviceID_len, (Py_ssize_t)sizeof(self->data.DeviceID));
            return -1;
        }
        // memset(self->data.DeviceID, 0, sizeof(self->data.DeviceID));
        // memcpy(self->data.DeviceID, NotifySyncKeyField_DeviceID, NotifySyncKeyField_DeviceID_len);        
        strncpy(self->data.DeviceID, NotifySyncKeyField_DeviceID, sizeof(self->data.DeviceID) );
        NotifySyncKeyField_DeviceID = NULL;
    }
            
    ///期货公司银行编码
    // TThostFtdcBankCodingForFutureType char[33]
    if( NotifySyncKeyField_BrokerIDByBank != NULL ) {
        if(NotifySyncKeyField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
            PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", NotifySyncKeyField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
            return -1;
        }
        // memset(self->data.BrokerIDByBank, 0, sizeof(self->data.BrokerIDByBank));
        // memcpy(self->data.BrokerIDByBank, NotifySyncKeyField_BrokerIDByBank, NotifySyncKeyField_BrokerIDByBank_len);        
        strncpy(self->data.BrokerIDByBank, NotifySyncKeyField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
        NotifySyncKeyField_BrokerIDByBank = NULL;
    }
            
    ///交易柜员
    // TThostFtdcOperNoType char[17]
    if( NotifySyncKeyField_OperNo != NULL ) {
        if(NotifySyncKeyField_OperNo_len > (Py_ssize_t)sizeof(self->data.OperNo)) {
            PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is %zd)", NotifySyncKeyField_OperNo_len, (Py_ssize_t)sizeof(self->data.OperNo));
            return -1;
        }
        // memset(self->data.OperNo, 0, sizeof(self->data.OperNo));
        // memcpy(self->data.OperNo, NotifySyncKeyField_OperNo, NotifySyncKeyField_OperNo_len);        
        strncpy(self->data.OperNo, NotifySyncKeyField_OperNo, sizeof(self->data.OperNo) );
        NotifySyncKeyField_OperNo = NULL;
    }
            
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = NotifySyncKeyField_RequestID;
        
    ///交易ID
    // TThostFtdcTIDType int
    self->data.TID = NotifySyncKeyField_TID;
        
    ///错误代码
    // TThostFtdcErrorIDType int
    self->data.ErrorID = NotifySyncKeyField_ErrorID;
        
    ///错误信息
    // TThostFtdcErrorMsgType char[81]
    if( NotifySyncKeyField_ErrorMsg != NULL ) {
        if(NotifySyncKeyField_ErrorMsg_len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
            PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is %zd)", NotifySyncKeyField_ErrorMsg_len, (Py_ssize_t)sizeof(self->data.ErrorMsg));
            return -1;
        }
        // memset(self->data.ErrorMsg, 0, sizeof(self->data.ErrorMsg));
        // memcpy(self->data.ErrorMsg, NotifySyncKeyField_ErrorMsg, NotifySyncKeyField_ErrorMsg_len);        
        strncpy(self->data.ErrorMsg, NotifySyncKeyField_ErrorMsg, sizeof(self->data.ErrorMsg) );
        NotifySyncKeyField_ErrorMsg = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcNotifySyncKeyField_dealloc(PyCThostFtdcNotifySyncKeyField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcNotifySyncKeyField_repr(PyCThostFtdcNotifySyncKeyField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:i,s:i,s:i,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:i,s:s,s:s,s:s,s:s,s:s,s:i,s:i,s:i,s:s}"
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
        ,"Message", self->data.Message//, (Py_ssize_t)sizeof(self->data.Message) 
        ,"DeviceID", self->data.DeviceID//, (Py_ssize_t)sizeof(self->data.DeviceID) 
        ,"BrokerIDByBank", self->data.BrokerIDByBank//, (Py_ssize_t)sizeof(self->data.BrokerIDByBank) 
        ,"OperNo", self->data.OperNo//, (Py_ssize_t)sizeof(self->data.OperNo) 
        ,"RequestID", self->data.RequestID 
        ,"TID", self->data.TID 
        ,"ErrorID", self->data.ErrorID 
        ,"ErrorMsg", self->data.ErrorMsg//, (Py_ssize_t)sizeof(self->data.ErrorMsg) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcNotifySyncKeyField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///业务功能码
// TThostFtdcTradeCodeType char[7]
static PyObject *PyCThostFtdcNotifySyncKeyField_get_TradeCode(PyCThostFtdcNotifySyncKeyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeCode, (Py_ssize_t)sizeof(self->data.TradeCode));
    return PyBytes_FromString(self->data.TradeCode);
}

///业务功能码
// TThostFtdcTradeCodeType char[7]
static int PyCThostFtdcNotifySyncKeyField_set_TradeCode(PyCThostFtdcNotifySyncKeyField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifySyncKeyField_get_BankID(PyCThostFtdcNotifySyncKeyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankID, (Py_ssize_t)sizeof(self->data.BankID));
    return PyBytes_FromString(self->data.BankID);
}

///银行代码
// TThostFtdcBankIDType char[4]
static int PyCThostFtdcNotifySyncKeyField_set_BankID(PyCThostFtdcNotifySyncKeyField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifySyncKeyField_get_BankBranchID(PyCThostFtdcNotifySyncKeyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankBranchID, (Py_ssize_t)sizeof(self->data.BankBranchID));
    return PyBytes_FromString(self->data.BankBranchID);
}

///银行分支机构代码
// TThostFtdcBankBrchIDType char[5]
static int PyCThostFtdcNotifySyncKeyField_set_BankBranchID(PyCThostFtdcNotifySyncKeyField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifySyncKeyField_get_BrokerID(PyCThostFtdcNotifySyncKeyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///期商代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcNotifySyncKeyField_set_BrokerID(PyCThostFtdcNotifySyncKeyField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifySyncKeyField_get_BrokerBranchID(PyCThostFtdcNotifySyncKeyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerBranchID, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
    return PyBytes_FromString(self->data.BrokerBranchID);
}

///期商分支机构代码
// TThostFtdcFutureBranchIDType char[31]
static int PyCThostFtdcNotifySyncKeyField_set_BrokerBranchID(PyCThostFtdcNotifySyncKeyField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifySyncKeyField_get_TradeDate(PyCThostFtdcNotifySyncKeyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeDate, (Py_ssize_t)sizeof(self->data.TradeDate));
    return PyBytes_FromString(self->data.TradeDate);
}

///交易日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcNotifySyncKeyField_set_TradeDate(PyCThostFtdcNotifySyncKeyField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifySyncKeyField_get_TradeTime(PyCThostFtdcNotifySyncKeyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeTime, (Py_ssize_t)sizeof(self->data.TradeTime));
    return PyBytes_FromString(self->data.TradeTime);
}

///交易时间
// TThostFtdcTradeTimeType char[9]
static int PyCThostFtdcNotifySyncKeyField_set_TradeTime(PyCThostFtdcNotifySyncKeyField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifySyncKeyField_get_BankSerial(PyCThostFtdcNotifySyncKeyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankSerial, (Py_ssize_t)sizeof(self->data.BankSerial));
    return PyBytes_FromString(self->data.BankSerial);
}

///银行流水号
// TThostFtdcBankSerialType char[13]
static int PyCThostFtdcNotifySyncKeyField_set_BankSerial(PyCThostFtdcNotifySyncKeyField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifySyncKeyField_get_TradingDay(PyCThostFtdcNotifySyncKeyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易系统日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcNotifySyncKeyField_set_TradingDay(PyCThostFtdcNotifySyncKeyField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifySyncKeyField_get_PlateSerial(PyCThostFtdcNotifySyncKeyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.PlateSerial);
#else
    return PyInt_FromLong(self->data.PlateSerial);
#endif
}

///银期平台消息流水号
// TThostFtdcSerialType int
static int PyCThostFtdcNotifySyncKeyField_set_PlateSerial(PyCThostFtdcNotifySyncKeyField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifySyncKeyField_get_LastFragment(PyCThostFtdcNotifySyncKeyField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

///最后分片标志
// TThostFtdcLastFragmentType char
static int PyCThostFtdcNotifySyncKeyField_set_LastFragment(PyCThostFtdcNotifySyncKeyField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifySyncKeyField_get_SessionID(PyCThostFtdcNotifySyncKeyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话号
// TThostFtdcSessionIDType int
static int PyCThostFtdcNotifySyncKeyField_set_SessionID(PyCThostFtdcNotifySyncKeyField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifySyncKeyField_get_InstallID(PyCThostFtdcNotifySyncKeyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcNotifySyncKeyField_set_InstallID(PyCThostFtdcNotifySyncKeyField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifySyncKeyField_get_UserID(PyCThostFtdcNotifySyncKeyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户标识
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcNotifySyncKeyField_set_UserID(PyCThostFtdcNotifySyncKeyField *self, PyObject* val, void *closure) {
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
            
///交易核心给银期报盘的消息
// TThostFtdcAddInfoType char[129]
static PyObject *PyCThostFtdcNotifySyncKeyField_get_Message(PyCThostFtdcNotifySyncKeyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Message, (Py_ssize_t)sizeof(self->data.Message));
    return PyBytes_FromString(self->data.Message);
}

///交易核心给银期报盘的消息
// TThostFtdcAddInfoType char[129]
static int PyCThostFtdcNotifySyncKeyField_set_Message(PyCThostFtdcNotifySyncKeyField *self, PyObject* val, void *closure) {
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
            
///渠道标志
// TThostFtdcDeviceIDType char[3]
static PyObject *PyCThostFtdcNotifySyncKeyField_get_DeviceID(PyCThostFtdcNotifySyncKeyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.DeviceID, (Py_ssize_t)sizeof(self->data.DeviceID));
    return PyBytes_FromString(self->data.DeviceID);
}

///渠道标志
// TThostFtdcDeviceIDType char[3]
static int PyCThostFtdcNotifySyncKeyField_set_DeviceID(PyCThostFtdcNotifySyncKeyField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifySyncKeyField_get_BrokerIDByBank(PyCThostFtdcNotifySyncKeyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerIDByBank, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
    return PyBytes_FromString(self->data.BrokerIDByBank);
}

///期货公司银行编码
// TThostFtdcBankCodingForFutureType char[33]
static int PyCThostFtdcNotifySyncKeyField_set_BrokerIDByBank(PyCThostFtdcNotifySyncKeyField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifySyncKeyField_get_OperNo(PyCThostFtdcNotifySyncKeyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OperNo, (Py_ssize_t)sizeof(self->data.OperNo));
    return PyBytes_FromString(self->data.OperNo);
}

///交易柜员
// TThostFtdcOperNoType char[17]
static int PyCThostFtdcNotifySyncKeyField_set_OperNo(PyCThostFtdcNotifySyncKeyField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifySyncKeyField_get_RequestID(PyCThostFtdcNotifySyncKeyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcNotifySyncKeyField_set_RequestID(PyCThostFtdcNotifySyncKeyField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifySyncKeyField_get_TID(PyCThostFtdcNotifySyncKeyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.TID);
#else
    return PyInt_FromLong(self->data.TID);
#endif
}

///交易ID
// TThostFtdcTIDType int
static int PyCThostFtdcNotifySyncKeyField_set_TID(PyCThostFtdcNotifySyncKeyField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifySyncKeyField_get_ErrorID(PyCThostFtdcNotifySyncKeyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.ErrorID);
#else
    return PyInt_FromLong(self->data.ErrorID);
#endif
}

///错误代码
// TThostFtdcErrorIDType int
static int PyCThostFtdcNotifySyncKeyField_set_ErrorID(PyCThostFtdcNotifySyncKeyField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcNotifySyncKeyField_get_ErrorMsg(PyCThostFtdcNotifySyncKeyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ErrorMsg, (Py_ssize_t)sizeof(self->data.ErrorMsg));
    return PyBytes_FromString(self->data.ErrorMsg);
}

///错误信息
// TThostFtdcErrorMsgType char[81]
static int PyCThostFtdcNotifySyncKeyField_set_ErrorMsg(PyCThostFtdcNotifySyncKeyField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcNotifySyncKeyField_getset[] = {
    ///业务功能码 
    {(char *)"TradeCode", (getter)PyCThostFtdcNotifySyncKeyField_get_TradeCode, (setter)PyCThostFtdcNotifySyncKeyField_set_TradeCode, (char *)"TradeCode", NULL},
    ///银行代码 
    {(char *)"BankID", (getter)PyCThostFtdcNotifySyncKeyField_get_BankID, (setter)PyCThostFtdcNotifySyncKeyField_set_BankID, (char *)"BankID", NULL},
    ///银行分支机构代码 
    {(char *)"BankBranchID", (getter)PyCThostFtdcNotifySyncKeyField_get_BankBranchID, (setter)PyCThostFtdcNotifySyncKeyField_set_BankBranchID, (char *)"BankBranchID", NULL},
    ///期商代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcNotifySyncKeyField_get_BrokerID, (setter)PyCThostFtdcNotifySyncKeyField_set_BrokerID, (char *)"BrokerID", NULL},
    ///期商分支机构代码 
    {(char *)"BrokerBranchID", (getter)PyCThostFtdcNotifySyncKeyField_get_BrokerBranchID, (setter)PyCThostFtdcNotifySyncKeyField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
    ///交易日期 
    {(char *)"TradeDate", (getter)PyCThostFtdcNotifySyncKeyField_get_TradeDate, (setter)PyCThostFtdcNotifySyncKeyField_set_TradeDate, (char *)"TradeDate", NULL},
    ///交易时间 
    {(char *)"TradeTime", (getter)PyCThostFtdcNotifySyncKeyField_get_TradeTime, (setter)PyCThostFtdcNotifySyncKeyField_set_TradeTime, (char *)"TradeTime", NULL},
    ///银行流水号 
    {(char *)"BankSerial", (getter)PyCThostFtdcNotifySyncKeyField_get_BankSerial, (setter)PyCThostFtdcNotifySyncKeyField_set_BankSerial, (char *)"BankSerial", NULL},
    ///交易系统日期 
    {(char *)"TradingDay", (getter)PyCThostFtdcNotifySyncKeyField_get_TradingDay, (setter)PyCThostFtdcNotifySyncKeyField_set_TradingDay, (char *)"TradingDay", NULL},
    ///银期平台消息流水号 
    {(char *)"PlateSerial", (getter)PyCThostFtdcNotifySyncKeyField_get_PlateSerial, (setter)PyCThostFtdcNotifySyncKeyField_set_PlateSerial, (char *)"PlateSerial", NULL},
    ///最后分片标志 
    {(char *)"LastFragment", (getter)PyCThostFtdcNotifySyncKeyField_get_LastFragment, (setter)PyCThostFtdcNotifySyncKeyField_set_LastFragment, (char *)"LastFragment", NULL},
    ///会话号 
    {(char *)"SessionID", (getter)PyCThostFtdcNotifySyncKeyField_get_SessionID, (setter)PyCThostFtdcNotifySyncKeyField_set_SessionID, (char *)"SessionID", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcNotifySyncKeyField_get_InstallID, (setter)PyCThostFtdcNotifySyncKeyField_set_InstallID, (char *)"InstallID", NULL},
    ///用户标识 
    {(char *)"UserID", (getter)PyCThostFtdcNotifySyncKeyField_get_UserID, (setter)PyCThostFtdcNotifySyncKeyField_set_UserID, (char *)"UserID", NULL},
    ///交易核心给银期报盘的消息 
    {(char *)"Message", (getter)PyCThostFtdcNotifySyncKeyField_get_Message, (setter)PyCThostFtdcNotifySyncKeyField_set_Message, (char *)"Message", NULL},
    ///渠道标志 
    {(char *)"DeviceID", (getter)PyCThostFtdcNotifySyncKeyField_get_DeviceID, (setter)PyCThostFtdcNotifySyncKeyField_set_DeviceID, (char *)"DeviceID", NULL},
    ///期货公司银行编码 
    {(char *)"BrokerIDByBank", (getter)PyCThostFtdcNotifySyncKeyField_get_BrokerIDByBank, (setter)PyCThostFtdcNotifySyncKeyField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
    ///交易柜员 
    {(char *)"OperNo", (getter)PyCThostFtdcNotifySyncKeyField_get_OperNo, (setter)PyCThostFtdcNotifySyncKeyField_set_OperNo, (char *)"OperNo", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcNotifySyncKeyField_get_RequestID, (setter)PyCThostFtdcNotifySyncKeyField_set_RequestID, (char *)"RequestID", NULL},
    ///交易ID 
    {(char *)"TID", (getter)PyCThostFtdcNotifySyncKeyField_get_TID, (setter)PyCThostFtdcNotifySyncKeyField_set_TID, (char *)"TID", NULL},
    ///错误代码 
    {(char *)"ErrorID", (getter)PyCThostFtdcNotifySyncKeyField_get_ErrorID, (setter)PyCThostFtdcNotifySyncKeyField_set_ErrorID, (char *)"ErrorID", NULL},
    ///错误信息 
    {(char *)"ErrorMsg", (getter)PyCThostFtdcNotifySyncKeyField_get_ErrorMsg, (setter)PyCThostFtdcNotifySyncKeyField_set_ErrorMsg, (char *)"ErrorMsg", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcNotifySyncKeyFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcNotifySyncKeyField",	/* tp_name */
	sizeof(PyCThostFtdcNotifySyncKeyField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcNotifySyncKeyField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcNotifySyncKeyField_repr,   /* tp_repr */
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
	"CThostFtdcNotifySyncKeyField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcNotifySyncKeyField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcNotifySyncKeyField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcNotifySyncKeyField_new,       /* tp_new */
};

int PyCThostFtdcNotifySyncKeyFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcNotifySyncKeyField  */
	if (PyType_Ready(&PyCThostFtdcNotifySyncKeyFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcNotifySyncKeyField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcNotifySyncKeyFieldType);
    if( PyModule_AddObject(module, "CThostFtdcNotifySyncKeyField", (PyObject *)&PyCThostFtdcNotifySyncKeyFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcNotifySyncKeyField to module");
        Py_DECREF(&PyCThostFtdcNotifySyncKeyFieldType);
		return -1;
    }

    return 0;
}
