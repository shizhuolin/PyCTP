
#include "PyCThostFtdcExchangeExecOrderField.h"

///交易所执行宣告信息

static PyObject *PyCThostFtdcExchangeExecOrderField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcExchangeExecOrderField *self = (PyCThostFtdcExchangeExecOrderField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcExchangeExecOrderField_init(PyCThostFtdcExchangeExecOrderField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"Volume", "RequestID", "BusinessUnit", "OffsetFlag", "HedgeFlag", "ActionType", "PosiDirection", "ReservePositionFlag", "CloseFlag", "ExecOrderLocalID", "ExchangeID", "ParticipantID", "ClientID", "reserve1", "TraderID", "InstallID", "OrderSubmitStatus", "NotifySequence", "TradingDay", "SettlementID", "ExecOrderSysID", "InsertDate", "InsertTime", "CancelTime", "ExecResult", "ClearingPartID", "SequenceNo", "BranchID", "reserve2", "MacAddress", "ExchangeInstID", "IPAddress",  NULL};


    ///数量
    // TThostFtdcVolumeType int
    int ExchangeExecOrderField_Volume = 0;
        
    ///请求编号
    // TThostFtdcRequestIDType int
    int ExchangeExecOrderField_RequestID = 0;
        
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    const char *ExchangeExecOrderField_BusinessUnit = NULL;
    Py_ssize_t ExchangeExecOrderField_BusinessUnit_len = 0;
            
    ///开平标志
    // TThostFtdcOffsetFlagType char
    char ExchangeExecOrderField_OffsetFlag = 0;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    char ExchangeExecOrderField_HedgeFlag = 0;
            
    ///执行类型
    // TThostFtdcActionTypeType char
    char ExchangeExecOrderField_ActionType = 0;
            
    ///保留头寸申请的持仓方向
    // TThostFtdcPosiDirectionType char
    char ExchangeExecOrderField_PosiDirection = 0;
            
    ///期权行权后是否保留期货头寸的标记,该字段已废弃
    // TThostFtdcExecOrderPositionFlagType char
    char ExchangeExecOrderField_ReservePositionFlag = 0;
            
    ///期权行权后生成的头寸是否自动平仓
    // TThostFtdcExecOrderCloseFlagType char
    char ExchangeExecOrderField_CloseFlag = 0;
            
    ///本地执行宣告编号
    // TThostFtdcOrderLocalIDType char[13]
    const char *ExchangeExecOrderField_ExecOrderLocalID = NULL;
    Py_ssize_t ExchangeExecOrderField_ExecOrderLocalID_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *ExchangeExecOrderField_ExchangeID = NULL;
    Py_ssize_t ExchangeExecOrderField_ExchangeID_len = 0;
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    const char *ExchangeExecOrderField_ParticipantID = NULL;
    Py_ssize_t ExchangeExecOrderField_ParticipantID_len = 0;
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    const char *ExchangeExecOrderField_ClientID = NULL;
    Py_ssize_t ExchangeExecOrderField_ClientID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    const char *ExchangeExecOrderField_reserve1 = NULL;
    Py_ssize_t ExchangeExecOrderField_reserve1_len = 0;
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    const char *ExchangeExecOrderField_TraderID = NULL;
    Py_ssize_t ExchangeExecOrderField_TraderID_len = 0;
            
    ///安装编号
    // TThostFtdcInstallIDType int
    int ExchangeExecOrderField_InstallID = 0;
        
    ///执行宣告提交状态
    // TThostFtdcOrderSubmitStatusType char
    char ExchangeExecOrderField_OrderSubmitStatus = 0;
            
    ///报单提示序号
    // TThostFtdcSequenceNoType int
    int ExchangeExecOrderField_NotifySequence = 0;
        
    ///交易日
    // TThostFtdcDateType char[9]
    const char *ExchangeExecOrderField_TradingDay = NULL;
    Py_ssize_t ExchangeExecOrderField_TradingDay_len = 0;
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    int ExchangeExecOrderField_SettlementID = 0;
        
    ///执行宣告编号
    // TThostFtdcExecOrderSysIDType char[21]
    const char *ExchangeExecOrderField_ExecOrderSysID = NULL;
    Py_ssize_t ExchangeExecOrderField_ExecOrderSysID_len = 0;
            
    ///报单日期
    // TThostFtdcDateType char[9]
    const char *ExchangeExecOrderField_InsertDate = NULL;
    Py_ssize_t ExchangeExecOrderField_InsertDate_len = 0;
            
    ///插入时间
    // TThostFtdcTimeType char[9]
    const char *ExchangeExecOrderField_InsertTime = NULL;
    Py_ssize_t ExchangeExecOrderField_InsertTime_len = 0;
            
    ///撤销时间
    // TThostFtdcTimeType char[9]
    const char *ExchangeExecOrderField_CancelTime = NULL;
    Py_ssize_t ExchangeExecOrderField_CancelTime_len = 0;
            
    ///执行结果
    // TThostFtdcExecResultType char
    char ExchangeExecOrderField_ExecResult = 0;
            
    ///结算会员编号
    // TThostFtdcParticipantIDType char[11]
    const char *ExchangeExecOrderField_ClearingPartID = NULL;
    Py_ssize_t ExchangeExecOrderField_ClearingPartID_len = 0;
            
    ///序号
    // TThostFtdcSequenceNoType int
    int ExchangeExecOrderField_SequenceNo = 0;
        
    ///营业部编号
    // TThostFtdcBranchIDType char[9]
    const char *ExchangeExecOrderField_BranchID = NULL;
    Py_ssize_t ExchangeExecOrderField_BranchID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    const char *ExchangeExecOrderField_reserve2 = NULL;
    Py_ssize_t ExchangeExecOrderField_reserve2_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *ExchangeExecOrderField_MacAddress = NULL;
    Py_ssize_t ExchangeExecOrderField_MacAddress_len = 0;
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    const char *ExchangeExecOrderField_ExchangeInstID = NULL;
    Py_ssize_t ExchangeExecOrderField_ExchangeInstID_len = 0;
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *ExchangeExecOrderField_IPAddress = NULL;
    Py_ssize_t ExchangeExecOrderField_IPAddress_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iiy#ccccccy#y#y#y#y#y#iciy#iy#y#y#y#cy#iy#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iis#ccccccs#s#s#s#s#s#icis#is#s#s#s#cs#is#s#s#s#s#", (char **)kwlist
#endif

        , &ExchangeExecOrderField_Volume 
        , &ExchangeExecOrderField_RequestID 
        , &ExchangeExecOrderField_BusinessUnit, &ExchangeExecOrderField_BusinessUnit_len 
        , &ExchangeExecOrderField_OffsetFlag 
        , &ExchangeExecOrderField_HedgeFlag 
        , &ExchangeExecOrderField_ActionType 
        , &ExchangeExecOrderField_PosiDirection 
        , &ExchangeExecOrderField_ReservePositionFlag 
        , &ExchangeExecOrderField_CloseFlag 
        , &ExchangeExecOrderField_ExecOrderLocalID, &ExchangeExecOrderField_ExecOrderLocalID_len 
        , &ExchangeExecOrderField_ExchangeID, &ExchangeExecOrderField_ExchangeID_len 
        , &ExchangeExecOrderField_ParticipantID, &ExchangeExecOrderField_ParticipantID_len 
        , &ExchangeExecOrderField_ClientID, &ExchangeExecOrderField_ClientID_len 
        , &ExchangeExecOrderField_reserve1, &ExchangeExecOrderField_reserve1_len 
        , &ExchangeExecOrderField_TraderID, &ExchangeExecOrderField_TraderID_len 
        , &ExchangeExecOrderField_InstallID 
        , &ExchangeExecOrderField_OrderSubmitStatus 
        , &ExchangeExecOrderField_NotifySequence 
        , &ExchangeExecOrderField_TradingDay, &ExchangeExecOrderField_TradingDay_len 
        , &ExchangeExecOrderField_SettlementID 
        , &ExchangeExecOrderField_ExecOrderSysID, &ExchangeExecOrderField_ExecOrderSysID_len 
        , &ExchangeExecOrderField_InsertDate, &ExchangeExecOrderField_InsertDate_len 
        , &ExchangeExecOrderField_InsertTime, &ExchangeExecOrderField_InsertTime_len 
        , &ExchangeExecOrderField_CancelTime, &ExchangeExecOrderField_CancelTime_len 
        , &ExchangeExecOrderField_ExecResult 
        , &ExchangeExecOrderField_ClearingPartID, &ExchangeExecOrderField_ClearingPartID_len 
        , &ExchangeExecOrderField_SequenceNo 
        , &ExchangeExecOrderField_BranchID, &ExchangeExecOrderField_BranchID_len 
        , &ExchangeExecOrderField_reserve2, &ExchangeExecOrderField_reserve2_len 
        , &ExchangeExecOrderField_MacAddress, &ExchangeExecOrderField_MacAddress_len 
        , &ExchangeExecOrderField_ExchangeInstID, &ExchangeExecOrderField_ExchangeInstID_len 
        , &ExchangeExecOrderField_IPAddress, &ExchangeExecOrderField_IPAddress_len 


    )) {
        return -1;
    }


    ///数量
    // TThostFtdcVolumeType int
    self->data.Volume = ExchangeExecOrderField_Volume;
        
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = ExchangeExecOrderField_RequestID;
        
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    if( ExchangeExecOrderField_BusinessUnit != NULL ) {
        if(ExchangeExecOrderField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", ExchangeExecOrderField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
            return -1;
        }
        // memset(self->data.BusinessUnit, 0, sizeof(self->data.BusinessUnit));
        // memcpy(self->data.BusinessUnit, ExchangeExecOrderField_BusinessUnit, ExchangeExecOrderField_BusinessUnit_len);        
        strncpy(self->data.BusinessUnit, ExchangeExecOrderField_BusinessUnit, sizeof(self->data.BusinessUnit) );
        ExchangeExecOrderField_BusinessUnit = NULL;
    }
            
    ///开平标志
    // TThostFtdcOffsetFlagType char
    self->data.OffsetFlag = ExchangeExecOrderField_OffsetFlag;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    self->data.HedgeFlag = ExchangeExecOrderField_HedgeFlag;
            
    ///执行类型
    // TThostFtdcActionTypeType char
    self->data.ActionType = ExchangeExecOrderField_ActionType;
            
    ///保留头寸申请的持仓方向
    // TThostFtdcPosiDirectionType char
    self->data.PosiDirection = ExchangeExecOrderField_PosiDirection;
            
    ///期权行权后是否保留期货头寸的标记,该字段已废弃
    // TThostFtdcExecOrderPositionFlagType char
    self->data.ReservePositionFlag = ExchangeExecOrderField_ReservePositionFlag;
            
    ///期权行权后生成的头寸是否自动平仓
    // TThostFtdcExecOrderCloseFlagType char
    self->data.CloseFlag = ExchangeExecOrderField_CloseFlag;
            
    ///本地执行宣告编号
    // TThostFtdcOrderLocalIDType char[13]
    if( ExchangeExecOrderField_ExecOrderLocalID != NULL ) {
        if(ExchangeExecOrderField_ExecOrderLocalID_len > (Py_ssize_t)sizeof(self->data.ExecOrderLocalID)) {
            PyErr_Format(PyExc_ValueError, "ExecOrderLocalID too long: length=%zd (max allowed is %zd)", ExchangeExecOrderField_ExecOrderLocalID_len, (Py_ssize_t)sizeof(self->data.ExecOrderLocalID));
            return -1;
        }
        // memset(self->data.ExecOrderLocalID, 0, sizeof(self->data.ExecOrderLocalID));
        // memcpy(self->data.ExecOrderLocalID, ExchangeExecOrderField_ExecOrderLocalID, ExchangeExecOrderField_ExecOrderLocalID_len);        
        strncpy(self->data.ExecOrderLocalID, ExchangeExecOrderField_ExecOrderLocalID, sizeof(self->data.ExecOrderLocalID) );
        ExchangeExecOrderField_ExecOrderLocalID = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( ExchangeExecOrderField_ExchangeID != NULL ) {
        if(ExchangeExecOrderField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", ExchangeExecOrderField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, ExchangeExecOrderField_ExchangeID, ExchangeExecOrderField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, ExchangeExecOrderField_ExchangeID, sizeof(self->data.ExchangeID) );
        ExchangeExecOrderField_ExchangeID = NULL;
    }
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    if( ExchangeExecOrderField_ParticipantID != NULL ) {
        if(ExchangeExecOrderField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", ExchangeExecOrderField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
            return -1;
        }
        // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
        // memcpy(self->data.ParticipantID, ExchangeExecOrderField_ParticipantID, ExchangeExecOrderField_ParticipantID_len);        
        strncpy(self->data.ParticipantID, ExchangeExecOrderField_ParticipantID, sizeof(self->data.ParticipantID) );
        ExchangeExecOrderField_ParticipantID = NULL;
    }
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    if( ExchangeExecOrderField_ClientID != NULL ) {
        if(ExchangeExecOrderField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", ExchangeExecOrderField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
            return -1;
        }
        // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
        // memcpy(self->data.ClientID, ExchangeExecOrderField_ClientID, ExchangeExecOrderField_ClientID_len);        
        strncpy(self->data.ClientID, ExchangeExecOrderField_ClientID, sizeof(self->data.ClientID) );
        ExchangeExecOrderField_ClientID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    if( ExchangeExecOrderField_reserve1 != NULL ) {
        if(ExchangeExecOrderField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", ExchangeExecOrderField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, ExchangeExecOrderField_reserve1, ExchangeExecOrderField_reserve1_len);        
        strncpy(self->data.reserve1, ExchangeExecOrderField_reserve1, sizeof(self->data.reserve1) );
        ExchangeExecOrderField_reserve1 = NULL;
    }
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    if( ExchangeExecOrderField_TraderID != NULL ) {
        if(ExchangeExecOrderField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", ExchangeExecOrderField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
            return -1;
        }
        // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
        // memcpy(self->data.TraderID, ExchangeExecOrderField_TraderID, ExchangeExecOrderField_TraderID_len);        
        strncpy(self->data.TraderID, ExchangeExecOrderField_TraderID, sizeof(self->data.TraderID) );
        ExchangeExecOrderField_TraderID = NULL;
    }
            
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = ExchangeExecOrderField_InstallID;
        
    ///执行宣告提交状态
    // TThostFtdcOrderSubmitStatusType char
    self->data.OrderSubmitStatus = ExchangeExecOrderField_OrderSubmitStatus;
            
    ///报单提示序号
    // TThostFtdcSequenceNoType int
    self->data.NotifySequence = ExchangeExecOrderField_NotifySequence;
        
    ///交易日
    // TThostFtdcDateType char[9]
    if( ExchangeExecOrderField_TradingDay != NULL ) {
        if(ExchangeExecOrderField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", ExchangeExecOrderField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, ExchangeExecOrderField_TradingDay, ExchangeExecOrderField_TradingDay_len);        
        strncpy(self->data.TradingDay, ExchangeExecOrderField_TradingDay, sizeof(self->data.TradingDay) );
        ExchangeExecOrderField_TradingDay = NULL;
    }
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    self->data.SettlementID = ExchangeExecOrderField_SettlementID;
        
    ///执行宣告编号
    // TThostFtdcExecOrderSysIDType char[21]
    if( ExchangeExecOrderField_ExecOrderSysID != NULL ) {
        if(ExchangeExecOrderField_ExecOrderSysID_len > (Py_ssize_t)sizeof(self->data.ExecOrderSysID)) {
            PyErr_Format(PyExc_ValueError, "ExecOrderSysID too long: length=%zd (max allowed is %zd)", ExchangeExecOrderField_ExecOrderSysID_len, (Py_ssize_t)sizeof(self->data.ExecOrderSysID));
            return -1;
        }
        // memset(self->data.ExecOrderSysID, 0, sizeof(self->data.ExecOrderSysID));
        // memcpy(self->data.ExecOrderSysID, ExchangeExecOrderField_ExecOrderSysID, ExchangeExecOrderField_ExecOrderSysID_len);        
        strncpy(self->data.ExecOrderSysID, ExchangeExecOrderField_ExecOrderSysID, sizeof(self->data.ExecOrderSysID) );
        ExchangeExecOrderField_ExecOrderSysID = NULL;
    }
            
    ///报单日期
    // TThostFtdcDateType char[9]
    if( ExchangeExecOrderField_InsertDate != NULL ) {
        if(ExchangeExecOrderField_InsertDate_len > (Py_ssize_t)sizeof(self->data.InsertDate)) {
            PyErr_Format(PyExc_ValueError, "InsertDate too long: length=%zd (max allowed is %zd)", ExchangeExecOrderField_InsertDate_len, (Py_ssize_t)sizeof(self->data.InsertDate));
            return -1;
        }
        // memset(self->data.InsertDate, 0, sizeof(self->data.InsertDate));
        // memcpy(self->data.InsertDate, ExchangeExecOrderField_InsertDate, ExchangeExecOrderField_InsertDate_len);        
        strncpy(self->data.InsertDate, ExchangeExecOrderField_InsertDate, sizeof(self->data.InsertDate) );
        ExchangeExecOrderField_InsertDate = NULL;
    }
            
    ///插入时间
    // TThostFtdcTimeType char[9]
    if( ExchangeExecOrderField_InsertTime != NULL ) {
        if(ExchangeExecOrderField_InsertTime_len > (Py_ssize_t)sizeof(self->data.InsertTime)) {
            PyErr_Format(PyExc_ValueError, "InsertTime too long: length=%zd (max allowed is %zd)", ExchangeExecOrderField_InsertTime_len, (Py_ssize_t)sizeof(self->data.InsertTime));
            return -1;
        }
        // memset(self->data.InsertTime, 0, sizeof(self->data.InsertTime));
        // memcpy(self->data.InsertTime, ExchangeExecOrderField_InsertTime, ExchangeExecOrderField_InsertTime_len);        
        strncpy(self->data.InsertTime, ExchangeExecOrderField_InsertTime, sizeof(self->data.InsertTime) );
        ExchangeExecOrderField_InsertTime = NULL;
    }
            
    ///撤销时间
    // TThostFtdcTimeType char[9]
    if( ExchangeExecOrderField_CancelTime != NULL ) {
        if(ExchangeExecOrderField_CancelTime_len > (Py_ssize_t)sizeof(self->data.CancelTime)) {
            PyErr_Format(PyExc_ValueError, "CancelTime too long: length=%zd (max allowed is %zd)", ExchangeExecOrderField_CancelTime_len, (Py_ssize_t)sizeof(self->data.CancelTime));
            return -1;
        }
        // memset(self->data.CancelTime, 0, sizeof(self->data.CancelTime));
        // memcpy(self->data.CancelTime, ExchangeExecOrderField_CancelTime, ExchangeExecOrderField_CancelTime_len);        
        strncpy(self->data.CancelTime, ExchangeExecOrderField_CancelTime, sizeof(self->data.CancelTime) );
        ExchangeExecOrderField_CancelTime = NULL;
    }
            
    ///执行结果
    // TThostFtdcExecResultType char
    self->data.ExecResult = ExchangeExecOrderField_ExecResult;
            
    ///结算会员编号
    // TThostFtdcParticipantIDType char[11]
    if( ExchangeExecOrderField_ClearingPartID != NULL ) {
        if(ExchangeExecOrderField_ClearingPartID_len > (Py_ssize_t)sizeof(self->data.ClearingPartID)) {
            PyErr_Format(PyExc_ValueError, "ClearingPartID too long: length=%zd (max allowed is %zd)", ExchangeExecOrderField_ClearingPartID_len, (Py_ssize_t)sizeof(self->data.ClearingPartID));
            return -1;
        }
        // memset(self->data.ClearingPartID, 0, sizeof(self->data.ClearingPartID));
        // memcpy(self->data.ClearingPartID, ExchangeExecOrderField_ClearingPartID, ExchangeExecOrderField_ClearingPartID_len);        
        strncpy(self->data.ClearingPartID, ExchangeExecOrderField_ClearingPartID, sizeof(self->data.ClearingPartID) );
        ExchangeExecOrderField_ClearingPartID = NULL;
    }
            
    ///序号
    // TThostFtdcSequenceNoType int
    self->data.SequenceNo = ExchangeExecOrderField_SequenceNo;
        
    ///营业部编号
    // TThostFtdcBranchIDType char[9]
    if( ExchangeExecOrderField_BranchID != NULL ) {
        if(ExchangeExecOrderField_BranchID_len > (Py_ssize_t)sizeof(self->data.BranchID)) {
            PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is %zd)", ExchangeExecOrderField_BranchID_len, (Py_ssize_t)sizeof(self->data.BranchID));
            return -1;
        }
        // memset(self->data.BranchID, 0, sizeof(self->data.BranchID));
        // memcpy(self->data.BranchID, ExchangeExecOrderField_BranchID, ExchangeExecOrderField_BranchID_len);        
        strncpy(self->data.BranchID, ExchangeExecOrderField_BranchID, sizeof(self->data.BranchID) );
        ExchangeExecOrderField_BranchID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    if( ExchangeExecOrderField_reserve2 != NULL ) {
        if(ExchangeExecOrderField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", ExchangeExecOrderField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
            return -1;
        }
        // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
        // memcpy(self->data.reserve2, ExchangeExecOrderField_reserve2, ExchangeExecOrderField_reserve2_len);        
        strncpy(self->data.reserve2, ExchangeExecOrderField_reserve2, sizeof(self->data.reserve2) );
        ExchangeExecOrderField_reserve2 = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( ExchangeExecOrderField_MacAddress != NULL ) {
        if(ExchangeExecOrderField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", ExchangeExecOrderField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, ExchangeExecOrderField_MacAddress, ExchangeExecOrderField_MacAddress_len);        
        strncpy(self->data.MacAddress, ExchangeExecOrderField_MacAddress, sizeof(self->data.MacAddress) );
        ExchangeExecOrderField_MacAddress = NULL;
    }
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    if( ExchangeExecOrderField_ExchangeInstID != NULL ) {
        if(ExchangeExecOrderField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", ExchangeExecOrderField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
            return -1;
        }
        // memset(self->data.ExchangeInstID, 0, sizeof(self->data.ExchangeInstID));
        // memcpy(self->data.ExchangeInstID, ExchangeExecOrderField_ExchangeInstID, ExchangeExecOrderField_ExchangeInstID_len);        
        strncpy(self->data.ExchangeInstID, ExchangeExecOrderField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
        ExchangeExecOrderField_ExchangeInstID = NULL;
    }
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( ExchangeExecOrderField_IPAddress != NULL ) {
        if(ExchangeExecOrderField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", ExchangeExecOrderField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, ExchangeExecOrderField_IPAddress, ExchangeExecOrderField_IPAddress_len);        
        strncpy(self->data.IPAddress, ExchangeExecOrderField_IPAddress, sizeof(self->data.IPAddress) );
        ExchangeExecOrderField_IPAddress = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcExchangeExecOrderField_dealloc(PyCThostFtdcExchangeExecOrderField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcExchangeExecOrderField_repr(PyCThostFtdcExchangeExecOrderField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:i,s:i,s:y,s:c,s:c,s:c,s:c,s:c,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:i,s:y,s:y,s:y,s:y,s:c,s:y,s:i,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:i,s:i,s:s,s:c,s:c,s:c,s:c,s:c,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:i,s:s,s:s,s:s,s:s,s:c,s:s,s:i,s:s,s:s,s:s,s:s,s:s}"
#endif

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
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
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
        ,"BranchID", self->data.BranchID//, (Py_ssize_t)sizeof(self->data.BranchID) 
        ,"reserve2", self->data.reserve2//, (Py_ssize_t)sizeof(self->data.reserve2) 
        ,"MacAddress", self->data.MacAddress//, (Py_ssize_t)sizeof(self->data.MacAddress) 
        ,"ExchangeInstID", self->data.ExchangeInstID//, (Py_ssize_t)sizeof(self->data.ExchangeInstID) 
        ,"IPAddress", self->data.IPAddress//, (Py_ssize_t)sizeof(self->data.IPAddress) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeExecOrderField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///数量
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcExchangeExecOrderField_get_Volume(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.Volume);
#else
    return PyInt_FromLong(self->data.Volume);
#endif
}

///数量
// TThostFtdcVolumeType int
static int PyCThostFtdcExchangeExecOrderField_set_Volume(PyCThostFtdcExchangeExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeExecOrderField_get_RequestID(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcExchangeExecOrderField_set_RequestID(PyCThostFtdcExchangeExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeExecOrderField_get_BusinessUnit(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BusinessUnit, (Py_ssize_t)sizeof(self->data.BusinessUnit));
    return PyBytes_FromString(self->data.BusinessUnit);
}

///业务单元
// TThostFtdcBusinessUnitType char[21]
static int PyCThostFtdcExchangeExecOrderField_set_BusinessUnit(PyCThostFtdcExchangeExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeExecOrderField_get_OffsetFlag(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OffsetFlag), 1);
}

///开平标志
// TThostFtdcOffsetFlagType char
static int PyCThostFtdcExchangeExecOrderField_set_OffsetFlag(PyCThostFtdcExchangeExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeExecOrderField_get_HedgeFlag(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

///投机套保标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcExchangeExecOrderField_set_HedgeFlag(PyCThostFtdcExchangeExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeExecOrderField_get_ActionType(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionType), 1);
}

///执行类型
// TThostFtdcActionTypeType char
static int PyCThostFtdcExchangeExecOrderField_set_ActionType(PyCThostFtdcExchangeExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeExecOrderField_get_PosiDirection(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.PosiDirection), 1);
}

///保留头寸申请的持仓方向
// TThostFtdcPosiDirectionType char
static int PyCThostFtdcExchangeExecOrderField_set_PosiDirection(PyCThostFtdcExchangeExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeExecOrderField_get_ReservePositionFlag(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ReservePositionFlag), 1);
}

///期权行权后是否保留期货头寸的标记,该字段已废弃
// TThostFtdcExecOrderPositionFlagType char
static int PyCThostFtdcExchangeExecOrderField_set_ReservePositionFlag(PyCThostFtdcExchangeExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeExecOrderField_get_CloseFlag(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.CloseFlag), 1);
}

///期权行权后生成的头寸是否自动平仓
// TThostFtdcExecOrderCloseFlagType char
static int PyCThostFtdcExchangeExecOrderField_set_CloseFlag(PyCThostFtdcExchangeExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeExecOrderField_get_ExecOrderLocalID(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExecOrderLocalID, (Py_ssize_t)sizeof(self->data.ExecOrderLocalID));
    return PyBytes_FromString(self->data.ExecOrderLocalID);
}

///本地执行宣告编号
// TThostFtdcOrderLocalIDType char[13]
static int PyCThostFtdcExchangeExecOrderField_set_ExecOrderLocalID(PyCThostFtdcExchangeExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeExecOrderField_get_ExchangeID(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcExchangeExecOrderField_set_ExchangeID(PyCThostFtdcExchangeExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeExecOrderField_get_ParticipantID(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParticipantID, (Py_ssize_t)sizeof(self->data.ParticipantID));
    return PyBytes_FromString(self->data.ParticipantID);
}

///会员代码
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcExchangeExecOrderField_set_ParticipantID(PyCThostFtdcExchangeExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeExecOrderField_get_ClientID(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientID, (Py_ssize_t)sizeof(self->data.ClientID));
    return PyBytes_FromString(self->data.ClientID);
}

///客户代码
// TThostFtdcClientIDType char[11]
static int PyCThostFtdcExchangeExecOrderField_set_ClientID(PyCThostFtdcExchangeExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeExecOrderField_get_reserve1(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldExchangeInstIDType char[31]
static int PyCThostFtdcExchangeExecOrderField_set_reserve1(PyCThostFtdcExchangeExecOrderField *self, PyObject* val, void *closure) {
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
            
///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static PyObject *PyCThostFtdcExchangeExecOrderField_get_TraderID(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TraderID, (Py_ssize_t)sizeof(self->data.TraderID));
    return PyBytes_FromString(self->data.TraderID);
}

///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static int PyCThostFtdcExchangeExecOrderField_set_TraderID(PyCThostFtdcExchangeExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeExecOrderField_get_InstallID(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcExchangeExecOrderField_set_InstallID(PyCThostFtdcExchangeExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeExecOrderField_get_OrderSubmitStatus(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OrderSubmitStatus), 1);
}

///执行宣告提交状态
// TThostFtdcOrderSubmitStatusType char
static int PyCThostFtdcExchangeExecOrderField_set_OrderSubmitStatus(PyCThostFtdcExchangeExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeExecOrderField_get_NotifySequence(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.NotifySequence);
#else
    return PyInt_FromLong(self->data.NotifySequence);
#endif
}

///报单提示序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcExchangeExecOrderField_set_NotifySequence(PyCThostFtdcExchangeExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeExecOrderField_get_TradingDay(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcExchangeExecOrderField_set_TradingDay(PyCThostFtdcExchangeExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeExecOrderField_get_SettlementID(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SettlementID);
#else
    return PyInt_FromLong(self->data.SettlementID);
#endif
}

///结算编号
// TThostFtdcSettlementIDType int
static int PyCThostFtdcExchangeExecOrderField_set_SettlementID(PyCThostFtdcExchangeExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeExecOrderField_get_ExecOrderSysID(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExecOrderSysID, (Py_ssize_t)sizeof(self->data.ExecOrderSysID));
    return PyBytes_FromString(self->data.ExecOrderSysID);
}

///执行宣告编号
// TThostFtdcExecOrderSysIDType char[21]
static int PyCThostFtdcExchangeExecOrderField_set_ExecOrderSysID(PyCThostFtdcExchangeExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeExecOrderField_get_InsertDate(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InsertDate, (Py_ssize_t)sizeof(self->data.InsertDate));
    return PyBytes_FromString(self->data.InsertDate);
}

///报单日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcExchangeExecOrderField_set_InsertDate(PyCThostFtdcExchangeExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeExecOrderField_get_InsertTime(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InsertTime, (Py_ssize_t)sizeof(self->data.InsertTime));
    return PyBytes_FromString(self->data.InsertTime);
}

///插入时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcExchangeExecOrderField_set_InsertTime(PyCThostFtdcExchangeExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeExecOrderField_get_CancelTime(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CancelTime, (Py_ssize_t)sizeof(self->data.CancelTime));
    return PyBytes_FromString(self->data.CancelTime);
}

///撤销时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcExchangeExecOrderField_set_CancelTime(PyCThostFtdcExchangeExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeExecOrderField_get_ExecResult(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ExecResult), 1);
}

///执行结果
// TThostFtdcExecResultType char
static int PyCThostFtdcExchangeExecOrderField_set_ExecResult(PyCThostFtdcExchangeExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeExecOrderField_get_ClearingPartID(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClearingPartID, (Py_ssize_t)sizeof(self->data.ClearingPartID));
    return PyBytes_FromString(self->data.ClearingPartID);
}

///结算会员编号
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcExchangeExecOrderField_set_ClearingPartID(PyCThostFtdcExchangeExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeExecOrderField_get_SequenceNo(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SequenceNo);
#else
    return PyInt_FromLong(self->data.SequenceNo);
#endif
}

///序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcExchangeExecOrderField_set_SequenceNo(PyCThostFtdcExchangeExecOrderField *self, PyObject* val, void *closure) {
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
        
///营业部编号
// TThostFtdcBranchIDType char[9]
static PyObject *PyCThostFtdcExchangeExecOrderField_get_BranchID(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BranchID, (Py_ssize_t)sizeof(self->data.BranchID));
    return PyBytes_FromString(self->data.BranchID);
}

///营业部编号
// TThostFtdcBranchIDType char[9]
static int PyCThostFtdcExchangeExecOrderField_set_BranchID(PyCThostFtdcExchangeExecOrderField *self, PyObject* val, void *closure) {
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
            
///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static PyObject *PyCThostFtdcExchangeExecOrderField_get_reserve2(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve2, (Py_ssize_t)sizeof(self->data.reserve2));
    return PyBytes_FromString(self->data.reserve2);
}

///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static int PyCThostFtdcExchangeExecOrderField_set_reserve2(PyCThostFtdcExchangeExecOrderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 16 bytes");
        return -1;
    }
    // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
    // memcpy(self->data.reserve2, buf, len);
    strncpy(self->data.reserve2, buf, sizeof(self->data.reserve2));
    return 0;
}
            
///Mac地址
// TThostFtdcMacAddressType char[21]
static PyObject *PyCThostFtdcExchangeExecOrderField_get_MacAddress(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcExchangeExecOrderField_set_MacAddress(PyCThostFtdcExchangeExecOrderField *self, PyObject* val, void *closure) {
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
            
///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static PyObject *PyCThostFtdcExchangeExecOrderField_get_ExchangeInstID(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeInstID, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
    return PyBytes_FromString(self->data.ExchangeInstID);
}

///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static int PyCThostFtdcExchangeExecOrderField_set_ExchangeInstID(PyCThostFtdcExchangeExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeExecOrderField_get_IPAddress(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcExchangeExecOrderField_set_IPAddress(PyCThostFtdcExchangeExecOrderField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcExchangeExecOrderField_getset[] = {
    ///数量 
    {(char *)"Volume", (getter)PyCThostFtdcExchangeExecOrderField_get_Volume, (setter)PyCThostFtdcExchangeExecOrderField_set_Volume, (char *)"Volume", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcExchangeExecOrderField_get_RequestID, (setter)PyCThostFtdcExchangeExecOrderField_set_RequestID, (char *)"RequestID", NULL},
    ///业务单元 
    {(char *)"BusinessUnit", (getter)PyCThostFtdcExchangeExecOrderField_get_BusinessUnit, (setter)PyCThostFtdcExchangeExecOrderField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
    ///开平标志 
    {(char *)"OffsetFlag", (getter)PyCThostFtdcExchangeExecOrderField_get_OffsetFlag, (setter)PyCThostFtdcExchangeExecOrderField_set_OffsetFlag, (char *)"OffsetFlag", NULL},
    ///投机套保标志 
    {(char *)"HedgeFlag", (getter)PyCThostFtdcExchangeExecOrderField_get_HedgeFlag, (setter)PyCThostFtdcExchangeExecOrderField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
    ///执行类型 
    {(char *)"ActionType", (getter)PyCThostFtdcExchangeExecOrderField_get_ActionType, (setter)PyCThostFtdcExchangeExecOrderField_set_ActionType, (char *)"ActionType", NULL},
    ///保留头寸申请的持仓方向 
    {(char *)"PosiDirection", (getter)PyCThostFtdcExchangeExecOrderField_get_PosiDirection, (setter)PyCThostFtdcExchangeExecOrderField_set_PosiDirection, (char *)"PosiDirection", NULL},
    ///期权行权后是否保留期货头寸的标记,该字段已废弃 
    {(char *)"ReservePositionFlag", (getter)PyCThostFtdcExchangeExecOrderField_get_ReservePositionFlag, (setter)PyCThostFtdcExchangeExecOrderField_set_ReservePositionFlag, (char *)"ReservePositionFlag", NULL},
    ///期权行权后生成的头寸是否自动平仓 
    {(char *)"CloseFlag", (getter)PyCThostFtdcExchangeExecOrderField_get_CloseFlag, (setter)PyCThostFtdcExchangeExecOrderField_set_CloseFlag, (char *)"CloseFlag", NULL},
    ///本地执行宣告编号 
    {(char *)"ExecOrderLocalID", (getter)PyCThostFtdcExchangeExecOrderField_get_ExecOrderLocalID, (setter)PyCThostFtdcExchangeExecOrderField_set_ExecOrderLocalID, (char *)"ExecOrderLocalID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcExchangeExecOrderField_get_ExchangeID, (setter)PyCThostFtdcExchangeExecOrderField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///会员代码 
    {(char *)"ParticipantID", (getter)PyCThostFtdcExchangeExecOrderField_get_ParticipantID, (setter)PyCThostFtdcExchangeExecOrderField_set_ParticipantID, (char *)"ParticipantID", NULL},
    ///客户代码 
    {(char *)"ClientID", (getter)PyCThostFtdcExchangeExecOrderField_get_ClientID, (setter)PyCThostFtdcExchangeExecOrderField_set_ClientID, (char *)"ClientID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcExchangeExecOrderField_get_reserve1, (setter)PyCThostFtdcExchangeExecOrderField_set_reserve1, (char *)"reserve1", NULL},
    ///交易所交易员代码 
    {(char *)"TraderID", (getter)PyCThostFtdcExchangeExecOrderField_get_TraderID, (setter)PyCThostFtdcExchangeExecOrderField_set_TraderID, (char *)"TraderID", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcExchangeExecOrderField_get_InstallID, (setter)PyCThostFtdcExchangeExecOrderField_set_InstallID, (char *)"InstallID", NULL},
    ///执行宣告提交状态 
    {(char *)"OrderSubmitStatus", (getter)PyCThostFtdcExchangeExecOrderField_get_OrderSubmitStatus, (setter)PyCThostFtdcExchangeExecOrderField_set_OrderSubmitStatus, (char *)"OrderSubmitStatus", NULL},
    ///报单提示序号 
    {(char *)"NotifySequence", (getter)PyCThostFtdcExchangeExecOrderField_get_NotifySequence, (setter)PyCThostFtdcExchangeExecOrderField_set_NotifySequence, (char *)"NotifySequence", NULL},
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcExchangeExecOrderField_get_TradingDay, (setter)PyCThostFtdcExchangeExecOrderField_set_TradingDay, (char *)"TradingDay", NULL},
    ///结算编号 
    {(char *)"SettlementID", (getter)PyCThostFtdcExchangeExecOrderField_get_SettlementID, (setter)PyCThostFtdcExchangeExecOrderField_set_SettlementID, (char *)"SettlementID", NULL},
    ///执行宣告编号 
    {(char *)"ExecOrderSysID", (getter)PyCThostFtdcExchangeExecOrderField_get_ExecOrderSysID, (setter)PyCThostFtdcExchangeExecOrderField_set_ExecOrderSysID, (char *)"ExecOrderSysID", NULL},
    ///报单日期 
    {(char *)"InsertDate", (getter)PyCThostFtdcExchangeExecOrderField_get_InsertDate, (setter)PyCThostFtdcExchangeExecOrderField_set_InsertDate, (char *)"InsertDate", NULL},
    ///插入时间 
    {(char *)"InsertTime", (getter)PyCThostFtdcExchangeExecOrderField_get_InsertTime, (setter)PyCThostFtdcExchangeExecOrderField_set_InsertTime, (char *)"InsertTime", NULL},
    ///撤销时间 
    {(char *)"CancelTime", (getter)PyCThostFtdcExchangeExecOrderField_get_CancelTime, (setter)PyCThostFtdcExchangeExecOrderField_set_CancelTime, (char *)"CancelTime", NULL},
    ///执行结果 
    {(char *)"ExecResult", (getter)PyCThostFtdcExchangeExecOrderField_get_ExecResult, (setter)PyCThostFtdcExchangeExecOrderField_set_ExecResult, (char *)"ExecResult", NULL},
    ///结算会员编号 
    {(char *)"ClearingPartID", (getter)PyCThostFtdcExchangeExecOrderField_get_ClearingPartID, (setter)PyCThostFtdcExchangeExecOrderField_set_ClearingPartID, (char *)"ClearingPartID", NULL},
    ///序号 
    {(char *)"SequenceNo", (getter)PyCThostFtdcExchangeExecOrderField_get_SequenceNo, (setter)PyCThostFtdcExchangeExecOrderField_set_SequenceNo, (char *)"SequenceNo", NULL},
    ///营业部编号 
    {(char *)"BranchID", (getter)PyCThostFtdcExchangeExecOrderField_get_BranchID, (setter)PyCThostFtdcExchangeExecOrderField_set_BranchID, (char *)"BranchID", NULL},
    ///保留的无效字段 
    {(char *)"reserve2", (getter)PyCThostFtdcExchangeExecOrderField_get_reserve2, (setter)PyCThostFtdcExchangeExecOrderField_set_reserve2, (char *)"reserve2", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcExchangeExecOrderField_get_MacAddress, (setter)PyCThostFtdcExchangeExecOrderField_set_MacAddress, (char *)"MacAddress", NULL},
    ///合约在交易所的代码 
    {(char *)"ExchangeInstID", (getter)PyCThostFtdcExchangeExecOrderField_get_ExchangeInstID, (setter)PyCThostFtdcExchangeExecOrderField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcExchangeExecOrderField_get_IPAddress, (setter)PyCThostFtdcExchangeExecOrderField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcExchangeExecOrderFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcExchangeExecOrderField",	/* tp_name */
	sizeof(PyCThostFtdcExchangeExecOrderField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcExchangeExecOrderField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcExchangeExecOrderField_repr,   /* tp_repr */
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
	"CThostFtdcExchangeExecOrderField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcExchangeExecOrderField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcExchangeExecOrderField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcExchangeExecOrderField_new,       /* tp_new */
};

int PyCThostFtdcExchangeExecOrderFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcExchangeExecOrderField  */
	if (PyType_Ready(&PyCThostFtdcExchangeExecOrderFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcExchangeExecOrderField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcExchangeExecOrderFieldType);
    if( PyModule_AddObject(module, "CThostFtdcExchangeExecOrderField", (PyObject *)&PyCThostFtdcExchangeExecOrderFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeExecOrderField to module");
        Py_DECREF(&PyCThostFtdcExchangeExecOrderFieldType);
		return -1;
    }

    return 0;
}
