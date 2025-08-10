
#include "PyCThostFtdcOffsetSettingField.h"

///对冲设置

static PyObject *PyCThostFtdcOffsetSettingField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcOffsetSettingField *self = (PyCThostFtdcOffsetSettingField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcOffsetSettingField_init(PyCThostFtdcOffsetSettingField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "InstrumentID", "UnderlyingInstrID", "ProductID", "OffsetType", "Volume", "IsOffset", "RequestID", "UserID", "ExchangeID", "IPAddress", "MacAddress", "ExchangeInstID", "ExchangeSerialNo", "ExchangeProductID", "ParticipantID", "ClientID", "TraderID", "InstallID", "OrderSubmitStatus", "TradingDay", "SettlementID", "InsertDate", "InsertTime", "CancelTime", "ExecResult", "SequenceNo", "FrontID", "SessionID", "StatusMsg", "ActiveUserID", "BrokerOffsetSettingSeq",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *OffsetSettingField_BrokerID = NULL;
    Py_ssize_t OffsetSettingField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *OffsetSettingField_InvestorID = NULL;
    Py_ssize_t OffsetSettingField_InvestorID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *OffsetSettingField_InstrumentID = NULL;
    Py_ssize_t OffsetSettingField_InstrumentID_len = 0;
            
    ///标的期货合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *OffsetSettingField_UnderlyingInstrID = NULL;
    Py_ssize_t OffsetSettingField_UnderlyingInstrID_len = 0;
            
    ///产品代码
    // TThostFtdcProductIDType char[41]
    const char *OffsetSettingField_ProductID = NULL;
    Py_ssize_t OffsetSettingField_ProductID_len = 0;
            
    ///对冲类型
    // TThostFtdcOffsetTypeType char
    char OffsetSettingField_OffsetType = 0;
            
    ///申请对冲的合约数量
    // TThostFtdcVolumeType int
    int OffsetSettingField_Volume = 0;
        
    ///是否对冲
    // TThostFtdcBoolType int
    int OffsetSettingField_IsOffset = 0;
        
    ///请求编号
    // TThostFtdcRequestIDType int
    int OffsetSettingField_RequestID = 0;
        
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *OffsetSettingField_UserID = NULL;
    Py_ssize_t OffsetSettingField_UserID_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *OffsetSettingField_ExchangeID = NULL;
    Py_ssize_t OffsetSettingField_ExchangeID_len = 0;
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *OffsetSettingField_IPAddress = NULL;
    Py_ssize_t OffsetSettingField_IPAddress_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *OffsetSettingField_MacAddress = NULL;
    Py_ssize_t OffsetSettingField_MacAddress_len = 0;
            
    ///交易所合约代码
    // TThostFtdcExchangeInstIDType char[81]
    const char *OffsetSettingField_ExchangeInstID = NULL;
    Py_ssize_t OffsetSettingField_ExchangeInstID_len = 0;
            
    ///交易所期权系列号
    // TThostFtdcExchangeInstIDType char[81]
    const char *OffsetSettingField_ExchangeSerialNo = NULL;
    Py_ssize_t OffsetSettingField_ExchangeSerialNo_len = 0;
            
    ///交易所产品代码
    // TThostFtdcProductIDType char[41]
    const char *OffsetSettingField_ExchangeProductID = NULL;
    Py_ssize_t OffsetSettingField_ExchangeProductID_len = 0;
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    const char *OffsetSettingField_ParticipantID = NULL;
    Py_ssize_t OffsetSettingField_ParticipantID_len = 0;
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    const char *OffsetSettingField_ClientID = NULL;
    Py_ssize_t OffsetSettingField_ClientID_len = 0;
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    const char *OffsetSettingField_TraderID = NULL;
    Py_ssize_t OffsetSettingField_TraderID_len = 0;
            
    ///安装编号
    // TThostFtdcInstallIDType int
    int OffsetSettingField_InstallID = 0;
        
    ///对冲提交状态
    // TThostFtdcOrderSubmitStatusType char
    char OffsetSettingField_OrderSubmitStatus = 0;
            
    ///交易日
    // TThostFtdcDateType char[9]
    const char *OffsetSettingField_TradingDay = NULL;
    Py_ssize_t OffsetSettingField_TradingDay_len = 0;
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    int OffsetSettingField_SettlementID = 0;
        
    ///报单日期
    // TThostFtdcDateType char[9]
    const char *OffsetSettingField_InsertDate = NULL;
    Py_ssize_t OffsetSettingField_InsertDate_len = 0;
            
    ///插入时间
    // TThostFtdcTimeType char[9]
    const char *OffsetSettingField_InsertTime = NULL;
    Py_ssize_t OffsetSettingField_InsertTime_len = 0;
            
    ///撤销时间
    // TThostFtdcTimeType char[9]
    const char *OffsetSettingField_CancelTime = NULL;
    Py_ssize_t OffsetSettingField_CancelTime_len = 0;
            
    ///对冲设置结果
    // TThostFtdcExecResultType char
    char OffsetSettingField_ExecResult = 0;
            
    ///序号
    // TThostFtdcSequenceNoType int
    int OffsetSettingField_SequenceNo = 0;
        
    ///前置编号
    // TThostFtdcFrontIDType int
    int OffsetSettingField_FrontID = 0;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    int OffsetSettingField_SessionID = 0;
        
    ///状态信息
    // TThostFtdcErrorMsgType char[81]
    const char *OffsetSettingField_StatusMsg = NULL;
    Py_ssize_t OffsetSettingField_StatusMsg_len = 0;
            
    ///操作用户代码
    // TThostFtdcUserIDType char[16]
    const char *OffsetSettingField_ActiveUserID = NULL;
    Py_ssize_t OffsetSettingField_ActiveUserID_len = 0;
            
    ///经纪公司报单编号
    // TThostFtdcSequenceNoType int
    int OffsetSettingField_BrokerOffsetSettingSeq = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#ciiiy#y#y#y#y#y#y#y#y#y#icy#iy#y#y#ciiiy#y#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#ciiis#s#s#s#s#s#s#s#s#s#ics#is#s#s#ciiis#s#i", (char **)kwlist
#endif

        , &OffsetSettingField_BrokerID, &OffsetSettingField_BrokerID_len 
        , &OffsetSettingField_InvestorID, &OffsetSettingField_InvestorID_len 
        , &OffsetSettingField_InstrumentID, &OffsetSettingField_InstrumentID_len 
        , &OffsetSettingField_UnderlyingInstrID, &OffsetSettingField_UnderlyingInstrID_len 
        , &OffsetSettingField_ProductID, &OffsetSettingField_ProductID_len 
        , &OffsetSettingField_OffsetType 
        , &OffsetSettingField_Volume 
        , &OffsetSettingField_IsOffset 
        , &OffsetSettingField_RequestID 
        , &OffsetSettingField_UserID, &OffsetSettingField_UserID_len 
        , &OffsetSettingField_ExchangeID, &OffsetSettingField_ExchangeID_len 
        , &OffsetSettingField_IPAddress, &OffsetSettingField_IPAddress_len 
        , &OffsetSettingField_MacAddress, &OffsetSettingField_MacAddress_len 
        , &OffsetSettingField_ExchangeInstID, &OffsetSettingField_ExchangeInstID_len 
        , &OffsetSettingField_ExchangeSerialNo, &OffsetSettingField_ExchangeSerialNo_len 
        , &OffsetSettingField_ExchangeProductID, &OffsetSettingField_ExchangeProductID_len 
        , &OffsetSettingField_ParticipantID, &OffsetSettingField_ParticipantID_len 
        , &OffsetSettingField_ClientID, &OffsetSettingField_ClientID_len 
        , &OffsetSettingField_TraderID, &OffsetSettingField_TraderID_len 
        , &OffsetSettingField_InstallID 
        , &OffsetSettingField_OrderSubmitStatus 
        , &OffsetSettingField_TradingDay, &OffsetSettingField_TradingDay_len 
        , &OffsetSettingField_SettlementID 
        , &OffsetSettingField_InsertDate, &OffsetSettingField_InsertDate_len 
        , &OffsetSettingField_InsertTime, &OffsetSettingField_InsertTime_len 
        , &OffsetSettingField_CancelTime, &OffsetSettingField_CancelTime_len 
        , &OffsetSettingField_ExecResult 
        , &OffsetSettingField_SequenceNo 
        , &OffsetSettingField_FrontID 
        , &OffsetSettingField_SessionID 
        , &OffsetSettingField_StatusMsg, &OffsetSettingField_StatusMsg_len 
        , &OffsetSettingField_ActiveUserID, &OffsetSettingField_ActiveUserID_len 
        , &OffsetSettingField_BrokerOffsetSettingSeq 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( OffsetSettingField_BrokerID != NULL ) {
        if(OffsetSettingField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", OffsetSettingField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, OffsetSettingField_BrokerID, OffsetSettingField_BrokerID_len);        
        strncpy(self->data.BrokerID, OffsetSettingField_BrokerID, sizeof(self->data.BrokerID) );
        OffsetSettingField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( OffsetSettingField_InvestorID != NULL ) {
        if(OffsetSettingField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", OffsetSettingField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, OffsetSettingField_InvestorID, OffsetSettingField_InvestorID_len);        
        strncpy(self->data.InvestorID, OffsetSettingField_InvestorID, sizeof(self->data.InvestorID) );
        OffsetSettingField_InvestorID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( OffsetSettingField_InstrumentID != NULL ) {
        if(OffsetSettingField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", OffsetSettingField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, OffsetSettingField_InstrumentID, OffsetSettingField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, OffsetSettingField_InstrumentID, sizeof(self->data.InstrumentID) );
        OffsetSettingField_InstrumentID = NULL;
    }
            
    ///标的期货合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( OffsetSettingField_UnderlyingInstrID != NULL ) {
        if(OffsetSettingField_UnderlyingInstrID_len > (Py_ssize_t)sizeof(self->data.UnderlyingInstrID)) {
            PyErr_Format(PyExc_ValueError, "UnderlyingInstrID too long: length=%zd (max allowed is %zd)", OffsetSettingField_UnderlyingInstrID_len, (Py_ssize_t)sizeof(self->data.UnderlyingInstrID));
            return -1;
        }
        // memset(self->data.UnderlyingInstrID, 0, sizeof(self->data.UnderlyingInstrID));
        // memcpy(self->data.UnderlyingInstrID, OffsetSettingField_UnderlyingInstrID, OffsetSettingField_UnderlyingInstrID_len);        
        strncpy(self->data.UnderlyingInstrID, OffsetSettingField_UnderlyingInstrID, sizeof(self->data.UnderlyingInstrID) );
        OffsetSettingField_UnderlyingInstrID = NULL;
    }
            
    ///产品代码
    // TThostFtdcProductIDType char[41]
    if( OffsetSettingField_ProductID != NULL ) {
        if(OffsetSettingField_ProductID_len > (Py_ssize_t)sizeof(self->data.ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is %zd)", OffsetSettingField_ProductID_len, (Py_ssize_t)sizeof(self->data.ProductID));
            return -1;
        }
        // memset(self->data.ProductID, 0, sizeof(self->data.ProductID));
        // memcpy(self->data.ProductID, OffsetSettingField_ProductID, OffsetSettingField_ProductID_len);        
        strncpy(self->data.ProductID, OffsetSettingField_ProductID, sizeof(self->data.ProductID) );
        OffsetSettingField_ProductID = NULL;
    }
            
    ///对冲类型
    // TThostFtdcOffsetTypeType char
    self->data.OffsetType = OffsetSettingField_OffsetType;
            
    ///申请对冲的合约数量
    // TThostFtdcVolumeType int
    self->data.Volume = OffsetSettingField_Volume;
        
    ///是否对冲
    // TThostFtdcBoolType int
    self->data.IsOffset = OffsetSettingField_IsOffset;
        
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = OffsetSettingField_RequestID;
        
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( OffsetSettingField_UserID != NULL ) {
        if(OffsetSettingField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", OffsetSettingField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, OffsetSettingField_UserID, OffsetSettingField_UserID_len);        
        strncpy(self->data.UserID, OffsetSettingField_UserID, sizeof(self->data.UserID) );
        OffsetSettingField_UserID = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( OffsetSettingField_ExchangeID != NULL ) {
        if(OffsetSettingField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", OffsetSettingField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, OffsetSettingField_ExchangeID, OffsetSettingField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, OffsetSettingField_ExchangeID, sizeof(self->data.ExchangeID) );
        OffsetSettingField_ExchangeID = NULL;
    }
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( OffsetSettingField_IPAddress != NULL ) {
        if(OffsetSettingField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", OffsetSettingField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, OffsetSettingField_IPAddress, OffsetSettingField_IPAddress_len);        
        strncpy(self->data.IPAddress, OffsetSettingField_IPAddress, sizeof(self->data.IPAddress) );
        OffsetSettingField_IPAddress = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( OffsetSettingField_MacAddress != NULL ) {
        if(OffsetSettingField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", OffsetSettingField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, OffsetSettingField_MacAddress, OffsetSettingField_MacAddress_len);        
        strncpy(self->data.MacAddress, OffsetSettingField_MacAddress, sizeof(self->data.MacAddress) );
        OffsetSettingField_MacAddress = NULL;
    }
            
    ///交易所合约代码
    // TThostFtdcExchangeInstIDType char[81]
    if( OffsetSettingField_ExchangeInstID != NULL ) {
        if(OffsetSettingField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", OffsetSettingField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
            return -1;
        }
        // memset(self->data.ExchangeInstID, 0, sizeof(self->data.ExchangeInstID));
        // memcpy(self->data.ExchangeInstID, OffsetSettingField_ExchangeInstID, OffsetSettingField_ExchangeInstID_len);        
        strncpy(self->data.ExchangeInstID, OffsetSettingField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
        OffsetSettingField_ExchangeInstID = NULL;
    }
            
    ///交易所期权系列号
    // TThostFtdcExchangeInstIDType char[81]
    if( OffsetSettingField_ExchangeSerialNo != NULL ) {
        if(OffsetSettingField_ExchangeSerialNo_len > (Py_ssize_t)sizeof(self->data.ExchangeSerialNo)) {
            PyErr_Format(PyExc_ValueError, "ExchangeSerialNo too long: length=%zd (max allowed is %zd)", OffsetSettingField_ExchangeSerialNo_len, (Py_ssize_t)sizeof(self->data.ExchangeSerialNo));
            return -1;
        }
        // memset(self->data.ExchangeSerialNo, 0, sizeof(self->data.ExchangeSerialNo));
        // memcpy(self->data.ExchangeSerialNo, OffsetSettingField_ExchangeSerialNo, OffsetSettingField_ExchangeSerialNo_len);        
        strncpy(self->data.ExchangeSerialNo, OffsetSettingField_ExchangeSerialNo, sizeof(self->data.ExchangeSerialNo) );
        OffsetSettingField_ExchangeSerialNo = NULL;
    }
            
    ///交易所产品代码
    // TThostFtdcProductIDType char[41]
    if( OffsetSettingField_ExchangeProductID != NULL ) {
        if(OffsetSettingField_ExchangeProductID_len > (Py_ssize_t)sizeof(self->data.ExchangeProductID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeProductID too long: length=%zd (max allowed is %zd)", OffsetSettingField_ExchangeProductID_len, (Py_ssize_t)sizeof(self->data.ExchangeProductID));
            return -1;
        }
        // memset(self->data.ExchangeProductID, 0, sizeof(self->data.ExchangeProductID));
        // memcpy(self->data.ExchangeProductID, OffsetSettingField_ExchangeProductID, OffsetSettingField_ExchangeProductID_len);        
        strncpy(self->data.ExchangeProductID, OffsetSettingField_ExchangeProductID, sizeof(self->data.ExchangeProductID) );
        OffsetSettingField_ExchangeProductID = NULL;
    }
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    if( OffsetSettingField_ParticipantID != NULL ) {
        if(OffsetSettingField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", OffsetSettingField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
            return -1;
        }
        // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
        // memcpy(self->data.ParticipantID, OffsetSettingField_ParticipantID, OffsetSettingField_ParticipantID_len);        
        strncpy(self->data.ParticipantID, OffsetSettingField_ParticipantID, sizeof(self->data.ParticipantID) );
        OffsetSettingField_ParticipantID = NULL;
    }
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    if( OffsetSettingField_ClientID != NULL ) {
        if(OffsetSettingField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", OffsetSettingField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
            return -1;
        }
        // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
        // memcpy(self->data.ClientID, OffsetSettingField_ClientID, OffsetSettingField_ClientID_len);        
        strncpy(self->data.ClientID, OffsetSettingField_ClientID, sizeof(self->data.ClientID) );
        OffsetSettingField_ClientID = NULL;
    }
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    if( OffsetSettingField_TraderID != NULL ) {
        if(OffsetSettingField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", OffsetSettingField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
            return -1;
        }
        // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
        // memcpy(self->data.TraderID, OffsetSettingField_TraderID, OffsetSettingField_TraderID_len);        
        strncpy(self->data.TraderID, OffsetSettingField_TraderID, sizeof(self->data.TraderID) );
        OffsetSettingField_TraderID = NULL;
    }
            
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = OffsetSettingField_InstallID;
        
    ///对冲提交状态
    // TThostFtdcOrderSubmitStatusType char
    self->data.OrderSubmitStatus = OffsetSettingField_OrderSubmitStatus;
            
    ///交易日
    // TThostFtdcDateType char[9]
    if( OffsetSettingField_TradingDay != NULL ) {
        if(OffsetSettingField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", OffsetSettingField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, OffsetSettingField_TradingDay, OffsetSettingField_TradingDay_len);        
        strncpy(self->data.TradingDay, OffsetSettingField_TradingDay, sizeof(self->data.TradingDay) );
        OffsetSettingField_TradingDay = NULL;
    }
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    self->data.SettlementID = OffsetSettingField_SettlementID;
        
    ///报单日期
    // TThostFtdcDateType char[9]
    if( OffsetSettingField_InsertDate != NULL ) {
        if(OffsetSettingField_InsertDate_len > (Py_ssize_t)sizeof(self->data.InsertDate)) {
            PyErr_Format(PyExc_ValueError, "InsertDate too long: length=%zd (max allowed is %zd)", OffsetSettingField_InsertDate_len, (Py_ssize_t)sizeof(self->data.InsertDate));
            return -1;
        }
        // memset(self->data.InsertDate, 0, sizeof(self->data.InsertDate));
        // memcpy(self->data.InsertDate, OffsetSettingField_InsertDate, OffsetSettingField_InsertDate_len);        
        strncpy(self->data.InsertDate, OffsetSettingField_InsertDate, sizeof(self->data.InsertDate) );
        OffsetSettingField_InsertDate = NULL;
    }
            
    ///插入时间
    // TThostFtdcTimeType char[9]
    if( OffsetSettingField_InsertTime != NULL ) {
        if(OffsetSettingField_InsertTime_len > (Py_ssize_t)sizeof(self->data.InsertTime)) {
            PyErr_Format(PyExc_ValueError, "InsertTime too long: length=%zd (max allowed is %zd)", OffsetSettingField_InsertTime_len, (Py_ssize_t)sizeof(self->data.InsertTime));
            return -1;
        }
        // memset(self->data.InsertTime, 0, sizeof(self->data.InsertTime));
        // memcpy(self->data.InsertTime, OffsetSettingField_InsertTime, OffsetSettingField_InsertTime_len);        
        strncpy(self->data.InsertTime, OffsetSettingField_InsertTime, sizeof(self->data.InsertTime) );
        OffsetSettingField_InsertTime = NULL;
    }
            
    ///撤销时间
    // TThostFtdcTimeType char[9]
    if( OffsetSettingField_CancelTime != NULL ) {
        if(OffsetSettingField_CancelTime_len > (Py_ssize_t)sizeof(self->data.CancelTime)) {
            PyErr_Format(PyExc_ValueError, "CancelTime too long: length=%zd (max allowed is %zd)", OffsetSettingField_CancelTime_len, (Py_ssize_t)sizeof(self->data.CancelTime));
            return -1;
        }
        // memset(self->data.CancelTime, 0, sizeof(self->data.CancelTime));
        // memcpy(self->data.CancelTime, OffsetSettingField_CancelTime, OffsetSettingField_CancelTime_len);        
        strncpy(self->data.CancelTime, OffsetSettingField_CancelTime, sizeof(self->data.CancelTime) );
        OffsetSettingField_CancelTime = NULL;
    }
            
    ///对冲设置结果
    // TThostFtdcExecResultType char
    self->data.ExecResult = OffsetSettingField_ExecResult;
            
    ///序号
    // TThostFtdcSequenceNoType int
    self->data.SequenceNo = OffsetSettingField_SequenceNo;
        
    ///前置编号
    // TThostFtdcFrontIDType int
    self->data.FrontID = OffsetSettingField_FrontID;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    self->data.SessionID = OffsetSettingField_SessionID;
        
    ///状态信息
    // TThostFtdcErrorMsgType char[81]
    if( OffsetSettingField_StatusMsg != NULL ) {
        if(OffsetSettingField_StatusMsg_len > (Py_ssize_t)sizeof(self->data.StatusMsg)) {
            PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is %zd)", OffsetSettingField_StatusMsg_len, (Py_ssize_t)sizeof(self->data.StatusMsg));
            return -1;
        }
        // memset(self->data.StatusMsg, 0, sizeof(self->data.StatusMsg));
        // memcpy(self->data.StatusMsg, OffsetSettingField_StatusMsg, OffsetSettingField_StatusMsg_len);        
        strncpy(self->data.StatusMsg, OffsetSettingField_StatusMsg, sizeof(self->data.StatusMsg) );
        OffsetSettingField_StatusMsg = NULL;
    }
            
    ///操作用户代码
    // TThostFtdcUserIDType char[16]
    if( OffsetSettingField_ActiveUserID != NULL ) {
        if(OffsetSettingField_ActiveUserID_len > (Py_ssize_t)sizeof(self->data.ActiveUserID)) {
            PyErr_Format(PyExc_ValueError, "ActiveUserID too long: length=%zd (max allowed is %zd)", OffsetSettingField_ActiveUserID_len, (Py_ssize_t)sizeof(self->data.ActiveUserID));
            return -1;
        }
        // memset(self->data.ActiveUserID, 0, sizeof(self->data.ActiveUserID));
        // memcpy(self->data.ActiveUserID, OffsetSettingField_ActiveUserID, OffsetSettingField_ActiveUserID_len);        
        strncpy(self->data.ActiveUserID, OffsetSettingField_ActiveUserID, sizeof(self->data.ActiveUserID) );
        OffsetSettingField_ActiveUserID = NULL;
    }
            
    ///经纪公司报单编号
    // TThostFtdcSequenceNoType int
    self->data.BrokerOffsetSettingSeq = OffsetSettingField_BrokerOffsetSettingSeq;
        

    return 0;
}

static void PyCThostFtdcOffsetSettingField_dealloc(PyCThostFtdcOffsetSettingField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcOffsetSettingField_repr(PyCThostFtdcOffsetSettingField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:c,s:i,s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:y,s:i,s:y,s:y,s:y,s:c,s:i,s:i,s:i,s:y,s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:c,s:i,s:i,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:s,s:i,s:s,s:s,s:s,s:c,s:i,s:i,s:i,s:s,s:s,s:i}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"UnderlyingInstrID", self->data.UnderlyingInstrID//, (Py_ssize_t)sizeof(self->data.UnderlyingInstrID) 
        ,"ProductID", self->data.ProductID//, (Py_ssize_t)sizeof(self->data.ProductID) 
        ,"OffsetType", self->data.OffsetType 
        ,"Volume", self->data.Volume 
        ,"IsOffset", self->data.IsOffset 
        ,"RequestID", self->data.RequestID 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"IPAddress", self->data.IPAddress//, (Py_ssize_t)sizeof(self->data.IPAddress) 
        ,"MacAddress", self->data.MacAddress//, (Py_ssize_t)sizeof(self->data.MacAddress) 
        ,"ExchangeInstID", self->data.ExchangeInstID//, (Py_ssize_t)sizeof(self->data.ExchangeInstID) 
        ,"ExchangeSerialNo", self->data.ExchangeSerialNo//, (Py_ssize_t)sizeof(self->data.ExchangeSerialNo) 
        ,"ExchangeProductID", self->data.ExchangeProductID//, (Py_ssize_t)sizeof(self->data.ExchangeProductID) 
        ,"ParticipantID", self->data.ParticipantID//, (Py_ssize_t)sizeof(self->data.ParticipantID) 
        ,"ClientID", self->data.ClientID//, (Py_ssize_t)sizeof(self->data.ClientID) 
        ,"TraderID", self->data.TraderID//, (Py_ssize_t)sizeof(self->data.TraderID) 
        ,"InstallID", self->data.InstallID 
        ,"OrderSubmitStatus", self->data.OrderSubmitStatus 
        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"SettlementID", self->data.SettlementID 
        ,"InsertDate", self->data.InsertDate//, (Py_ssize_t)sizeof(self->data.InsertDate) 
        ,"InsertTime", self->data.InsertTime//, (Py_ssize_t)sizeof(self->data.InsertTime) 
        ,"CancelTime", self->data.CancelTime//, (Py_ssize_t)sizeof(self->data.CancelTime) 
        ,"ExecResult", self->data.ExecResult 
        ,"SequenceNo", self->data.SequenceNo 
        ,"FrontID", self->data.FrontID 
        ,"SessionID", self->data.SessionID 
        ,"StatusMsg", self->data.StatusMsg//, (Py_ssize_t)sizeof(self->data.StatusMsg) 
        ,"ActiveUserID", self->data.ActiveUserID//, (Py_ssize_t)sizeof(self->data.ActiveUserID) 
        ,"BrokerOffsetSettingSeq", self->data.BrokerOffsetSettingSeq 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcOffsetSettingField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcOffsetSettingField_get_BrokerID(PyCThostFtdcOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcOffsetSettingField_set_BrokerID(PyCThostFtdcOffsetSettingField *self, PyObject* val, void *closure) {
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
            
///投资者代码
// TThostFtdcInvestorIDType char[13]
static PyObject *PyCThostFtdcOffsetSettingField_get_InvestorID(PyCThostFtdcOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcOffsetSettingField_set_InvestorID(PyCThostFtdcOffsetSettingField *self, PyObject* val, void *closure) {
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
            
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcOffsetSettingField_get_InstrumentID(PyCThostFtdcOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcOffsetSettingField_set_InstrumentID(PyCThostFtdcOffsetSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
    // memcpy(self->data.InstrumentID, buf, len);
    strncpy(self->data.InstrumentID, buf, sizeof(self->data.InstrumentID));
    return 0;
}
            
///标的期货合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcOffsetSettingField_get_UnderlyingInstrID(PyCThostFtdcOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UnderlyingInstrID, (Py_ssize_t)sizeof(self->data.UnderlyingInstrID));
    return PyBytes_FromString(self->data.UnderlyingInstrID);
}

///标的期货合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcOffsetSettingField_set_UnderlyingInstrID(PyCThostFtdcOffsetSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UnderlyingInstrID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.UnderlyingInstrID)) {
        PyErr_SetString(PyExc_ValueError, "UnderlyingInstrID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.UnderlyingInstrID, 0, sizeof(self->data.UnderlyingInstrID));
    // memcpy(self->data.UnderlyingInstrID, buf, len);
    strncpy(self->data.UnderlyingInstrID, buf, sizeof(self->data.UnderlyingInstrID));
    return 0;
}
            
///产品代码
// TThostFtdcProductIDType char[41]
static PyObject *PyCThostFtdcOffsetSettingField_get_ProductID(PyCThostFtdcOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProductID, (Py_ssize_t)sizeof(self->data.ProductID));
    return PyBytes_FromString(self->data.ProductID);
}

///产品代码
// TThostFtdcProductIDType char[41]
static int PyCThostFtdcOffsetSettingField_set_ProductID(PyCThostFtdcOffsetSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ProductID)) {
        PyErr_SetString(PyExc_ValueError, "ProductID must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.ProductID, 0, sizeof(self->data.ProductID));
    // memcpy(self->data.ProductID, buf, len);
    strncpy(self->data.ProductID, buf, sizeof(self->data.ProductID));
    return 0;
}
            
///对冲类型
// TThostFtdcOffsetTypeType char
static PyObject *PyCThostFtdcOffsetSettingField_get_OffsetType(PyCThostFtdcOffsetSettingField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OffsetType), 1);
}

///对冲类型
// TThostFtdcOffsetTypeType char
static int PyCThostFtdcOffsetSettingField_set_OffsetType(PyCThostFtdcOffsetSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OffsetType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OffsetType)) {
        PyErr_SetString(PyExc_ValueError, "OffsetType must be equal 1 bytes");
        return -1;
    }
    self->data.OffsetType = *buf;
    return 0;
}
            
///申请对冲的合约数量
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcOffsetSettingField_get_Volume(PyCThostFtdcOffsetSettingField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.Volume);
#else
    return PyInt_FromLong(self->data.Volume);
#endif
}

///申请对冲的合约数量
// TThostFtdcVolumeType int
static int PyCThostFtdcOffsetSettingField_set_Volume(PyCThostFtdcOffsetSettingField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Volume Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Volume Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the Volume value out of range for C int");
        return -1;
    }
    self->data.Volume = (int)buf;
    return 0;
}
        
///是否对冲
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcOffsetSettingField_get_IsOffset(PyCThostFtdcOffsetSettingField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsOffset);
#else
    return PyInt_FromLong(self->data.IsOffset);
#endif
}

///是否对冲
// TThostFtdcBoolType int
static int PyCThostFtdcOffsetSettingField_set_IsOffset(PyCThostFtdcOffsetSettingField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsOffset Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsOffset Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the IsOffset value out of range for C int");
        return -1;
    }
    self->data.IsOffset = (int)buf;
    return 0;
}
        
///请求编号
// TThostFtdcRequestIDType int
static PyObject *PyCThostFtdcOffsetSettingField_get_RequestID(PyCThostFtdcOffsetSettingField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcOffsetSettingField_set_RequestID(PyCThostFtdcOffsetSettingField *self, PyObject* val, void *closure) {
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
        
///用户代码
// TThostFtdcUserIDType char[16]
static PyObject *PyCThostFtdcOffsetSettingField_get_UserID(PyCThostFtdcOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcOffsetSettingField_set_UserID(PyCThostFtdcOffsetSettingField *self, PyObject* val, void *closure) {
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
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcOffsetSettingField_get_ExchangeID(PyCThostFtdcOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcOffsetSettingField_set_ExchangeID(PyCThostFtdcOffsetSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
    // memcpy(self->data.ExchangeID, buf, len);
    strncpy(self->data.ExchangeID, buf, sizeof(self->data.ExchangeID));
    return 0;
}
            
///IP地址
// TThostFtdcIPAddressType char[33]
static PyObject *PyCThostFtdcOffsetSettingField_get_IPAddress(PyCThostFtdcOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcOffsetSettingField_set_IPAddress(PyCThostFtdcOffsetSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 33 bytes");
        return -1;
    }
    // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
    // memcpy(self->data.IPAddress, buf, len);
    strncpy(self->data.IPAddress, buf, sizeof(self->data.IPAddress));
    return 0;
}
            
///Mac地址
// TThostFtdcMacAddressType char[21]
static PyObject *PyCThostFtdcOffsetSettingField_get_MacAddress(PyCThostFtdcOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcOffsetSettingField_set_MacAddress(PyCThostFtdcOffsetSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
    // memcpy(self->data.MacAddress, buf, len);
    strncpy(self->data.MacAddress, buf, sizeof(self->data.MacAddress));
    return 0;
}
            
///交易所合约代码
// TThostFtdcExchangeInstIDType char[81]
static PyObject *PyCThostFtdcOffsetSettingField_get_ExchangeInstID(PyCThostFtdcOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeInstID, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
    return PyBytes_FromString(self->data.ExchangeInstID);
}

///交易所合约代码
// TThostFtdcExchangeInstIDType char[81]
static int PyCThostFtdcOffsetSettingField_set_ExchangeInstID(PyCThostFtdcOffsetSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.ExchangeInstID, 0, sizeof(self->data.ExchangeInstID));
    // memcpy(self->data.ExchangeInstID, buf, len);
    strncpy(self->data.ExchangeInstID, buf, sizeof(self->data.ExchangeInstID));
    return 0;
}
            
///交易所期权系列号
// TThostFtdcExchangeInstIDType char[81]
static PyObject *PyCThostFtdcOffsetSettingField_get_ExchangeSerialNo(PyCThostFtdcOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeSerialNo, (Py_ssize_t)sizeof(self->data.ExchangeSerialNo));
    return PyBytes_FromString(self->data.ExchangeSerialNo);
}

///交易所期权系列号
// TThostFtdcExchangeInstIDType char[81]
static int PyCThostFtdcOffsetSettingField_set_ExchangeSerialNo(PyCThostFtdcOffsetSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeSerialNo Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ExchangeSerialNo)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeSerialNo must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.ExchangeSerialNo, 0, sizeof(self->data.ExchangeSerialNo));
    // memcpy(self->data.ExchangeSerialNo, buf, len);
    strncpy(self->data.ExchangeSerialNo, buf, sizeof(self->data.ExchangeSerialNo));
    return 0;
}
            
///交易所产品代码
// TThostFtdcProductIDType char[41]
static PyObject *PyCThostFtdcOffsetSettingField_get_ExchangeProductID(PyCThostFtdcOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeProductID, (Py_ssize_t)sizeof(self->data.ExchangeProductID));
    return PyBytes_FromString(self->data.ExchangeProductID);
}

///交易所产品代码
// TThostFtdcProductIDType char[41]
static int PyCThostFtdcOffsetSettingField_set_ExchangeProductID(PyCThostFtdcOffsetSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeProductID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ExchangeProductID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeProductID must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.ExchangeProductID, 0, sizeof(self->data.ExchangeProductID));
    // memcpy(self->data.ExchangeProductID, buf, len);
    strncpy(self->data.ExchangeProductID, buf, sizeof(self->data.ExchangeProductID));
    return 0;
}
            
///会员代码
// TThostFtdcParticipantIDType char[11]
static PyObject *PyCThostFtdcOffsetSettingField_get_ParticipantID(PyCThostFtdcOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParticipantID, (Py_ssize_t)sizeof(self->data.ParticipantID));
    return PyBytes_FromString(self->data.ParticipantID);
}

///会员代码
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcOffsetSettingField_set_ParticipantID(PyCThostFtdcOffsetSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 11 bytes");
        return -1;
    }
    // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
    // memcpy(self->data.ParticipantID, buf, len);
    strncpy(self->data.ParticipantID, buf, sizeof(self->data.ParticipantID));
    return 0;
}
            
///客户代码
// TThostFtdcClientIDType char[11]
static PyObject *PyCThostFtdcOffsetSettingField_get_ClientID(PyCThostFtdcOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientID, (Py_ssize_t)sizeof(self->data.ClientID));
    return PyBytes_FromString(self->data.ClientID);
}

///客户代码
// TThostFtdcClientIDType char[11]
static int PyCThostFtdcOffsetSettingField_set_ClientID(PyCThostFtdcOffsetSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 11 bytes");
        return -1;
    }
    // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
    // memcpy(self->data.ClientID, buf, len);
    strncpy(self->data.ClientID, buf, sizeof(self->data.ClientID));
    return 0;
}
            
///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static PyObject *PyCThostFtdcOffsetSettingField_get_TraderID(PyCThostFtdcOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TraderID, (Py_ssize_t)sizeof(self->data.TraderID));
    return PyBytes_FromString(self->data.TraderID);
}

///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static int PyCThostFtdcOffsetSettingField_set_TraderID(PyCThostFtdcOffsetSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
    // memcpy(self->data.TraderID, buf, len);
    strncpy(self->data.TraderID, buf, sizeof(self->data.TraderID));
    return 0;
}
            
///安装编号
// TThostFtdcInstallIDType int
static PyObject *PyCThostFtdcOffsetSettingField_get_InstallID(PyCThostFtdcOffsetSettingField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcOffsetSettingField_set_InstallID(PyCThostFtdcOffsetSettingField *self, PyObject* val, void *closure) {
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
        
///对冲提交状态
// TThostFtdcOrderSubmitStatusType char
static PyObject *PyCThostFtdcOffsetSettingField_get_OrderSubmitStatus(PyCThostFtdcOffsetSettingField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OrderSubmitStatus), 1);
}

///对冲提交状态
// TThostFtdcOrderSubmitStatusType char
static int PyCThostFtdcOffsetSettingField_set_OrderSubmitStatus(PyCThostFtdcOffsetSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderSubmitStatus Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OrderSubmitStatus)) {
        PyErr_SetString(PyExc_ValueError, "OrderSubmitStatus must be equal 1 bytes");
        return -1;
    }
    self->data.OrderSubmitStatus = *buf;
    return 0;
}
            
///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcOffsetSettingField_get_TradingDay(PyCThostFtdcOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcOffsetSettingField_set_TradingDay(PyCThostFtdcOffsetSettingField *self, PyObject* val, void *closure) {
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
            
///结算编号
// TThostFtdcSettlementIDType int
static PyObject *PyCThostFtdcOffsetSettingField_get_SettlementID(PyCThostFtdcOffsetSettingField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SettlementID);
#else
    return PyInt_FromLong(self->data.SettlementID);
#endif
}

///结算编号
// TThostFtdcSettlementIDType int
static int PyCThostFtdcOffsetSettingField_set_SettlementID(PyCThostFtdcOffsetSettingField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SettlementID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SettlementID Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the SettlementID value out of range for C int");
        return -1;
    }
    self->data.SettlementID = (int)buf;
    return 0;
}
        
///报单日期
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcOffsetSettingField_get_InsertDate(PyCThostFtdcOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InsertDate, (Py_ssize_t)sizeof(self->data.InsertDate));
    return PyBytes_FromString(self->data.InsertDate);
}

///报单日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcOffsetSettingField_set_InsertDate(PyCThostFtdcOffsetSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InsertDate Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InsertDate)) {
        PyErr_SetString(PyExc_ValueError, "InsertDate must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.InsertDate, 0, sizeof(self->data.InsertDate));
    // memcpy(self->data.InsertDate, buf, len);
    strncpy(self->data.InsertDate, buf, sizeof(self->data.InsertDate));
    return 0;
}
            
///插入时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcOffsetSettingField_get_InsertTime(PyCThostFtdcOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InsertTime, (Py_ssize_t)sizeof(self->data.InsertTime));
    return PyBytes_FromString(self->data.InsertTime);
}

///插入时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcOffsetSettingField_set_InsertTime(PyCThostFtdcOffsetSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InsertTime Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InsertTime)) {
        PyErr_SetString(PyExc_ValueError, "InsertTime must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.InsertTime, 0, sizeof(self->data.InsertTime));
    // memcpy(self->data.InsertTime, buf, len);
    strncpy(self->data.InsertTime, buf, sizeof(self->data.InsertTime));
    return 0;
}
            
///撤销时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcOffsetSettingField_get_CancelTime(PyCThostFtdcOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CancelTime, (Py_ssize_t)sizeof(self->data.CancelTime));
    return PyBytes_FromString(self->data.CancelTime);
}

///撤销时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcOffsetSettingField_set_CancelTime(PyCThostFtdcOffsetSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CancelTime Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CancelTime)) {
        PyErr_SetString(PyExc_ValueError, "CancelTime must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.CancelTime, 0, sizeof(self->data.CancelTime));
    // memcpy(self->data.CancelTime, buf, len);
    strncpy(self->data.CancelTime, buf, sizeof(self->data.CancelTime));
    return 0;
}
            
///对冲设置结果
// TThostFtdcExecResultType char
static PyObject *PyCThostFtdcOffsetSettingField_get_ExecResult(PyCThostFtdcOffsetSettingField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ExecResult), 1);
}

///对冲设置结果
// TThostFtdcExecResultType char
static int PyCThostFtdcOffsetSettingField_set_ExecResult(PyCThostFtdcOffsetSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExecResult Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ExecResult)) {
        PyErr_SetString(PyExc_ValueError, "ExecResult must be equal 1 bytes");
        return -1;
    }
    self->data.ExecResult = *buf;
    return 0;
}
            
///序号
// TThostFtdcSequenceNoType int
static PyObject *PyCThostFtdcOffsetSettingField_get_SequenceNo(PyCThostFtdcOffsetSettingField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SequenceNo);
#else
    return PyInt_FromLong(self->data.SequenceNo);
#endif
}

///序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcOffsetSettingField_set_SequenceNo(PyCThostFtdcOffsetSettingField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SequenceNo Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SequenceNo Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the SequenceNo value out of range for C int");
        return -1;
    }
    self->data.SequenceNo = (int)buf;
    return 0;
}
        
///前置编号
// TThostFtdcFrontIDType int
static PyObject *PyCThostFtdcOffsetSettingField_get_FrontID(PyCThostFtdcOffsetSettingField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FrontID);
#else
    return PyInt_FromLong(self->data.FrontID);
#endif
}

///前置编号
// TThostFtdcFrontIDType int
static int PyCThostFtdcOffsetSettingField_set_FrontID(PyCThostFtdcOffsetSettingField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FrontID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FrontID Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the FrontID value out of range for C int");
        return -1;
    }
    self->data.FrontID = (int)buf;
    return 0;
}
        
///会话编号
// TThostFtdcSessionIDType int
static PyObject *PyCThostFtdcOffsetSettingField_get_SessionID(PyCThostFtdcOffsetSettingField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话编号
// TThostFtdcSessionIDType int
static int PyCThostFtdcOffsetSettingField_set_SessionID(PyCThostFtdcOffsetSettingField *self, PyObject* val, void *closure) {
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
        
///状态信息
// TThostFtdcErrorMsgType char[81]
static PyObject *PyCThostFtdcOffsetSettingField_get_StatusMsg(PyCThostFtdcOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.StatusMsg, (Py_ssize_t)sizeof(self->data.StatusMsg));
    return PyBytes_FromString(self->data.StatusMsg);
}

///状态信息
// TThostFtdcErrorMsgType char[81]
static int PyCThostFtdcOffsetSettingField_set_StatusMsg(PyCThostFtdcOffsetSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "StatusMsg Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.StatusMsg)) {
        PyErr_SetString(PyExc_ValueError, "StatusMsg must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.StatusMsg, 0, sizeof(self->data.StatusMsg));
    // memcpy(self->data.StatusMsg, buf, len);
    strncpy(self->data.StatusMsg, buf, sizeof(self->data.StatusMsg));
    return 0;
}
            
///操作用户代码
// TThostFtdcUserIDType char[16]
static PyObject *PyCThostFtdcOffsetSettingField_get_ActiveUserID(PyCThostFtdcOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActiveUserID, (Py_ssize_t)sizeof(self->data.ActiveUserID));
    return PyBytes_FromString(self->data.ActiveUserID);
}

///操作用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcOffsetSettingField_set_ActiveUserID(PyCThostFtdcOffsetSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ActiveUserID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ActiveUserID)) {
        PyErr_SetString(PyExc_ValueError, "ActiveUserID must be less than 16 bytes");
        return -1;
    }
    // memset(self->data.ActiveUserID, 0, sizeof(self->data.ActiveUserID));
    // memcpy(self->data.ActiveUserID, buf, len);
    strncpy(self->data.ActiveUserID, buf, sizeof(self->data.ActiveUserID));
    return 0;
}
            
///经纪公司报单编号
// TThostFtdcSequenceNoType int
static PyObject *PyCThostFtdcOffsetSettingField_get_BrokerOffsetSettingSeq(PyCThostFtdcOffsetSettingField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.BrokerOffsetSettingSeq);
#else
    return PyInt_FromLong(self->data.BrokerOffsetSettingSeq);
#endif
}

///经纪公司报单编号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcOffsetSettingField_set_BrokerOffsetSettingSeq(PyCThostFtdcOffsetSettingField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BrokerOffsetSettingSeq Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BrokerOffsetSettingSeq Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the BrokerOffsetSettingSeq value out of range for C int");
        return -1;
    }
    self->data.BrokerOffsetSettingSeq = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcOffsetSettingField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcOffsetSettingField_get_BrokerID, (setter)PyCThostFtdcOffsetSettingField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcOffsetSettingField_get_InvestorID, (setter)PyCThostFtdcOffsetSettingField_set_InvestorID, (char *)"InvestorID", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcOffsetSettingField_get_InstrumentID, (setter)PyCThostFtdcOffsetSettingField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///标的期货合约代码 
    {(char *)"UnderlyingInstrID", (getter)PyCThostFtdcOffsetSettingField_get_UnderlyingInstrID, (setter)PyCThostFtdcOffsetSettingField_set_UnderlyingInstrID, (char *)"UnderlyingInstrID", NULL},
    ///产品代码 
    {(char *)"ProductID", (getter)PyCThostFtdcOffsetSettingField_get_ProductID, (setter)PyCThostFtdcOffsetSettingField_set_ProductID, (char *)"ProductID", NULL},
    ///对冲类型 
    {(char *)"OffsetType", (getter)PyCThostFtdcOffsetSettingField_get_OffsetType, (setter)PyCThostFtdcOffsetSettingField_set_OffsetType, (char *)"OffsetType", NULL},
    ///申请对冲的合约数量 
    {(char *)"Volume", (getter)PyCThostFtdcOffsetSettingField_get_Volume, (setter)PyCThostFtdcOffsetSettingField_set_Volume, (char *)"Volume", NULL},
    ///是否对冲 
    {(char *)"IsOffset", (getter)PyCThostFtdcOffsetSettingField_get_IsOffset, (setter)PyCThostFtdcOffsetSettingField_set_IsOffset, (char *)"IsOffset", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcOffsetSettingField_get_RequestID, (setter)PyCThostFtdcOffsetSettingField_set_RequestID, (char *)"RequestID", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcOffsetSettingField_get_UserID, (setter)PyCThostFtdcOffsetSettingField_set_UserID, (char *)"UserID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcOffsetSettingField_get_ExchangeID, (setter)PyCThostFtdcOffsetSettingField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcOffsetSettingField_get_IPAddress, (setter)PyCThostFtdcOffsetSettingField_set_IPAddress, (char *)"IPAddress", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcOffsetSettingField_get_MacAddress, (setter)PyCThostFtdcOffsetSettingField_set_MacAddress, (char *)"MacAddress", NULL},
    ///交易所合约代码 
    {(char *)"ExchangeInstID", (getter)PyCThostFtdcOffsetSettingField_get_ExchangeInstID, (setter)PyCThostFtdcOffsetSettingField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
    ///交易所期权系列号 
    {(char *)"ExchangeSerialNo", (getter)PyCThostFtdcOffsetSettingField_get_ExchangeSerialNo, (setter)PyCThostFtdcOffsetSettingField_set_ExchangeSerialNo, (char *)"ExchangeSerialNo", NULL},
    ///交易所产品代码 
    {(char *)"ExchangeProductID", (getter)PyCThostFtdcOffsetSettingField_get_ExchangeProductID, (setter)PyCThostFtdcOffsetSettingField_set_ExchangeProductID, (char *)"ExchangeProductID", NULL},
    ///会员代码 
    {(char *)"ParticipantID", (getter)PyCThostFtdcOffsetSettingField_get_ParticipantID, (setter)PyCThostFtdcOffsetSettingField_set_ParticipantID, (char *)"ParticipantID", NULL},
    ///客户代码 
    {(char *)"ClientID", (getter)PyCThostFtdcOffsetSettingField_get_ClientID, (setter)PyCThostFtdcOffsetSettingField_set_ClientID, (char *)"ClientID", NULL},
    ///交易所交易员代码 
    {(char *)"TraderID", (getter)PyCThostFtdcOffsetSettingField_get_TraderID, (setter)PyCThostFtdcOffsetSettingField_set_TraderID, (char *)"TraderID", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcOffsetSettingField_get_InstallID, (setter)PyCThostFtdcOffsetSettingField_set_InstallID, (char *)"InstallID", NULL},
    ///对冲提交状态 
    {(char *)"OrderSubmitStatus", (getter)PyCThostFtdcOffsetSettingField_get_OrderSubmitStatus, (setter)PyCThostFtdcOffsetSettingField_set_OrderSubmitStatus, (char *)"OrderSubmitStatus", NULL},
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcOffsetSettingField_get_TradingDay, (setter)PyCThostFtdcOffsetSettingField_set_TradingDay, (char *)"TradingDay", NULL},
    ///结算编号 
    {(char *)"SettlementID", (getter)PyCThostFtdcOffsetSettingField_get_SettlementID, (setter)PyCThostFtdcOffsetSettingField_set_SettlementID, (char *)"SettlementID", NULL},
    ///报单日期 
    {(char *)"InsertDate", (getter)PyCThostFtdcOffsetSettingField_get_InsertDate, (setter)PyCThostFtdcOffsetSettingField_set_InsertDate, (char *)"InsertDate", NULL},
    ///插入时间 
    {(char *)"InsertTime", (getter)PyCThostFtdcOffsetSettingField_get_InsertTime, (setter)PyCThostFtdcOffsetSettingField_set_InsertTime, (char *)"InsertTime", NULL},
    ///撤销时间 
    {(char *)"CancelTime", (getter)PyCThostFtdcOffsetSettingField_get_CancelTime, (setter)PyCThostFtdcOffsetSettingField_set_CancelTime, (char *)"CancelTime", NULL},
    ///对冲设置结果 
    {(char *)"ExecResult", (getter)PyCThostFtdcOffsetSettingField_get_ExecResult, (setter)PyCThostFtdcOffsetSettingField_set_ExecResult, (char *)"ExecResult", NULL},
    ///序号 
    {(char *)"SequenceNo", (getter)PyCThostFtdcOffsetSettingField_get_SequenceNo, (setter)PyCThostFtdcOffsetSettingField_set_SequenceNo, (char *)"SequenceNo", NULL},
    ///前置编号 
    {(char *)"FrontID", (getter)PyCThostFtdcOffsetSettingField_get_FrontID, (setter)PyCThostFtdcOffsetSettingField_set_FrontID, (char *)"FrontID", NULL},
    ///会话编号 
    {(char *)"SessionID", (getter)PyCThostFtdcOffsetSettingField_get_SessionID, (setter)PyCThostFtdcOffsetSettingField_set_SessionID, (char *)"SessionID", NULL},
    ///状态信息 
    {(char *)"StatusMsg", (getter)PyCThostFtdcOffsetSettingField_get_StatusMsg, (setter)PyCThostFtdcOffsetSettingField_set_StatusMsg, (char *)"StatusMsg", NULL},
    ///操作用户代码 
    {(char *)"ActiveUserID", (getter)PyCThostFtdcOffsetSettingField_get_ActiveUserID, (setter)PyCThostFtdcOffsetSettingField_set_ActiveUserID, (char *)"ActiveUserID", NULL},
    ///经纪公司报单编号 
    {(char *)"BrokerOffsetSettingSeq", (getter)PyCThostFtdcOffsetSettingField_get_BrokerOffsetSettingSeq, (setter)PyCThostFtdcOffsetSettingField_set_BrokerOffsetSettingSeq, (char *)"BrokerOffsetSettingSeq", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcOffsetSettingFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcOffsetSettingField",	/* tp_name */
	sizeof(PyCThostFtdcOffsetSettingField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcOffsetSettingField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcOffsetSettingField_repr,   /* tp_repr */
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
	"CThostFtdcOffsetSettingField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcOffsetSettingField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcOffsetSettingField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcOffsetSettingField_new,       /* tp_new */
};

int PyCThostFtdcOffsetSettingFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcOffsetSettingField  */
	if (PyType_Ready(&PyCThostFtdcOffsetSettingFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcOffsetSettingField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcOffsetSettingFieldType);
    if( PyModule_AddObject(module, "CThostFtdcOffsetSettingField", (PyObject *)&PyCThostFtdcOffsetSettingFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcOffsetSettingField to module");
        Py_DECREF(&PyCThostFtdcOffsetSettingFieldType);
		return -1;
    }

    return 0;
}
