
#include "PyCThostFtdcExecOrderField.h"

///执行宣告

static PyObject *PyCThostFtdcExecOrderField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcExecOrderField *self = (PyCThostFtdcExecOrderField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcExecOrderField_init(PyCThostFtdcExecOrderField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "ExecOrderRef", "UserID", "Volume", "RequestID", "BusinessUnit", "OffsetFlag", "HedgeFlag", "ActionType", "PosiDirection", "ReservePositionFlag", "CloseFlag", "ExecOrderLocalID", "ExchangeID", "ParticipantID", "ClientID", "reserve2", "TraderID", "InstallID", "OrderSubmitStatus", "NotifySequence", "TradingDay", "SettlementID", "ExecOrderSysID", "InsertDate", "InsertTime", "CancelTime", "ExecResult", "ClearingPartID", "SequenceNo", "FrontID", "SessionID", "UserProductInfo", "StatusMsg", "ActiveUserID", "BrokerExecOrderSeq", "BranchID", "InvestUnitID", "AccountID", "CurrencyID", "reserve3", "MacAddress", "InstrumentID", "ExchangeInstID", "IPAddress",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *ExecOrderField_BrokerID = NULL;
    Py_ssize_t ExecOrderField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *ExecOrderField_InvestorID = NULL;
    Py_ssize_t ExecOrderField_InvestorID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *ExecOrderField_reserve1 = NULL;
    Py_ssize_t ExecOrderField_reserve1_len = 0;
            
    ///执行宣告引用
    // TThostFtdcOrderRefType char[13]
    const char *ExecOrderField_ExecOrderRef = NULL;
    Py_ssize_t ExecOrderField_ExecOrderRef_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *ExecOrderField_UserID = NULL;
    Py_ssize_t ExecOrderField_UserID_len = 0;
            
    ///数量
    // TThostFtdcVolumeType int
    int ExecOrderField_Volume = 0;
        
    ///请求编号
    // TThostFtdcRequestIDType int
    int ExecOrderField_RequestID = 0;
        
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    const char *ExecOrderField_BusinessUnit = NULL;
    Py_ssize_t ExecOrderField_BusinessUnit_len = 0;
            
    ///开平标志
    // TThostFtdcOffsetFlagType char
    char ExecOrderField_OffsetFlag = 0;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    char ExecOrderField_HedgeFlag = 0;
            
    ///执行类型
    // TThostFtdcActionTypeType char
    char ExecOrderField_ActionType = 0;
            
    ///保留头寸申请的持仓方向
    // TThostFtdcPosiDirectionType char
    char ExecOrderField_PosiDirection = 0;
            
    ///期权行权后是否保留期货头寸的标记,该字段已废弃
    // TThostFtdcExecOrderPositionFlagType char
    char ExecOrderField_ReservePositionFlag = 0;
            
    ///期权行权后生成的头寸是否自动平仓
    // TThostFtdcExecOrderCloseFlagType char
    char ExecOrderField_CloseFlag = 0;
            
    ///本地执行宣告编号
    // TThostFtdcOrderLocalIDType char[13]
    const char *ExecOrderField_ExecOrderLocalID = NULL;
    Py_ssize_t ExecOrderField_ExecOrderLocalID_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *ExecOrderField_ExchangeID = NULL;
    Py_ssize_t ExecOrderField_ExchangeID_len = 0;
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    const char *ExecOrderField_ParticipantID = NULL;
    Py_ssize_t ExecOrderField_ParticipantID_len = 0;
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    const char *ExecOrderField_ClientID = NULL;
    Py_ssize_t ExecOrderField_ClientID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    const char *ExecOrderField_reserve2 = NULL;
    Py_ssize_t ExecOrderField_reserve2_len = 0;
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    const char *ExecOrderField_TraderID = NULL;
    Py_ssize_t ExecOrderField_TraderID_len = 0;
            
    ///安装编号
    // TThostFtdcInstallIDType int
    int ExecOrderField_InstallID = 0;
        
    ///执行宣告提交状态
    // TThostFtdcOrderSubmitStatusType char
    char ExecOrderField_OrderSubmitStatus = 0;
            
    ///报单提示序号
    // TThostFtdcSequenceNoType int
    int ExecOrderField_NotifySequence = 0;
        
    ///交易日
    // TThostFtdcDateType char[9]
    const char *ExecOrderField_TradingDay = NULL;
    Py_ssize_t ExecOrderField_TradingDay_len = 0;
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    int ExecOrderField_SettlementID = 0;
        
    ///执行宣告编号
    // TThostFtdcExecOrderSysIDType char[21]
    const char *ExecOrderField_ExecOrderSysID = NULL;
    Py_ssize_t ExecOrderField_ExecOrderSysID_len = 0;
            
    ///报单日期
    // TThostFtdcDateType char[9]
    const char *ExecOrderField_InsertDate = NULL;
    Py_ssize_t ExecOrderField_InsertDate_len = 0;
            
    ///插入时间
    // TThostFtdcTimeType char[9]
    const char *ExecOrderField_InsertTime = NULL;
    Py_ssize_t ExecOrderField_InsertTime_len = 0;
            
    ///撤销时间
    // TThostFtdcTimeType char[9]
    const char *ExecOrderField_CancelTime = NULL;
    Py_ssize_t ExecOrderField_CancelTime_len = 0;
            
    ///执行结果
    // TThostFtdcExecResultType char
    char ExecOrderField_ExecResult = 0;
            
    ///结算会员编号
    // TThostFtdcParticipantIDType char[11]
    const char *ExecOrderField_ClearingPartID = NULL;
    Py_ssize_t ExecOrderField_ClearingPartID_len = 0;
            
    ///序号
    // TThostFtdcSequenceNoType int
    int ExecOrderField_SequenceNo = 0;
        
    ///前置编号
    // TThostFtdcFrontIDType int
    int ExecOrderField_FrontID = 0;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    int ExecOrderField_SessionID = 0;
        
    ///用户端产品信息
    // TThostFtdcProductInfoType char[11]
    const char *ExecOrderField_UserProductInfo = NULL;
    Py_ssize_t ExecOrderField_UserProductInfo_len = 0;
            
    ///状态信息
    // TThostFtdcErrorMsgType char[81]
    const char *ExecOrderField_StatusMsg = NULL;
    Py_ssize_t ExecOrderField_StatusMsg_len = 0;
            
    ///操作用户代码
    // TThostFtdcUserIDType char[16]
    const char *ExecOrderField_ActiveUserID = NULL;
    Py_ssize_t ExecOrderField_ActiveUserID_len = 0;
            
    ///经纪公司报单编号
    // TThostFtdcSequenceNoType int
    int ExecOrderField_BrokerExecOrderSeq = 0;
        
    ///营业部编号
    // TThostFtdcBranchIDType char[9]
    const char *ExecOrderField_BranchID = NULL;
    Py_ssize_t ExecOrderField_BranchID_len = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *ExecOrderField_InvestUnitID = NULL;
    Py_ssize_t ExecOrderField_InvestUnitID_len = 0;
            
    ///资金账号
    // TThostFtdcAccountIDType char[13]
    const char *ExecOrderField_AccountID = NULL;
    Py_ssize_t ExecOrderField_AccountID_len = 0;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *ExecOrderField_CurrencyID = NULL;
    Py_ssize_t ExecOrderField_CurrencyID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    const char *ExecOrderField_reserve3 = NULL;
    Py_ssize_t ExecOrderField_reserve3_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *ExecOrderField_MacAddress = NULL;
    Py_ssize_t ExecOrderField_MacAddress_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *ExecOrderField_InstrumentID = NULL;
    Py_ssize_t ExecOrderField_InstrumentID_len = 0;
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    const char *ExecOrderField_ExchangeInstID = NULL;
    Py_ssize_t ExecOrderField_ExchangeInstID_len = 0;
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *ExecOrderField_IPAddress = NULL;
    Py_ssize_t ExecOrderField_IPAddress_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#iiy#ccccccy#y#y#y#y#y#iciy#iy#y#y#y#cy#iiiy#y#y#iy#y#y#y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#iis#ccccccs#s#s#s#s#s#icis#is#s#s#s#cs#iiis#s#s#is#s#s#s#s#s#s#s#s#", (char **)kwlist
#endif

        , &ExecOrderField_BrokerID, &ExecOrderField_BrokerID_len 
        , &ExecOrderField_InvestorID, &ExecOrderField_InvestorID_len 
        , &ExecOrderField_reserve1, &ExecOrderField_reserve1_len 
        , &ExecOrderField_ExecOrderRef, &ExecOrderField_ExecOrderRef_len 
        , &ExecOrderField_UserID, &ExecOrderField_UserID_len 
        , &ExecOrderField_Volume 
        , &ExecOrderField_RequestID 
        , &ExecOrderField_BusinessUnit, &ExecOrderField_BusinessUnit_len 
        , &ExecOrderField_OffsetFlag 
        , &ExecOrderField_HedgeFlag 
        , &ExecOrderField_ActionType 
        , &ExecOrderField_PosiDirection 
        , &ExecOrderField_ReservePositionFlag 
        , &ExecOrderField_CloseFlag 
        , &ExecOrderField_ExecOrderLocalID, &ExecOrderField_ExecOrderLocalID_len 
        , &ExecOrderField_ExchangeID, &ExecOrderField_ExchangeID_len 
        , &ExecOrderField_ParticipantID, &ExecOrderField_ParticipantID_len 
        , &ExecOrderField_ClientID, &ExecOrderField_ClientID_len 
        , &ExecOrderField_reserve2, &ExecOrderField_reserve2_len 
        , &ExecOrderField_TraderID, &ExecOrderField_TraderID_len 
        , &ExecOrderField_InstallID 
        , &ExecOrderField_OrderSubmitStatus 
        , &ExecOrderField_NotifySequence 
        , &ExecOrderField_TradingDay, &ExecOrderField_TradingDay_len 
        , &ExecOrderField_SettlementID 
        , &ExecOrderField_ExecOrderSysID, &ExecOrderField_ExecOrderSysID_len 
        , &ExecOrderField_InsertDate, &ExecOrderField_InsertDate_len 
        , &ExecOrderField_InsertTime, &ExecOrderField_InsertTime_len 
        , &ExecOrderField_CancelTime, &ExecOrderField_CancelTime_len 
        , &ExecOrderField_ExecResult 
        , &ExecOrderField_ClearingPartID, &ExecOrderField_ClearingPartID_len 
        , &ExecOrderField_SequenceNo 
        , &ExecOrderField_FrontID 
        , &ExecOrderField_SessionID 
        , &ExecOrderField_UserProductInfo, &ExecOrderField_UserProductInfo_len 
        , &ExecOrderField_StatusMsg, &ExecOrderField_StatusMsg_len 
        , &ExecOrderField_ActiveUserID, &ExecOrderField_ActiveUserID_len 
        , &ExecOrderField_BrokerExecOrderSeq 
        , &ExecOrderField_BranchID, &ExecOrderField_BranchID_len 
        , &ExecOrderField_InvestUnitID, &ExecOrderField_InvestUnitID_len 
        , &ExecOrderField_AccountID, &ExecOrderField_AccountID_len 
        , &ExecOrderField_CurrencyID, &ExecOrderField_CurrencyID_len 
        , &ExecOrderField_reserve3, &ExecOrderField_reserve3_len 
        , &ExecOrderField_MacAddress, &ExecOrderField_MacAddress_len 
        , &ExecOrderField_InstrumentID, &ExecOrderField_InstrumentID_len 
        , &ExecOrderField_ExchangeInstID, &ExecOrderField_ExchangeInstID_len 
        , &ExecOrderField_IPAddress, &ExecOrderField_IPAddress_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( ExecOrderField_BrokerID != NULL ) {
        if(ExecOrderField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", ExecOrderField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, ExecOrderField_BrokerID, ExecOrderField_BrokerID_len);        
        strncpy(self->data.BrokerID, ExecOrderField_BrokerID, sizeof(self->data.BrokerID) );
        ExecOrderField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( ExecOrderField_InvestorID != NULL ) {
        if(ExecOrderField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", ExecOrderField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, ExecOrderField_InvestorID, ExecOrderField_InvestorID_len);        
        strncpy(self->data.InvestorID, ExecOrderField_InvestorID, sizeof(self->data.InvestorID) );
        ExecOrderField_InvestorID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( ExecOrderField_reserve1 != NULL ) {
        if(ExecOrderField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", ExecOrderField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, ExecOrderField_reserve1, ExecOrderField_reserve1_len);        
        strncpy(self->data.reserve1, ExecOrderField_reserve1, sizeof(self->data.reserve1) );
        ExecOrderField_reserve1 = NULL;
    }
            
    ///执行宣告引用
    // TThostFtdcOrderRefType char[13]
    if( ExecOrderField_ExecOrderRef != NULL ) {
        if(ExecOrderField_ExecOrderRef_len > (Py_ssize_t)sizeof(self->data.ExecOrderRef)) {
            PyErr_Format(PyExc_ValueError, "ExecOrderRef too long: length=%zd (max allowed is %zd)", ExecOrderField_ExecOrderRef_len, (Py_ssize_t)sizeof(self->data.ExecOrderRef));
            return -1;
        }
        // memset(self->data.ExecOrderRef, 0, sizeof(self->data.ExecOrderRef));
        // memcpy(self->data.ExecOrderRef, ExecOrderField_ExecOrderRef, ExecOrderField_ExecOrderRef_len);        
        strncpy(self->data.ExecOrderRef, ExecOrderField_ExecOrderRef, sizeof(self->data.ExecOrderRef) );
        ExecOrderField_ExecOrderRef = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( ExecOrderField_UserID != NULL ) {
        if(ExecOrderField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", ExecOrderField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, ExecOrderField_UserID, ExecOrderField_UserID_len);        
        strncpy(self->data.UserID, ExecOrderField_UserID, sizeof(self->data.UserID) );
        ExecOrderField_UserID = NULL;
    }
            
    ///数量
    // TThostFtdcVolumeType int
    self->data.Volume = ExecOrderField_Volume;
        
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = ExecOrderField_RequestID;
        
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    if( ExecOrderField_BusinessUnit != NULL ) {
        if(ExecOrderField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", ExecOrderField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
            return -1;
        }
        // memset(self->data.BusinessUnit, 0, sizeof(self->data.BusinessUnit));
        // memcpy(self->data.BusinessUnit, ExecOrderField_BusinessUnit, ExecOrderField_BusinessUnit_len);        
        strncpy(self->data.BusinessUnit, ExecOrderField_BusinessUnit, sizeof(self->data.BusinessUnit) );
        ExecOrderField_BusinessUnit = NULL;
    }
            
    ///开平标志
    // TThostFtdcOffsetFlagType char
    self->data.OffsetFlag = ExecOrderField_OffsetFlag;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    self->data.HedgeFlag = ExecOrderField_HedgeFlag;
            
    ///执行类型
    // TThostFtdcActionTypeType char
    self->data.ActionType = ExecOrderField_ActionType;
            
    ///保留头寸申请的持仓方向
    // TThostFtdcPosiDirectionType char
    self->data.PosiDirection = ExecOrderField_PosiDirection;
            
    ///期权行权后是否保留期货头寸的标记,该字段已废弃
    // TThostFtdcExecOrderPositionFlagType char
    self->data.ReservePositionFlag = ExecOrderField_ReservePositionFlag;
            
    ///期权行权后生成的头寸是否自动平仓
    // TThostFtdcExecOrderCloseFlagType char
    self->data.CloseFlag = ExecOrderField_CloseFlag;
            
    ///本地执行宣告编号
    // TThostFtdcOrderLocalIDType char[13]
    if( ExecOrderField_ExecOrderLocalID != NULL ) {
        if(ExecOrderField_ExecOrderLocalID_len > (Py_ssize_t)sizeof(self->data.ExecOrderLocalID)) {
            PyErr_Format(PyExc_ValueError, "ExecOrderLocalID too long: length=%zd (max allowed is %zd)", ExecOrderField_ExecOrderLocalID_len, (Py_ssize_t)sizeof(self->data.ExecOrderLocalID));
            return -1;
        }
        // memset(self->data.ExecOrderLocalID, 0, sizeof(self->data.ExecOrderLocalID));
        // memcpy(self->data.ExecOrderLocalID, ExecOrderField_ExecOrderLocalID, ExecOrderField_ExecOrderLocalID_len);        
        strncpy(self->data.ExecOrderLocalID, ExecOrderField_ExecOrderLocalID, sizeof(self->data.ExecOrderLocalID) );
        ExecOrderField_ExecOrderLocalID = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( ExecOrderField_ExchangeID != NULL ) {
        if(ExecOrderField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", ExecOrderField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, ExecOrderField_ExchangeID, ExecOrderField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, ExecOrderField_ExchangeID, sizeof(self->data.ExchangeID) );
        ExecOrderField_ExchangeID = NULL;
    }
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    if( ExecOrderField_ParticipantID != NULL ) {
        if(ExecOrderField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", ExecOrderField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
            return -1;
        }
        // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
        // memcpy(self->data.ParticipantID, ExecOrderField_ParticipantID, ExecOrderField_ParticipantID_len);        
        strncpy(self->data.ParticipantID, ExecOrderField_ParticipantID, sizeof(self->data.ParticipantID) );
        ExecOrderField_ParticipantID = NULL;
    }
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    if( ExecOrderField_ClientID != NULL ) {
        if(ExecOrderField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", ExecOrderField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
            return -1;
        }
        // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
        // memcpy(self->data.ClientID, ExecOrderField_ClientID, ExecOrderField_ClientID_len);        
        strncpy(self->data.ClientID, ExecOrderField_ClientID, sizeof(self->data.ClientID) );
        ExecOrderField_ClientID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    if( ExecOrderField_reserve2 != NULL ) {
        if(ExecOrderField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", ExecOrderField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
            return -1;
        }
        // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
        // memcpy(self->data.reserve2, ExecOrderField_reserve2, ExecOrderField_reserve2_len);        
        strncpy(self->data.reserve2, ExecOrderField_reserve2, sizeof(self->data.reserve2) );
        ExecOrderField_reserve2 = NULL;
    }
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    if( ExecOrderField_TraderID != NULL ) {
        if(ExecOrderField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", ExecOrderField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
            return -1;
        }
        // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
        // memcpy(self->data.TraderID, ExecOrderField_TraderID, ExecOrderField_TraderID_len);        
        strncpy(self->data.TraderID, ExecOrderField_TraderID, sizeof(self->data.TraderID) );
        ExecOrderField_TraderID = NULL;
    }
            
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = ExecOrderField_InstallID;
        
    ///执行宣告提交状态
    // TThostFtdcOrderSubmitStatusType char
    self->data.OrderSubmitStatus = ExecOrderField_OrderSubmitStatus;
            
    ///报单提示序号
    // TThostFtdcSequenceNoType int
    self->data.NotifySequence = ExecOrderField_NotifySequence;
        
    ///交易日
    // TThostFtdcDateType char[9]
    if( ExecOrderField_TradingDay != NULL ) {
        if(ExecOrderField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", ExecOrderField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, ExecOrderField_TradingDay, ExecOrderField_TradingDay_len);        
        strncpy(self->data.TradingDay, ExecOrderField_TradingDay, sizeof(self->data.TradingDay) );
        ExecOrderField_TradingDay = NULL;
    }
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    self->data.SettlementID = ExecOrderField_SettlementID;
        
    ///执行宣告编号
    // TThostFtdcExecOrderSysIDType char[21]
    if( ExecOrderField_ExecOrderSysID != NULL ) {
        if(ExecOrderField_ExecOrderSysID_len > (Py_ssize_t)sizeof(self->data.ExecOrderSysID)) {
            PyErr_Format(PyExc_ValueError, "ExecOrderSysID too long: length=%zd (max allowed is %zd)", ExecOrderField_ExecOrderSysID_len, (Py_ssize_t)sizeof(self->data.ExecOrderSysID));
            return -1;
        }
        // memset(self->data.ExecOrderSysID, 0, sizeof(self->data.ExecOrderSysID));
        // memcpy(self->data.ExecOrderSysID, ExecOrderField_ExecOrderSysID, ExecOrderField_ExecOrderSysID_len);        
        strncpy(self->data.ExecOrderSysID, ExecOrderField_ExecOrderSysID, sizeof(self->data.ExecOrderSysID) );
        ExecOrderField_ExecOrderSysID = NULL;
    }
            
    ///报单日期
    // TThostFtdcDateType char[9]
    if( ExecOrderField_InsertDate != NULL ) {
        if(ExecOrderField_InsertDate_len > (Py_ssize_t)sizeof(self->data.InsertDate)) {
            PyErr_Format(PyExc_ValueError, "InsertDate too long: length=%zd (max allowed is %zd)", ExecOrderField_InsertDate_len, (Py_ssize_t)sizeof(self->data.InsertDate));
            return -1;
        }
        // memset(self->data.InsertDate, 0, sizeof(self->data.InsertDate));
        // memcpy(self->data.InsertDate, ExecOrderField_InsertDate, ExecOrderField_InsertDate_len);        
        strncpy(self->data.InsertDate, ExecOrderField_InsertDate, sizeof(self->data.InsertDate) );
        ExecOrderField_InsertDate = NULL;
    }
            
    ///插入时间
    // TThostFtdcTimeType char[9]
    if( ExecOrderField_InsertTime != NULL ) {
        if(ExecOrderField_InsertTime_len > (Py_ssize_t)sizeof(self->data.InsertTime)) {
            PyErr_Format(PyExc_ValueError, "InsertTime too long: length=%zd (max allowed is %zd)", ExecOrderField_InsertTime_len, (Py_ssize_t)sizeof(self->data.InsertTime));
            return -1;
        }
        // memset(self->data.InsertTime, 0, sizeof(self->data.InsertTime));
        // memcpy(self->data.InsertTime, ExecOrderField_InsertTime, ExecOrderField_InsertTime_len);        
        strncpy(self->data.InsertTime, ExecOrderField_InsertTime, sizeof(self->data.InsertTime) );
        ExecOrderField_InsertTime = NULL;
    }
            
    ///撤销时间
    // TThostFtdcTimeType char[9]
    if( ExecOrderField_CancelTime != NULL ) {
        if(ExecOrderField_CancelTime_len > (Py_ssize_t)sizeof(self->data.CancelTime)) {
            PyErr_Format(PyExc_ValueError, "CancelTime too long: length=%zd (max allowed is %zd)", ExecOrderField_CancelTime_len, (Py_ssize_t)sizeof(self->data.CancelTime));
            return -1;
        }
        // memset(self->data.CancelTime, 0, sizeof(self->data.CancelTime));
        // memcpy(self->data.CancelTime, ExecOrderField_CancelTime, ExecOrderField_CancelTime_len);        
        strncpy(self->data.CancelTime, ExecOrderField_CancelTime, sizeof(self->data.CancelTime) );
        ExecOrderField_CancelTime = NULL;
    }
            
    ///执行结果
    // TThostFtdcExecResultType char
    self->data.ExecResult = ExecOrderField_ExecResult;
            
    ///结算会员编号
    // TThostFtdcParticipantIDType char[11]
    if( ExecOrderField_ClearingPartID != NULL ) {
        if(ExecOrderField_ClearingPartID_len > (Py_ssize_t)sizeof(self->data.ClearingPartID)) {
            PyErr_Format(PyExc_ValueError, "ClearingPartID too long: length=%zd (max allowed is %zd)", ExecOrderField_ClearingPartID_len, (Py_ssize_t)sizeof(self->data.ClearingPartID));
            return -1;
        }
        // memset(self->data.ClearingPartID, 0, sizeof(self->data.ClearingPartID));
        // memcpy(self->data.ClearingPartID, ExecOrderField_ClearingPartID, ExecOrderField_ClearingPartID_len);        
        strncpy(self->data.ClearingPartID, ExecOrderField_ClearingPartID, sizeof(self->data.ClearingPartID) );
        ExecOrderField_ClearingPartID = NULL;
    }
            
    ///序号
    // TThostFtdcSequenceNoType int
    self->data.SequenceNo = ExecOrderField_SequenceNo;
        
    ///前置编号
    // TThostFtdcFrontIDType int
    self->data.FrontID = ExecOrderField_FrontID;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    self->data.SessionID = ExecOrderField_SessionID;
        
    ///用户端产品信息
    // TThostFtdcProductInfoType char[11]
    if( ExecOrderField_UserProductInfo != NULL ) {
        if(ExecOrderField_UserProductInfo_len > (Py_ssize_t)sizeof(self->data.UserProductInfo)) {
            PyErr_Format(PyExc_ValueError, "UserProductInfo too long: length=%zd (max allowed is %zd)", ExecOrderField_UserProductInfo_len, (Py_ssize_t)sizeof(self->data.UserProductInfo));
            return -1;
        }
        // memset(self->data.UserProductInfo, 0, sizeof(self->data.UserProductInfo));
        // memcpy(self->data.UserProductInfo, ExecOrderField_UserProductInfo, ExecOrderField_UserProductInfo_len);        
        strncpy(self->data.UserProductInfo, ExecOrderField_UserProductInfo, sizeof(self->data.UserProductInfo) );
        ExecOrderField_UserProductInfo = NULL;
    }
            
    ///状态信息
    // TThostFtdcErrorMsgType char[81]
    if( ExecOrderField_StatusMsg != NULL ) {
        if(ExecOrderField_StatusMsg_len > (Py_ssize_t)sizeof(self->data.StatusMsg)) {
            PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is %zd)", ExecOrderField_StatusMsg_len, (Py_ssize_t)sizeof(self->data.StatusMsg));
            return -1;
        }
        // memset(self->data.StatusMsg, 0, sizeof(self->data.StatusMsg));
        // memcpy(self->data.StatusMsg, ExecOrderField_StatusMsg, ExecOrderField_StatusMsg_len);        
        strncpy(self->data.StatusMsg, ExecOrderField_StatusMsg, sizeof(self->data.StatusMsg) );
        ExecOrderField_StatusMsg = NULL;
    }
            
    ///操作用户代码
    // TThostFtdcUserIDType char[16]
    if( ExecOrderField_ActiveUserID != NULL ) {
        if(ExecOrderField_ActiveUserID_len > (Py_ssize_t)sizeof(self->data.ActiveUserID)) {
            PyErr_Format(PyExc_ValueError, "ActiveUserID too long: length=%zd (max allowed is %zd)", ExecOrderField_ActiveUserID_len, (Py_ssize_t)sizeof(self->data.ActiveUserID));
            return -1;
        }
        // memset(self->data.ActiveUserID, 0, sizeof(self->data.ActiveUserID));
        // memcpy(self->data.ActiveUserID, ExecOrderField_ActiveUserID, ExecOrderField_ActiveUserID_len);        
        strncpy(self->data.ActiveUserID, ExecOrderField_ActiveUserID, sizeof(self->data.ActiveUserID) );
        ExecOrderField_ActiveUserID = NULL;
    }
            
    ///经纪公司报单编号
    // TThostFtdcSequenceNoType int
    self->data.BrokerExecOrderSeq = ExecOrderField_BrokerExecOrderSeq;
        
    ///营业部编号
    // TThostFtdcBranchIDType char[9]
    if( ExecOrderField_BranchID != NULL ) {
        if(ExecOrderField_BranchID_len > (Py_ssize_t)sizeof(self->data.BranchID)) {
            PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is %zd)", ExecOrderField_BranchID_len, (Py_ssize_t)sizeof(self->data.BranchID));
            return -1;
        }
        // memset(self->data.BranchID, 0, sizeof(self->data.BranchID));
        // memcpy(self->data.BranchID, ExecOrderField_BranchID, ExecOrderField_BranchID_len);        
        strncpy(self->data.BranchID, ExecOrderField_BranchID, sizeof(self->data.BranchID) );
        ExecOrderField_BranchID = NULL;
    }
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( ExecOrderField_InvestUnitID != NULL ) {
        if(ExecOrderField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", ExecOrderField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, ExecOrderField_InvestUnitID, ExecOrderField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, ExecOrderField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        ExecOrderField_InvestUnitID = NULL;
    }
            
    ///资金账号
    // TThostFtdcAccountIDType char[13]
    if( ExecOrderField_AccountID != NULL ) {
        if(ExecOrderField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", ExecOrderField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
            return -1;
        }
        // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
        // memcpy(self->data.AccountID, ExecOrderField_AccountID, ExecOrderField_AccountID_len);        
        strncpy(self->data.AccountID, ExecOrderField_AccountID, sizeof(self->data.AccountID) );
        ExecOrderField_AccountID = NULL;
    }
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( ExecOrderField_CurrencyID != NULL ) {
        if(ExecOrderField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", ExecOrderField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, ExecOrderField_CurrencyID, ExecOrderField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, ExecOrderField_CurrencyID, sizeof(self->data.CurrencyID) );
        ExecOrderField_CurrencyID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    if( ExecOrderField_reserve3 != NULL ) {
        if(ExecOrderField_reserve3_len > (Py_ssize_t)sizeof(self->data.reserve3)) {
            PyErr_Format(PyExc_ValueError, "reserve3 too long: length=%zd (max allowed is %zd)", ExecOrderField_reserve3_len, (Py_ssize_t)sizeof(self->data.reserve3));
            return -1;
        }
        // memset(self->data.reserve3, 0, sizeof(self->data.reserve3));
        // memcpy(self->data.reserve3, ExecOrderField_reserve3, ExecOrderField_reserve3_len);        
        strncpy(self->data.reserve3, ExecOrderField_reserve3, sizeof(self->data.reserve3) );
        ExecOrderField_reserve3 = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( ExecOrderField_MacAddress != NULL ) {
        if(ExecOrderField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", ExecOrderField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, ExecOrderField_MacAddress, ExecOrderField_MacAddress_len);        
        strncpy(self->data.MacAddress, ExecOrderField_MacAddress, sizeof(self->data.MacAddress) );
        ExecOrderField_MacAddress = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( ExecOrderField_InstrumentID != NULL ) {
        if(ExecOrderField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", ExecOrderField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, ExecOrderField_InstrumentID, ExecOrderField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, ExecOrderField_InstrumentID, sizeof(self->data.InstrumentID) );
        ExecOrderField_InstrumentID = NULL;
    }
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    if( ExecOrderField_ExchangeInstID != NULL ) {
        if(ExecOrderField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", ExecOrderField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
            return -1;
        }
        // memset(self->data.ExchangeInstID, 0, sizeof(self->data.ExchangeInstID));
        // memcpy(self->data.ExchangeInstID, ExecOrderField_ExchangeInstID, ExecOrderField_ExchangeInstID_len);        
        strncpy(self->data.ExchangeInstID, ExecOrderField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
        ExecOrderField_ExchangeInstID = NULL;
    }
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( ExecOrderField_IPAddress != NULL ) {
        if(ExecOrderField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", ExecOrderField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, ExecOrderField_IPAddress, ExecOrderField_IPAddress_len);        
        strncpy(self->data.IPAddress, ExecOrderField_IPAddress, sizeof(self->data.IPAddress) );
        ExecOrderField_IPAddress = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcExecOrderField_dealloc(PyCThostFtdcExecOrderField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcExecOrderField_repr(PyCThostFtdcExecOrderField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:c,s:c,s:c,s:c,s:c,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:i,s:y,s:y,s:y,s:y,s:c,s:y,s:i,s:i,s:i,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:i,s:i,s:s,s:c,s:c,s:c,s:c,s:c,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:i,s:s,s:s,s:s,s:s,s:c,s:s,s:i,s:i,s:i,s:s,s:s,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"ExecOrderRef", self->data.ExecOrderRef//, (Py_ssize_t)sizeof(self->data.ExecOrderRef) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"Volume", self->data.Volume 
        ,"RequestID", self->data.RequestID 
        ,"BusinessUnit", self->data.BusinessUnit//, (Py_ssize_t)sizeof(self->data.BusinessUnit) 
        ,"OffsetFlag", self->data.OffsetFlag 
        ,"HedgeFlag", self->data.HedgeFlag 
        ,"ActionType", self->data.ActionType 
        ,"PosiDirection", self->data.PosiDirection 
        ,"ReservePositionFlag", self->data.ReservePositionFlag 
        ,"CloseFlag", self->data.CloseFlag 
        ,"ExecOrderLocalID", self->data.ExecOrderLocalID//, (Py_ssize_t)sizeof(self->data.ExecOrderLocalID) 
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
        ,"ExecOrderSysID", self->data.ExecOrderSysID//, (Py_ssize_t)sizeof(self->data.ExecOrderSysID) 
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
        ,"BrokerExecOrderSeq", self->data.BrokerExecOrderSeq 
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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExecOrderField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcExecOrderField_get_BrokerID(PyCThostFtdcExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcExecOrderField_set_BrokerID(PyCThostFtdcExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderField_get_InvestorID(PyCThostFtdcExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcExecOrderField_set_InvestorID(PyCThostFtdcExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderField_get_reserve1(PyCThostFtdcExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcExecOrderField_set_reserve1(PyCThostFtdcExecOrderField *self, PyObject* val, void *closure) {
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
            
///执行宣告引用
// TThostFtdcOrderRefType char[13]
static PyObject *PyCThostFtdcExecOrderField_get_ExecOrderRef(PyCThostFtdcExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExecOrderRef, (Py_ssize_t)sizeof(self->data.ExecOrderRef));
    return PyBytes_FromString(self->data.ExecOrderRef);
}

///执行宣告引用
// TThostFtdcOrderRefType char[13]
static int PyCThostFtdcExecOrderField_set_ExecOrderRef(PyCThostFtdcExecOrderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExecOrderRef Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ExecOrderRef)) {
        PyErr_SetString(PyExc_ValueError, "ExecOrderRef must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.ExecOrderRef, 0, sizeof(self->data.ExecOrderRef));
    // memcpy(self->data.ExecOrderRef, buf, len);
    strncpy(self->data.ExecOrderRef, buf, sizeof(self->data.ExecOrderRef));
    return 0;
}
            
///用户代码
// TThostFtdcUserIDType char[16]
static PyObject *PyCThostFtdcExecOrderField_get_UserID(PyCThostFtdcExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcExecOrderField_set_UserID(PyCThostFtdcExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderField_get_Volume(PyCThostFtdcExecOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.Volume);
#else
    return PyInt_FromLong(self->data.Volume);
#endif
}

///数量
// TThostFtdcVolumeType int
static int PyCThostFtdcExecOrderField_set_Volume(PyCThostFtdcExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderField_get_RequestID(PyCThostFtdcExecOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcExecOrderField_set_RequestID(PyCThostFtdcExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderField_get_BusinessUnit(PyCThostFtdcExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BusinessUnit, (Py_ssize_t)sizeof(self->data.BusinessUnit));
    return PyBytes_FromString(self->data.BusinessUnit);
}

///业务单元
// TThostFtdcBusinessUnitType char[21]
static int PyCThostFtdcExecOrderField_set_BusinessUnit(PyCThostFtdcExecOrderField *self, PyObject* val, void *closure) {
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
            
///开平标志
// TThostFtdcOffsetFlagType char
static PyObject *PyCThostFtdcExecOrderField_get_OffsetFlag(PyCThostFtdcExecOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OffsetFlag), 1);
}

///开平标志
// TThostFtdcOffsetFlagType char
static int PyCThostFtdcExecOrderField_set_OffsetFlag(PyCThostFtdcExecOrderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OffsetFlag Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OffsetFlag)) {
        PyErr_SetString(PyExc_ValueError, "OffsetFlag must be equal 1 bytes");
        return -1;
    }
    self->data.OffsetFlag = *buf;
    return 0;
}
            
///投机套保标志
// TThostFtdcHedgeFlagType char
static PyObject *PyCThostFtdcExecOrderField_get_HedgeFlag(PyCThostFtdcExecOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

///投机套保标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcExecOrderField_set_HedgeFlag(PyCThostFtdcExecOrderField *self, PyObject* val, void *closure) {
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
            
///执行类型
// TThostFtdcActionTypeType char
static PyObject *PyCThostFtdcExecOrderField_get_ActionType(PyCThostFtdcExecOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionType), 1);
}

///执行类型
// TThostFtdcActionTypeType char
static int PyCThostFtdcExecOrderField_set_ActionType(PyCThostFtdcExecOrderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ActionType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ActionType)) {
        PyErr_SetString(PyExc_ValueError, "ActionType must be equal 1 bytes");
        return -1;
    }
    self->data.ActionType = *buf;
    return 0;
}
            
///保留头寸申请的持仓方向
// TThostFtdcPosiDirectionType char
static PyObject *PyCThostFtdcExecOrderField_get_PosiDirection(PyCThostFtdcExecOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.PosiDirection), 1);
}

///保留头寸申请的持仓方向
// TThostFtdcPosiDirectionType char
static int PyCThostFtdcExecOrderField_set_PosiDirection(PyCThostFtdcExecOrderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PosiDirection Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.PosiDirection)) {
        PyErr_SetString(PyExc_ValueError, "PosiDirection must be equal 1 bytes");
        return -1;
    }
    self->data.PosiDirection = *buf;
    return 0;
}
            
///期权行权后是否保留期货头寸的标记,该字段已废弃
// TThostFtdcExecOrderPositionFlagType char
static PyObject *PyCThostFtdcExecOrderField_get_ReservePositionFlag(PyCThostFtdcExecOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ReservePositionFlag), 1);
}

///期权行权后是否保留期货头寸的标记,该字段已废弃
// TThostFtdcExecOrderPositionFlagType char
static int PyCThostFtdcExecOrderField_set_ReservePositionFlag(PyCThostFtdcExecOrderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ReservePositionFlag Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ReservePositionFlag)) {
        PyErr_SetString(PyExc_ValueError, "ReservePositionFlag must be equal 1 bytes");
        return -1;
    }
    self->data.ReservePositionFlag = *buf;
    return 0;
}
            
///期权行权后生成的头寸是否自动平仓
// TThostFtdcExecOrderCloseFlagType char
static PyObject *PyCThostFtdcExecOrderField_get_CloseFlag(PyCThostFtdcExecOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.CloseFlag), 1);
}

///期权行权后生成的头寸是否自动平仓
// TThostFtdcExecOrderCloseFlagType char
static int PyCThostFtdcExecOrderField_set_CloseFlag(PyCThostFtdcExecOrderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CloseFlag Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CloseFlag)) {
        PyErr_SetString(PyExc_ValueError, "CloseFlag must be equal 1 bytes");
        return -1;
    }
    self->data.CloseFlag = *buf;
    return 0;
}
            
///本地执行宣告编号
// TThostFtdcOrderLocalIDType char[13]
static PyObject *PyCThostFtdcExecOrderField_get_ExecOrderLocalID(PyCThostFtdcExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExecOrderLocalID, (Py_ssize_t)sizeof(self->data.ExecOrderLocalID));
    return PyBytes_FromString(self->data.ExecOrderLocalID);
}

///本地执行宣告编号
// TThostFtdcOrderLocalIDType char[13]
static int PyCThostFtdcExecOrderField_set_ExecOrderLocalID(PyCThostFtdcExecOrderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExecOrderLocalID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ExecOrderLocalID)) {
        PyErr_SetString(PyExc_ValueError, "ExecOrderLocalID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.ExecOrderLocalID, 0, sizeof(self->data.ExecOrderLocalID));
    // memcpy(self->data.ExecOrderLocalID, buf, len);
    strncpy(self->data.ExecOrderLocalID, buf, sizeof(self->data.ExecOrderLocalID));
    return 0;
}
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcExecOrderField_get_ExchangeID(PyCThostFtdcExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcExecOrderField_set_ExchangeID(PyCThostFtdcExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderField_get_ParticipantID(PyCThostFtdcExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParticipantID, (Py_ssize_t)sizeof(self->data.ParticipantID));
    return PyBytes_FromString(self->data.ParticipantID);
}

///会员代码
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcExecOrderField_set_ParticipantID(PyCThostFtdcExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderField_get_ClientID(PyCThostFtdcExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientID, (Py_ssize_t)sizeof(self->data.ClientID));
    return PyBytes_FromString(self->data.ClientID);
}

///客户代码
// TThostFtdcClientIDType char[11]
static int PyCThostFtdcExecOrderField_set_ClientID(PyCThostFtdcExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderField_get_reserve2(PyCThostFtdcExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve2, (Py_ssize_t)sizeof(self->data.reserve2));
    return PyBytes_FromString(self->data.reserve2);
}

///保留的无效字段
// TThostFtdcOldExchangeInstIDType char[31]
static int PyCThostFtdcExecOrderField_set_reserve2(PyCThostFtdcExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderField_get_TraderID(PyCThostFtdcExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TraderID, (Py_ssize_t)sizeof(self->data.TraderID));
    return PyBytes_FromString(self->data.TraderID);
}

///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static int PyCThostFtdcExecOrderField_set_TraderID(PyCThostFtdcExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderField_get_InstallID(PyCThostFtdcExecOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcExecOrderField_set_InstallID(PyCThostFtdcExecOrderField *self, PyObject* val, void *closure) {
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
        
///执行宣告提交状态
// TThostFtdcOrderSubmitStatusType char
static PyObject *PyCThostFtdcExecOrderField_get_OrderSubmitStatus(PyCThostFtdcExecOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OrderSubmitStatus), 1);
}

///执行宣告提交状态
// TThostFtdcOrderSubmitStatusType char
static int PyCThostFtdcExecOrderField_set_OrderSubmitStatus(PyCThostFtdcExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderField_get_NotifySequence(PyCThostFtdcExecOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.NotifySequence);
#else
    return PyInt_FromLong(self->data.NotifySequence);
#endif
}

///报单提示序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcExecOrderField_set_NotifySequence(PyCThostFtdcExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderField_get_TradingDay(PyCThostFtdcExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcExecOrderField_set_TradingDay(PyCThostFtdcExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderField_get_SettlementID(PyCThostFtdcExecOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SettlementID);
#else
    return PyInt_FromLong(self->data.SettlementID);
#endif
}

///结算编号
// TThostFtdcSettlementIDType int
static int PyCThostFtdcExecOrderField_set_SettlementID(PyCThostFtdcExecOrderField *self, PyObject* val, void *closure) {
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
        
///执行宣告编号
// TThostFtdcExecOrderSysIDType char[21]
static PyObject *PyCThostFtdcExecOrderField_get_ExecOrderSysID(PyCThostFtdcExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExecOrderSysID, (Py_ssize_t)sizeof(self->data.ExecOrderSysID));
    return PyBytes_FromString(self->data.ExecOrderSysID);
}

///执行宣告编号
// TThostFtdcExecOrderSysIDType char[21]
static int PyCThostFtdcExecOrderField_set_ExecOrderSysID(PyCThostFtdcExecOrderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExecOrderSysID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ExecOrderSysID)) {
        PyErr_SetString(PyExc_ValueError, "ExecOrderSysID must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.ExecOrderSysID, 0, sizeof(self->data.ExecOrderSysID));
    // memcpy(self->data.ExecOrderSysID, buf, len);
    strncpy(self->data.ExecOrderSysID, buf, sizeof(self->data.ExecOrderSysID));
    return 0;
}
            
///报单日期
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcExecOrderField_get_InsertDate(PyCThostFtdcExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InsertDate, (Py_ssize_t)sizeof(self->data.InsertDate));
    return PyBytes_FromString(self->data.InsertDate);
}

///报单日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcExecOrderField_set_InsertDate(PyCThostFtdcExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderField_get_InsertTime(PyCThostFtdcExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InsertTime, (Py_ssize_t)sizeof(self->data.InsertTime));
    return PyBytes_FromString(self->data.InsertTime);
}

///插入时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcExecOrderField_set_InsertTime(PyCThostFtdcExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderField_get_CancelTime(PyCThostFtdcExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CancelTime, (Py_ssize_t)sizeof(self->data.CancelTime));
    return PyBytes_FromString(self->data.CancelTime);
}

///撤销时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcExecOrderField_set_CancelTime(PyCThostFtdcExecOrderField *self, PyObject* val, void *closure) {
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
            
///执行结果
// TThostFtdcExecResultType char
static PyObject *PyCThostFtdcExecOrderField_get_ExecResult(PyCThostFtdcExecOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ExecResult), 1);
}

///执行结果
// TThostFtdcExecResultType char
static int PyCThostFtdcExecOrderField_set_ExecResult(PyCThostFtdcExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderField_get_ClearingPartID(PyCThostFtdcExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClearingPartID, (Py_ssize_t)sizeof(self->data.ClearingPartID));
    return PyBytes_FromString(self->data.ClearingPartID);
}

///结算会员编号
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcExecOrderField_set_ClearingPartID(PyCThostFtdcExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderField_get_SequenceNo(PyCThostFtdcExecOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SequenceNo);
#else
    return PyInt_FromLong(self->data.SequenceNo);
#endif
}

///序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcExecOrderField_set_SequenceNo(PyCThostFtdcExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderField_get_FrontID(PyCThostFtdcExecOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FrontID);
#else
    return PyInt_FromLong(self->data.FrontID);
#endif
}

///前置编号
// TThostFtdcFrontIDType int
static int PyCThostFtdcExecOrderField_set_FrontID(PyCThostFtdcExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderField_get_SessionID(PyCThostFtdcExecOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话编号
// TThostFtdcSessionIDType int
static int PyCThostFtdcExecOrderField_set_SessionID(PyCThostFtdcExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderField_get_UserProductInfo(PyCThostFtdcExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserProductInfo, (Py_ssize_t)sizeof(self->data.UserProductInfo));
    return PyBytes_FromString(self->data.UserProductInfo);
}

///用户端产品信息
// TThostFtdcProductInfoType char[11]
static int PyCThostFtdcExecOrderField_set_UserProductInfo(PyCThostFtdcExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderField_get_StatusMsg(PyCThostFtdcExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.StatusMsg, (Py_ssize_t)sizeof(self->data.StatusMsg));
    return PyBytes_FromString(self->data.StatusMsg);
}

///状态信息
// TThostFtdcErrorMsgType char[81]
static int PyCThostFtdcExecOrderField_set_StatusMsg(PyCThostFtdcExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderField_get_ActiveUserID(PyCThostFtdcExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActiveUserID, (Py_ssize_t)sizeof(self->data.ActiveUserID));
    return PyBytes_FromString(self->data.ActiveUserID);
}

///操作用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcExecOrderField_set_ActiveUserID(PyCThostFtdcExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderField_get_BrokerExecOrderSeq(PyCThostFtdcExecOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.BrokerExecOrderSeq);
#else
    return PyInt_FromLong(self->data.BrokerExecOrderSeq);
#endif
}

///经纪公司报单编号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcExecOrderField_set_BrokerExecOrderSeq(PyCThostFtdcExecOrderField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BrokerExecOrderSeq Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BrokerExecOrderSeq Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the BrokerExecOrderSeq value out of range for C int");
        return -1;
    }
    self->data.BrokerExecOrderSeq = (int)buf;
    return 0;
}
        
///营业部编号
// TThostFtdcBranchIDType char[9]
static PyObject *PyCThostFtdcExecOrderField_get_BranchID(PyCThostFtdcExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BranchID, (Py_ssize_t)sizeof(self->data.BranchID));
    return PyBytes_FromString(self->data.BranchID);
}

///营业部编号
// TThostFtdcBranchIDType char[9]
static int PyCThostFtdcExecOrderField_set_BranchID(PyCThostFtdcExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderField_get_InvestUnitID(PyCThostFtdcExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcExecOrderField_set_InvestUnitID(PyCThostFtdcExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderField_get_AccountID(PyCThostFtdcExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AccountID, (Py_ssize_t)sizeof(self->data.AccountID));
    return PyBytes_FromString(self->data.AccountID);
}

///资金账号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcExecOrderField_set_AccountID(PyCThostFtdcExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderField_get_CurrencyID(PyCThostFtdcExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcExecOrderField_set_CurrencyID(PyCThostFtdcExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderField_get_reserve3(PyCThostFtdcExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve3, (Py_ssize_t)sizeof(self->data.reserve3));
    return PyBytes_FromString(self->data.reserve3);
}

///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static int PyCThostFtdcExecOrderField_set_reserve3(PyCThostFtdcExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderField_get_MacAddress(PyCThostFtdcExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcExecOrderField_set_MacAddress(PyCThostFtdcExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderField_get_InstrumentID(PyCThostFtdcExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcExecOrderField_set_InstrumentID(PyCThostFtdcExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderField_get_ExchangeInstID(PyCThostFtdcExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeInstID, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
    return PyBytes_FromString(self->data.ExchangeInstID);
}

///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static int PyCThostFtdcExecOrderField_set_ExchangeInstID(PyCThostFtdcExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExecOrderField_get_IPAddress(PyCThostFtdcExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcExecOrderField_set_IPAddress(PyCThostFtdcExecOrderField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcExecOrderField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcExecOrderField_get_BrokerID, (setter)PyCThostFtdcExecOrderField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcExecOrderField_get_InvestorID, (setter)PyCThostFtdcExecOrderField_set_InvestorID, (char *)"InvestorID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcExecOrderField_get_reserve1, (setter)PyCThostFtdcExecOrderField_set_reserve1, (char *)"reserve1", NULL},
    ///执行宣告引用 
    {(char *)"ExecOrderRef", (getter)PyCThostFtdcExecOrderField_get_ExecOrderRef, (setter)PyCThostFtdcExecOrderField_set_ExecOrderRef, (char *)"ExecOrderRef", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcExecOrderField_get_UserID, (setter)PyCThostFtdcExecOrderField_set_UserID, (char *)"UserID", NULL},
    ///数量 
    {(char *)"Volume", (getter)PyCThostFtdcExecOrderField_get_Volume, (setter)PyCThostFtdcExecOrderField_set_Volume, (char *)"Volume", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcExecOrderField_get_RequestID, (setter)PyCThostFtdcExecOrderField_set_RequestID, (char *)"RequestID", NULL},
    ///业务单元 
    {(char *)"BusinessUnit", (getter)PyCThostFtdcExecOrderField_get_BusinessUnit, (setter)PyCThostFtdcExecOrderField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
    ///开平标志 
    {(char *)"OffsetFlag", (getter)PyCThostFtdcExecOrderField_get_OffsetFlag, (setter)PyCThostFtdcExecOrderField_set_OffsetFlag, (char *)"OffsetFlag", NULL},
    ///投机套保标志 
    {(char *)"HedgeFlag", (getter)PyCThostFtdcExecOrderField_get_HedgeFlag, (setter)PyCThostFtdcExecOrderField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
    ///执行类型 
    {(char *)"ActionType", (getter)PyCThostFtdcExecOrderField_get_ActionType, (setter)PyCThostFtdcExecOrderField_set_ActionType, (char *)"ActionType", NULL},
    ///保留头寸申请的持仓方向 
    {(char *)"PosiDirection", (getter)PyCThostFtdcExecOrderField_get_PosiDirection, (setter)PyCThostFtdcExecOrderField_set_PosiDirection, (char *)"PosiDirection", NULL},
    ///期权行权后是否保留期货头寸的标记,该字段已废弃 
    {(char *)"ReservePositionFlag", (getter)PyCThostFtdcExecOrderField_get_ReservePositionFlag, (setter)PyCThostFtdcExecOrderField_set_ReservePositionFlag, (char *)"ReservePositionFlag", NULL},
    ///期权行权后生成的头寸是否自动平仓 
    {(char *)"CloseFlag", (getter)PyCThostFtdcExecOrderField_get_CloseFlag, (setter)PyCThostFtdcExecOrderField_set_CloseFlag, (char *)"CloseFlag", NULL},
    ///本地执行宣告编号 
    {(char *)"ExecOrderLocalID", (getter)PyCThostFtdcExecOrderField_get_ExecOrderLocalID, (setter)PyCThostFtdcExecOrderField_set_ExecOrderLocalID, (char *)"ExecOrderLocalID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcExecOrderField_get_ExchangeID, (setter)PyCThostFtdcExecOrderField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///会员代码 
    {(char *)"ParticipantID", (getter)PyCThostFtdcExecOrderField_get_ParticipantID, (setter)PyCThostFtdcExecOrderField_set_ParticipantID, (char *)"ParticipantID", NULL},
    ///客户代码 
    {(char *)"ClientID", (getter)PyCThostFtdcExecOrderField_get_ClientID, (setter)PyCThostFtdcExecOrderField_set_ClientID, (char *)"ClientID", NULL},
    ///保留的无效字段 
    {(char *)"reserve2", (getter)PyCThostFtdcExecOrderField_get_reserve2, (setter)PyCThostFtdcExecOrderField_set_reserve2, (char *)"reserve2", NULL},
    ///交易所交易员代码 
    {(char *)"TraderID", (getter)PyCThostFtdcExecOrderField_get_TraderID, (setter)PyCThostFtdcExecOrderField_set_TraderID, (char *)"TraderID", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcExecOrderField_get_InstallID, (setter)PyCThostFtdcExecOrderField_set_InstallID, (char *)"InstallID", NULL},
    ///执行宣告提交状态 
    {(char *)"OrderSubmitStatus", (getter)PyCThostFtdcExecOrderField_get_OrderSubmitStatus, (setter)PyCThostFtdcExecOrderField_set_OrderSubmitStatus, (char *)"OrderSubmitStatus", NULL},
    ///报单提示序号 
    {(char *)"NotifySequence", (getter)PyCThostFtdcExecOrderField_get_NotifySequence, (setter)PyCThostFtdcExecOrderField_set_NotifySequence, (char *)"NotifySequence", NULL},
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcExecOrderField_get_TradingDay, (setter)PyCThostFtdcExecOrderField_set_TradingDay, (char *)"TradingDay", NULL},
    ///结算编号 
    {(char *)"SettlementID", (getter)PyCThostFtdcExecOrderField_get_SettlementID, (setter)PyCThostFtdcExecOrderField_set_SettlementID, (char *)"SettlementID", NULL},
    ///执行宣告编号 
    {(char *)"ExecOrderSysID", (getter)PyCThostFtdcExecOrderField_get_ExecOrderSysID, (setter)PyCThostFtdcExecOrderField_set_ExecOrderSysID, (char *)"ExecOrderSysID", NULL},
    ///报单日期 
    {(char *)"InsertDate", (getter)PyCThostFtdcExecOrderField_get_InsertDate, (setter)PyCThostFtdcExecOrderField_set_InsertDate, (char *)"InsertDate", NULL},
    ///插入时间 
    {(char *)"InsertTime", (getter)PyCThostFtdcExecOrderField_get_InsertTime, (setter)PyCThostFtdcExecOrderField_set_InsertTime, (char *)"InsertTime", NULL},
    ///撤销时间 
    {(char *)"CancelTime", (getter)PyCThostFtdcExecOrderField_get_CancelTime, (setter)PyCThostFtdcExecOrderField_set_CancelTime, (char *)"CancelTime", NULL},
    ///执行结果 
    {(char *)"ExecResult", (getter)PyCThostFtdcExecOrderField_get_ExecResult, (setter)PyCThostFtdcExecOrderField_set_ExecResult, (char *)"ExecResult", NULL},
    ///结算会员编号 
    {(char *)"ClearingPartID", (getter)PyCThostFtdcExecOrderField_get_ClearingPartID, (setter)PyCThostFtdcExecOrderField_set_ClearingPartID, (char *)"ClearingPartID", NULL},
    ///序号 
    {(char *)"SequenceNo", (getter)PyCThostFtdcExecOrderField_get_SequenceNo, (setter)PyCThostFtdcExecOrderField_set_SequenceNo, (char *)"SequenceNo", NULL},
    ///前置编号 
    {(char *)"FrontID", (getter)PyCThostFtdcExecOrderField_get_FrontID, (setter)PyCThostFtdcExecOrderField_set_FrontID, (char *)"FrontID", NULL},
    ///会话编号 
    {(char *)"SessionID", (getter)PyCThostFtdcExecOrderField_get_SessionID, (setter)PyCThostFtdcExecOrderField_set_SessionID, (char *)"SessionID", NULL},
    ///用户端产品信息 
    {(char *)"UserProductInfo", (getter)PyCThostFtdcExecOrderField_get_UserProductInfo, (setter)PyCThostFtdcExecOrderField_set_UserProductInfo, (char *)"UserProductInfo", NULL},
    ///状态信息 
    {(char *)"StatusMsg", (getter)PyCThostFtdcExecOrderField_get_StatusMsg, (setter)PyCThostFtdcExecOrderField_set_StatusMsg, (char *)"StatusMsg", NULL},
    ///操作用户代码 
    {(char *)"ActiveUserID", (getter)PyCThostFtdcExecOrderField_get_ActiveUserID, (setter)PyCThostFtdcExecOrderField_set_ActiveUserID, (char *)"ActiveUserID", NULL},
    ///经纪公司报单编号 
    {(char *)"BrokerExecOrderSeq", (getter)PyCThostFtdcExecOrderField_get_BrokerExecOrderSeq, (setter)PyCThostFtdcExecOrderField_set_BrokerExecOrderSeq, (char *)"BrokerExecOrderSeq", NULL},
    ///营业部编号 
    {(char *)"BranchID", (getter)PyCThostFtdcExecOrderField_get_BranchID, (setter)PyCThostFtdcExecOrderField_set_BranchID, (char *)"BranchID", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcExecOrderField_get_InvestUnitID, (setter)PyCThostFtdcExecOrderField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///资金账号 
    {(char *)"AccountID", (getter)PyCThostFtdcExecOrderField_get_AccountID, (setter)PyCThostFtdcExecOrderField_set_AccountID, (char *)"AccountID", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcExecOrderField_get_CurrencyID, (setter)PyCThostFtdcExecOrderField_set_CurrencyID, (char *)"CurrencyID", NULL},
    ///保留的无效字段 
    {(char *)"reserve3", (getter)PyCThostFtdcExecOrderField_get_reserve3, (setter)PyCThostFtdcExecOrderField_set_reserve3, (char *)"reserve3", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcExecOrderField_get_MacAddress, (setter)PyCThostFtdcExecOrderField_set_MacAddress, (char *)"MacAddress", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcExecOrderField_get_InstrumentID, (setter)PyCThostFtdcExecOrderField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///合约在交易所的代码 
    {(char *)"ExchangeInstID", (getter)PyCThostFtdcExecOrderField_get_ExchangeInstID, (setter)PyCThostFtdcExecOrderField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcExecOrderField_get_IPAddress, (setter)PyCThostFtdcExecOrderField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcExecOrderFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcExecOrderField",	/* tp_name */
	sizeof(PyCThostFtdcExecOrderField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcExecOrderField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcExecOrderField_repr,   /* tp_repr */
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
	"CThostFtdcExecOrderField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcExecOrderField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcExecOrderField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcExecOrderField_new,       /* tp_new */
};

int PyCThostFtdcExecOrderFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcExecOrderField  */
	if (PyType_Ready(&PyCThostFtdcExecOrderFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcExecOrderField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcExecOrderFieldType);
    if( PyModule_AddObject(module, "CThostFtdcExecOrderField", (PyObject *)&PyCThostFtdcExecOrderFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExecOrderField to module");
        Py_DECREF(&PyCThostFtdcExecOrderFieldType);
		return -1;
    }

    return 0;
}
