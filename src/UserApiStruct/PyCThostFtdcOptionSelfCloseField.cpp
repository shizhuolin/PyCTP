
#include "PyCThostFtdcOptionSelfCloseField.h"

///期权自对冲

static PyObject *PyCThostFtdcOptionSelfCloseField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcOptionSelfCloseField *self = (PyCThostFtdcOptionSelfCloseField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcOptionSelfCloseField_init(PyCThostFtdcOptionSelfCloseField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "OptionSelfCloseRef", "UserID", "Volume", "RequestID", "BusinessUnit", "HedgeFlag", "OptSelfCloseFlag", "OptionSelfCloseLocalID", "ExchangeID", "ParticipantID", "ClientID", "reserve2", "TraderID", "InstallID", "OrderSubmitStatus", "NotifySequence", "TradingDay", "SettlementID", "OptionSelfCloseSysID", "InsertDate", "InsertTime", "CancelTime", "ExecResult", "ClearingPartID", "SequenceNo", "FrontID", "SessionID", "UserProductInfo", "StatusMsg", "ActiveUserID", "BrokerOptionSelfCloseSeq", "BranchID", "InvestUnitID", "AccountID", "CurrencyID", "reserve3", "MacAddress", "InstrumentID", "ExchangeInstID", "IPAddress",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *OptionSelfCloseField_BrokerID = NULL;
    Py_ssize_t OptionSelfCloseField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *OptionSelfCloseField_InvestorID = NULL;
    Py_ssize_t OptionSelfCloseField_InvestorID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *OptionSelfCloseField_reserve1 = NULL;
    Py_ssize_t OptionSelfCloseField_reserve1_len = 0;
            
    ///期权自对冲引用
    // TThostFtdcOrderRefType char[13]
    const char *OptionSelfCloseField_OptionSelfCloseRef = NULL;
    Py_ssize_t OptionSelfCloseField_OptionSelfCloseRef_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *OptionSelfCloseField_UserID = NULL;
    Py_ssize_t OptionSelfCloseField_UserID_len = 0;
            
    ///数量
    // TThostFtdcVolumeType int
    int OptionSelfCloseField_Volume = 0;
        
    ///请求编号
    // TThostFtdcRequestIDType int
    int OptionSelfCloseField_RequestID = 0;
        
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    const char *OptionSelfCloseField_BusinessUnit = NULL;
    Py_ssize_t OptionSelfCloseField_BusinessUnit_len = 0;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    char OptionSelfCloseField_HedgeFlag = 0;
            
    ///期权行权的头寸是否自对冲
    // TThostFtdcOptSelfCloseFlagType char
    char OptionSelfCloseField_OptSelfCloseFlag = 0;
            
    ///本地期权自对冲编号
    // TThostFtdcOrderLocalIDType char[13]
    const char *OptionSelfCloseField_OptionSelfCloseLocalID = NULL;
    Py_ssize_t OptionSelfCloseField_OptionSelfCloseLocalID_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *OptionSelfCloseField_ExchangeID = NULL;
    Py_ssize_t OptionSelfCloseField_ExchangeID_len = 0;
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    const char *OptionSelfCloseField_ParticipantID = NULL;
    Py_ssize_t OptionSelfCloseField_ParticipantID_len = 0;
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    const char *OptionSelfCloseField_ClientID = NULL;
    Py_ssize_t OptionSelfCloseField_ClientID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    const char *OptionSelfCloseField_reserve2 = NULL;
    Py_ssize_t OptionSelfCloseField_reserve2_len = 0;
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    const char *OptionSelfCloseField_TraderID = NULL;
    Py_ssize_t OptionSelfCloseField_TraderID_len = 0;
            
    ///安装编号
    // TThostFtdcInstallIDType int
    int OptionSelfCloseField_InstallID = 0;
        
    ///期权自对冲提交状态
    // TThostFtdcOrderSubmitStatusType char
    char OptionSelfCloseField_OrderSubmitStatus = 0;
            
    ///报单提示序号
    // TThostFtdcSequenceNoType int
    int OptionSelfCloseField_NotifySequence = 0;
        
    ///交易日
    // TThostFtdcDateType char[9]
    const char *OptionSelfCloseField_TradingDay = NULL;
    Py_ssize_t OptionSelfCloseField_TradingDay_len = 0;
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    int OptionSelfCloseField_SettlementID = 0;
        
    ///期权自对冲编号
    // TThostFtdcOrderSysIDType char[21]
    const char *OptionSelfCloseField_OptionSelfCloseSysID = NULL;
    Py_ssize_t OptionSelfCloseField_OptionSelfCloseSysID_len = 0;
            
    ///报单日期
    // TThostFtdcDateType char[9]
    const char *OptionSelfCloseField_InsertDate = NULL;
    Py_ssize_t OptionSelfCloseField_InsertDate_len = 0;
            
    ///插入时间
    // TThostFtdcTimeType char[9]
    const char *OptionSelfCloseField_InsertTime = NULL;
    Py_ssize_t OptionSelfCloseField_InsertTime_len = 0;
            
    ///撤销时间
    // TThostFtdcTimeType char[9]
    const char *OptionSelfCloseField_CancelTime = NULL;
    Py_ssize_t OptionSelfCloseField_CancelTime_len = 0;
            
    ///自对冲结果
    // TThostFtdcExecResultType char
    char OptionSelfCloseField_ExecResult = 0;
            
    ///结算会员编号
    // TThostFtdcParticipantIDType char[11]
    const char *OptionSelfCloseField_ClearingPartID = NULL;
    Py_ssize_t OptionSelfCloseField_ClearingPartID_len = 0;
            
    ///序号
    // TThostFtdcSequenceNoType int
    int OptionSelfCloseField_SequenceNo = 0;
        
    ///前置编号
    // TThostFtdcFrontIDType int
    int OptionSelfCloseField_FrontID = 0;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    int OptionSelfCloseField_SessionID = 0;
        
    ///用户端产品信息
    // TThostFtdcProductInfoType char[11]
    const char *OptionSelfCloseField_UserProductInfo = NULL;
    Py_ssize_t OptionSelfCloseField_UserProductInfo_len = 0;
            
    ///状态信息
    // TThostFtdcErrorMsgType char[81]
    const char *OptionSelfCloseField_StatusMsg = NULL;
    Py_ssize_t OptionSelfCloseField_StatusMsg_len = 0;
            
    ///操作用户代码
    // TThostFtdcUserIDType char[16]
    const char *OptionSelfCloseField_ActiveUserID = NULL;
    Py_ssize_t OptionSelfCloseField_ActiveUserID_len = 0;
            
    ///经纪公司报单编号
    // TThostFtdcSequenceNoType int
    int OptionSelfCloseField_BrokerOptionSelfCloseSeq = 0;
        
    ///营业部编号
    // TThostFtdcBranchIDType char[9]
    const char *OptionSelfCloseField_BranchID = NULL;
    Py_ssize_t OptionSelfCloseField_BranchID_len = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *OptionSelfCloseField_InvestUnitID = NULL;
    Py_ssize_t OptionSelfCloseField_InvestUnitID_len = 0;
            
    ///资金账号
    // TThostFtdcAccountIDType char[13]
    const char *OptionSelfCloseField_AccountID = NULL;
    Py_ssize_t OptionSelfCloseField_AccountID_len = 0;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *OptionSelfCloseField_CurrencyID = NULL;
    Py_ssize_t OptionSelfCloseField_CurrencyID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    const char *OptionSelfCloseField_reserve3 = NULL;
    Py_ssize_t OptionSelfCloseField_reserve3_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *OptionSelfCloseField_MacAddress = NULL;
    Py_ssize_t OptionSelfCloseField_MacAddress_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *OptionSelfCloseField_InstrumentID = NULL;
    Py_ssize_t OptionSelfCloseField_InstrumentID_len = 0;
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    const char *OptionSelfCloseField_ExchangeInstID = NULL;
    Py_ssize_t OptionSelfCloseField_ExchangeInstID_len = 0;
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *OptionSelfCloseField_IPAddress = NULL;
    Py_ssize_t OptionSelfCloseField_IPAddress_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#iiy#ccy#y#y#y#y#y#iciy#iy#y#y#y#cy#iiiy#y#y#iy#y#y#y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#iis#ccs#s#s#s#s#s#icis#is#s#s#s#cs#iiis#s#s#is#s#s#s#s#s#s#s#s#", (char **)kwlist
#endif

        , &OptionSelfCloseField_BrokerID, &OptionSelfCloseField_BrokerID_len 
        , &OptionSelfCloseField_InvestorID, &OptionSelfCloseField_InvestorID_len 
        , &OptionSelfCloseField_reserve1, &OptionSelfCloseField_reserve1_len 
        , &OptionSelfCloseField_OptionSelfCloseRef, &OptionSelfCloseField_OptionSelfCloseRef_len 
        , &OptionSelfCloseField_UserID, &OptionSelfCloseField_UserID_len 
        , &OptionSelfCloseField_Volume 
        , &OptionSelfCloseField_RequestID 
        , &OptionSelfCloseField_BusinessUnit, &OptionSelfCloseField_BusinessUnit_len 
        , &OptionSelfCloseField_HedgeFlag 
        , &OptionSelfCloseField_OptSelfCloseFlag 
        , &OptionSelfCloseField_OptionSelfCloseLocalID, &OptionSelfCloseField_OptionSelfCloseLocalID_len 
        , &OptionSelfCloseField_ExchangeID, &OptionSelfCloseField_ExchangeID_len 
        , &OptionSelfCloseField_ParticipantID, &OptionSelfCloseField_ParticipantID_len 
        , &OptionSelfCloseField_ClientID, &OptionSelfCloseField_ClientID_len 
        , &OptionSelfCloseField_reserve2, &OptionSelfCloseField_reserve2_len 
        , &OptionSelfCloseField_TraderID, &OptionSelfCloseField_TraderID_len 
        , &OptionSelfCloseField_InstallID 
        , &OptionSelfCloseField_OrderSubmitStatus 
        , &OptionSelfCloseField_NotifySequence 
        , &OptionSelfCloseField_TradingDay, &OptionSelfCloseField_TradingDay_len 
        , &OptionSelfCloseField_SettlementID 
        , &OptionSelfCloseField_OptionSelfCloseSysID, &OptionSelfCloseField_OptionSelfCloseSysID_len 
        , &OptionSelfCloseField_InsertDate, &OptionSelfCloseField_InsertDate_len 
        , &OptionSelfCloseField_InsertTime, &OptionSelfCloseField_InsertTime_len 
        , &OptionSelfCloseField_CancelTime, &OptionSelfCloseField_CancelTime_len 
        , &OptionSelfCloseField_ExecResult 
        , &OptionSelfCloseField_ClearingPartID, &OptionSelfCloseField_ClearingPartID_len 
        , &OptionSelfCloseField_SequenceNo 
        , &OptionSelfCloseField_FrontID 
        , &OptionSelfCloseField_SessionID 
        , &OptionSelfCloseField_UserProductInfo, &OptionSelfCloseField_UserProductInfo_len 
        , &OptionSelfCloseField_StatusMsg, &OptionSelfCloseField_StatusMsg_len 
        , &OptionSelfCloseField_ActiveUserID, &OptionSelfCloseField_ActiveUserID_len 
        , &OptionSelfCloseField_BrokerOptionSelfCloseSeq 
        , &OptionSelfCloseField_BranchID, &OptionSelfCloseField_BranchID_len 
        , &OptionSelfCloseField_InvestUnitID, &OptionSelfCloseField_InvestUnitID_len 
        , &OptionSelfCloseField_AccountID, &OptionSelfCloseField_AccountID_len 
        , &OptionSelfCloseField_CurrencyID, &OptionSelfCloseField_CurrencyID_len 
        , &OptionSelfCloseField_reserve3, &OptionSelfCloseField_reserve3_len 
        , &OptionSelfCloseField_MacAddress, &OptionSelfCloseField_MacAddress_len 
        , &OptionSelfCloseField_InstrumentID, &OptionSelfCloseField_InstrumentID_len 
        , &OptionSelfCloseField_ExchangeInstID, &OptionSelfCloseField_ExchangeInstID_len 
        , &OptionSelfCloseField_IPAddress, &OptionSelfCloseField_IPAddress_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( OptionSelfCloseField_BrokerID != NULL ) {
        if(OptionSelfCloseField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", OptionSelfCloseField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, OptionSelfCloseField_BrokerID, OptionSelfCloseField_BrokerID_len);        
        strncpy(self->data.BrokerID, OptionSelfCloseField_BrokerID, sizeof(self->data.BrokerID) );
        OptionSelfCloseField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( OptionSelfCloseField_InvestorID != NULL ) {
        if(OptionSelfCloseField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", OptionSelfCloseField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, OptionSelfCloseField_InvestorID, OptionSelfCloseField_InvestorID_len);        
        strncpy(self->data.InvestorID, OptionSelfCloseField_InvestorID, sizeof(self->data.InvestorID) );
        OptionSelfCloseField_InvestorID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( OptionSelfCloseField_reserve1 != NULL ) {
        if(OptionSelfCloseField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", OptionSelfCloseField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, OptionSelfCloseField_reserve1, OptionSelfCloseField_reserve1_len);        
        strncpy(self->data.reserve1, OptionSelfCloseField_reserve1, sizeof(self->data.reserve1) );
        OptionSelfCloseField_reserve1 = NULL;
    }
            
    ///期权自对冲引用
    // TThostFtdcOrderRefType char[13]
    if( OptionSelfCloseField_OptionSelfCloseRef != NULL ) {
        if(OptionSelfCloseField_OptionSelfCloseRef_len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseRef)) {
            PyErr_Format(PyExc_ValueError, "OptionSelfCloseRef too long: length=%zd (max allowed is %zd)", OptionSelfCloseField_OptionSelfCloseRef_len, (Py_ssize_t)sizeof(self->data.OptionSelfCloseRef));
            return -1;
        }
        // memset(self->data.OptionSelfCloseRef, 0, sizeof(self->data.OptionSelfCloseRef));
        // memcpy(self->data.OptionSelfCloseRef, OptionSelfCloseField_OptionSelfCloseRef, OptionSelfCloseField_OptionSelfCloseRef_len);        
        strncpy(self->data.OptionSelfCloseRef, OptionSelfCloseField_OptionSelfCloseRef, sizeof(self->data.OptionSelfCloseRef) );
        OptionSelfCloseField_OptionSelfCloseRef = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( OptionSelfCloseField_UserID != NULL ) {
        if(OptionSelfCloseField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", OptionSelfCloseField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, OptionSelfCloseField_UserID, OptionSelfCloseField_UserID_len);        
        strncpy(self->data.UserID, OptionSelfCloseField_UserID, sizeof(self->data.UserID) );
        OptionSelfCloseField_UserID = NULL;
    }
            
    ///数量
    // TThostFtdcVolumeType int
    self->data.Volume = OptionSelfCloseField_Volume;
        
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = OptionSelfCloseField_RequestID;
        
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    if( OptionSelfCloseField_BusinessUnit != NULL ) {
        if(OptionSelfCloseField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", OptionSelfCloseField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
            return -1;
        }
        // memset(self->data.BusinessUnit, 0, sizeof(self->data.BusinessUnit));
        // memcpy(self->data.BusinessUnit, OptionSelfCloseField_BusinessUnit, OptionSelfCloseField_BusinessUnit_len);        
        strncpy(self->data.BusinessUnit, OptionSelfCloseField_BusinessUnit, sizeof(self->data.BusinessUnit) );
        OptionSelfCloseField_BusinessUnit = NULL;
    }
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    self->data.HedgeFlag = OptionSelfCloseField_HedgeFlag;
            
    ///期权行权的头寸是否自对冲
    // TThostFtdcOptSelfCloseFlagType char
    self->data.OptSelfCloseFlag = OptionSelfCloseField_OptSelfCloseFlag;
            
    ///本地期权自对冲编号
    // TThostFtdcOrderLocalIDType char[13]
    if( OptionSelfCloseField_OptionSelfCloseLocalID != NULL ) {
        if(OptionSelfCloseField_OptionSelfCloseLocalID_len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseLocalID)) {
            PyErr_Format(PyExc_ValueError, "OptionSelfCloseLocalID too long: length=%zd (max allowed is %zd)", OptionSelfCloseField_OptionSelfCloseLocalID_len, (Py_ssize_t)sizeof(self->data.OptionSelfCloseLocalID));
            return -1;
        }
        // memset(self->data.OptionSelfCloseLocalID, 0, sizeof(self->data.OptionSelfCloseLocalID));
        // memcpy(self->data.OptionSelfCloseLocalID, OptionSelfCloseField_OptionSelfCloseLocalID, OptionSelfCloseField_OptionSelfCloseLocalID_len);        
        strncpy(self->data.OptionSelfCloseLocalID, OptionSelfCloseField_OptionSelfCloseLocalID, sizeof(self->data.OptionSelfCloseLocalID) );
        OptionSelfCloseField_OptionSelfCloseLocalID = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( OptionSelfCloseField_ExchangeID != NULL ) {
        if(OptionSelfCloseField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", OptionSelfCloseField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, OptionSelfCloseField_ExchangeID, OptionSelfCloseField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, OptionSelfCloseField_ExchangeID, sizeof(self->data.ExchangeID) );
        OptionSelfCloseField_ExchangeID = NULL;
    }
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    if( OptionSelfCloseField_ParticipantID != NULL ) {
        if(OptionSelfCloseField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", OptionSelfCloseField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
            return -1;
        }
        // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
        // memcpy(self->data.ParticipantID, OptionSelfCloseField_ParticipantID, OptionSelfCloseField_ParticipantID_len);        
        strncpy(self->data.ParticipantID, OptionSelfCloseField_ParticipantID, sizeof(self->data.ParticipantID) );
        OptionSelfCloseField_ParticipantID = NULL;
    }
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    if( OptionSelfCloseField_ClientID != NULL ) {
        if(OptionSelfCloseField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", OptionSelfCloseField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
            return -1;
        }
        // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
        // memcpy(self->data.ClientID, OptionSelfCloseField_ClientID, OptionSelfCloseField_ClientID_len);        
        strncpy(self->data.ClientID, OptionSelfCloseField_ClientID, sizeof(self->data.ClientID) );
        OptionSelfCloseField_ClientID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    if( OptionSelfCloseField_reserve2 != NULL ) {
        if(OptionSelfCloseField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", OptionSelfCloseField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
            return -1;
        }
        // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
        // memcpy(self->data.reserve2, OptionSelfCloseField_reserve2, OptionSelfCloseField_reserve2_len);        
        strncpy(self->data.reserve2, OptionSelfCloseField_reserve2, sizeof(self->data.reserve2) );
        OptionSelfCloseField_reserve2 = NULL;
    }
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    if( OptionSelfCloseField_TraderID != NULL ) {
        if(OptionSelfCloseField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", OptionSelfCloseField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
            return -1;
        }
        // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
        // memcpy(self->data.TraderID, OptionSelfCloseField_TraderID, OptionSelfCloseField_TraderID_len);        
        strncpy(self->data.TraderID, OptionSelfCloseField_TraderID, sizeof(self->data.TraderID) );
        OptionSelfCloseField_TraderID = NULL;
    }
            
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = OptionSelfCloseField_InstallID;
        
    ///期权自对冲提交状态
    // TThostFtdcOrderSubmitStatusType char
    self->data.OrderSubmitStatus = OptionSelfCloseField_OrderSubmitStatus;
            
    ///报单提示序号
    // TThostFtdcSequenceNoType int
    self->data.NotifySequence = OptionSelfCloseField_NotifySequence;
        
    ///交易日
    // TThostFtdcDateType char[9]
    if( OptionSelfCloseField_TradingDay != NULL ) {
        if(OptionSelfCloseField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", OptionSelfCloseField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, OptionSelfCloseField_TradingDay, OptionSelfCloseField_TradingDay_len);        
        strncpy(self->data.TradingDay, OptionSelfCloseField_TradingDay, sizeof(self->data.TradingDay) );
        OptionSelfCloseField_TradingDay = NULL;
    }
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    self->data.SettlementID = OptionSelfCloseField_SettlementID;
        
    ///期权自对冲编号
    // TThostFtdcOrderSysIDType char[21]
    if( OptionSelfCloseField_OptionSelfCloseSysID != NULL ) {
        if(OptionSelfCloseField_OptionSelfCloseSysID_len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseSysID)) {
            PyErr_Format(PyExc_ValueError, "OptionSelfCloseSysID too long: length=%zd (max allowed is %zd)", OptionSelfCloseField_OptionSelfCloseSysID_len, (Py_ssize_t)sizeof(self->data.OptionSelfCloseSysID));
            return -1;
        }
        // memset(self->data.OptionSelfCloseSysID, 0, sizeof(self->data.OptionSelfCloseSysID));
        // memcpy(self->data.OptionSelfCloseSysID, OptionSelfCloseField_OptionSelfCloseSysID, OptionSelfCloseField_OptionSelfCloseSysID_len);        
        strncpy(self->data.OptionSelfCloseSysID, OptionSelfCloseField_OptionSelfCloseSysID, sizeof(self->data.OptionSelfCloseSysID) );
        OptionSelfCloseField_OptionSelfCloseSysID = NULL;
    }
            
    ///报单日期
    // TThostFtdcDateType char[9]
    if( OptionSelfCloseField_InsertDate != NULL ) {
        if(OptionSelfCloseField_InsertDate_len > (Py_ssize_t)sizeof(self->data.InsertDate)) {
            PyErr_Format(PyExc_ValueError, "InsertDate too long: length=%zd (max allowed is %zd)", OptionSelfCloseField_InsertDate_len, (Py_ssize_t)sizeof(self->data.InsertDate));
            return -1;
        }
        // memset(self->data.InsertDate, 0, sizeof(self->data.InsertDate));
        // memcpy(self->data.InsertDate, OptionSelfCloseField_InsertDate, OptionSelfCloseField_InsertDate_len);        
        strncpy(self->data.InsertDate, OptionSelfCloseField_InsertDate, sizeof(self->data.InsertDate) );
        OptionSelfCloseField_InsertDate = NULL;
    }
            
    ///插入时间
    // TThostFtdcTimeType char[9]
    if( OptionSelfCloseField_InsertTime != NULL ) {
        if(OptionSelfCloseField_InsertTime_len > (Py_ssize_t)sizeof(self->data.InsertTime)) {
            PyErr_Format(PyExc_ValueError, "InsertTime too long: length=%zd (max allowed is %zd)", OptionSelfCloseField_InsertTime_len, (Py_ssize_t)sizeof(self->data.InsertTime));
            return -1;
        }
        // memset(self->data.InsertTime, 0, sizeof(self->data.InsertTime));
        // memcpy(self->data.InsertTime, OptionSelfCloseField_InsertTime, OptionSelfCloseField_InsertTime_len);        
        strncpy(self->data.InsertTime, OptionSelfCloseField_InsertTime, sizeof(self->data.InsertTime) );
        OptionSelfCloseField_InsertTime = NULL;
    }
            
    ///撤销时间
    // TThostFtdcTimeType char[9]
    if( OptionSelfCloseField_CancelTime != NULL ) {
        if(OptionSelfCloseField_CancelTime_len > (Py_ssize_t)sizeof(self->data.CancelTime)) {
            PyErr_Format(PyExc_ValueError, "CancelTime too long: length=%zd (max allowed is %zd)", OptionSelfCloseField_CancelTime_len, (Py_ssize_t)sizeof(self->data.CancelTime));
            return -1;
        }
        // memset(self->data.CancelTime, 0, sizeof(self->data.CancelTime));
        // memcpy(self->data.CancelTime, OptionSelfCloseField_CancelTime, OptionSelfCloseField_CancelTime_len);        
        strncpy(self->data.CancelTime, OptionSelfCloseField_CancelTime, sizeof(self->data.CancelTime) );
        OptionSelfCloseField_CancelTime = NULL;
    }
            
    ///自对冲结果
    // TThostFtdcExecResultType char
    self->data.ExecResult = OptionSelfCloseField_ExecResult;
            
    ///结算会员编号
    // TThostFtdcParticipantIDType char[11]
    if( OptionSelfCloseField_ClearingPartID != NULL ) {
        if(OptionSelfCloseField_ClearingPartID_len > (Py_ssize_t)sizeof(self->data.ClearingPartID)) {
            PyErr_Format(PyExc_ValueError, "ClearingPartID too long: length=%zd (max allowed is %zd)", OptionSelfCloseField_ClearingPartID_len, (Py_ssize_t)sizeof(self->data.ClearingPartID));
            return -1;
        }
        // memset(self->data.ClearingPartID, 0, sizeof(self->data.ClearingPartID));
        // memcpy(self->data.ClearingPartID, OptionSelfCloseField_ClearingPartID, OptionSelfCloseField_ClearingPartID_len);        
        strncpy(self->data.ClearingPartID, OptionSelfCloseField_ClearingPartID, sizeof(self->data.ClearingPartID) );
        OptionSelfCloseField_ClearingPartID = NULL;
    }
            
    ///序号
    // TThostFtdcSequenceNoType int
    self->data.SequenceNo = OptionSelfCloseField_SequenceNo;
        
    ///前置编号
    // TThostFtdcFrontIDType int
    self->data.FrontID = OptionSelfCloseField_FrontID;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    self->data.SessionID = OptionSelfCloseField_SessionID;
        
    ///用户端产品信息
    // TThostFtdcProductInfoType char[11]
    if( OptionSelfCloseField_UserProductInfo != NULL ) {
        if(OptionSelfCloseField_UserProductInfo_len > (Py_ssize_t)sizeof(self->data.UserProductInfo)) {
            PyErr_Format(PyExc_ValueError, "UserProductInfo too long: length=%zd (max allowed is %zd)", OptionSelfCloseField_UserProductInfo_len, (Py_ssize_t)sizeof(self->data.UserProductInfo));
            return -1;
        }
        // memset(self->data.UserProductInfo, 0, sizeof(self->data.UserProductInfo));
        // memcpy(self->data.UserProductInfo, OptionSelfCloseField_UserProductInfo, OptionSelfCloseField_UserProductInfo_len);        
        strncpy(self->data.UserProductInfo, OptionSelfCloseField_UserProductInfo, sizeof(self->data.UserProductInfo) );
        OptionSelfCloseField_UserProductInfo = NULL;
    }
            
    ///状态信息
    // TThostFtdcErrorMsgType char[81]
    if( OptionSelfCloseField_StatusMsg != NULL ) {
        if(OptionSelfCloseField_StatusMsg_len > (Py_ssize_t)sizeof(self->data.StatusMsg)) {
            PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is %zd)", OptionSelfCloseField_StatusMsg_len, (Py_ssize_t)sizeof(self->data.StatusMsg));
            return -1;
        }
        // memset(self->data.StatusMsg, 0, sizeof(self->data.StatusMsg));
        // memcpy(self->data.StatusMsg, OptionSelfCloseField_StatusMsg, OptionSelfCloseField_StatusMsg_len);        
        strncpy(self->data.StatusMsg, OptionSelfCloseField_StatusMsg, sizeof(self->data.StatusMsg) );
        OptionSelfCloseField_StatusMsg = NULL;
    }
            
    ///操作用户代码
    // TThostFtdcUserIDType char[16]
    if( OptionSelfCloseField_ActiveUserID != NULL ) {
        if(OptionSelfCloseField_ActiveUserID_len > (Py_ssize_t)sizeof(self->data.ActiveUserID)) {
            PyErr_Format(PyExc_ValueError, "ActiveUserID too long: length=%zd (max allowed is %zd)", OptionSelfCloseField_ActiveUserID_len, (Py_ssize_t)sizeof(self->data.ActiveUserID));
            return -1;
        }
        // memset(self->data.ActiveUserID, 0, sizeof(self->data.ActiveUserID));
        // memcpy(self->data.ActiveUserID, OptionSelfCloseField_ActiveUserID, OptionSelfCloseField_ActiveUserID_len);        
        strncpy(self->data.ActiveUserID, OptionSelfCloseField_ActiveUserID, sizeof(self->data.ActiveUserID) );
        OptionSelfCloseField_ActiveUserID = NULL;
    }
            
    ///经纪公司报单编号
    // TThostFtdcSequenceNoType int
    self->data.BrokerOptionSelfCloseSeq = OptionSelfCloseField_BrokerOptionSelfCloseSeq;
        
    ///营业部编号
    // TThostFtdcBranchIDType char[9]
    if( OptionSelfCloseField_BranchID != NULL ) {
        if(OptionSelfCloseField_BranchID_len > (Py_ssize_t)sizeof(self->data.BranchID)) {
            PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is %zd)", OptionSelfCloseField_BranchID_len, (Py_ssize_t)sizeof(self->data.BranchID));
            return -1;
        }
        // memset(self->data.BranchID, 0, sizeof(self->data.BranchID));
        // memcpy(self->data.BranchID, OptionSelfCloseField_BranchID, OptionSelfCloseField_BranchID_len);        
        strncpy(self->data.BranchID, OptionSelfCloseField_BranchID, sizeof(self->data.BranchID) );
        OptionSelfCloseField_BranchID = NULL;
    }
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( OptionSelfCloseField_InvestUnitID != NULL ) {
        if(OptionSelfCloseField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", OptionSelfCloseField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, OptionSelfCloseField_InvestUnitID, OptionSelfCloseField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, OptionSelfCloseField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        OptionSelfCloseField_InvestUnitID = NULL;
    }
            
    ///资金账号
    // TThostFtdcAccountIDType char[13]
    if( OptionSelfCloseField_AccountID != NULL ) {
        if(OptionSelfCloseField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", OptionSelfCloseField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
            return -1;
        }
        // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
        // memcpy(self->data.AccountID, OptionSelfCloseField_AccountID, OptionSelfCloseField_AccountID_len);        
        strncpy(self->data.AccountID, OptionSelfCloseField_AccountID, sizeof(self->data.AccountID) );
        OptionSelfCloseField_AccountID = NULL;
    }
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( OptionSelfCloseField_CurrencyID != NULL ) {
        if(OptionSelfCloseField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", OptionSelfCloseField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, OptionSelfCloseField_CurrencyID, OptionSelfCloseField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, OptionSelfCloseField_CurrencyID, sizeof(self->data.CurrencyID) );
        OptionSelfCloseField_CurrencyID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    if( OptionSelfCloseField_reserve3 != NULL ) {
        if(OptionSelfCloseField_reserve3_len > (Py_ssize_t)sizeof(self->data.reserve3)) {
            PyErr_Format(PyExc_ValueError, "reserve3 too long: length=%zd (max allowed is %zd)", OptionSelfCloseField_reserve3_len, (Py_ssize_t)sizeof(self->data.reserve3));
            return -1;
        }
        // memset(self->data.reserve3, 0, sizeof(self->data.reserve3));
        // memcpy(self->data.reserve3, OptionSelfCloseField_reserve3, OptionSelfCloseField_reserve3_len);        
        strncpy(self->data.reserve3, OptionSelfCloseField_reserve3, sizeof(self->data.reserve3) );
        OptionSelfCloseField_reserve3 = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( OptionSelfCloseField_MacAddress != NULL ) {
        if(OptionSelfCloseField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", OptionSelfCloseField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, OptionSelfCloseField_MacAddress, OptionSelfCloseField_MacAddress_len);        
        strncpy(self->data.MacAddress, OptionSelfCloseField_MacAddress, sizeof(self->data.MacAddress) );
        OptionSelfCloseField_MacAddress = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( OptionSelfCloseField_InstrumentID != NULL ) {
        if(OptionSelfCloseField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", OptionSelfCloseField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, OptionSelfCloseField_InstrumentID, OptionSelfCloseField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, OptionSelfCloseField_InstrumentID, sizeof(self->data.InstrumentID) );
        OptionSelfCloseField_InstrumentID = NULL;
    }
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    if( OptionSelfCloseField_ExchangeInstID != NULL ) {
        if(OptionSelfCloseField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", OptionSelfCloseField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
            return -1;
        }
        // memset(self->data.ExchangeInstID, 0, sizeof(self->data.ExchangeInstID));
        // memcpy(self->data.ExchangeInstID, OptionSelfCloseField_ExchangeInstID, OptionSelfCloseField_ExchangeInstID_len);        
        strncpy(self->data.ExchangeInstID, OptionSelfCloseField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
        OptionSelfCloseField_ExchangeInstID = NULL;
    }
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( OptionSelfCloseField_IPAddress != NULL ) {
        if(OptionSelfCloseField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", OptionSelfCloseField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, OptionSelfCloseField_IPAddress, OptionSelfCloseField_IPAddress_len);        
        strncpy(self->data.IPAddress, OptionSelfCloseField_IPAddress, sizeof(self->data.IPAddress) );
        OptionSelfCloseField_IPAddress = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcOptionSelfCloseField_dealloc(PyCThostFtdcOptionSelfCloseField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcOptionSelfCloseField_repr(PyCThostFtdcOptionSelfCloseField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:c,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:i,s:y,s:y,s:y,s:y,s:c,s:y,s:i,s:i,s:i,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:i,s:i,s:s,s:c,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:i,s:s,s:s,s:s,s:s,s:c,s:s,s:i,s:i,s:i,s:s,s:s,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"OptionSelfCloseRef", self->data.OptionSelfCloseRef//, (Py_ssize_t)sizeof(self->data.OptionSelfCloseRef) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"Volume", self->data.Volume 
        ,"RequestID", self->data.RequestID 
        ,"BusinessUnit", self->data.BusinessUnit//, (Py_ssize_t)sizeof(self->data.BusinessUnit) 
        ,"HedgeFlag", self->data.HedgeFlag 
        ,"OptSelfCloseFlag", self->data.OptSelfCloseFlag 
        ,"OptionSelfCloseLocalID", self->data.OptionSelfCloseLocalID//, (Py_ssize_t)sizeof(self->data.OptionSelfCloseLocalID) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"ParticipantID", self->data.ParticipantID//, (Py_ssize_t)sizeof(self->data.ParticipantID) 
        ,"ClientID", self->data.ClientID//, (Py_ssize_t)sizeof(self->data.ClientID) 
        ,"reserve2", self->data.reserve2//, (Py_ssize_t)sizeof(self->data.reserve2) 
        ,"TraderID", self->data.TraderID//, (Py_ssize_t)sizeof(self->data.TraderID) 
        ,"InstallID", self->data.InstallID 
        ,"OrderSubmitStatus", self->data.OrderSubmitStatus 
        ,"NotifySequence", self->data.NotifySequence 
        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"SettlementID", self->data.SettlementID 
        ,"OptionSelfCloseSysID", self->data.OptionSelfCloseSysID//, (Py_ssize_t)sizeof(self->data.OptionSelfCloseSysID) 
        ,"InsertDate", self->data.InsertDate//, (Py_ssize_t)sizeof(self->data.InsertDate) 
        ,"InsertTime", self->data.InsertTime//, (Py_ssize_t)sizeof(self->data.InsertTime) 
        ,"CancelTime", self->data.CancelTime//, (Py_ssize_t)sizeof(self->data.CancelTime) 
        ,"ExecResult", self->data.ExecResult 
        ,"ClearingPartID", self->data.ClearingPartID//, (Py_ssize_t)sizeof(self->data.ClearingPartID) 
        ,"SequenceNo", self->data.SequenceNo 
        ,"FrontID", self->data.FrontID 
        ,"SessionID", self->data.SessionID 
        ,"UserProductInfo", self->data.UserProductInfo//, (Py_ssize_t)sizeof(self->data.UserProductInfo) 
        ,"StatusMsg", self->data.StatusMsg//, (Py_ssize_t)sizeof(self->data.StatusMsg) 
        ,"ActiveUserID", self->data.ActiveUserID//, (Py_ssize_t)sizeof(self->data.ActiveUserID) 
        ,"BrokerOptionSelfCloseSeq", self->data.BrokerOptionSelfCloseSeq 
        ,"BranchID", self->data.BranchID//, (Py_ssize_t)sizeof(self->data.BranchID) 
        ,"InvestUnitID", self->data.InvestUnitID//, (Py_ssize_t)sizeof(self->data.InvestUnitID) 
        ,"AccountID", self->data.AccountID//, (Py_ssize_t)sizeof(self->data.AccountID) 
        ,"CurrencyID", self->data.CurrencyID//, (Py_ssize_t)sizeof(self->data.CurrencyID) 
        ,"reserve3", self->data.reserve3//, (Py_ssize_t)sizeof(self->data.reserve3) 
        ,"MacAddress", self->data.MacAddress//, (Py_ssize_t)sizeof(self->data.MacAddress) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"ExchangeInstID", self->data.ExchangeInstID//, (Py_ssize_t)sizeof(self->data.ExchangeInstID) 
        ,"IPAddress", self->data.IPAddress//, (Py_ssize_t)sizeof(self->data.IPAddress) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcOptionSelfCloseField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcOptionSelfCloseField_get_BrokerID(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcOptionSelfCloseField_set_BrokerID(PyCThostFtdcOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOptionSelfCloseField_get_InvestorID(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcOptionSelfCloseField_set_InvestorID(PyCThostFtdcOptionSelfCloseField *self, PyObject* val, void *closure) {
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
            
///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcOptionSelfCloseField_get_reserve1(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcOptionSelfCloseField_set_reserve1(PyCThostFtdcOptionSelfCloseField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 31 bytes");
        return -1;
    }
    // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
    // memcpy(self->data.reserve1, buf, len);
    strncpy(self->data.reserve1, buf, sizeof(self->data.reserve1));
    return 0;
}
            
///期权自对冲引用
// TThostFtdcOrderRefType char[13]
static PyObject *PyCThostFtdcOptionSelfCloseField_get_OptionSelfCloseRef(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OptionSelfCloseRef, (Py_ssize_t)sizeof(self->data.OptionSelfCloseRef));
    return PyBytes_FromString(self->data.OptionSelfCloseRef);
}

///期权自对冲引用
// TThostFtdcOrderRefType char[13]
static int PyCThostFtdcOptionSelfCloseField_set_OptionSelfCloseRef(PyCThostFtdcOptionSelfCloseField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OptionSelfCloseRef Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseRef)) {
        PyErr_SetString(PyExc_ValueError, "OptionSelfCloseRef must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.OptionSelfCloseRef, 0, sizeof(self->data.OptionSelfCloseRef));
    // memcpy(self->data.OptionSelfCloseRef, buf, len);
    strncpy(self->data.OptionSelfCloseRef, buf, sizeof(self->data.OptionSelfCloseRef));
    return 0;
}
            
///用户代码
// TThostFtdcUserIDType char[16]
static PyObject *PyCThostFtdcOptionSelfCloseField_get_UserID(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcOptionSelfCloseField_set_UserID(PyCThostFtdcOptionSelfCloseField *self, PyObject* val, void *closure) {
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
            
///数量
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcOptionSelfCloseField_get_Volume(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.Volume);
#else
    return PyInt_FromLong(self->data.Volume);
#endif
}

///数量
// TThostFtdcVolumeType int
static int PyCThostFtdcOptionSelfCloseField_set_Volume(PyCThostFtdcOptionSelfCloseField *self, PyObject* val, void *closure) {
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
        
///请求编号
// TThostFtdcRequestIDType int
static PyObject *PyCThostFtdcOptionSelfCloseField_get_RequestID(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcOptionSelfCloseField_set_RequestID(PyCThostFtdcOptionSelfCloseField *self, PyObject* val, void *closure) {
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
        
///业务单元
// TThostFtdcBusinessUnitType char[21]
static PyObject *PyCThostFtdcOptionSelfCloseField_get_BusinessUnit(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BusinessUnit, (Py_ssize_t)sizeof(self->data.BusinessUnit));
    return PyBytes_FromString(self->data.BusinessUnit);
}

///业务单元
// TThostFtdcBusinessUnitType char[21]
static int PyCThostFtdcOptionSelfCloseField_set_BusinessUnit(PyCThostFtdcOptionSelfCloseField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BusinessUnit Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
        PyErr_SetString(PyExc_ValueError, "BusinessUnit must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.BusinessUnit, 0, sizeof(self->data.BusinessUnit));
    // memcpy(self->data.BusinessUnit, buf, len);
    strncpy(self->data.BusinessUnit, buf, sizeof(self->data.BusinessUnit));
    return 0;
}
            
///投机套保标志
// TThostFtdcHedgeFlagType char
static PyObject *PyCThostFtdcOptionSelfCloseField_get_HedgeFlag(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

///投机套保标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcOptionSelfCloseField_set_HedgeFlag(PyCThostFtdcOptionSelfCloseField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    self->data.HedgeFlag = *buf;
    return 0;
}
            
///期权行权的头寸是否自对冲
// TThostFtdcOptSelfCloseFlagType char
static PyObject *PyCThostFtdcOptionSelfCloseField_get_OptSelfCloseFlag(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OptSelfCloseFlag), 1);
}

///期权行权的头寸是否自对冲
// TThostFtdcOptSelfCloseFlagType char
static int PyCThostFtdcOptionSelfCloseField_set_OptSelfCloseFlag(PyCThostFtdcOptionSelfCloseField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OptSelfCloseFlag Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OptSelfCloseFlag)) {
        PyErr_SetString(PyExc_ValueError, "OptSelfCloseFlag must be equal 1 bytes");
        return -1;
    }
    self->data.OptSelfCloseFlag = *buf;
    return 0;
}
            
///本地期权自对冲编号
// TThostFtdcOrderLocalIDType char[13]
static PyObject *PyCThostFtdcOptionSelfCloseField_get_OptionSelfCloseLocalID(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OptionSelfCloseLocalID, (Py_ssize_t)sizeof(self->data.OptionSelfCloseLocalID));
    return PyBytes_FromString(self->data.OptionSelfCloseLocalID);
}

///本地期权自对冲编号
// TThostFtdcOrderLocalIDType char[13]
static int PyCThostFtdcOptionSelfCloseField_set_OptionSelfCloseLocalID(PyCThostFtdcOptionSelfCloseField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OptionSelfCloseLocalID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseLocalID)) {
        PyErr_SetString(PyExc_ValueError, "OptionSelfCloseLocalID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.OptionSelfCloseLocalID, 0, sizeof(self->data.OptionSelfCloseLocalID));
    // memcpy(self->data.OptionSelfCloseLocalID, buf, len);
    strncpy(self->data.OptionSelfCloseLocalID, buf, sizeof(self->data.OptionSelfCloseLocalID));
    return 0;
}
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcOptionSelfCloseField_get_ExchangeID(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcOptionSelfCloseField_set_ExchangeID(PyCThostFtdcOptionSelfCloseField *self, PyObject* val, void *closure) {
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
            
///会员代码
// TThostFtdcParticipantIDType char[11]
static PyObject *PyCThostFtdcOptionSelfCloseField_get_ParticipantID(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParticipantID, (Py_ssize_t)sizeof(self->data.ParticipantID));
    return PyBytes_FromString(self->data.ParticipantID);
}

///会员代码
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcOptionSelfCloseField_set_ParticipantID(PyCThostFtdcOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOptionSelfCloseField_get_ClientID(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientID, (Py_ssize_t)sizeof(self->data.ClientID));
    return PyBytes_FromString(self->data.ClientID);
}

///客户代码
// TThostFtdcClientIDType char[11]
static int PyCThostFtdcOptionSelfCloseField_set_ClientID(PyCThostFtdcOptionSelfCloseField *self, PyObject* val, void *closure) {
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
            
///保留的无效字段
// TThostFtdcOldExchangeInstIDType char[31]
static PyObject *PyCThostFtdcOptionSelfCloseField_get_reserve2(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve2, (Py_ssize_t)sizeof(self->data.reserve2));
    return PyBytes_FromString(self->data.reserve2);
}

///保留的无效字段
// TThostFtdcOldExchangeInstIDType char[31]
static int PyCThostFtdcOptionSelfCloseField_set_reserve2(PyCThostFtdcOptionSelfCloseField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 31 bytes");
        return -1;
    }
    // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
    // memcpy(self->data.reserve2, buf, len);
    strncpy(self->data.reserve2, buf, sizeof(self->data.reserve2));
    return 0;
}
            
///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static PyObject *PyCThostFtdcOptionSelfCloseField_get_TraderID(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TraderID, (Py_ssize_t)sizeof(self->data.TraderID));
    return PyBytes_FromString(self->data.TraderID);
}

///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static int PyCThostFtdcOptionSelfCloseField_set_TraderID(PyCThostFtdcOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOptionSelfCloseField_get_InstallID(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcOptionSelfCloseField_set_InstallID(PyCThostFtdcOptionSelfCloseField *self, PyObject* val, void *closure) {
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
        
///期权自对冲提交状态
// TThostFtdcOrderSubmitStatusType char
static PyObject *PyCThostFtdcOptionSelfCloseField_get_OrderSubmitStatus(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OrderSubmitStatus), 1);
}

///期权自对冲提交状态
// TThostFtdcOrderSubmitStatusType char
static int PyCThostFtdcOptionSelfCloseField_set_OrderSubmitStatus(PyCThostFtdcOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOptionSelfCloseField_get_NotifySequence(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.NotifySequence);
#else
    return PyInt_FromLong(self->data.NotifySequence);
#endif
}

///报单提示序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcOptionSelfCloseField_set_NotifySequence(PyCThostFtdcOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOptionSelfCloseField_get_TradingDay(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcOptionSelfCloseField_set_TradingDay(PyCThostFtdcOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOptionSelfCloseField_get_SettlementID(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SettlementID);
#else
    return PyInt_FromLong(self->data.SettlementID);
#endif
}

///结算编号
// TThostFtdcSettlementIDType int
static int PyCThostFtdcOptionSelfCloseField_set_SettlementID(PyCThostFtdcOptionSelfCloseField *self, PyObject* val, void *closure) {
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
        
///期权自对冲编号
// TThostFtdcOrderSysIDType char[21]
static PyObject *PyCThostFtdcOptionSelfCloseField_get_OptionSelfCloseSysID(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OptionSelfCloseSysID, (Py_ssize_t)sizeof(self->data.OptionSelfCloseSysID));
    return PyBytes_FromString(self->data.OptionSelfCloseSysID);
}

///期权自对冲编号
// TThostFtdcOrderSysIDType char[21]
static int PyCThostFtdcOptionSelfCloseField_set_OptionSelfCloseSysID(PyCThostFtdcOptionSelfCloseField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OptionSelfCloseSysID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseSysID)) {
        PyErr_SetString(PyExc_ValueError, "OptionSelfCloseSysID must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.OptionSelfCloseSysID, 0, sizeof(self->data.OptionSelfCloseSysID));
    // memcpy(self->data.OptionSelfCloseSysID, buf, len);
    strncpy(self->data.OptionSelfCloseSysID, buf, sizeof(self->data.OptionSelfCloseSysID));
    return 0;
}
            
///报单日期
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcOptionSelfCloseField_get_InsertDate(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InsertDate, (Py_ssize_t)sizeof(self->data.InsertDate));
    return PyBytes_FromString(self->data.InsertDate);
}

///报单日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcOptionSelfCloseField_set_InsertDate(PyCThostFtdcOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOptionSelfCloseField_get_InsertTime(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InsertTime, (Py_ssize_t)sizeof(self->data.InsertTime));
    return PyBytes_FromString(self->data.InsertTime);
}

///插入时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcOptionSelfCloseField_set_InsertTime(PyCThostFtdcOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOptionSelfCloseField_get_CancelTime(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CancelTime, (Py_ssize_t)sizeof(self->data.CancelTime));
    return PyBytes_FromString(self->data.CancelTime);
}

///撤销时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcOptionSelfCloseField_set_CancelTime(PyCThostFtdcOptionSelfCloseField *self, PyObject* val, void *closure) {
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
            
///自对冲结果
// TThostFtdcExecResultType char
static PyObject *PyCThostFtdcOptionSelfCloseField_get_ExecResult(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ExecResult), 1);
}

///自对冲结果
// TThostFtdcExecResultType char
static int PyCThostFtdcOptionSelfCloseField_set_ExecResult(PyCThostFtdcOptionSelfCloseField *self, PyObject* val, void *closure) {
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
            
///结算会员编号
// TThostFtdcParticipantIDType char[11]
static PyObject *PyCThostFtdcOptionSelfCloseField_get_ClearingPartID(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClearingPartID, (Py_ssize_t)sizeof(self->data.ClearingPartID));
    return PyBytes_FromString(self->data.ClearingPartID);
}

///结算会员编号
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcOptionSelfCloseField_set_ClearingPartID(PyCThostFtdcOptionSelfCloseField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ClearingPartID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ClearingPartID)) {
        PyErr_SetString(PyExc_ValueError, "ClearingPartID must be less than 11 bytes");
        return -1;
    }
    // memset(self->data.ClearingPartID, 0, sizeof(self->data.ClearingPartID));
    // memcpy(self->data.ClearingPartID, buf, len);
    strncpy(self->data.ClearingPartID, buf, sizeof(self->data.ClearingPartID));
    return 0;
}
            
///序号
// TThostFtdcSequenceNoType int
static PyObject *PyCThostFtdcOptionSelfCloseField_get_SequenceNo(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SequenceNo);
#else
    return PyInt_FromLong(self->data.SequenceNo);
#endif
}

///序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcOptionSelfCloseField_set_SequenceNo(PyCThostFtdcOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOptionSelfCloseField_get_FrontID(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FrontID);
#else
    return PyInt_FromLong(self->data.FrontID);
#endif
}

///前置编号
// TThostFtdcFrontIDType int
static int PyCThostFtdcOptionSelfCloseField_set_FrontID(PyCThostFtdcOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOptionSelfCloseField_get_SessionID(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话编号
// TThostFtdcSessionIDType int
static int PyCThostFtdcOptionSelfCloseField_set_SessionID(PyCThostFtdcOptionSelfCloseField *self, PyObject* val, void *closure) {
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
        
///用户端产品信息
// TThostFtdcProductInfoType char[11]
static PyObject *PyCThostFtdcOptionSelfCloseField_get_UserProductInfo(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserProductInfo, (Py_ssize_t)sizeof(self->data.UserProductInfo));
    return PyBytes_FromString(self->data.UserProductInfo);
}

///用户端产品信息
// TThostFtdcProductInfoType char[11]
static int PyCThostFtdcOptionSelfCloseField_set_UserProductInfo(PyCThostFtdcOptionSelfCloseField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UserProductInfo Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.UserProductInfo)) {
        PyErr_SetString(PyExc_ValueError, "UserProductInfo must be less than 11 bytes");
        return -1;
    }
    // memset(self->data.UserProductInfo, 0, sizeof(self->data.UserProductInfo));
    // memcpy(self->data.UserProductInfo, buf, len);
    strncpy(self->data.UserProductInfo, buf, sizeof(self->data.UserProductInfo));
    return 0;
}
            
///状态信息
// TThostFtdcErrorMsgType char[81]
static PyObject *PyCThostFtdcOptionSelfCloseField_get_StatusMsg(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.StatusMsg, (Py_ssize_t)sizeof(self->data.StatusMsg));
    return PyBytes_FromString(self->data.StatusMsg);
}

///状态信息
// TThostFtdcErrorMsgType char[81]
static int PyCThostFtdcOptionSelfCloseField_set_StatusMsg(PyCThostFtdcOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOptionSelfCloseField_get_ActiveUserID(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActiveUserID, (Py_ssize_t)sizeof(self->data.ActiveUserID));
    return PyBytes_FromString(self->data.ActiveUserID);
}

///操作用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcOptionSelfCloseField_set_ActiveUserID(PyCThostFtdcOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOptionSelfCloseField_get_BrokerOptionSelfCloseSeq(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.BrokerOptionSelfCloseSeq);
#else
    return PyInt_FromLong(self->data.BrokerOptionSelfCloseSeq);
#endif
}

///经纪公司报单编号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcOptionSelfCloseField_set_BrokerOptionSelfCloseSeq(PyCThostFtdcOptionSelfCloseField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BrokerOptionSelfCloseSeq Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BrokerOptionSelfCloseSeq Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the BrokerOptionSelfCloseSeq value out of range for C int");
        return -1;
    }
    self->data.BrokerOptionSelfCloseSeq = (int)buf;
    return 0;
}
        
///营业部编号
// TThostFtdcBranchIDType char[9]
static PyObject *PyCThostFtdcOptionSelfCloseField_get_BranchID(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BranchID, (Py_ssize_t)sizeof(self->data.BranchID));
    return PyBytes_FromString(self->data.BranchID);
}

///营业部编号
// TThostFtdcBranchIDType char[9]
static int PyCThostFtdcOptionSelfCloseField_set_BranchID(PyCThostFtdcOptionSelfCloseField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BranchID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BranchID)) {
        PyErr_SetString(PyExc_ValueError, "BranchID must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.BranchID, 0, sizeof(self->data.BranchID));
    // memcpy(self->data.BranchID, buf, len);
    strncpy(self->data.BranchID, buf, sizeof(self->data.BranchID));
    return 0;
}
            
///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static PyObject *PyCThostFtdcOptionSelfCloseField_get_InvestUnitID(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcOptionSelfCloseField_set_InvestUnitID(PyCThostFtdcOptionSelfCloseField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 17 bytes");
        return -1;
    }
    // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
    // memcpy(self->data.InvestUnitID, buf, len);
    strncpy(self->data.InvestUnitID, buf, sizeof(self->data.InvestUnitID));
    return 0;
}
            
///资金账号
// TThostFtdcAccountIDType char[13]
static PyObject *PyCThostFtdcOptionSelfCloseField_get_AccountID(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AccountID, (Py_ssize_t)sizeof(self->data.AccountID));
    return PyBytes_FromString(self->data.AccountID);
}

///资金账号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcOptionSelfCloseField_set_AccountID(PyCThostFtdcOptionSelfCloseField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
    // memcpy(self->data.AccountID, buf, len);
    strncpy(self->data.AccountID, buf, sizeof(self->data.AccountID));
    return 0;
}
            
///币种代码
// TThostFtdcCurrencyIDType char[4]
static PyObject *PyCThostFtdcOptionSelfCloseField_get_CurrencyID(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcOptionSelfCloseField_set_CurrencyID(PyCThostFtdcOptionSelfCloseField *self, PyObject* val, void *closure) {
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
            
///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static PyObject *PyCThostFtdcOptionSelfCloseField_get_reserve3(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve3, (Py_ssize_t)sizeof(self->data.reserve3));
    return PyBytes_FromString(self->data.reserve3);
}

///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static int PyCThostFtdcOptionSelfCloseField_set_reserve3(PyCThostFtdcOptionSelfCloseField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "reserve3 Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.reserve3)) {
        PyErr_SetString(PyExc_ValueError, "reserve3 must be less than 16 bytes");
        return -1;
    }
    // memset(self->data.reserve3, 0, sizeof(self->data.reserve3));
    // memcpy(self->data.reserve3, buf, len);
    strncpy(self->data.reserve3, buf, sizeof(self->data.reserve3));
    return 0;
}
            
///Mac地址
// TThostFtdcMacAddressType char[21]
static PyObject *PyCThostFtdcOptionSelfCloseField_get_MacAddress(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcOptionSelfCloseField_set_MacAddress(PyCThostFtdcOptionSelfCloseField *self, PyObject* val, void *closure) {
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
            
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcOptionSelfCloseField_get_InstrumentID(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcOptionSelfCloseField_set_InstrumentID(PyCThostFtdcOptionSelfCloseField *self, PyObject* val, void *closure) {
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
            
///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static PyObject *PyCThostFtdcOptionSelfCloseField_get_ExchangeInstID(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeInstID, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
    return PyBytes_FromString(self->data.ExchangeInstID);
}

///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static int PyCThostFtdcOptionSelfCloseField_set_ExchangeInstID(PyCThostFtdcOptionSelfCloseField *self, PyObject* val, void *closure) {
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
            
///IP地址
// TThostFtdcIPAddressType char[33]
static PyObject *PyCThostFtdcOptionSelfCloseField_get_IPAddress(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcOptionSelfCloseField_set_IPAddress(PyCThostFtdcOptionSelfCloseField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcOptionSelfCloseField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcOptionSelfCloseField_get_BrokerID, (setter)PyCThostFtdcOptionSelfCloseField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcOptionSelfCloseField_get_InvestorID, (setter)PyCThostFtdcOptionSelfCloseField_set_InvestorID, (char *)"InvestorID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcOptionSelfCloseField_get_reserve1, (setter)PyCThostFtdcOptionSelfCloseField_set_reserve1, (char *)"reserve1", NULL},
    ///期权自对冲引用 
    {(char *)"OptionSelfCloseRef", (getter)PyCThostFtdcOptionSelfCloseField_get_OptionSelfCloseRef, (setter)PyCThostFtdcOptionSelfCloseField_set_OptionSelfCloseRef, (char *)"OptionSelfCloseRef", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcOptionSelfCloseField_get_UserID, (setter)PyCThostFtdcOptionSelfCloseField_set_UserID, (char *)"UserID", NULL},
    ///数量 
    {(char *)"Volume", (getter)PyCThostFtdcOptionSelfCloseField_get_Volume, (setter)PyCThostFtdcOptionSelfCloseField_set_Volume, (char *)"Volume", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcOptionSelfCloseField_get_RequestID, (setter)PyCThostFtdcOptionSelfCloseField_set_RequestID, (char *)"RequestID", NULL},
    ///业务单元 
    {(char *)"BusinessUnit", (getter)PyCThostFtdcOptionSelfCloseField_get_BusinessUnit, (setter)PyCThostFtdcOptionSelfCloseField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
    ///投机套保标志 
    {(char *)"HedgeFlag", (getter)PyCThostFtdcOptionSelfCloseField_get_HedgeFlag, (setter)PyCThostFtdcOptionSelfCloseField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
    ///期权行权的头寸是否自对冲 
    {(char *)"OptSelfCloseFlag", (getter)PyCThostFtdcOptionSelfCloseField_get_OptSelfCloseFlag, (setter)PyCThostFtdcOptionSelfCloseField_set_OptSelfCloseFlag, (char *)"OptSelfCloseFlag", NULL},
    ///本地期权自对冲编号 
    {(char *)"OptionSelfCloseLocalID", (getter)PyCThostFtdcOptionSelfCloseField_get_OptionSelfCloseLocalID, (setter)PyCThostFtdcOptionSelfCloseField_set_OptionSelfCloseLocalID, (char *)"OptionSelfCloseLocalID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcOptionSelfCloseField_get_ExchangeID, (setter)PyCThostFtdcOptionSelfCloseField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///会员代码 
    {(char *)"ParticipantID", (getter)PyCThostFtdcOptionSelfCloseField_get_ParticipantID, (setter)PyCThostFtdcOptionSelfCloseField_set_ParticipantID, (char *)"ParticipantID", NULL},
    ///客户代码 
    {(char *)"ClientID", (getter)PyCThostFtdcOptionSelfCloseField_get_ClientID, (setter)PyCThostFtdcOptionSelfCloseField_set_ClientID, (char *)"ClientID", NULL},
    ///保留的无效字段 
    {(char *)"reserve2", (getter)PyCThostFtdcOptionSelfCloseField_get_reserve2, (setter)PyCThostFtdcOptionSelfCloseField_set_reserve2, (char *)"reserve2", NULL},
    ///交易所交易员代码 
    {(char *)"TraderID", (getter)PyCThostFtdcOptionSelfCloseField_get_TraderID, (setter)PyCThostFtdcOptionSelfCloseField_set_TraderID, (char *)"TraderID", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcOptionSelfCloseField_get_InstallID, (setter)PyCThostFtdcOptionSelfCloseField_set_InstallID, (char *)"InstallID", NULL},
    ///期权自对冲提交状态 
    {(char *)"OrderSubmitStatus", (getter)PyCThostFtdcOptionSelfCloseField_get_OrderSubmitStatus, (setter)PyCThostFtdcOptionSelfCloseField_set_OrderSubmitStatus, (char *)"OrderSubmitStatus", NULL},
    ///报单提示序号 
    {(char *)"NotifySequence", (getter)PyCThostFtdcOptionSelfCloseField_get_NotifySequence, (setter)PyCThostFtdcOptionSelfCloseField_set_NotifySequence, (char *)"NotifySequence", NULL},
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcOptionSelfCloseField_get_TradingDay, (setter)PyCThostFtdcOptionSelfCloseField_set_TradingDay, (char *)"TradingDay", NULL},
    ///结算编号 
    {(char *)"SettlementID", (getter)PyCThostFtdcOptionSelfCloseField_get_SettlementID, (setter)PyCThostFtdcOptionSelfCloseField_set_SettlementID, (char *)"SettlementID", NULL},
    ///期权自对冲编号 
    {(char *)"OptionSelfCloseSysID", (getter)PyCThostFtdcOptionSelfCloseField_get_OptionSelfCloseSysID, (setter)PyCThostFtdcOptionSelfCloseField_set_OptionSelfCloseSysID, (char *)"OptionSelfCloseSysID", NULL},
    ///报单日期 
    {(char *)"InsertDate", (getter)PyCThostFtdcOptionSelfCloseField_get_InsertDate, (setter)PyCThostFtdcOptionSelfCloseField_set_InsertDate, (char *)"InsertDate", NULL},
    ///插入时间 
    {(char *)"InsertTime", (getter)PyCThostFtdcOptionSelfCloseField_get_InsertTime, (setter)PyCThostFtdcOptionSelfCloseField_set_InsertTime, (char *)"InsertTime", NULL},
    ///撤销时间 
    {(char *)"CancelTime", (getter)PyCThostFtdcOptionSelfCloseField_get_CancelTime, (setter)PyCThostFtdcOptionSelfCloseField_set_CancelTime, (char *)"CancelTime", NULL},
    ///自对冲结果 
    {(char *)"ExecResult", (getter)PyCThostFtdcOptionSelfCloseField_get_ExecResult, (setter)PyCThostFtdcOptionSelfCloseField_set_ExecResult, (char *)"ExecResult", NULL},
    ///结算会员编号 
    {(char *)"ClearingPartID", (getter)PyCThostFtdcOptionSelfCloseField_get_ClearingPartID, (setter)PyCThostFtdcOptionSelfCloseField_set_ClearingPartID, (char *)"ClearingPartID", NULL},
    ///序号 
    {(char *)"SequenceNo", (getter)PyCThostFtdcOptionSelfCloseField_get_SequenceNo, (setter)PyCThostFtdcOptionSelfCloseField_set_SequenceNo, (char *)"SequenceNo", NULL},
    ///前置编号 
    {(char *)"FrontID", (getter)PyCThostFtdcOptionSelfCloseField_get_FrontID, (setter)PyCThostFtdcOptionSelfCloseField_set_FrontID, (char *)"FrontID", NULL},
    ///会话编号 
    {(char *)"SessionID", (getter)PyCThostFtdcOptionSelfCloseField_get_SessionID, (setter)PyCThostFtdcOptionSelfCloseField_set_SessionID, (char *)"SessionID", NULL},
    ///用户端产品信息 
    {(char *)"UserProductInfo", (getter)PyCThostFtdcOptionSelfCloseField_get_UserProductInfo, (setter)PyCThostFtdcOptionSelfCloseField_set_UserProductInfo, (char *)"UserProductInfo", NULL},
    ///状态信息 
    {(char *)"StatusMsg", (getter)PyCThostFtdcOptionSelfCloseField_get_StatusMsg, (setter)PyCThostFtdcOptionSelfCloseField_set_StatusMsg, (char *)"StatusMsg", NULL},
    ///操作用户代码 
    {(char *)"ActiveUserID", (getter)PyCThostFtdcOptionSelfCloseField_get_ActiveUserID, (setter)PyCThostFtdcOptionSelfCloseField_set_ActiveUserID, (char *)"ActiveUserID", NULL},
    ///经纪公司报单编号 
    {(char *)"BrokerOptionSelfCloseSeq", (getter)PyCThostFtdcOptionSelfCloseField_get_BrokerOptionSelfCloseSeq, (setter)PyCThostFtdcOptionSelfCloseField_set_BrokerOptionSelfCloseSeq, (char *)"BrokerOptionSelfCloseSeq", NULL},
    ///营业部编号 
    {(char *)"BranchID", (getter)PyCThostFtdcOptionSelfCloseField_get_BranchID, (setter)PyCThostFtdcOptionSelfCloseField_set_BranchID, (char *)"BranchID", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcOptionSelfCloseField_get_InvestUnitID, (setter)PyCThostFtdcOptionSelfCloseField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///资金账号 
    {(char *)"AccountID", (getter)PyCThostFtdcOptionSelfCloseField_get_AccountID, (setter)PyCThostFtdcOptionSelfCloseField_set_AccountID, (char *)"AccountID", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcOptionSelfCloseField_get_CurrencyID, (setter)PyCThostFtdcOptionSelfCloseField_set_CurrencyID, (char *)"CurrencyID", NULL},
    ///保留的无效字段 
    {(char *)"reserve3", (getter)PyCThostFtdcOptionSelfCloseField_get_reserve3, (setter)PyCThostFtdcOptionSelfCloseField_set_reserve3, (char *)"reserve3", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcOptionSelfCloseField_get_MacAddress, (setter)PyCThostFtdcOptionSelfCloseField_set_MacAddress, (char *)"MacAddress", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcOptionSelfCloseField_get_InstrumentID, (setter)PyCThostFtdcOptionSelfCloseField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///合约在交易所的代码 
    {(char *)"ExchangeInstID", (getter)PyCThostFtdcOptionSelfCloseField_get_ExchangeInstID, (setter)PyCThostFtdcOptionSelfCloseField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcOptionSelfCloseField_get_IPAddress, (setter)PyCThostFtdcOptionSelfCloseField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcOptionSelfCloseFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcOptionSelfCloseField",	/* tp_name */
	sizeof(PyCThostFtdcOptionSelfCloseField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcOptionSelfCloseField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcOptionSelfCloseField_repr,   /* tp_repr */
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
	"CThostFtdcOptionSelfCloseField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcOptionSelfCloseField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcOptionSelfCloseField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcOptionSelfCloseField_new,       /* tp_new */
};

int PyCThostFtdcOptionSelfCloseFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcOptionSelfCloseField  */
	if (PyType_Ready(&PyCThostFtdcOptionSelfCloseFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcOptionSelfCloseField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcOptionSelfCloseFieldType);
    if( PyModule_AddObject(module, "CThostFtdcOptionSelfCloseField", (PyObject *)&PyCThostFtdcOptionSelfCloseFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcOptionSelfCloseField to module");
        Py_DECREF(&PyCThostFtdcOptionSelfCloseFieldType);
		return -1;
    }

    return 0;
}
