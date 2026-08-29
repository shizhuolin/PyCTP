
#include "PyCThostFtdcHedgeCfmField.h"

///套保申请回报

static PyObject *PyCThostFtdcHedgeCfmField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcHedgeCfmField *self = (PyCThostFtdcHedgeCfmField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcHedgeCfmField_init(PyCThostFtdcHedgeCfmField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "InstrumentID", "UserID", "Volume", "Direction", "RequestID", "FrontID", "SessionID", "OrderRef", "ActiveUserID", "BrokerOrderSeq", "OrderSysID", "ApplyStatus", "SequenceNo", "DealVolume", "InsertDate", "InsertTime", "CancelTime", "ReqDate", "OrderLocalID", "ExchangeID", "ParticipantID", "ClientID", "ExchangeInstID", "TraderID", "InstallID", "OrderSubmitStatus", "NotifySequence", "TradingDay", "SettlementID", "StatusMsg", "IPAddress", "MacAddress",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *HedgeCfmField_BrokerID = NULL;
    Py_ssize_t HedgeCfmField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *HedgeCfmField_InvestorID = NULL;
    Py_ssize_t HedgeCfmField_InvestorID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *HedgeCfmField_InstrumentID = NULL;
    Py_ssize_t HedgeCfmField_InstrumentID_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *HedgeCfmField_UserID = NULL;
    Py_ssize_t HedgeCfmField_UserID_len = 0;
            
    ///数量
    // TThostFtdcVolumeType int
    int HedgeCfmField_Volume = 0;
        
    ///买卖方向
    // TThostFtdcDirectionType char
    char HedgeCfmField_Direction = 0;
            
    ///请求编号
    // TThostFtdcRequestIDType int
    int HedgeCfmField_RequestID = 0;
        
    ///前置编号
    // TThostFtdcFrontIDType int
    int HedgeCfmField_FrontID = 0;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    int HedgeCfmField_SessionID = 0;
        
    ///报单引用
    // TThostFtdcOrderRefType char[13]
    const char *HedgeCfmField_OrderRef = NULL;
    Py_ssize_t HedgeCfmField_OrderRef_len = 0;
            
    ///操作用户代码
    // TThostFtdcUserIDType char[16]
    const char *HedgeCfmField_ActiveUserID = NULL;
    Py_ssize_t HedgeCfmField_ActiveUserID_len = 0;
            
    ///经纪公司报单编号
    // TThostFtdcSequenceNoType int
    int HedgeCfmField_BrokerOrderSeq = 0;
        
    ///报单编号
    // TThostFtdcOrderSysIDType char[21]
    const char *HedgeCfmField_OrderSysID = NULL;
    Py_ssize_t HedgeCfmField_OrderSysID_len = 0;
            
    ///申请状态
    // TThostFtdcApplyStatusType char
    char HedgeCfmField_ApplyStatus = 0;
            
    ///序号
    // TThostFtdcSequenceNoType int
    int HedgeCfmField_SequenceNo = 0;
        
    ///成功处理数量
    // TThostFtdcVolumeType int
    int HedgeCfmField_DealVolume = 0;
        
    ///报单日期
    // TThostFtdcDateType char[9]
    const char *HedgeCfmField_InsertDate = NULL;
    Py_ssize_t HedgeCfmField_InsertDate_len = 0;
            
    ///委托时间
    // TThostFtdcTimeType char[9]
    const char *HedgeCfmField_InsertTime = NULL;
    Py_ssize_t HedgeCfmField_InsertTime_len = 0;
            
    ///撤销时间
    // TThostFtdcTimeType char[9]
    const char *HedgeCfmField_CancelTime = NULL;
    Py_ssize_t HedgeCfmField_CancelTime_len = 0;
            
    ///日期
    // TThostFtdcDateType char[9]
    const char *HedgeCfmField_ReqDate = NULL;
    Py_ssize_t HedgeCfmField_ReqDate_len = 0;
            
    ///本地报单编号
    // TThostFtdcOrderLocalIDType char[13]
    const char *HedgeCfmField_OrderLocalID = NULL;
    Py_ssize_t HedgeCfmField_OrderLocalID_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *HedgeCfmField_ExchangeID = NULL;
    Py_ssize_t HedgeCfmField_ExchangeID_len = 0;
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    const char *HedgeCfmField_ParticipantID = NULL;
    Py_ssize_t HedgeCfmField_ParticipantID_len = 0;
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    const char *HedgeCfmField_ClientID = NULL;
    Py_ssize_t HedgeCfmField_ClientID_len = 0;
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    const char *HedgeCfmField_ExchangeInstID = NULL;
    Py_ssize_t HedgeCfmField_ExchangeInstID_len = 0;
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    const char *HedgeCfmField_TraderID = NULL;
    Py_ssize_t HedgeCfmField_TraderID_len = 0;
            
    ///安装编号
    // TThostFtdcInstallIDType int
    int HedgeCfmField_InstallID = 0;
        
    ///报单提交状态
    // TThostFtdcOrderSubmitStatusType char
    char HedgeCfmField_OrderSubmitStatus = 0;
            
    ///报单提示序号
    // TThostFtdcSequenceNoType int
    int HedgeCfmField_NotifySequence = 0;
        
    ///交易日
    // TThostFtdcDateType char[9]
    const char *HedgeCfmField_TradingDay = NULL;
    Py_ssize_t HedgeCfmField_TradingDay_len = 0;
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    int HedgeCfmField_SettlementID = 0;
        
    ///状态信息
    // TThostFtdcErrorMsgType char[81]
    const char *HedgeCfmField_StatusMsg = NULL;
    Py_ssize_t HedgeCfmField_StatusMsg_len = 0;
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *HedgeCfmField_IPAddress = NULL;
    Py_ssize_t HedgeCfmField_IPAddress_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *HedgeCfmField_MacAddress = NULL;
    Py_ssize_t HedgeCfmField_MacAddress_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#iciiiy#y#iy#ciiy#y#y#y#y#y#y#y#y#y#iciy#iy#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#iciiis#s#is#ciis#s#s#s#s#s#s#s#s#s#icis#is#s#s#", (char **)kwlist
#endif

        , &HedgeCfmField_BrokerID, &HedgeCfmField_BrokerID_len 
        , &HedgeCfmField_InvestorID, &HedgeCfmField_InvestorID_len 
        , &HedgeCfmField_InstrumentID, &HedgeCfmField_InstrumentID_len 
        , &HedgeCfmField_UserID, &HedgeCfmField_UserID_len 
        , &HedgeCfmField_Volume 
        , &HedgeCfmField_Direction 
        , &HedgeCfmField_RequestID 
        , &HedgeCfmField_FrontID 
        , &HedgeCfmField_SessionID 
        , &HedgeCfmField_OrderRef, &HedgeCfmField_OrderRef_len 
        , &HedgeCfmField_ActiveUserID, &HedgeCfmField_ActiveUserID_len 
        , &HedgeCfmField_BrokerOrderSeq 
        , &HedgeCfmField_OrderSysID, &HedgeCfmField_OrderSysID_len 
        , &HedgeCfmField_ApplyStatus 
        , &HedgeCfmField_SequenceNo 
        , &HedgeCfmField_DealVolume 
        , &HedgeCfmField_InsertDate, &HedgeCfmField_InsertDate_len 
        , &HedgeCfmField_InsertTime, &HedgeCfmField_InsertTime_len 
        , &HedgeCfmField_CancelTime, &HedgeCfmField_CancelTime_len 
        , &HedgeCfmField_ReqDate, &HedgeCfmField_ReqDate_len 
        , &HedgeCfmField_OrderLocalID, &HedgeCfmField_OrderLocalID_len 
        , &HedgeCfmField_ExchangeID, &HedgeCfmField_ExchangeID_len 
        , &HedgeCfmField_ParticipantID, &HedgeCfmField_ParticipantID_len 
        , &HedgeCfmField_ClientID, &HedgeCfmField_ClientID_len 
        , &HedgeCfmField_ExchangeInstID, &HedgeCfmField_ExchangeInstID_len 
        , &HedgeCfmField_TraderID, &HedgeCfmField_TraderID_len 
        , &HedgeCfmField_InstallID 
        , &HedgeCfmField_OrderSubmitStatus 
        , &HedgeCfmField_NotifySequence 
        , &HedgeCfmField_TradingDay, &HedgeCfmField_TradingDay_len 
        , &HedgeCfmField_SettlementID 
        , &HedgeCfmField_StatusMsg, &HedgeCfmField_StatusMsg_len 
        , &HedgeCfmField_IPAddress, &HedgeCfmField_IPAddress_len 
        , &HedgeCfmField_MacAddress, &HedgeCfmField_MacAddress_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( HedgeCfmField_BrokerID != NULL ) {
        if(HedgeCfmField_BrokerID_len >= (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", HedgeCfmField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, HedgeCfmField_BrokerID, HedgeCfmField_BrokerID_len);        
        strncpy(self->data.BrokerID, HedgeCfmField_BrokerID, sizeof(self->data.BrokerID) );
        HedgeCfmField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( HedgeCfmField_InvestorID != NULL ) {
        if(HedgeCfmField_InvestorID_len >= (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", HedgeCfmField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, HedgeCfmField_InvestorID, HedgeCfmField_InvestorID_len);        
        strncpy(self->data.InvestorID, HedgeCfmField_InvestorID, sizeof(self->data.InvestorID) );
        HedgeCfmField_InvestorID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( HedgeCfmField_InstrumentID != NULL ) {
        if(HedgeCfmField_InstrumentID_len >= (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", HedgeCfmField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, HedgeCfmField_InstrumentID, HedgeCfmField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, HedgeCfmField_InstrumentID, sizeof(self->data.InstrumentID) );
        HedgeCfmField_InstrumentID = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( HedgeCfmField_UserID != NULL ) {
        if(HedgeCfmField_UserID_len >= (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", HedgeCfmField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, HedgeCfmField_UserID, HedgeCfmField_UserID_len);        
        strncpy(self->data.UserID, HedgeCfmField_UserID, sizeof(self->data.UserID) );
        HedgeCfmField_UserID = NULL;
    }
            
    ///数量
    // TThostFtdcVolumeType int
    self->data.Volume = HedgeCfmField_Volume;
        
    ///买卖方向
    // TThostFtdcDirectionType char
    self->data.Direction = HedgeCfmField_Direction;
            
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = HedgeCfmField_RequestID;
        
    ///前置编号
    // TThostFtdcFrontIDType int
    self->data.FrontID = HedgeCfmField_FrontID;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    self->data.SessionID = HedgeCfmField_SessionID;
        
    ///报单引用
    // TThostFtdcOrderRefType char[13]
    if( HedgeCfmField_OrderRef != NULL ) {
        if(HedgeCfmField_OrderRef_len >= (Py_ssize_t)sizeof(self->data.OrderRef)) {
            PyErr_Format(PyExc_ValueError, "OrderRef too long: length=%zd (max allowed is %zd)", HedgeCfmField_OrderRef_len, (Py_ssize_t)sizeof(self->data.OrderRef));
            return -1;
        }
        // memset(self->data.OrderRef, 0, sizeof(self->data.OrderRef));
        // memcpy(self->data.OrderRef, HedgeCfmField_OrderRef, HedgeCfmField_OrderRef_len);        
        strncpy(self->data.OrderRef, HedgeCfmField_OrderRef, sizeof(self->data.OrderRef) );
        HedgeCfmField_OrderRef = NULL;
    }
            
    ///操作用户代码
    // TThostFtdcUserIDType char[16]
    if( HedgeCfmField_ActiveUserID != NULL ) {
        if(HedgeCfmField_ActiveUserID_len >= (Py_ssize_t)sizeof(self->data.ActiveUserID)) {
            PyErr_Format(PyExc_ValueError, "ActiveUserID too long: length=%zd (max allowed is %zd)", HedgeCfmField_ActiveUserID_len, (Py_ssize_t)sizeof(self->data.ActiveUserID));
            return -1;
        }
        // memset(self->data.ActiveUserID, 0, sizeof(self->data.ActiveUserID));
        // memcpy(self->data.ActiveUserID, HedgeCfmField_ActiveUserID, HedgeCfmField_ActiveUserID_len);        
        strncpy(self->data.ActiveUserID, HedgeCfmField_ActiveUserID, sizeof(self->data.ActiveUserID) );
        HedgeCfmField_ActiveUserID = NULL;
    }
            
    ///经纪公司报单编号
    // TThostFtdcSequenceNoType int
    self->data.BrokerOrderSeq = HedgeCfmField_BrokerOrderSeq;
        
    ///报单编号
    // TThostFtdcOrderSysIDType char[21]
    if( HedgeCfmField_OrderSysID != NULL ) {
        if(HedgeCfmField_OrderSysID_len >= (Py_ssize_t)sizeof(self->data.OrderSysID)) {
            PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is %zd)", HedgeCfmField_OrderSysID_len, (Py_ssize_t)sizeof(self->data.OrderSysID));
            return -1;
        }
        // memset(self->data.OrderSysID, 0, sizeof(self->data.OrderSysID));
        // memcpy(self->data.OrderSysID, HedgeCfmField_OrderSysID, HedgeCfmField_OrderSysID_len);        
        strncpy(self->data.OrderSysID, HedgeCfmField_OrderSysID, sizeof(self->data.OrderSysID) );
        HedgeCfmField_OrderSysID = NULL;
    }
            
    ///申请状态
    // TThostFtdcApplyStatusType char
    self->data.ApplyStatus = HedgeCfmField_ApplyStatus;
            
    ///序号
    // TThostFtdcSequenceNoType int
    self->data.SequenceNo = HedgeCfmField_SequenceNo;
        
    ///成功处理数量
    // TThostFtdcVolumeType int
    self->data.DealVolume = HedgeCfmField_DealVolume;
        
    ///报单日期
    // TThostFtdcDateType char[9]
    if( HedgeCfmField_InsertDate != NULL ) {
        if(HedgeCfmField_InsertDate_len >= (Py_ssize_t)sizeof(self->data.InsertDate)) {
            PyErr_Format(PyExc_ValueError, "InsertDate too long: length=%zd (max allowed is %zd)", HedgeCfmField_InsertDate_len, (Py_ssize_t)sizeof(self->data.InsertDate));
            return -1;
        }
        // memset(self->data.InsertDate, 0, sizeof(self->data.InsertDate));
        // memcpy(self->data.InsertDate, HedgeCfmField_InsertDate, HedgeCfmField_InsertDate_len);        
        strncpy(self->data.InsertDate, HedgeCfmField_InsertDate, sizeof(self->data.InsertDate) );
        HedgeCfmField_InsertDate = NULL;
    }
            
    ///委托时间
    // TThostFtdcTimeType char[9]
    if( HedgeCfmField_InsertTime != NULL ) {
        if(HedgeCfmField_InsertTime_len >= (Py_ssize_t)sizeof(self->data.InsertTime)) {
            PyErr_Format(PyExc_ValueError, "InsertTime too long: length=%zd (max allowed is %zd)", HedgeCfmField_InsertTime_len, (Py_ssize_t)sizeof(self->data.InsertTime));
            return -1;
        }
        // memset(self->data.InsertTime, 0, sizeof(self->data.InsertTime));
        // memcpy(self->data.InsertTime, HedgeCfmField_InsertTime, HedgeCfmField_InsertTime_len);        
        strncpy(self->data.InsertTime, HedgeCfmField_InsertTime, sizeof(self->data.InsertTime) );
        HedgeCfmField_InsertTime = NULL;
    }
            
    ///撤销时间
    // TThostFtdcTimeType char[9]
    if( HedgeCfmField_CancelTime != NULL ) {
        if(HedgeCfmField_CancelTime_len >= (Py_ssize_t)sizeof(self->data.CancelTime)) {
            PyErr_Format(PyExc_ValueError, "CancelTime too long: length=%zd (max allowed is %zd)", HedgeCfmField_CancelTime_len, (Py_ssize_t)sizeof(self->data.CancelTime));
            return -1;
        }
        // memset(self->data.CancelTime, 0, sizeof(self->data.CancelTime));
        // memcpy(self->data.CancelTime, HedgeCfmField_CancelTime, HedgeCfmField_CancelTime_len);        
        strncpy(self->data.CancelTime, HedgeCfmField_CancelTime, sizeof(self->data.CancelTime) );
        HedgeCfmField_CancelTime = NULL;
    }
            
    ///日期
    // TThostFtdcDateType char[9]
    if( HedgeCfmField_ReqDate != NULL ) {
        if(HedgeCfmField_ReqDate_len >= (Py_ssize_t)sizeof(self->data.ReqDate)) {
            PyErr_Format(PyExc_ValueError, "ReqDate too long: length=%zd (max allowed is %zd)", HedgeCfmField_ReqDate_len, (Py_ssize_t)sizeof(self->data.ReqDate));
            return -1;
        }
        // memset(self->data.ReqDate, 0, sizeof(self->data.ReqDate));
        // memcpy(self->data.ReqDate, HedgeCfmField_ReqDate, HedgeCfmField_ReqDate_len);        
        strncpy(self->data.ReqDate, HedgeCfmField_ReqDate, sizeof(self->data.ReqDate) );
        HedgeCfmField_ReqDate = NULL;
    }
            
    ///本地报单编号
    // TThostFtdcOrderLocalIDType char[13]
    if( HedgeCfmField_OrderLocalID != NULL ) {
        if(HedgeCfmField_OrderLocalID_len >= (Py_ssize_t)sizeof(self->data.OrderLocalID)) {
            PyErr_Format(PyExc_ValueError, "OrderLocalID too long: length=%zd (max allowed is %zd)", HedgeCfmField_OrderLocalID_len, (Py_ssize_t)sizeof(self->data.OrderLocalID));
            return -1;
        }
        // memset(self->data.OrderLocalID, 0, sizeof(self->data.OrderLocalID));
        // memcpy(self->data.OrderLocalID, HedgeCfmField_OrderLocalID, HedgeCfmField_OrderLocalID_len);        
        strncpy(self->data.OrderLocalID, HedgeCfmField_OrderLocalID, sizeof(self->data.OrderLocalID) );
        HedgeCfmField_OrderLocalID = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( HedgeCfmField_ExchangeID != NULL ) {
        if(HedgeCfmField_ExchangeID_len >= (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", HedgeCfmField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, HedgeCfmField_ExchangeID, HedgeCfmField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, HedgeCfmField_ExchangeID, sizeof(self->data.ExchangeID) );
        HedgeCfmField_ExchangeID = NULL;
    }
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    if( HedgeCfmField_ParticipantID != NULL ) {
        if(HedgeCfmField_ParticipantID_len >= (Py_ssize_t)sizeof(self->data.ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", HedgeCfmField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
            return -1;
        }
        // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
        // memcpy(self->data.ParticipantID, HedgeCfmField_ParticipantID, HedgeCfmField_ParticipantID_len);        
        strncpy(self->data.ParticipantID, HedgeCfmField_ParticipantID, sizeof(self->data.ParticipantID) );
        HedgeCfmField_ParticipantID = NULL;
    }
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    if( HedgeCfmField_ClientID != NULL ) {
        if(HedgeCfmField_ClientID_len >= (Py_ssize_t)sizeof(self->data.ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", HedgeCfmField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
            return -1;
        }
        // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
        // memcpy(self->data.ClientID, HedgeCfmField_ClientID, HedgeCfmField_ClientID_len);        
        strncpy(self->data.ClientID, HedgeCfmField_ClientID, sizeof(self->data.ClientID) );
        HedgeCfmField_ClientID = NULL;
    }
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    if( HedgeCfmField_ExchangeInstID != NULL ) {
        if(HedgeCfmField_ExchangeInstID_len >= (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", HedgeCfmField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
            return -1;
        }
        // memset(self->data.ExchangeInstID, 0, sizeof(self->data.ExchangeInstID));
        // memcpy(self->data.ExchangeInstID, HedgeCfmField_ExchangeInstID, HedgeCfmField_ExchangeInstID_len);        
        strncpy(self->data.ExchangeInstID, HedgeCfmField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
        HedgeCfmField_ExchangeInstID = NULL;
    }
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    if( HedgeCfmField_TraderID != NULL ) {
        if(HedgeCfmField_TraderID_len >= (Py_ssize_t)sizeof(self->data.TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", HedgeCfmField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
            return -1;
        }
        // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
        // memcpy(self->data.TraderID, HedgeCfmField_TraderID, HedgeCfmField_TraderID_len);        
        strncpy(self->data.TraderID, HedgeCfmField_TraderID, sizeof(self->data.TraderID) );
        HedgeCfmField_TraderID = NULL;
    }
            
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = HedgeCfmField_InstallID;
        
    ///报单提交状态
    // TThostFtdcOrderSubmitStatusType char
    self->data.OrderSubmitStatus = HedgeCfmField_OrderSubmitStatus;
            
    ///报单提示序号
    // TThostFtdcSequenceNoType int
    self->data.NotifySequence = HedgeCfmField_NotifySequence;
        
    ///交易日
    // TThostFtdcDateType char[9]
    if( HedgeCfmField_TradingDay != NULL ) {
        if(HedgeCfmField_TradingDay_len >= (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", HedgeCfmField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, HedgeCfmField_TradingDay, HedgeCfmField_TradingDay_len);        
        strncpy(self->data.TradingDay, HedgeCfmField_TradingDay, sizeof(self->data.TradingDay) );
        HedgeCfmField_TradingDay = NULL;
    }
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    self->data.SettlementID = HedgeCfmField_SettlementID;
        
    ///状态信息
    // TThostFtdcErrorMsgType char[81]
    if( HedgeCfmField_StatusMsg != NULL ) {
        if(HedgeCfmField_StatusMsg_len >= (Py_ssize_t)sizeof(self->data.StatusMsg)) {
            PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is %zd)", HedgeCfmField_StatusMsg_len, (Py_ssize_t)sizeof(self->data.StatusMsg));
            return -1;
        }
        // memset(self->data.StatusMsg, 0, sizeof(self->data.StatusMsg));
        // memcpy(self->data.StatusMsg, HedgeCfmField_StatusMsg, HedgeCfmField_StatusMsg_len);        
        strncpy(self->data.StatusMsg, HedgeCfmField_StatusMsg, sizeof(self->data.StatusMsg) );
        HedgeCfmField_StatusMsg = NULL;
    }
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( HedgeCfmField_IPAddress != NULL ) {
        if(HedgeCfmField_IPAddress_len >= (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", HedgeCfmField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, HedgeCfmField_IPAddress, HedgeCfmField_IPAddress_len);        
        strncpy(self->data.IPAddress, HedgeCfmField_IPAddress, sizeof(self->data.IPAddress) );
        HedgeCfmField_IPAddress = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( HedgeCfmField_MacAddress != NULL ) {
        if(HedgeCfmField_MacAddress_len >= (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", HedgeCfmField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, HedgeCfmField_MacAddress, HedgeCfmField_MacAddress_len);        
        strncpy(self->data.MacAddress, HedgeCfmField_MacAddress, sizeof(self->data.MacAddress) );
        HedgeCfmField_MacAddress = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcHedgeCfmField_dealloc(PyCThostFtdcHedgeCfmField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcHedgeCfmField_repr(PyCThostFtdcHedgeCfmField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:i,s:i,s:y,s:y,s:i,s:y,s:c,s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:i,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:i,s:i,s:s,s:s,s:i,s:s,s:c,s:i,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:i,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
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
        ,"DealVolume", self->data.DealVolume 
        ,"InsertDate", self->data.InsertDate//, (Py_ssize_t)sizeof(self->data.InsertDate) 
        ,"InsertTime", self->data.InsertTime//, (Py_ssize_t)sizeof(self->data.InsertTime) 
        ,"CancelTime", self->data.CancelTime//, (Py_ssize_t)sizeof(self->data.CancelTime) 
        ,"ReqDate", self->data.ReqDate//, (Py_ssize_t)sizeof(self->data.ReqDate) 
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
        ,"StatusMsg", self->data.StatusMsg//, (Py_ssize_t)sizeof(self->data.StatusMsg) 
        ,"IPAddress", self->data.IPAddress//, (Py_ssize_t)sizeof(self->data.IPAddress) 
        ,"MacAddress", self->data.MacAddress//, (Py_ssize_t)sizeof(self->data.MacAddress) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcHedgeCfmField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcHedgeCfmField_get_BrokerID(PyCThostFtdcHedgeCfmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcHedgeCfmField_set_BrokerID(PyCThostFtdcHedgeCfmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcHedgeCfmField_get_InvestorID(PyCThostFtdcHedgeCfmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcHedgeCfmField_set_InvestorID(PyCThostFtdcHedgeCfmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcHedgeCfmField_get_InstrumentID(PyCThostFtdcHedgeCfmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcHedgeCfmField_set_InstrumentID(PyCThostFtdcHedgeCfmField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
    // memcpy(self->data.InstrumentID, buf, len);
    strncpy(self->data.InstrumentID, buf, sizeof(self->data.InstrumentID));
    return 0;
}
            
///用户代码
// TThostFtdcUserIDType char[16]
static PyObject *PyCThostFtdcHedgeCfmField_get_UserID(PyCThostFtdcHedgeCfmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcHedgeCfmField_set_UserID(PyCThostFtdcHedgeCfmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcHedgeCfmField_get_Volume(PyCThostFtdcHedgeCfmField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.Volume);
#else
    return PyInt_FromLong(self->data.Volume);
#endif
}

///数量
// TThostFtdcVolumeType int
static int PyCThostFtdcHedgeCfmField_set_Volume(PyCThostFtdcHedgeCfmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcHedgeCfmField_get_Direction(PyCThostFtdcHedgeCfmField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

///买卖方向
// TThostFtdcDirectionType char
static int PyCThostFtdcHedgeCfmField_set_Direction(PyCThostFtdcHedgeCfmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcHedgeCfmField_get_RequestID(PyCThostFtdcHedgeCfmField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcHedgeCfmField_set_RequestID(PyCThostFtdcHedgeCfmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcHedgeCfmField_get_FrontID(PyCThostFtdcHedgeCfmField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FrontID);
#else
    return PyInt_FromLong(self->data.FrontID);
#endif
}

///前置编号
// TThostFtdcFrontIDType int
static int PyCThostFtdcHedgeCfmField_set_FrontID(PyCThostFtdcHedgeCfmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcHedgeCfmField_get_SessionID(PyCThostFtdcHedgeCfmField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话编号
// TThostFtdcSessionIDType int
static int PyCThostFtdcHedgeCfmField_set_SessionID(PyCThostFtdcHedgeCfmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcHedgeCfmField_get_OrderRef(PyCThostFtdcHedgeCfmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderRef, (Py_ssize_t)sizeof(self->data.OrderRef));
    return PyBytes_FromString(self->data.OrderRef);
}

///报单引用
// TThostFtdcOrderRefType char[13]
static int PyCThostFtdcHedgeCfmField_set_OrderRef(PyCThostFtdcHedgeCfmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcHedgeCfmField_get_ActiveUserID(PyCThostFtdcHedgeCfmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActiveUserID, (Py_ssize_t)sizeof(self->data.ActiveUserID));
    return PyBytes_FromString(self->data.ActiveUserID);
}

///操作用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcHedgeCfmField_set_ActiveUserID(PyCThostFtdcHedgeCfmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcHedgeCfmField_get_BrokerOrderSeq(PyCThostFtdcHedgeCfmField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.BrokerOrderSeq);
#else
    return PyInt_FromLong(self->data.BrokerOrderSeq);
#endif
}

///经纪公司报单编号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcHedgeCfmField_set_BrokerOrderSeq(PyCThostFtdcHedgeCfmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcHedgeCfmField_get_OrderSysID(PyCThostFtdcHedgeCfmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderSysID, (Py_ssize_t)sizeof(self->data.OrderSysID));
    return PyBytes_FromString(self->data.OrderSysID);
}

///报单编号
// TThostFtdcOrderSysIDType char[21]
static int PyCThostFtdcHedgeCfmField_set_OrderSysID(PyCThostFtdcHedgeCfmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcHedgeCfmField_get_ApplyStatus(PyCThostFtdcHedgeCfmField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ApplyStatus), 1);
}

///申请状态
// TThostFtdcApplyStatusType char
static int PyCThostFtdcHedgeCfmField_set_ApplyStatus(PyCThostFtdcHedgeCfmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcHedgeCfmField_get_SequenceNo(PyCThostFtdcHedgeCfmField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SequenceNo);
#else
    return PyInt_FromLong(self->data.SequenceNo);
#endif
}

///序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcHedgeCfmField_set_SequenceNo(PyCThostFtdcHedgeCfmField *self, PyObject* val, void *closure) {
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
        
///成功处理数量
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcHedgeCfmField_get_DealVolume(PyCThostFtdcHedgeCfmField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.DealVolume);
#else
    return PyInt_FromLong(self->data.DealVolume);
#endif
}

///成功处理数量
// TThostFtdcVolumeType int
static int PyCThostFtdcHedgeCfmField_set_DealVolume(PyCThostFtdcHedgeCfmField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DealVolume Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DealVolume Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the DealVolume value out of range for C int");
        return -1;
    }
    self->data.DealVolume = (int)buf;
    return 0;
}
        
///报单日期
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcHedgeCfmField_get_InsertDate(PyCThostFtdcHedgeCfmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InsertDate, (Py_ssize_t)sizeof(self->data.InsertDate));
    return PyBytes_FromString(self->data.InsertDate);
}

///报单日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcHedgeCfmField_set_InsertDate(PyCThostFtdcHedgeCfmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcHedgeCfmField_get_InsertTime(PyCThostFtdcHedgeCfmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InsertTime, (Py_ssize_t)sizeof(self->data.InsertTime));
    return PyBytes_FromString(self->data.InsertTime);
}

///委托时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcHedgeCfmField_set_InsertTime(PyCThostFtdcHedgeCfmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcHedgeCfmField_get_CancelTime(PyCThostFtdcHedgeCfmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CancelTime, (Py_ssize_t)sizeof(self->data.CancelTime));
    return PyBytes_FromString(self->data.CancelTime);
}

///撤销时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcHedgeCfmField_set_CancelTime(PyCThostFtdcHedgeCfmField *self, PyObject* val, void *closure) {
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
            
///日期
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcHedgeCfmField_get_ReqDate(PyCThostFtdcHedgeCfmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ReqDate, (Py_ssize_t)sizeof(self->data.ReqDate));
    return PyBytes_FromString(self->data.ReqDate);
}

///日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcHedgeCfmField_set_ReqDate(PyCThostFtdcHedgeCfmField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ReqDate Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.ReqDate)) {
        PyErr_SetString(PyExc_ValueError, "ReqDate must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.ReqDate, 0, sizeof(self->data.ReqDate));
    // memcpy(self->data.ReqDate, buf, len);
    strncpy(self->data.ReqDate, buf, sizeof(self->data.ReqDate));
    return 0;
}
            
///本地报单编号
// TThostFtdcOrderLocalIDType char[13]
static PyObject *PyCThostFtdcHedgeCfmField_get_OrderLocalID(PyCThostFtdcHedgeCfmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderLocalID, (Py_ssize_t)sizeof(self->data.OrderLocalID));
    return PyBytes_FromString(self->data.OrderLocalID);
}

///本地报单编号
// TThostFtdcOrderLocalIDType char[13]
static int PyCThostFtdcHedgeCfmField_set_OrderLocalID(PyCThostFtdcHedgeCfmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcHedgeCfmField_get_ExchangeID(PyCThostFtdcHedgeCfmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcHedgeCfmField_set_ExchangeID(PyCThostFtdcHedgeCfmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcHedgeCfmField_get_ParticipantID(PyCThostFtdcHedgeCfmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParticipantID, (Py_ssize_t)sizeof(self->data.ParticipantID));
    return PyBytes_FromString(self->data.ParticipantID);
}

///会员代码
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcHedgeCfmField_set_ParticipantID(PyCThostFtdcHedgeCfmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcHedgeCfmField_get_ClientID(PyCThostFtdcHedgeCfmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientID, (Py_ssize_t)sizeof(self->data.ClientID));
    return PyBytes_FromString(self->data.ClientID);
}

///客户代码
// TThostFtdcClientIDType char[11]
static int PyCThostFtdcHedgeCfmField_set_ClientID(PyCThostFtdcHedgeCfmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcHedgeCfmField_get_ExchangeInstID(PyCThostFtdcHedgeCfmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeInstID, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
    return PyBytes_FromString(self->data.ExchangeInstID);
}

///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static int PyCThostFtdcHedgeCfmField_set_ExchangeInstID(PyCThostFtdcHedgeCfmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcHedgeCfmField_get_TraderID(PyCThostFtdcHedgeCfmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TraderID, (Py_ssize_t)sizeof(self->data.TraderID));
    return PyBytes_FromString(self->data.TraderID);
}

///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static int PyCThostFtdcHedgeCfmField_set_TraderID(PyCThostFtdcHedgeCfmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcHedgeCfmField_get_InstallID(PyCThostFtdcHedgeCfmField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcHedgeCfmField_set_InstallID(PyCThostFtdcHedgeCfmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcHedgeCfmField_get_OrderSubmitStatus(PyCThostFtdcHedgeCfmField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OrderSubmitStatus), 1);
}

///报单提交状态
// TThostFtdcOrderSubmitStatusType char
static int PyCThostFtdcHedgeCfmField_set_OrderSubmitStatus(PyCThostFtdcHedgeCfmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcHedgeCfmField_get_NotifySequence(PyCThostFtdcHedgeCfmField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.NotifySequence);
#else
    return PyInt_FromLong(self->data.NotifySequence);
#endif
}

///报单提示序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcHedgeCfmField_set_NotifySequence(PyCThostFtdcHedgeCfmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcHedgeCfmField_get_TradingDay(PyCThostFtdcHedgeCfmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcHedgeCfmField_set_TradingDay(PyCThostFtdcHedgeCfmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcHedgeCfmField_get_SettlementID(PyCThostFtdcHedgeCfmField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SettlementID);
#else
    return PyInt_FromLong(self->data.SettlementID);
#endif
}

///结算编号
// TThostFtdcSettlementIDType int
static int PyCThostFtdcHedgeCfmField_set_SettlementID(PyCThostFtdcHedgeCfmField *self, PyObject* val, void *closure) {
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
        
///状态信息
// TThostFtdcErrorMsgType char[81]
static PyObject *PyCThostFtdcHedgeCfmField_get_StatusMsg(PyCThostFtdcHedgeCfmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.StatusMsg, (Py_ssize_t)sizeof(self->data.StatusMsg));
    return PyBytes_FromString(self->data.StatusMsg);
}

///状态信息
// TThostFtdcErrorMsgType char[81]
static int PyCThostFtdcHedgeCfmField_set_StatusMsg(PyCThostFtdcHedgeCfmField *self, PyObject* val, void *closure) {
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
            
///IP地址
// TThostFtdcIPAddressType char[33]
static PyObject *PyCThostFtdcHedgeCfmField_get_IPAddress(PyCThostFtdcHedgeCfmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcHedgeCfmField_set_IPAddress(PyCThostFtdcHedgeCfmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcHedgeCfmField_get_MacAddress(PyCThostFtdcHedgeCfmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcHedgeCfmField_set_MacAddress(PyCThostFtdcHedgeCfmField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcHedgeCfmField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcHedgeCfmField_get_BrokerID, (setter)PyCThostFtdcHedgeCfmField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcHedgeCfmField_get_InvestorID, (setter)PyCThostFtdcHedgeCfmField_set_InvestorID, (char *)"InvestorID", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcHedgeCfmField_get_InstrumentID, (setter)PyCThostFtdcHedgeCfmField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcHedgeCfmField_get_UserID, (setter)PyCThostFtdcHedgeCfmField_set_UserID, (char *)"UserID", NULL},
    ///数量 
    {(char *)"Volume", (getter)PyCThostFtdcHedgeCfmField_get_Volume, (setter)PyCThostFtdcHedgeCfmField_set_Volume, (char *)"Volume", NULL},
    ///买卖方向 
    {(char *)"Direction", (getter)PyCThostFtdcHedgeCfmField_get_Direction, (setter)PyCThostFtdcHedgeCfmField_set_Direction, (char *)"Direction", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcHedgeCfmField_get_RequestID, (setter)PyCThostFtdcHedgeCfmField_set_RequestID, (char *)"RequestID", NULL},
    ///前置编号 
    {(char *)"FrontID", (getter)PyCThostFtdcHedgeCfmField_get_FrontID, (setter)PyCThostFtdcHedgeCfmField_set_FrontID, (char *)"FrontID", NULL},
    ///会话编号 
    {(char *)"SessionID", (getter)PyCThostFtdcHedgeCfmField_get_SessionID, (setter)PyCThostFtdcHedgeCfmField_set_SessionID, (char *)"SessionID", NULL},
    ///报单引用 
    {(char *)"OrderRef", (getter)PyCThostFtdcHedgeCfmField_get_OrderRef, (setter)PyCThostFtdcHedgeCfmField_set_OrderRef, (char *)"OrderRef", NULL},
    ///操作用户代码 
    {(char *)"ActiveUserID", (getter)PyCThostFtdcHedgeCfmField_get_ActiveUserID, (setter)PyCThostFtdcHedgeCfmField_set_ActiveUserID, (char *)"ActiveUserID", NULL},
    ///经纪公司报单编号 
    {(char *)"BrokerOrderSeq", (getter)PyCThostFtdcHedgeCfmField_get_BrokerOrderSeq, (setter)PyCThostFtdcHedgeCfmField_set_BrokerOrderSeq, (char *)"BrokerOrderSeq", NULL},
    ///报单编号 
    {(char *)"OrderSysID", (getter)PyCThostFtdcHedgeCfmField_get_OrderSysID, (setter)PyCThostFtdcHedgeCfmField_set_OrderSysID, (char *)"OrderSysID", NULL},
    ///申请状态 
    {(char *)"ApplyStatus", (getter)PyCThostFtdcHedgeCfmField_get_ApplyStatus, (setter)PyCThostFtdcHedgeCfmField_set_ApplyStatus, (char *)"ApplyStatus", NULL},
    ///序号 
    {(char *)"SequenceNo", (getter)PyCThostFtdcHedgeCfmField_get_SequenceNo, (setter)PyCThostFtdcHedgeCfmField_set_SequenceNo, (char *)"SequenceNo", NULL},
    ///成功处理数量 
    {(char *)"DealVolume", (getter)PyCThostFtdcHedgeCfmField_get_DealVolume, (setter)PyCThostFtdcHedgeCfmField_set_DealVolume, (char *)"DealVolume", NULL},
    ///报单日期 
    {(char *)"InsertDate", (getter)PyCThostFtdcHedgeCfmField_get_InsertDate, (setter)PyCThostFtdcHedgeCfmField_set_InsertDate, (char *)"InsertDate", NULL},
    ///委托时间 
    {(char *)"InsertTime", (getter)PyCThostFtdcHedgeCfmField_get_InsertTime, (setter)PyCThostFtdcHedgeCfmField_set_InsertTime, (char *)"InsertTime", NULL},
    ///撤销时间 
    {(char *)"CancelTime", (getter)PyCThostFtdcHedgeCfmField_get_CancelTime, (setter)PyCThostFtdcHedgeCfmField_set_CancelTime, (char *)"CancelTime", NULL},
    ///日期 
    {(char *)"ReqDate", (getter)PyCThostFtdcHedgeCfmField_get_ReqDate, (setter)PyCThostFtdcHedgeCfmField_set_ReqDate, (char *)"ReqDate", NULL},
    ///本地报单编号 
    {(char *)"OrderLocalID", (getter)PyCThostFtdcHedgeCfmField_get_OrderLocalID, (setter)PyCThostFtdcHedgeCfmField_set_OrderLocalID, (char *)"OrderLocalID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcHedgeCfmField_get_ExchangeID, (setter)PyCThostFtdcHedgeCfmField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///会员代码 
    {(char *)"ParticipantID", (getter)PyCThostFtdcHedgeCfmField_get_ParticipantID, (setter)PyCThostFtdcHedgeCfmField_set_ParticipantID, (char *)"ParticipantID", NULL},
    ///客户代码 
    {(char *)"ClientID", (getter)PyCThostFtdcHedgeCfmField_get_ClientID, (setter)PyCThostFtdcHedgeCfmField_set_ClientID, (char *)"ClientID", NULL},
    ///合约在交易所的代码 
    {(char *)"ExchangeInstID", (getter)PyCThostFtdcHedgeCfmField_get_ExchangeInstID, (setter)PyCThostFtdcHedgeCfmField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
    ///交易所交易员代码 
    {(char *)"TraderID", (getter)PyCThostFtdcHedgeCfmField_get_TraderID, (setter)PyCThostFtdcHedgeCfmField_set_TraderID, (char *)"TraderID", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcHedgeCfmField_get_InstallID, (setter)PyCThostFtdcHedgeCfmField_set_InstallID, (char *)"InstallID", NULL},
    ///报单提交状态 
    {(char *)"OrderSubmitStatus", (getter)PyCThostFtdcHedgeCfmField_get_OrderSubmitStatus, (setter)PyCThostFtdcHedgeCfmField_set_OrderSubmitStatus, (char *)"OrderSubmitStatus", NULL},
    ///报单提示序号 
    {(char *)"NotifySequence", (getter)PyCThostFtdcHedgeCfmField_get_NotifySequence, (setter)PyCThostFtdcHedgeCfmField_set_NotifySequence, (char *)"NotifySequence", NULL},
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcHedgeCfmField_get_TradingDay, (setter)PyCThostFtdcHedgeCfmField_set_TradingDay, (char *)"TradingDay", NULL},
    ///结算编号 
    {(char *)"SettlementID", (getter)PyCThostFtdcHedgeCfmField_get_SettlementID, (setter)PyCThostFtdcHedgeCfmField_set_SettlementID, (char *)"SettlementID", NULL},
    ///状态信息 
    {(char *)"StatusMsg", (getter)PyCThostFtdcHedgeCfmField_get_StatusMsg, (setter)PyCThostFtdcHedgeCfmField_set_StatusMsg, (char *)"StatusMsg", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcHedgeCfmField_get_IPAddress, (setter)PyCThostFtdcHedgeCfmField_set_IPAddress, (char *)"IPAddress", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcHedgeCfmField_get_MacAddress, (setter)PyCThostFtdcHedgeCfmField_set_MacAddress, (char *)"MacAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcHedgeCfmFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcHedgeCfmField",	/* tp_name */
	sizeof(PyCThostFtdcHedgeCfmField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcHedgeCfmField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcHedgeCfmField_repr,   /* tp_repr */
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
	"CThostFtdcHedgeCfmField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcHedgeCfmField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcHedgeCfmField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcHedgeCfmField_new,       /* tp_new */
};

int PyCThostFtdcHedgeCfmFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcHedgeCfmField  */
	if (PyType_Ready(&PyCThostFtdcHedgeCfmFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcHedgeCfmField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcHedgeCfmFieldType);
    if( PyModule_AddObject(module, "CThostFtdcHedgeCfmField", (PyObject *)&PyCThostFtdcHedgeCfmFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcHedgeCfmField to module");
        Py_DECREF(&PyCThostFtdcHedgeCfmFieldType);
		return -1;
    }

    return 0;
}
