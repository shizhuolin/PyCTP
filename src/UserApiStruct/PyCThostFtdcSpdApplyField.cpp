
#include "PyCThostFtdcSpdApplyField.h"

///套利申请回报

static PyObject *PyCThostFtdcSpdApplyField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSpdApplyField *self = (PyCThostFtdcSpdApplyField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSpdApplyField_init(PyCThostFtdcSpdApplyField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "FirstLegInstrumentID", "SecondLegInstrumentID", "UserID", "Volume", "Direction", "RequestID", "FrontID", "SessionID", "OrderRef", "ActiveUserID", "BrokerOrderSeq", "OrderSysID", "ApplyStatus", "SequenceNo", "InsertDate", "InsertTime", "CancelTime", "OrderLocalID", "ExchangeID", "ParticipantID", "ClientID", "ExchangeInstID", "TraderID", "InstallID", "OrderSubmitStatus", "NotifySequence", "TradingDay", "SettlementID", "IPAddress", "MacAddress", "CmbType", "StatusMsg",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *SpdApplyField_BrokerID = NULL;
    Py_ssize_t SpdApplyField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *SpdApplyField_InvestorID = NULL;
    Py_ssize_t SpdApplyField_InvestorID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *SpdApplyField_FirstLegInstrumentID = NULL;
    Py_ssize_t SpdApplyField_FirstLegInstrumentID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *SpdApplyField_SecondLegInstrumentID = NULL;
    Py_ssize_t SpdApplyField_SecondLegInstrumentID_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *SpdApplyField_UserID = NULL;
    Py_ssize_t SpdApplyField_UserID_len = 0;
            
    ///数量
    // TThostFtdcVolumeType int
    int SpdApplyField_Volume = 0;
        
    ///买卖方向
    // TThostFtdcDirectionType char
    char SpdApplyField_Direction = 0;
            
    ///请求编号
    // TThostFtdcRequestIDType int
    int SpdApplyField_RequestID = 0;
        
    ///前置编号
    // TThostFtdcFrontIDType int
    int SpdApplyField_FrontID = 0;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    int SpdApplyField_SessionID = 0;
        
    ///报单引用
    // TThostFtdcOrderRefType char[13]
    const char *SpdApplyField_OrderRef = NULL;
    Py_ssize_t SpdApplyField_OrderRef_len = 0;
            
    ///操作用户代码
    // TThostFtdcUserIDType char[16]
    const char *SpdApplyField_ActiveUserID = NULL;
    Py_ssize_t SpdApplyField_ActiveUserID_len = 0;
            
    ///经纪公司报单编号
    // TThostFtdcSequenceNoType int
    int SpdApplyField_BrokerOrderSeq = 0;
        
    ///报单编号
    // TThostFtdcOrderSysIDType char[21]
    const char *SpdApplyField_OrderSysID = NULL;
    Py_ssize_t SpdApplyField_OrderSysID_len = 0;
            
    ///申请状态
    // TThostFtdcApplyStatusType char
    char SpdApplyField_ApplyStatus = 0;
            
    ///序号
    // TThostFtdcSequenceNoType int
    int SpdApplyField_SequenceNo = 0;
        
    ///报单日期
    // TThostFtdcDateType char[9]
    const char *SpdApplyField_InsertDate = NULL;
    Py_ssize_t SpdApplyField_InsertDate_len = 0;
            
    ///委托时间
    // TThostFtdcTimeType char[9]
    const char *SpdApplyField_InsertTime = NULL;
    Py_ssize_t SpdApplyField_InsertTime_len = 0;
            
    ///撤销时间
    // TThostFtdcTimeType char[9]
    const char *SpdApplyField_CancelTime = NULL;
    Py_ssize_t SpdApplyField_CancelTime_len = 0;
            
    ///本地报单编号
    // TThostFtdcOrderLocalIDType char[13]
    const char *SpdApplyField_OrderLocalID = NULL;
    Py_ssize_t SpdApplyField_OrderLocalID_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *SpdApplyField_ExchangeID = NULL;
    Py_ssize_t SpdApplyField_ExchangeID_len = 0;
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    const char *SpdApplyField_ParticipantID = NULL;
    Py_ssize_t SpdApplyField_ParticipantID_len = 0;
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    const char *SpdApplyField_ClientID = NULL;
    Py_ssize_t SpdApplyField_ClientID_len = 0;
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    const char *SpdApplyField_ExchangeInstID = NULL;
    Py_ssize_t SpdApplyField_ExchangeInstID_len = 0;
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    const char *SpdApplyField_TraderID = NULL;
    Py_ssize_t SpdApplyField_TraderID_len = 0;
            
    ///安装编号
    // TThostFtdcInstallIDType int
    int SpdApplyField_InstallID = 0;
        
    ///报单提交状态
    // TThostFtdcOrderSubmitStatusType char
    char SpdApplyField_OrderSubmitStatus = 0;
            
    ///报单提示序号
    // TThostFtdcSequenceNoType int
    int SpdApplyField_NotifySequence = 0;
        
    ///交易日
    // TThostFtdcDateType char[9]
    const char *SpdApplyField_TradingDay = NULL;
    Py_ssize_t SpdApplyField_TradingDay_len = 0;
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    int SpdApplyField_SettlementID = 0;
        
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *SpdApplyField_IPAddress = NULL;
    Py_ssize_t SpdApplyField_IPAddress_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *SpdApplyField_MacAddress = NULL;
    Py_ssize_t SpdApplyField_MacAddress_len = 0;
            
    ///组合定单类型
    // TThostFtdcCmbTypeType char
    char SpdApplyField_CmbType = 0;
            
    ///状态信息
    // TThostFtdcErrorMsgType char[81]
    const char *SpdApplyField_StatusMsg = NULL;
    Py_ssize_t SpdApplyField_StatusMsg_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#iciiiy#y#iy#ciy#y#y#y#y#y#y#y#y#iciy#iy#y#cy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#iciiis#s#is#cis#s#s#s#s#s#s#s#s#icis#is#s#cs#", (char **)kwlist
#endif

        , &SpdApplyField_BrokerID, &SpdApplyField_BrokerID_len 
        , &SpdApplyField_InvestorID, &SpdApplyField_InvestorID_len 
        , &SpdApplyField_FirstLegInstrumentID, &SpdApplyField_FirstLegInstrumentID_len 
        , &SpdApplyField_SecondLegInstrumentID, &SpdApplyField_SecondLegInstrumentID_len 
        , &SpdApplyField_UserID, &SpdApplyField_UserID_len 
        , &SpdApplyField_Volume 
        , &SpdApplyField_Direction 
        , &SpdApplyField_RequestID 
        , &SpdApplyField_FrontID 
        , &SpdApplyField_SessionID 
        , &SpdApplyField_OrderRef, &SpdApplyField_OrderRef_len 
        , &SpdApplyField_ActiveUserID, &SpdApplyField_ActiveUserID_len 
        , &SpdApplyField_BrokerOrderSeq 
        , &SpdApplyField_OrderSysID, &SpdApplyField_OrderSysID_len 
        , &SpdApplyField_ApplyStatus 
        , &SpdApplyField_SequenceNo 
        , &SpdApplyField_InsertDate, &SpdApplyField_InsertDate_len 
        , &SpdApplyField_InsertTime, &SpdApplyField_InsertTime_len 
        , &SpdApplyField_CancelTime, &SpdApplyField_CancelTime_len 
        , &SpdApplyField_OrderLocalID, &SpdApplyField_OrderLocalID_len 
        , &SpdApplyField_ExchangeID, &SpdApplyField_ExchangeID_len 
        , &SpdApplyField_ParticipantID, &SpdApplyField_ParticipantID_len 
        , &SpdApplyField_ClientID, &SpdApplyField_ClientID_len 
        , &SpdApplyField_ExchangeInstID, &SpdApplyField_ExchangeInstID_len 
        , &SpdApplyField_TraderID, &SpdApplyField_TraderID_len 
        , &SpdApplyField_InstallID 
        , &SpdApplyField_OrderSubmitStatus 
        , &SpdApplyField_NotifySequence 
        , &SpdApplyField_TradingDay, &SpdApplyField_TradingDay_len 
        , &SpdApplyField_SettlementID 
        , &SpdApplyField_IPAddress, &SpdApplyField_IPAddress_len 
        , &SpdApplyField_MacAddress, &SpdApplyField_MacAddress_len 
        , &SpdApplyField_CmbType 
        , &SpdApplyField_StatusMsg, &SpdApplyField_StatusMsg_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( SpdApplyField_BrokerID != NULL ) {
        if(SpdApplyField_BrokerID_len >= (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", SpdApplyField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, SpdApplyField_BrokerID, SpdApplyField_BrokerID_len);        
        strncpy(self->data.BrokerID, SpdApplyField_BrokerID, sizeof(self->data.BrokerID) );
        SpdApplyField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( SpdApplyField_InvestorID != NULL ) {
        if(SpdApplyField_InvestorID_len >= (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", SpdApplyField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, SpdApplyField_InvestorID, SpdApplyField_InvestorID_len);        
        strncpy(self->data.InvestorID, SpdApplyField_InvestorID, sizeof(self->data.InvestorID) );
        SpdApplyField_InvestorID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( SpdApplyField_FirstLegInstrumentID != NULL ) {
        if(SpdApplyField_FirstLegInstrumentID_len >= (Py_ssize_t)sizeof(self->data.FirstLegInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "FirstLegInstrumentID too long: length=%zd (max allowed is %zd)", SpdApplyField_FirstLegInstrumentID_len, (Py_ssize_t)sizeof(self->data.FirstLegInstrumentID));
            return -1;
        }
        // memset(self->data.FirstLegInstrumentID, 0, sizeof(self->data.FirstLegInstrumentID));
        // memcpy(self->data.FirstLegInstrumentID, SpdApplyField_FirstLegInstrumentID, SpdApplyField_FirstLegInstrumentID_len);        
        strncpy(self->data.FirstLegInstrumentID, SpdApplyField_FirstLegInstrumentID, sizeof(self->data.FirstLegInstrumentID) );
        SpdApplyField_FirstLegInstrumentID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( SpdApplyField_SecondLegInstrumentID != NULL ) {
        if(SpdApplyField_SecondLegInstrumentID_len >= (Py_ssize_t)sizeof(self->data.SecondLegInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "SecondLegInstrumentID too long: length=%zd (max allowed is %zd)", SpdApplyField_SecondLegInstrumentID_len, (Py_ssize_t)sizeof(self->data.SecondLegInstrumentID));
            return -1;
        }
        // memset(self->data.SecondLegInstrumentID, 0, sizeof(self->data.SecondLegInstrumentID));
        // memcpy(self->data.SecondLegInstrumentID, SpdApplyField_SecondLegInstrumentID, SpdApplyField_SecondLegInstrumentID_len);        
        strncpy(self->data.SecondLegInstrumentID, SpdApplyField_SecondLegInstrumentID, sizeof(self->data.SecondLegInstrumentID) );
        SpdApplyField_SecondLegInstrumentID = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( SpdApplyField_UserID != NULL ) {
        if(SpdApplyField_UserID_len >= (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", SpdApplyField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, SpdApplyField_UserID, SpdApplyField_UserID_len);        
        strncpy(self->data.UserID, SpdApplyField_UserID, sizeof(self->data.UserID) );
        SpdApplyField_UserID = NULL;
    }
            
    ///数量
    // TThostFtdcVolumeType int
    self->data.Volume = SpdApplyField_Volume;
        
    ///买卖方向
    // TThostFtdcDirectionType char
    self->data.Direction = SpdApplyField_Direction;
            
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = SpdApplyField_RequestID;
        
    ///前置编号
    // TThostFtdcFrontIDType int
    self->data.FrontID = SpdApplyField_FrontID;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    self->data.SessionID = SpdApplyField_SessionID;
        
    ///报单引用
    // TThostFtdcOrderRefType char[13]
    if( SpdApplyField_OrderRef != NULL ) {
        if(SpdApplyField_OrderRef_len >= (Py_ssize_t)sizeof(self->data.OrderRef)) {
            PyErr_Format(PyExc_ValueError, "OrderRef too long: length=%zd (max allowed is %zd)", SpdApplyField_OrderRef_len, (Py_ssize_t)sizeof(self->data.OrderRef));
            return -1;
        }
        // memset(self->data.OrderRef, 0, sizeof(self->data.OrderRef));
        // memcpy(self->data.OrderRef, SpdApplyField_OrderRef, SpdApplyField_OrderRef_len);        
        strncpy(self->data.OrderRef, SpdApplyField_OrderRef, sizeof(self->data.OrderRef) );
        SpdApplyField_OrderRef = NULL;
    }
            
    ///操作用户代码
    // TThostFtdcUserIDType char[16]
    if( SpdApplyField_ActiveUserID != NULL ) {
        if(SpdApplyField_ActiveUserID_len >= (Py_ssize_t)sizeof(self->data.ActiveUserID)) {
            PyErr_Format(PyExc_ValueError, "ActiveUserID too long: length=%zd (max allowed is %zd)", SpdApplyField_ActiveUserID_len, (Py_ssize_t)sizeof(self->data.ActiveUserID));
            return -1;
        }
        // memset(self->data.ActiveUserID, 0, sizeof(self->data.ActiveUserID));
        // memcpy(self->data.ActiveUserID, SpdApplyField_ActiveUserID, SpdApplyField_ActiveUserID_len);        
        strncpy(self->data.ActiveUserID, SpdApplyField_ActiveUserID, sizeof(self->data.ActiveUserID) );
        SpdApplyField_ActiveUserID = NULL;
    }
            
    ///经纪公司报单编号
    // TThostFtdcSequenceNoType int
    self->data.BrokerOrderSeq = SpdApplyField_BrokerOrderSeq;
        
    ///报单编号
    // TThostFtdcOrderSysIDType char[21]
    if( SpdApplyField_OrderSysID != NULL ) {
        if(SpdApplyField_OrderSysID_len >= (Py_ssize_t)sizeof(self->data.OrderSysID)) {
            PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is %zd)", SpdApplyField_OrderSysID_len, (Py_ssize_t)sizeof(self->data.OrderSysID));
            return -1;
        }
        // memset(self->data.OrderSysID, 0, sizeof(self->data.OrderSysID));
        // memcpy(self->data.OrderSysID, SpdApplyField_OrderSysID, SpdApplyField_OrderSysID_len);        
        strncpy(self->data.OrderSysID, SpdApplyField_OrderSysID, sizeof(self->data.OrderSysID) );
        SpdApplyField_OrderSysID = NULL;
    }
            
    ///申请状态
    // TThostFtdcApplyStatusType char
    self->data.ApplyStatus = SpdApplyField_ApplyStatus;
            
    ///序号
    // TThostFtdcSequenceNoType int
    self->data.SequenceNo = SpdApplyField_SequenceNo;
        
    ///报单日期
    // TThostFtdcDateType char[9]
    if( SpdApplyField_InsertDate != NULL ) {
        if(SpdApplyField_InsertDate_len >= (Py_ssize_t)sizeof(self->data.InsertDate)) {
            PyErr_Format(PyExc_ValueError, "InsertDate too long: length=%zd (max allowed is %zd)", SpdApplyField_InsertDate_len, (Py_ssize_t)sizeof(self->data.InsertDate));
            return -1;
        }
        // memset(self->data.InsertDate, 0, sizeof(self->data.InsertDate));
        // memcpy(self->data.InsertDate, SpdApplyField_InsertDate, SpdApplyField_InsertDate_len);        
        strncpy(self->data.InsertDate, SpdApplyField_InsertDate, sizeof(self->data.InsertDate) );
        SpdApplyField_InsertDate = NULL;
    }
            
    ///委托时间
    // TThostFtdcTimeType char[9]
    if( SpdApplyField_InsertTime != NULL ) {
        if(SpdApplyField_InsertTime_len >= (Py_ssize_t)sizeof(self->data.InsertTime)) {
            PyErr_Format(PyExc_ValueError, "InsertTime too long: length=%zd (max allowed is %zd)", SpdApplyField_InsertTime_len, (Py_ssize_t)sizeof(self->data.InsertTime));
            return -1;
        }
        // memset(self->data.InsertTime, 0, sizeof(self->data.InsertTime));
        // memcpy(self->data.InsertTime, SpdApplyField_InsertTime, SpdApplyField_InsertTime_len);        
        strncpy(self->data.InsertTime, SpdApplyField_InsertTime, sizeof(self->data.InsertTime) );
        SpdApplyField_InsertTime = NULL;
    }
            
    ///撤销时间
    // TThostFtdcTimeType char[9]
    if( SpdApplyField_CancelTime != NULL ) {
        if(SpdApplyField_CancelTime_len >= (Py_ssize_t)sizeof(self->data.CancelTime)) {
            PyErr_Format(PyExc_ValueError, "CancelTime too long: length=%zd (max allowed is %zd)", SpdApplyField_CancelTime_len, (Py_ssize_t)sizeof(self->data.CancelTime));
            return -1;
        }
        // memset(self->data.CancelTime, 0, sizeof(self->data.CancelTime));
        // memcpy(self->data.CancelTime, SpdApplyField_CancelTime, SpdApplyField_CancelTime_len);        
        strncpy(self->data.CancelTime, SpdApplyField_CancelTime, sizeof(self->data.CancelTime) );
        SpdApplyField_CancelTime = NULL;
    }
            
    ///本地报单编号
    // TThostFtdcOrderLocalIDType char[13]
    if( SpdApplyField_OrderLocalID != NULL ) {
        if(SpdApplyField_OrderLocalID_len >= (Py_ssize_t)sizeof(self->data.OrderLocalID)) {
            PyErr_Format(PyExc_ValueError, "OrderLocalID too long: length=%zd (max allowed is %zd)", SpdApplyField_OrderLocalID_len, (Py_ssize_t)sizeof(self->data.OrderLocalID));
            return -1;
        }
        // memset(self->data.OrderLocalID, 0, sizeof(self->data.OrderLocalID));
        // memcpy(self->data.OrderLocalID, SpdApplyField_OrderLocalID, SpdApplyField_OrderLocalID_len);        
        strncpy(self->data.OrderLocalID, SpdApplyField_OrderLocalID, sizeof(self->data.OrderLocalID) );
        SpdApplyField_OrderLocalID = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( SpdApplyField_ExchangeID != NULL ) {
        if(SpdApplyField_ExchangeID_len >= (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", SpdApplyField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, SpdApplyField_ExchangeID, SpdApplyField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, SpdApplyField_ExchangeID, sizeof(self->data.ExchangeID) );
        SpdApplyField_ExchangeID = NULL;
    }
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    if( SpdApplyField_ParticipantID != NULL ) {
        if(SpdApplyField_ParticipantID_len >= (Py_ssize_t)sizeof(self->data.ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", SpdApplyField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
            return -1;
        }
        // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
        // memcpy(self->data.ParticipantID, SpdApplyField_ParticipantID, SpdApplyField_ParticipantID_len);        
        strncpy(self->data.ParticipantID, SpdApplyField_ParticipantID, sizeof(self->data.ParticipantID) );
        SpdApplyField_ParticipantID = NULL;
    }
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    if( SpdApplyField_ClientID != NULL ) {
        if(SpdApplyField_ClientID_len >= (Py_ssize_t)sizeof(self->data.ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", SpdApplyField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
            return -1;
        }
        // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
        // memcpy(self->data.ClientID, SpdApplyField_ClientID, SpdApplyField_ClientID_len);        
        strncpy(self->data.ClientID, SpdApplyField_ClientID, sizeof(self->data.ClientID) );
        SpdApplyField_ClientID = NULL;
    }
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    if( SpdApplyField_ExchangeInstID != NULL ) {
        if(SpdApplyField_ExchangeInstID_len >= (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", SpdApplyField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
            return -1;
        }
        // memset(self->data.ExchangeInstID, 0, sizeof(self->data.ExchangeInstID));
        // memcpy(self->data.ExchangeInstID, SpdApplyField_ExchangeInstID, SpdApplyField_ExchangeInstID_len);        
        strncpy(self->data.ExchangeInstID, SpdApplyField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
        SpdApplyField_ExchangeInstID = NULL;
    }
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    if( SpdApplyField_TraderID != NULL ) {
        if(SpdApplyField_TraderID_len >= (Py_ssize_t)sizeof(self->data.TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", SpdApplyField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
            return -1;
        }
        // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
        // memcpy(self->data.TraderID, SpdApplyField_TraderID, SpdApplyField_TraderID_len);        
        strncpy(self->data.TraderID, SpdApplyField_TraderID, sizeof(self->data.TraderID) );
        SpdApplyField_TraderID = NULL;
    }
            
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = SpdApplyField_InstallID;
        
    ///报单提交状态
    // TThostFtdcOrderSubmitStatusType char
    self->data.OrderSubmitStatus = SpdApplyField_OrderSubmitStatus;
            
    ///报单提示序号
    // TThostFtdcSequenceNoType int
    self->data.NotifySequence = SpdApplyField_NotifySequence;
        
    ///交易日
    // TThostFtdcDateType char[9]
    if( SpdApplyField_TradingDay != NULL ) {
        if(SpdApplyField_TradingDay_len >= (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", SpdApplyField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, SpdApplyField_TradingDay, SpdApplyField_TradingDay_len);        
        strncpy(self->data.TradingDay, SpdApplyField_TradingDay, sizeof(self->data.TradingDay) );
        SpdApplyField_TradingDay = NULL;
    }
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    self->data.SettlementID = SpdApplyField_SettlementID;
        
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( SpdApplyField_IPAddress != NULL ) {
        if(SpdApplyField_IPAddress_len >= (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", SpdApplyField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, SpdApplyField_IPAddress, SpdApplyField_IPAddress_len);        
        strncpy(self->data.IPAddress, SpdApplyField_IPAddress, sizeof(self->data.IPAddress) );
        SpdApplyField_IPAddress = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( SpdApplyField_MacAddress != NULL ) {
        if(SpdApplyField_MacAddress_len >= (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", SpdApplyField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, SpdApplyField_MacAddress, SpdApplyField_MacAddress_len);        
        strncpy(self->data.MacAddress, SpdApplyField_MacAddress, sizeof(self->data.MacAddress) );
        SpdApplyField_MacAddress = NULL;
    }
            
    ///组合定单类型
    // TThostFtdcCmbTypeType char
    self->data.CmbType = SpdApplyField_CmbType;
            
    ///状态信息
    // TThostFtdcErrorMsgType char[81]
    if( SpdApplyField_StatusMsg != NULL ) {
        if(SpdApplyField_StatusMsg_len >= (Py_ssize_t)sizeof(self->data.StatusMsg)) {
            PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is %zd)", SpdApplyField_StatusMsg_len, (Py_ssize_t)sizeof(self->data.StatusMsg));
            return -1;
        }
        // memset(self->data.StatusMsg, 0, sizeof(self->data.StatusMsg));
        // memcpy(self->data.StatusMsg, SpdApplyField_StatusMsg, SpdApplyField_StatusMsg_len);        
        strncpy(self->data.StatusMsg, SpdApplyField_StatusMsg, sizeof(self->data.StatusMsg) );
        SpdApplyField_StatusMsg = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcSpdApplyField_dealloc(PyCThostFtdcSpdApplyField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSpdApplyField_repr(PyCThostFtdcSpdApplyField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:i,s:i,s:y,s:y,s:i,s:y,s:c,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:i,s:y,s:y,s:c,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:i,s:i,s:s,s:s,s:i,s:s,s:c,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:i,s:s,s:s,s:c,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"FirstLegInstrumentID", self->data.FirstLegInstrumentID//, (Py_ssize_t)sizeof(self->data.FirstLegInstrumentID) 
        ,"SecondLegInstrumentID", self->data.SecondLegInstrumentID//, (Py_ssize_t)sizeof(self->data.SecondLegInstrumentID) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"Volume", self->data.Volume 
        ,"Direction", self->data.Direction 
        ,"RequestID", self->data.RequestID 
        ,"FrontID", self->data.FrontID 
        ,"SessionID", self->data.SessionID 
        ,"OrderRef", self->data.OrderRef//, (Py_ssize_t)sizeof(self->data.OrderRef) 
        ,"ActiveUserID", self->data.ActiveUserID//, (Py_ssize_t)sizeof(self->data.ActiveUserID) 
        ,"BrokerOrderSeq", self->data.BrokerOrderSeq 
        ,"OrderSysID", self->data.OrderSysID//, (Py_ssize_t)sizeof(self->data.OrderSysID) 
        ,"ApplyStatus", self->data.ApplyStatus 
        ,"SequenceNo", self->data.SequenceNo 
        ,"InsertDate", self->data.InsertDate//, (Py_ssize_t)sizeof(self->data.InsertDate) 
        ,"InsertTime", self->data.InsertTime//, (Py_ssize_t)sizeof(self->data.InsertTime) 
        ,"CancelTime", self->data.CancelTime//, (Py_ssize_t)sizeof(self->data.CancelTime) 
        ,"OrderLocalID", self->data.OrderLocalID//, (Py_ssize_t)sizeof(self->data.OrderLocalID) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"ParticipantID", self->data.ParticipantID//, (Py_ssize_t)sizeof(self->data.ParticipantID) 
        ,"ClientID", self->data.ClientID//, (Py_ssize_t)sizeof(self->data.ClientID) 
        ,"ExchangeInstID", self->data.ExchangeInstID//, (Py_ssize_t)sizeof(self->data.ExchangeInstID) 
        ,"TraderID", self->data.TraderID//, (Py_ssize_t)sizeof(self->data.TraderID) 
        ,"InstallID", self->data.InstallID 
        ,"OrderSubmitStatus", self->data.OrderSubmitStatus 
        ,"NotifySequence", self->data.NotifySequence 
        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"SettlementID", self->data.SettlementID 
        ,"IPAddress", self->data.IPAddress//, (Py_ssize_t)sizeof(self->data.IPAddress) 
        ,"MacAddress", self->data.MacAddress//, (Py_ssize_t)sizeof(self->data.MacAddress) 
        ,"CmbType", self->data.CmbType 
        ,"StatusMsg", self->data.StatusMsg//, (Py_ssize_t)sizeof(self->data.StatusMsg) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSpdApplyField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcSpdApplyField_get_BrokerID(PyCThostFtdcSpdApplyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcSpdApplyField_set_BrokerID(PyCThostFtdcSpdApplyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.BrokerID)) {
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
static PyObject *PyCThostFtdcSpdApplyField_get_InvestorID(PyCThostFtdcSpdApplyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcSpdApplyField_set_InvestorID(PyCThostFtdcSpdApplyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.InvestorID)) {
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
static PyObject *PyCThostFtdcSpdApplyField_get_FirstLegInstrumentID(PyCThostFtdcSpdApplyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.FirstLegInstrumentID, (Py_ssize_t)sizeof(self->data.FirstLegInstrumentID));
    return PyBytes_FromString(self->data.FirstLegInstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcSpdApplyField_set_FirstLegInstrumentID(PyCThostFtdcSpdApplyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FirstLegInstrumentID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.FirstLegInstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "FirstLegInstrumentID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.FirstLegInstrumentID, 0, sizeof(self->data.FirstLegInstrumentID));
    // memcpy(self->data.FirstLegInstrumentID, buf, len);
    strncpy(self->data.FirstLegInstrumentID, buf, sizeof(self->data.FirstLegInstrumentID));
    return 0;
}
            
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcSpdApplyField_get_SecondLegInstrumentID(PyCThostFtdcSpdApplyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.SecondLegInstrumentID, (Py_ssize_t)sizeof(self->data.SecondLegInstrumentID));
    return PyBytes_FromString(self->data.SecondLegInstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcSpdApplyField_set_SecondLegInstrumentID(PyCThostFtdcSpdApplyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SecondLegInstrumentID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.SecondLegInstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "SecondLegInstrumentID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.SecondLegInstrumentID, 0, sizeof(self->data.SecondLegInstrumentID));
    // memcpy(self->data.SecondLegInstrumentID, buf, len);
    strncpy(self->data.SecondLegInstrumentID, buf, sizeof(self->data.SecondLegInstrumentID));
    return 0;
}
            
///用户代码
// TThostFtdcUserIDType char[16]
static PyObject *PyCThostFtdcSpdApplyField_get_UserID(PyCThostFtdcSpdApplyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcSpdApplyField_set_UserID(PyCThostFtdcSpdApplyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 16 bytes");
        return -1;
    }
    // memset(self->data.UserID, 0, sizeof(self->data.UserID));
    // memcpy(self->data.UserID, buf, len);
    strncpy(self->data.UserID, buf, sizeof(self->data.UserID));
    return 0;
}
            
///数量
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcSpdApplyField_get_Volume(PyCThostFtdcSpdApplyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.Volume);
#else
    return PyInt_FromLong(self->data.Volume);
#endif
}

///数量
// TThostFtdcVolumeType int
static int PyCThostFtdcSpdApplyField_set_Volume(PyCThostFtdcSpdApplyField *self, PyObject* val, void *closure) {
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
        
///买卖方向
// TThostFtdcDirectionType char
static PyObject *PyCThostFtdcSpdApplyField_get_Direction(PyCThostFtdcSpdApplyField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

///买卖方向
// TThostFtdcDirectionType char
static int PyCThostFtdcSpdApplyField_set_Direction(PyCThostFtdcSpdApplyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Direction Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Direction)) {
        PyErr_SetString(PyExc_ValueError, "Direction must be equal 1 bytes");
        return -1;
    }
    self->data.Direction = *buf;
    return 0;
}
            
///请求编号
// TThostFtdcRequestIDType int
static PyObject *PyCThostFtdcSpdApplyField_get_RequestID(PyCThostFtdcSpdApplyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcSpdApplyField_set_RequestID(PyCThostFtdcSpdApplyField *self, PyObject* val, void *closure) {
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
        
///前置编号
// TThostFtdcFrontIDType int
static PyObject *PyCThostFtdcSpdApplyField_get_FrontID(PyCThostFtdcSpdApplyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FrontID);
#else
    return PyInt_FromLong(self->data.FrontID);
#endif
}

///前置编号
// TThostFtdcFrontIDType int
static int PyCThostFtdcSpdApplyField_set_FrontID(PyCThostFtdcSpdApplyField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSpdApplyField_get_SessionID(PyCThostFtdcSpdApplyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话编号
// TThostFtdcSessionIDType int
static int PyCThostFtdcSpdApplyField_set_SessionID(PyCThostFtdcSpdApplyField *self, PyObject* val, void *closure) {
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
        
///报单引用
// TThostFtdcOrderRefType char[13]
static PyObject *PyCThostFtdcSpdApplyField_get_OrderRef(PyCThostFtdcSpdApplyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderRef, (Py_ssize_t)sizeof(self->data.OrderRef));
    return PyBytes_FromString(self->data.OrderRef);
}

///报单引用
// TThostFtdcOrderRefType char[13]
static int PyCThostFtdcSpdApplyField_set_OrderRef(PyCThostFtdcSpdApplyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderRef Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.OrderRef)) {
        PyErr_SetString(PyExc_ValueError, "OrderRef must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.OrderRef, 0, sizeof(self->data.OrderRef));
    // memcpy(self->data.OrderRef, buf, len);
    strncpy(self->data.OrderRef, buf, sizeof(self->data.OrderRef));
    return 0;
}
            
///操作用户代码
// TThostFtdcUserIDType char[16]
static PyObject *PyCThostFtdcSpdApplyField_get_ActiveUserID(PyCThostFtdcSpdApplyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActiveUserID, (Py_ssize_t)sizeof(self->data.ActiveUserID));
    return PyBytes_FromString(self->data.ActiveUserID);
}

///操作用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcSpdApplyField_set_ActiveUserID(PyCThostFtdcSpdApplyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ActiveUserID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.ActiveUserID)) {
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
static PyObject *PyCThostFtdcSpdApplyField_get_BrokerOrderSeq(PyCThostFtdcSpdApplyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.BrokerOrderSeq);
#else
    return PyInt_FromLong(self->data.BrokerOrderSeq);
#endif
}

///经纪公司报单编号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcSpdApplyField_set_BrokerOrderSeq(PyCThostFtdcSpdApplyField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BrokerOrderSeq Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BrokerOrderSeq Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the BrokerOrderSeq value out of range for C int");
        return -1;
    }
    self->data.BrokerOrderSeq = (int)buf;
    return 0;
}
        
///报单编号
// TThostFtdcOrderSysIDType char[21]
static PyObject *PyCThostFtdcSpdApplyField_get_OrderSysID(PyCThostFtdcSpdApplyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderSysID, (Py_ssize_t)sizeof(self->data.OrderSysID));
    return PyBytes_FromString(self->data.OrderSysID);
}

///报单编号
// TThostFtdcOrderSysIDType char[21]
static int PyCThostFtdcSpdApplyField_set_OrderSysID(PyCThostFtdcSpdApplyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderSysID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.OrderSysID)) {
        PyErr_SetString(PyExc_ValueError, "OrderSysID must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.OrderSysID, 0, sizeof(self->data.OrderSysID));
    // memcpy(self->data.OrderSysID, buf, len);
    strncpy(self->data.OrderSysID, buf, sizeof(self->data.OrderSysID));
    return 0;
}
            
///申请状态
// TThostFtdcApplyStatusType char
static PyObject *PyCThostFtdcSpdApplyField_get_ApplyStatus(PyCThostFtdcSpdApplyField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ApplyStatus), 1);
}

///申请状态
// TThostFtdcApplyStatusType char
static int PyCThostFtdcSpdApplyField_set_ApplyStatus(PyCThostFtdcSpdApplyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ApplyStatus Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ApplyStatus)) {
        PyErr_SetString(PyExc_ValueError, "ApplyStatus must be equal 1 bytes");
        return -1;
    }
    self->data.ApplyStatus = *buf;
    return 0;
}
            
///序号
// TThostFtdcSequenceNoType int
static PyObject *PyCThostFtdcSpdApplyField_get_SequenceNo(PyCThostFtdcSpdApplyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SequenceNo);
#else
    return PyInt_FromLong(self->data.SequenceNo);
#endif
}

///序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcSpdApplyField_set_SequenceNo(PyCThostFtdcSpdApplyField *self, PyObject* val, void *closure) {
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
        
///报单日期
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcSpdApplyField_get_InsertDate(PyCThostFtdcSpdApplyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InsertDate, (Py_ssize_t)sizeof(self->data.InsertDate));
    return PyBytes_FromString(self->data.InsertDate);
}

///报单日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcSpdApplyField_set_InsertDate(PyCThostFtdcSpdApplyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InsertDate Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.InsertDate)) {
        PyErr_SetString(PyExc_ValueError, "InsertDate must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.InsertDate, 0, sizeof(self->data.InsertDate));
    // memcpy(self->data.InsertDate, buf, len);
    strncpy(self->data.InsertDate, buf, sizeof(self->data.InsertDate));
    return 0;
}
            
///委托时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcSpdApplyField_get_InsertTime(PyCThostFtdcSpdApplyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InsertTime, (Py_ssize_t)sizeof(self->data.InsertTime));
    return PyBytes_FromString(self->data.InsertTime);
}

///委托时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcSpdApplyField_set_InsertTime(PyCThostFtdcSpdApplyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InsertTime Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.InsertTime)) {
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
static PyObject *PyCThostFtdcSpdApplyField_get_CancelTime(PyCThostFtdcSpdApplyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CancelTime, (Py_ssize_t)sizeof(self->data.CancelTime));
    return PyBytes_FromString(self->data.CancelTime);
}

///撤销时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcSpdApplyField_set_CancelTime(PyCThostFtdcSpdApplyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CancelTime Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.CancelTime)) {
        PyErr_SetString(PyExc_ValueError, "CancelTime must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.CancelTime, 0, sizeof(self->data.CancelTime));
    // memcpy(self->data.CancelTime, buf, len);
    strncpy(self->data.CancelTime, buf, sizeof(self->data.CancelTime));
    return 0;
}
            
///本地报单编号
// TThostFtdcOrderLocalIDType char[13]
static PyObject *PyCThostFtdcSpdApplyField_get_OrderLocalID(PyCThostFtdcSpdApplyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderLocalID, (Py_ssize_t)sizeof(self->data.OrderLocalID));
    return PyBytes_FromString(self->data.OrderLocalID);
}

///本地报单编号
// TThostFtdcOrderLocalIDType char[13]
static int PyCThostFtdcSpdApplyField_set_OrderLocalID(PyCThostFtdcSpdApplyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderLocalID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.OrderLocalID)) {
        PyErr_SetString(PyExc_ValueError, "OrderLocalID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.OrderLocalID, 0, sizeof(self->data.OrderLocalID));
    // memcpy(self->data.OrderLocalID, buf, len);
    strncpy(self->data.OrderLocalID, buf, sizeof(self->data.OrderLocalID));
    return 0;
}
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcSpdApplyField_get_ExchangeID(PyCThostFtdcSpdApplyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcSpdApplyField_set_ExchangeID(PyCThostFtdcSpdApplyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
    // memcpy(self->data.ExchangeID, buf, len);
    strncpy(self->data.ExchangeID, buf, sizeof(self->data.ExchangeID));
    return 0;
}
            
///会员代码
// TThostFtdcParticipantIDType char[11]
static PyObject *PyCThostFtdcSpdApplyField_get_ParticipantID(PyCThostFtdcSpdApplyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParticipantID, (Py_ssize_t)sizeof(self->data.ParticipantID));
    return PyBytes_FromString(self->data.ParticipantID);
}

///会员代码
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcSpdApplyField_set_ParticipantID(PyCThostFtdcSpdApplyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.ParticipantID)) {
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
static PyObject *PyCThostFtdcSpdApplyField_get_ClientID(PyCThostFtdcSpdApplyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientID, (Py_ssize_t)sizeof(self->data.ClientID));
    return PyBytes_FromString(self->data.ClientID);
}

///客户代码
// TThostFtdcClientIDType char[11]
static int PyCThostFtdcSpdApplyField_set_ClientID(PyCThostFtdcSpdApplyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 11 bytes");
        return -1;
    }
    // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
    // memcpy(self->data.ClientID, buf, len);
    strncpy(self->data.ClientID, buf, sizeof(self->data.ClientID));
    return 0;
}
            
///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static PyObject *PyCThostFtdcSpdApplyField_get_ExchangeInstID(PyCThostFtdcSpdApplyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeInstID, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
    return PyBytes_FromString(self->data.ExchangeInstID);
}

///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static int PyCThostFtdcSpdApplyField_set_ExchangeInstID(PyCThostFtdcSpdApplyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.ExchangeInstID, 0, sizeof(self->data.ExchangeInstID));
    // memcpy(self->data.ExchangeInstID, buf, len);
    strncpy(self->data.ExchangeInstID, buf, sizeof(self->data.ExchangeInstID));
    return 0;
}
            
///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static PyObject *PyCThostFtdcSpdApplyField_get_TraderID(PyCThostFtdcSpdApplyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TraderID, (Py_ssize_t)sizeof(self->data.TraderID));
    return PyBytes_FromString(self->data.TraderID);
}

///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static int PyCThostFtdcSpdApplyField_set_TraderID(PyCThostFtdcSpdApplyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.TraderID)) {
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
static PyObject *PyCThostFtdcSpdApplyField_get_InstallID(PyCThostFtdcSpdApplyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcSpdApplyField_set_InstallID(PyCThostFtdcSpdApplyField *self, PyObject* val, void *closure) {
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
        
///报单提交状态
// TThostFtdcOrderSubmitStatusType char
static PyObject *PyCThostFtdcSpdApplyField_get_OrderSubmitStatus(PyCThostFtdcSpdApplyField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OrderSubmitStatus), 1);
}

///报单提交状态
// TThostFtdcOrderSubmitStatusType char
static int PyCThostFtdcSpdApplyField_set_OrderSubmitStatus(PyCThostFtdcSpdApplyField *self, PyObject* val, void *closure) {
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
            
///报单提示序号
// TThostFtdcSequenceNoType int
static PyObject *PyCThostFtdcSpdApplyField_get_NotifySequence(PyCThostFtdcSpdApplyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.NotifySequence);
#else
    return PyInt_FromLong(self->data.NotifySequence);
#endif
}

///报单提示序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcSpdApplyField_set_NotifySequence(PyCThostFtdcSpdApplyField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "NotifySequence Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "NotifySequence Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the NotifySequence value out of range for C int");
        return -1;
    }
    self->data.NotifySequence = (int)buf;
    return 0;
}
        
///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcSpdApplyField_get_TradingDay(PyCThostFtdcSpdApplyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcSpdApplyField_set_TradingDay(PyCThostFtdcSpdApplyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.TradingDay)) {
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
static PyObject *PyCThostFtdcSpdApplyField_get_SettlementID(PyCThostFtdcSpdApplyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SettlementID);
#else
    return PyInt_FromLong(self->data.SettlementID);
#endif
}

///结算编号
// TThostFtdcSettlementIDType int
static int PyCThostFtdcSpdApplyField_set_SettlementID(PyCThostFtdcSpdApplyField *self, PyObject* val, void *closure) {
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
        
///IP地址
// TThostFtdcIPAddressType char[33]
static PyObject *PyCThostFtdcSpdApplyField_get_IPAddress(PyCThostFtdcSpdApplyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcSpdApplyField_set_IPAddress(PyCThostFtdcSpdApplyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.IPAddress)) {
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
static PyObject *PyCThostFtdcSpdApplyField_get_MacAddress(PyCThostFtdcSpdApplyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcSpdApplyField_set_MacAddress(PyCThostFtdcSpdApplyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
    // memcpy(self->data.MacAddress, buf, len);
    strncpy(self->data.MacAddress, buf, sizeof(self->data.MacAddress));
    return 0;
}
            
///组合定单类型
// TThostFtdcCmbTypeType char
static PyObject *PyCThostFtdcSpdApplyField_get_CmbType(PyCThostFtdcSpdApplyField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.CmbType), 1);
}

///组合定单类型
// TThostFtdcCmbTypeType char
static int PyCThostFtdcSpdApplyField_set_CmbType(PyCThostFtdcSpdApplyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CmbType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CmbType)) {
        PyErr_SetString(PyExc_ValueError, "CmbType must be equal 1 bytes");
        return -1;
    }
    self->data.CmbType = *buf;
    return 0;
}
            
///状态信息
// TThostFtdcErrorMsgType char[81]
static PyObject *PyCThostFtdcSpdApplyField_get_StatusMsg(PyCThostFtdcSpdApplyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.StatusMsg, (Py_ssize_t)sizeof(self->data.StatusMsg));
    return PyBytes_FromString(self->data.StatusMsg);
}

///状态信息
// TThostFtdcErrorMsgType char[81]
static int PyCThostFtdcSpdApplyField_set_StatusMsg(PyCThostFtdcSpdApplyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "StatusMsg Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.StatusMsg)) {
        PyErr_SetString(PyExc_ValueError, "StatusMsg must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.StatusMsg, 0, sizeof(self->data.StatusMsg));
    // memcpy(self->data.StatusMsg, buf, len);
    strncpy(self->data.StatusMsg, buf, sizeof(self->data.StatusMsg));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcSpdApplyField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcSpdApplyField_get_BrokerID, (setter)PyCThostFtdcSpdApplyField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcSpdApplyField_get_InvestorID, (setter)PyCThostFtdcSpdApplyField_set_InvestorID, (char *)"InvestorID", NULL},
    ///合约代码 
    {(char *)"FirstLegInstrumentID", (getter)PyCThostFtdcSpdApplyField_get_FirstLegInstrumentID, (setter)PyCThostFtdcSpdApplyField_set_FirstLegInstrumentID, (char *)"FirstLegInstrumentID", NULL},
    ///合约代码 
    {(char *)"SecondLegInstrumentID", (getter)PyCThostFtdcSpdApplyField_get_SecondLegInstrumentID, (setter)PyCThostFtdcSpdApplyField_set_SecondLegInstrumentID, (char *)"SecondLegInstrumentID", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcSpdApplyField_get_UserID, (setter)PyCThostFtdcSpdApplyField_set_UserID, (char *)"UserID", NULL},
    ///数量 
    {(char *)"Volume", (getter)PyCThostFtdcSpdApplyField_get_Volume, (setter)PyCThostFtdcSpdApplyField_set_Volume, (char *)"Volume", NULL},
    ///买卖方向 
    {(char *)"Direction", (getter)PyCThostFtdcSpdApplyField_get_Direction, (setter)PyCThostFtdcSpdApplyField_set_Direction, (char *)"Direction", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcSpdApplyField_get_RequestID, (setter)PyCThostFtdcSpdApplyField_set_RequestID, (char *)"RequestID", NULL},
    ///前置编号 
    {(char *)"FrontID", (getter)PyCThostFtdcSpdApplyField_get_FrontID, (setter)PyCThostFtdcSpdApplyField_set_FrontID, (char *)"FrontID", NULL},
    ///会话编号 
    {(char *)"SessionID", (getter)PyCThostFtdcSpdApplyField_get_SessionID, (setter)PyCThostFtdcSpdApplyField_set_SessionID, (char *)"SessionID", NULL},
    ///报单引用 
    {(char *)"OrderRef", (getter)PyCThostFtdcSpdApplyField_get_OrderRef, (setter)PyCThostFtdcSpdApplyField_set_OrderRef, (char *)"OrderRef", NULL},
    ///操作用户代码 
    {(char *)"ActiveUserID", (getter)PyCThostFtdcSpdApplyField_get_ActiveUserID, (setter)PyCThostFtdcSpdApplyField_set_ActiveUserID, (char *)"ActiveUserID", NULL},
    ///经纪公司报单编号 
    {(char *)"BrokerOrderSeq", (getter)PyCThostFtdcSpdApplyField_get_BrokerOrderSeq, (setter)PyCThostFtdcSpdApplyField_set_BrokerOrderSeq, (char *)"BrokerOrderSeq", NULL},
    ///报单编号 
    {(char *)"OrderSysID", (getter)PyCThostFtdcSpdApplyField_get_OrderSysID, (setter)PyCThostFtdcSpdApplyField_set_OrderSysID, (char *)"OrderSysID", NULL},
    ///申请状态 
    {(char *)"ApplyStatus", (getter)PyCThostFtdcSpdApplyField_get_ApplyStatus, (setter)PyCThostFtdcSpdApplyField_set_ApplyStatus, (char *)"ApplyStatus", NULL},
    ///序号 
    {(char *)"SequenceNo", (getter)PyCThostFtdcSpdApplyField_get_SequenceNo, (setter)PyCThostFtdcSpdApplyField_set_SequenceNo, (char *)"SequenceNo", NULL},
    ///报单日期 
    {(char *)"InsertDate", (getter)PyCThostFtdcSpdApplyField_get_InsertDate, (setter)PyCThostFtdcSpdApplyField_set_InsertDate, (char *)"InsertDate", NULL},
    ///委托时间 
    {(char *)"InsertTime", (getter)PyCThostFtdcSpdApplyField_get_InsertTime, (setter)PyCThostFtdcSpdApplyField_set_InsertTime, (char *)"InsertTime", NULL},
    ///撤销时间 
    {(char *)"CancelTime", (getter)PyCThostFtdcSpdApplyField_get_CancelTime, (setter)PyCThostFtdcSpdApplyField_set_CancelTime, (char *)"CancelTime", NULL},
    ///本地报单编号 
    {(char *)"OrderLocalID", (getter)PyCThostFtdcSpdApplyField_get_OrderLocalID, (setter)PyCThostFtdcSpdApplyField_set_OrderLocalID, (char *)"OrderLocalID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcSpdApplyField_get_ExchangeID, (setter)PyCThostFtdcSpdApplyField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///会员代码 
    {(char *)"ParticipantID", (getter)PyCThostFtdcSpdApplyField_get_ParticipantID, (setter)PyCThostFtdcSpdApplyField_set_ParticipantID, (char *)"ParticipantID", NULL},
    ///客户代码 
    {(char *)"ClientID", (getter)PyCThostFtdcSpdApplyField_get_ClientID, (setter)PyCThostFtdcSpdApplyField_set_ClientID, (char *)"ClientID", NULL},
    ///合约在交易所的代码 
    {(char *)"ExchangeInstID", (getter)PyCThostFtdcSpdApplyField_get_ExchangeInstID, (setter)PyCThostFtdcSpdApplyField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
    ///交易所交易员代码 
    {(char *)"TraderID", (getter)PyCThostFtdcSpdApplyField_get_TraderID, (setter)PyCThostFtdcSpdApplyField_set_TraderID, (char *)"TraderID", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcSpdApplyField_get_InstallID, (setter)PyCThostFtdcSpdApplyField_set_InstallID, (char *)"InstallID", NULL},
    ///报单提交状态 
    {(char *)"OrderSubmitStatus", (getter)PyCThostFtdcSpdApplyField_get_OrderSubmitStatus, (setter)PyCThostFtdcSpdApplyField_set_OrderSubmitStatus, (char *)"OrderSubmitStatus", NULL},
    ///报单提示序号 
    {(char *)"NotifySequence", (getter)PyCThostFtdcSpdApplyField_get_NotifySequence, (setter)PyCThostFtdcSpdApplyField_set_NotifySequence, (char *)"NotifySequence", NULL},
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcSpdApplyField_get_TradingDay, (setter)PyCThostFtdcSpdApplyField_set_TradingDay, (char *)"TradingDay", NULL},
    ///结算编号 
    {(char *)"SettlementID", (getter)PyCThostFtdcSpdApplyField_get_SettlementID, (setter)PyCThostFtdcSpdApplyField_set_SettlementID, (char *)"SettlementID", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcSpdApplyField_get_IPAddress, (setter)PyCThostFtdcSpdApplyField_set_IPAddress, (char *)"IPAddress", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcSpdApplyField_get_MacAddress, (setter)PyCThostFtdcSpdApplyField_set_MacAddress, (char *)"MacAddress", NULL},
    ///组合定单类型 
    {(char *)"CmbType", (getter)PyCThostFtdcSpdApplyField_get_CmbType, (setter)PyCThostFtdcSpdApplyField_set_CmbType, (char *)"CmbType", NULL},
    ///状态信息 
    {(char *)"StatusMsg", (getter)PyCThostFtdcSpdApplyField_get_StatusMsg, (setter)PyCThostFtdcSpdApplyField_set_StatusMsg, (char *)"StatusMsg", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSpdApplyFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSpdApplyField",	/* tp_name */
	sizeof(PyCThostFtdcSpdApplyField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSpdApplyField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSpdApplyField_repr,   /* tp_repr */
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
	"CThostFtdcSpdApplyField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSpdApplyField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSpdApplyField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSpdApplyField_new,       /* tp_new */
};

int PyCThostFtdcSpdApplyFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSpdApplyField  */
	if (PyType_Ready(&PyCThostFtdcSpdApplyFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSpdApplyField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSpdApplyFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSpdApplyField", (PyObject *)&PyCThostFtdcSpdApplyFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSpdApplyField to module");
        Py_DECREF(&PyCThostFtdcSpdApplyFieldType);
		return -1;
    }

    return 0;
}
