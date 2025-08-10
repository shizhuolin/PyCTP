
#include "PyCThostFtdcCombActionField.h"

///申请组合

static PyObject *PyCThostFtdcCombActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcCombActionField *self = (PyCThostFtdcCombActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcCombActionField_init(PyCThostFtdcCombActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "CombActionRef", "UserID", "Direction", "Volume", "CombDirection", "HedgeFlag", "ActionLocalID", "ExchangeID", "ParticipantID", "ClientID", "reserve2", "TraderID", "InstallID", "ActionStatus", "NotifySequence", "TradingDay", "SettlementID", "SequenceNo", "FrontID", "SessionID", "UserProductInfo", "StatusMsg", "reserve3", "MacAddress", "ComTradeID", "BranchID", "InvestUnitID", "InstrumentID", "ExchangeInstID", "IPAddress",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *CombActionField_BrokerID = NULL;
    Py_ssize_t CombActionField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *CombActionField_InvestorID = NULL;
    Py_ssize_t CombActionField_InvestorID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *CombActionField_reserve1 = NULL;
    Py_ssize_t CombActionField_reserve1_len = 0;
            
    ///组合引用
    // TThostFtdcOrderRefType char[13]
    const char *CombActionField_CombActionRef = NULL;
    Py_ssize_t CombActionField_CombActionRef_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *CombActionField_UserID = NULL;
    Py_ssize_t CombActionField_UserID_len = 0;
            
    ///买卖方向
    // TThostFtdcDirectionType char
    char CombActionField_Direction = 0;
            
    ///数量
    // TThostFtdcVolumeType int
    int CombActionField_Volume = 0;
        
    ///组合指令方向
    // TThostFtdcCombDirectionType char
    char CombActionField_CombDirection = 0;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    char CombActionField_HedgeFlag = 0;
            
    ///本地申请组合编号
    // TThostFtdcOrderLocalIDType char[13]
    const char *CombActionField_ActionLocalID = NULL;
    Py_ssize_t CombActionField_ActionLocalID_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *CombActionField_ExchangeID = NULL;
    Py_ssize_t CombActionField_ExchangeID_len = 0;
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    const char *CombActionField_ParticipantID = NULL;
    Py_ssize_t CombActionField_ParticipantID_len = 0;
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    const char *CombActionField_ClientID = NULL;
    Py_ssize_t CombActionField_ClientID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    const char *CombActionField_reserve2 = NULL;
    Py_ssize_t CombActionField_reserve2_len = 0;
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    const char *CombActionField_TraderID = NULL;
    Py_ssize_t CombActionField_TraderID_len = 0;
            
    ///安装编号
    // TThostFtdcInstallIDType int
    int CombActionField_InstallID = 0;
        
    ///组合状态
    // TThostFtdcOrderActionStatusType char
    char CombActionField_ActionStatus = 0;
            
    ///报单提示序号
    // TThostFtdcSequenceNoType int
    int CombActionField_NotifySequence = 0;
        
    ///交易日
    // TThostFtdcDateType char[9]
    const char *CombActionField_TradingDay = NULL;
    Py_ssize_t CombActionField_TradingDay_len = 0;
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    int CombActionField_SettlementID = 0;
        
    ///序号
    // TThostFtdcSequenceNoType int
    int CombActionField_SequenceNo = 0;
        
    ///前置编号
    // TThostFtdcFrontIDType int
    int CombActionField_FrontID = 0;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    int CombActionField_SessionID = 0;
        
    ///用户端产品信息
    // TThostFtdcProductInfoType char[11]
    const char *CombActionField_UserProductInfo = NULL;
    Py_ssize_t CombActionField_UserProductInfo_len = 0;
            
    ///状态信息
    // TThostFtdcErrorMsgType char[81]
    const char *CombActionField_StatusMsg = NULL;
    Py_ssize_t CombActionField_StatusMsg_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    const char *CombActionField_reserve3 = NULL;
    Py_ssize_t CombActionField_reserve3_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *CombActionField_MacAddress = NULL;
    Py_ssize_t CombActionField_MacAddress_len = 0;
            
    ///组合编号
    // TThostFtdcTradeIDType char[21]
    const char *CombActionField_ComTradeID = NULL;
    Py_ssize_t CombActionField_ComTradeID_len = 0;
            
    ///营业部编号
    // TThostFtdcBranchIDType char[9]
    const char *CombActionField_BranchID = NULL;
    Py_ssize_t CombActionField_BranchID_len = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *CombActionField_InvestUnitID = NULL;
    Py_ssize_t CombActionField_InvestUnitID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *CombActionField_InstrumentID = NULL;
    Py_ssize_t CombActionField_InstrumentID_len = 0;
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    const char *CombActionField_ExchangeInstID = NULL;
    Py_ssize_t CombActionField_ExchangeInstID_len = 0;
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *CombActionField_IPAddress = NULL;
    Py_ssize_t CombActionField_IPAddress_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#ciccy#y#y#y#y#y#iciy#iiiiy#y#y#y#y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#ciccs#s#s#s#s#s#icis#iiiis#s#s#s#s#s#s#s#s#s#", (char **)kwlist
#endif

        , &CombActionField_BrokerID, &CombActionField_BrokerID_len 
        , &CombActionField_InvestorID, &CombActionField_InvestorID_len 
        , &CombActionField_reserve1, &CombActionField_reserve1_len 
        , &CombActionField_CombActionRef, &CombActionField_CombActionRef_len 
        , &CombActionField_UserID, &CombActionField_UserID_len 
        , &CombActionField_Direction 
        , &CombActionField_Volume 
        , &CombActionField_CombDirection 
        , &CombActionField_HedgeFlag 
        , &CombActionField_ActionLocalID, &CombActionField_ActionLocalID_len 
        , &CombActionField_ExchangeID, &CombActionField_ExchangeID_len 
        , &CombActionField_ParticipantID, &CombActionField_ParticipantID_len 
        , &CombActionField_ClientID, &CombActionField_ClientID_len 
        , &CombActionField_reserve2, &CombActionField_reserve2_len 
        , &CombActionField_TraderID, &CombActionField_TraderID_len 
        , &CombActionField_InstallID 
        , &CombActionField_ActionStatus 
        , &CombActionField_NotifySequence 
        , &CombActionField_TradingDay, &CombActionField_TradingDay_len 
        , &CombActionField_SettlementID 
        , &CombActionField_SequenceNo 
        , &CombActionField_FrontID 
        , &CombActionField_SessionID 
        , &CombActionField_UserProductInfo, &CombActionField_UserProductInfo_len 
        , &CombActionField_StatusMsg, &CombActionField_StatusMsg_len 
        , &CombActionField_reserve3, &CombActionField_reserve3_len 
        , &CombActionField_MacAddress, &CombActionField_MacAddress_len 
        , &CombActionField_ComTradeID, &CombActionField_ComTradeID_len 
        , &CombActionField_BranchID, &CombActionField_BranchID_len 
        , &CombActionField_InvestUnitID, &CombActionField_InvestUnitID_len 
        , &CombActionField_InstrumentID, &CombActionField_InstrumentID_len 
        , &CombActionField_ExchangeInstID, &CombActionField_ExchangeInstID_len 
        , &CombActionField_IPAddress, &CombActionField_IPAddress_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( CombActionField_BrokerID != NULL ) {
        if(CombActionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", CombActionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, CombActionField_BrokerID, CombActionField_BrokerID_len);        
        strncpy(self->data.BrokerID, CombActionField_BrokerID, sizeof(self->data.BrokerID) );
        CombActionField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( CombActionField_InvestorID != NULL ) {
        if(CombActionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", CombActionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, CombActionField_InvestorID, CombActionField_InvestorID_len);        
        strncpy(self->data.InvestorID, CombActionField_InvestorID, sizeof(self->data.InvestorID) );
        CombActionField_InvestorID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( CombActionField_reserve1 != NULL ) {
        if(CombActionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", CombActionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, CombActionField_reserve1, CombActionField_reserve1_len);        
        strncpy(self->data.reserve1, CombActionField_reserve1, sizeof(self->data.reserve1) );
        CombActionField_reserve1 = NULL;
    }
            
    ///组合引用
    // TThostFtdcOrderRefType char[13]
    if( CombActionField_CombActionRef != NULL ) {
        if(CombActionField_CombActionRef_len > (Py_ssize_t)sizeof(self->data.CombActionRef)) {
            PyErr_Format(PyExc_ValueError, "CombActionRef too long: length=%zd (max allowed is %zd)", CombActionField_CombActionRef_len, (Py_ssize_t)sizeof(self->data.CombActionRef));
            return -1;
        }
        // memset(self->data.CombActionRef, 0, sizeof(self->data.CombActionRef));
        // memcpy(self->data.CombActionRef, CombActionField_CombActionRef, CombActionField_CombActionRef_len);        
        strncpy(self->data.CombActionRef, CombActionField_CombActionRef, sizeof(self->data.CombActionRef) );
        CombActionField_CombActionRef = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( CombActionField_UserID != NULL ) {
        if(CombActionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", CombActionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, CombActionField_UserID, CombActionField_UserID_len);        
        strncpy(self->data.UserID, CombActionField_UserID, sizeof(self->data.UserID) );
        CombActionField_UserID = NULL;
    }
            
    ///买卖方向
    // TThostFtdcDirectionType char
    self->data.Direction = CombActionField_Direction;
            
    ///数量
    // TThostFtdcVolumeType int
    self->data.Volume = CombActionField_Volume;
        
    ///组合指令方向
    // TThostFtdcCombDirectionType char
    self->data.CombDirection = CombActionField_CombDirection;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    self->data.HedgeFlag = CombActionField_HedgeFlag;
            
    ///本地申请组合编号
    // TThostFtdcOrderLocalIDType char[13]
    if( CombActionField_ActionLocalID != NULL ) {
        if(CombActionField_ActionLocalID_len > (Py_ssize_t)sizeof(self->data.ActionLocalID)) {
            PyErr_Format(PyExc_ValueError, "ActionLocalID too long: length=%zd (max allowed is %zd)", CombActionField_ActionLocalID_len, (Py_ssize_t)sizeof(self->data.ActionLocalID));
            return -1;
        }
        // memset(self->data.ActionLocalID, 0, sizeof(self->data.ActionLocalID));
        // memcpy(self->data.ActionLocalID, CombActionField_ActionLocalID, CombActionField_ActionLocalID_len);        
        strncpy(self->data.ActionLocalID, CombActionField_ActionLocalID, sizeof(self->data.ActionLocalID) );
        CombActionField_ActionLocalID = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( CombActionField_ExchangeID != NULL ) {
        if(CombActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", CombActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, CombActionField_ExchangeID, CombActionField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, CombActionField_ExchangeID, sizeof(self->data.ExchangeID) );
        CombActionField_ExchangeID = NULL;
    }
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    if( CombActionField_ParticipantID != NULL ) {
        if(CombActionField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", CombActionField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
            return -1;
        }
        // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
        // memcpy(self->data.ParticipantID, CombActionField_ParticipantID, CombActionField_ParticipantID_len);        
        strncpy(self->data.ParticipantID, CombActionField_ParticipantID, sizeof(self->data.ParticipantID) );
        CombActionField_ParticipantID = NULL;
    }
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    if( CombActionField_ClientID != NULL ) {
        if(CombActionField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", CombActionField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
            return -1;
        }
        // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
        // memcpy(self->data.ClientID, CombActionField_ClientID, CombActionField_ClientID_len);        
        strncpy(self->data.ClientID, CombActionField_ClientID, sizeof(self->data.ClientID) );
        CombActionField_ClientID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    if( CombActionField_reserve2 != NULL ) {
        if(CombActionField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", CombActionField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
            return -1;
        }
        // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
        // memcpy(self->data.reserve2, CombActionField_reserve2, CombActionField_reserve2_len);        
        strncpy(self->data.reserve2, CombActionField_reserve2, sizeof(self->data.reserve2) );
        CombActionField_reserve2 = NULL;
    }
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    if( CombActionField_TraderID != NULL ) {
        if(CombActionField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", CombActionField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
            return -1;
        }
        // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
        // memcpy(self->data.TraderID, CombActionField_TraderID, CombActionField_TraderID_len);        
        strncpy(self->data.TraderID, CombActionField_TraderID, sizeof(self->data.TraderID) );
        CombActionField_TraderID = NULL;
    }
            
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = CombActionField_InstallID;
        
    ///组合状态
    // TThostFtdcOrderActionStatusType char
    self->data.ActionStatus = CombActionField_ActionStatus;
            
    ///报单提示序号
    // TThostFtdcSequenceNoType int
    self->data.NotifySequence = CombActionField_NotifySequence;
        
    ///交易日
    // TThostFtdcDateType char[9]
    if( CombActionField_TradingDay != NULL ) {
        if(CombActionField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", CombActionField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, CombActionField_TradingDay, CombActionField_TradingDay_len);        
        strncpy(self->data.TradingDay, CombActionField_TradingDay, sizeof(self->data.TradingDay) );
        CombActionField_TradingDay = NULL;
    }
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    self->data.SettlementID = CombActionField_SettlementID;
        
    ///序号
    // TThostFtdcSequenceNoType int
    self->data.SequenceNo = CombActionField_SequenceNo;
        
    ///前置编号
    // TThostFtdcFrontIDType int
    self->data.FrontID = CombActionField_FrontID;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    self->data.SessionID = CombActionField_SessionID;
        
    ///用户端产品信息
    // TThostFtdcProductInfoType char[11]
    if( CombActionField_UserProductInfo != NULL ) {
        if(CombActionField_UserProductInfo_len > (Py_ssize_t)sizeof(self->data.UserProductInfo)) {
            PyErr_Format(PyExc_ValueError, "UserProductInfo too long: length=%zd (max allowed is %zd)", CombActionField_UserProductInfo_len, (Py_ssize_t)sizeof(self->data.UserProductInfo));
            return -1;
        }
        // memset(self->data.UserProductInfo, 0, sizeof(self->data.UserProductInfo));
        // memcpy(self->data.UserProductInfo, CombActionField_UserProductInfo, CombActionField_UserProductInfo_len);        
        strncpy(self->data.UserProductInfo, CombActionField_UserProductInfo, sizeof(self->data.UserProductInfo) );
        CombActionField_UserProductInfo = NULL;
    }
            
    ///状态信息
    // TThostFtdcErrorMsgType char[81]
    if( CombActionField_StatusMsg != NULL ) {
        if(CombActionField_StatusMsg_len > (Py_ssize_t)sizeof(self->data.StatusMsg)) {
            PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is %zd)", CombActionField_StatusMsg_len, (Py_ssize_t)sizeof(self->data.StatusMsg));
            return -1;
        }
        // memset(self->data.StatusMsg, 0, sizeof(self->data.StatusMsg));
        // memcpy(self->data.StatusMsg, CombActionField_StatusMsg, CombActionField_StatusMsg_len);        
        strncpy(self->data.StatusMsg, CombActionField_StatusMsg, sizeof(self->data.StatusMsg) );
        CombActionField_StatusMsg = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    if( CombActionField_reserve3 != NULL ) {
        if(CombActionField_reserve3_len > (Py_ssize_t)sizeof(self->data.reserve3)) {
            PyErr_Format(PyExc_ValueError, "reserve3 too long: length=%zd (max allowed is %zd)", CombActionField_reserve3_len, (Py_ssize_t)sizeof(self->data.reserve3));
            return -1;
        }
        // memset(self->data.reserve3, 0, sizeof(self->data.reserve3));
        // memcpy(self->data.reserve3, CombActionField_reserve3, CombActionField_reserve3_len);        
        strncpy(self->data.reserve3, CombActionField_reserve3, sizeof(self->data.reserve3) );
        CombActionField_reserve3 = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( CombActionField_MacAddress != NULL ) {
        if(CombActionField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", CombActionField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, CombActionField_MacAddress, CombActionField_MacAddress_len);        
        strncpy(self->data.MacAddress, CombActionField_MacAddress, sizeof(self->data.MacAddress) );
        CombActionField_MacAddress = NULL;
    }
            
    ///组合编号
    // TThostFtdcTradeIDType char[21]
    if( CombActionField_ComTradeID != NULL ) {
        if(CombActionField_ComTradeID_len > (Py_ssize_t)sizeof(self->data.ComTradeID)) {
            PyErr_Format(PyExc_ValueError, "ComTradeID too long: length=%zd (max allowed is %zd)", CombActionField_ComTradeID_len, (Py_ssize_t)sizeof(self->data.ComTradeID));
            return -1;
        }
        // memset(self->data.ComTradeID, 0, sizeof(self->data.ComTradeID));
        // memcpy(self->data.ComTradeID, CombActionField_ComTradeID, CombActionField_ComTradeID_len);        
        strncpy(self->data.ComTradeID, CombActionField_ComTradeID, sizeof(self->data.ComTradeID) );
        CombActionField_ComTradeID = NULL;
    }
            
    ///营业部编号
    // TThostFtdcBranchIDType char[9]
    if( CombActionField_BranchID != NULL ) {
        if(CombActionField_BranchID_len > (Py_ssize_t)sizeof(self->data.BranchID)) {
            PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is %zd)", CombActionField_BranchID_len, (Py_ssize_t)sizeof(self->data.BranchID));
            return -1;
        }
        // memset(self->data.BranchID, 0, sizeof(self->data.BranchID));
        // memcpy(self->data.BranchID, CombActionField_BranchID, CombActionField_BranchID_len);        
        strncpy(self->data.BranchID, CombActionField_BranchID, sizeof(self->data.BranchID) );
        CombActionField_BranchID = NULL;
    }
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( CombActionField_InvestUnitID != NULL ) {
        if(CombActionField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", CombActionField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, CombActionField_InvestUnitID, CombActionField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, CombActionField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        CombActionField_InvestUnitID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( CombActionField_InstrumentID != NULL ) {
        if(CombActionField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", CombActionField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, CombActionField_InstrumentID, CombActionField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, CombActionField_InstrumentID, sizeof(self->data.InstrumentID) );
        CombActionField_InstrumentID = NULL;
    }
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    if( CombActionField_ExchangeInstID != NULL ) {
        if(CombActionField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", CombActionField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
            return -1;
        }
        // memset(self->data.ExchangeInstID, 0, sizeof(self->data.ExchangeInstID));
        // memcpy(self->data.ExchangeInstID, CombActionField_ExchangeInstID, CombActionField_ExchangeInstID_len);        
        strncpy(self->data.ExchangeInstID, CombActionField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
        CombActionField_ExchangeInstID = NULL;
    }
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( CombActionField_IPAddress != NULL ) {
        if(CombActionField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", CombActionField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, CombActionField_IPAddress, CombActionField_IPAddress_len);        
        strncpy(self->data.IPAddress, CombActionField_IPAddress, sizeof(self->data.IPAddress) );
        CombActionField_IPAddress = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcCombActionField_dealloc(PyCThostFtdcCombActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcCombActionField_repr(PyCThostFtdcCombActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:c,s:i,s:c,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:i,s:i,s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:c,s:i,s:c,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:i,s:i,s:i,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"CombActionRef", self->data.CombActionRef//, (Py_ssize_t)sizeof(self->data.CombActionRef) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"Direction", self->data.Direction 
        ,"Volume", self->data.Volume 
        ,"CombDirection", self->data.CombDirection 
        ,"HedgeFlag", self->data.HedgeFlag 
        ,"ActionLocalID", self->data.ActionLocalID//, (Py_ssize_t)sizeof(self->data.ActionLocalID) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"ParticipantID", self->data.ParticipantID//, (Py_ssize_t)sizeof(self->data.ParticipantID) 
        ,"ClientID", self->data.ClientID//, (Py_ssize_t)sizeof(self->data.ClientID) 
        ,"reserve2", self->data.reserve2//, (Py_ssize_t)sizeof(self->data.reserve2) 
        ,"TraderID", self->data.TraderID//, (Py_ssize_t)sizeof(self->data.TraderID) 
        ,"InstallID", self->data.InstallID 
        ,"ActionStatus", self->data.ActionStatus 
        ,"NotifySequence", self->data.NotifySequence 
        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"SettlementID", self->data.SettlementID 
        ,"SequenceNo", self->data.SequenceNo 
        ,"FrontID", self->data.FrontID 
        ,"SessionID", self->data.SessionID 
        ,"UserProductInfo", self->data.UserProductInfo//, (Py_ssize_t)sizeof(self->data.UserProductInfo) 
        ,"StatusMsg", self->data.StatusMsg//, (Py_ssize_t)sizeof(self->data.StatusMsg) 
        ,"reserve3", self->data.reserve3//, (Py_ssize_t)sizeof(self->data.reserve3) 
        ,"MacAddress", self->data.MacAddress//, (Py_ssize_t)sizeof(self->data.MacAddress) 
        ,"ComTradeID", self->data.ComTradeID//, (Py_ssize_t)sizeof(self->data.ComTradeID) 
        ,"BranchID", self->data.BranchID//, (Py_ssize_t)sizeof(self->data.BranchID) 
        ,"InvestUnitID", self->data.InvestUnitID//, (Py_ssize_t)sizeof(self->data.InvestUnitID) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"ExchangeInstID", self->data.ExchangeInstID//, (Py_ssize_t)sizeof(self->data.ExchangeInstID) 
        ,"IPAddress", self->data.IPAddress//, (Py_ssize_t)sizeof(self->data.IPAddress) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCombActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcCombActionField_get_BrokerID(PyCThostFtdcCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcCombActionField_set_BrokerID(PyCThostFtdcCombActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCombActionField_get_InvestorID(PyCThostFtdcCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcCombActionField_set_InvestorID(PyCThostFtdcCombActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCombActionField_get_reserve1(PyCThostFtdcCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcCombActionField_set_reserve1(PyCThostFtdcCombActionField *self, PyObject* val, void *closure) {
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
            
///组合引用
// TThostFtdcOrderRefType char[13]
static PyObject *PyCThostFtdcCombActionField_get_CombActionRef(PyCThostFtdcCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CombActionRef, (Py_ssize_t)sizeof(self->data.CombActionRef));
    return PyBytes_FromString(self->data.CombActionRef);
}

///组合引用
// TThostFtdcOrderRefType char[13]
static int PyCThostFtdcCombActionField_set_CombActionRef(PyCThostFtdcCombActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CombActionRef Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CombActionRef)) {
        PyErr_SetString(PyExc_ValueError, "CombActionRef must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.CombActionRef, 0, sizeof(self->data.CombActionRef));
    // memcpy(self->data.CombActionRef, buf, len);
    strncpy(self->data.CombActionRef, buf, sizeof(self->data.CombActionRef));
    return 0;
}
            
///用户代码
// TThostFtdcUserIDType char[16]
static PyObject *PyCThostFtdcCombActionField_get_UserID(PyCThostFtdcCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcCombActionField_set_UserID(PyCThostFtdcCombActionField *self, PyObject* val, void *closure) {
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
            
///买卖方向
// TThostFtdcDirectionType char
static PyObject *PyCThostFtdcCombActionField_get_Direction(PyCThostFtdcCombActionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

///买卖方向
// TThostFtdcDirectionType char
static int PyCThostFtdcCombActionField_set_Direction(PyCThostFtdcCombActionField *self, PyObject* val, void *closure) {
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
            
///数量
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcCombActionField_get_Volume(PyCThostFtdcCombActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.Volume);
#else
    return PyInt_FromLong(self->data.Volume);
#endif
}

///数量
// TThostFtdcVolumeType int
static int PyCThostFtdcCombActionField_set_Volume(PyCThostFtdcCombActionField *self, PyObject* val, void *closure) {
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
        
///组合指令方向
// TThostFtdcCombDirectionType char
static PyObject *PyCThostFtdcCombActionField_get_CombDirection(PyCThostFtdcCombActionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.CombDirection), 1);
}

///组合指令方向
// TThostFtdcCombDirectionType char
static int PyCThostFtdcCombActionField_set_CombDirection(PyCThostFtdcCombActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CombDirection Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CombDirection)) {
        PyErr_SetString(PyExc_ValueError, "CombDirection must be equal 1 bytes");
        return -1;
    }
    self->data.CombDirection = *buf;
    return 0;
}
            
///投机套保标志
// TThostFtdcHedgeFlagType char
static PyObject *PyCThostFtdcCombActionField_get_HedgeFlag(PyCThostFtdcCombActionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

///投机套保标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcCombActionField_set_HedgeFlag(PyCThostFtdcCombActionField *self, PyObject* val, void *closure) {
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
            
///本地申请组合编号
// TThostFtdcOrderLocalIDType char[13]
static PyObject *PyCThostFtdcCombActionField_get_ActionLocalID(PyCThostFtdcCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActionLocalID, (Py_ssize_t)sizeof(self->data.ActionLocalID));
    return PyBytes_FromString(self->data.ActionLocalID);
}

///本地申请组合编号
// TThostFtdcOrderLocalIDType char[13]
static int PyCThostFtdcCombActionField_set_ActionLocalID(PyCThostFtdcCombActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ActionLocalID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ActionLocalID)) {
        PyErr_SetString(PyExc_ValueError, "ActionLocalID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.ActionLocalID, 0, sizeof(self->data.ActionLocalID));
    // memcpy(self->data.ActionLocalID, buf, len);
    strncpy(self->data.ActionLocalID, buf, sizeof(self->data.ActionLocalID));
    return 0;
}
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcCombActionField_get_ExchangeID(PyCThostFtdcCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcCombActionField_set_ExchangeID(PyCThostFtdcCombActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCombActionField_get_ParticipantID(PyCThostFtdcCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParticipantID, (Py_ssize_t)sizeof(self->data.ParticipantID));
    return PyBytes_FromString(self->data.ParticipantID);
}

///会员代码
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcCombActionField_set_ParticipantID(PyCThostFtdcCombActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCombActionField_get_ClientID(PyCThostFtdcCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientID, (Py_ssize_t)sizeof(self->data.ClientID));
    return PyBytes_FromString(self->data.ClientID);
}

///客户代码
// TThostFtdcClientIDType char[11]
static int PyCThostFtdcCombActionField_set_ClientID(PyCThostFtdcCombActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCombActionField_get_reserve2(PyCThostFtdcCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve2, (Py_ssize_t)sizeof(self->data.reserve2));
    return PyBytes_FromString(self->data.reserve2);
}

///保留的无效字段
// TThostFtdcOldExchangeInstIDType char[31]
static int PyCThostFtdcCombActionField_set_reserve2(PyCThostFtdcCombActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCombActionField_get_TraderID(PyCThostFtdcCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TraderID, (Py_ssize_t)sizeof(self->data.TraderID));
    return PyBytes_FromString(self->data.TraderID);
}

///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static int PyCThostFtdcCombActionField_set_TraderID(PyCThostFtdcCombActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCombActionField_get_InstallID(PyCThostFtdcCombActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcCombActionField_set_InstallID(PyCThostFtdcCombActionField *self, PyObject* val, void *closure) {
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
        
///组合状态
// TThostFtdcOrderActionStatusType char
static PyObject *PyCThostFtdcCombActionField_get_ActionStatus(PyCThostFtdcCombActionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionStatus), 1);
}

///组合状态
// TThostFtdcOrderActionStatusType char
static int PyCThostFtdcCombActionField_set_ActionStatus(PyCThostFtdcCombActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ActionStatus Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ActionStatus)) {
        PyErr_SetString(PyExc_ValueError, "ActionStatus must be equal 1 bytes");
        return -1;
    }
    self->data.ActionStatus = *buf;
    return 0;
}
            
///报单提示序号
// TThostFtdcSequenceNoType int
static PyObject *PyCThostFtdcCombActionField_get_NotifySequence(PyCThostFtdcCombActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.NotifySequence);
#else
    return PyInt_FromLong(self->data.NotifySequence);
#endif
}

///报单提示序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcCombActionField_set_NotifySequence(PyCThostFtdcCombActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCombActionField_get_TradingDay(PyCThostFtdcCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcCombActionField_set_TradingDay(PyCThostFtdcCombActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCombActionField_get_SettlementID(PyCThostFtdcCombActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SettlementID);
#else
    return PyInt_FromLong(self->data.SettlementID);
#endif
}

///结算编号
// TThostFtdcSettlementIDType int
static int PyCThostFtdcCombActionField_set_SettlementID(PyCThostFtdcCombActionField *self, PyObject* val, void *closure) {
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
        
///序号
// TThostFtdcSequenceNoType int
static PyObject *PyCThostFtdcCombActionField_get_SequenceNo(PyCThostFtdcCombActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SequenceNo);
#else
    return PyInt_FromLong(self->data.SequenceNo);
#endif
}

///序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcCombActionField_set_SequenceNo(PyCThostFtdcCombActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCombActionField_get_FrontID(PyCThostFtdcCombActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FrontID);
#else
    return PyInt_FromLong(self->data.FrontID);
#endif
}

///前置编号
// TThostFtdcFrontIDType int
static int PyCThostFtdcCombActionField_set_FrontID(PyCThostFtdcCombActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCombActionField_get_SessionID(PyCThostFtdcCombActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话编号
// TThostFtdcSessionIDType int
static int PyCThostFtdcCombActionField_set_SessionID(PyCThostFtdcCombActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCombActionField_get_UserProductInfo(PyCThostFtdcCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserProductInfo, (Py_ssize_t)sizeof(self->data.UserProductInfo));
    return PyBytes_FromString(self->data.UserProductInfo);
}

///用户端产品信息
// TThostFtdcProductInfoType char[11]
static int PyCThostFtdcCombActionField_set_UserProductInfo(PyCThostFtdcCombActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCombActionField_get_StatusMsg(PyCThostFtdcCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.StatusMsg, (Py_ssize_t)sizeof(self->data.StatusMsg));
    return PyBytes_FromString(self->data.StatusMsg);
}

///状态信息
// TThostFtdcErrorMsgType char[81]
static int PyCThostFtdcCombActionField_set_StatusMsg(PyCThostFtdcCombActionField *self, PyObject* val, void *closure) {
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
            
///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static PyObject *PyCThostFtdcCombActionField_get_reserve3(PyCThostFtdcCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve3, (Py_ssize_t)sizeof(self->data.reserve3));
    return PyBytes_FromString(self->data.reserve3);
}

///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static int PyCThostFtdcCombActionField_set_reserve3(PyCThostFtdcCombActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCombActionField_get_MacAddress(PyCThostFtdcCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcCombActionField_set_MacAddress(PyCThostFtdcCombActionField *self, PyObject* val, void *closure) {
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
            
///组合编号
// TThostFtdcTradeIDType char[21]
static PyObject *PyCThostFtdcCombActionField_get_ComTradeID(PyCThostFtdcCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ComTradeID, (Py_ssize_t)sizeof(self->data.ComTradeID));
    return PyBytes_FromString(self->data.ComTradeID);
}

///组合编号
// TThostFtdcTradeIDType char[21]
static int PyCThostFtdcCombActionField_set_ComTradeID(PyCThostFtdcCombActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ComTradeID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ComTradeID)) {
        PyErr_SetString(PyExc_ValueError, "ComTradeID must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.ComTradeID, 0, sizeof(self->data.ComTradeID));
    // memcpy(self->data.ComTradeID, buf, len);
    strncpy(self->data.ComTradeID, buf, sizeof(self->data.ComTradeID));
    return 0;
}
            
///营业部编号
// TThostFtdcBranchIDType char[9]
static PyObject *PyCThostFtdcCombActionField_get_BranchID(PyCThostFtdcCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BranchID, (Py_ssize_t)sizeof(self->data.BranchID));
    return PyBytes_FromString(self->data.BranchID);
}

///营业部编号
// TThostFtdcBranchIDType char[9]
static int PyCThostFtdcCombActionField_set_BranchID(PyCThostFtdcCombActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCombActionField_get_InvestUnitID(PyCThostFtdcCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcCombActionField_set_InvestUnitID(PyCThostFtdcCombActionField *self, PyObject* val, void *closure) {
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
            
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcCombActionField_get_InstrumentID(PyCThostFtdcCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcCombActionField_set_InstrumentID(PyCThostFtdcCombActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCombActionField_get_ExchangeInstID(PyCThostFtdcCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeInstID, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
    return PyBytes_FromString(self->data.ExchangeInstID);
}

///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static int PyCThostFtdcCombActionField_set_ExchangeInstID(PyCThostFtdcCombActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCombActionField_get_IPAddress(PyCThostFtdcCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcCombActionField_set_IPAddress(PyCThostFtdcCombActionField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcCombActionField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcCombActionField_get_BrokerID, (setter)PyCThostFtdcCombActionField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcCombActionField_get_InvestorID, (setter)PyCThostFtdcCombActionField_set_InvestorID, (char *)"InvestorID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcCombActionField_get_reserve1, (setter)PyCThostFtdcCombActionField_set_reserve1, (char *)"reserve1", NULL},
    ///组合引用 
    {(char *)"CombActionRef", (getter)PyCThostFtdcCombActionField_get_CombActionRef, (setter)PyCThostFtdcCombActionField_set_CombActionRef, (char *)"CombActionRef", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcCombActionField_get_UserID, (setter)PyCThostFtdcCombActionField_set_UserID, (char *)"UserID", NULL},
    ///买卖方向 
    {(char *)"Direction", (getter)PyCThostFtdcCombActionField_get_Direction, (setter)PyCThostFtdcCombActionField_set_Direction, (char *)"Direction", NULL},
    ///数量 
    {(char *)"Volume", (getter)PyCThostFtdcCombActionField_get_Volume, (setter)PyCThostFtdcCombActionField_set_Volume, (char *)"Volume", NULL},
    ///组合指令方向 
    {(char *)"CombDirection", (getter)PyCThostFtdcCombActionField_get_CombDirection, (setter)PyCThostFtdcCombActionField_set_CombDirection, (char *)"CombDirection", NULL},
    ///投机套保标志 
    {(char *)"HedgeFlag", (getter)PyCThostFtdcCombActionField_get_HedgeFlag, (setter)PyCThostFtdcCombActionField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
    ///本地申请组合编号 
    {(char *)"ActionLocalID", (getter)PyCThostFtdcCombActionField_get_ActionLocalID, (setter)PyCThostFtdcCombActionField_set_ActionLocalID, (char *)"ActionLocalID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcCombActionField_get_ExchangeID, (setter)PyCThostFtdcCombActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///会员代码 
    {(char *)"ParticipantID", (getter)PyCThostFtdcCombActionField_get_ParticipantID, (setter)PyCThostFtdcCombActionField_set_ParticipantID, (char *)"ParticipantID", NULL},
    ///客户代码 
    {(char *)"ClientID", (getter)PyCThostFtdcCombActionField_get_ClientID, (setter)PyCThostFtdcCombActionField_set_ClientID, (char *)"ClientID", NULL},
    ///保留的无效字段 
    {(char *)"reserve2", (getter)PyCThostFtdcCombActionField_get_reserve2, (setter)PyCThostFtdcCombActionField_set_reserve2, (char *)"reserve2", NULL},
    ///交易所交易员代码 
    {(char *)"TraderID", (getter)PyCThostFtdcCombActionField_get_TraderID, (setter)PyCThostFtdcCombActionField_set_TraderID, (char *)"TraderID", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcCombActionField_get_InstallID, (setter)PyCThostFtdcCombActionField_set_InstallID, (char *)"InstallID", NULL},
    ///组合状态 
    {(char *)"ActionStatus", (getter)PyCThostFtdcCombActionField_get_ActionStatus, (setter)PyCThostFtdcCombActionField_set_ActionStatus, (char *)"ActionStatus", NULL},
    ///报单提示序号 
    {(char *)"NotifySequence", (getter)PyCThostFtdcCombActionField_get_NotifySequence, (setter)PyCThostFtdcCombActionField_set_NotifySequence, (char *)"NotifySequence", NULL},
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcCombActionField_get_TradingDay, (setter)PyCThostFtdcCombActionField_set_TradingDay, (char *)"TradingDay", NULL},
    ///结算编号 
    {(char *)"SettlementID", (getter)PyCThostFtdcCombActionField_get_SettlementID, (setter)PyCThostFtdcCombActionField_set_SettlementID, (char *)"SettlementID", NULL},
    ///序号 
    {(char *)"SequenceNo", (getter)PyCThostFtdcCombActionField_get_SequenceNo, (setter)PyCThostFtdcCombActionField_set_SequenceNo, (char *)"SequenceNo", NULL},
    ///前置编号 
    {(char *)"FrontID", (getter)PyCThostFtdcCombActionField_get_FrontID, (setter)PyCThostFtdcCombActionField_set_FrontID, (char *)"FrontID", NULL},
    ///会话编号 
    {(char *)"SessionID", (getter)PyCThostFtdcCombActionField_get_SessionID, (setter)PyCThostFtdcCombActionField_set_SessionID, (char *)"SessionID", NULL},
    ///用户端产品信息 
    {(char *)"UserProductInfo", (getter)PyCThostFtdcCombActionField_get_UserProductInfo, (setter)PyCThostFtdcCombActionField_set_UserProductInfo, (char *)"UserProductInfo", NULL},
    ///状态信息 
    {(char *)"StatusMsg", (getter)PyCThostFtdcCombActionField_get_StatusMsg, (setter)PyCThostFtdcCombActionField_set_StatusMsg, (char *)"StatusMsg", NULL},
    ///保留的无效字段 
    {(char *)"reserve3", (getter)PyCThostFtdcCombActionField_get_reserve3, (setter)PyCThostFtdcCombActionField_set_reserve3, (char *)"reserve3", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcCombActionField_get_MacAddress, (setter)PyCThostFtdcCombActionField_set_MacAddress, (char *)"MacAddress", NULL},
    ///组合编号 
    {(char *)"ComTradeID", (getter)PyCThostFtdcCombActionField_get_ComTradeID, (setter)PyCThostFtdcCombActionField_set_ComTradeID, (char *)"ComTradeID", NULL},
    ///营业部编号 
    {(char *)"BranchID", (getter)PyCThostFtdcCombActionField_get_BranchID, (setter)PyCThostFtdcCombActionField_set_BranchID, (char *)"BranchID", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcCombActionField_get_InvestUnitID, (setter)PyCThostFtdcCombActionField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcCombActionField_get_InstrumentID, (setter)PyCThostFtdcCombActionField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///合约在交易所的代码 
    {(char *)"ExchangeInstID", (getter)PyCThostFtdcCombActionField_get_ExchangeInstID, (setter)PyCThostFtdcCombActionField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcCombActionField_get_IPAddress, (setter)PyCThostFtdcCombActionField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcCombActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcCombActionField",	/* tp_name */
	sizeof(PyCThostFtdcCombActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcCombActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcCombActionField_repr,   /* tp_repr */
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
	"CThostFtdcCombActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcCombActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcCombActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcCombActionField_new,       /* tp_new */
};

int PyCThostFtdcCombActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcCombActionField  */
	if (PyType_Ready(&PyCThostFtdcCombActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcCombActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcCombActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcCombActionField", (PyObject *)&PyCThostFtdcCombActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcCombActionField to module");
        Py_DECREF(&PyCThostFtdcCombActionFieldType);
		return -1;
    }

    return 0;
}
