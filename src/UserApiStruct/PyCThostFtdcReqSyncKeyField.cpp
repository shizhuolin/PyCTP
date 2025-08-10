
#include "PyCThostFtdcReqSyncKeyField.h"

///交易核心向银期报盘发出密钥同步请求

static PyObject *PyCThostFtdcReqSyncKeyField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcReqSyncKeyField *self = (PyCThostFtdcReqSyncKeyField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcReqSyncKeyField_init(PyCThostFtdcReqSyncKeyField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "InstallID", "UserID", "Message", "DeviceID", "BrokerIDByBank", "OperNo", "RequestID", "TID",  NULL};


    ///业务功能码
    // TThostFtdcTradeCodeType char[7]
    const char *ReqSyncKeyField_TradeCode = NULL;
    Py_ssize_t ReqSyncKeyField_TradeCode_len = 0;
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    const char *ReqSyncKeyField_BankID = NULL;
    Py_ssize_t ReqSyncKeyField_BankID_len = 0;
            
    ///银行分支机构代码
    // TThostFtdcBankBrchIDType char[5]
    const char *ReqSyncKeyField_BankBranchID = NULL;
    Py_ssize_t ReqSyncKeyField_BankBranchID_len = 0;
            
    ///期商代码
    // TThostFtdcBrokerIDType char[11]
    const char *ReqSyncKeyField_BrokerID = NULL;
    Py_ssize_t ReqSyncKeyField_BrokerID_len = 0;
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    const char *ReqSyncKeyField_BrokerBranchID = NULL;
    Py_ssize_t ReqSyncKeyField_BrokerBranchID_len = 0;
            
    ///交易日期
    // TThostFtdcTradeDateType char[9]
    const char *ReqSyncKeyField_TradeDate = NULL;
    Py_ssize_t ReqSyncKeyField_TradeDate_len = 0;
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    const char *ReqSyncKeyField_TradeTime = NULL;
    Py_ssize_t ReqSyncKeyField_TradeTime_len = 0;
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    const char *ReqSyncKeyField_BankSerial = NULL;
    Py_ssize_t ReqSyncKeyField_BankSerial_len = 0;
            
    ///交易系统日期
    // TThostFtdcTradeDateType char[9]
    const char *ReqSyncKeyField_TradingDay = NULL;
    Py_ssize_t ReqSyncKeyField_TradingDay_len = 0;
            
    ///银期平台消息流水号
    // TThostFtdcSerialType int
    int ReqSyncKeyField_PlateSerial = 0;
        
    ///最后分片标志
    // TThostFtdcLastFragmentType char
    char ReqSyncKeyField_LastFragment = 0;
            
    ///会话号
    // TThostFtdcSessionIDType int
    int ReqSyncKeyField_SessionID = 0;
        
    ///安装编号
    // TThostFtdcInstallIDType int
    int ReqSyncKeyField_InstallID = 0;
        
    ///用户标识
    // TThostFtdcUserIDType char[16]
    const char *ReqSyncKeyField_UserID = NULL;
    Py_ssize_t ReqSyncKeyField_UserID_len = 0;
            
    ///交易核心给银期报盘的消息
    // TThostFtdcAddInfoType char[129]
    const char *ReqSyncKeyField_Message = NULL;
    Py_ssize_t ReqSyncKeyField_Message_len = 0;
            
    ///渠道标志
    // TThostFtdcDeviceIDType char[3]
    const char *ReqSyncKeyField_DeviceID = NULL;
    Py_ssize_t ReqSyncKeyField_DeviceID_len = 0;
            
    ///期货公司银行编码
    // TThostFtdcBankCodingForFutureType char[33]
    const char *ReqSyncKeyField_BrokerIDByBank = NULL;
    Py_ssize_t ReqSyncKeyField_BrokerIDByBank_len = 0;
            
    ///交易柜员
    // TThostFtdcOperNoType char[17]
    const char *ReqSyncKeyField_OperNo = NULL;
    Py_ssize_t ReqSyncKeyField_OperNo_len = 0;
            
    ///请求编号
    // TThostFtdcRequestIDType int
    int ReqSyncKeyField_RequestID = 0;
        
    ///交易ID
    // TThostFtdcTIDType int
    int ReqSyncKeyField_TID = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciiy#y#y#y#y#ii", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#iciis#s#s#s#s#ii", (char **)kwlist
#endif

        , &ReqSyncKeyField_TradeCode, &ReqSyncKeyField_TradeCode_len 
        , &ReqSyncKeyField_BankID, &ReqSyncKeyField_BankID_len 
        , &ReqSyncKeyField_BankBranchID, &ReqSyncKeyField_BankBranchID_len 
        , &ReqSyncKeyField_BrokerID, &ReqSyncKeyField_BrokerID_len 
        , &ReqSyncKeyField_BrokerBranchID, &ReqSyncKeyField_BrokerBranchID_len 
        , &ReqSyncKeyField_TradeDate, &ReqSyncKeyField_TradeDate_len 
        , &ReqSyncKeyField_TradeTime, &ReqSyncKeyField_TradeTime_len 
        , &ReqSyncKeyField_BankSerial, &ReqSyncKeyField_BankSerial_len 
        , &ReqSyncKeyField_TradingDay, &ReqSyncKeyField_TradingDay_len 
        , &ReqSyncKeyField_PlateSerial 
        , &ReqSyncKeyField_LastFragment 
        , &ReqSyncKeyField_SessionID 
        , &ReqSyncKeyField_InstallID 
        , &ReqSyncKeyField_UserID, &ReqSyncKeyField_UserID_len 
        , &ReqSyncKeyField_Message, &ReqSyncKeyField_Message_len 
        , &ReqSyncKeyField_DeviceID, &ReqSyncKeyField_DeviceID_len 
        , &ReqSyncKeyField_BrokerIDByBank, &ReqSyncKeyField_BrokerIDByBank_len 
        , &ReqSyncKeyField_OperNo, &ReqSyncKeyField_OperNo_len 
        , &ReqSyncKeyField_RequestID 
        , &ReqSyncKeyField_TID 


    )) {
        return -1;
    }


    ///业务功能码
    // TThostFtdcTradeCodeType char[7]
    if( ReqSyncKeyField_TradeCode != NULL ) {
        if(ReqSyncKeyField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", ReqSyncKeyField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
            return -1;
        }
        // memset(self->data.TradeCode, 0, sizeof(self->data.TradeCode));
        // memcpy(self->data.TradeCode, ReqSyncKeyField_TradeCode, ReqSyncKeyField_TradeCode_len);        
        strncpy(self->data.TradeCode, ReqSyncKeyField_TradeCode, sizeof(self->data.TradeCode) );
        ReqSyncKeyField_TradeCode = NULL;
    }
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    if( ReqSyncKeyField_BankID != NULL ) {
        if(ReqSyncKeyField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", ReqSyncKeyField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
            return -1;
        }
        // memset(self->data.BankID, 0, sizeof(self->data.BankID));
        // memcpy(self->data.BankID, ReqSyncKeyField_BankID, ReqSyncKeyField_BankID_len);        
        strncpy(self->data.BankID, ReqSyncKeyField_BankID, sizeof(self->data.BankID) );
        ReqSyncKeyField_BankID = NULL;
    }
            
    ///银行分支机构代码
    // TThostFtdcBankBrchIDType char[5]
    if( ReqSyncKeyField_BankBranchID != NULL ) {
        if(ReqSyncKeyField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", ReqSyncKeyField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
            return -1;
        }
        // memset(self->data.BankBranchID, 0, sizeof(self->data.BankBranchID));
        // memcpy(self->data.BankBranchID, ReqSyncKeyField_BankBranchID, ReqSyncKeyField_BankBranchID_len);        
        strncpy(self->data.BankBranchID, ReqSyncKeyField_BankBranchID, sizeof(self->data.BankBranchID) );
        ReqSyncKeyField_BankBranchID = NULL;
    }
            
    ///期商代码
    // TThostFtdcBrokerIDType char[11]
    if( ReqSyncKeyField_BrokerID != NULL ) {
        if(ReqSyncKeyField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", ReqSyncKeyField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, ReqSyncKeyField_BrokerID, ReqSyncKeyField_BrokerID_len);        
        strncpy(self->data.BrokerID, ReqSyncKeyField_BrokerID, sizeof(self->data.BrokerID) );
        ReqSyncKeyField_BrokerID = NULL;
    }
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    if( ReqSyncKeyField_BrokerBranchID != NULL ) {
        if(ReqSyncKeyField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", ReqSyncKeyField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
            return -1;
        }
        // memset(self->data.BrokerBranchID, 0, sizeof(self->data.BrokerBranchID));
        // memcpy(self->data.BrokerBranchID, ReqSyncKeyField_BrokerBranchID, ReqSyncKeyField_BrokerBranchID_len);        
        strncpy(self->data.BrokerBranchID, ReqSyncKeyField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
        ReqSyncKeyField_BrokerBranchID = NULL;
    }
            
    ///交易日期
    // TThostFtdcTradeDateType char[9]
    if( ReqSyncKeyField_TradeDate != NULL ) {
        if(ReqSyncKeyField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", ReqSyncKeyField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
            return -1;
        }
        // memset(self->data.TradeDate, 0, sizeof(self->data.TradeDate));
        // memcpy(self->data.TradeDate, ReqSyncKeyField_TradeDate, ReqSyncKeyField_TradeDate_len);        
        strncpy(self->data.TradeDate, ReqSyncKeyField_TradeDate, sizeof(self->data.TradeDate) );
        ReqSyncKeyField_TradeDate = NULL;
    }
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    if( ReqSyncKeyField_TradeTime != NULL ) {
        if(ReqSyncKeyField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", ReqSyncKeyField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
            return -1;
        }
        // memset(self->data.TradeTime, 0, sizeof(self->data.TradeTime));
        // memcpy(self->data.TradeTime, ReqSyncKeyField_TradeTime, ReqSyncKeyField_TradeTime_len);        
        strncpy(self->data.TradeTime, ReqSyncKeyField_TradeTime, sizeof(self->data.TradeTime) );
        ReqSyncKeyField_TradeTime = NULL;
    }
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    if( ReqSyncKeyField_BankSerial != NULL ) {
        if(ReqSyncKeyField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", ReqSyncKeyField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
            return -1;
        }
        // memset(self->data.BankSerial, 0, sizeof(self->data.BankSerial));
        // memcpy(self->data.BankSerial, ReqSyncKeyField_BankSerial, ReqSyncKeyField_BankSerial_len);        
        strncpy(self->data.BankSerial, ReqSyncKeyField_BankSerial, sizeof(self->data.BankSerial) );
        ReqSyncKeyField_BankSerial = NULL;
    }
            
    ///交易系统日期
    // TThostFtdcTradeDateType char[9]
    if( ReqSyncKeyField_TradingDay != NULL ) {
        if(ReqSyncKeyField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", ReqSyncKeyField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, ReqSyncKeyField_TradingDay, ReqSyncKeyField_TradingDay_len);        
        strncpy(self->data.TradingDay, ReqSyncKeyField_TradingDay, sizeof(self->data.TradingDay) );
        ReqSyncKeyField_TradingDay = NULL;
    }
            
    ///银期平台消息流水号
    // TThostFtdcSerialType int
    self->data.PlateSerial = ReqSyncKeyField_PlateSerial;
        
    ///最后分片标志
    // TThostFtdcLastFragmentType char
    self->data.LastFragment = ReqSyncKeyField_LastFragment;
            
    ///会话号
    // TThostFtdcSessionIDType int
    self->data.SessionID = ReqSyncKeyField_SessionID;
        
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = ReqSyncKeyField_InstallID;
        
    ///用户标识
    // TThostFtdcUserIDType char[16]
    if( ReqSyncKeyField_UserID != NULL ) {
        if(ReqSyncKeyField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", ReqSyncKeyField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, ReqSyncKeyField_UserID, ReqSyncKeyField_UserID_len);        
        strncpy(self->data.UserID, ReqSyncKeyField_UserID, sizeof(self->data.UserID) );
        ReqSyncKeyField_UserID = NULL;
    }
            
    ///交易核心给银期报盘的消息
    // TThostFtdcAddInfoType char[129]
    if( ReqSyncKeyField_Message != NULL ) {
        if(ReqSyncKeyField_Message_len > (Py_ssize_t)sizeof(self->data.Message)) {
            PyErr_Format(PyExc_ValueError, "Message too long: length=%zd (max allowed is %zd)", ReqSyncKeyField_Message_len, (Py_ssize_t)sizeof(self->data.Message));
            return -1;
        }
        // memset(self->data.Message, 0, sizeof(self->data.Message));
        // memcpy(self->data.Message, ReqSyncKeyField_Message, ReqSyncKeyField_Message_len);        
        strncpy(self->data.Message, ReqSyncKeyField_Message, sizeof(self->data.Message) );
        ReqSyncKeyField_Message = NULL;
    }
            
    ///渠道标志
    // TThostFtdcDeviceIDType char[3]
    if( ReqSyncKeyField_DeviceID != NULL ) {
        if(ReqSyncKeyField_DeviceID_len > (Py_ssize_t)sizeof(self->data.DeviceID)) {
            PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is %zd)", ReqSyncKeyField_DeviceID_len, (Py_ssize_t)sizeof(self->data.DeviceID));
            return -1;
        }
        // memset(self->data.DeviceID, 0, sizeof(self->data.DeviceID));
        // memcpy(self->data.DeviceID, ReqSyncKeyField_DeviceID, ReqSyncKeyField_DeviceID_len);        
        strncpy(self->data.DeviceID, ReqSyncKeyField_DeviceID, sizeof(self->data.DeviceID) );
        ReqSyncKeyField_DeviceID = NULL;
    }
            
    ///期货公司银行编码
    // TThostFtdcBankCodingForFutureType char[33]
    if( ReqSyncKeyField_BrokerIDByBank != NULL ) {
        if(ReqSyncKeyField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
            PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", ReqSyncKeyField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
            return -1;
        }
        // memset(self->data.BrokerIDByBank, 0, sizeof(self->data.BrokerIDByBank));
        // memcpy(self->data.BrokerIDByBank, ReqSyncKeyField_BrokerIDByBank, ReqSyncKeyField_BrokerIDByBank_len);        
        strncpy(self->data.BrokerIDByBank, ReqSyncKeyField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
        ReqSyncKeyField_BrokerIDByBank = NULL;
    }
            
    ///交易柜员
    // TThostFtdcOperNoType char[17]
    if( ReqSyncKeyField_OperNo != NULL ) {
        if(ReqSyncKeyField_OperNo_len > (Py_ssize_t)sizeof(self->data.OperNo)) {
            PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is %zd)", ReqSyncKeyField_OperNo_len, (Py_ssize_t)sizeof(self->data.OperNo));
            return -1;
        }
        // memset(self->data.OperNo, 0, sizeof(self->data.OperNo));
        // memcpy(self->data.OperNo, ReqSyncKeyField_OperNo, ReqSyncKeyField_OperNo_len);        
        strncpy(self->data.OperNo, ReqSyncKeyField_OperNo, sizeof(self->data.OperNo) );
        ReqSyncKeyField_OperNo = NULL;
    }
            
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = ReqSyncKeyField_RequestID;
        
    ///交易ID
    // TThostFtdcTIDType int
    self->data.TID = ReqSyncKeyField_TID;
        

    return 0;
}

static void PyCThostFtdcReqSyncKeyField_dealloc(PyCThostFtdcReqSyncKeyField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcReqSyncKeyField_repr(PyCThostFtdcReqSyncKeyField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:i,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:i,s:s,s:s,s:s,s:s,s:s,s:i,s:i}"
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


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqSyncKeyField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///业务功能码
// TThostFtdcTradeCodeType char[7]
static PyObject *PyCThostFtdcReqSyncKeyField_get_TradeCode(PyCThostFtdcReqSyncKeyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeCode, (Py_ssize_t)sizeof(self->data.TradeCode));
    return PyBytes_FromString(self->data.TradeCode);
}

///业务功能码
// TThostFtdcTradeCodeType char[7]
static int PyCThostFtdcReqSyncKeyField_set_TradeCode(PyCThostFtdcReqSyncKeyField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqSyncKeyField_get_BankID(PyCThostFtdcReqSyncKeyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankID, (Py_ssize_t)sizeof(self->data.BankID));
    return PyBytes_FromString(self->data.BankID);
}

///银行代码
// TThostFtdcBankIDType char[4]
static int PyCThostFtdcReqSyncKeyField_set_BankID(PyCThostFtdcReqSyncKeyField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqSyncKeyField_get_BankBranchID(PyCThostFtdcReqSyncKeyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankBranchID, (Py_ssize_t)sizeof(self->data.BankBranchID));
    return PyBytes_FromString(self->data.BankBranchID);
}

///银行分支机构代码
// TThostFtdcBankBrchIDType char[5]
static int PyCThostFtdcReqSyncKeyField_set_BankBranchID(PyCThostFtdcReqSyncKeyField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqSyncKeyField_get_BrokerID(PyCThostFtdcReqSyncKeyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///期商代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcReqSyncKeyField_set_BrokerID(PyCThostFtdcReqSyncKeyField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqSyncKeyField_get_BrokerBranchID(PyCThostFtdcReqSyncKeyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerBranchID, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
    return PyBytes_FromString(self->data.BrokerBranchID);
}

///期商分支机构代码
// TThostFtdcFutureBranchIDType char[31]
static int PyCThostFtdcReqSyncKeyField_set_BrokerBranchID(PyCThostFtdcReqSyncKeyField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqSyncKeyField_get_TradeDate(PyCThostFtdcReqSyncKeyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeDate, (Py_ssize_t)sizeof(self->data.TradeDate));
    return PyBytes_FromString(self->data.TradeDate);
}

///交易日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcReqSyncKeyField_set_TradeDate(PyCThostFtdcReqSyncKeyField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqSyncKeyField_get_TradeTime(PyCThostFtdcReqSyncKeyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeTime, (Py_ssize_t)sizeof(self->data.TradeTime));
    return PyBytes_FromString(self->data.TradeTime);
}

///交易时间
// TThostFtdcTradeTimeType char[9]
static int PyCThostFtdcReqSyncKeyField_set_TradeTime(PyCThostFtdcReqSyncKeyField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqSyncKeyField_get_BankSerial(PyCThostFtdcReqSyncKeyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankSerial, (Py_ssize_t)sizeof(self->data.BankSerial));
    return PyBytes_FromString(self->data.BankSerial);
}

///银行流水号
// TThostFtdcBankSerialType char[13]
static int PyCThostFtdcReqSyncKeyField_set_BankSerial(PyCThostFtdcReqSyncKeyField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqSyncKeyField_get_TradingDay(PyCThostFtdcReqSyncKeyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易系统日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcReqSyncKeyField_set_TradingDay(PyCThostFtdcReqSyncKeyField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqSyncKeyField_get_PlateSerial(PyCThostFtdcReqSyncKeyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.PlateSerial);
#else
    return PyInt_FromLong(self->data.PlateSerial);
#endif
}

///银期平台消息流水号
// TThostFtdcSerialType int
static int PyCThostFtdcReqSyncKeyField_set_PlateSerial(PyCThostFtdcReqSyncKeyField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqSyncKeyField_get_LastFragment(PyCThostFtdcReqSyncKeyField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

///最后分片标志
// TThostFtdcLastFragmentType char
static int PyCThostFtdcReqSyncKeyField_set_LastFragment(PyCThostFtdcReqSyncKeyField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqSyncKeyField_get_SessionID(PyCThostFtdcReqSyncKeyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话号
// TThostFtdcSessionIDType int
static int PyCThostFtdcReqSyncKeyField_set_SessionID(PyCThostFtdcReqSyncKeyField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqSyncKeyField_get_InstallID(PyCThostFtdcReqSyncKeyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcReqSyncKeyField_set_InstallID(PyCThostFtdcReqSyncKeyField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqSyncKeyField_get_UserID(PyCThostFtdcReqSyncKeyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户标识
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcReqSyncKeyField_set_UserID(PyCThostFtdcReqSyncKeyField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqSyncKeyField_get_Message(PyCThostFtdcReqSyncKeyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Message, (Py_ssize_t)sizeof(self->data.Message));
    return PyBytes_FromString(self->data.Message);
}

///交易核心给银期报盘的消息
// TThostFtdcAddInfoType char[129]
static int PyCThostFtdcReqSyncKeyField_set_Message(PyCThostFtdcReqSyncKeyField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqSyncKeyField_get_DeviceID(PyCThostFtdcReqSyncKeyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.DeviceID, (Py_ssize_t)sizeof(self->data.DeviceID));
    return PyBytes_FromString(self->data.DeviceID);
}

///渠道标志
// TThostFtdcDeviceIDType char[3]
static int PyCThostFtdcReqSyncKeyField_set_DeviceID(PyCThostFtdcReqSyncKeyField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqSyncKeyField_get_BrokerIDByBank(PyCThostFtdcReqSyncKeyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerIDByBank, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
    return PyBytes_FromString(self->data.BrokerIDByBank);
}

///期货公司银行编码
// TThostFtdcBankCodingForFutureType char[33]
static int PyCThostFtdcReqSyncKeyField_set_BrokerIDByBank(PyCThostFtdcReqSyncKeyField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqSyncKeyField_get_OperNo(PyCThostFtdcReqSyncKeyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OperNo, (Py_ssize_t)sizeof(self->data.OperNo));
    return PyBytes_FromString(self->data.OperNo);
}

///交易柜员
// TThostFtdcOperNoType char[17]
static int PyCThostFtdcReqSyncKeyField_set_OperNo(PyCThostFtdcReqSyncKeyField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqSyncKeyField_get_RequestID(PyCThostFtdcReqSyncKeyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcReqSyncKeyField_set_RequestID(PyCThostFtdcReqSyncKeyField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqSyncKeyField_get_TID(PyCThostFtdcReqSyncKeyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.TID);
#else
    return PyInt_FromLong(self->data.TID);
#endif
}

///交易ID
// TThostFtdcTIDType int
static int PyCThostFtdcReqSyncKeyField_set_TID(PyCThostFtdcReqSyncKeyField *self, PyObject* val, void *closure) {
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
        

static PyGetSetDef PyCThostFtdcReqSyncKeyField_getset[] = {
    ///业务功能码 
    {(char *)"TradeCode", (getter)PyCThostFtdcReqSyncKeyField_get_TradeCode, (setter)PyCThostFtdcReqSyncKeyField_set_TradeCode, (char *)"TradeCode", NULL},
    ///银行代码 
    {(char *)"BankID", (getter)PyCThostFtdcReqSyncKeyField_get_BankID, (setter)PyCThostFtdcReqSyncKeyField_set_BankID, (char *)"BankID", NULL},
    ///银行分支机构代码 
    {(char *)"BankBranchID", (getter)PyCThostFtdcReqSyncKeyField_get_BankBranchID, (setter)PyCThostFtdcReqSyncKeyField_set_BankBranchID, (char *)"BankBranchID", NULL},
    ///期商代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcReqSyncKeyField_get_BrokerID, (setter)PyCThostFtdcReqSyncKeyField_set_BrokerID, (char *)"BrokerID", NULL},
    ///期商分支机构代码 
    {(char *)"BrokerBranchID", (getter)PyCThostFtdcReqSyncKeyField_get_BrokerBranchID, (setter)PyCThostFtdcReqSyncKeyField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
    ///交易日期 
    {(char *)"TradeDate", (getter)PyCThostFtdcReqSyncKeyField_get_TradeDate, (setter)PyCThostFtdcReqSyncKeyField_set_TradeDate, (char *)"TradeDate", NULL},
    ///交易时间 
    {(char *)"TradeTime", (getter)PyCThostFtdcReqSyncKeyField_get_TradeTime, (setter)PyCThostFtdcReqSyncKeyField_set_TradeTime, (char *)"TradeTime", NULL},
    ///银行流水号 
    {(char *)"BankSerial", (getter)PyCThostFtdcReqSyncKeyField_get_BankSerial, (setter)PyCThostFtdcReqSyncKeyField_set_BankSerial, (char *)"BankSerial", NULL},
    ///交易系统日期 
    {(char *)"TradingDay", (getter)PyCThostFtdcReqSyncKeyField_get_TradingDay, (setter)PyCThostFtdcReqSyncKeyField_set_TradingDay, (char *)"TradingDay", NULL},
    ///银期平台消息流水号 
    {(char *)"PlateSerial", (getter)PyCThostFtdcReqSyncKeyField_get_PlateSerial, (setter)PyCThostFtdcReqSyncKeyField_set_PlateSerial, (char *)"PlateSerial", NULL},
    ///最后分片标志 
    {(char *)"LastFragment", (getter)PyCThostFtdcReqSyncKeyField_get_LastFragment, (setter)PyCThostFtdcReqSyncKeyField_set_LastFragment, (char *)"LastFragment", NULL},
    ///会话号 
    {(char *)"SessionID", (getter)PyCThostFtdcReqSyncKeyField_get_SessionID, (setter)PyCThostFtdcReqSyncKeyField_set_SessionID, (char *)"SessionID", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcReqSyncKeyField_get_InstallID, (setter)PyCThostFtdcReqSyncKeyField_set_InstallID, (char *)"InstallID", NULL},
    ///用户标识 
    {(char *)"UserID", (getter)PyCThostFtdcReqSyncKeyField_get_UserID, (setter)PyCThostFtdcReqSyncKeyField_set_UserID, (char *)"UserID", NULL},
    ///交易核心给银期报盘的消息 
    {(char *)"Message", (getter)PyCThostFtdcReqSyncKeyField_get_Message, (setter)PyCThostFtdcReqSyncKeyField_set_Message, (char *)"Message", NULL},
    ///渠道标志 
    {(char *)"DeviceID", (getter)PyCThostFtdcReqSyncKeyField_get_DeviceID, (setter)PyCThostFtdcReqSyncKeyField_set_DeviceID, (char *)"DeviceID", NULL},
    ///期货公司银行编码 
    {(char *)"BrokerIDByBank", (getter)PyCThostFtdcReqSyncKeyField_get_BrokerIDByBank, (setter)PyCThostFtdcReqSyncKeyField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
    ///交易柜员 
    {(char *)"OperNo", (getter)PyCThostFtdcReqSyncKeyField_get_OperNo, (setter)PyCThostFtdcReqSyncKeyField_set_OperNo, (char *)"OperNo", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcReqSyncKeyField_get_RequestID, (setter)PyCThostFtdcReqSyncKeyField_set_RequestID, (char *)"RequestID", NULL},
    ///交易ID 
    {(char *)"TID", (getter)PyCThostFtdcReqSyncKeyField_get_TID, (setter)PyCThostFtdcReqSyncKeyField_set_TID, (char *)"TID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcReqSyncKeyFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcReqSyncKeyField",	/* tp_name */
	sizeof(PyCThostFtdcReqSyncKeyField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcReqSyncKeyField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcReqSyncKeyField_repr,   /* tp_repr */
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
	"CThostFtdcReqSyncKeyField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcReqSyncKeyField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcReqSyncKeyField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcReqSyncKeyField_new,       /* tp_new */
};

int PyCThostFtdcReqSyncKeyFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcReqSyncKeyField  */
	if (PyType_Ready(&PyCThostFtdcReqSyncKeyFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcReqSyncKeyField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcReqSyncKeyFieldType);
    if( PyModule_AddObject(module, "CThostFtdcReqSyncKeyField", (PyObject *)&PyCThostFtdcReqSyncKeyFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqSyncKeyField to module");
        Py_DECREF(&PyCThostFtdcReqSyncKeyFieldType);
		return -1;
    }

    return 0;
}
